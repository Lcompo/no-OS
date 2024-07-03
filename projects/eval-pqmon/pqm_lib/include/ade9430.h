/* ================================================================================
    Project      :   ADE9430
    File         :   ADE9430.h
    Description  :   C header file contains macros for Registers' address
relative to instances and plain bit-fields.

    Date         :   2022-04-26

    Copyright (c) 2018-2022 Analog Devices, Inc.  All Rights Reserved.
    This software is proprietary and confidential to Analog Devices, Inc.
    and its licensors.

    This file was auto-generated. Do not make local changes to this file.
================================================================================
*/

#ifndef ADE9430_H
#define ADE9430_H

/* #Memory Base Offsets ######################################### */

#define BASE_REG_MAP_USR_RAM 0x0
#define BASE_ADE9430_ANALOG_MOD1 0x0
#define BASE_REG_MAP_OTPC 0x100
#define BASE_REG_MAP_COMM_RAM 0x200
#define BASE_REG_MAP_32BITS 0x400
#define BASE_REG_MAP_16BITS 0x480
#define BASE_FE_DSP_MAP 0x500
#define BASE_REG_REMAP 0x600
#define BASE_REG_MAP_RSV_TST 0x700
#define BASE_WAVEFORM_BUFFER_MAP 0x800
#define BASE_DSP_GPIO_PORT 0xfffc

/* ############################################################## */

#define REG_AIGAIN 0x000 /* Phase A current gain adjust. */

#define REG_AIGAIN0                                                            \
  0x001 /* Phase A multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, AIGAIN0 through AIGAIN5, is    \
           applied based on the AIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_AIGAIN1                                                            \
  0x002 /* Phase A multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, AIGAIN0 through AIGAIN5, is    \
           applied based on the AIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_AIGAIN2                                                            \
  0x003 /* Phase A multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, AIGAIN0 through AIGAIN5, is    \
           applied based on the AIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_AIGAIN3                                                            \
  0x004 /* Phase A multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, AIGAIN0 through AIGAIN5, is    \
           applied based on the AIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_AIGAIN4                                                            \
  0x005 /* Phase A multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, AIGAIN0 through AIGAIN5, is    \
           applied based on the AIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_APHCAL0                                                            \
  0x006 /* Phase A multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the APHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the APHCAL0 through APHCAL4 value is applied based on the      \
           AIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_APHCAL1                                                            \
  0x007 /* Phase A multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the APHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the APHCAL0 through APHCAL4 value is applied based on the      \
           AIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_APHCAL2                                                            \
  0x008 /* Phase A multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the APHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the APHCAL0 through APHCAL4 value is applied based on the      \
           AIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_APHCAL3                                                            \
  0x009 /* Phase A multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the APHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the APHCAL0 through APHCAL4 value is applied based on the      \
           AIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_APHCAL4                                                            \
  0x00A /* Phase A multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the APHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the APHCAL0 through APHCAL4 value is applied based on the      \
           AIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_AVGAIN 0x00B /* Phase A voltage gain adjust. */

#define REG_AIRMSOS                                                            \
  0x00C /* Phase A current rms offset for filter based AIRMS calculation. */

#define REG_AVRMSOS                                                            \
  0x00D /* Phase A voltage rms offset for filter based AVRMS calculation. */

#define REG_APGAIN                                                             \
  0x00E /* Phase A power gain adjust for AWATT, AVA, AVAR, AFWATT, AFVA and    \
           AFVAR calculations */

#define REG_AWATTOS                                                            \
  0x00F /* Phase A total active power offset correction for AWATT calculation  \
         */

#define REG_AVAROS                                                             \
  0x010 /* Phase A total reactive power offset correction for AVAR             \
           calculation */

#define REG_AFWATTOS                                                           \
  0x011 /* Phase A fundamental active power offset correction for AFWATT       \
           calculation. */

#define REG_AFVAROS                                                            \
  0x012 /* Phase A fundamental reactive power offset correction for AFVAR      \
           calculation */

#define REG_AIFRMSOS                                                           \
  0x013 /* Phase A current rms offset for fundamental current rms, AIFRMS      \
           calculation */

#define REG_AVFRMSOS                                                           \
  0x014 /* Phase A voltage rms offset for fundamental voltage rms, AVFRMS      \
           calculation */

#define REG_AVRMSONEOS                                                         \
  0x015 /* Phase A voltage rms offset for the one cycle rms AVRMSONE           \
           calculation */

#define REG_AIRMSONEOS                                                         \
  0x016 /* Phase A current rms offset for the one cycle rms AIRMSONE           \
           calculation */

#define REG_AVRMS1012OS                                                        \
  0x017 /* Phase A voltage rms offset for 10/12 cycle rms, AVRMS1012           \
           calculation */

#define REG_AIRMS1012OS                                                        \
  0x018 /* Phase A current rms offset for 10/12 cycle rms, AIRMS1012           \
           calculation */

#define REG_BIGAIN 0x020 /* Phase B current gain adjust. */

#define REG_BIGAIN0                                                            \
  0x021 /* Phase B multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, BIGAIN0 through BIGAIN5, is    \
           applied based on the BIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_BIGAIN1                                                            \
  0x022 /* Phase B multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, BIGAIN0 through BIGAIN5, is    \
           applied based on the BIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_BIGAIN2                                                            \
  0x023 /* Phase B multipoint gain correction facto. If multipoint gain and    \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, BIGAIN0 through BIGAIN5, is    \
           applied based on the BIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_BIGAIN3                                                            \
  0x024 /* Phase B multipoint gain correction facto. If multipoint gain and    \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, BIGAIN0 through BIGAIN5, is    \
           applied based on the BIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_BIGAIN4                                                            \
  0x025 /* Phase B multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, BIGAIN0 through BIGAIN5, is    \
           applied based on the BIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_BPHCAL0                                                            \
  0x026 /* Phase B multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the BPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the BPHCAL0 through BPHCAL4 value is applied based on the      \
           BIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_BPHCAL1                                                            \
  0x027 /* Phase B multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the BPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the BPHCAL0 through BPHCAL4 value is applied based on the      \
           BIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_BPHCAL2                                                            \
  0x028 /* Phase B multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the BPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the BPHCAL0 through BPHCAL4 value is applied based on the      \
           BIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_BPHCAL3                                                            \
  0x029 /* Phase B multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the BPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the BPHCAL0 through BPHCAL4 value is applied based on the      \
           BIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_BPHCAL4                                                            \
  0x02A /* Phase B multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the BPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the BPHCAL0 through BPHCAL4 value is applied based on the      \
           BIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_BVGAIN 0x02B /* Phase B voltage gain adjust. */

#define REG_BIRMSOS                                                            \
  0x02C /* Phase B current rms offset for BIRMS calculation                    \
         */

#define REG_BVRMSOS                                                            \
  0x02D /* Phase B voltage rms offset for BVRMS calculation                    \
         */

#define REG_BPGAIN                                                             \
  0x02E /* Phase B power gain adjust for BWATT, BVA, BVAR, BFWATT, BFVA and    \
           BFVAR calculations */

#define REG_BWATTOS                                                            \
  0x02F /* Phase B total active power offset correction for BWATT calculation  \
         */

#define REG_BVAROS                                                             \
  0x030 /* Phase B total reactive power offset correction for BVAR             \
           calculation */

#define REG_BFWATTOS                                                           \
  0x031 /* Phase B fundamental active power offset correction for BFWATT       \
           calculation. */

#define REG_BFVAROS                                                            \
  0x032 /* Phase B fundamental reactive power offset correction for BFVAR      \
           calculation */

#define REG_BIFRMSOS                                                           \
  0x033 /* Phase B current rms offset for fundamental current rms, BIFRMS      \
           calculation */

#define REG_BVFRMSOS                                                           \
  0x034 /* Phase B voltage rms offset for fundamental voltage rms, BVFRMS      \
           calculation */

#define REG_BVRMSONEOS                                                         \
  0x035 /* Phase B voltage rms offset for the one cycle rms BVRMSONE           \
           calculation */

#define REG_BIRMSONEOS                                                         \
  0x036 /* Phase B current rms offset for the one cycle rms BIRMSONE           \
           calculation */

#define REG_BVRMS1012OS                                                        \
  0x037 /* Phase B voltage rms offset for 10/12 cycle rms, BVRMS1012           \
           calculation */

#define REG_BIRMS1012OS                                                        \
  0x038 /* Phase B current rms offset for 10/12 cycle rms, BVRMS1012           \
           calculation */

#define REG_CIGAIN 0x040 /* Phase C current gain adjust. */

#define REG_CIGAIN0                                                            \
  0x041 /* Phase C multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, CIGAIN0 through CIGAIN5, is    \
           applied based on the CIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_CIGAIN1                                                            \
  0x042 /* Phase C multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, CIGAIN0 through CIGAIN5, is    \
           applied based on the CIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_CIGAIN2                                                            \
  0x043 /* Phase C multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, CIGAIN0 through CIGAIN5, is    \
           applied based on the CIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_CIGAIN3                                                            \
  0x044 /* Phase C Multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, CIGAIN0 through CIGAIN5, is    \
           applied based on the CIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_CIGAIN4                                                            \
  0x045 /* Phase C Multipoint gain correction factor. If multipoint gain and   \
           phase compensation is enabled, with MTEN = 1 in the CONFIG0         \
           register, an additional gain factor, CIGAIN0 through CIGAIN5, is    \
           applied based on the CIRMS current rms amplitude and the MTTHR_Lx   \
           and MTTHR_Hx register values. */

#define REG_CPHCAL0                                                            \
  0x046 /* Phase C multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the CPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the CPHCAL0 through CPHCAL4 value is applied, based on the     \
           CIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_CPHCAL1                                                            \
  0x047 /* Phase C multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the CPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the CPHCAL0 through CPHCAL4 value is applied, based on the     \
           CIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_CPHCAL2                                                            \
  0x048 /* Phase C multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the CPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the CPHCAL0 through CPHCAL4 value is applied, based on the     \
           CIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_CPHCAL3                                                            \
  0x049 /* Phase C multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the CPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the CPHCAL0 through CPHCAL4 value is applied, based on the     \
           CIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_CPHCAL4                                                            \
  0x04A /* Phase C multipoint phase correction factor. If multipoint phase     \
           and gain calibration is disabled, with MTEN = 0 in the CONFIG0      \
           register, then the CPHCAL0 phase compensation is applied. If        \
           multipoint phase and gain correction is enabled, with MTEN = 1,     \
           then the CPHCAL0 through CPHCAL4 value is applied, based on the     \
           CIRMS current rms amplitude and the MTTHR_Lx and MTTHR_Hx register  \
           values. */

#define REG_CVGAIN 0x04B /* Phase C voltage gain adjust. */

#define REG_CIRMSOS                                                            \
  0x04C /* Phase C current rms offset for CIRMS calculation                    \
         */

#define REG_CVRMSOS                                                            \
  0x04D /* Phase C voltage rms offset for CVRMS calculation                    \
         */

#define REG_CPGAIN                                                             \
  0x04E /* Phase C power gain adjust for CWATT, CVA, CVAR, CFWATT, CFVA and    \
           CFVAR calculations */

#define REG_CWATTOS                                                            \
  0x04F /* Phase C total active power offset correction for CWATT calculation  \
         */

#define REG_CVAROS                                                             \
  0x050 /* Phase C total reactive power offset correction for CVAR             \
           calculation */

#define REG_CFWATTOS                                                           \
  0x051 /* Phase C fundamental active power offset correction for CFWATT       \
           calculation. */

#define REG_CFVAROS                                                            \
  0x052 /* Phase C fundamental reactive power offset correction for CFVAR      \
           calculation */

#define REG_CIFRMSOS                                                           \
  0x053 /* Phase C current rms offset for fundamental current rms, CIFRMS      \
           calculation */

#define REG_CVFRMSOS                                                           \
  0x054 /* Phase C voltage rms offset for fundamental voltage rms, CVFRMS      \
           calculation */

#define REG_CVRMSONEOS                                                         \
  0x055 /* Phase C voltage rms offset for the one cycle rms CVRMSONE           \
           calculation */

#define REG_CIRMSONEOS                                                         \
  0x056 /* Phase C current rms offset for the one cycle rms CIRMSONE           \
           calculation */

#define REG_CVRMS1012OS                                                        \
  0x057 /* Phase C voltage rms offset for 10/12 cycle rms, CVRMS1012           \
           calculation */

#define REG_CIRMS1012OS                                                        \
  0x058 /* Phase C current rms offset for 10/12 cycle rms, CIRMS1012           \
           calculation */

#define REG_CONFIG0 0x060       /* Configuration Register 0. */
#define BITP_CONFIG0_ISUM_CFG 0 /* ISUM Calculation configuration. */
#define BITP_CONFIG0_HPFDIS                                                    \
  3 /* Set this bit to disable high-pass filters in all the voltage and        \
       current channels. */
#define BITP_CONFIG0_MTEN                                                      \
  4 /* Set this bit to enable multipoint phase and gain compensation. If       \
       enabled, an additional gain factor, xIGAIN0 through xIGAIN5, is         \
       applied to the current channel based on the xIRMS current rms           \
       amplitude and the MTTHR_Lx and MTTHR_Hx register values. */
#define BITP_CONFIG0_INTEN                                                     \
  5 /* Set this bit to enable the integrators in the phase current channels.   \
       The neutral current channel integrator is managed by the ININTEN bit    \
       in the CONFIG0 register. */
#define BITP_CONFIG0_ZX_SRC_SEL                                                \
  6 /* This bit selects whether data going into the zero-crossing detection    \
       circuit comes before the high-pass filter, integrator, and phase        \
       compensation or afterwards. */
#define BITP_CONFIG0_RMS_SRC_SEL                                               \
  7 /* Selects which samples are used for the RMS and 10/12 cycle rms          \
       calculation */
#define BITP_CONFIG0_VNOMA_EN                                                  \
  8 /* Set this bit to use the nominal phase voltage rms, VNOM, in the         \
       computation of Phase A total apparent power, AVA. */
#define BITP_CONFIG0_VNOMB_EN                                                  \
  9 /* Set this bit to use the nominal phase voltage rms, VNOM, in the         \
       computation of Phase B total apparent power, BVA. */
#define BITP_CONFIG0_VNOMC_EN                                                  \
  10 /* Set this bit to use the nominal phase voltage rms, VNOM, in the        \
        computation of Phase C total apparent power, CVA. */
#define BITP_CONFIG0_ININTEN                                                   \
  11 /* Set this bit to enable the digital integrator in the Neutral Current   \
        channel. */
#define BITP_CONFIG0_DISAPLPF                                                  \
  12 /* Set this bit to disable the low pass filter in the total active power  \
        datapath. */
#define BITP_CONFIG0_DISRPLPF                                                  \
  13 /* Set this bit to disable the low pass filter in the total reactive      \
        power datapath. */
#define BITP_CONFIG0_RMSONE_RATE                                               \
  14 /* 0: RMSONE updates every one cycle. 1: RMSONE updates every             \
        half-cycle. */
#define BITP_CONFIG0_RESAMPLE_RATE                                             \
  15 /* 0: 1024 points per 10 or 12 cycles (10 cycles for 50Hz system, 12      \
        cycles for 60Hz system). 1: 128 points per line cycle. */
#define BITP_CONFIG0_PERIOD_AVG_CFG                                            \
  16 /* further averaging to make the period value less jittery. 00: do        \
        nothing, 01: average-by-8, 10: average-by-16, 11: average-by-32 */
#define BITL_CONFIG0_ISUM_CFG 2
#define BITL_CONFIG0_HPFDIS 1
#define BITL_CONFIG0_MTEN 1
#define BITL_CONFIG0_INTEN 1
#define BITL_CONFIG0_ZX_SRC_SEL 1
#define BITL_CONFIG0_RMS_SRC_SEL 1
#define BITL_CONFIG0_VNOMA_EN 1
#define BITL_CONFIG0_VNOMB_EN 1
#define BITL_CONFIG0_VNOMC_EN 1
#define BITL_CONFIG0_ININTEN 1
#define BITL_CONFIG0_DISAPLPF 1
#define BITL_CONFIG0_DISRPLPF 1
#define BITL_CONFIG0_RMSONE_RATE 1
#define BITL_CONFIG0_RESAMPLE_RATE 1
#define BITL_CONFIG0_PERIOD_AVG_CFG 2
#define BITM_CONFIG0_ISUM_CFG 0x00000003
#define BITM_CONFIG0_HPFDIS 0x00000008
#define BITM_CONFIG0_MTEN 0x00000010
#define BITM_CONFIG0_INTEN 0x00000020
#define BITM_CONFIG0_ZX_SRC_SEL 0x00000040
#define BITM_CONFIG0_RMS_SRC_SEL 0x00000080
#define BITM_CONFIG0_VNOMA_EN 0x00000100
#define BITM_CONFIG0_VNOMB_EN 0x00000200
#define BITM_CONFIG0_VNOMC_EN 0x00000400
#define BITM_CONFIG0_ININTEN 0x00000800
#define BITM_CONFIG0_DISAPLPF 0x00001000
#define BITM_CONFIG0_DISRPLPF 0x00002000
#define BITM_CONFIG0_RMSONE_RATE 0x00004000
#define BITM_CONFIG0_RESAMPLE_RATE 0x00008000
#define BITM_CONFIG0_PERIOD_AVG_CFG 0x00030000

#define REG_MTTHR_L0                                                           \
  0x061 /* Multipoint Phase/Gain Threshold. If MTEN = 1 in the CONFIG0         \
           register, the MTGNTHR_Lx and MTGNTHR_Hx registers set up the        \
           ranges in which to apply each set of corrections, allowing for      \
           hysteresis--see the Multipoint Phase/Gain Correction section for    \
           more information */

