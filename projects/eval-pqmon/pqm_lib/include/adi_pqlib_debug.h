/******************************************************************************
 Copyright (c) 2021 - 2022  Analog Devices Inc. All Rights Reserved.
 This software is proprietary & confidential to Analog Devices, Inc.
 and its licensors.
******************************************************************************/
/**
 * @file
 * @brief       Definitions needed for pqlib debug code
 * @{
 */

#ifndef __ADI_PQLIB_DEBUG_H__
#define __ADI_PQLIB_DEBUG_H__

/*============= I N C L U D E S =============*/

#include "adi_pqlib.h"
#include "adi_pqlib_error.h"
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Debug ID
 */
typedef enum {
	/** Debug ID for cycle input */
	ADI_PQLIB_DBG_ID_INPUTCYCLE = 1u,
	/** Debug ID for 1012cycle input */
	ADI_PQLIB_DBG_ID_INPUT1012CYCLE,
	/** Debug ID for Waveform */
	ADI_PQLIB_DBG_ID_WFB,
} ADI_PQLIB_DBG_ID;

/** Header for the debug info */
#define DEBUG_MARKER 0xDE
/** Maximum size of the debug buffer */
#define DEBUG_BUFFER_SIZE 0xFFFF

/** Debug macros */
#if (ADI_PQLIB_CFG_ENABLE_DEBUG == 1)
/** Macro for initialization */
#define ADI_PQLIB_DBG_INIT() adi_pqlib_DbgInit()
/** Macro for adding data */
#define ADI_PQLIB_DBG_ADD(debugID, pData, numBytes)                            \
  adi_pqlib_DbgAdd(debugID, pData, numBytes)
/** Macro for setting up trigger */
#define ADI_PQLIB_DBG_TRIGGER(x, y) adi_pqlib_DbgTrigger(x, y)
/** Macro for getting debug structure pointer */
#define ADI_PQLIB_DBG_GET_INFO() adi_pqlib_DbgGetInfo(x)
/** Checks whether trigger has come*/
#define ADI_PQLIB_DBG_CHECK_TRIGGER(x, y) adi_pqlib_DbgCheckTrigger(x, y)
#else
/* Define as empty if debug is not enabled*/
/** Macro for initialization */
#define ADI_PQLIB_DBG_INIT(pDebug)
/** Macro for adding data */
#define ADI_PQLIB_DBG_ADD(debugID, pData, numBytes)
/** Macro for setting up trigger */
#define ADI_PQLIB_DBG_TRIGGER(x)
/** Macro for getting debug structure pointer */
#define ADI_PQLIB_DBG_GET_INFO()
/** Checks whether trigger has come*/
#define ADI_PQLIB_DBG_CHECK_TRIGGER(x, y)
#endif /* ADI_PQLIB_CFG_ENABLE_DEBUG */

/**
 * Enumerations for debug trggers
 */
typedef enum {
	/** No trigger - Appplication should directly access structure and
	 set the member triggered*/
	ADI_PQLIB_DEBUG_TRIGGER_NONE, //!< ADI_PQLIB_DEBUG_TRIGGER_NONE
	/** Output status will be  AND ed with user provided value and generate
	trigger if it is nbon zero*/
	ADI_PQLIB_DEBUG_TRIGGER_OUTPUT_STATUS, //!< ADI_PQLIB_DEBUG_TRIGGER_OUTPUT_STATUS
	/** Return code will be compared  against user rpovded value */
	ADI_PQLIB_DEBUG_TRIGGER_RETURN_CODE //!< ADI_PQLIB_DEBUG_TRIGGER_RETURN_CODE
} ADI_PQLIB_DEBUG_TRIGGER;

/**
 *
 * structure for debug info
 */
typedef struct {
	/** Debug buffer. */
	uint8_t buffer[DEBUG_BUFFER_SIZE];
	/** Write index. */
	uint32_t writeIndex;
	/** Read index. */
	uint32_t readIndex;
	/** starts adding data to debug buffer. */
	ADI_PQLIB_DEBUG_TRIGGER trigger;
	/** Flag to indicate whether debug store is triggered*/
	bool triggered;
	/** Optional trigger value*/
	uint32_t triggerValue;
} ADI_PQLIB_DEBUG;

/**
 *
 * Initialies  #ADI_PQLIB_DEBUG structure
 */
void adi_pqlib_DbgInit(void);

/**
 * Adds data to the debug buffer
 *
 * @param[in] debugID   - ID of the data that needs to be stored
 * @param[in] pData     - pointer to the data that needs to be stored
 * @param[in] numBytes  - number of bytes to store
 */
void adi_pqlib_DbgAdd(uint32_t debugID, uint8_t *pData, uint32_t numBytes);
/**
 * Sets trigger for storing the buffer
 *
 * @param trigger - Trigger type for storing debug data
 * @param value   - Value to check for trigger. This value will be checked
 */
void adi_pqlib_DbgTrigger(ADI_PQLIB_DEBUG_TRIGGER trigger, uint32_t value);
/**
 * Returns the debug info pointer so that
 *
 * application can dump the buffer for analysis
 * @return ADI_PQLIB_DEBUG pointer
 */
ADI_PQLIB_DEBUG *adi_pqlib_DbgGetInfo(void);

/**
 * Checks whether trigger has happened
 *
 * @param pOutput - Pointer to output structure
 * @param status  - Return code from the process functions
 */
void adi_pqlib_DbgCheckTrigger(ADI_PQLIB_OUTPUT *pOutput,
			       ADI_PQLIB_RESULT status);

#ifdef __cplusplus
}
#endif

#endif /* __ADI_PQLIB_DEBUG_H__ */
/**
 * @}
 */
