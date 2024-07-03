/******************************************************************************
 Copyright (c) 2021 - 2022  Analog Devices Inc. All Rights Reserved.
 This software is proprietary & confidential to Analog Devices, Inc.
 and its licensors.
******************************************************************************/

/**
 * @file
 * @defgroup    PQERR Return Codes and Error Types

    @section error_mg Error Management

    @brief ADI PowerQuality Library returns #ADI_PQLIB_RESULT for every API
 call. The application can look at the return codes and can take appropriate
 action for recovery.  If multiple errors are there, the API will return  the
    return code of first encountered error.

    If an API returns an error, its description in the doxygen documentation
    gives hints at the cause of the error and some ideas on how to handle these
 errors. How to handle each type of error is specific to each application.

    The warnings for various aggregation windows are also communicated through
    #ADI_PQLIB_WARN_FLAG member of #ADI_PQLIB_POWER_FREQUENCY  and
 #ADI_PQLIB_PQ_PARAMS structures. Each bit indicates various warnings occurred
 in that aggregation window.


    Errors detected at development time
    Regardless of the type of error, all errors should be identified and only
    ignored if the cause is known and understood, including informational
    errors.
    - Identify the API that returns the error.
    - Look at the doxygen description of the API that returned the error.
    - Ensure that any recommendations in the API description are followed.
    - If the steps above are followed, check the type of error with the
    #adi_pqlib_GetErrorType API and follow the handling recommendations for
    deployed products for the specific error type returned by the function.

    @note It is recommended that at the development stage all errors are
    evaluated, even the ones that can be ignored once the product is deployed,
    since they may help debugging issues in the application. Look into each
    error to determine the possible causes in each API.

 * @{
 */

#ifndef __ADI_PQLIB_ERROR_H__
#define __ADI_PQLIB_ERROR_H__

/*============= I N C L U D E S =============*/