#define REG_MTTHR_L1                                                           \
  0x062 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_L2                                                           \
  0x063 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_L3                                                           \
  0x064 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_L4                                                           \
  0x065 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_H0                                                           \
  0x066 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_H1                                                           \
  0x067 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_H2                                                           \
  0x068 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_H3                                                           \
  0x069 /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_MTTHR_H4                                                           \
  0x06A /* Multipoint Phase/Gain threshold--see MTTHR_L0 for more              \
           information. */

#define REG_NIRMSOS                                                            \
  0x06B /* Neutral current rms offset for NIRMS calculation                    \
         */

#define REG_ISUMRMSOS                                                          \
  0x06C /* Offset correction for ISUMRMS calculation based on the sum of IA +  \
           IB + IC ± IN. */

#define REG_NIGAIN 0x06D /* Neutral current gain adjust. */

#define REG_NPHCAL 0x06E /* Neutral current phase compensation */

#define REG_NIRMSONEOS                                                         \
  0x06F /* Neutral current rms offset for the one cycle rms NIRMSONE           \
           calculation */

#define REG_NIRMS1012OS                                                        \
  0x070 /* Neutral current rms offset for 10/12 cycle rms, NIRMS1012           \
           calculation */

#define REG_VNOM                                                               \
  0x071 /* Nominal phase voltage rms used in the computation of apparent       \
           power, xVA, when VNOMx_EN bit is set in the CONFIG0 register */

#define REG_DICOEFF                                                            \
  0x072 /* Value used in the digital integrator algorithm. If the integrator   \
           is turned on, with INTEN or ININTEN equal to one in the CONFIG0     \
           register, it is recommended to set this value to 0xFFFFE000. */

#define REG_ISUMLVL                                                            \
  0x073 /* Threshold to compare ISUMRMS against. Configure this register to    \
           get a MISMTCH indication in STATUS0 if ISUMRMS exceeds this         \
           threshold. */

#define REG_AI_PCF                                                             \
  0x20A /* Instantaneous Phase A current channel waveform processed by the     \
           DSP, at 8ksps */

#define REG_AV_PCF                                                             \
  0x20B /* Instantaneous Phase A voltage channel waveform processed by the     \
           DSP, at 8ksps */

#define REG_AIRMS                                                              \
  0x20C /* Phase A filter based current rms value, updates at 8ksps */

#define REG_AVRMS                                                              \
  0x20D /* Phase A filter based voltage rms value, updates at 8ksps */

#define REG_AIFRMS                                                             \
  0x20E /* Phase A Current Fundamental rms, updates at 8ksps                   \
         */

#define REG_AVFRMS                                                             \
  0x20F /* Phase A Voltage Fundamental RMS, updates at 8ksps                   \
         */

#define REG_AWATT                                                              \
  0x210 /* Phase A low-pass filtered total active power, updated at 8ksps */

#define REG_AVAR                                                               \
  0x211 /* Phase A low-pass filtered total reactive power, updated at 8ksps    \
         */

#define REG_AVA 0x212 /* Phase A total apparent power, updated at 8ksps */

#define REG_AFWATT                                                             \
  0x213 /* Phase A Fundamental active power, updated at 8ksps */

#define REG_AFVAR                                                              \
  0x214 /* Phase A fundamental reactive power, updated at 8ksps */

#define REG_AFVA                                                               \
  0x215 /* Phase A Fundamental apparent power, updated at 8ksps */

#define REG_APF 0x216 /* Phase A power factor, updated at 1.024 sec. */

#define REG_AIRMSONE 0x219 /* Phase A Current one cycle rms calculation */

#define REG_AVRMSONE 0x21A /* Phase A Voltage one cycle rms calculation */

#define REG_AIRMS1012                                                          \
  0x21B /* Phase A Current fast 10/12 cycle rms calculation.The calculation    \
           is done over 10 cycles if SELFREQ = 0 for a 50Hz network or 12      \
           cycles if SELFREQ = 1 for a 60Hz network, in the ACCMODE register.  \
         */

#define REG_AVRMS1012                                                          \
  0x21C /* Phase A Voltage fast 10/12 cycle rms calculation.The calculation    \
           is done over 10 cycles if SELFREQ = 0 for a 50Hz network or 12      \
           cycles if SELFREQ = 1 for a 60Hz network, in the ACCMODE register.  \
         */

#define REG_AMTREGION                                                          \
  0x21D /* If multipoint gain and phase compensation is enabled, with MTEN =   \
           1 in the CONFIG0 register, these bits indicate which AIGAINx and    \
           APHCALx is currently being used. */
#define BITP_AMTREGION_AREGION                                                 \
  0 /* If multipoint gain and phase compensation is enabled, with MTEN = 1 in  \
       the CONFIG0 register, these bits indicate which AIGAINx and APHCALx is  \
       currently being used */
#define BITL_AMTREGION_AREGION 4
#define BITM_AMTREGION_AREGION 0x0000000f

#define REG_BI_PCF                                                             \
  0x22A /* Instantaneous Phase B current channel waveform processed by the     \
           DSP, at 8ksps */

#define REG_BV_PCF                                                             \
  0x22B /* Instantaneous Phase B voltage channel waveform processed by the     \
           DSP, at 8ksps */

#define REG_BIRMS                                                              \
  0x22C /* Phase B filter based current rms value, updates at 8ksps */

#define REG_BVRMS                                                              \
  0x22D /* Phase B filter based voltage rms value, updates at 8ksps */

#define REG_BIFRMS                                                             \
  0x22E /* Phase B Current Fundamental rms, updates at 8ksps                   \
         */

#define REG_BVFRMS                                                             \
  0x22F /* Phase B Voltage Fundamental rms, updates at 8ksps                   \
         */

#define REG_BWATT                                                              \
  0x230 /* Phase B low-pass filtered total active power, updated at 8ksps */

#define REG_BVAR                                                               \
  0x231 /* Phase B low-pass filtered total reactive power, updated at 8ksps    \
         */

#define REG_BVA 0x232 /* Phase B total apparent power, updated at 8ksps */

#define REG_BFWATT                                                             \
  0x233 /* Phase B Fundamental active power, updated at 8ksps */

#define REG_BFVAR                                                              \
  0x234 /* Phase B Fundamental reactive power, updated at 8ksps */

#define REG_BFVA                                                               \
  0x235 /* Phase B Fundamental apparent power, updated at 8ksps */

#define REG_BPF 0x236 /* Phase B power factor, updated at 1.024 sec. */

#define REG_BIRMSONE 0x239 /* Phase B Current one cycle rms calculation */

#define REG_BVRMSONE 0x23A /* Phase B Voltage one cycle rms calculation */

#define REG_BIRMS1012                                                          \
  0x23B /* Phase B Current fast 10/12 cycle rms calculation.The calculation    \
           is done over 10 cycles if SELFREQ = 0 for a 50Hz network or 12      \
           cycles if SELFREQ = 1 for a 60Hz network, in the ACCMODE register.  \
         */

#define REG_BVRMS1012                                                          \
  0x23C /* Phase B Voltage fast 10/12 cycle rms calculation.The calculation    \
           is done over 10 cycles if SELFREQ = 0 for a 50Hz network or 12      \
           cycles if SELFREQ = 1 for a 60Hz network, in the ACCMODE register.  \
         */

#define REG_BMTREGION                                                          \
  0x23D /* If multipoint gain and phase compensation is enabled, with MTEN =   \
           1 in the COFIG0 register, these bits indicate which BIGAINx and     \
           BPHCALx is currently being used. */
#define BITP_BMTREGION_BREGION                                                 \
  0 /* If multipoint gain and phase compensation is enabled, with MTEN = 1 in  \
       the CONFIG0 register, these bits indicate which BIGAINx and BPHCALx is  \
       currently being used */
#define BITL_BMTREGION_BREGION 4
#define BITM_BMTREGION_BREGION 0x0000000f

#define REG_CI_PCF                                                             \
  0x24A /* Instantaneous Phase C current channel waveform processed by the     \
           DSP, at 8ksps */

#define REG_CV_PCF                                                             \
  0x24B /* Instantaneous Phase C voltage channel waveform processed by the     \
           DSP, at 8ksps */

#define REG_CIRMS                                                              \
  0x24C /* Phase C filter based current rms value, updates at 8ksps */

#define REG_CVRMS                                                              \
  0x24D /* Phase C filter based voltage rms value, updates at 8ksps */

#define REG_CIFRMS                                                             \
  0x24E /* Phase C Current Fundamental rms, updates at 8ksps                   \
         */

#define REG_CVFRMS                                                             \
  0x24F /* Phase C Voltage Fundamental rms, updates at 8ksps                   \
         */

#define REG_CWATT                                                              \
  0x250 /* Phase C low-pass filtered total active power, updated at 8ksps */

#define REG_CVAR                                                               \
  0x251 /* Phase C low-pass filtered total reactive power, updated at 8ksps    \
         */

#define REG_CVA 0x252 /* Phase C total apparent power, updated at 8ksps */

#define REG_CFWATT                                                             \
  0x253 /* Phase C fundamental active power, updated at 8ksps */

#define REG_CFVAR                                                              \
  0x254 /* Phase C fundamental reactive power, updated at 8ksps */

#define REG_CFVA                                                               \
  0x255 /* Phase C Fundamental apparent power, updated at 8ksps */

#define REG_CPF 0x256 /* Phase C power factor, updated at 1.024 sec. */

#define REG_CIRMSONE 0x259 /* Phase C Current one cycle rms calculation */

#define REG_CVRMSONE 0x25A /* Phase C Voltage one cycle rms calculation */

#define REG_CIRMS1012                                                          \
  0x25B /* Phase C Current fast 10/12 cycle rms calculation.The calculation    \
           is done over 10 cycles if SELFREQ = 0 for a 50Hz network or 12      \
           cycles if SELFREQ = 1 for a 60Hz network, in the ACCMODE register.  \
         */

#define REG_CVRMS1012                                                          \
  0x25C /* Phase C Voltage fast 10/12 cycle rms calculation.The calculation    \
           is done over 10 cycles if SELFREQ = 0 for a 50Hz network or 12      \
           cycles if SELFREQ = 1 for a 60Hz network, in the ACCMODE register.  \
         */

#define REG_CMTREGION                                                          \
  0x25D /* If multipoint gain and phase compensation is enabled, with MTEN =   \
           1 in the CONFIG0 register, these bits indicate which CIGAINx and    \
           CPHCALx is currently being used. */
#define BITP_CMTREGION_CREGION                                                 \
  0 /* If multipoint gain and phase compensation is enabled, with MTEN = 1 in  \
       the CONFIG0 register, these bits indicate which CIGAINx and CPHCALx is  \
       currently being used */
#define BITL_CMTREGION_CREGION 4
#define BITM_CMTREGION_CREGION 0x0000000f

#define REG_NI_PCF                                                             \
  0x265 /* Instantaneous neutral current channel waveform processed by the     \
           DSP, at 8ksps */

#define REG_NIRMS 0x266 /* Neutral current filter based rms value */

#define REG_NIRMSONE 0x267 /* Neutral Current one cycle rms calculation */

#define REG_NIRMS1012                                                          \
  0x268 /* Neutral Current fast 10/12 cycle rms calculation.The calculation    \
           is done over 10 cycles if SELFREQ = 0 for a 50Hz network or 12      \
           cycles if SELFREQ = 1 for a 60Hz network, in the ACCMODE register.  \
         */

#define REG_ISUMRMS                                                            \
  0x269 /* Filter based rms based on the sum of IA + IB + IC ± IN. */

#define REG_VERSION2                                                           \
  0x26A /* This register indicates the version of the metrology algorithms     \
           after the user writes run= 1 to start the measurements. */

#define REG_PERIOD_FORRMS                                                      \
  0x26B /* Copy of PERIOD register that is synchronised with cycle based RMS.  \
           Updated every half-cycle */

#define REG_COH_PAGE                                                           \
  0x26C /* The page which is full/ready-to-read during the resampling          \
           waveform fill. 0 means the first half ready. 1 means the second     \
           half ready. */

#define REG_RESAMPLE_STATUS                                                    \
  0x26D /* This bit indicates that resampling has started. Resampling will     \
           start on the first 10/12 cycle boundary after WFB_CFG. WF_CAP_EN    \
           is set to 1 */

#define REG_AWATT_ACC                                                          \
  0x2E5 /* Phase A accumulated total active power, updated after PWR_TIME      \
           8ksps samples */

#define REG_AWATTHR_LO                                                         \
  0x2E6 /* Phase A accumulated total active energy, Least Significant Bits.    \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_AWATTHR_HI                                                         \
  0x2E7 /* Phase A accumulated total active energy, Most Significant Bits.     \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_AVAR_ACC                                                           \
  0x2EF /* Phase A accumulated total reactive power, updated after PWR_TIME    \
           8ksps samples */

#define REG_AVARHR_LO                                                          \
  0x2F0 /* Phase A accumulated total reactive energy, Least Significant Bits.  \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_AVARHR_HI                                                          \
  0x2F1 /* Phase A accumulated total reactive energy, Most Significant Bits.   \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_AVA_ACC                                                            \
  0x2F9 /* Phase A accumulated total apparent power, updated after PWR_TIME    \
           8ksps samples */

#define REG_AVAHR_LO                                                           \
  0x2FA /* Phase A accumulated total apparent energy, Least Significant Bits.  \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_AVAHR_HI                                                           \
  0x2FB /* Phase A accumulated total apparent energy, Least Significant Bits.  \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_AFWATT_ACC                                                         \
  0x303 /* Phase A accumulated fundamental active power, updated after         \
           PWR_TIME 8ksps samples */

#define REG_AFWATTHR_LO                                                        \
  0x304 /* Phase A accumulated fundamental active energy, Least Significant    \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_AFWATTHR_HI                                                        \
  0x305 /* Phase A accumulated fundamental active energy, Most Significant     \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers. */

#define REG_AFVAR_ACC                                                          \
  0x30D /* Phase A accumulated fundamental reactive power, updated after       \
           PWR_TIME 8ksps samples */

#define REG_AFVARHR_LO                                                         \
  0x30E /* Phase A accumulated fundamental reactive energy, Least Significant  \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_AFVARHR_HI                                                         \
  0x30F /* Phase A accumulated fundamental reactive energy, Most Significant   \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_AFVA_ACC                                                           \
  0x317 /* Phase A accumulated fundamental apparent power, updated after       \
           PWR_TIME 8ksps samples */

#define REG_AFVAHR_LO                                                          \
  0x318 /* Phase A accumulated fundamental apparent energy, Least Significant  \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_AFVAHR_HI                                                          \
  0x319 /* Phase A accumulated fundamental apparent energy, Most Significant   \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_BWATT_ACC                                                          \
  0x321 /* Phase B accumulated total active power, updated after PWR_TIME      \
           8ksps samples */

#define REG_BWATTHR_LO                                                         \
  0x322 /* Phase B accumulated total active energy, Least Significant Bits.    \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_BWATTHR_HI                                                         \
  0x323 /* Phase B accumulated total active energy, Most Significant Bits.     \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_BVAR_ACC                                                           \
  0x32B /* Phase B accumulated total reactive power, updated after PWR_TIME    \
           8ksps samples */

#define REG_BVARHR_LO                                                          \
  0x32C /* Phase B accumulated total reactive energy, Least Significant Bits.  \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_BVARHR_HI                                                          \
  0x32D /* Phase B accumulated total reactive energy, Most Significant Bits.   \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_BVA_ACC                                                            \
  0x335 /* Phase B accumulated total apparent power, updated after PWR_TIME    \
           8ksps samples */

#define REG_BVAHR_LO                                                           \
  0x336 /* Phase B accumulated total apparent energy, Least Significant Bits.  \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_BVAHR_HI                                                           \
  0x337 /* Phase B accumulated total apparent energy, Most Significant Bits.   \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_BFWATT_ACC                                                         \
  0x33F /* Phase B accumulated fundamental active power, updated after         \
           PWR_TIME 8ksps samples */

#define REG_BFWATTHR_LO                                                        \
  0x340 /* Phase B accumulated fundamental active energy, Least Significant    \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_BFWATTHR_HI                                                        \
  0x341 /* Phase B accumulated fundamental active energy, Most Significant     \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_BFVAR_ACC                                                          \
  0x349 /* Phase B accumulated fundamental reactive power, updated after       \
           PWR_TIME 8ksps samples */

#define REG_BFVARHR_LO                                                         \
  0x34A /* Phase B accumulated fundamental reactive energy, Least Significant  \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_BFVARHR_HI                                                         \
  0x34B /* Phase B accumulated fundamental reactive energy, Most Significant   \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_BFVA_ACC                                                           \
  0x353 /* Phase B accumulated fundamental apparent power, updated after       \
           PWR_TIME 8ksps samples */

#define REG_BFVAHR_LO                                                          \
  0x354 /* Phase B accumulated fundamental apparent energy, Least Significant  \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_BFVAHR_HI                                                          \
  0x355 /* Phase B accumulated fundamental apparent energy, Most Significant   \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_CWATT_ACC                                                          \
  0x35D /* Phase C accumulated total active power, updated after PWR_TIME      \
           8ksps samples */

#define REG_CWATTHR_LO                                                         \
  0x35E /* Phase C accumulated total active energy, Least Significant Bits.    \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_CWATTHR_HI                                                         \
  0x35F /* Phase C accumulated total active energy, Most Significant Bits.     \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_CVAR_ACC                                                           \
  0x367 /* Phase C accumulated total reactive power, updated after PWR_TIME    \
           8ksps samples */

#define REG_CVARHR_LO                                                          \
  0x368 /* Phase C accumulated total reactive energy, Least Significant Bits.  \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_CVARHR_HI                                                          \
  0x369 /* Phase C accumulated total reactive energy, Most Significant Bits.   \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_CVA_ACC                                                            \
  0x371 /* Phase C accumulated total apparent power, updated after PWR_TIME    \
           8ksps samples */

#define REG_CVAHR_LO                                                           \
  0x372 /* Phase C accumulated total apparent energy, Least Significant Bits.  \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_CVAHR_HI                                                           \
  0x373 /* Phase C accumulated total apparent energy, Most Significant Bits.   \
           Updated according to the settings in EP_CFG and EGY_TIME registers  \
         */

