/******************************************************************************
 Copyright (c) 2021 - 2022  Analog Devices Inc. All Rights Reserved.
 This software is proprietary & confidential to Analog Devices, Inc.
 and its licensors.
******************************************************************************/

/**
 * @file
 * @brief     Defines for release versions
 * @{
 */

#ifndef __ADI_PQLIB_VERSION_H__
#define __ADI_PQLIB_VERSION_H__

/*============= I N C L U D E S =============*/
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*=============  D E F I N I T I O N S  =============*/

/** Product name */
#define ADI_PQLIB_PRODUCT_NAME "ADSW-PQ-CLS - Power Quality Library for ADI AFE"
/** define for major revision*/
#define ADI_PQLIB_MAJOR_REVISION 1
/** define for minor revision*/
#define ADI_PQLIB_MINOR_REVISION 2
/** define for patch number*/
#define ADI_PQLIB_PATCH_NUMBER 0
/** Id to differentiate different builds of same release.
 *  Updated through  automation*/
#define ADI_PQLIB_BUILD_ID 0x3be3e6eb

/** Release version */
#define ADI_PQLIB_VERSION                                                      \
  ((ADI_PQLIB_MAJOR_REVISION << 24) | (ADI_PQLIB_MINOR_REVISION << 16) |       \
   (ADI_PQLIB_PATCH_NUMBER << 8))

#ifdef __cplusplus
}
#endif

#endif /* __ADI_PQLIB_VERSION_H__ */

/**
 * @}
 */
