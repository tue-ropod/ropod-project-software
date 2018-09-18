//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_data.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform'.
//
// Model version                  : 1.279
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Tue Sep 18 17:46:33 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform.h"
#include "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_private.h"

// Block parameters (auto storage)
P_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P = {
  // Variable: FFtheta_intia
  //  Referenced by: '<S44>/Gain2'

  0.0,

  // Variable: FFxy_mass
  //  Referenced by:
  //    '<S44>/Gain'
  //    '<S44>/Gain1'

  0.0,

  // Variable: SW_COM1_ENABLE1
  //  Referenced by: '<S22>/Constant3'

  1.0,

  // Variable: SW_COM1_ENABLE2
  //  Referenced by: '<S22>/Constant4'

  2.0,

  // Variable: SW_COM1_MODE_TORQUE
  //  Referenced by: '<S19>/Constant13'

  0.0,

  // Variable: SW_COM1_MODE_VELOCITY
  //  Referenced by: '<S19>/Constant5'

  8.0,

  // Variable: SW_COM1_USE_TS
  //  Referenced by: '<S22>/Constant11'

  32768.0,

  // Variable: Tinit
  //  Referenced by: '<S1>/Constant'

  5.0,

  // Variable: Tsp
  //  Referenced by:
  //    '<S6>/Get Parameter'
  //    '<S6>/Get Parameter1'
  //    '<S6>/Get Parameter10'
  //    '<S6>/Get Parameter11'
  //    '<S6>/Get Parameter12'
  //    '<S6>/Get Parameter13'
  //    '<S6>/Get Parameter14'
  //    '<S6>/Get Parameter2'
  //    '<S6>/Get Parameter3'
  //    '<S6>/Get Parameter4'
  //    '<S6>/Get Parameter5'
  //    '<S6>/Get Parameter6'
  //    '<S6>/Get Parameter7'
  //    '<S6>/Get Parameter8'
  //    '<S6>/Get Parameter9'
  //    '<S7>/Get Parameter'
  //    '<S7>/Get Parameter1'
  //    '<S7>/Get Parameter10'
  //    '<S7>/Get Parameter11'
  //    '<S7>/Get Parameter12'
  //    '<S7>/Get Parameter13'
  //    '<S7>/Get Parameter14'
  //    '<S7>/Get Parameter15'
  //    '<S7>/Get Parameter16'
  //    '<S7>/Get Parameter17'
  //    '<S7>/Get Parameter2'
  //    '<S7>/Get Parameter3'
  //    '<S7>/Get Parameter4'
  //    '<S7>/Get Parameter5'
  //    '<S7>/Get Parameter6'
  //    '<S7>/Get Parameter7'
  //    '<S7>/Get Parameter8'
  //    '<S7>/Get Parameter9'
  //    '<S8>/Get Parameter'
  //    '<S8>/Get Parameter1'
  //    '<S8>/Get Parameter2'
  //    '<S8>/Get Parameter3'
  //    '<S8>/Get Parameter4'
  //    '<S8>/Get Parameter5'
  //    '<S8>/Get Parameter6'
  //    '<S8>/Get Parameter7'
  //    '<S9>/Get Parameter'
  //    '<S9>/Get Parameter1'
  //    '<S9>/Get Parameter2'
  //    '<S9>/Get Parameter3'

  1.0,

  // Variable: max_hw_tau
  //  Referenced by:
  //    '<S97>/Saturate'
  //    '<S107>/Saturate'
  //    '<S117>/Saturate'
  //    '<S127>/Saturate'
  //    '<S137>/Saturate'
  //    '<S147>/Saturate'
  //    '<S157>/Saturate'
  //    '<S167>/Saturate'
  //    '<S98>/DeadZone'
  //    '<S108>/DeadZone'
  //    '<S118>/DeadZone'
  //    '<S128>/DeadZone'
  //    '<S138>/DeadZone'
  //    '<S148>/DeadZone'
  //    '<S158>/DeadZone'
  //    '<S168>/DeadZone'

  7.0,

  // Variable: max_ropod_sw_force
  //  Referenced by:
  //    '<S56>/Saturate'
  //    '<S66>/Saturate'
  //    '<S57>/DeadZone'
  //    '<S67>/DeadZone'

  500.0,

  // Variable: max_ropod_sw_tau
  //  Referenced by:
  //    '<S76>/Saturate'
  //    '<S77>/DeadZone'

  250.0,

  // Variable: sw_tau_2_curr
  //  Referenced by:
  //    '<S27>/Gain3'
  //    '<S45>/Gain3'

  3.5714285714285712,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S47>/UD'

  0.0,

  // Mask Parameter: CompareToConstant_const
  //  Referenced by: '<S33>/Constant'

  0.5,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S15>/Constant'

  {
    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // ChildFrameId

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // ChildFrameId_SL_Info

    {
      0U,                              // Seq

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // FrameId_SL_Info

      {
        0.0,                           // Sec
        0.0                            // Nsec
      }                                // Stamp
    },                                 // Header

    {
      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      ,                                // Covariance

      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Position

        {
          0.0,                         // X
          0.0,                         // Y
          0.0,                         // Z
          0.0                          // W
        }                              // Orientation
      }                                // Pose
    },                                 // Pose

    {
      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      ,                                // Covariance

      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Linear

        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        }                              // Angular
      }                                // Twist
    }                                  // Twist
  },

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S18>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value_e
  //  Referenced by: '<S17>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Expression: [2 -2 2 -2 2 -2 2 -2]
  //  Referenced by: '<S19>/Movinf around SW axis center'

  { 2.0, -2.0, 2.0, -2.0, 2.0, -2.0, 2.0, -2.0 },

  // Expression: -1
  //  Referenced by: '<S20>/sign convention'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S20>/sign convention1'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S20>/sign convention2'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S20>/sign convention3'

  -1.0,

  // Expression: [0 0 0 0 0 0 0 0]
  //  Referenced by: '<S20>/Constant2'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: [0 0 0 0]
  //  Referenced by: '<S20>/Constant'

  { 0.0, 0.0, 0.0, 0.0 },

  // Expression: 0
  //  Referenced by: '<S10>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S10>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S10>/Constant'

  0.0,

  // Computed Parameter: ECAT_Interface_P1_Size
  //  Referenced by: '<S5>/ECAT_Interface'

  { 1.0, 4.0 },

  // Computed Parameter: ECAT_Interface_P1
  //  Referenced by: '<S5>/ECAT_Interface'

  { 101.0, 116.0, 104.0, 48.0 },

  // Computed Parameter: ECAT_Interface_P2_Size
  //  Referenced by: '<S5>/ECAT_Interface'

  { 1.0, 1.0 },

  // Expression: TS
  //  Referenced by: '<S5>/ECAT_Interface'

  0.001,

  // Expression: 2*pi
  //  Referenced by: '<S84>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S95>/Constant'

  0.0005,

  // Computed Parameter: SFunction_P1_Size
  //  Referenced by: '<S29>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S29>/S-Function'

  1.0,

  // Computed Parameter: SFunction_P1_Size_a
  //  Referenced by: '<S30>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S30>/S-Function'

  2.0,

  // Computed Parameter: SFunction_P1_Size_b
  //  Referenced by: '<S31>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S31>/S-Function'

  3.0,

  // Computed Parameter: SFunction_P1_Size_g
  //  Referenced by: '<S32>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S32>/S-Function'

  4.0,

  // Computed Parameter: sampletime_WtEt
  //  Referenced by: '<S34>/sample time'

  0.01,

  // Expression: 0.0
  //  Referenced by: '<S10>/Enabled Delay'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain1'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S34>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain'

  -1.0,

  // Computed Parameter: sampletime_WtEt_j
  //  Referenced by: '<S35>/sample time'

  0.01,

  // Expression: -1
  //  Referenced by: '<S10>/Gain3'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S35>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain2'

  -1.0,

  // Computed Parameter: sampletime_WtEt_b
  //  Referenced by: '<S36>/sample time'

  0.01,

  // Expression: -1
  //  Referenced by: '<S10>/Gain5'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S36>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain4'

  -1.0,

  // Expression: [1 1 1 1 1 1 1 1]
  //  Referenced by: '<Root>/Constant'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: 1
  //  Referenced by: '<S93>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S97>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S93>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S99>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S93>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S99>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S99>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S99>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S98>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S93>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S97>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S97>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S94>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S94>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_i
  //  Referenced by: '<S100>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S100>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S94>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S94>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S94>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S101>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S101>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S101>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S101>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S95>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S85>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S105>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S103>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S107>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S103>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S109>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S103>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_a
  //  Referenced by: '<S109>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S109>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S109>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S108>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S103>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_a
  //  Referenced by: '<S107>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S107>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S104>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S104>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_g
  //  Referenced by: '<S110>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S110>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S104>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S104>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S104>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S111>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S111>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S111>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S111>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S105>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S86>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S115>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S113>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S117>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S113>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S119>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S113>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_j
  //  Referenced by: '<S119>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S119>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S119>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S118>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S113>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_c
  //  Referenced by: '<S117>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S117>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S114>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S114>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_m
  //  Referenced by: '<S120>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S120>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S114>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S114>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S114>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S121>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S121>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S121>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S121>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S115>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S87>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S125>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S123>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S127>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S123>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S129>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S123>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S129>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S129>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S129>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S128>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S123>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_k
  //  Referenced by: '<S127>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S127>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S124>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S124>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_b
  //  Referenced by: '<S130>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S130>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S124>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S124>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S124>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S131>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_fj
  //  Referenced by: '<S131>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S131>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S131>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S125>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S88>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S135>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S133>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S137>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S133>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S139>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S133>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_g
  //  Referenced by: '<S139>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S139>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S139>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S138>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S133>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_bp
  //  Referenced by: '<S137>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S137>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S134>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S134>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_j
  //  Referenced by: '<S140>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S140>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S134>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S134>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S134>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S141>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_it
  //  Referenced by: '<S141>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S141>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S141>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S135>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S89>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S145>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S143>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S147>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S143>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S149>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S143>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S149>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S149>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S149>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S148>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S143>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_n
  //  Referenced by: '<S147>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S147>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S144>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S144>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_f
  //  Referenced by: '<S150>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S150>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S144>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S144>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S144>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S151>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S151>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S151>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S151>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S145>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S90>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S155>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S153>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S157>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S153>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S159>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S153>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_l
  //  Referenced by: '<S159>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S159>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S159>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S158>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S153>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_l
  //  Referenced by: '<S157>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S157>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S154>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S154>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_jz
  //  Referenced by: '<S160>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S160>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S154>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S154>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S154>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S161>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_aa
  //  Referenced by: '<S161>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S161>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S161>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S155>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S91>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S165>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S163>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S167>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S163>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S169>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S163>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_b
  //  Referenced by: '<S169>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S169>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S169>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S168>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S163>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_no
  //  Referenced by: '<S167>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S167>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S164>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S164>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_cs
  //  Referenced by: '<S170>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S170>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S164>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S164>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S164>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S171>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_g3
  //  Referenced by: '<S171>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S171>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S171>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S165>/Unit Delay'

  0.0,

  // Computed Parameter: TSamp_WtEt_om
  //  Referenced by: '<S47>/TSamp'

  100.0,

  // Expression: 2*pi
  //  Referenced by: '<S48>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S54>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S52>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S56>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S52>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S58>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S52>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_je
  //  Referenced by: '<S58>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S58>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S58>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S57>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S52>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_gb
  //  Referenced by: '<S56>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S56>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S53>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S53>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_k3
  //  Referenced by: '<S59>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S59>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S53>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S53>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S53>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S60>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_bz
  //  Referenced by: '<S60>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S60>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S60>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S54>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S49>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S64>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S62>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S66>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S62>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S68>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S62>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_go
  //  Referenced by: '<S68>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S68>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S68>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S67>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S62>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_kx
  //  Referenced by: '<S66>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S66>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S63>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S63>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_ci
  //  Referenced by: '<S69>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S69>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S63>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S63>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S63>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S70>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_pv
  //  Referenced by: '<S70>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S70>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S70>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S64>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S50>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S74>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S72>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S76>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S72>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S78>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S72>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_gy
  //  Referenced by: '<S78>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S78>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S78>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S77>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S72>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_gs
  //  Referenced by: '<S76>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S76>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S73>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S73>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_cd
  //  Referenced by: '<S79>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S79>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S73>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S73>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S73>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S80>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_oh
  //  Referenced by: '<S80>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S80>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S80>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S74>/Unit Delay'

  0.0,

  // Expression: 2
  //  Referenced by: '<S22>/shift'

  2.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant10'

  0.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant6'

  0.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant8'

  0.0,

  // Expression: 0
  //  Referenced by: '<S22>/Constant9'

  0.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain1'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain11'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain12'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain13'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain8'

  1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain14'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain15'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain16'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain17'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain18'

  1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain19'

  1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain2'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain3'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain4'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain5'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain6'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/Gain7'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S22>/Gain9'

  1.0,

  // Expression: -1
  //  Referenced by: '<S22>/sign_convention'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S22>/sign_convention1'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S22>/sign_convention2'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S22>/sign_convention3'

  -1.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S2>/Discrete-Time Integrator'

  0.001,

  // Expression: 0
  //  Referenced by: '<S2>/Discrete-Time Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S3>/Constant5'

  0.0,

  // Computed Parameter: EnabledDelay_DelayLength
  //  Referenced by: '<S10>/Enabled Delay'

  1U,

  // Computed Parameter: Gain10_Gain
  //  Referenced by: '<S22>/Gain10'

  32768U,

  // Computed Parameter: Gain6_Gain_b
  //  Referenced by: '<S10>/Gain6'

  128U,

  // Computed Parameter: Switch_Threshold
  //  Referenced by: '<S10>/Switch'

  0U,

  // Computed Parameter: Switch1_Threshold
  //  Referenced by: '<S10>/Switch1'

  0U,

  // Computed Parameter: Switch2_Threshold
  //  Referenced by: '<S10>/Switch2'

  0U
};

//
// File trailer for generated code.
//
// [EOF]
//