#define REG_CFWATT_ACC                                                         \
  0x37B /* Phase C accumulated fundamental active power, updated after         \
           PWR_TIME 8ksps samples */

#define REG_CFWATTHR_LO                                                        \
  0x37C /* Phase C accumulated fundamental active energy, Least Significant    \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_CFWATTHR_HI                                                        \
  0x37D /* Phase C accumulated fundamental active energy, Most Significant     \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_CFVAR_ACC                                                          \
  0x385 /* Phase C accumulated fundamental reactive power, updated after       \
           PWR_TIME 8ksps samples */

#define REG_CFVARHR_LO                                                         \
  0x386 /* Phase C accumulated fundamental reactive energy, Least Significant  \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_CFVARHR_HI                                                         \
  0x387 /* Phase C accumulated fundamental reactive energy, Most Significant   \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_CFVA_ACC                                                           \
  0x38F /* Phase C accumulated fundamental apparent power, updated after       \
           PWR_TIME 8ksps samples */

#define REG_CFVAHR_LO                                                          \
  0x390 /* Phase C accumulated fundamental apparent energy, Least Significant  \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_CFVAHR_HI                                                          \
  0x391 /* Phase C accumulated fundamental apparent energy, Most Significant   \
           Bits. Updated according to the settings in EP_CFG and EGY_TIME      \
           registers */

#define REG_PWATT_ACC                                                          \
  0x397 /* Accumulated Positive Total Active Power, Most Significant Bits,     \
           from AWATT, BWATT and CWATT registers, updated after PWR_TIME       \
           8ksps samples */

#define REG_NWATT_ACC                                                          \
  0x39B /* Accumulated Negative Total Active Power, Most Significant Bits,     \
           from AWATT, BWATT and CWATT registers, updated after PWR_TIME       \
           8ksps samples */

#define REG_PVAR_ACC                                                           \
  0x39F /* Accumulated Positive Total Reactive Power, Most Significant Bits,   \
           from AVAR, BVAR and CVAR registers, updated after PWR_TIME 8ksps    \
           samples */

#define REG_NVAR_ACC                                                           \
  0x3A3 /* Accumulated Negative Total Reactive Power, Most Significant Bits,   \
           from AVAR, BVAR and CVAR registers, updated after PWR_TIME 8ksps    \
           samples */

#define REG_IPEAK 0x400 /* Current peak register */
#define BITP_IPEAK_IPEAKVAL                                                    \
  0 /* The IPEAK register stores the absolute value of the peak current.       \
       IPEAK is equal to xI_PCF/2^5. */
#define BITP_IPEAK_IPPHASE                                                     \
  24 /* These bits indicate which phases generate IPEAKVAL value. Note that    \
        the PEAKSEL[2:0] bits in the CONFIG3 register determine which current  \
        channel to monitor the peak value on. */
#define BITL_IPEAK_IPEAKVAL 24
#define BITL_IPEAK_IPPHASE 3
#define BITM_IPEAK_IPEAKVAL 0x00ffffff
#define BITM_IPEAK_IPPHASE 0x07000000

#define REG_VPEAK 0x401 /* Voltage peak register */
#define BITP_VPEAK_VPEAKVAL                                                    \
  0 /* The VPEAK register stores the absolute value of the peak voltage.       \
       VPEAK is equal to xV_PCF/2^5. */
#define BITP_VPEAK_VPPHASE                                                     \
  24 /* These bits indicate which phase(s) generate VPEAKVAL value. Note that  \
        the PEAKSEL[2:0] bits in the CONFIG3 register determine which Voltage  \
        Channels to monitor the peak value on. */
#define BITL_VPEAK_VPEAKVAL 24
#define BITL_VPEAK_VPPHASE 3
#define BITM_VPEAK_VPEAKVAL 0x00ffffff
#define BITM_VPEAK_VPPHASE 0x07000000

#define REG_STATUS0 0x402 /* Status Register 0 */
#define BITP_STATUS0_EGYRDY                                                    \
  0 /* This bit is set when the power values in the xWATTHR xVAHR, xVARHR,     \
       xFVARHR, xFWATTHR, xFVAHR registers have been updated, after EGY_TIME   \
       8ksps samples or line cycles, depending on the EGY_TMR_MODE bit in the  \
       EP_CFG register. */
#define BITP_STATUS0_REVAPA                                                    \
  1 /* This bit indicates if the Phase A Total or Fundamental Active Power     \
       has changed sign. See REVAPC. */
#define BITP_STATUS0_REVAPB                                                    \
  2 /* This bit indicates if the Phase B Total or Fundamental Active Power     \
       has changed sign. See REVAPC. */
#define BITP_STATUS0_REVAPC                                                    \
  3 /* This bit indicates if the Phase C total or fundamental active power     \
       has changed sign. The PWR_SIGN_SEL bit in the EP_CFG register selects   \
       whether total or fundamental active power is monitored. This bit is     \
       updated when the power values in the xWATT_ACC and  xFWATT_ACC          \
       registers have been updated, after PWR_TIME 8ksps samples. */
#define BITP_STATUS0_REVRPA                                                    \
  4 /* This bit indicates if the Phase A total or fundamental reactive power   \
       has changed sign. See REVRPC. */
#define BITP_STATUS0_REVRPB                                                    \
  5 /* This bit indicates if the Phase B total or fundamental reactive power   \
       has changed sign. See REVRPC. */
#define BITP_STATUS0_REVRPC                                                    \
  6 /* This bit indicates if the Phase C total or fundamental reactive power   \
       has changed sign.The PWR_SIGN_SEL bit in the EP_CFG register selects    \
       whether total or fundamental reactive power is monitored. This bit is   \
       updated when the power values in the xVAR_ACC and  xFVAR_ACC registers  \
       have been updated, after PWR_TIME 8ksps samples. */
#define BITP_STATUS0_REVPSUM1                                                  \
  7 /* This bit is set to indicate if the CF1 polarity changed sign. See       \
       REVPSUM4. */
#define BITP_STATUS0_REVPSUM2                                                  \
  8 /* This bit is set to indicate if the CF2 polarity changed sign. See       \
       REVPSUM4. */
#define BITP_STATUS0_REVPSUM3                                                  \
  9 /* This bit is set to indicate if the CF3 polarity changed sign. See       \
       REVPSUM4. */
#define BITP_STATUS0_REVPSUM4                                                  \
  10 /* This bit is set to indicate if the CF4 polarity changed sign. For      \
        example, if the last CF4 pulse was positive reactive energy and the    \
        next CF4 pulse is negative reactive energy, then the REVPSUM4 bit is   \
        set. This bit is updated when a CF4 pulse is output, when the CF4 pin  \
        goes from high to low */
#define BITP_STATUS0_CF1                                                       \
  11 /* This bit is set when a CF1 pulse is issued, when the CF1 pin goes      \
        from a high to low state. */
#define BITP_STATUS0_CF2                                                       \
  12 /* This bit is set when a CF2 pulse is issued, when the CF2 pin goes      \
        from a high to low state. */
#define BITP_STATUS0_CF3                                                       \
  13 /* This bit is set when a CF3 pulse is issued, when the CF3 pin goes      \
        from a high to low state. */
#define BITP_STATUS0_CF4                                                       \
  14 /* This bit is set when a CF4 pulse is issued, when the CF4 pin goes      \
        from a high to low state. */
#define BITP_STATUS0_DREADY                                                    \
  15 /* This bit is set when new waveform samples are ready. The update rate   \
        depends on the data selected in the WF_SRC bits in the WFB_CFG         \
        register. */
#define BITP_STATUS0_WFB_TRIG_IRQ                                              \
  16 /* This bit is set when the waveform buffer has stopped filling after an  \
        event configured in WFB_TRIG_CFG occurs. This happens with fixed data  \
        rate samples only, when WF_CAP_SEL bit in the WFB_CFG register is      \
        equal to zero. */
#define BITP_STATUS0_PAGE_FULL                                                 \
  17 /* This bit is set when a page enabled in the WFB_PG_IRQEN register has   \
        been filled with fixed data rate samples, when WF_CAP_SEL bit in the   \
        WFB_CFG register is equal to zero. */
#define BITP_STATUS0_PWRRDY                                                    \
  18 /* This bit is set when the power values in the xWATT_ACC, xVA_ACC,       \
        xVAR_ACC, xFWATT_ACC, xFVA_ACC, xFVAR_ACC registers have been          \
        updated, after PWR_TIME 8ksps samples. */
#define BITP_STATUS0_RMSONERDY                                                 \
  19 /* This bit is set when the one cycle rms values have been updated */
#define BITP_STATUS0_RMS1012RDY                                                \
  20 /* This bit is set when the 10/12 cycle rms values have been updated */
#define BITP_STATUS0_PF_RDY                                                    \
  21 /* This bit goes high to indicate when power factor measurements have     \
        been updated, every 1.024 sec */
#define BITP_STATUS0_WFB_TRIG                                                  \
  22 /* This bit is set when one of the events configured in WFB_TRIG_CFG      \
        occurs. */
#define BITP_STATUS0_COH_PAGE_RDY                                              \
  23 /* This bit indicates that one of the pages is full when using 1024       \
        point resampling mode. The COH_PAGE indicates which page is full. In   \
        128 point resampling mode this bit indicates the buffer is completely  \
        full */
#define BITP_STATUS0_MISMTCH                                                   \
  24 /* This bit is set to indicate a change in the relationship between       \
        ISUMRMS and ISUMLVL. */
#define BITP_STATUS0_TEMP_RDY                                                  \
  25 /* This bit goes high to indicate when a new temperature measurement is   \
        available. */
#define BITL_STATUS0_EGYRDY 1
#define BITL_STATUS0_REVAPA 1
#define BITL_STATUS0_REVAPB 1
#define BITL_STATUS0_REVAPC 1
#define BITL_STATUS0_REVRPA 1
#define BITL_STATUS0_REVRPB 1
#define BITL_STATUS0_REVRPC 1
#define BITL_STATUS0_REVPSUM1 1
#define BITL_STATUS0_REVPSUM2 1
#define BITL_STATUS0_REVPSUM3 1
#define BITL_STATUS0_REVPSUM4 1
#define BITL_STATUS0_CF1 1
#define BITL_STATUS0_CF2 1
#define BITL_STATUS0_CF3 1
#define BITL_STATUS0_CF4 1
#define BITL_STATUS0_DREADY 1
#define BITL_STATUS0_WFB_TRIG_IRQ 1
#define BITL_STATUS0_PAGE_FULL 1
#define BITL_STATUS0_PWRRDY 1
#define BITL_STATUS0_RMSONERDY 1
#define BITL_STATUS0_RMS1012RDY 1
#define BITL_STATUS0_PF_RDY 1
#define BITL_STATUS0_WFB_TRIG 1
#define BITL_STATUS0_COH_PAGE_RDY 1
#define BITL_STATUS0_MISMTCH 1
#define BITL_STATUS0_TEMP_RDY 1
#define BITM_STATUS0_EGYRDY 0x00000001
#define BITM_STATUS0_REVAPA 0x00000002
#define BITM_STATUS0_REVAPB 0x00000004
#define BITM_STATUS0_REVAPC 0x00000008
#define BITM_STATUS0_REVRPA 0x00000010
#define BITM_STATUS0_REVRPB 0x00000020
#define BITM_STATUS0_REVRPC 0x00000040
#define BITM_STATUS0_REVPSUM1 0x00000080
#define BITM_STATUS0_REVPSUM2 0x00000100
#define BITM_STATUS0_REVPSUM3 0x00000200
#define BITM_STATUS0_REVPSUM4 0x00000400
#define BITM_STATUS0_CF1 0x00000800
#define BITM_STATUS0_CF2 0x00001000
#define BITM_STATUS0_CF3 0x00002000
#define BITM_STATUS0_CF4 0x00004000
#define BITM_STATUS0_DREADY 0x00008000
#define BITM_STATUS0_WFB_TRIG_IRQ 0x00010000
#define BITM_STATUS0_PAGE_FULL 0x00020000
#define BITM_STATUS0_PWRRDY 0x00040000
#define BITM_STATUS0_RMSONERDY 0x00080000
#define BITM_STATUS0_RMS1012RDY 0x00100000
#define BITM_STATUS0_PF_RDY 0x00200000
#define BITM_STATUS0_WFB_TRIG 0x00400000
#define BITM_STATUS0_COH_PAGE_RDY 0x00800000
#define BITM_STATUS0_MISMTCH 0x01000000
#define BITM_STATUS0_TEMP_RDY 0x02000000

#define REG_STATUS1 0x403 /* Status Register 1 */
#define BITP_STATUS1_ANLOAD                                                    \
  0 /* This bit is set when  one or more phase total active energy enters or   \
       exits the no-load condition. The phase is indicated in the PHNOLOAD     \
       register. */
#define BITP_STATUS1_RNLOAD                                                    \
  1 /* This bit is set when  one or more phase total reactive energy enters    \
       or exits the no-load condition. The phase is indicated in the PHNOLOAD  \
       register. */
#define BITP_STATUS1_VANLOAD                                                   \
  2 /* This bit is set when  one or more phase total apparent energy enters    \
       or exits the no-load condition. The phase is indicated in the PHNOLOAD  \
       register. */
#define BITP_STATUS1_AFNOLOAD                                                  \
  3 /* This bit is set when  one or more phase fundamental active energy       \
       enters or exits the no-load condition. The phase is indicated in the    \
       PHNOLOAD register. */
#define BITP_STATUS1_RFNOLOAD                                                  \
  4 /* This bit is set when  one or more phase fundamental reactive energy     \
       enters or exits the no-load condition. The phase is indicated in the    \
       PHNOLOAD register. */
#define BITP_STATUS1_VAFNOLOAD                                                 \
  5 /* This bit is set when  one or more phase fundamental apparent energy     \
       enters or exits the no-load condition. The phase is indicated in the    \
       PHNOLOAD register. */
#define BITP_STATUS1_ZXTOVA                                                    \
  6 /* This bit is set to indicate a zero crossing timeout on Phase A. This    \
       means that a zero crossing on the Phase A voltage is missing. */
#define BITP_STATUS1_ZXTOVB                                                    \
  7 /* This bit is set to indicate a zero crossing timeout on Phase B. This    \
       means that a zero crossing on the Phase B voltage is missing. */
#define BITP_STATUS1_ZXTOVC                                                    \
  8 /* This bit is set to indicate a zero crossing timeout on Phase C. This    \
       means that a zero crossing on the Phase C voltage is missing. */
#define BITP_STATUS1_ZXVA                                                      \
  9 /* When this bit is set, it indicates a zero crossing has been detected    \
       on the Phase A voltage channel. */
#define BITP_STATUS1_ZXVB                                                      \
  10 /* When this bit is set, it indicates a zero crossing has been detected   \
        on the Phase B voltage channel. */
#define BITP_STATUS1_ZXVC                                                      \
  11 /* When this bit is set, it indicates a zero crossing has been detected   \
        on the Phase C voltage channel. */
#define BITP_STATUS1_ZXCOMB                                                    \
  12 /* When this bit is set, it indicates a zero crossing has been detected   \
        on the combined signal from VA, VB, and VC. */
#define BITP_STATUS1_ZXIA                                                      \
  13 /* When this bit is set to 1, it indicates a zero crossing has been       \
        detected on Phase A current. */
#define BITP_STATUS1_ZXIB                                                      \
  14 /* When this bit is set to 1, it indicates a zero crossing has been       \
        detected on Phase B current. */
#define BITP_STATUS1_ZXIC                                                      \
  15 /* When this bit is set to 1, it indicates a zero crossing has been       \
        detected on Phase C current. */
#define BITP_STATUS1_RSTDONE                                                   \
  16 /* This bit is set to indicate that the IC has finished its power-up      \
        sequence after a reset or after changing between PSM3 operating mode   \
        to PSM0. This indicates that the user can configure the IC via the     \
        SPI port. */
#define BITP_STATUS1_OI                                                        \
  17 /* This bit is set to indicate that an overcurrent event has occurred on  \
        one of the phases indicated in the OISTATUS register. */
#define BITP_STATUS1_SEQERR                                                    \
  18 /* This bit is set to indicate a phase sequence error on the Phase        \
        Voltage zero crossings. */
#define BITP_STATUS1_CRC_CHG                                                   \
  26 /* This bit is set if any of the registers monitored by the               \
        configuration register CRC change value. The CRC_RSLT register holds   \
        the new configuration register CRC value. */
#define BITP_STATUS1_CRC_DONE                                                  \
  27 /* This bit is set to indicate when the configuration register CRC        \
        calculation is done, after initiated by writing the FORCE_CRC_UPDATE   \
        bit in the CRC_FORCE register. */
#define BITP_STATUS1_ERROR0                                                    \
  28 /* This bit indicates an error and generates a non-maskable interrupt.    \
        Issue a software or hardware reset to clear this error. */
#define BITP_STATUS1_ERROR1                                                    \
  29 /* This bit indicates an error and generates a non-maskable interrupt.    \
        Issue a software or hardware reset to clear this error. */
#define BITP_STATUS1_ERROR2                                                    \
  30 /* This bit indicates that an error was detected and corrected. No        \
        action is required. */
#define BITP_STATUS1_ERROR3                                                    \
  31 /* This bit indicates an error and generates a non-maskable interrupt.    \
        Issue a software or hardware reset to clear this error. */
