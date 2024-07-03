/******************************************************************************
 Copyright (c) 2021 - 2022  Analog Devices Inc. All Rights Reserved.
 This software is proprietary & confidential to Analog Devices, Inc.
 and its licensors.
******************************************************************************/

/**
 * @file
 * @brief       PQLIB API Functions and definitions
 *
 */

#ifndef __ADI_PQLIB_H__
#define __ADI_PQLIB_H__

/*============= I N C L U D E S =============*/
#include "adi_pqlib_cfg.h"
#include "adi_pqlib_error.h"
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** @defgroup   PQINIT Initialization
 *  @brief This section covers macros and types used for initialization and
 *  configuration of the library. The macro definitions in this section should
 *  be considered as constants and should not be modified by the application.
 *  Refer to @ref PQCFG static configuration options which can be modified as
 *  per application requirements.
 * @{
 */

/** Total number of waveform channels in AFE output */
#define ADI_PQLIB_TOTAL_WAVEFORM_CHANNELS 7

/** Size required for a waveform buffer for one channel. */
#define ADI_PQLIB_WAVEFORM_BLOCK_SIZE 256

/** Maximum rms value. This corresponds to full range input at AFE. */
#define ADI_PQLIB_MAX_RMS_VALUE 52702092

/** Output waveform buffer size for 10/12 samples */
#define ADI_PQLIB_1012CYCLE_WAVEFORM_SIZE 1024

/** Maximum supported mains signalling frequency is 2176 Hertz.
 * This is derived from minimum possible sampling rate of waveform output
 * 42.5Hz case for 50Hz nominal frequency or 51Hz case for 60 Hz nominal
 * frequency*/
#define ADI_PQLIB_MAX_MSV_FREQUENCY 2176000
/** Minimum supported mains signalling frequency 70Hz */
#define ADI_PQLIB_MIN_MSV_FREQUENCY 70000
/** Maximum recording length in ms - 120s */
#define ADI_PQLIB_MAX_MSV_RECORDING_LENGTH 120000

/** @} */

/** @defgroup   PQFLAG  Library output Flags
 *
 *  @brief Library uses flags to indicate events, output availability and
 * warnings. Each flag is associated with a mask BITM define which can be used
 * to extract that flags.
 *
 * @{
 */

/** @defgroup   PQOUTFLAG  Output Flags
 ** @brief These flags are used to indicate the availability of an output.
 * @{
 */
/** Output status bit mask - A new dip output is available */
#define ADI_PQLIB_OUTPUT_FLAG_DIP_BITM 0x1
/** Output status bit mask - A new swell output is available */
#define ADI_PQLIB_OUTPUT_FLAG_SWELL_BITM 0x2
/** Output status bit mask - A new interruption output is available  */
#define ADI_PQLIB_OUTPUT_FLAG_INTRP_BITM 0x4
/** Output status bit mask - A new RVC output is available  */
#define ADI_PQLIB_OUTPUT_FLAG_RVC_BITM 0x8
/** Output status bit mask - MSV recording is active.
 * Recording starts on all voltage channels if it is triggered in any one of
   the voltage channels*/
#define ADI_PQLIB_OUTPUT_FLAG_MSV_BITM 0x10
/** Output status bit mask - The bits 5-7 are reserved for future use */
#define ADI_PQLIB_OUTPUT_FLAG_RESERVED0_BITM 0xE0

/** Output status bit mask  - A new 10/12 cycles output is available*/
#define ADI_PQLIB_OUTPUT_FLAG_AGGR_NONE_BITM 0x100
/** Output status bit mask  - A new 150/180 cycles aggregation output is
 *available*/
#define ADI_PQLIB_OUTPUT_FLAG_AGGR_150180CYCLES_BITM 0x200
/** Output status bit mask  - A new 10 minutes aggregation output is available
 */
#define ADI_PQLIB_OUTPUT_FLAG_AGGR_10MIN_BITM 0x400
/** Output status bit mask - The bit 12 is reserved for future  */
#define ADI_PQLIB_OUTPUT_FLAG_RESERVED1_BITM 0x800

/** Output status bit mask  - Instantaneous flicker output is available*/
#define ADI_PQLIB_OUTPUT_FLAG_FLICKER_PINST_BITM 0x1000
/** Output status bit mask  - Flicker Pst output is available*/
#define ADI_PQLIB_OUTPUT_FLICKER_PST_BITM 0x2000
/** Output status bit mask  - Flicker Plt output is available*/
#define ADI_PQLIB_OUTPUT_FLICKER_PLT_BITM 0x4000
/** Output status bit mask - The bit 16 is reserved for future  */
#define ADI_PQLIB_OUTPUT_FLAG_RESERVED2_BITM 0x8000

/** Output status bit mask  - Power Frequency output is available */
#define ADI_PQLIB_OUTPUT_FREQUENCY_BITM 0x10000
/** Output status bit mask  - Voltage waveform output is available */
#define ADI_PQLIB_OUTPUT_VWFRM_BITM 0x20000
/** Output status bit mask  - Current waveform output is available*/
#define ADI_PQLIB_OUTPUT_IWFRM_BITM 0x40000

/** @} */

/** @defgroup   PQEVTFLAG  Event Flags
 ** @brief These flags are used to indicate the presence of an event in an
 *aggregation window.
 * @{
 */

/** Event flag - Dip happened in this aggregation window */
#define ADI_PQLIB_EVENT_FLAG_DIP_BITM 0x1
/** Event flag - Swell happened in this aggregation window */
#define ADI_PQLIB_EVENT_FLAG_SWELL_BITM 0x2
/** Event flag - Interruption happened in this aggregation window */
#define ADI_PQLIB_EVENT_FLAG_INTRP_BITM 0x4
/**Event flag - RVC happened in this aggregation window. Note that if this
 * event is flagged at the end of an agregation window, it could be masked by
 * dips/swells/interruptions happening in the begining of next aggregation
 * window */
#define ADI_PQLIB_EVENT_FLAG_RVC_BITM 0x8
/** Event flag - Mains signalling was detected in this aggregation window */
#define ADI_PQLIB_EVENT_FLAG_MSV_BITM 0x10

/** @} */

/** @defgroup   PQWARNFLAG  Warning Flags
 ** @brief These flags are used to indicate the presence of warnings in an
 *aggregation window
 * @{
 */
/** Warning flag - A timestamp adjustment happened in this aggregation window
 */
#define ADI_PQLIB_WARN_FLAG_RTC_UPDATE_BITM 0x1
/** Warning flag - Reference period zero crossing timeout happened in this
 * aggregation window*/
#define ADI_PQLIB_WARN_FLAG_REFZXTO_BITM 0x2
/** Warning flag - Reference channel changed in the aggregation window*/
#define ADI_PQLIB_WARN_FLAG_REFCHANGE_BITM 0x4
/** Warning flag - One of the input VRMSONE register was invalid
 *  in this aggregation window*/
#define ADI_PQLIB_WARN_FLAG_VRMSONE_INVALID_BITM 0x8
/** Warning flag - One of the input VRMS1012  register was invalid
 *  in this aggregation window*/
#define ADI_PQLIB_WARN_FLAG_VRMS1012_INVALID_BITM 0x10
/** Warning flag - One of the input IRMS1012  register was invalid
 *  in this aggregation window*/
#define ADI_PQLIB_WARN_FLAG_IRMS1012_INVALID_BITM 0x40
/** Warning flag - Period was invalid in the aggregation window*/
#define ADI_PQLIB_WARN_FLAG_PERIOD_INVALID_BITM 0x80
/** Warning flag - Voltage Waveform was invalid in the aggregation window*/
#define ADI_PQLIB_WARN_FLAG_VWFRM_INVALID_BITM 0x400
/** Warning flag - Current Waveform was invalid in the aggregation window*/
#define ADI_PQLIB_WARN_FLAG_IWFRM_INVALID_BITM 0x800
/** Warning flag - #adi_pqlib_ProcessOneCycle API was called less than 10/12
 * times while calling #adi_pqlib_Process1012Cycles  API in the aggregation
 * window*/
#define ADI_PQLIB_WARN_FLAG_RMSONE_NOT_READY_BITM 0x4000
/** Warning flag - #adi_pqlib_ProcessWaveform API was called less than 4 times
 *  while calling #adi_pqlib_Process1012Cycles  API in the aggregation window*/
#define ADI_PQLIB_WARN_FLAG_WFRM_NOT_READY_BITM 0x8000
/** Warning flag - #adi_pqlib_ProcessWaveform API was called more than 4 times
 *  before calling #adi_pqlib_Process1012Cycles  API in the aggregation
 * window*/
#define ADI_PQLIB_WARN_FLAG_WFRM_OVERFLOW_BITM 0x10000
/** Warning flag - There were more dips than recorded in this aggregation
 * window*/
#define ADI_PQLIB_WARN_FLAG_DIP_OVERFLOW_BITM 0x20000
/** Warning flag - There were more swells than recorded in this aggregation
 * window*/
#define ADI_PQLIB_WARN_FLAG_SWELL_OVERFLOW_BITM 0x40000
/** Warning flag - There were more interruptions than recorded in this
 * aggregation window*/
#define ADI_PQLIB_WARN_FLAG_INTRP_OVERFLOW_BITM 0x80000
/** Warning flag - There were more RVC than recorded in this aggregation
 * window*/
#define ADI_PQLIB_WARN_FLAG_RVC_OVERFLOW_BITM 0x100000
/** There was a discontinuity in waveform sequence number in this aggregation
 * window*/
#define ADI_PQLIB_WARN_FLAG_WFRM_MISSING_BITM 0x200000
/** There was a discontinuity in one cycle input in this aggregation window*/
#define ADI_PQLIB_WARN_FLAG_ONECYCLE_MISSING_BITM 0x400000
/** There was a discontinuity in 10/12 input in this aggregation window*/
#define ADI_PQLIB_WARN_FLAG_1012CYCLE_MISSING_BITM 0x800000
/* Add additional warnings here*/
/** Warning flag - Internal Error happened in this aggregation window.
 * This could be due to a bug in the library or memory corruption*/
#define ADI_PQLIB_WARN_FLAG_INTERNAL_ERROR_BITM 0x80000000

/** @} */

/** @} */

/** @defgroup   PQFIXED Fixed Point Types
 * @brief Types and macros for fixed point representation.
 *
 * The library doesn't use any floating point operations. APIs and all
 * calculations are done in fixed point formats. There are two types of fixed
 * point formats used by the library. One is standard Q formats where each type
 * is associated with a defined number of fractional bits. \n
 * To convert from floating point to this format, multiply the floating point
 * value by  (1 << FRACT_BITS) and round to nearest integer \n xFixed =
 * (FixedType) (xFloat * (1 << FRACT_BITS) + 0.5) \n To convert to floating
 * point from this format, typecast number to floating point and then divide by
 * (1 << FRACT_BITS) \n xFloat = (float)xFract / (1 <<  FRACT_BITS)
 *
 * In some cases it is more intuitive to scale the number by a power of 10.
 * For example frequency may be represented as mHz.
 *
 * @{
 */
/** Number of fractional bits for #ADI_PQLIB_FRACT_TYPE */
#define ADI_PQLIB_FRACT_BITS 15
/** Number of fractional bits for #ADI_PQLIB_COEF_TYPE  */
#define ADI_PQLIB_COEF_FRACT_BITS 15
/** Number of fractional bits for #ADI_PQLIB_FLICKER_OUTPUT_TYPE  */
#define ADI_PQLIB_FLICKER_FRACT_BITS 8

/** @} */

/** @ingroup PQINIT
 * @{
 */

/** A device handle used in all API functions to identify the instance.
 *  It is obtained from the #adi_pqlib_Open API. */
typedef void *ADI_PQLIB_HANDLE;

/** @} */

/** @ingroup  PQOUTFLAG
 **
 * @{
 */

/** Typedef to indicate the presence of the availability of the outputs.
 * Each bit refers to the availability of output in #ADI_PQLIB_OUTPUT.
 *
 * The availability of output can be checked by looking at each bit.
 *
 *  Eg.
 *  is10MinResultsReady = ((outputStatusFlag &
 *#ADI_PQLIB_OUTPUT_FLAG_AGGR_10MIN_BITM) != 0)
 */
typedef uint32_t ADI_PQLIB_OUTPUT_STATUS;

/** @} */

/** @ingroup   PQEVTFLAG
 **
 * @{
 */
/**Typedef to indicate the presence of flags in an aggregation window.
 * Refer to IEC61000-4-30 Section 4.7 for details.
 * Events can be identified by checking the bit of a particular event.
 *
 * Eg.
 * isDip =  ((eventFlag & #ADI_PQLIB_EVENT_FLAG_DIP_BITM) != 0)
 **/
typedef uint32_t ADI_PQLIB_EVENT_FLAG;
/** @} */

/** @ingroup   PQWARNFLAG
 **
 * @{
 */
/**Typedef to indicate the presence of warnings in an aggregation window.
 * Each bit indicates a warning.
 **/
typedef uint32_t ADI_PQLIB_WARN_FLAG;
/** @} */

/** @ingroup   PQFIXED
 * @{
 */

/**Typedef to indicate fixed point format of output fractional values
 * less than 1.
 * Refer to #ADI_PQLIB_FRACT_BITS for number of fractional bits.
 **/
typedef uint16_t ADI_PQLIB_FRACT_TYPE;
/**Typedef to indicate fixed point format for correction
 * coefficients.
 * Refer to #ADI_PQLIB_COEF_FRACT_BITS for number of fractional bits.
 **/
typedef uint16_t ADI_PQLIB_COEF_TYPE;
/**Typedef to indicate fixed point format for percentage values.
 * 1 bit indicates 0.01%. Divide the number by 100 to get
 * % as a floating point number.
 **/
typedef uint16_t ADI_PQLIB_PCT_TYPE;
/**Typedef to indicate fixed point format of of flicker output
 * Refer to #ADI_PQLIB_FLICKER_FRACT_BITS for number of fractional bits.
 **/
typedef uint16_t ADI_PQLIB_FLICKER_OUTPUT_TYPE;
/**
 * Typedef to indicate the time in milliseconds.
 * The library only looks at the relative time and requires a resolution of
 * 1 power line cycle.
 * The expected format is unix epoch timestamp in milliseconds.
 */
typedef int64_t ADI_PQLIB_TIME;

/** Typedef to indicate frequency output from the library.
 *  The number indicates frequency in mHz. Application should
 *  divide the number by 1000 to convert to Hz.*/

typedef uint32_t ADI_PQLIB_FREQ_TYPE;
/** The type of RMS output from library. This is in same format as code
 * provided by AFE. Following table gives maximum code by supported AFE.
 * Refer to AFE data sheet for more details.
 * AFE | Full-scale code
 * ----|----------------
 * ADE9430 | 52702092
 * */
typedef uint32_t ADI_AFE_RMS_TYPE;
/** Type of angles needed by the library.
 * This is in same format as ANGL register codes provided by AFE.
 * Refer to AFE data sheet for more details
 * AFE | One bit equals
 * ----|----------------
 * ADE9430 | 0.017578125&deg; at 50 Hz
 */
typedef uint16_t ADI_AFE_ANGLE_TYPE;
/** The type of period input needed by the library. This is in same format
 * as PERIOD registers provided by AFE.
 * Refer to AFE data sheet for more details.
 * AFE |Period in seconds
 * ----|----------------
 * ADE9430 | (PERIOD  +  1)/ (8000 x 2^16)
 */
typedef uint32_t ADI_AFE_PERIOD_TYPE;
/** Output period format from the library in microseconds.
 */
typedef uint32_t ADI_PQLIB_PERIOD_TYPE;
/** This is in same format as resampled waveform buffer provided by AFE.
 * Refer to AFE data sheet for more details. The sampling rate will be
 * varying such that each 1024 samples will be containing 10 or 12 cycles of
 * input data. AFE | Full-scale code
 * ----|----------------
 * ADE9430 | 18196
 */
typedef int16_t ADI_AFE_WFRM_TYPE;

/**
 * Typedef to indicate the complex number.
 * It will be placed in the structure containing real and imaginary part.
 * Example:
 * ADI_PQLIB_COMPLEX complex;
 * complex.real - real part of the complex number
 * complex.imag - imag part of the complex number
 */
typedef int16_t ADI_PQLIB_COMPLEX_TYPE;

/**
 * Structure to hold real and imaginary part of the complex number.
 */
typedef struct {
	/** real part of complex number*/
	ADI_PQLIB_COMPLEX_TYPE real;
	/** imaginary part of complex number*/
	ADI_PQLIB_COMPLEX_TYPE imag;
} ADI_PQLIB_COMPLEX;

/** @} */

/** @addtogroup PQINIT
 * @{
 */

/**
 * Enumeration to indicate phase of 3-phase configuration.
 * This is needed for unbalance calculation.
 */
typedef enum {
	/** 0 degrees */
	ADI_PQLIB_PHASE_0 = 0,
	/** -120 degrees */
	ADI_PQLIB_PHASE_1,
	/** +120 degrees */
	ADI_PQLIB_PHASE_2,
	/** Neutral Current */
	ADI_PQLIB_PHASE_IN,
} ADI_PQLIB_PHASE_ID;

/**
 * This is used for mapping the input channels to phases at run-time.
 * If only static configuration is sufficient, refer to @ref PQ3PH.
 * This is required only for #ADI_PQLIB_UNB calculations.
 */
typedef struct {
	/** Phase of AFE VA channel output */
	ADI_PQLIB_PHASE_ID phaseVA;
	/** Phase of AFE VB channel output */
	ADI_PQLIB_PHASE_ID phaseVB;
	/** Phase of AFE VC channel output */
	ADI_PQLIB_PHASE_ID phaseVC;
	/** Phase of AFE IA channel output */
	ADI_PQLIB_PHASE_ID phaseIA;
	/** Phase of AFE IB channel output */
	ADI_PQLIB_PHASE_ID phaseIB;
	/** Phase of AFE IC channel output */
	ADI_PQLIB_PHASE_ID phaseIC;
	/** Phase of AFE IN  channel output */
	ADI_PQLIB_PHASE_ID phaseIN;
} ADI_PQLIB_PHASE_MAP;

/**
 * Structure for correction coefficients for harmonic and inter-harmonic
 * parameters. In some cases various filters in the signal chain may
 * attenuate the high frequency components of the signal. This may impact
 * calculation of some power quality parameters such as harmonics.
 * If the user knows the  attenuation at each harmonic bin, may create
 * an instance of this structure with appropriate coefficients and  use the
 * API #adi_pqlib_SetCorrectionCoefficients to provide the coefficients to
 * the library.
 *
 * If the user doesn't know the attenuation at each harmonic bin, may use
 * the library APIs itself to calculate that during the development of the
 * application.
 *
 * There should be one coefficient for each harmonics order>= startOrder
 * and order<= #ADI_PQLIB_CFG_NUM_V_HARMONICS
 * (or #ADI_PQLIB_CFG_NUM_I_HARMONICS for current).
 * Coefficients for inter-harmonics are calculated by averaging coefficients
 * of two consecutive harmonics. The harmonics and inter-harmonic percentage
 * would be multiplied by these coefficients before putting into the output
 * buffer.
 */
typedef struct {
	/** Harmonic order for first correction coefficient.*/
	uint16_t startOrder;
	/** Number of coefficients. The pVoltageCoef and pCurrentCoef in this
	 * structure should be pointer to a buffer containing this much
	 * coefficients.
	 */
	uint16_t numCoef;
	/** Pointer to voltage harmonic correction coefficients. First element
	 * of the buffer should point to the coefficient to correct startOrder
	 * harmonic.
	 */
	ADI_PQLIB_COEF_TYPE *pVoltageCoef;
	/** Pointer to current harmonic correction coefficients. First element
	 * of the buffer should point to the coefficient to correct startOrder
	 * harmonic.*/
	ADI_PQLIB_COEF_TYPE *pCurrentCoef;
} ADI_PQLIB_CORR_COEF;

/**
 * Thresholds percentages for dips, swells, interruptions and rvc.
 * All these events come with a threshold and hysteresis
 * threshold.
 * @note For dip and interruptions, the event starts when rms goes below
 * low threshold and ends when rms goes above high threshold. Refer to
 * IEC61000-4-30 5.4.2.1 for details. \n
 * For swell, the event starts when rms goes above high threshold and
 * end when rms goes below low threshold. Refer to
 * IEC61000-4-30 5.4.3.2 for details. \n
 * For RVC, event starts when the deviation (abs of (rms - steady state))
 * goes above high and ends when deviation goes below low threshold.
 * Refer to IEC61000-4-30 5.12 for details.
 * For all events, high should be a value greater than low.
 * For dips, interrutions and RVC, low and high should be less than nominal
 * voltage. For swells, both low and high should be greater than nominal
 * voltage.
 */
typedef struct {
	/** Low Threshold percentage */
	ADI_PQLIB_PCT_TYPE low;
	/** High Threshold percentage*/
	ADI_PQLIB_PCT_TYPE high;
} ADI_PQLIB_THRESHOLD;

/**
 * Lamp model for flicker. Refer to IEC61000-4-15 for details.
 */
typedef enum {
	/** 230V 50Hz Model */
	ADI_PQLIB_FLICKER_MODEL_230V_50HZ,
	/** 230V 60Hz Model */
	ADI_PQLIB_FLICKER_MODEL_230V_60HZ,
	/** 120V 50Hz Model */
	ADI_PQLIB_FLICKER_MODEL_120V_50HZ,
	/** 120V 60Hz Model */
	ADI_PQLIB_FLICKER_MODEL_120V_60HZ,
} ADI_PQLIB_FLICKER_MODEL;

/**
 * Enumeration for AFE reference channel for frequency measurement.
 * Refer to IEC61000-4-30 Section 3.27 for definition of reference channel.
 * Application must also set appropriate LP_SEL field of ADE9430 ZX_LP_SEL
 * register.
 *
 */
typedef enum {
	/** AFE Channel VA*/
	ADI_PQLIB_REF_CHANNEL_VA,
	/** AFE Channel VB*/
	ADI_PQLIB_REF_CHANNEL_VB,
	/** AFE Channel VC*/
	ADI_PQLIB_REF_CHANNEL_VC,
	/** AFE Channel COM. Note that ADE9430 will use a signal generated from
	 * VA, VB and VC for frequency calculation. Use of this option may not be
	 * compliant with IEC61000-4-30 requirements */
	ADI_PQLIB_REF_CHANNEL_COM
} ADI_PQLIB_REF_CHANNEL;

/**
 * Enumeration for supported nominal frequencies.
 */
typedef enum {
	/** 50Hz */
	ADI_PQLIB_NOMINAL_FREQUENCY_50HZ,
	/** 60Hz */
	ADI_PQLIB_NOMINAL_FREQUENCY_60HZ
} ADI_PQLIB_NOMINAL_FREQUENCY;

/**
 * Structure to configure main signalling
 */
typedef struct {
	/** Carrier frequency to monitor */
	ADI_PQLIB_FREQ_TYPE carrierFrequency;
	/** Detection threshold */
	ADI_PQLIB_PCT_TYPE threshold;
	/** Length of recording period in milliseconds. The samples
	 * are not actually recorded, but the window is used to calculate maximum
	 * magnitude of MsV*/
	uint32_t recordingLength;

} ADI_PQLIB_MSV_CONFIG;

/**
 * Structure for PQLIB run-time configuration.
 */
typedef struct {
	/** Nominal Frequency - 50Hz or 60Hz.*/
	ADI_PQLIB_NOMINAL_FREQUENCY nominalFrequency;
	/** Nominal Voltage in AFE codes. */
	ADI_AFE_RMS_TYPE nominalVoltage;
	/** Reference channel for frequency. Application must also set appropriate
	 * LP_SEL field of ADE9430 ZX_LP_SEL register.*/
	ADI_PQLIB_REF_CHANNEL refChannel;
#if ADI_PQLIB_CFG_DISABLE_EVENTS == 0
	/** Threshold for Dip. */
	ADI_PQLIB_THRESHOLD dipThreshold;
	/**Threshold for Swell. */
	ADI_PQLIB_THRESHOLD swellThreshold;
	/** Threshold for interruption. */
	ADI_PQLIB_THRESHOLD intrpThreshold;
	/** Threshold for RVC. */
	ADI_PQLIB_THRESHOLD rvcThreshold;
#endif /* ADI_PQLIB_CFG_DIS_EVENTS */
	/** Lamp model for Flicker. */
	ADI_PQLIB_FLICKER_MODEL flickerModel;
	/** Pointer to 3-Phase mapping to channels. This can be null if
	 *  static configuration as specified by @ref PQ3PH is sufficient.
	 */
	ADI_PQLIB_PHASE_MAP *pPhaseMap;
	/** If true, harmonic correction is disabled.*/
	bool disableCorrection;
	/** If true, use external timestamp.*/
	bool useExternalTimestamp;
#if ADI_PQLIB_CFG_DISABLE_VOLTAGE_WAVEFORM == 0
	/** Mains signalling configuration */
	ADI_PQLIB_MSV_CONFIG msvConfig;
#endif /* ADI_PQLIB_CFG_DISABLE_VOLTAGE_WAVEFORM */

} ADI_PQLIB_CONFIG;

/** @} */

/** @defgroup   PQINPUT  Input Types and Definitions
 *  @brief These types and definitions are needed to give input for
 *  various process APIs of the library. The application should fill the
 * data structure and call process APIs such as #adi_pqlib_ProcessOneCycle
 * at appropiate time.
 * @{
 */

/**
 * Structure to give input to #adi_pqlib_ProcessOneCycle function.
 * This structure should be filled with AFE registers  and passed to
 * the API function everytime RMSONERDY bit is set.
 */
typedef struct {
	/** Flag indicating data passed is processed by the library. This would
	 * be set to 1 by the library for every call.
	 */
	uint8_t isDataProcessed;
	/** Sequence Number for this input. This should be incremented
	 *  every time application populates this buffer with new data.
	 *  This is used inside the library to check that the inputs are
	 *  processed in the correct order.
	 *  */
	uint32_t sequenceNumber;
	/** AFE Register STATUS1 */
	uint32_t STATUS1;
	/** AFE Register STATUS0 */
	uint32_t STATUS0;
	/** AFE Register Reference channel period.
	 * This should be populated with the PERIOD_FOR_RMS
	 *
	 **/
	ADI_AFE_PERIOD_TYPE PERIOD;

	/** AFE Register AVRMS value */
	ADI_AFE_RMS_TYPE AVRMSONE;
	/** AFE Register BVRMSONE value */
	ADI_AFE_RMS_TYPE BVRMSONE;
	/** AFE Register CVRMSONE value */
	ADI_AFE_RMS_TYPE CVRMSONE;
#if ADI_PQLIB_CFG_DISABLE_V_UNB == 0
	/** AFE Register ANGL_VA_VB value */
	ADI_AFE_ANGLE_TYPE ANGL_VA_VB;
	/** AFE Register ANGL_VB_VC value */
	ADI_AFE_ANGLE_TYPE ANGL_VB_VC;
	/** AFE Register ANGL_VA_VC value */
	ADI_AFE_ANGLE_TYPE ANGL_VA_VC;
#endif /* ADI_PQLIB_CFG_DISABLE_V_UNB == 0 */
#if ADI_PQLIB_CFG_DISABLE_I_UNB == 0
	/** AFE Register ANGL_IA_IB value */
	ADI_AFE_ANGLE_TYPE ANGL_IA_IB;
	/** AFE Register ANGL_IB_IC value */
	ADI_AFE_ANGLE_TYPE ANGL_IB_IC;
	/** AFE Register ANGL_IA_IC value */
	ADI_AFE_ANGLE_TYPE ANGL_IA_IC;
#endif /* ADI_PQLIB_CFG_DISABLE_I_UNB == 0 */
	/** Timestamp of one cycle read externally*/
	ADI_PQLIB_TIME timestamp;

} ADI_PQLIB_CYCLE_INPUT;

/**
 * Structure to give input to #adi_pqlib_Process1012Cycles function.
 * This structure should be filled with AFE registers and passed to
 * the API function everytime RMS1012RDY bit is set.
 */
typedef struct {
	/** Flag indicating data passed is processed by the library. This would
	 * be set by the library for every call.*/
	uint8_t isDataProcessed;
	/** Sequence Number for this input. This should be incremented
	 *  every time application populates this buffer with new data.
	 *  This is used inside the library to check the inputs are
	 *  processed in the correct order.
	 *  */
	uint32_t sequenceNumber;
	/** AFE Register  AIRMS1012 value */
	ADI_AFE_RMS_TYPE AIRMS1012;
	/** AFE Register  BIRMS1012OS value */
	ADI_AFE_RMS_TYPE BIRMS1012;
	/** AFE Register  CIRMS1012OS value */
	ADI_AFE_RMS_TYPE CIRMS1012;
	/** AFE Register  AVRMS1012 value */
	ADI_AFE_RMS_TYPE AVRMS1012;
	/** AFE Register  BVRMS1012 value */
	ADI_AFE_RMS_TYPE BVRMS1012;
	/** AFE Register  CVRMS1012 value */
	ADI_AFE_RMS_TYPE CVRMS1012;
	/** AFE Register  NIRMS1012 value */
	ADI_AFE_RMS_TYPE NIRMS1012;

} ADI_PQLIB_1012_CYCLE_INPUT;

/**
 * Structure to  give input to #adi_pqlib_ProcessWaveform function.
 * This structure should be filled with AFE registers and passed to
 * the API function everytime COH_WFB_FULL bit is set in the STATUS1
 * register.
 */
typedef struct {
	/** Flag indicating data passed is processed by the library. This would
	 * be set by the library for every call.*/
	bool isDataProcessed;
	/** Sequence Number for this input. This should be incremented
	 *  every time application populates this buffer with new data.
	 *  This is used inside the library to check that the inputs are
	 *  processed in the correct order
	 *  */
	uint32_t sequenceNumber;
	/** Waveform samples for all 7 channels*/
	int16_t waveform[ADI_PQLIB_WAVEFORM_BLOCK_SIZE *
						       ADI_PQLIB_TOTAL_WAVEFORM_CHANNELS];

} ADI_PQLIB_WAVEFORM;

/** @} */

/** @defgroup   PQOUTPUT Output types and definitions
 * @brief IEC61000-4-30 defines various power quality parameters with 3
 * different aggregation windows. The library defines separate structures for
 * each parameter. The application is expected to pass a pointer to
 * #ADI_PQLIB_OUTPUT to #adi_pqlib_GetOutput function and the library will
 * update it with instances of these various structures.
 * @{
 */

/**
 * Power frequency -  average of last 10s window
 * Refer to IEC61000-4-30 Section 5.1
 *
 */
typedef struct {
	/** Timestamp of end of the 10s window*/
	ADI_PQLIB_TIME timestamp;
	/** Sequence number of this 10s window in 10 minute aggregation
	 * window. This will start from 1**/
	uint32_t sequenceNumber;
	/** Indicates any event has happened in the aggregation window */
	ADI_PQLIB_EVENT_FLAG eventFlag;
	/** Indicates any warning happened in this 3s winodow*/
	ADI_PQLIB_WARN_FLAG warnFlag;
	/** Frequency of reference channel */
	ADI_PQLIB_FREQ_TYPE frequency;
} ADI_PQLIB_POWER_FREQUENCY;

/**
 * Structure to hold Unbalance ratio.
 * Refer to IEC61000-4-30 Section 5.7
 */
typedef struct {
	/** Negative Unbalance ratio. Refer to IEC61000-4-30 Section 5.7.1 equation
	 * 1
	 */
	ADI_PQLIB_PCT_TYPE negUnbRatio;
	/** Zero Unbalance ratio. Refer to IEC61000-4-30 Section 5.7.1 equation 2
	 */
	ADI_PQLIB_PCT_TYPE zeroUnbRatio;
#if ADI_PQLIB_CFG_DISABLE_SYMM_COMP == 0
	/** Zero sequence magnitude */
	ADI_PQLIB_FRACT_TYPE zeroSeqMag;
	/** Zero sequence angle- 0 indicates 0 and 0x7FFF indicates 2pi*/
	ADI_PQLIB_FRACT_TYPE zeroSeqAngle;
	/** Positive sequence magnitude*/
	ADI_PQLIB_FRACT_TYPE posSeqMag;
	/** Positive sequence angle -  0 indicates 0 and 0x7FFF indicates 2pi*/
	ADI_PQLIB_FRACT_TYPE posSeqAngle;
	/** Negative sequence magnitude. */
	ADI_PQLIB_FRACT_TYPE negSeqMag;
	/** Negative sequence angle - 0 indicates 0 and 0x7FFF indicates 2pi*/
	ADI_PQLIB_FRACT_TYPE negSeqAngle;
#endif /* ADI_PQLIB_CFG_DISABLE_SYMM_COMP == 0 */

} ADI_PQLIB_UNB;

/**
 * Structure to hold under deviation and over deviation values.
 * Refer to IEC61000-4-30 Section Annex D for details
 */
typedef struct {
	/** U RMS Under value. Refer to IEC61000-4-30 Section Annex D  equation
	 * D.1, D.2*/
	ADI_AFE_RMS_TYPE uRmsUnder;
	/**U RMS Over value. Refer to IEC61000-4-30 Section Annex D  equation
	 * D.3, D.4 */
	ADI_AFE_RMS_TYPE uRmsOver;
	/** U Under  %. Refer to IEC61000-4-30 Section Annex D  equation D.5*/
	ADI_PQLIB_PCT_TYPE uUnderPct;
	/** U Over  %. Refer to IEC61000-4-30 Section Annex D  equation D.6 */
	ADI_PQLIB_PCT_TYPE uOverPct;

} ADI_PQLIB_UDOD;

/**
 * Structure to hold output of mains signalling voltage
 * The output flag #ADI_PQLIB_OUTPUT_FLAG_MSV_BITM indicates
 * that the recording is active. This flag is turned on when
 * the magnitude exceeds the configured mains signalling threshold
 * and remains active until the configured recording time is elapsed.
 * Recording starts on all voltage channels when magnitude1012
 * exceeds the threshold in any one of the voltage channels for the
 * first time.
 * The value of magnitude1012 is updated every 10/12 cycles.
 * Library starts monitoring maxMagnitue when magnitude1012 crosses
 * the threshold configured for the first time. It is then updated
 * every 10/12 cycles with the maximum magnitude in that recording
 * window.
 * Note that actual recording of instantaneous 10/12 cycles are not
 * done and only maximum magnitude is calculated.
 */
typedef struct {
	/** Magnitude of current 10/12 cycles
	 *  as a percentage of nominal voltage. */
	ADI_PQLIB_PCT_TYPE magnitude1012;
	/** Maximum magnitude of MSV from recording started
	 *  as a percentage of nominal voltage. For example,
	 *  if nominal voltage is 230V and maximum amplitude
	 *  is 23V, then maxMagnitude is 10%. */
	ADI_PQLIB_PCT_TYPE maxMagnitude;

} ADI_PQLIB_MSV;

/**
 * Structure to hold output parameters of each current
 * channel. This contains only channel specific output.
 * The parameters common to all channels such as unbalance
 * are kept as part of #ADI_PQLIB_PQ_PARAMS structure.
 */
typedef struct {
	/** Magnitude as RMS. Refer to IEC61000-4-30 Section 5.2.1. For full range
	 * signal this would be #ADI_PQLIB_MAX_RMS_VALUE.
	 */
	ADI_AFE_RMS_TYPE mag;
	/* Following parameters are relevant only if waveform buffer is enabled*/
#if ADI_PQLIB_CFG_DISABLE_CURRENT_WAVEFORM == 0
	/** Harmonics values as % of fundamental. The first element of the array is
	 *  second harmonic, second element is third harmonic and so on.
	 */
	ADI_PQLIB_PCT_TYPE harmonics[ADI_PQLIB_CFG_NUM_I_HARMONICS];
	/** Interharmonics values as % of fundamental. The first element of the
	 * array is first interharmonic (75Hz if fundamental is 50Hz),
	 * second element is second inter harmonic and so on. */
	ADI_PQLIB_PCT_TYPE interHarmonics[ADI_PQLIB_CFG_NUM_I_INTER_HARMONICS];
	/** THD  -  Subgroup total harmonic distortion in % as defined
	 * IEC-61000-4-7.
	 */
	ADI_PQLIB_PCT_TYPE thd;
#endif /*  ADI_PQLIB_CFG_DISABLE_CURRENT_WAVEFORM */

} ADI_PQLIB_I_PARAMS;

/**
 * Structure to hold output parameters for each voltage
 * channel. This contains only channel specific output.
 * The parameters common to all channels such as unbalance
 * are kept as part of #ADI_PQLIB_PQ_PARAMS structure.
 */
typedef struct {
	/** Magnitude as RMS. Refer to IEC61000-4-30 Section 5.2.1.For full range
	 * signal this would be #ADI_PQLIB_MAX_RMS_VALUE.
	 */
	ADI_AFE_RMS_TYPE mag;
	/** Under deviation and over deviation paramters defined IEC61000-4-30.*/
	ADI_PQLIB_UDOD udod;
	/* Following parameters are relevant only if waveform buffer is enabled*/
#if ADI_PQLIB_CFG_DISABLE_VOLTAGE_WAVEFORM == 0
	/** Harmonics values as % of fundamental. The first element of the array is
	 *  second harmonic, second element is third harmonic and so on.
	 */
	ADI_PQLIB_PCT_TYPE harmonics[ADI_PQLIB_CFG_NUM_V_HARMONICS];
	/** Interharmonics values as % of fundamental. The first element of the
	 * array is second interharmonic, second element is third inter harmonic
	 * and so on. */
	ADI_PQLIB_PCT_TYPE interHarmonics[ADI_PQLIB_CFG_NUM_V_INTER_HARMONICS];
	/** THD  -  subgroup total harmonic distortion as defined IEC-61000-4-7.
	 */
	ADI_PQLIB_PCT_TYPE thd;
#endif /* ADI_PQLIB_CFG_DISABLE_VOLTAGE_WAVEFORM == 0 */

} ADI_PQLIB_V_PARAMS;

/**
 * Structure to hold output power quality parameters for each
 * aggregation level.
 *
 */
typedef struct {
	/** Timestamp of end of the aggregation window used for  calculation.
	 */
	ADI_PQLIB_TIME timestamp;
	/** Sequence number of this aggregation window in 10 minute interval.
	 *  For 10 minute aggregation, this corresponds to the sequence number
	 *  from reset. This will start from 1.
	 * */
	uint32_t sequenceNumberIn10Min;
	/** Sequence number of current 10/12 cycles window in 150/180 cycle
	 * aggregation window Only relevant for 10/12 cycles aggregation.
	   This will start from 1 */
	uint32_t sequenceNumberIn150180;
	/** Indicates which all events  happened in the aggregation window.
	 * Refer to IEC61000-4-30 Section 4.7 for flagging requirements. */
	ADI_PQLIB_EVENT_FLAG eventFlag;
	/** Indicates any warning happened in the aggregation winodow.*/
	ADI_PQLIB_WARN_FLAG warnFlag;
	/** Voltage Parameters. */
	ADI_PQLIB_V_PARAMS voltageParams[ADI_PQLIB_CFG_NUM_V_CHANNELS];
	/** Current Parameters. */
	ADI_PQLIB_I_PARAMS currentParams[ADI_PQLIB_CFG_NUM_I_CHANNELS];
#if ADI_PQLIB_CFG_DISABLE_V_UNB == 0
	/** Structure to hold Voltage Unbalance parameters. */
	ADI_PQLIB_UNB voltageUnb;
#endif /* ADI_PQLIB_CFG_DISABLE_V_UNB == 0 */
#if ADI_PQLIB_CFG_DISABLE_I_UNB == 0
	/** Structure to hold Current Unbalance parameters. */
	ADI_PQLIB_UNB currentUnb;
#endif /* ADI_PQLIB_CFG_DISABLE_I_UNB == 0 */
	/** Average period of the aggregation window used for calculation.
	 */
	ADI_PQLIB_PERIOD_TYPE averagePeriod;
} ADI_PQLIB_PQ_PARAMS;

/**
 * Structure to hold dip parameters.
 * Refer to IEC61000-4-30 Section 5.4.2 for details.
 */
typedef struct {
	/** Start time for dip. */
	ADI_PQLIB_TIME startTime;
	/** End time for dip. */
	ADI_PQLIB_TIME endTime;
	/** duration of dip in cycles. */
	uint32_t durationInCycles;
	/** Min magnitude for dip. Referred in the standard as
	 *  residual voltage. Refer 5.4.3.2 of IEC61000-4-30.*/
	ADI_AFE_RMS_TYPE minMag;
} ADI_PQLIB_DIP;

/**
 * Structure to hold swell parameters.
 * Refer to IEC61000-4-30 Section 5.4.3 for details.
 */
typedef struct {
	/** Start time for swell. */
	ADI_PQLIB_TIME startTime;
	/** End time for swell. */
	ADI_PQLIB_TIME endTime;
	/** duration of swell in cycles. */
	uint32_t durationInCycles;
	/** Max magnitude for swell. Refer 5.4.3.2 of IEC61000-4-30.*/
	ADI_AFE_RMS_TYPE maxMag;

} ADI_PQLIB_SWELL;

/**
 * Structure to hold interruption parameters.
 * Refer to IEC61000-4-30 Section 5.5 for details
 */
typedef struct {
	/** Start time for interruption */
	ADI_PQLIB_TIME startTime;
	/** End time for interruption */
	ADI_PQLIB_TIME endTime;
	/** duration of interruption in cycles */
	uint32_t durationInCycles;

} ADI_PQLIB_INTRP;

/**
 * Structure to hold RVC parameters.
 * Refer to IEC61000-4-30 Section 5.11 for details.
 */
typedef struct {
	/** Start time for RVC. */
	ADI_PQLIB_TIME startTime;
	/** End time for RVC. */
	ADI_PQLIB_TIME endTime;
	/** duration of  RVC in cycles*/
	uint32_t durationInCycles;
	/** Delta Umax Refer to 5.11.3 of IEC-61000-4-30 */
	ADI_AFE_RMS_TYPE deltaUmax;
	/** Delta Uss. Refer to 5.11.3 of IEC-61000-4-30. */
	ADI_AFE_RMS_TYPE deltaUss;

} ADI_PQLIB_RVC;

/**
 *
 * Structure to hold the power quality events.
 * Count of each event indicates number of events detected
 * after last call to #adi_pqlib_GetOutput. If there are more
 * events detected than the buffer size, they are discarded.
 * In that case the call to #adi_pqlib_ProcessOneCycle will return event
 * overflow error code such as #ADI_PQLIB_RESULT_DIP_OUTPUT_OVERFLOW.
 */
typedef struct {
	/** Count of dips detected. */
	uint8_t dipCount;
	/** Count of swells detected. */
	uint8_t swellCount;
	/** Count of RVC events detected. */
	uint8_t rvcCount;
	/** Count of interruptions detected. */
	uint8_t intrpCount;
	/** Dip values. */
	ADI_PQLIB_DIP dips[ADI_PQLIB_CFG_NUM_DIPS];
	/** Swell values. */
	ADI_PQLIB_SWELL swells[ADI_PQLIB_CFG_NUM_SWELLS];
	/** Interruption values. */
	ADI_PQLIB_INTRP intrp[ADI_PQLIB_CFG_NUM_INTRP];
	/** Rvc values. */
	ADI_PQLIB_RVC rvc[ADI_PQLIB_CFG_NUM_RVC];

} ADI_PQLIB_EVENTS;

/**
 *
 * Structure to hold flicker output parameters.
 * Refer to IEC61000-4-15.
 */
typedef struct {
	/** Timestamp of end of the aggregation window used for calculation.*/
	ADI_PQLIB_TIME timestamp;
	/** Sequence number of this aggregation window in 2hr long term window.
	 *  For 2hr long term, this is the sequence number from reset. This
	 will start from 1 */
	uint32_t sequenceNumber;
	/** Indicates any event has happened in the aggregation window. */
	ADI_PQLIB_EVENT_FLAG eventFlag;
	/** Indicates any warning happened in the aggregation winodow.*/
	ADI_PQLIB_WARN_FLAG warnFlag;
	/** Flicker level. The level can be either Pinst, Pst, or Plt as defined
	 * by IEC61000-4-15.*/
	ADI_PQLIB_FLICKER_OUTPUT_TYPE level[ADI_PQLIB_CFG_NUM_V_CHANNELS];

} ADI_PQLIB_FLICKER;

/**
 * Structure to hold the library output. The output would be stored
 * in library internal memory as this structure. The API #adi_pqlib_GetOutput
 * can be used to get that pointer.
 */
typedef struct {
	/** Output status */
	ADI_PQLIB_OUTPUT_STATUS outputStatus;
	/** Once cycle voltage magnitude used in the library*/
	ADI_AFE_RMS_TYPE voltage1CycleMag[ADI_PQLIB_CFG_NUM_V_CHANNELS];
	/** Power frequency */
	ADI_PQLIB_POWER_FREQUENCY frequency;
#if ADI_PQLIB_CFG_DISABLE_EVENTS == 0
	/** Event Information - Dip, Swell, Interruption and RVC */
	ADI_PQLIB_EVENTS events;
#endif /* ADI_PQLIB_CFG_DISABLE_EVENTS == 0 */
	/** Parameters without aggregation -  10/12 cycles window*/
	ADI_PQLIB_PQ_PARAMS params1012Cycles;
	/** Parameters with 150/180 cycle aggregation  */
	ADI_PQLIB_PQ_PARAMS params150180Cycles;
	/** Parameters with 10 minute aggregation */
	ADI_PQLIB_PQ_PARAMS params10min;
#if ADI_PQLIB_CFG_DISABLE_FLICKER == 0
	/** Flicker - Instantaneous value. Refer to  IEC61000-4-15  4,7,3 -
	 * 10/12 cycle average */
	ADI_PQLIB_FLICKER flickerInst;
	/** Flicker short as defined by IEC61000-4-15 5.7.2 -  10 minute*/
	ADI_PQLIB_FLICKER flickerShort;
	/** Flicker long as defined by IEC61000-4-15 5.7.3  -  2 hour
	 * aggregation*/
	ADI_PQLIB_FLICKER flickerLong;
#endif /* ADI_PQLIB_CFG_DISABLE_FLICKER == 0 */
#if ADI_PQLIB_CFG_DISABLE_VOLTAGE_WAVEFORM == 0
	/** Mains signalling voltage magnitudes */
	ADI_PQLIB_MSV msvMagnitude[ADI_PQLIB_CFG_NUM_V_CHANNELS];
	/** Pointer to buffers to voltage waveform. Each buffer contains 1024
	 * samples. The order of channels are #ADI_PQLIB_PHASE_0,
	 * #ADI_PQLIB_PHASE_1, #ADI_PQLIB_PHASE_2  */
	ADI_AFE_WFRM_TYPE *pVoltageWaveform[ADI_PQLIB_CFG_NUM_V_CHANNELS];
#endif /* ADI_PQLIB_CFG_DISABLE_VOLTAGE_WAVEFORM */
#if ADI_PQLIB_CFG_DISABLE_CURRENT_WAVEFORM == 0
	/** Pointer to buffers to current waveform. Each buffer contains 1024
	 * samples. The order of channels are #ADI_PQLIB_PHASE_0,
	 * #ADI_PQLIB_PHASE_1, #ADI_PQLIB_PHASE_2, #ADI_PQLIB_PHASE_IN  */
	ADI_AFE_WFRM_TYPE *pCurrentWaveform[ADI_PQLIB_CFG_NUM_I_CHANNELS];
#endif /* ADI_PQLIB_CFG_DISABLE_CURRENT_WAVEFORM */

} ADI_PQLIB_OUTPUT;

/** @} */

/** @defgroup   PQAPIFUNC API Functions
 *  @brief This section covers all the API functions available as part of the
 *  library. All the APIs return enumeration codes in #ADI_PQLIB_RESULT.
 *  Refer to #ADI_PQLIB_RESULT for detailed documentation on return codes
 * @{
 */

/**
 * @brief Function to initialize Power Quality Library Software.
 * @details Assign memory and sets up the internal structures and
 configuration
 * of the library.
 *
 * @param[out] phDevice         Pointer to a location where the handle to
 * the library is written. This handle is required in all other library APIs.
 *
 * @param[in]  pStateMemory          The pointer to the memory for the
 * library.
 * This pointer must be 32-bit aligned. This memory must be persistent
 * in the application so it is recommended that it is not allocated in the
 * stack.
 * @param[in]  stateMemorySize  Size of the memory pointed by pStateMemory
 *                              This must be at least
 *                              #ADI_PQLIB_STATE_MEM_NUM_BYTES bytes.
 *
 * @param[in]  pTempMemory      The pointer to the temporary memory for the
 * library.
 * This pointer must be 32-bit aligned. This memory can be reused between
 * the process calls
 *
 * @param[in]  tempMemorySize   Size of the memory pointed by pTempMemory.
 *                              This must be at least
 *                              #ADI_PQLIB_TEMP_MEM_NUM_BYTES bytes.
 *
 *
 * @param[in]  pConfig          The pointer to the configuration structure.
 * This can be NULL if no configuration need to be changed.
 #adi_pqlib_SetConfig
 * can also be used to set the configuration at a later point.
 *

 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT documentation for details.
 *
 */
ADI_PQLIB_RESULT adi_pqlib_Open(ADI_PQLIB_HANDLE *phDevice, void *pStateMemory,
				uint32_t stateMemorySize, void *pTempMemory,
				uint32_t tempMemorySize,
				ADI_PQLIB_CONFIG *pConfig);

/**
 * @brief Function to reconfigure power quality library.
 * @details    This API can be called whenever the user wants to reconfigure
 *             library. This API will not reset the internal states of the
 * library. If reset is required, call #adi_pqlib_Reset after the
 * adi_pqlib_SetConfig call to reset the internal states of the library.
 *
 * @param[in]  hDevice         Handle to the library instance. This is
 * obtained from #adi_pqlib_Open
 * @param[in]  pConfig         The pointer to the configuration structure
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT adi_pqlib_SetConfig(ADI_PQLIB_HANDLE hDevice,
				     ADI_PQLIB_CONFIG *pConfig);

/**
 * @brief Function to  get configuration of the library
 * @details    This API can be called whenever the user wants to get run-time
 *             configurations of the library.
 *
 * @param[in]  hDevice         Handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[in]  pConfig         The pointer to the configuration structure
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT adi_pqlib_GetConfig(ADI_PQLIB_HANDLE hDevice,
				     ADI_PQLIB_CONFIG *pConfig);

/**
 * @brief Function to provide input to the library for every cycle.
 * @details  This APIs shall be called every time a new RMSONE data
 * is available from the AFE.
 * The #ADI_PQLIB_CYCLE_INPUT shall be filled with AFE register values
 * before calling this API.
 * @param[in]  hDevice         handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[in]  pInput          The pointer to the input structure
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 *
 */
ADI_PQLIB_RESULT adi_pqlib_ProcessOneCycle(ADI_PQLIB_HANDLE hDevice,
		ADI_PQLIB_CYCLE_INPUT *pInput);

/**
 * @brief Function to provide input to the library every 10/12 cycles
 * @details    The #ADI_PQLIB_1012_CYCLE_INPUT shall be filled using
 * paramters from AFE registers. This APIs shall be called  every time
 * RMS1012 output is available from the AFE.
 *
 * @param[in]  hDevice         handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[in]  pInput          The pointer to the input structure
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT
adi_pqlib_Process1012Cycles(ADI_PQLIB_HANDLE hDevice,
			    ADI_PQLIB_1012_CYCLE_INPUT *pInput);
/**
 * @brief Function to provide waveform buffer to the library
 * @details    The #ADI_PQLIB_WAVEFORM shall be filled using parameters
 * from AFE registers. This APIs shall be called whenever WFB data is
 * available from AFE.
 *
 * @param[in]  hDevice         handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[in]  pInput          The pointer to the input structure
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT adi_pqlib_ProcessWaveform(ADI_PQLIB_HANDLE hDevice,
		ADI_PQLIB_WAVEFORM *pInput);
/**
 * @brief Function to get Power Quality Parameters  output.
 * @details
 * The output power quality parameters are aggregated over various
 * aggregation windows. The function #adi_pqlib_GetOutputStatus can be used
 * to check which outputs are available. It is application's responsibility
 * to check the status and copy or display the output as per the
 * requirements. The library will be overwriting the data with new data for
 * next aggregation window.
 *
 * @param[in]  hDevice         Handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[out]  pOutput        The pointer to store the pointer of  output
 * structure. This would point to a library internal memory and will be
 * overwritten during subsequent process calls. The application should copy
 * the data to application memory if required for future use.
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT adi_pqlib_GetOutput(ADI_PQLIB_HANDLE hDevice,
				     ADI_PQLIB_OUTPUT **pOutput);

/**
 * @brief Function to get status of the output parameters.
 * @details    IEC61000-4-30 defines aggregation windows for many
 *             power quality parameters. So different outputs are available
 *             from the library at different time instants. This API helps
 *             the user to know which all outputs are available at a
 * particular time instant.
 *
 * @param[in]  hDevice         Handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[out]  pOutputStatus   The pointer to store output status
 *
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT
adi_pqlib_GetOutputStatus(ADI_PQLIB_HANDLE hDevice,
			  ADI_PQLIB_OUTPUT_STATUS *pOutputStatus);

/**
 * @brief Function to close the library.
 * @details  The library doesn't allocate any dynamic memory. So there
 * is no need to close the library. This is given for completeness and
 * future use.
 *
 * @param[in]  hDevice        Handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT adi_pqlib_Close(ADI_PQLIB_HANDLE hDevice);
/**
 * @brief Function to set correction coefficients.
 * @details This API is provided to correct frequency dependant gain in the
 * signal chain. Refer to #ADI_PQLIB_CORR_COEF for details on how to use the
 * API.
 *
 * @param[in]  hDevice         handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[in] pCorrCoef   Pointer to correction coefficients structure.
 * @param[in] nominalFrequency   nominalFrequency.
 *
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT
adi_pqlib_SetCorrectionCoefficients(
	ADI_PQLIB_HANDLE hDevice, ADI_PQLIB_CORR_COEF *pCorrCoef,
	ADI_PQLIB_NOMINAL_FREQUENCY nominalFrequency);

/**
 * @brief Sets Current time
 * @details This API updates internal time of the library.
 *
 * @param[in]  hDevice         Handle to the library instance. This is
 * obtained from #adi_pqlib_Open
 * @param[in] time  Present  time in milliseconds. Unix Time Format in
 * milliseconds is recommended
 * @param[in] uncertainty         Uncertainty of the time provided in
 * milliseconds. This is used to decide whether internal time should be
 * updated or not. Uncertainty/2 is added to time to account for the delay
 * between reading the RTC and calling adi_pqlib_SetTime. Internal time is
 * updated only if the difference of internal_time and time argument is
 * greater than uncertainty. Everytime when a time is reset, the
 * corresponding aggregation and period windows are flagged with
 * #ADI_PQLIB_WARN_FLAG_RTC_UPDATE_BITM.
 * @param[in] applyImmediately flag for applying the time immediately or
 * 10min boundary
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT
adi_pqlib_SetTime(ADI_PQLIB_HANDLE hDevice, ADI_PQLIB_TIME time,
		  uint16_t uncertainty, bool applyImmediately);

/**
 * @brief  Gets internal time of the library
 * @details This API gets internal time of the library. This can be used to
 * compare RTC time.
 *
 * @param[in]  hDevice         Handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[out] *pTime          Pointer to store current time
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT
adi_pqlib_GetTime(ADI_PQLIB_HANDLE hDevice, ADI_PQLIB_TIME *pTime);

/**
 * @brief  Reset  internal state of the library
 * @details This API can be used to clear all internal state of the library.
 * This will be useful to restart the processing after some bad waveforms or
 * glitches in the power line. The application decide whether to reset time
 * or not based on the argument clearTime. It is recommended to set time
 * explicitly  by #adi_pqlib_SetTime after calling this function
 *
 * @param[in]  hDevice      Handle to the library instance. This is
 * obtained from #adi_pqlib_Open.
 * @param[in]  clearTime    if True, set library internal time a to 0.
 * This can  be set to False if the application do not want to
 * clear library system time
 * @return  One of the codes documented in #ADI_PQLIB_RESULT. Refer to
 * #ADI_PQLIB_RESULT for details.
 */
ADI_PQLIB_RESULT
adi_pqlib_Reset(ADI_PQLIB_HANDLE hDevice, bool clearTime);

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* __ADI_PQLIB_H__ */
