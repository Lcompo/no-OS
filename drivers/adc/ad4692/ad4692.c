/***************************************************************************//**
 *   @file   ad4692.c
 *   @brief  Implementation of ad4692 Driver.
 *   @author Radu Sabau (radu.sabau@analog.com)
********************************************************************************
 * Copyright 2024(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ad4692.h"
#include "no_os_delay.h"
#include "no_os_error.h"
#include "no_os_util.h"
#include "no_os_alloc.h"

static int ad4692_resolution[] = {
	[ID_AD4692] = 16,
	[ID_AD4691] = 18,
	[ID_AD4694] = 14,
	[ID_AD4693] = 20,
};

static int ad4692_max_rate[] = {
	[ID_AD4692] = 1000000,
	[ID_AD4691] = 500000,
	[ID_AD4694] = 1000000,
	[ID_AD4693] = 500000,
};

static int ad4692_num_channels[] = {
	[ID_AD4692] = 16,
	[ID_AD4691] = 16,
	[ID_AD4694] = 8,
	[ID_AD4693] = 8,
};

int ad4692_reg_read(struct ad4692_desc *desc, uint32_t reg, uint32_t *val)
{
	struct no_os_spi_msg xfer = {
		.tx_buff = desc->buff,
		.rx_buff = desc->buff,
		.bytes_number = AD4692_FRAME_SIZE,
		.cs_change = 1,
	};
	int ret;

	memset(desc->buff, 0, xfer.bytes_number);
	desc->buff[0] = no_os_field_get(AD4692_ADDR_UPPER_BYTE_MASK, reg) |
			no_os_field_prep(AD4692_RW_ADDR_MASK, 1);
	desc->buff[1] = no_os_field_get(AD4692_ADDR_LOWER_BYTE_MASK, reg);

	ret = no_os_spi_transfer(desc->comm_desc, &xfer, 1);
	if (ret)
		return ret;

	*val = no_os_get_unaligned_be32(&desc->buff[2]);

	return 0;
}

int ad4692_reg_write(struct ad4692_desc *desc, uint32_t reg, uint32_t val)
{
	struct no_os_spi_msg xfer = {
		.tx_buff = desc->buff,
		.bytes_number = AD4692_FRAME_SIZE,
		.cs_change = 1,
	};

	memset(desc->buff, 0, xfer.bytes_number);
	desc->buff[0] = no_os_field_get(AD4692_ADDR_UPPER_BYTE_MASK, reg) |
			no_os_field_get(AD4692_RW_ADDR_MASK, 0);
	desc->buff[1] = no_os_field_get(AD4692_ADDR_LOWER_BYTE_MASK, reg);

	no_os_put_unaligned_le16(val, &desc->buff[2]);

	return no_os_spi_transfer(desc->comm_desc, &xfer, 1);
}

int ad4692_reg_update(struct ad4692_desc *desc, uint32_t reg, uint32_t mask,
		      uint32_t val)
{
	int ret;
	uint32_t reg_val = 0;

	ret = ad4692_reg_read(desc, reg, &reg_val);
	if (ret)
		return ret;

	reg_val &= ~mask;
	reg_val |= mask & val;

	return ad4692_reg_write(desc, reg, reg_val);
}

int ad4692_std_seq_ch(struct ad4692_desc *desc, uint16_t ch_mask, bool std,
		      uint8_t len)
{
	int ret;

	if (std) {
		ret = ad4692_reg_write(desc, AD4692_SEQUENCER_CONTROL_REG,
				       AD4692_STANDARD_SEQ_MODE);
		if (ret)
			return ret;

		return ad4692_reg_write(desc, AD4692_STD_SEQ_CONFIG, ch_mask);
	}
	else {
		return ad4692_reg_write(desc, AD4692_SEQUENCER_CONTROL_REG,
					no_os_field_prep(AD4692_ADV_SEQ_MODE_MASK, len));
	}
}

int ad4692_get_ch(struct ad4692_desc *desc, uint8_t ch_index, uint32_t *val)
{
	int ret;

	ret = ad4692_reg_read(desc, desc->resolution > 16 ? AD4692_ACC24B(ch_index) : AD4692_ACC16B(ch_index), val);
	if (ret)
		return ret;

	/* SPI diagram TBD. */
	/* if frame_size is constant of 6 bytes. */
	*val = (desc->resolution > 16) ? no_os_field_get(AD4692_24B_MASK, *val) : no_os_field_get(AD4692_16B_MASK, *val);

	/* if not, no action is required here. */

	return 0;
}

int ad4692_gpio_set(struct ad4692_desc *desc, enum ad4692_gpio_num index,
		    enum ad4692_gpio_sel mode)
{
	switch (index) {
	case AD4692_GPIO0:
		return ad4692_reg_update(desc, AD4692_GPIO_MODE1_REG, AD4692_GPIO0_MASK, mode);
	case AD4692_GPIO1:
		return ad4692_reg_update(desc, AD4692_GPIO_MODE1_REG, AD4692_GPIO1_MASK, mode);
	case AD4692_GPIO2:
		return ad4692_reg_update(desc, AD4692_GPIO_MODE2_REG, AD4692_GPIO2_MASK, mode);
	case AD4692_GPIO3:
		return ad4692_reg_update(desc, AD4692_GPIO_MODE2_REG, AD4692_GPIO3_MASK, mode);
	default:
		return -EINVAL;
	}
}

int ad4692_gpio_get_value(struct ad4692_desc *desc, enum ad4692_gpio_num index,
			  enum no_os_gpio_values *value)
{
	enum ad4692_gpio_sel mode;
	uint32_t reg_val;
	int ret;

	ret = ad4692_reg_read(desc, index / 2 ? AD4692_GPIO_MODE2_REG : AD4692_GPIO_MODE1_REG, reg_val);
	if (ret)
		return ret;

	mode = no_os_field_get(index % 2 ? AD4692_GPIO1_MASK : AD4692_GPIO0_MASK, reg_val);
	if (mode != AD4692_GPIO_INPUT)
		return -EINVAL;

	ret = ad4692_reg_read(desc, AD4692_GPIO_READ_REG, &reg_val);
	if (ret)
		return ret;

	*value = no_os_field_get(AD4692_GP_READ_MASK(index), reg_val);

	return 0;
}

int ad4692_init(struct ad4692_desc **desc, struct ad4692_init_param *init_param)
{
	return 0;
}

int ad4692_remove(struct ad4692_desc *desc)
{
	return 0;
}