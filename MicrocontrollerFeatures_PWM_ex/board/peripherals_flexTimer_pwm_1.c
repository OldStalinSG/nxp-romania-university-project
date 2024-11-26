/*
* Copyright 2024 NXP
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
 * This file was generated by the S32 Configuration Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Configuration Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v7.0
processor: S32K144
package_id: S32K144_LQFP100
mcu_data: s32sdk_s32k1xx_rtm_401
processor_version: 0.0.0
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: bf375e1f-983b-4c53-9f39-9a9b8e90e2ac
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_flexTimer_pwm_1.h"

/*******************************************************************************
 * flexTimer_pwm_1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'flexTimer_pwm_1'
- type: 'flexTimer_pwm'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'ftm_pwm'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FTM_0'
- config_sets:
  - ftm_pwm:
    - ftmPwmUserConfig:
      - ftmPwmInitConfig:
        - ftmPwmClkCfg:
          - ClockSource: 'FTM_CLOCK_SOURCE_SYSTEMCLK'
          - ftmprescaler: '1'
        - ftmPwmGlobalCfg:
          - ftmMode: 'FTM_MODE_EDGE_ALIGNED_PWM'
          - debugMode: 'FTM_BDM_MODE_11'
          - timerOverInter: 'false'
          - initTrigger: 'false'
        - ftmPwmRegSyncCfg:
          - softTrigger: 'true'
          - hardwareTrigger1: 'false'
          - hardwareTrigger2: 'false'
          - hardwareTrigger3: 'false'
          - ftmSyncPoint: 'FTM_UPDATE_NOW'
          - maxload: 'false'
          - minload: 'false'
          - AutoTrigClear: 'false'
          - ftmRegisterUpdate: 'FTM_PWM_SYNC'
          - ftmSoftwareOutControl: 'FTM_PWM_SYNC'
          - ftmOutMaskSync: 'FTM_PWM_SYNC'
          - ftmCounterInitSync: 'FTM_PWM_SYNC'
      - ftmPwmConfiguration:
        - ftmPwmGeneralCfg:
          - periodInFreq: '1000'
          - deadTimeValue: '0'
          - deadTimePrescaler: 'FTM_DEADTIME_DIVID_BY_1'
        - FtmPwmConfigArr:
          - faultConfig:
            - faultMode: 'FTM_FAULT_CONTROL_DISABLED'
            - pwmFaultInterrupt: 'false'
            - faultFilterValue: '0'
            - pwmOutputStateOnFault: 'false'
            - ftmFaultChannelParam:
              - 0:
                - faultChannelEnabled: 'false'
                - faultFilterEnabled: 'false'
                - ftmFaultPinPolarity: 'FTM_POLARITY_LOW'
              - 1:
                - faultChannelEnabled: 'false'
                - faultFilterEnabled: 'false'
                - ftmFaultPinPolarity: 'FTM_POLARITY_LOW'
              - 2:
                - faultChannelEnabled: 'false'
                - faultFilterEnabled: 'false'
                - ftmFaultPinPolarity: 'FTM_POLARITY_LOW'
              - 3:
                - faultChannelEnabled: 'false'
                - faultFilterEnabled: 'false'
                - ftmFaultPinPolarity: 'FTM_POLARITY_LOW'
          - ftmPwmIndptChnCfg:
            - pwmIndependentChannelConfig:
              - 0:
                - ftmpwmIndptName: 'ftm_pwm_IndependentChannelConfig0'
                - ftmPwmIndptHwChnId: '0'
                - polarity: 'FTM_POLARITY_LOW'
                - uDutyCyclePercent: '0x4000'
                - enableExternalTrigger: 'false'
                - safeState: 'FTM_LOW_STATE'
                - enableSecondChannelOutput: 'false'
                - secondChannelPolarity: 'FTM_MAIN_INVERTED'
                - IndptdeadTimeEn: 'false'
          - ftmPwmCombChnCfg:
            - pwmCombinedChannelConfig: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 */

/* Global configuration of flexTimer_pwm_1 InitConfig */
ftm_user_config_t flexTimer_pwm_1_InitConfig =
{
    {
        true, /* Software trigger state */
        false, /* Hardware trigger 1 state */
        false, /* Hardware trigger 2 state */
        false, /* Hardware trigger 3 state */
        false, /* Max loading point state */
        false, /* Min loading point state */
        FTM_PWM_SYNC, /* Update mode for INVCTRL register */
        FTM_PWM_SYNC, /* Update mode for SWOCTRL register */
        FTM_PWM_SYNC, /* Update mode for OUTMASK register */
        FTM_PWM_SYNC, /* Update mode for CNTIN register */
        true, /* Automatic clear of the trigger*/
        FTM_UPDATE_NOW, /* Synchronization point */
    },
    FTM_MODE_EDGE_ALIGNED_PWM, /* Mode of operation for FTM */
    FTM_CLOCK_DIVID_BY_1, /* FTM clock prescaler */
    FTM_CLOCK_SOURCE_SYSTEMCLK,   /* FTM clock source */
    FTM_BDM_MODE_11, /* FTM debug mode */
    false,    /* Interrupt state */
    false     /* Initialization trigger */
};

/* Fault configuration structure for flexTimer_pwm_1*/
ftm_pwm_fault_param_t flexTimer_pwm_1_FaultConfig =
{
    false, /* Output pin state on fault */
    false, /* PWM fault interrupt state */
    0U, /* Fault filter value */
    FTM_FAULT_CONTROL_DISABLED, /* Fault mode */
    {
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        },
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        },
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        },
        {
            false, /* Fault channel state (Enabled/Disabled) */
            false, /* Fault channel filter state (Enabled/Disabled) */
            FTM_POLARITY_LOW, /* Fault channel state (Enabled/Disabled) */
        }
    }
};

/* The independent channels configuration structure for flexTimer_pwm_1_IndependentChannelsConfig */
ftm_independent_ch_param_t flexTimer_pwm_1_IndependentChannelsConfig[2] =
{
    {
        2, /* Hardware channel Id */  // PTD0
		FTM_POLARITY_LOW, /* Polarity of the PWM signal */
        16384U, /* Duty cycle percent 0-0x8000 */
        false, /* External Trigger */
        FTM_LOW_STATE, /* Safe state of the PWM channel when faults are detected */
        false, /* Enabled/disabled the channel (n+1) output */
        FTM_MAIN_INVERTED, /* Select channel (n+1) output relative to channel (n) */
        false, /* Dead time enabled/disabled */
    },
};

/* PWM configuration for flexTimer_pwm_1 */
ftm_pwm_param_t flexTimer_pwm_1_PwmConfig =
{
    1U, /* Number of independent PWM channels */
    0U, /* Number of combined PWM channels */
    FTM_MODE_EDGE_ALIGNED_PWM, /* PWM mode */
    0U, /* Dead time value */
    FTM_DEADTIME_DIVID_BY_1, /* Dead time prescale */
    1000U, /* PWM frequency */
    flexTimer_pwm_1_IndependentChannelsConfig, /* The independent PWM channels configuration structure */
    NULL, /* Combined PWM channels configuration structure */
    &flexTimer_pwm_1_FaultConfig /* PWM fault configuration structure */
};


