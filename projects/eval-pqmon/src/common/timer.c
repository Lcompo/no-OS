/*******************************************************************************
 *   @file   timer.c
 *   @brief  Timer functionalities for PQM
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

#include "timer.h"
#include "common_data.h"
#include "status.h"
#include "tmr.h"

/******************************************************************************/
/********************** Macros and Constants Definitions **********************/
/******************************************************************************/

#define FREQ 1000

/******************************************************************************/
/************************ Variable Declarations *******************************/
/******************************************************************************/

uint32_t timInterrupt = 0;
struct no_os_timer_desc *hTimer;
static volatile int64_t timeCount1Ms = 0;

/******************************************************************************/
/************************ Functions Definitions *******************************/
/******************************************************************************/

void timer_callback()
{
	// Clear interrupt
	MXC_TMR_ClearFlags(MXC_TMR0);
	timInterrupt = 1;
	timeCount1Ms++;
}

int32_t timer_init(void)
{

	mxc_tmr_cfg_t tmr;
	uint32_t periodTicks = 32768000 / (2 * FREQ);
	MXC_TMR_Shutdown(MXC_TMR0);
	tmr.pres = TMR_PRES_4;
	tmr.mode = TMR_MODE_CONTINUOUS;
	tmr.cmp_cnt = periodTicks;
	tmr.pol = 0;
	MXC_TMR_Init(MXC_TMR0, &tmr);
	MXC_TMR_Start(MXC_TMR0);
	MXC_NVIC_SetVector(TMR0_IRQn, timer_callback);
	NVIC_EnableIRQ(TMR0_IRQn);

	return 0;
}