#define BITL_STATUS1_ANLOAD 1
#define BITL_STATUS1_RNLOAD 1
#define BITL_STATUS1_VANLOAD 1
#define BITL_STATUS1_AFNOLOAD 1
#define BITL_STATUS1_RFNOLOAD 1
#define BITL_STATUS1_VAFNOLOAD 1
#define BITL_STATUS1_ZXTOVA 1
#define BITL_STATUS1_ZXTOVB 1
#define BITL_STATUS1_ZXTOVC 1
#define BITL_STATUS1_ZXVA 1
#define BITL_STATUS1_ZXVB 1
#define BITL_STATUS1_ZXVC 1
#define BITL_STATUS1_ZXCOMB 1
#define BITL_STATUS1_ZXIA 1
#define BITL_STATUS1_ZXIB 1
#define BITL_STATUS1_ZXIC 1
#define BITL_STATUS1_RSTDONE 1
#define BITL_STATUS1_OI 1
#define BITL_STATUS1_SEQERR 1
#define BITL_STATUS1_CRC_CHG 1
#define BITL_STATUS1_CRC_DONE 1
#define BITL_STATUS1_ERROR0 1
#define BITL_STATUS1_ERROR1 1
#define BITL_STATUS1_ERROR2 1
#define BITL_STATUS1_ERROR3 1
#define BITM_STATUS1_ANLOAD 0x00000001
#define BITM_STATUS1_RNLOAD 0x00000002
#define BITM_STATUS1_VANLOAD 0x00000004
#define BITM_STATUS1_AFNOLOAD 0x00000008
#define BITM_STATUS1_RFNOLOAD 0x00000010
#define BITM_STATUS1_VAFNOLOAD 0x00000020
#define BITM_STATUS1_ZXTOVA 0x00000040
#define BITM_STATUS1_ZXTOVB 0x00000080
#define BITM_STATUS1_ZXTOVC 0x00000100
#define BITM_STATUS1_ZXVA 0x00000200
#define BITM_STATUS1_ZXVB 0x00000400
#define BITM_STATUS1_ZXVC 0x00000800
#define BITM_STATUS1_ZXCOMB 0x00001000
#define BITM_STATUS1_ZXIA 0x00002000
#define BITM_STATUS1_ZXIB 0x00004000
#define BITM_STATUS1_ZXIC 0x00008000
#define BITM_STATUS1_RSTDONE 0x00010000
#define BITM_STATUS1_OI 0x00020000
#define BITM_STATUS1_SEQERR 0x00040000
#define BITM_STATUS1_CRC_CHG 0x04000000
#define BITM_STATUS1_CRC_DONE 0x08000000
#define BITM_STATUS1_ERROR0 0x10000000
#define BITM_STATUS1_ERROR1 0x20000000
#define BITM_STATUS1_ERROR2 0x40000000
#define BITM_STATUS1_ERROR3 0x80000000

#define REG_EVENT_STATUS 0x404 /* Event Status Register */
#define BITP_EVENT_STATUS_REVPSUM1                                             \
  6 /* This bit indicates the sign of the last CF1 pulse. A zero indicates     \
       that the pulse was from negative energy and a one indicates that the    \
       energy was positive. This bit is updated when a CF1 pulse is output,    \
       when the CF1 pin goes from high to low. */
#define BITP_EVENT_STATUS_REVPSUM2                                             \
  7 /* This bit indicates the sign of the last CF2 pulse. A zero indicates     \
       that the pulse was from negative energy and a one indicates that the    \
       energy was positive. This bit is updated when a CF2 pulse is output,    \
       when the CF2 pin goes from high to low. */
#define BITP_EVENT_STATUS_REVPSUM3                                             \
  8 /* This bit indicates the sign of the last CF3 pulse. A zero indicates     \
       that the pulse was from negative energy and a one indicates that the    \
       energy was positive. This bit is updated when a CF3 pulse is output,    \
       when the CF3 pin goes from high to low. */
#define BITP_EVENT_STATUS_REVPSUM4                                             \
  9 /* This bit indicates the sign of the last CF4 pulse. A zero indicates     \
       that the pulse was from negative energy and a one indicates that the    \
       energy was positive. This bit is updated when a CF4 pulse is output,    \
       when the CF4 pin goes from high to low. */
#define BITP_EVENT_STATUS_ANLOAD                                               \
  10 /* This bit is set when the total active energy accumulations in all      \
        phases are out of no load. This bit goes to zero when one or more      \
        phases of total active energy accumulation goes into no load. */
#define BITP_EVENT_STATUS_RNLOAD                                               \
  11 /* This bit is set when the total reactive energy accumulations in all    \
        phases are out of no load. This bit goes to zero when one or more      \
        phases of total reactive energy accumulation goes into no load. */
#define BITP_EVENT_STATUS_VANLOAD                                              \
  12 /* This bit is set when the total apparent energy accumulations in all    \
        phases are out of no load. This bit goes to zero when one or more      \
        phases of total apparent energy accumulation goes into no load. */
#define BITP_EVENT_STATUS_AFNOLOAD                                             \
  13 /* This bit is set when the Fundamental Active Energy accumulations in    \
        all phases are out of No-load. This bit goes to zero when one or more  \
        phases of Fundamental Active energy accumulation goes into No-load */
#define BITP_EVENT_STATUS_RFNOLOAD                                             \
  14 /* This bit is set when the fundamental reactive energy accumulations in  \
        all phases are out of no load. This bit goes to zero when one or more  \
        phases of fundamental reactive energy accumulation goes into no load.  \
      */
#define BITP_EVENT_STATUS_VAFNOLOAD                                            \
  15 /* This bit is set when the Fundamental Apparent Energy accumulations in  \
        all phases are out of No-load. This bit goes to zero when one or more  \
        phases of Total Apparent energy accumulation goes into No-load */
#define BITP_EVENT_STATUS_DREADY                                               \
  16 /* This bit changes from a zero to a one when new waveform samples are    \
        ready. The update rate depends on the data selected in the WF_SRC      \
        bits in the WFB_CFG register. */
#define BITL_EVENT_STATUS_REVPSUM1 1
#define BITL_EVENT_STATUS_REVPSUM2 1
#define BITL_EVENT_STATUS_REVPSUM3 1
#define BITL_EVENT_STATUS_REVPSUM4 1
#define BITL_EVENT_STATUS_ANLOAD 1
#define BITL_EVENT_STATUS_RNLOAD 1
#define BITL_EVENT_STATUS_VANLOAD 1
#define BITL_EVENT_STATUS_AFNOLOAD 1
#define BITL_EVENT_STATUS_RFNOLOAD 1
#define BITL_EVENT_STATUS_VAFNOLOAD 1
#define BITL_EVENT_STATUS_DREADY 1
#define BITM_EVENT_STATUS_REVPSUM1 0x00000040
#define BITM_EVENT_STATUS_REVPSUM2 0x00000080
#define BITM_EVENT_STATUS_REVPSUM3 0x00000100
#define BITM_EVENT_STATUS_REVPSUM4 0x00000200
#define BITM_EVENT_STATUS_ANLOAD 0x00000400
#define BITM_EVENT_STATUS_RNLOAD 0x00000800
#define BITM_EVENT_STATUS_VANLOAD 0x00001000
#define BITM_EVENT_STATUS_AFNOLOAD 0x00002000
#define BITM_EVENT_STATUS_RFNOLOAD 0x00004000
#define BITM_EVENT_STATUS_VAFNOLOAD 0x00008000
#define BITM_EVENT_STATUS_DREADY 0x00010000

#define REG_MASK0 0x405 /* Interrupt Enable Register 0 */
#define BITP_MASK0_EGYRDY                                                      \
  0 /* Set this bit to enable an interrupt when the power values in the        \
       xWATTHR, xVAHR xVARHR xFWATTHR, xFVAHR, and xFVARHR registers have      \
       been updated, after EGY_TIME 8ksps samples or line cycles, depending    \
       on the EGY_TMR_MODE bit in the EP_CFG register. */
#define BITP_MASK0_REVAPA                                                      \
  1 /* Set this bit to enable an interrupt when the Phase A total or           \
       fundamental active power has changed sign. */
#define BITP_MASK0_REVAPB                                                      \
  2 /* Set this bit to enable an interrupt when the Phase B Total or           \
       Fundamental Active Power has changed sign. */
#define BITP_MASK0_REVAPC                                                      \
  3 /* Set this bit to enable an interrupt when the Phase C Total or           \
       Fundamental Active Power has changed sign. */
#define BITP_MASK0_REVRPA                                                      \
  4 /* Set this bit to enable an interrupt when the Phase A total or           \
       fundamental reactive power has changed sign. */
#define BITP_MASK0_REVRPB                                                      \
  5 /* Set this bit to enable an interrupt when the Phase C total or           \
       fundamental reactive power has changed sign. */
#define BITP_MASK0_REVRPC                                                      \
  6 /* Set this bit to enable an interrupt when the Phase C total or           \
       fundamental reactive power has changed sign. */
#define BITP_MASK0_REVPSUM1                                                    \
  7 /* Set this bit to enable an interrupt when the CF1 polarity changed       \
       sign. */
#define BITP_MASK0_REVPSUM2                                                    \
  8 /* Set this bit to enable an interrupt when the CF2 polarity changed       \
       sign. */
#define BITP_MASK0_REVPSUM3                                                    \
  9 /* Set this bit to enable an interrupt when the CF3 polarity changed       \
       sign. */
#define BITP_MASK0_REVPSUM4                                                    \
  10 /* Set this bit to enable an interrupt when the CF4 polarity changed      \
        sign. */
#define BITP_MASK0_CF1                                                         \
  11 /* Set this bit to enable an interrupt when the CF1 pulse is issued,      \
        when the CF1 pin goes from a high to low state. */
#define BITP_MASK0_CF2                                                         \
  12 /* Set this bit to enable an interrupt when the CF2 pulse is issued,      \
        when the CF2 pin goes from a high to low state. */
#define BITP_MASK0_CF3                                                         \
  13 /* Set this bit to enable an interrupt when the CF3 pulse is issued,      \
        when the CF3 pin goes from a high to low state. */
#define BITP_MASK0_CF4                                                         \
  14 /* Set this bit to enable an interrupt when the CF4 pulse is issued,      \
        when the CF4 pin goes from a high to low state. */
#define BITP_MASK0_DREADY                                                      \
  15 /* Set this bit to enable an interrupt when new waveform samples are      \
        ready. The update rate depends on the data selected in the WF_SRC      \
        bits in the WFB_CFG register. */
#define BITP_MASK0_WFB_TRIG_IRQ                                                \
  16 /* Set this bit to enable an interrupt when This bit is set when the      \
        waveform buffer has stopped filling after an event configured in       \
        WFB_TRIG_CFG occurs. */
#define BITP_MASK0_PAGE_FULL                                                   \
  17 /* Set this bit to enable an interrupt when a page enabled in the         \
        WFB_PG_IRQEN register has been filled. */
#define BITP_MASK0_PWRRDY                                                      \
  18 /* Set this bit to enable an interrupt when the power values in the       \
        xWATT_ACC, xVA_ACC, xVAR_ACC, xFWATT_ACC, xFVA_ACC, xFVAR_ACC          \
        registers have been updated, after PWR_TIME 8ksps samples. */
#define BITP_MASK0_RMSONERDY                                                   \
  19 /* Set this bit to enable an interrupt when the one cycle rms values      \
        have been updated */
#define BITP_MASK0_RMS1012RDY                                                  \
  20 /* Set this bit to enable an interrupt when the 10/12 cycle rms values    \
        have been updated */
#define BITP_MASK0_PF_RDY                                                      \
  21 /* Set this bit to enable an interrupt when the power factor              \
        measurements have been updated, every 1.024 sec. */
#define BITP_MASK0_WFB_TRIG                                                    \
  22 /* Set this bit to enable an interrupt when one of the events configured  \
        in WFB_TRIG_CFG occurs. */
#define BITP_MASK0_COH_PAGE_RDY                                                \
  23 /* Set this bit to enable an interrupt when the waveform buffer is full   \
        of resampled data */
#define BITP_MASK0_MISMTCH                                                     \
  24 /* Set this bit to enable an interrupt when there is a change in the      \
        relationship between ISUMRMS and ISUMLVL. */
#define BITP_MASK0_TEMP_RDY_MASK                                               \
  25 /* Set this bit to enable an interrupt when a new temperature             \
        measurement is available. */
#define BITL_MASK0_EGYRDY 1
#define BITL_MASK0_REVAPA 1
#define BITL_MASK0_REVAPB 1
#define BITL_MASK0_REVAPC 1
#define BITL_MASK0_REVRPA 1
#define BITL_MASK0_REVRPB 1
#define BITL_MASK0_REVRPC 1
#define BITL_MASK0_REVPSUM1 1
#define BITL_MASK0_REVPSUM2 1
#define BITL_MASK0_REVPSUM3 1
#define BITL_MASK0_REVPSUM4 1
#define BITL_MASK0_CF1 1
#define BITL_MASK0_CF2 1
#define BITL_MASK0_CF3 1
#define BITL_MASK0_CF4 1
#define BITL_MASK0_DREADY 1
#define BITL_MASK0_WFB_TRIG_IRQ 1
#define BITL_MASK0_PAGE_FULL 1
#define BITL_MASK0_PWRRDY 1
#define BITL_MASK0_RMSONERDY 1
#define BITL_MASK0_RMS1012RDY 1
#define BITL_MASK0_PF_RDY 1
#define BITL_MASK0_WFB_TRIG 1
#define BITL_MASK0_COH_PAGE_RDY 1
#define BITL_MASK0_MISMTCH 1
#define BITL_MASK0_TEMP_RDY_MASK 1
#define BITM_MASK0_EGYRDY 0x00000001
#define BITM_MASK0_REVAPA 0x00000002
#define BITM_MASK0_REVAPB 0x00000004
#define BITM_MASK0_REVAPC 0x00000008
#define BITM_MASK0_REVRPA 0x00000010
#define BITM_MASK0_REVRPB 0x00000020
#define BITM_MASK0_REVRPC 0x00000040
#define BITM_MASK0_REVPSUM1 0x00000080
#define BITM_MASK0_REVPSUM2 0x00000100
#define BITM_MASK0_REVPSUM3 0x00000200
#define BITM_MASK0_REVPSUM4 0x00000400
#define BITM_MASK0_CF1 0x00000800
#define BITM_MASK0_CF2 0x00001000
#define BITM_MASK0_CF3 0x00002000
#define BITM_MASK0_CF4 0x00004000
#define BITM_MASK0_DREADY 0x00008000
#define BITM_MASK0_WFB_TRIG_IRQ 0x00010000
#define BITM_MASK0_PAGE_FULL 0x00020000
#define BITM_MASK0_PWRRDY 0x00040000
#define BITM_MASK0_RMSONERDY 0x00080000
#define BITM_MASK0_RMS1012RDY 0x00100000
#define BITM_MASK0_PF_RDY 0x00200000
#define BITM_MASK0_WFB_TRIG 0x00400000
#define BITM_MASK0_COH_PAGE_RDY 0x00800000
#define BITM_MASK0_MISMTCH 0x01000000
#define BITM_MASK0_TEMP_RDY_MASK 0x02000000

#define REG_MASK1 0x406 /* Interrupt Enable Register 1 */
#define BITP_MASK1_ANLOAD                                                      \
  0 /* Set this bit to enable an interrupt when one or more phase total        \
       active energy enters or exits the no-load condition. */
#define BITP_MASK1_RNLOAD                                                      \
  1 /* Set this bit to enable an interrupt when one or more phase total        \
       reactive energy enters or exits the no-load condition. */
#define BITP_MASK1_VANLOAD                                                     \
  2 /* Set this bit to enable an interrupt when one or more phase total        \
       apparent energy enters or exits the no-load condition. */
#define BITP_MASK1_AFNOLOAD                                                    \
  3 /* Set this bit to enable an interrupt when one or more phase fundamental  \
       active energy enters or exits the no-load condition */
#define BITP_MASK1_RFNOLOAD                                                    \
  4 /* Set this bit to enable an interrupt when one or more phase total        \
       reactive energy enters or exits the no-load condition. */
#define BITP_MASK1_VAFNOLOAD                                                   \
  5 /* Set this bit to enable an interrupt when one or more phase fundamental  \
       apparent energy enters or exits the no-load condition */
#define BITP_MASK1_ZXTOVA                                                      \
  6 /* Set this bit to enable an interrupt when there is a zero crossing       \
       timeout on Phase A. This means that a zero crossing on the Phase A      \
       voltage is missing. */
#define BITP_MASK1_ZXTOVB                                                      \
  7 /* Set this bit to enable an interrupt when there is a zero crossing       \
       timeout on Phase B. This means that a zero crossing on the Phase B      \
       voltage is missing. */
#define BITP_MASK1_ZXTOVC                                                      \
  8 /* Set this bit to enable an interrupt when there is a zero crossing       \
       timeout on Phase C. This means that a zero crossing on the Phase C      \
       voltage is missing. */
#define BITP_MASK1_ZXVA                                                        \
  9 /* Set this bit to enable an interrupt when a zero crossing has been       \
       detected on the Phase A voltage channel. */
#define BITP_MASK1_ZXVB                                                        \
  10 /* Set this bit to enable an interrupt when a zero crossing has been      \
        detected on the Phase B voltage channel. */
#define BITP_MASK1_ZXVC                                                        \
  11 /* Set this bit to enable an interrupt when a zero crossing has been      \
        detected on the Phase C voltage channel. */
#define BITP_MASK1_ZXCOMB                                                      \
  12 /* Set this bit to enable an interrupt when a zero crossing has been      \
        detected on the combined signal from VA, VB, and VC. */
#define BITP_MASK1_ZXIA                                                        \
  13 /* Set this bit to enable an interrupt when a zero crossing has been      \
        detected on the Phase A current channel. */
#define BITP_MASK1_ZXIB                                                        \
  14 /* Set this bit to enable an interrupt when a zero crossing has been      \
        detected on the Phase B current channel. */
#define BITP_MASK1_ZXIC                                                        \
  15 /* Set this bit to enable an interrupt when a zero crossing has been      \
        detected on the Phase C current channel. */
#define BITP_MASK1_OI                                                          \
  17 /* Set this bit to enable an interrupt when one of the currents enabled   \
        in the OC_EN bits in the CONFIG3 register enters an overcurrent        \
        condition */
#define BITP_MASK1_SEQERR                                                      \
  18 /* Set this bit to enable an interrupt when on a phase sequence error on  \
        the phase voltage zero crossings. */
