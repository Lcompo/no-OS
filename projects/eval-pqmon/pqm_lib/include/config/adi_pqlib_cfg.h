/******************************************************************************
 Copyright (c) 2021 - 2022  Analog Devices Inc. All Rights Reserved.
 This software is proprietary & confidential to Analog Devices, Inc.
 and its licensors.
******************************************************************************/

/**
 * @file
 * @defgroup    PQCFG Static build-time configurations
 * @brief Build time configuration values for the library. The customers can
 * change this as per the application requirement. Allowed values for each
 * define are documented along with the defines
 * @{
 */

#ifndef __ADI_PQLIB_CONFIG_H__
#define __ADI_PQLIB_CONFIG_H__

/*============= I N C L U D E S =============*/
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// <<< Use Configuration Wizard in Context Menu >>>
// <h>  Static Configurations
//   <o> Number of voltage channels.
//   <i> Minimum: 1
//   <i> Maximum: 3
//      <1u=> 1 <2u=> 2 <3u=> 3
/** Number of voltage channels. The value should be <= 3
 *  The orders of the channels is Phase 0, Phase 1, Phase 2
 *  and decided by \ref PQ3PH or #ADI_PQLIB_PHASE_MAP
 */
#define ADI_PQLIB_CFG_NUM_V_CHANNELS 3

//   <o> Number of current channels.
//   <i> Minimum: 1
//   <i> Maximum: 4
//      <1u=> 1 <2u=> 2 <3u=> 3 <4u=> 4
/** Number of current channels. The value should be >= 1 and <= 4
 *  The order of the channels is Phase 0, Phase 1, Phase 2 and then neutral
 *  and decided by \ref PQ3PH or #ADI_PQLIB_PHASE_MAP
 *
 */
#define ADI_PQLIB_CFG_NUM_I_CHANNELS 4
//   <o> Number of voltage harmonics.
//   <i> Minimum: 1
//   <i> Maximum: 50
//   <1u-50u>
/** Number of voltage harmonics.
 * The value should be >= 1 and <= 50 */
#define ADI_PQLIB_CFG_NUM_V_HARMONICS 50

//   <o> Number of voltage Inter harmonics.
//   <i> Minimum: 1
//   <i> Maximum: 50
//   <1u-50u>
/** Number of voltage Inter harmonics.
 * The value should be >= 1 and <= 50 */
#define ADI_PQLIB_CFG_NUM_V_INTER_HARMONICS 50

//   <o> Number of current harmonics.
//   <i> Minimum: 1
//   <i> Maximum: 50
//   <1u-50u>
/** Number of current harmonics.
 *  The value should be >= 1 and <= 50 */
#define ADI_PQLIB_CFG_NUM_I_HARMONICS 50

//   <o> Number of current Inter harmonics.
//   <i> Minimum: 1
//   <i> Maximum: 50
//   <1u-50u>
/** Number of current Inter harmonics.
 *  The value should be >= 1 and <= 50 */
#define ADI_PQLIB_CFG_NUM_I_INTER_HARMONICS 50

//   <o> Length of dip buffer
//   <i> Number of dips to be stored in a 10/12 cycles window.
//   <i> Minimum: 1
//   <i> Maximum: 6
//   <1u-6u>
/** Number of dips to be stored at a time. This should be >= 1 */
#define ADI_PQLIB_CFG_NUM_DIPS 2

//   <o> Length of swell buffer
//   <i> Number of swells to be stored in a 10/12 cycles window.
//   <i> Minimum: 1
//   <i> Maximum: 6
//   <1u-6u>
/** Number of swells to be stored at a time. This should be >= 1 */
#define ADI_PQLIB_CFG_NUM_SWELLS 2

//   <o> Length of interruptions buffer.
//   <i> Number of interruptions to be stored in a 10/12 cycles window.
//    <i> Minimum: 1
//   <i> Maximum: 6
//   <1u-6u>
/** Number of interruptions to be stored at a time. This should be >= 1 */
#define ADI_PQLIB_CFG_NUM_INTRP 2

//   <o> Length of rvc buffer.
//   <i> Number of rvc to be stored in a 10/12 cycles window.
//   <i> Minimum: 1
//   <i> Maximum: 6
//   <1u-6u>
/** Number of rvc to be stored at a time. This should be >= 1 */
#define ADI_PQLIB_CFG_NUM_RVC 2

//   <o> Disable flicker detection.
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable flicker detection */
#define ADI_PQLIB_CFG_DISABLE_FLICKER 0

//   <o> Disable detection of events dip, swell, rvc, and interruptions.
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable detection of events dip, swell, rvc, and interruptions. When events
 * are disabled,
 * one cycle RMS values in #ADI_PQLIB_CYCLE_INPUT are not required */
