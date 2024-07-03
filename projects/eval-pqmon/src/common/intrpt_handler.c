/*******************************************************************************
 *   @file   intrpt_handler.h
 *   @brief  Interrupt handler functionalities
 *   @author Robert Budai (robert.budai@analog.com)
 ********************************************************************************
 * Copyright (c) 2024 Analog Devices, Inc.
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

/******************************************************************************/
/***************************** Include Files **********************************/
/******************************************************************************/

#include "intrpt_handler.h"

/******************************************************************************/
/************************ Variable Declarations ******************************/
/******************************************************************************/

extern volatile uint8_t rmsOneReady;
extern volatile uint64_t rtcIntrpTimeInMilliSeconds;
static uint64_t timeFromLastSyncInSeconds = 0;
static volatile int64_t timestamp;
volatile uint8_t newSyncTimeAvailable = 0;

/******************************************************************************/
/************************ Functions Definitions *******************************/
/******************************************************************************/

void isr_afe0(void)
{
	rmsOneReady = 1;
}

void init_interrupt(void)
{
	mxc_gpio_cfg_t gpio_interrupt;
	gpio_interrupt.port = MXC_GPIO0;
	gpio_interrupt.mask = MXC_GPIO_PIN_30;
	gpio_interrupt.pad = MXC_GPIO_PAD_WEAK_PULL_UP;
	gpio_interrupt.func = MXC_GPIO_FUNC_IN;
	gpio_interrupt.vssel = MXC_GPIO_VSSEL_VDDIOH;
	gpio_interrupt.drvstr = MXC_GPIO_DRVSTR_0;
	MXC_GPIO_Config(&gpio_interrupt);
	MXC_GPIO_RegisterCallback(&gpio_interrupt, (mxc_gpio_callback_fn)isr_afe0,
				  NULL);
	MXC_GPIO_IntConfig(&gpio_interrupt, MXC_GPIO_INT_FALLING);
	MXC_GPIO_EnableInt(gpio_interrupt.port, gpio_interrupt.mask);
	NVIC_EnableIRQ(MXC_GPIO_GET_IRQ(MXC_GPIO_GET_IDX(gpio_interrupt.port)));
}

int64_t get_irq0_timestamp(void)
{
	return timestamp;
}
