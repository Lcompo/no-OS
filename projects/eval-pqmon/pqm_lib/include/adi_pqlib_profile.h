/******************************************************************************
 Copyright (c) 2022  Analog Devices Inc. All Rights Reserved.
 This software is proprietary & confidential to Analog Devices, Inc.
 and its licensors.
******************************************************************************/

/**
 * @file        adi_pqlib_profile.h
 * @brief       Functions and definitions for clock count calculation
 * @{
 */

#ifndef ADI_PQLIB_PROFILE_H_
#define ADI_PQLIB_PROFILE_H_

/*============= I N C L U D E S =============*/
#include "adi_pqlib_cfg.h"
#include <stdint.h>
#if (ADI_PQLIB_CFG_ENABLE_PROFILE_INFO == 1)
#include "stm32f4xx.h"
#endif /* ADI_PQLIB_CFG_ENABLE_PROFILE_INFO */

#ifdef __cplusplus
extern "C" {
#endif

/*============= D E F I N I T I O N S =============*/
#if (ADI_PQLIB_CFG_ENABLE_PROFILE_INFO == 1)
/** initiliazes Profile Info register*/
#define ADI_PQLIB_PROFILE_INIT() adi_pqlib_ProfileInit();
/** begins profile info*/
#define ADI_PQLIB_PROFBEG(ID) adi_pqlib_ProfileBegin(DWT->CYCCNT);
/** ends profile info*/
#define ADI_PQLIB_PROFEND(ID) adi_pqlib_ProfileEnd(ID, DWT->CYCCNT);
#else
/** Define as empty if profile info is not enabled*/
/** initiliazes Profile Info register*/
#define ADI_PQLIB_PROFILE_INIT() ;
/** begins profile info*/
#define ADI_PQLIB_PROFBEG(ID) ;
/** ends profile info*/
#define ADI_PQLIB_PROFEND(ID) ;
#endif /* ADI_PQLIB_CFG_ENABLE_PROFILE_INFO */

/** Maximum size of the buffer */
#define ADI_PQLIB_BUFFER_SIZE 0xFFFF
/** Maximum size of the stack*/
#define ADI_PQLIB_PROFILE_STACK_SIZE 0x05

/**
 * Profile ID
 */
typedef enum {
	/** ID for ProcessOneCycle function */
	ADI_PQLIB_PROFILE_ID_ONECYCLE = 1u,
	/** ID for ProcessWaveform */
	ADI_PQLIB_PROFILE_ID_WAVEFORM,
	/** ID for Process1012Cycels function */
	ADI_PQLIB_PROFILE_ID_1012CYCLES,
	/** ID for Weighting Highpass filter */
	ADI_PQLIB_PROFILE_ID_WeightingHPF,
	/** ID for Weighting Lowpass filter */
	ADI_PQLIB_PROFILE_ID_WeightingLPF,
	/** ID for Weighting Bandpass filter */
	ADI_PQLIB_PROFILE_ID_WeightingBPF,
	/** ID for Sliding mean Lowpass filter */
	ADI_PQLIB_PROFILE_ID_SlidingMeanLPF,
	/** ID for AddQ15 function */
	ADI_PQLIB_PROFILE_ID_ADDQ15,
	/** ID for CosQ15 function */
	ADI_PQLIB_PROFILE_ID_COSQ15,
	/** ID for SineQ15 function */
	ADI_PQLIB_PROFILE_ID_SINEQ15,
	/** ID for SqrtQ15 function */
	ADI_PQLIB_PROFILE_ID_SQRTQ15,
	/** ID for InitFFT function */
	ADI_PQLIB_PROFILE_ID_INITFFT,
	/** ID for CalculateFFT function */
	ADI_PQLIB_PROFILE_ID_CALUCULATEFFT,
	/** ID for CalculateFFTAbsSquare function */
	ADI_PQLIB_PROFILE_ID_CALUCULATEFFTABSAQUARE,
	/** ID for HarmCalculateSubgroup function */
	ADI_PQLIB_PROFILE_ID_HARMCALUCULATESUBGROUP,

} ADI_PQLIB_PROFILE_ID;

/**
 * structure for profile info
 */
typedef struct {
	/** profile buffer. */
	uint8_t buffer[ADI_PQLIB_BUFFER_SIZE];
	/**index to next empty location in buffer. */
	uint32_t writeIndex;

} ADI_PQLIB_PROFILE_INFO;

/**
 * structure of stack for storing starting time
 */
typedef struct {
	/** stack */
	uint32_t mem[ADI_PQLIB_PROFILE_STACK_SIZE];
	/** index to next empty location in stack */
	uint32_t writeIndex;

} ADI_PQLIB_PROFILE_STACK;

/**
 * Initializes Profile Info register
 */
void adi_pqlib_ProfileInit(void);

/**
 * Stores current clock count at beginning of the profile
 *
 * @param[in] profileStamp - current value of clock count
 */
void adi_pqlib_ProfileBegin(uint32_t profileStamp);

/**
 * Stores data into buffer at the end of the profile
 *
 * @param[in] bufferID     - ID of the data that needs to be stored
 * @param[in] profileStamp - current value of clock count
 */
void adi_pqlib_ProfileEnd(uint8_t bufferID, uint32_t profileStamp);

/**
 * Returns the profile info pointer so that application can dump
 * the buffer for analysis
 * @return ADI_PQLIB_PROFILE_INFO pointer
 */
ADI_PQLIB_PROFILE_INFO *adi_pqlib_ProfileGetInfo(void);

#ifdef __cplusplus
}
#endif

#endif /* __ADI_PQLIB_PROFILE_H__ */
/**
 * @}
 */