#define ADI_PQLIB_CFG_DISABLE_EVENTS 0

//   <o> Disable detection of rvc event alone.
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable detection of rvc event */
#define ADI_PQLIB_CFG_DISABLE_RVC_EVENT 0
//   <o> Disable waveform error checking
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable waveform error checking. This will disable
 * checking the either voltage or current waveform input against max and
 * min values to reduce the cycles */
#define ADI_PQLIB_CFG_DISABLE_WAVEFORM_ERROR_CHECK 0
//   <o> Disable voltage waveform processing
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable voltage waveform processing. This will disable
 *  voltage harmonics, inter-harmonics, THD, unbalance, MSV and flicker. When
 * both voltage and current waveforms are disabled, there is no need to call
 * #adi_pqlib_ProcessWaveform API */
#define ADI_PQLIB_CFG_DISABLE_VOLTAGE_WAVEFORM 0
//   <o> Disable current waveform processing
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable current waveform processing. This will disable
 *  current harmonics, inter-harmonics, THD and unbalance.
 *  When both voltage and current waveforms are disabled, there is no need
 *  to call #adi_pqlib_ProcessWaveform API */
#define ADI_PQLIB_CFG_DISABLE_CURRENT_WAVEFORM 0
//   <o> Disable voltage unbalance calculation
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable voltage unbalance calculation. Voltage angles in
 * #ADI_PQLIB_CYCLE_INPUT values are not used if unbalance  is disabled*/
#define ADI_PQLIB_CFG_DISABLE_V_UNB 0
//   <o> Disable current unbalance calculation
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable current unbalance calculation. Current angle value in
 * #ADI_PQLIB_CYCLE_INPUT are not used if current unbalance is disabled*/
#define ADI_PQLIB_CFG_DISABLE_I_UNB 0
//   <o> Disable unbalance symmetrical components display calculation
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Disable unbalance symmetrical components display calculation.*/
#define ADI_PQLIB_CFG_DISABLE_SYMM_COMP 1

//   <o> Enable storing data to debug buffer.
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Enable storing data to debug buffer. This should be either 0 or 1 */
#define ADI_PQLIB_CFG_ENABLE_DEBUG 0

//   <o> Enable storing data to profile info buffer.
//   <i> This should be either 0 or 1.
//      <0u=> 0 <1u=> 1
/** Enable storing data to profile buffer. This should be either 0 or 1 */
#define ADI_PQLIB_CFG_ENABLE_PROFILE_INFO 0
// </h>

/** @defgroup    PQDEFAULT  Default configuration Values
 *  @brief These are the default values for configuration options provided
 * through #ADI_PQLIB_CONFIG
 * @{ */

// <h> Default values of run-time configuration options

//   <o>  Nominal voltage as RMS code
//   <i> Minimum: 1
//   <i> Maximum: 52702092
//   <1u-52702092u>
/** Default nominal voltage - Should be less than #ADI_PQLIB_MAX_RMS_VALUE */
#define ADI_PQLIB_CFG_DEFAULT_NOMINAL_VOLTAGE 26351046
/**  Nominal frequency  in #ADI_PQLIB_NOMINAL_FREQUENCY*/
//   <o> Nominal Frequency (Hz)
//   <0u=> 50 <1u=> 60
#define ADI_PQLIB_CFG_DEFAULT_NOMINAL_FREQUENCY 0
//   <o> Mains signalling carrier Frequency (mHz)
//   <i> Minimum: 50000
//   <i> Maximum: 2000000
//   <50000u-2000000u>
/** Default mains signalling voltage carrier frequency in
 * #ADI_PQLIB_FREQ_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_MSV_FREQUENCY 336000
//   <o> Mains signalling threshold as % of nominal voltage(1 mean 0.01%)
//   <i> Represented as ADI_PQLIB_PCT_TYPE.
//   <i> Minimum: 0
//   <i> Maximum: 10000
/** Default mains signalling voltage threshold in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_MSV_THRESHOLD 30
//   <o> Mains signalling recording length in milliseconds
//   <i> Minimum: 0
//   <i> Maximum: 120000
/** Default mains signalling recording length in milliseconds*/
#define ADI_PQLIB_CFG_DEFAULT_MSV_RECORDING_LENGTH 120000
//   <o> Flicker Model
//   <0u=> 230V 50Hz <1u=>  230V 60Hz <2u=> 120V 50Hz <3u=> 120V 60Hz
/** Default flicker model in #ADI_PQLIB_FLICKER_MODEL*/
#define ADI_PQLIB_CFG_DEFAULT_FLICKER_MODEL 0
// <h> Thresholds of events as % of nominal voltage
//  <i>All values are represented as type ADI_PQLIB_PCT_TYPE.
//   <i> E.g. 1 means 0.01%, 9200 means 92%
//   <o> Dip high threshold.
//   <i> Maximum: 10000
//   <i> Minimum: 0
/** Default high threshold value of dip as #ADI_PQLIB_PCT_TYPE */
#define ADI_PQLIB_CFG_DEFAULT_DIP_THRESHOLD_HIGH 9200
//   <o> Dip low threshold
/**  Default low threshold value of dip in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_DIP_THRESHOLD_LOW 9000
//   <o> Swell high threshold
/** Default high threshold value of swell in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_SWELL_THRESHOLD_HIGH 11000
//   <o> Swell low threshold
/** Default low threshold value of swell in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_SWELL_THRESHOLD_LOW 10800
//   <o>  Interruption high threshold
/** Default high threshold value of interrupt in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_INTRP_THRESHOLD_HIGH 1200
//   <o>  Interruption low threshold
/** Default low threshold value of interrupt in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_INTRP_THRESHOLD_LOW 1000
//   <o>  RVC high threshold
/** Default high threshold value of rvc in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_RVC_THRESHOLD_HIGH 500
//   <o>  RVC low threshold
/** Default low threshold value of rvc in #ADI_PQLIB_PCT_TYPE*/
#define ADI_PQLIB_CFG_DEFAULT_RVC_THRESHOLD_LOW 250
// </h>