#define BITP_MASK1_CRC_CHG                                                     \
  26 /* Set this bit to enable an interrupt if any of the registers monitored  \
        by the configuration register CRC change value. The CRC_RSLT register  \
        holds the new configuration register CRC value. */
#define BITP_MASK1_CRC_DONE                                                    \
  27 /* Set this bit to enable an interrupt when the configuration register    \
        CRC calculation is done, after initiated by writing the                \
        FORCE_CRC_UPDATE bit in the CRC_FORCE register. */
#define BITP_MASK1_ERROR0                                                      \
  28 /* This interrupt is not maskable. Issue a software reset or hardware     \
        reset to clear this error. */
#define BITP_MASK1_ERROR1                                                      \
  29 /* This interrupt is not maskable. Issue a software reset or hardware     \
        reset to clear this error. */
#define BITP_MASK1_ERROR2                                                      \
  30 /* Set this bit to enable an interrupt if ERROR2 occurs. */
#define BITP_MASK1_ERROR3                                                      \
  31 /* Set this bit to enable an interrupt if ERROR3 occurs. Issue a          \
        software reset or hardware reset to clear this error. */
#define BITL_MASK1_ANLOAD 1
#define BITL_MASK1_RNLOAD 1
#define BITL_MASK1_VANLOAD 1
#define BITL_MASK1_AFNOLOAD 1
#define BITL_MASK1_RFNOLOAD 1
#define BITL_MASK1_VAFNOLOAD 1
#define BITL_MASK1_ZXTOVA 1
#define BITL_MASK1_ZXTOVB 1
#define BITL_MASK1_ZXTOVC 1
#define BITL_MASK1_ZXVA 1
#define BITL_MASK1_ZXVB 1
#define BITL_MASK1_ZXVC 1
#define BITL_MASK1_ZXCOMB 1
#define BITL_MASK1_ZXIA 1
#define BITL_MASK1_ZXIB 1
#define BITL_MASK1_ZXIC 1
#define BITL_MASK1_OI 1
#define BITL_MASK1_SEQERR 1
#define BITL_MASK1_CRC_CHG 1
#define BITL_MASK1_CRC_DONE 1
#define BITL_MASK1_ERROR0 1
#define BITL_MASK1_ERROR1 1
#define BITL_MASK1_ERROR2 1
#define BITL_MASK1_ERROR3 1
#define BITM_MASK1_ANLOAD 0x00000001
#define BITM_MASK1_RNLOAD 0x00000002
#define BITM_MASK1_VANLOAD 0x00000004
#define BITM_MASK1_AFNOLOAD 0x00000008
#define BITM_MASK1_RFNOLOAD 0x00000010
#define BITM_MASK1_VAFNOLOAD 0x00000020
#define BITM_MASK1_ZXTOVA 0x00000040
#define BITM_MASK1_ZXTOVB 0x00000080
#define BITM_MASK1_ZXTOVC 0x00000100
#define BITM_MASK1_ZXVA 0x00000200
#define BITM_MASK1_ZXVB 0x00000400
#define BITM_MASK1_ZXVC 0x00000800
#define BITM_MASK1_ZXCOMB 0x00001000
#define BITM_MASK1_ZXIA 0x00002000
#define BITM_MASK1_ZXIB 0x00004000
#define BITM_MASK1_ZXIC 0x00008000
#define BITM_MASK1_OI 0x00020000
#define BITM_MASK1_SEQERR 0x00040000
#define BITM_MASK1_CRC_CHG 0x04000000
#define BITM_MASK1_CRC_DONE 0x08000000
#define BITM_MASK1_ERROR0 0x10000000
#define BITM_MASK1_ERROR1 0x20000000
#define BITM_MASK1_ERROR2 0x40000000
#define BITM_MASK1_ERROR3 0x80000000

#define REG_EVENT_MASK 0x407 /* Event enable register. */
#define BITP_EVENT_MASK_REVPSUM1                                               \
  6 /* Set this bit to enable the EVENT pin to go low to indicate if the last  \
       CF1 pulse was from negative energy. This bit is updated when a CF1      \
       pulse is output, when the CF1 pin goes from high to low. */
#define BITP_EVENT_MASK_REVPSUM2                                               \
  7 /* Set this bit to enable the EVENT pin to go low to indicate if the last  \
       CF2 pulse was from negative energy. This bit is updated when a CF2      \
       pulse is output, when the CF2 pin goes from high to low. */
#define BITP_EVENT_MASK_REVPSUM3                                               \
  8 /* Set this bit to enable the EVENT pin to go low to indicate if the last  \
       CF3 pulse was from negative energy. This bit is updated when a CF3      \
       pulse is output, when the CF3 pin goes from high to low. */
#define BITP_EVENT_MASK_REVPSUM4                                               \
  9 /* Set this bit to enable the EVENT pin to go low to indicate if the last  \
       CF4 pulse was from negative energy. This bit is updated when a CF4      \
       pulse is output, when the CF4 pin goes from high to low. */
#define BITP_EVENT_MASK_ANLOAD                                                 \
  10 /* Set this bit to enable the EVENT pin to go low when one or more        \
        phases of total active energy accumulation goes into no load. */
#define BITP_EVENT_MASK_RNLOAD                                                 \
  11 /* Set this bit to enable the EVENT pin to go low when one or more        \
        phases of total reactive energy accumulation goes into no load. */
#define BITP_EVENT_MASK_VANLOAD                                                \
  12 /* Set this bit to enable the EVENT pin to go low when one or more        \
        phases of total apparent energy accumulation goes into no load. */
#define BITP_EVENT_MASK_AFNOLOAD                                               \
  13 /* Set this bit to enable the EVENT pin to go low when one or more        \
        phases of Fundamental Active energy accumulation goes into No-load */
#define BITP_EVENT_MASK_RFNOLOAD                                               \
  14 /* Set this bit to enable the EVENT pin to go low when one or more        \
        phases of fundamental reactive energy accumulation goes into no load.  \
      */
#define BITP_EVENT_MASK_VAFNOLOAD                                              \
  15 /* Set this bit to enable the EVENT pin to go low when one or more        \
        phases of Fundamental Apparent energy accumulation goes into No-load   \
      */
#define BITP_EVENT_MASK_DREADY                                                 \
  16 /* Set this bit to enable the EVENT pin to go low when new waveform       \
        samples are ready. The update rate depends on the data selected in     \
        the WF_SRC bits in the WFB_CFG register. */
#define BITL_EVENT_MASK_REVPSUM1 1
#define BITL_EVENT_MASK_REVPSUM2 1
#define BITL_EVENT_MASK_REVPSUM3 1
#define BITL_EVENT_MASK_REVPSUM4 1
#define BITL_EVENT_MASK_ANLOAD 1
#define BITL_EVENT_MASK_RNLOAD 1
#define BITL_EVENT_MASK_VANLOAD 1
#define BITL_EVENT_MASK_AFNOLOAD 1
#define BITL_EVENT_MASK_RFNOLOAD 1
#define BITL_EVENT_MASK_VAFNOLOAD 1
#define BITL_EVENT_MASK_DREADY 1
#define BITM_EVENT_MASK_REVPSUM1 0x00000040
#define BITM_EVENT_MASK_REVPSUM2 0x00000080
#define BITM_EVENT_MASK_REVPSUM3 0x00000100
#define BITM_EVENT_MASK_REVPSUM4 0x00000200
#define BITM_EVENT_MASK_ANLOAD 0x00000400
#define BITM_EVENT_MASK_RNLOAD 0x00000800
#define BITM_EVENT_MASK_VANLOAD 0x00001000
#define BITM_EVENT_MASK_AFNOLOAD 0x00002000
#define BITM_EVENT_MASK_RFNOLOAD 0x00004000
#define BITM_EVENT_MASK_VAFNOLOAD 0x00008000
#define BITM_EVENT_MASK_DREADY 0x00010000

#define REG_OILVL 0x409        /* Over current detection threshold level */
#define BITP_OILVL_OILVL_VAL 0 /* Over current detection threshold level */
#define BITL_OILVL_OILVL_VAL 24
#define BITM_OILVL_OILVL_VAL 0x00ffffff

#define REG_OIA                                                                \
  0x40A /* Phase A overcurrent one cycle RMS value. If a phase is enabled,     \
           with the OC_ENA bit set in the CONFIG3 register and the AIRMSONE    \
           is greater than the OILVL threshold then this value is updated. */
#define BITP_OIA_OI_VAL                                                        \
  0 /* Phase A overcurrent one cycle RMS value. If a phase is enabled, with    \
       the OC_ENA bit set in the CONFIG3 register and the AIRMSONE is greater  \
       than the OILVL threshold then this value is updated. */
#define BITL_OIA_OI_VAL 24
#define BITM_OIA_OI_VAL 0x00ffffff

#define REG_OIB                                                                \
  0x40B /* Phase B overcurrent one cycle RMS value. If a phase is enabled,     \
           with the OC_ENB bit set in the CONFIG3 register and the BIRMSONE    \
           is greater than the OILVL threshold then this value is updated. */
#define BITP_OIB_OIB_VAL                                                       \
  0 /* Phase B overcurrent one cycle RMS value. If a phase is enabled, with    \
       the OC_ENB bit set in the CONFIG3 register and the BIRMSONE is greater  \
       than the OILVL threshold then this value is updated. */
#define BITL_OIB_OIB_VAL 24
#define BITM_OIB_OIB_VAL 0x00ffffff

#define REG_OIC                                                                \
  0x40C /* Phase C overcurrent one cycle RMS value. If a phase is enabled,     \
           with the OC_ENC bit set in the CONFIG3 register and the CIRMSONE    \
           is greater than the OILVL threshold then this value is updated. */
#define BITP_OIC_OIC_VAL                                                       \
  0 /* Phase C overcurrent one cycle RMS value. If a phase is enabled, with    \
       the OC_ENC bit set in the CONFIG3 register and the CIRMSONE is greater  \
       than the OILVL threshold then this value is updated. */
#define BITL_OIC_OIC_VAL 24
#define BITM_OIC_OIC_VAL 0x00ffffff

#define REG_OIN                                                                \
  0x40D /* Neutral Current overcurrent one cycle RMS value. If enabled, with   \
           the OC_ENN bit set in the CONFIG3 register and the NIRMSONE is      \
           greater than the OILVL threshold then this value is updated. */
#define BITP_OIN_OIN_VAL                                                       \
  0 /* Neutral Current overcurrent one cycle RMS value. If enabled, with the   \
       OC_ENN bit set in the CONFIG3 register and the NIRMSONE is greater      \
       than the OILVL threshold then this value is updated. */
#define BITL_OIN_OIN_VAL 24
#define BITM_OIN_OIN_VAL 0x00ffffff

#define REG_USER_PERIOD                                                        \
  0x40E /* User configured line period value used for resampling, one cycle    \
           one cycle RMS and 10/12 cycle rms when the UPERIOD_SEL bit in the   \
           CONFIG2 register is set */

#define REG_VLEVEL                                                             \
  0x40F /* Register used in the algorithm that computes the fundamental        \
           active, reactive and apparent powers as well as the fundemantal     \
           IRMS and VRMS */
#define BITP_VLEVEL_VLEVEL_VAL                                                 \
  0 /* Register used in the algorithm that computes the fundamental active,    \
       reactive and apparent powers as well as the fundamental IRMS and VRMS   \
     */
#define BITL_VLEVEL_VLEVEL_VAL 24
#define BITM_VLEVEL_VLEVEL_VAL 0x00ffffff

#define REG_APERIOD 0x418 /* Line period on Phase A voltage */

#define REG_BPERIOD 0x419 /* Line period on Phase B voltage */

#define REG_CPERIOD 0x41A /* Line period on Phase C voltage */

#define REG_COM_PERIOD                                                         \
  0x41B /* Line period measurement on combined signal from Phase A, Phase B,   \
           and Phase C voltages. */

#define REG_ACT_NL_LVL                                                         \
  0x41C /* No-load threshold in the total and fundamental active power         \
           datapath. */

#define REG_REACT_NL_LVL                                                       \
  0x41D /* No-load threshold in the total and fundamental reactive power       \
           datapath. */

#define REG_APP_NL_LVL                                                         \
  0x41E /* No-load threshold in the total and fundamental apparent power       \
           datapath. */

#define REG_PHNOLOAD 0x41F /* Phase no load register. */
#define BITP_PHNOLOAD_AWATTNL                                                  \
  0 /* This bit is set if the Phase A total active energy is in no load. */
#define BITP_PHNOLOAD_AVARNL                                                   \
  1 /* This bit is set if the Phase A total reactive energy is in no load. */
#define BITP_PHNOLOAD_AVANL                                                    \
  2 /* This bit is set if the Phase A total apparent energy is in no load. */
#define BITP_PHNOLOAD_AFWATTNL                                                 \
  3 /* This bit is set if the Phase A Fundamental Active Energy is in          \
       No-Load. */
#define BITP_PHNOLOAD_AFVARNL                                                  \
  4 /* This bit is set if the Phase A fundamental reactive energy is in no     \
       load. */
#define BITP_PHNOLOAD_AFVANL                                                   \
  5 /* This bit is set if the Phase A Fundamental Apparent Energy is in        \
       No-Load. */
#define BITP_PHNOLOAD_BWATTNL                                                  \
  6 /* This bit is set if the Phase B total active energy is in no load. */
#define BITP_PHNOLOAD_BVARNL                                                   \
  7 /* This bit is set if the Phase B total reactive energy is in no load. */
#define BITP_PHNOLOAD_BVANL                                                    \
  8 /* This bit is set if the Phase B total apparent energy is in no load. */
#define BITP_PHNOLOAD_BFWATTNL                                                 \
  9 /* This bit is set if the Phase B Fundamental Active Energy is in          \
       No-Load. */
#define BITP_PHNOLOAD_BFVARNL                                                  \
  10 /* This bit is set if the Phase B fundamental reactive energy is in no    \
        load. */
#define BITP_PHNOLOAD_BFVANL                                                   \
  11 /* This bit is set if the Phase B Fundamental Apparent Energy is in       \
        No-Load. */
#define BITP_PHNOLOAD_CWATTNL                                                  \
  12 /* This bit is set if the Phase C total active energy is in no load. */
#define BITP_PHNOLOAD_CVARNL                                                   \
  13 /* This bit is set if the Phase B total reactive energy is in no load.    \
      */
#define BITP_PHNOLOAD_CVANL                                                    \
  14 /* This bit is set if the Phase C total apparent energy is in no load.    \
      */
#define BITP_PHNOLOAD_CFWATTNL                                                 \
  15 /* This bit is set if the Phase C Fundamental Active Energy is in         \
        No-Load. */
#define BITP_PHNOLOAD_CFVARNL                                                  \
  16 /* This bit is set if the Phase C fundamental reactive energy is in no    \
        load. */
#define BITP_PHNOLOAD_CFVANL                                                   \
  17 /* This bit is set if the Phase C Fundamental Apparent Energy is in       \
        No-Load. */
#define BITL_PHNOLOAD_AWATTNL 14
#define BITL_PHNOLOAD_AVARNL 14
#define BITL_PHNOLOAD_AVANL 14
#define BITL_PHNOLOAD_AFWATTNL 14
#define BITL_PHNOLOAD_AFVARNL 14
#define BITL_PHNOLOAD_AFVANL 14
#define BITL_PHNOLOAD_BWATTNL 14
#define BITL_PHNOLOAD_BVARNL 14
#define BITL_PHNOLOAD_BVANL 14
#define BITL_PHNOLOAD_BFWATTNL 14
#define BITL_PHNOLOAD_BFVARNL 14
#define BITL_PHNOLOAD_BFVANL 14
#define BITL_PHNOLOAD_CWATTNL 14
#define BITL_PHNOLOAD_CVARNL 14
#define BITL_PHNOLOAD_CVANL 14
#define BITL_PHNOLOAD_CFWATTNL 14
#define BITL_PHNOLOAD_CFVARNL 14
#define BITL_PHNOLOAD_CFVANL 14
#define BITM_PHNOLOAD_AWATTNL 0x00003fff
#define BITM_PHNOLOAD_AVARNL 0x00007ffe
#define BITM_PHNOLOAD_AVANL 0x0000fffc
#define BITM_PHNOLOAD_AFWATTNL 0x0001fff8
#define BITM_PHNOLOAD_AFVARNL 0x0003fff0
#define BITM_PHNOLOAD_AFVANL 0x0007ffe0
#define BITM_PHNOLOAD_BWATTNL 0x000fffc0
#define BITM_PHNOLOAD_BVARNL 0x001fff80
#define BITM_PHNOLOAD_BVANL 0x003fff00
#define BITM_PHNOLOAD_BFWATTNL 0x007ffe00
#define BITM_PHNOLOAD_BFVARNL 0x00fffc00
#define BITM_PHNOLOAD_BFVANL 0x01fff800
#define BITM_PHNOLOAD_CWATTNL 0x03fff000
#define BITM_PHNOLOAD_CVARNL 0x07ffe000
#define BITM_PHNOLOAD_CVANL 0x0fffc000
#define BITM_PHNOLOAD_CFWATTNL 0x1fff8000
#define BITM_PHNOLOAD_CFVARNL 0x3fff0000
#define BITM_PHNOLOAD_CFVANL 0x7ffe0000

#define REG_WTHR                                                               \
  0x420 /* Sets the maximum output rate from the digital to frequency          \
           converter for the total and fundamental active power for the CF     \
           calibration pulse output. It is recommended to write WTHR =         \
           0x0010_0000. */

#define REG_VARTHR                                                             \
  0x421 /* Sets the maximum output rate from the digital to frequency          \
           converter for the total and fundamental reactive power for the CF   \
           calibration pulse output. It is recommended to write VARTHR =       \
           0x0010_0000. */

#define REG_VATHR                                                              \
  0x422 /* Sets the maximum output rate from the digital to frequency          \
           converter for the total and fundamental apparent power for the CF   \
           calibration pulse output. It is recommended to write VATHR =        \
           0x0010_0000. */

