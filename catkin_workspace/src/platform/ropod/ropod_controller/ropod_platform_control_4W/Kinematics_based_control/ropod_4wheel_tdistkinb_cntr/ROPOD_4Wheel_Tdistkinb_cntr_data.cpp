//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_data.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr'.
//
// Model version                  : 1.259
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Mon Jun 18 09:44:52 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_Tdistkinb_cntr.h"
#include "ROPOD_4Wheel_Tdistkinb_cntr_private.h"

// Block parameters (auto storage)
P_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_P = {
  // Variable: SW_COM1_ENABLE1
  //  Referenced by: '<S21>/Constant3'

  1.0,

  // Variable: SW_COM1_ENABLE2
  //  Referenced by: '<S21>/Constant4'

  2.0,

  // Variable: SW_COM1_MODE_TORQUE
  //  Referenced by: '<S19>/Constant13'

  0.0,

  // Variable: SW_COM1_MODE_VELOCITY
  //  Referenced by: '<S19>/Constant5'

  8.0,

  // Variable: SW_COM1_USE_TS
  //  Referenced by: '<S21>/Constant11'

  32768.0,

  // Variable: Taucompfactor
  //  Referenced by:
  //    '<S21>/Gain20'
  //    '<S26>/Gain1'
  //    '<S26>/Gain2'

  2.0,

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
  //    '<S9>/Get Parameter'
  //    '<S9>/Get Parameter1'
  //    '<S9>/Get Parameter2'
  //    '<S9>/Get Parameter3'

  1.0,

  // Variable: sw_tau_2_curr
  //  Referenced by:
  //    '<S26>/Gain3'
  //    '<S44>/Gain3'

  3.5714285714285712,

  // Mask Parameter: CompareToConstant_const
  //  Referenced by: '<S32>/Constant'

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
  //  Referenced by: '<S79>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S90>/Constant'

  0.0005,

  // Computed Parameter: SFunction_P1_Size
  //  Referenced by: '<S28>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S28>/S-Function'

  1.0,

  // Computed Parameter: SFunction_P1_Size_a
  //  Referenced by: '<S29>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S29>/S-Function'

  2.0,

  // Computed Parameter: SFunction_P1_Size_b
  //  Referenced by: '<S30>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S30>/S-Function'

  3.0,

  // Computed Parameter: SFunction_P1_Size_g
  //  Referenced by: '<S31>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S31>/S-Function'

  4.0,

  // Computed Parameter: sampletime_WtEt
  //  Referenced by: '<S33>/sample time'

  0.001,

  // Expression: 0
  //  Referenced by: '<S10>/Constant3'

  0.0,

  // Expression: 0.0
  //  Referenced by: '<S10>/Enabled Delay'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain1'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S33>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain'

  -1.0,

  // Computed Parameter: sampletime_WtEt_j
  //  Referenced by: '<S34>/sample time'

  0.001,

  // Expression: -1
  //  Referenced by: '<S10>/Gain3'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S34>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain2'

  -1.0,

  // Computed Parameter: sampletime_WtEt_b
  //  Referenced by: '<S35>/sample time'

  0.001,

  // Expression: -1
  //  Referenced by: '<S10>/Gain5'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S35>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S10>/Gain4'

  -1.0,

  // Expression: [1 1 1 1 1 1 1 1]
  //  Referenced by: '<Root>/Constant'

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  // Expression: 1
  //  Referenced by: '<S88>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S88>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S92>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S92>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S88>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S93>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S88>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S93>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S93>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S93>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S89>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S89>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_i
  //  Referenced by: '<S94>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S94>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S89>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S89>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S89>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S95>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S95>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S95>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S95>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S90>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S80>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S99>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S97>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S97>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_a
  //  Referenced by: '<S101>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S101>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S97>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S102>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S97>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_a
  //  Referenced by: '<S102>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S102>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S102>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S98>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S98>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_m
  //  Referenced by: '<S103>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S103>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S98>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S98>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S98>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S104>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_j
  //  Referenced by: '<S104>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S104>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S104>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S99>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S81>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S108>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S106>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S106>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_d
  //  Referenced by: '<S110>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S110>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S106>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S111>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S106>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_g
  //  Referenced by: '<S111>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S111>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S111>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S107>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S107>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_p
  //  Referenced by: '<S112>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S112>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S107>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S107>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S107>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S113>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S113>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S113>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S113>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S108>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S82>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S117>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S115>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S115>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_aj
  //  Referenced by: '<S119>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S119>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S115>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S120>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S115>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_g1
  //  Referenced by: '<S120>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S120>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S120>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S116>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S116>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_o
  //  Referenced by: '<S121>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S121>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S116>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S116>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S116>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S122>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_cq
  //  Referenced by: '<S122>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S122>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S122>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S117>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S83>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S126>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S124>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S124>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_f
  //  Referenced by: '<S128>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S128>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S124>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S129>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S124>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_ci
  //  Referenced by: '<S129>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S129>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S129>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S125>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S125>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_oc
  //  Referenced by: '<S130>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S130>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S125>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S125>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S125>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S131>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_ag
  //  Referenced by: '<S131>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S131>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S131>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S126>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S84>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S135>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S133>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S133>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_l
  //  Referenced by: '<S137>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S137>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S133>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S138>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S133>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_k
  //  Referenced by: '<S138>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S138>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S138>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S134>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S134>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_l5
  //  Referenced by: '<S139>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S139>/Integrator'

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
  //  Referenced by: '<S140>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_gz
  //  Referenced by: '<S140>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S140>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S140>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S135>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S85>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S144>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S142>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S142>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_j
  //  Referenced by: '<S146>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S146>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S142>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S147>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S142>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_ky
  //  Referenced by: '<S147>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S147>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S147>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S143>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S143>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_jy
  //  Referenced by: '<S148>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S148>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S143>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S143>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S143>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S149>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_l
  //  Referenced by: '<S149>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S149>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S149>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S144>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S86>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S153>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S151>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S151>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_fu
  //  Referenced by: '<S155>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S155>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S151>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S156>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S151>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_b
  //  Referenced by: '<S156>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S156>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S156>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S152>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S152>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_pb
  //  Referenced by: '<S157>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S157>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S152>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S152>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S152>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S158>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S158>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S158>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S158>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S153>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S46>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S52>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S50>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S50>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_ar
  //  Referenced by: '<S54>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S54>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S50>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S55>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S50>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_bq
  //  Referenced by: '<S55>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S55>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S55>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S51>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S51>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_mf
  //  Referenced by: '<S56>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S56>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S51>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S51>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S51>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S57>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_h
  //  Referenced by: '<S57>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S57>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S57>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S52>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S47>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S61>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S59>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S59>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_jd
  //  Referenced by: '<S63>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S63>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S59>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S64>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S59>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S64>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S64>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S64>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S60>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S60>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_om
  //  Referenced by: '<S65>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S65>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S60>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S60>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S60>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S66>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S66>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S66>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S66>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S61>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S48>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S70>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S68>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S68>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_le
  //  Referenced by: '<S72>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S72>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S68>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S73>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S68>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_cz
  //  Referenced by: '<S73>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S73>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S73>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S69>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S69>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_ln
  //  Referenced by: '<S74>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S74>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S69>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S69>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S69>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S75>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_kf
  //  Referenced by: '<S75>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S75>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S75>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S70>/Unit Delay'

  0.0,

  // Expression: 2
  //  Referenced by: '<S21>/shift'

  2.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant10'

  0.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant6'

  0.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant8'

  0.0,

  // Expression: 0
  //  Referenced by: '<S21>/Constant9'

  0.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain1'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain11'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain12'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain13'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain8'

  1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain14'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain15'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain16'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain17'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain18'

  1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain19'

  1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain2'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain3'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain4'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain5'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain6'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/Gain7'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S21>/Gain9'

  1.0,

  // Expression: -1
  //  Referenced by: '<S21>/sign_convention'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S21>/sign_convention1'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S21>/sign_convention2'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S21>/sign_convention3'

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
  //  Referenced by: '<S21>/Gain10'

  32768U,

  // Computed Parameter: Gain6_Gain_b
  //  Referenced by: '<S10>/Gain6'

  0U,

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