/** @defgroup    PQ3PH  3 phase configurations
 *  @brief Some power quality parameter calculations such as unbalance
 *  requires the knowledge of the phases connected to each channel
 *  Usually the channel VA and IA of AFE is connected
 *  to phase A, channel VB, IB are connected to phase B (-120 degrees)
 *  and channel VC and IC are connected to Phase C (+120 degrees) and this
 *  configuration need not be changed. But if a different configuration is used
 *  use following table to remap the phases
 *
 *  Phase | Map Id
 *  ------|--------
 *  A ( &ang;0&deg; ) | 0
 *  B ( &ang;-120&deg; ) | 1
 *  C ( &ang;+120&deg; ) | 2
 *
 *  There is also a run-time configuration option provided if user
 *  want to change this configuration run-time. Refer to #ADI_PQLIB_PHASE_MAP
 * for details
 *
 * @{ */
// <h> Default Channel to Phase Mapping
// <i>  0 = 0 ,1 =  -120 ,2 = +120  (all in degrees), 3 = Neutral (only for
// current)
//   <o> AFE -  Default Channel VA phase
//      <0u=> 0 <1u=> 1 <2u=> 2 <3u=> 3
/** AFE -  Default channel VA phase in #ADI_PQLIB_PHASE_ID*/
#define ADI_PQLIB_CFG_DEFAULT_AFE_CHAN_VA 0

//   <o> AFE -  Default Channel VB phase
//      <0u=> 0 <1u=> 1 <2u=> 2 <3u=> 3
/** AFE -  Default channel VB phase in #ADI_PQLIB_PHASE_ID */
#define ADI_PQLIB_CFG_DEFAULT_AFE_CHAN_VB 1

//   <o> AFE -  Default Channel VC phase
//      <0u=> 0 <1u=> 1 <2u=> 2 <3u=> 3
/** AFE -  Default channel VC phase in #ADI_PQLIB_PHASE_ID */
#define ADI_PQLIB_CFG_DEFAULT_AFE_CHAN_VC 2

//   <o> AFE - Default Channel IA phase
//      <0u=> 0 <1u=> 1 <2u=> 2 <3u=> 3
/** AFE - Default channel IA phase in #ADI_PQLIB_PHASE_ID */
#define ADI_PQLIB_CFG_DEFAULT_AFE_CHAN_IA 0

//   <o> AFE - Default Channel IB phase
//      <0u=> 0 <1u=> 1 <2u=> 2 <3u=> 3
/** AFE - Default channel IB phase in #ADI_PQLIB_PHASE_ID */
#define ADI_PQLIB_CFG_DEFAULT_AFE_CHAN_IB 1

//   <o> AFE - Default Channel IC phase
//      <0u=> 0 <1u=> 1 <2u=> 2 <3u=> 3
/** AFE -  Default channel ic phase in #ADI_PQLIB_PHASE_ID */
#define ADI_PQLIB_CFG_DEFAULT_AFE_CHAN_IC 2

//   <o> AFE - Default Channel IN phase
//      <0u=> 0 <1u=> 1 <2u=> 2 <3u=> 3
/** AFE -  Default channel IN phase in #ADI_PQLIB_PHASE_ID */
#define ADI_PQLIB_CFG_DEFAULT_AFE_CHAN_IN 3
// </h>
/**
 * @}
 */
/**
 * @}
 */
// <<< end of configuration section >>>

#ifdef __cplusplus
}
#endif

#endif /* __ADI_PQLIB_H__ */
/**
 * @}
 */