#define REG_LAST_DATA_32                                                       \
  0x423 /* This register holds the data read or written during the last        \
           32-bit transaction on the SPI port */

#define REG_ADC_REDIRECT                                                       \
  0x424 /* This register allows any ADC output to be redirected to any         \
           digital datapath */
#define BITP_ADC_REDIRECT_IA_DIN                                               \
  0 /* IA channel data can be selected from all channels. The bit              \
       descriptions for 000b through 110b match VC_DIN. When the value is      \
       equal to 111b then: */
#define BITP_ADC_REDIRECT_IB_DIN                                               \
  3 /* IB channel data can be selected from all channels. The bit              \
       descriptions for 000b through 110b match VC_DIN. When the value is      \
       equal to 111b then: */
#define BITP_ADC_REDIRECT_IC_DIN                                               \
  6 /* IC channel data can be selected from all channels. The bit              \
       descriptions for 000b through 110b match VC_DIN. When the value is      \
       equal to 111b then: */
#define BITP_ADC_REDIRECT_IN_DIN                                               \
  9 /* IN channel data can be selected from all channels. The bit              \
       descriptions for 000b through 110b match VC_DIN. When the value is      \
       equal to 111b then: */
#define BITP_ADC_REDIRECT_VA_DIN                                               \
  12 /* VA channel data can be selected from all channels. The bit             \
        descriptions for 000b through 110b match VC_DIN. When the value is     \
        equal to 111b then: */
#define BITP_ADC_REDIRECT_VB_DIN                                               \
  15 /* VB channel data can be selected from all channels. The bit             \
        descriptions for 000b through 110b match VC_DIN. When the value is     \
        equal to 111b then: */
#define BITP_ADC_REDIRECT_VC_DIN                                               \
  18 /* VC Channel Data can be selected from all channels. The bit             \
        descriptions for 000b through 110b match VC_DIN--please see that       \
        description to understand the meaning of 000b through 110b. When the   \
        value is equal to 111b then: */
#define BITL_ADC_REDIRECT_IA_DIN 3
#define BITL_ADC_REDIRECT_IB_DIN 3
#define BITL_ADC_REDIRECT_IC_DIN 3
#define BITL_ADC_REDIRECT_IN_DIN 3
#define BITL_ADC_REDIRECT_VA_DIN 3
#define BITL_ADC_REDIRECT_VB_DIN 3
#define BITL_ADC_REDIRECT_VC_DIN 3
#define BITM_ADC_REDIRECT_IA_DIN 0x00000007
#define BITM_ADC_REDIRECT_IB_DIN 0x00000038
#define BITM_ADC_REDIRECT_IC_DIN 0x000001c0
#define BITM_ADC_REDIRECT_IN_DIN 0x00000e00
#define BITM_ADC_REDIRECT_VA_DIN 0x00007000
#define BITM_ADC_REDIRECT_VB_DIN 0x00038000
#define BITM_ADC_REDIRECT_VC_DIN 0x001c0000

#define REG_CF_LCFG                                                            \
  0x425 /* CF calibration pulse width configuration register */
#define BITP_CF_LCFG_CF_LTMR                                                   \
  0 /* If the CFx_LT bit in CF_LCFG register is set, then this value           \
       determines the active low pulse width of the CFx pulse. */
#define BITP_CF_LCFG_CF1_LT                                                    \
  19 /* If this bit is set, the CF1 pulse width is determined by the CF_LTMR   \
        register value. If this bit is equal to zero, the active low pulse     \
        width is set at 80 ms for frequencies lower than 6.25 Hz. */
#define BITP_CF_LCFG_CF2_LT                                                    \
  20 /* If this bit is set, the CF2 pulse width is determined by the CF_LTMR   \
        register value. If this bit is equal to zero, the active low pulse     \
        width is set at 80 ms for frequencies lower than 6.25 Hz. */
#define BITP_CF_LCFG_CF3_LT                                                    \
  21 /* If this bit is set, the CF3 pulse width is determined by the CF_LTMR   \
        register value. If this bit is equal to zero, the active low pulse     \
        width is set at 80 ms for frequencies lower than 6.25 Hz. */
#define BITP_CF_LCFG_CF4_LT                                                    \
  22 /* If this bit is set, the CF4 pulse width is determined by the CF_LTMR   \
        register value. If this bit is equal to zero, then the active low      \
        pulse width is set at 80 ms for frequencies lower than 6.25 Hz. */
#define BITL_CF_LCFG_CF_LTMR 19
#define BITL_CF_LCFG_CF1_LT 1
#define BITL_CF_LCFG_CF2_LT 1
#define BITL_CF_LCFG_CF3_LT 1
#define BITL_CF_LCFG_CF4_LT 1
#define BITM_CF_LCFG_CF_LTMR 0x0007ffff
#define BITM_CF_LCFG_CF1_LT 0x00080000
#define BITM_CF_LCFG_CF2_LT 0x00100000
#define BITM_CF_LCFG_CF3_LT 0x00200000
#define BITM_CF_LCFG_CF4_LT 0x00400000

#define REG_PART_ID                                                            \
  0x472 /* This register identifies the IC. If the ADE9004_ID, ADE9000_ID and  \
           AD73370_ID bits are 0 then the IC is an ADE9078 */
#define BITP_PART_ID_ADE9004_ID                                                \
  16 /* This bit is set to identify an ADE9004 IC */
#define BITP_PART_ID_ADE9000_ID                                                \
  20 /* This bit is set to identify an ADE9000 IC */
#define BITP_PART_ID_AD73370_ID                                                \
  21 /* This bit is set to identify an AD73370 IC */
#define BITL_PART_ID_ADE9004_ID 1
#define BITL_PART_ID_ADE9000_ID 1
#define BITL_PART_ID_AD73370_ID 1
#define BITM_PART_ID_ADE9004_ID 0x00010000
#define BITM_PART_ID_ADE9000_ID 0x00100000
#define BITM_PART_ID_AD73370_ID 0x00200000

#define REG_TEMP_TRIM                                                          \
  0x474 /* Temperature sensor gain and offset, calculated during the           \
           manufacturing process */
#define BITP_TEMP_TRIM_TEMP_GAIN                                               \
  0 /* Gain of temperature sensor, calculated during the manufacturing         \
       process */
#define BITP_TEMP_TRIM_TEMP_OFFSET                                             \
  16 /* Offset of temperature sensor, calculated during the manufacturing      \
        process */
#define BITL_TEMP_TRIM_TEMP_GAIN 16
#define BITL_TEMP_TRIM_TEMP_OFFSET 16
#define BITM_TEMP_TRIM_TEMP_GAIN 0x0000ffff
#define BITM_TEMP_TRIM_TEMP_OFFSET 0xffff0000

#define REG_RUN                                                                \
  0x480 /* Write this register to 1 to start the measurements.                 \
         */

#define REG_CONFIG1 0x481 /* Configuration Register 1. */
#define BITP_CONFIG1_SWRST                                                     \
  0 /* Set this bit to initiate a software reset. Note that this bit is self   \
       clearing. */
#define BITP_CONFIG1_CF3_CFG                                                   \
  1 /* This bit selects which function to output on the CF3 pin. */
#define BITP_CONFIG1_CF4_CFG                                                   \
  2 /* These bits select which function to output on the CF4 pin. */
#define BITP_CONFIG1_CF_ACC_CLR                                                \
  5 /* Set this bit to clear the accumulation in the digital to frequency      \
       converter and CFDEN counter. Note that this bit automatically clears    \
       itself. */
#define BITP_CONFIG1_PWR_SETTLE                                                \
  8 /* These bits configure the time for the power and filter based rms        \
       measurements to settle before starting the power, energy and CF         \
       accumulations. */
#define BITP_CONFIG1_BURST_EN                                                  \
  11 /* Set this bit to enable burst read functionality on the registers from  \
        Address 0x500 to Address 0x6FF. Note that this disables the CRC being  \
        appended to SPI register reads. */
#define BITP_CONFIG1_IRQ0_ON_IRQ1                                              \
  12 /* Set this bit to combine all the interrupts onto a single interrupt     \
        pin, IRQ1, instead of using two pins, IRQ0 and IRQ1. Note that the     \
        IRQ0 pin still indicates the enabled IRQ0 events while in this mode    \
        and the IRQ1 indicates both IRQ1 and IRQ0 events. */
#define BITP_CONFIG1_EXT_REF                                                   \
  15 /* Set this bit if using an external voltage reference. */
#define BITL_CONFIG1_SWRST 1
#define BITL_CONFIG1_CF3_CFG 1
#define BITL_CONFIG1_CF4_CFG 2
#define BITL_CONFIG1_CF_ACC_CLR 1
#define BITL_CONFIG1_PWR_SETTLE 2
#define BITL_CONFIG1_BURST_EN 1
#define BITL_CONFIG1_IRQ0_ON_IRQ1 1
#define BITL_CONFIG1_EXT_REF 1
#define BITM_CONFIG1_SWRST 0x00000001
#define BITM_CONFIG1_CF3_CFG 0x00000002
#define BITM_CONFIG1_CF4_CFG 0x0000000c
#define BITM_CONFIG1_CF_ACC_CLR 0x00000020
#define BITM_CONFIG1_PWR_SETTLE 0x00000300
#define BITM_CONFIG1_BURST_EN 0x00000800
#define BITM_CONFIG1_IRQ0_ON_IRQ1 0x00001000
#define BITM_CONFIG1_EXT_REF 0x00008000

#define REG_ANGL_VA_VB                                                         \
  0x482 /* Time between positive to negative zero crossings on Phase A and     \
           Phase B voltages. */

#define REG_ANGL_VB_VC                                                         \
  0x483 /* Time between positive to negative zero crossings on Phase B and     \
           Phase C voltages. */

#define REG_ANGL_VA_VC                                                         \
  0x484 /* Time between positive to negative zero crossings on Phase A and     \
           Phase C voltages. */

#define REG_ANGL_VA_IA                                                         \
  0x485 /* Time between positive to negative zero crossings on Phase A         \
           voltage and current. */

#define REG_ANGL_VB_IB                                                         \
  0x486 /* Time between positive to negative zero crossings on Phase B         \
           voltage and current. */

#define REG_ANGL_VC_IC                                                         \
  0x487 /* Time between positive to negative zero crossings on Phase C         \
           voltage and current. */

#define REG_ANGL_IA_IB                                                         \
  0x488 /* Time between positive to negative zero crossings on Phase A and     \
           Phase B current. */

#define REG_ANGL_IB_IC                                                         \
  0x489 /* Time between positive to negative zero crossings on Phase B and     \
           Phase C current. */

#define REG_ANGL_IA_IC                                                         \
  0x48A /* Time between positive to negative zero crossings on Phase A and     \
           Phase C current. */

#define REG_OISTATUS 0x48F /* Overcurrent Status register */

#define REG_CFMODE 0x490 /* CFx configuration register */
#define BITP_CFMODE_CF1SEL                                                     \
  0 /* Selects type of energy output on CF1 pin--see CF4SEL. */
#define BITP_CFMODE_CF2SEL                                                     \
  3 /* Selects type of energy output on CF2 pin--see CF4SEL. */
#define BITP_CFMODE_CF3SEL                                                     \
  6 /* Selects type of energy output on CF3 pin--see CF4SEL. */
#define BITP_CFMODE_CF4SEL                                                     \
  9 /* Type of energy output on the CF4 pin. Configure TERMSEL4 in the         \
       COMPMODE register to select which phases are included. */
#define BITP_CFMODE_CF1DIS 12 /* CF1 output disable--see CF4DIS */
#define BITP_CFMODE_CF2DIS 13 /* CF2 output disable--see CF4DIS. */
#define BITP_CFMODE_CF3DIS 14 /* CF3 output disable--see CF4DIS. */
#define BITP_CFMODE_CF4DIS                                                     \
  15 /* CF4 output disable. Set this bit to disable the CF4 output and bring   \
        the pin high. Note that when this bit is set, the CFx bit in STATUS0   \
        is not set when a CF pulse is accumulated in the digital to frequency  \
        converter. */
#define BITL_CFMODE_CF1SEL 3
#define BITL_CFMODE_CF2SEL 3
#define BITL_CFMODE_CF3SEL 3
#define BITL_CFMODE_CF4SEL 3
#define BITL_CFMODE_CF1DIS 1
#define BITL_CFMODE_CF2DIS 1
#define BITL_CFMODE_CF3DIS 1
#define BITL_CFMODE_CF4DIS 1
#define BITM_CFMODE_CF1SEL 0x00000007
#define BITM_CFMODE_CF2SEL 0x00000038
#define BITM_CFMODE_CF3SEL 0x000001c0
#define BITM_CFMODE_CF4SEL 0x00000e00
#define BITM_CFMODE_CF1DIS 0x00001000
#define BITM_CFMODE_CF2DIS 0x00002000
#define BITM_CFMODE_CF3DIS 0x00004000
#define BITM_CFMODE_CF4DIS 0x00008000

#define REG_COMPMODE 0x491 /* Computation mode register */
#define BITP_COMPMODE_TERMSEL1                                                 \
  0 /* Phases to include in CF1 pulse output--see TERMSEL4. */
#define BITP_COMPMODE_TERMSEL2                                                 \
  3 /* Phases to include in CF2 pulse output--see TERMSEL4. */
#define BITP_COMPMODE_TERMSEL3                                                 \
  6 /* Phases to include in CF3 pulse output--see TERMSEL4. */
#define BITP_COMPMODE_TERMSEL4 9 /* Phases to include in CF4 pulse output */
#define BITL_COMPMODE_TERMSEL1 3
#define BITL_COMPMODE_TERMSEL2 3
#define BITL_COMPMODE_TERMSEL3 3
#define BITL_COMPMODE_TERMSEL4 3
#define BITM_COMPMODE_TERMSEL1 0x00000007
#define BITM_COMPMODE_TERMSEL2 0x00000038
#define BITM_COMPMODE_TERMSEL3 0x000001c0
#define BITM_COMPMODE_TERMSEL4 0x00000e00

#define REG_ACCMODE 0x492 /* Accumulation mode register */
#define BITP_ACCMODE_WATTACC                                                   \
  0 /* Total and fundamental active power accumulation mode for energy         \
       registers and CFx pulses--see VARACC. */
#define BITP_ACCMODE_VARACC                                                    \
  2 /* Total and fundamental reactive power accumulation mode for energy       \
       registers and CFx pulses. */
#define BITP_ACCMODE_VCONSEL                                                   \
  4 /* Three-wire and four-wire hardware configuration selection. */
#define BITP_ACCMODE_ICONSEL                                                   \
  7 /* Set this bit to calculate the current flowing through IB from the IA    \
       and IC measurements. If this bit is set, IB = −IA − IC. */
#define BITP_ACCMODE_SELFREQ                                                   \
  8 /* This bit is used to configure the IC for a 50 Hz or 60 Hz system. This  \
       setting is used in the fundamental power measurements and to set the    \
       default line period used for Vone cycle RMS, 10/12 cycle rms and        \
       resampling calculations if a zero crossing is not present. */
#define BITL_ACCMODE_WATTACC 2
#define BITL_ACCMODE_VARACC 2
#define BITL_ACCMODE_VCONSEL 3
#define BITL_ACCMODE_ICONSEL 1
#define BITL_ACCMODE_SELFREQ 1
#define BITM_ACCMODE_WATTACC 0x00000003
#define BITM_ACCMODE_VARACC 0x0000000c
#define BITM_ACCMODE_VCONSEL 0x00000070
#define BITM_ACCMODE_ICONSEL 0x00000080
#define BITM_ACCMODE_SELFREQ 0x00000100

#define REG_CONFIG3 0x493 /* Configuration Register 3. */
#define BITP_CONFIG3_PEAKSEL                                                   \
  2 /* Set this bit to select which phase(s) to monitor peak voltages and      \
       currents on */
#define BITP_CONFIG3_OC_EN 12 /* OverCurrent detection enable */
#define BITL_CONFIG3_PEAKSEL 3
#define BITL_CONFIG3_OC_EN 4
#define BITM_CONFIG3_PEAKSEL 0x0000001c
#define BITM_CONFIG3_OC_EN 0x0000f000

#define REG_CF1DEN 0x494 /* CF1 denominator register. */

#define REG_CF2DEN 0x495 /* CF2 denominator register. */

#define REG_CF3DEN 0x496 /* CF3 denominator register. */

#define REG_CF4DEN 0x497 /* CF4 denominator register. */

#define REG_ZXTOUT 0x498 /* Zero-crossing timeout configuration register */

#define REG_ZXTHRSH                                                            \
  0x499 /* Voltage channel zero-crossing threshold register. */

#define REG_ZX_LP_SEL                                                          \
  0x49A /* This register selects which zero crossing and which line period     \
           measurement are used for other calculations */
#define BITP_ZX_LP_SEL_ZX_SEL                                                  \
  1 /* Selects the zero-crossing signal, which can be routed to CF3/ZX output  \
       pin and which is used for line cycle energy accumulation. */
#define BITP_ZX_LP_SEL_LP_SEL                                                  \
  3 /* Selects line period measurement used for Vone cycle RMS cycle, 10/12    \
       cycle and resampling. */
#define BITL_ZX_LP_SEL_ZX_SEL 2
#define BITL_ZX_LP_SEL_LP_SEL 2
#define BITM_ZX_LP_SEL_ZX_SEL 0x00000006
#define BITM_ZX_LP_SEL_LP_SEL 0x00000018

#define REG_SEQ_CYC                                                            \
  0x49C /* Number of line cycles used for phase sequence detection. It is      \
           recommended to set this register to 1. */

#define REG_PHSIGN 0x49D /* Power sign register */
#define BITP_PHSIGN_AWSIGN                                                     \
  0 /* Phase A active power sign bit. The PWR_SIGN_SEL bit in the EP_CFG       \
       selects whether this feature monitors total or fundamental active       \
       power. */
#define BITP_PHSIGN_AVARSIGN                                                   \
  1 /* Phase A reactive power sign bit. The PWR_SIGN_SEL bit in the EP_CFG     \
       selects whether this feature monitors total or fundamental reactive     \
       power. */
