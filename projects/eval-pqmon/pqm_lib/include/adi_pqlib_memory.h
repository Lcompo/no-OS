/******************************************************************************
 Copyright (c) 2021 - 2022  Analog Devices Inc. All Rights Reserved.
 This software is proprietary & confidential to Analog Devices, Inc.
 and its licensors.
******************************************************************************/

/**
 * @file
 * @brief     Defines for power quality memory. This file includes
 * internal library defines to calculate memory size required. Include this
 * file only where #adi_pqlib_Open is called.
 * @{
 */

#ifndef __ADI_PQLIB_MEMORY__H_
#define __ADI_PQLIB_MEMORY__H_

/*============= I N C L U D E S =============*/
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*=============  D E F I N I T I O N S  =============*/

/** @addtogroup   PQINIT
 * @{
 */

/** Evaluation library is built with all features enabled */
/** State memory required in bytes for the library. Allocate a buffer aligned
 * to 32 bit boundary */
#define ADI_PQLIB_STATE_MEM_NUM_BYTES 41232
/** Temporary memory required in bytes for the library. Allocate a buffer
 * aligned to 32 bit boundary. */
#define ADI_PQLIB_TEMP_MEM_NUM_BYTES 14388

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* __ADI_PQLIB_MEMORY__H_ */

/**
 * @}
 */