#ifdef __cplusplus
extern "C" {
#endif
/**
 *
 * Return codes for PQLIB APIs functions. All APIs return one of these codes.
 * If multiple errors are there, the API will return the codes corresponding
 * to first encountered error. The user should run and check the return codes
 * after fixing the error to know about other errors. The library also tags
 * the output with warning flags. Refer @ref PQFLAG for details on warning
 * flags.
 */
typedef enum {
	/** No error, API succeeded. */
	ADI_PQLIB_RESULT_SUCCESS = 0u,
	/** Internal error detected. The APIs are not expected to return this.
	 * This shows either there is bug inside the library or the memroy is
	 * corrupted.*/
	ADI_PQLIB_RESULT_INTERNAL_ERROR,
	/** State memory provided to #adi_pqlib_Open is less than required memory
	 * for the configuration.
	 */
	ADI_PQLIB_RESULT_INSUFFICIENT_STATE_MEMORY,
	/** Temporary memory provided to #adi_pqlib_Open is less than required
	 * memory for the configuration.
	 */
	ADI_PQLIB_RESULT_INSUFFICIENT_TEMP_MEMORY,
	/**There is a zero crossing timeout in the referece channel. This usually
	 * happens when there is no signal in the reference channel
	 * This return code may be used to detect absence of signals
	 * at the AFE input and to detect the start of testing for
	 * certification requirement
	 */
	ADI_PQLIB_RESULT_REFZX_TIMEOUT,
	/** Invalid handle is passed to the API. This happens either
	 * #adi_pqlib_Open is not called or memory is corrupted. */
	ADI_PQLIB_RESULT_INVALID_HANDLE,
	/** One of the pointers passed to the API is NULL.*/
	ADI_PQLIB_RESULT_NULL_PTR,
	/** The timestamp provided to the API is invalid. In the current release,
	 * this happens only when 0 is passed as timestamp to #adi_pqlib_SetTime
	 * function. Note that internal time is still updated irrespective of this
	 * error.
	 */
	ADI_PQLIB_RESULT_INVALID_TIME,
	/** Sequence number of input provided to process APIs is incorrect. Library
	 * checks whether the sequence number is one more than the sequence of
	 * number provided to the previous call of same API. This might indicate
	 * data loss but can be ignored if it is expected in an application.
	 */
	ADI_PQLIB_RESULT_INVALID_SEQUENCE_NUMBER,
	/** AFE Register PERIOD value given to the library is invalid.*/
	ADI_PQLIB_RESULT_INVALID_PERIOD,
	/** One of the values in waveform input given to the library is invalid.*/
	ADI_PQLIB_RESULT_INVALID_WAVEFORM,
	/** AFE Register RMS value is invalid.*/
	ADI_PQLIB_RESULT_INVALID_RMS,
	/** Nominal voltage configured is invalid.*/
	ADI_PQLIB_RESULT_INVALID_NOMINAL_VOLTAGE,
	/** Nominal frequency configured is invalid.*/
	ADI_PQLIB_RESULT_INVALID_NOMINAL_FREQUENCY,
	/** Dip Config is invalid. */
	ADI_PQLIB_RESULT_INVALID_DIP_CONFIG,
	/** Swell Config is invalid.*/
	ADI_PQLIB_RESULT_INVALID_SWELL_CONFIG,
	/** Interruption Config is invalid.*/
	ADI_PQLIB_RESULT_INVALID_INTRP_CONFIG,
	/** RVC Config is invalid.*/
	ADI_PQLIB_RESULT_INVALID_RVC_CONFIG,
	/**Invalid correction coefficients are passed to the API.
	 * This could be due to an issue with one of the parameters in
	 * the structure #ADI_PQLIB_CORR_COEF  passed as argument.*/
	ADI_PQLIB_RESULT_INVALID_CORR_COEF,
	/** Inconsistencies in channel configurations. This usually happens
	 * when the phase values populated in #ADI_PQLIB_PHASE_MAP is not valid.
	 * Crosscheck that same phase value is not given to multiple channels.*/
	ADI_PQLIB_RESULT_INVALID_CHANNEL_CONFIG,
	/** Invalid mains signalling config. Either threshold is greater than 100%
	 * or frequency is greater than #ADI_PQLIB_MAX_MSV_FREQUENCY or recording
	 * length is more than #ADI_PQLIB_MAX_MSV_RECORDING_LENGTH*/
	ADI_PQLIB_RESULT_INVALID_MSV_CONFIG,
	/** Dip event started in this call to API.*/
	ADI_PQLIB_RESULT_DIP_STARTED,
	/** Dip event ended in this call to API.*/
	ADI_PQLIB_RESULT_DIP_ENDED,
	/** Swell event started in this call to API.*/
	ADI_PQLIB_RESULT_SWELL_STARTED,
	/** Swell event ended in this call to API.*/
	ADI_PQLIB_RESULT_SWELL_ENDED,
	/** Interruption event started in this call to API.*/
	ADI_PQLIB_RESULT_INTRP_STARTED,
	/** Interruption event ended in this call to API.*/
	ADI_PQLIB_RESULT_INTRP_ENDED,
	/** RVC event started.*/
	ADI_PQLIB_RESULT_RVC_STARTED,
	/** RVC event ended in this call to API.*/
	ADI_PQLIB_RESULT_RVC_ENDED,
	/** Dip output buffer in #ADI_PQLIB_EVENTS overflowed. This happens when
	 * more dips occurs in a 10/12 cycle window.*/
	ADI_PQLIB_RESULT_DIP_OUTPUT_OVERFLOW,
	/** Swell output buffer #ADI_PQLIB_EVENTS overflowed. This happens when
	 * more swells occurs in a 10/12 cycle window.*/
	ADI_PQLIB_RESULT_SWELL_OUTPUT_OVERFLOW,
	/** Interruption output buffer #ADI_PQLIB_EVENTS overflowed. This happens
	 * when more intrp occurs in a 10/12 cycle window.*/
	ADI_PQLIB_RESULT_INTRP_OUTPUT_OVERFLOW,
	/** RVC output buffer #ADI_PQLIB_EVENTS overflowed. This happens when
	 * more rvc occurs in a 10/12 cycle window.*/
	ADI_PQLIB_RESULT_RVC_OUTPUT_OVERFLOW,
	/** Waveform buffer is not full - This indicates
	 * #adi_pqlib_ProcessWaveform is not called correctly before calling
	 * #adi_pqlib_Process1012Cycles API. Refer to #ADI_PQLIB_ERROR_TYPE_TIMING
	 * correct sequence of API calls.
	 */
	ADI_PQLIB_RESULT_WAVEFORM_NOT_READY,
	/** #adi_pqlib_ProcessWaveform is called more frequently than it should be.
	 *  Refer to #ADI_PQLIB_ERROR_TYPE_TIMING correct sequence of API calls.
	 */
	ADI_PQLIB_RESULT_WAVEFORM_OVERFLOW,
	/** #adi_pqlib_ProcessOneCycle is called less than 10/12 when
	   #adi_pqlib_Process1012Cycles is called. Refer to
	 #ADI_PQLIB_ERROR_TYPE_TIMING correct
	 * sequence of API calls*/
	ADI_PQLIB_RESULT_RMSONE_NOT_READY,
	/** Fundamental magnitude calculated is zero. This is not expected to
	 * happen in real application as there will be some noise even in the
	 * absence of input signals. The application will return 0 for all
	 * parameters depending on waveforms. This can be ignored if the
	 * application is in a test mode where all input signals can be 0s.
	 */
	ADI_PQLIB_RESULT_FUND_MAG_ZERO,
	/** Initialization of FFT module failed. Could be an issue with CMSIS FFT
	   library.*/
	ADI_PQLIB_RESULT_FFT_INIT_FAILED,
	/** Mains signalling detected for first time for the recording window */
	ADI_PQLIB_RESULT_MAINS_SIGNALLING_DETECTED,

} ADI_PQLIB_RESULT;
/**
 *
 * Error types of #ADI_PQLIB_RESULT codes. This can be used to handle
 * various types of errors in the application.
 */
typedef enum {
	/** No error - The return codes are as expected. */
	ADI_PQLIB_ERROR_TYPE_NONE,
	/** Error in AFE Registers. One of the AFE registers contains
	 * invalid value. It could be an issue with SPI communication or
	 * memory corruption. If this happens at development time, crosscheck that
	 * correct registers are read by the application and there is no conflict
	 *in SPI access. To handle the error in a deployed product the application
	 *may reset the AFE.
	 **/
	ADI_PQLIB_ERROR_TYPE_AFE,
	/**Error in configuration values or the memory provided to the library is
	 * not enough. Configuration values provided through #adi_pqlib_SetConfig
	 * or #adi_pqlib_Open are not expected by the library. The API
	 * documentation and application code should be reviewed for this category
	 * of errors. This is not expected to happen in a deployed product. All
	 * expected configuration should be verified during development time.
	 *
	 * If the application wanted to handle a case when the error happens in a
	 * deployed product, it is recommended to reset configuration to a default
	 * one with #adi_pqlib_SetConfig and warn the user about wrong
	 * configuration.
	 * */
	ADI_PQLIB_ERROR_TYPE_CONFIG,
	/** These kinds of error occurs due to timing in the application.
	 * It can happen if RTC time is not proper or process API are not
	 * called in correct sequence. The input structures to process APIs contain
	 * sequence numbers. This has to be incremented everytime before the call
	 * to library. Also the library expects 10 or 12 #adi_pqlib_ProcessOneCycle
	 * and 4 #adi_pqlib_ProcessWaveform calls for every
	 * #adi_pqlib_Process1012Cycles call.
	 *
	 * The application should check sanity of RTC and the calling sequence of
	 * process APIs if this error is thrown by the library during development.
	 * If this happens in a deployed product, the library will try to  resync
	 * automatically for the sequence errors. If the errors are thrown
	 * continuously for more than 10/12 cycles, it is recommended to call
	 * #adi_pqlib_Reset to reset the library.*/
	ADI_PQLIB_ERROR_TYPE_TIMING,
	/** Informational return codes.  This can be ignored if the application
	 * doesn't need those information. */
	ADI_PQLIB_ERROR_TYPE_INFO,
	/** Unknown errors -  API are not expected to return these type of
	   errors. This could be due to wrong return codes passed to
	   #adi_pqlib_GetErrorType function or memory corruption in the
	   application.
	 */
	ADI_PQLIB_ERROR_TYPE_UNKNOWN
} ADI_PQLIB_ERROR_TYPE;
/**
 * @brief  Returns error messages. This function translates the error code
 * returned by the library to a more meaningful enum name.
 *
 * @param[in] code - Code returned by the library
 * @return String for for the enum name
 */
const char *adi_pqlib_GetErrorMessage(ADI_PQLIB_RESULT code);

/**
 * @brief  Returns error type
 * @details Various return codes from the API calls may indicate different
 * meanings. This function is provided to classify the return codes in
 * #ADI_PQLIB_RESULT to different categories to help application to take
 * appropriate recovery steps.
 * @ref PQERR for more details.
 *
 * @param[in]  error         #ADI_PQLIB_RESULT whose error type is needed.
 * @param[out] pErrorType    Pointer to store error type.
 *
 * @return     #ADI_PQLIB_RESULT_SUCCESS
 * @return     #ADI_PQLIB_RESULT_NULL_PTR if error type pointer is null.
 */
ADI_PQLIB_RESULT
adi_pqlib_GetErrorType(ADI_PQLIB_RESULT error,
		       ADI_PQLIB_ERROR_TYPE *pErrorType);

#ifdef __cplusplus
}
#endif

#endif /* __ADI_PQLIB_ERROR_H__ */
/**
 * @}
 */