#define BITP_PHSIGN_BWSIGN                                                     \
  2 /* Phase B active power sign bit. The PWR_SIGN_SEL bit in the EP_CFG       \
       selects whether this feature monitors total or fundamental active       \
       power. */
#define BITP_PHSIGN_BVARSIGN                                                   \
  3 /* Phase B reactive power sign bit. The PWR_SIGN_SEL bit in the EP_CFG     \
       selects whether this feature monitors total or fundamental reactive     \
       power. */
#define BITP_PHSIGN_CWSIGN                                                     \
  4 /* Phase C active power sign bit. The PWR_SIGN_SEL bit in the EP_CFG       \
       selects whether this feature monitors total or fundamental active       \
       power. */
#define BITP_PHSIGN_CVARSIGN                                                   \
  5 /* Phase C reactive power sign bit. The PWR_SIGN_SEL bit in the EP_CFG     \
       selects whether this feature monitors total or fundamental reactive     \
       power. */
#define BITP_PHSIGN_SUM1SIGN                                                   \
  6 /* Sign of the sum of the powers included in the CF1 datapath. The CF1     \
       energy is positive if this bit is clear and negative if this bit is     \
       set. */
#define BITP_PHSIGN_SUM2SIGN                                                   \
  7 /* Sign of the sum of the powers included in the CF2 datapath. The CF2     \
       energy is positive if this bit is clear and negative if this bit is     \
       set. */
#define BITP_PHSIGN_SUM3SIGN                                                   \
  8 /* Sign of the sum of the powers included in the CF3 datapath. The CF3     \
       energy is positive if this bit is clear and negative if this bit is     \
       set. */
#define BITP_PHSIGN_SUM4SIGN                                                   \
  9 /* Sign of the sum of the powers included in the CF4 datapath. The CF4     \
       energy is positive if this bit is clear and negative if this bit is     \
       set. */
#define BITL_PHSIGN_AWSIGN 1
#define BITL_PHSIGN_AVARSIGN 1
#define BITL_PHSIGN_BWSIGN 1
#define BITL_PHSIGN_BVARSIGN 1
#define BITL_PHSIGN_CWSIGN 1
#define BITL_PHSIGN_CVARSIGN 1
#define BITL_PHSIGN_SUM1SIGN 1
#define BITL_PHSIGN_SUM2SIGN 1
#define BITL_PHSIGN_SUM3SIGN 1
#define BITL_PHSIGN_SUM4SIGN 1
#define BITM_PHSIGN_AWSIGN 0x00000001
#define BITM_PHSIGN_AVARSIGN 0x00000002
#define BITM_PHSIGN_BWSIGN 0x00000004
#define BITM_PHSIGN_BVARSIGN 0x00000008
#define BITM_PHSIGN_CWSIGN 0x00000010
#define BITM_PHSIGN_CVARSIGN 0x00000020
#define BITM_PHSIGN_SUM1SIGN 0x00000040
#define BITM_PHSIGN_SUM2SIGN 0x00000080
#define BITM_PHSIGN_SUM3SIGN 0x00000100
#define BITM_PHSIGN_SUM4SIGN 0x00000200

#define REG_WFB_CFG 0x4A0 /* Waveform buffer configuration register. */
#define BITP_WFB_CFG_BURST_CHAN                                                \
  0 /* Selects which data to read out of the waveform buffer through SPI. */
#define BITP_WFB_CFG_WF_CAP_EN                                                 \
  4 /* When this bit is set, a waveform capture is started. */
#define BITP_WFB_CFG_WF_CAP_SEL                                                \
  5 /* This bit selects whether the waveform buffer is filled with resampled   \
       data or fixed data rate data, selected in the WF_CAP_SEL bits. */
#define BITP_WFB_CFG_WF_MODE                                                   \
  6 /* Fixed data rate waveforms filling and trigger based modes. */
#define BITP_WFB_CFG_WF_SRC                                                    \
  8 /* Waveform buffer source and DREADY, data ready update rate, selection.   \
     */
#define BITP_WFB_CFG_WF_IN_EN                                                  \
  12 /* This setting determines whether the IN waveform samples are read out   \
        of the waveform buffer through SPI. */
#define BITL_WFB_CFG_BURST_CHAN 4
#define BITL_WFB_CFG_WF_CAP_EN 1
#define BITL_WFB_CFG_WF_CAP_SEL 1
#define BITL_WFB_CFG_WF_MODE 2
#define BITL_WFB_CFG_WF_SRC 2
#define BITL_WFB_CFG_WF_IN_EN 1
#define BITM_WFB_CFG_BURST_CHAN 0x0000000f
#define BITM_WFB_CFG_WF_CAP_EN 0x00000010
#define BITM_WFB_CFG_WF_CAP_SEL 0x00000020
#define BITM_WFB_CFG_WF_MODE 0x000000c0
#define BITM_WFB_CFG_WF_SRC 0x00000300
#define BITM_WFB_CFG_WF_IN_EN 0x00001000

#define REG_WFB_PG_IRQEN                                                       \
  0x4A1 /* This register enables interrupts to occur after specific pages of   \
           the waveform buffer have been filled */

#define REG_WFB_TRG_CFG                                                        \
  0x4A2 /* This register enables events to trigger a capture in the waveform   \
           buffer */
#define BITP_WFB_TRG_CFG_OI 2   /* Over current event in any phase */
#define BITP_WFB_TRG_CFG_ZXIA 3 /* Phase A current zero crossing. */
#define BITP_WFB_TRG_CFG_ZXIB 4 /* Phase B current zero crossing. */
#define BITP_WFB_TRG_CFG_ZXIC 5 /* Phase C current zero crossing. */
#define BITP_WFB_TRG_CFG_ZXVA 6 /* Phase A voltage zero crossing. */
#define BITP_WFB_TRG_CFG_ZXVB 7 /* Phase B voltage zero crossing. */
#define BITP_WFB_TRG_CFG_ZXVC 8 /* Phase C voltage zero crossing. */
#define BITP_WFB_TRG_CFG_ZXCOMB                                                \
  9 /* Zero crossing on combined signal from VA, VB, and VC. */
#define BITP_WFB_TRG_CFG_TRIG_FORCE                                            \
  10 /* Set this bit to trigger an event to stop the waveform buffer filling.  \
      */
#define BITL_WFB_TRG_CFG_OI 1
#define BITL_WFB_TRG_CFG_ZXIA 1
#define BITL_WFB_TRG_CFG_ZXIB 1
#define BITL_WFB_TRG_CFG_ZXIC 1
#define BITL_WFB_TRG_CFG_ZXVA 1
#define BITL_WFB_TRG_CFG_ZXVB 1
#define BITL_WFB_TRG_CFG_ZXVC 1
#define BITL_WFB_TRG_CFG_ZXCOMB 1
#define BITL_WFB_TRG_CFG_TRIG_FORCE 1
#define BITM_WFB_TRG_CFG_OI 0x00000004
#define BITM_WFB_TRG_CFG_ZXIA 0x00000008
#define BITM_WFB_TRG_CFG_ZXIB 0x00000010
#define BITM_WFB_TRG_CFG_ZXIC 0x00000020
#define BITM_WFB_TRG_CFG_ZXVA 0x00000040
#define BITM_WFB_TRG_CFG_ZXVB 0x00000080
#define BITM_WFB_TRG_CFG_ZXVC 0x00000100
#define BITM_WFB_TRG_CFG_ZXCOMB 0x00000200
#define BITM_WFB_TRG_CFG_TRIG_FORCE 0x00000400

#define REG_WFB_TRG_STAT                                                       \
  0x4A3 /* This register indicates the last page which was filled in the       \
           waveform buffer and the location of trigger events */
#define BITP_WFB_TRG_STAT_WFB_TRIG_ADDR                                        \
  0 /* This holds the address of the last sample put into the waveform buffer  \
       after a trigger event occurred, which is within a sample or two of      \
       when the actual trigger event occurred. */
#define BITP_WFB_TRG_STAT_WFB_LAST_PAGE                                        \
  12 /* These bits indicate which page of the Waveform Buffer was filled       \
        last, when filling with Fixed Rate Data samples. */
#define BITL_WFB_TRG_STAT_WFB_TRIG_ADDR 11
#define BITL_WFB_TRG_STAT_WFB_LAST_PAGE 4
#define BITM_WFB_TRG_STAT_WFB_TRIG_ADDR 0x000007ff
#define BITM_WFB_TRG_STAT_WFB_LAST_PAGE 0x0000f000

#define REG_CONFIG5 0x4A4 /* Configuration Register 5. */

#define REG_CRC_RSLT                                                           \
  0x4A8 /* This register holds the CRC of configuration registers */

#define REG_CRC_SPI                                                            \
  0x4A9 /* This register holds the 16-bit CRC of the data sent out on the      \
           MOSI pin during the last SPI register read */

#define REG_LAST_DATA_16                                                       \
  0x4AC /* This register holds the data read or written during the last        \
           16-bit transaction on the SPI port */

#define REG_LAST_CMD                                                           \
  0x4AE /* This register holds the address and read/write operation request    \
           (CMD_HDR) for the last transaction on the SPI port */

#define REG_CONFIG2 0x4AF /* Configuration Register 2. */
#define BITP_CONFIG2_HPF_CRN                                                   \
  9 /* High pass filter corner (f3dB) enabled when the HPFDIS bit in the       \
       CONFIG0 register is equal to zero. */
#define BITP_CONFIG2_UPERIOD_SEL                                               \
  12 /* Set this bit to use a user configured line period, in USER_PERIOD,     \
        for the xVRMSONE, 10/12 cycle rms and resampling calculation. If this  \
        bit is clear, the phase voltage line period selected by the            \
        LP_SEL[1:0] bits in the ZX_LP_SEL register is used. */
#define BITL_CONFIG2_HPF_CRN 3
#define BITL_CONFIG2_UPERIOD_SEL 1
#define BITM_CONFIG2_HPF_CRN 0x00000e00
#define BITM_CONFIG2_UPERIOD_SEL 0x00001000

#define REG_EP_CFG 0x4B0 /* Energy and power accumulation configuration */
#define BITP_EP_CFG_EGY_PWR_EN                                                 \
  0 /* Set this bit to enable the energy and power accumulator, when the run   \
       bit is also set. */
#define BITP_EP_CFG_EGY_TMR_MODE                                               \
  1 /* This bit determines whether energy is accumulated based on the number   \
       of 8ksps samples or zero crossing events configured in the EGY_TIME     \
       register. */
#define BITP_EP_CFG_EGY_LD_ACCUM                                               \
  4 /* If this bit is equal to zero, then the internal energy register is      \
       added to the user accessible energy register. If the bit is set, then   \
       the internal energy register overwrites the user accessible energy      \
       register when the EGYRDY event occurs. */
#define BITP_EP_CFG_RD_RST_EN                                                  \
  5 /* Set this bit to enable the energy register read with reset feature. If  \
       this bit is set, when one of the xWATTHR, xVAHR, xVARHR xFWATTHR,       \
       xFVAHR and xFVARHR register is read, it is reset and begins             \
       accumulating energy from zero. */
#define BITP_EP_CFG_PWR_SIGN_SEL_0                                             \
  6 /* Selects whether the REVAPx bit follows the sign of the Total or         \
       Fundamental Active Power */
#define BITP_EP_CFG_PWR_SIGN_SEL_1                                             \
  7 /* Selects whether the REVRPx bit follows the sign of the total or         \
       fundamental reactive power. */
#define BITP_EP_CFG_NOLOAD_TMR                                                 \
  13 /* This register configures how many 8ksps samples to evaluate the        \
        no-load condition over. */
#define BITL_EP_CFG_EGY_PWR_EN 1
#define BITL_EP_CFG_EGY_TMR_MODE 1
#define BITL_EP_CFG_EGY_LD_ACCUM 1
#define BITL_EP_CFG_RD_RST_EN 1
#define BITL_EP_CFG_PWR_SIGN_SEL_0 2
#define BITL_EP_CFG_PWR_SIGN_SEL_1 1
#define BITL_EP_CFG_NOLOAD_TMR 3
#define BITM_EP_CFG_EGY_PWR_EN 0x00000001
#define BITM_EP_CFG_EGY_TMR_MODE 0x00000002
#define BITM_EP_CFG_EGY_LD_ACCUM 0x00000010
#define BITM_EP_CFG_RD_RST_EN 0x00000020
#define BITM_EP_CFG_PWR_SIGN_SEL_0 0x000000c0
#define BITM_EP_CFG_PWR_SIGN_SEL_1 0x00000080
#define BITM_EP_CFG_NOLOAD_TMR 0x0000e000

#define REG_PWR_TIME 0x4B1 /* Power update time configuration. */

#define REG_EGY_TIME                                                           \
  0x4B2 /* Energy accumulation update time configuration                       \
         */

#define REG_CRC_FORCE                                                          \
  0x4B4 /* This register forces an update of the CRC of configuration          \
           registers */
#define BITP_CRC_FORCE_FORCE_CRC_UPDATE                                        \
  0 /* Write this bit to force the configuration register CRC calculation to   \
       start. When the calculation is complete, the CRC_DONE bit is set in     \
       the STATUS1 register. */
#define BITL_CRC_FORCE_FORCE_CRC_UPDATE 1
#define BITM_CRC_FORCE_FORCE_CRC_UPDATE 0x00000001

#define REG_CRC_OPTEN                                                          \
  0x4B5 /* This register selects which registers are optionally included in    \
           the configuration register CRC feature */
#define BITP_CRC_OPTEN_CRC_MASK0_EN                                            \
  0 /* Set this bit to include the MASK0 register in the configuration         \
       register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_MASK1_EN                                            \
  1 /* Set this bit to include the MASK1 register in the configuration         \
       register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_EVENT_MASK_EN                                       \
  2 /* Set this bit to include the EVENT_MASK register in the configuration    \
       register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_ACT_NL_LVL_EN                                       \
  7 /* Set this bit to include the ACT_NL_LVL register in the configuration    \
       register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_REACT_NL_LVL_EN                                     \
  8 /* Set this bit to include the REACT_NL_LVL register in the configuration  \
       register CRC calculation */
#define BITP_CRC_OPTEN_CRC_APP_NL_LVL_EN                                       \
  9 /* Set this bit to include the APP_NL_LVL register in the configuration    \
       register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_ZXTOUT_EN                                           \
  10 /* Set this bit to include the CRC_ZXTOUT_EN register in the              \
        configuration register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_ZXLPSEL_EN                                          \
  11 /* Set this bit to include the ZX_LP_SEL register in the configuration    \
        register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_SEQ_CYC_EN                                          \
  12 /* Set this bit to include the SEQ_CYC register in the configuration      \
        register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_WFB_CFG_EN                                          \
  13 /* Set this bit to include the WFB_CFG register in the configuration      \
        register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_WFB_PG_IRQEN                                        \
  14 /* Set this bit to include the WFB_PG_IRQEN register in the               \
        configuration register CRC calculation. */
#define BITP_CRC_OPTEN_CRC_WFB_TRG_CFG_EN                                      \
  15 /* Set this bit to include the WFB_TRG_CFG register in the configuration  \
        register CRC calculation. */
#define BITL_CRC_OPTEN_CRC_MASK0_EN 1
#define BITL_CRC_OPTEN_CRC_MASK1_EN 1
#define BITL_CRC_OPTEN_CRC_EVENT_MASK_EN 1
#define BITL_CRC_OPTEN_CRC_ACT_NL_LVL_EN 1
#define BITL_CRC_OPTEN_CRC_REACT_NL_LVL_EN 1
#define BITL_CRC_OPTEN_CRC_APP_NL_LVL_EN 1
#define BITL_CRC_OPTEN_CRC_ZXTOUT_EN 1
#define BITL_CRC_OPTEN_CRC_ZXLPSEL_EN 1
#define BITL_CRC_OPTEN_CRC_SEQ_CYC_EN 1
#define BITL_CRC_OPTEN_CRC_WFB_CFG_EN 1
#define BITL_CRC_OPTEN_CRC_WFB_PG_IRQEN 1
#define BITL_CRC_OPTEN_CRC_WFB_TRG_CFG_EN 1
#define BITM_CRC_OPTEN_CRC_MASK0_EN 0x00000001
#define BITM_CRC_OPTEN_CRC_MASK1_EN 0x00000002
#define BITM_CRC_OPTEN_CRC_EVENT_MASK_EN 0x00000004
#define BITM_CRC_OPTEN_CRC_ACT_NL_LVL_EN 0x00000080
#define BITM_CRC_OPTEN_CRC_REACT_NL_LVL_EN 0x00000100
#define BITM_CRC_OPTEN_CRC_APP_NL_LVL_EN 0x00000200
#define BITM_CRC_OPTEN_CRC_ZXTOUT_EN 0x00000400
#define BITM_CRC_OPTEN_CRC_ZXLPSEL_EN 0x00000800
#define BITM_CRC_OPTEN_CRC_SEQ_CYC_EN 0x00001000
#define BITM_CRC_OPTEN_CRC_WFB_CFG_EN 0x00002000
#define BITM_CRC_OPTEN_CRC_WFB_PG_IRQEN 0x00004000
#define BITM_CRC_OPTEN_CRC_WFB_TRG_CFG_EN 0x00008000

#define REG_TEMP_CFG 0x4B6 /* Temperature sensor configuration register */
#define BITP_TEMP_CFG_TEMP_TIME                                                \
  0 /* Select the number of temperature readings to average */
#define BITP_TEMP_CFG_TEMP_EN                                                  \
  2 /* Set this bit to enable the temperature sensor */
#define BITP_TEMP_CFG_TEMP_START                                               \
  3 /* Set this bit to manually request a new temperature sensor reading. The  \
       new temperature reading is available in 1ms, indicated by the TEMP_RDY  \
       bit in the STATUS0 register. Note that this bit is self clearing. */
#define BITL_TEMP_CFG_TEMP_TIME 2
#define BITL_TEMP_CFG_TEMP_EN 1
#define BITL_TEMP_CFG_TEMP_START 1
#define BITM_TEMP_CFG_TEMP_TIME 0x00000003
#define BITM_TEMP_CFG_TEMP_EN 0x00000004
#define BITM_TEMP_CFG_TEMP_START 0x00000008

#define REG_TEMP_RSLT 0x4B7          /* Temperature measurement result */
#define BITP_TEMP_RSLT_TEMP_RESULT 0 /* 12-bit temperature sensor result */
#define BITL_TEMP_RSLT_TEMP_RESULT 12
#define BITM_TEMP_RSLT_TEMP_RESULT 0x00000fff

#define REG_PGA_GAIN                                                           \
  0x4B9 /* This register configures the PGA gain for each ADC */
#define BITP_PGA_GAIN_IA_GAIN                                                  \
  0 /* PGA gain for Current Channel A ADC. See VC_GAIN. */
#define BITP_PGA_GAIN_IB_GAIN                                                  \
  2 /* PGA gain for Voltage Channel B ADC. See VC_GAIN. */
#define BITP_PGA_GAIN_IC_GAIN                                                  \
  4 /* PGA gain for Current Channel C ADC. See VC_GAIN. */
#define BITP_PGA_GAIN_IN_GAIN                                                  \
  6 /* PGA gain for neutral current channel ADC. See VC_GAIN. */
#define BITP_PGA_GAIN_VA_GAIN                                                  \
  8 /* PGA gain for Voltage Channel A ADC. See VC_GAIN. */
#define BITP_PGA_GAIN_VB_GAIN                                                  \
  10 /* PGA gain for Voltage Channel B ADC. See VC_GAIN. */
#define BITP_PGA_GAIN_VC_GAIN 12 /* PGA gain for Voltage Channel C ADC. */
#define BITL_PGA_GAIN_IA_GAIN 2
#define BITL_PGA_GAIN_IB_GAIN 2
#define BITL_PGA_GAIN_IC_GAIN 2
#define BITL_PGA_GAIN_IN_GAIN 2
#define BITL_PGA_GAIN_VA_GAIN 2
#define BITL_PGA_GAIN_VB_GAIN 2
#define BITL_PGA_GAIN_VC_GAIN 2
#define BITM_PGA_GAIN_IA_GAIN 0x00000003
#define BITM_PGA_GAIN_IB_GAIN 0x0000000c
#define BITM_PGA_GAIN_IC_GAIN 0x00000030
#define BITM_PGA_GAIN_IN_GAIN 0x000000c0
#define BITM_PGA_GAIN_VA_GAIN 0x00000300
#define BITM_PGA_GAIN_VB_GAIN 0x00000c00
#define BITM_PGA_GAIN_VC_GAIN 0x00003000

#define REG_CHNL_DIS 0x4BA /* ADC Channel Enable/Disable */
#define BITP_CHNL_DIS_IA_DISADC                                                \
  0 /* Set this bit to one to disable the ADC.                                 \
     */
#define BITP_CHNL_DIS_IB_DISADC                                                \
  1 /* Set this bit to one to disable the ADC.                                 \
     */
#define BITP_CHNL_DIS_IC_DISADC                                                \
  2 /* Set this bit to one to disable the ADC.                                 \
     */
#define BITP_CHNL_DIS_IN_DISADC                                                \
  3 /* Set this bit to one to disable the ADC.                                 \
     */
#define BITP_CHNL_DIS_VA_DISADC                                                \
  4 /* Set this bit to one to disable the ADC.                                 \
     */
#define BITP_CHNL_DIS_VB_DISADC                                                \
  5 /* Set this bit to one to disable the ADC.                                 \
     */
#define BITP_CHNL_DIS_VC_DISADC                                                \
  6 /* Set this bit to one to disable the ADC.                                 \
     */
#define BITL_CHNL_DIS_IA_DISADC 1
#define BITL_CHNL_DIS_IB_DISADC 1
#define BITL_CHNL_DIS_IC_DISADC 1
#define BITL_CHNL_DIS_IN_DISADC 1
#define BITL_CHNL_DIS_VA_DISADC 1
#define BITL_CHNL_DIS_VB_DISADC 1
#define BITL_CHNL_DIS_VC_DISADC 1
#define BITM_CHNL_DIS_IA_DISADC 0x00000001
#define BITM_CHNL_DIS_IB_DISADC 0x00000002
#define BITM_CHNL_DIS_IC_DISADC 0x00000004
#define BITM_CHNL_DIS_IN_DISADC 0x00000008
#define BITM_CHNL_DIS_VA_DISADC 0x00000010
#define BITM_CHNL_DIS_VB_DISADC 0x00000020
#define BITM_CHNL_DIS_VC_DISADC 0x00000040

#define REG_WR_LOCK                                                            \
  0x4BF /* This register enables the configuration lock feature */

#define REG_VAR_DIS                                                            \
  0x4E0 /* Enable/disable total reactive power calculation                     \
         */
#define BITP_VAR_DIS_VARDIS                                                    \
  0 /* Set this bit to disable the total VAR calculation. This bit must be     \
       set before writing the run bit for proper operation. */
#define BITL_VAR_DIS_VARDIS 1
#define BITM_VAR_DIS_VARDIS 0x00000001

#define REG_RESERVED1 0x4F0 /* This register is reserved. */

#define REG_VERSION 0x4FE /* Version of ADE9000 IC */

#define REG_AI_SINC_DAT                                                        \
  0x500 /* Current channel A ADC waveforms from Sinc4 output, at 32ksps */

#define REG_AV_SINC_DAT                                                        \
  0x501 /* Voltage channel A ADC waveforms from Sinc4 output, at 32ksps */

#define REG_BI_SINC_DAT                                                        \
  0x502 /* Current channel B ADC waveforms from Sinc4 output, at 32ksps */

#define REG_BV_SINC_DAT                                                        \
  0x503 /* Voltage channel B ADC waveforms from Sinc4 output, at 32ksps */

#define REG_CI_SINC_DAT                                                        \
  0x504 /* Current channel C ADC waveforms from Sinc4 output, at 32ksps */

#define REG_CV_SINC_DAT                                                        \
  0x505 /* Voltage channel C ADC waveforms from Sinc4 output, at 32ksps */

#define REG_NI_SINC_DAT                                                        \
  0x506 /* Neutral current channel ADC waveforms from Sinc4 output, at 32ksps  \
         */

#define REG_AI_LPF_DAT                                                         \
  0x510 /* Current channel A ADC waveforms from Sinc4 + IIR LPF output, at     \
           8ksps */

#define REG_AV_LPF_DAT                                                         \
  0x511 /* Voltage channel A ADC waveforms from Sinc4 + IIR LPF output, at     \
           8ksps */

#define REG_BI_LPF_DAT                                                         \
  0x512 /* Current channel B ADC waveforms from Sinc4 + IIR LPF output, at     \
           8ksps */

#define REG_BV_LPF_DAT                                                         \
  0x513 /* Voltage channel B ADC waveforms from Sinc4 + IIR LPF output, at     \
           8ksps */

#define REG_CI_LPF_DAT                                                         \
  0x514 /* Current channel C ADC waveforms from Sinc4 + IIR LPF output, at     \
           8ksps */

#define REG_CV_LPF_DAT                                                         \
  0x515 /* Voltage channel C ADC waveforms from Sinc4 + IIR LPF output, at     \
           8ksps */

#define REG_NI_LPF_DAT                                                         \
  0x516 /* Neutral current channel ADC waveforms from Sinc4 + IIR LPF output,  \
           at 8ksps */

#define REG_AV_PCF_1                                                           \
  0x600 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AV_PCF. */

#define REG_BV_PCF_1                                                           \
  0x601 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BV_PCF. */

#define REG_CV_PCF_1                                                           \
  0x602 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CV_PCF. */

#define REG_NI_PCF_1                                                           \
  0x603 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           NI_PCF. */

#define REG_AI_PCF_1                                                           \
  0x604 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AI_PCF. */

#define REG_BI_PCF_1                                                           \
  0x605 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BI_PCF. */

#define REG_CI_PCF_1                                                           \
  0x606 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CI_PCF. */

#define REG_AIRMS_1                                                            \
  0x607 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AIRMS. */

#define REG_BIRMS_1                                                            \
  0x608 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BIRMS. */

#define REG_CIRMS_1                                                            \
  0x609 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CIRMS. */

#define REG_AVRMS_1                                                            \
  0x60A /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AVRMS. */

#define REG_BVRMS_1                                                            \
  0x60B /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BVRMS. */

#define REG_CVRMS_1                                                            \
  0x60C /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CVRMS. */

#define REG_NIRMS_1                                                            \
  0x60D /* SPI Burst Read Accessible. Registers organized functionally. See    \
           NIRMS. */

#define REG_AWATT_1                                                            \
  0x60E /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AWATT. */

#define REG_BWATT_1                                                            \
  0x60F /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BWATT. */

#define REG_CWATT_1                                                            \
  0x610 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CWATT. */

#define REG_AVA_1                                                              \
  0x611 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AVA. */

#define REG_BVA_1                                                              \
  0x612 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BVA. */

#define REG_CVA_1                                                              \
  0x613 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CVA. */

#define REG_AVAR_1                                                             \
  0x614 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AVAR. */

#define REG_BVAR_1                                                             \
  0x615 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BVAR. */

#define REG_CVAR_1                                                             \
  0x616 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CVAR. */

#define REG_AFVAR_1                                                            \
  0x617 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AFVAR. */

#define REG_BFVAR_1                                                            \
  0x618 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BFVAR. */

#define REG_CFVAR_1                                                            \
  0x619 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CFVAR. */

#define REG_APF_1                                                              \
  0x61A /* SPI Burst Read Accessible. Registers organized functionally. See    \
           APF. */

#define REG_BPF_1                                                              \
  0x61B /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BPF. */

#define REG_CPF_1                                                              \
  0x61C /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CPF. */

#define REG_AFWATT_1                                                           \
  0x623 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AFWATT. */

#define REG_BFWATT_1                                                           \
  0x624 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BFWATT. */

#define REG_CFWATT_1                                                           \
  0x625 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CFWATT. */

#define REG_AFVA_1                                                             \
  0x626 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AFVA. */

#define REG_BFVA_1                                                             \
  0x627 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BFVA. */

#define REG_CFVA_1                                                             \
  0x628 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CFVA. */

#define REG_AFIRMS_1                                                           \
  0x629 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AFIRMS. */

#define REG_BFIRMS_1                                                           \
  0x62A /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BFIRMS. */

#define REG_CFIRMS_1                                                           \
  0x62B /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CFIRMS. */

#define REG_AFVRMS_1                                                           \
  0x62C /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AFVRMS. */

#define REG_BFVRMS_1                                                           \
  0x62D /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BFVRMS. */

#define REG_CFVRMS_1                                                           \
  0x62E /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CFVRMS. */

#define REG_AIRMSONE_1                                                         \
  0x62F /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AIRMSONE. */

#define REG_BIRMSONE_1                                                         \
  0x630 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BIRMSONE. */

#define REG_CIRMSONE_1                                                         \
  0x631 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CIRMSONE. */

#define REG_AVRMSONE_1                                                         \
  0x632 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AVRMSONE. */

#define REG_BVRMSONE_1                                                         \
  0x633 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BVRMSONE. */

#define REG_CVRMSONE_1                                                         \
  0x634 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CVRMSONE. */

#define REG_NIRMSONE_1                                                         \
  0x635 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           NIRMSONE. */

#define REG_AIRMS1012_1                                                        \
  0x636 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AIRMS1012. */

#define REG_BIRMS1012_1                                                        \
  0x637 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BIRMS1012. */

#define REG_CIRMS1012_1                                                        \
  0x638 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CIRMS1012. */

#define REG_AVRMS1012_1                                                        \
  0x639 /* SPI Burst Read Accessible. Registers organized functionally. See    \
           AVRMS1012. */

#define REG_BVRMS1012_1                                                        \
  0x63A /* SPI Burst Read Accessible. Registers organized functionally. See    \
           BVRMS1012. */

#define REG_CVRMS1012_1                                                        \
  0x63B /* SPI Burst Read Accessible. Registers organized functionally. See    \
           CVRMS1012. */

#define REG_NIRMS1012_1                                                        \
  0x63C /* SPI Burst Read Accessible. Registers organized functionally. See    \
           NIRMS1012. */

#define REG_AV_PCF_2                                                           \
  0x680 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AV_PCF. */

#define REG_AI_PCF_2                                                           \
  0x681 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AI_PCF. */

#define REG_AIRMS_2                                                            \
  0x682 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AIRMS. */

#define REG_AVRMS_2                                                            \
  0x683 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AVRMS. */

#define REG_AWATT_2                                                            \
  0x684 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AWATT. */

#define REG_AVA_2                                                              \
  0x685 /* SPI Burst Read Accessible. Registers organized by phase. See AVA.   \
         */

#define REG_AVAR_2                                                             \
  0x686 /* SPI Burst Read Accessible. Registers organized by phase. See AVAR.  \
         */

#define REG_AFVAR_2                                                            \
  0x687 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AFVAR. */

#define REG_APF_2                                                              \
  0x688 /* SPI Burst Read Accessible. Registers organized by phase. See APF.   \
         */

#define REG_AFWATT_2                                                           \
  0x68B /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AFWATT. */

#define REG_AFVA_2                                                             \
  0x68C /* SPI Burst Read Accessible. Registers organized by phase. See AFVA.  \
         */

#define REG_AFIRMS_2                                                           \
  0x68D /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AFIRMS. */

#define REG_AFVRMS_2                                                           \
  0x68E /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AFVRMS. */

#define REG_AIRMSONE_2                                                         \
  0x68F /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AIRMSONE. */

#define REG_AVRMSONE_2                                                         \
  0x690 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AVRMSONE. */

#define REG_AIRMS1012_2                                                        \
  0x691 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AIRMS1012. */

#define REG_AVRMS1012_2                                                        \
  0x692 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           AVRMS1012. */

#define REG_BV_PCF_2                                                           \
  0x693 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BV_PCF. */

#define REG_BI_PCF_2                                                           \
  0x694 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BI_PCF. */

#define REG_BIRMS_2                                                            \
  0x695 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BIRMS. */

#define REG_BVRMS_2                                                            \
  0x696 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BVRMS. */

#define REG_BWATT_2                                                            \
  0x697 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BWATT. */

#define REG_BVA_2                                                              \
  0x698 /* SPI Burst Read Accessible. Registers organized by phase. See BVA.   \
         */

#define REG_BVAR_2                                                             \
  0x699 /* SPI Burst Read Accessible. Registers organized by phase. See BVAR.  \
         */

#define REG_BFVAR_2                                                            \
  0x69A /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BFVAR. */

#define REG_BPF_2                                                              \
  0x69B /* SPI Burst Read Accessible. Registers organized by phase. See BPF.   \
         */

#define REG_BFWATT_2                                                           \
  0x69E /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BFWATT. */

#define REG_BFVA_2                                                             \
  0x69F /* SPI Burst Read Accessible. Registers organized by phase. See BFVA.  \
         */

#define REG_BFIRMS_2                                                           \
  0x6A0 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BFIRMS. */

#define REG_BFVRMS_2                                                           \
  0x6A1 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BFVRMS. */

#define REG_BIRMSONE_2                                                         \
  0x6A2 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BIRMSONE. */

#define REG_BVRMSONE_2                                                         \
  0x6A3 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BVRMSONE. */

#define REG_BIRMS1012_2                                                        \
  0x6A4 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BIRMS1012. */

#define REG_BVRMS1012_2                                                        \
  0x6A5 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           BVRMS1012. */

#define REG_CV_PCF_2                                                           \
  0x6A6 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CV_PCF. */

#define REG_CI_PCF_2                                                           \
  0x6A7 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CI_PCF. */

#define REG_CIRMS_2                                                            \
  0x6A8 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CIRMS. */

#define REG_CVRMS_2                                                            \
  0x6A9 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CVRMS. */

#define REG_CWATT_2                                                            \
  0x6AA /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CWATT. */

#define REG_CVA_2                                                              \
  0x6AB /* SPI Burst Read Accessible. Registers organized by phase. See CVA.   \
         */

#define REG_CVAR_2                                                             \
  0x6AC /* SPI Burst Read Accessible. Registers organized by phase. See CVAR.  \
         */

#define REG_CFVAR_2                                                            \
  0x6AD /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CFVAR. */

#define REG_CPF_2                                                              \
  0x6AE /* SPI Burst Read Accessible. Registers organized by phase. See CPF.   \
         */

#define REG_CFWATT_2                                                           \
  0x6B1 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CFWATT. */

#define REG_CFVA_2                                                             \
  0x6B2 /* SPI Burst Read Accessible. Registers organized by phase. See CFVA.  \
         */

#define REG_CFIRMS_2                                                           \
  0x6B3 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CFIRMS. */

#define REG_CFVRMS_2                                                           \
  0x6B4 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CFVRMS. */

#define REG_CIRMSONE_2                                                         \
  0x6B5 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CIRMSONE. */

#define REG_CVRMSONE_2                                                         \
  0x6B6 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CVRMSONE. */

#define REG_CIRMS1012_2                                                        \
  0x6B7 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CIRMS1012. */

#define REG_CVRMS1012_2                                                        \
  0x6B8 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           CVRMS1012. */

#define REG_NI_PCF_2                                                           \
  0x6B9 /* SPI Burst Read Accessible. Registers organized by phase. See        \
           NI_PCF. */

#define REG_NIRMS_2                                                            \
  0x6BA /* SPI Burst Read Accessible. Registers organized by phase. See        \
           NIRMS. */

#define REG_NIRMSONE_2                                                         \
  0x6BB /* SPI Burst Read Accessible. Registers organized by phase. See        \
           NIRMSONE. */

#define REG_NIRMS1012_2                                                        \
  0x6BC /* SPI Burst Read Accessible. Registers organized by phase. See        \
           NIRMS1012. */

#endif /* ifndef ADE9430_H */
