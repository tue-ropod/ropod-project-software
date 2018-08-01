//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_data.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr'.
//
// Model version                  : 1.266
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Aug  1 17:15:10 2018
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
  // Variable: FFtheta_intia
  //  Referenced by: '<S43>/Gain2'

  0.0,

  // Variable: FFxy_mass
  //  Referenced by:
  //    '<S43>/Gain'
  //    '<S43>/Gain1'

  0.0,

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

  // Variable: max_hw_tau
  //  Referenced by:
  //    '<S96>/Saturate'
  //    '<S106>/Saturate'
  //    '<S116>/Saturate'
  //    '<S126>/Saturate'
  //    '<S136>/Saturate'
  //    '<S146>/Saturate'
  //    '<S156>/Saturate'
  //    '<S166>/Saturate'
  //    '<S97>/DeadZone'
  //    '<S107>/DeadZone'
  //    '<S117>/DeadZone'
  //    '<S127>/DeadZone'
  //    '<S137>/DeadZone'
  //    '<S147>/DeadZone'
  //    '<S157>/DeadZone'
  //    '<S167>/DeadZone'

  7.0,

  // Variable: max_ropod_sw_force
  //  Referenced by:
  //    '<S55>/Saturate'
  //    '<S65>/Saturate'
  //    '<S56>/DeadZone'
  //    '<S66>/DeadZone'

  500.0,

  // Variable: max_ropod_sw_tau
  //  Referenced by:
  //    '<S75>/Saturate'
  //    '<S76>/DeadZone'

  250.0,

  // Variable: sw_tau_2_curr
  //  Referenced by:
  //    '<S26>/Gain3'
  //    '<S44>/Gain3'

  3.5714285714285712,

  // Mask Parameter: DiscreteDerivative_ICPrevScaled
  //  Referenced by: '<S46>/UD'

  0.0,

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
  //  Referenced by: '<S83>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S94>/Constant'

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

  0.01,

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

  0.01,

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

  0.01,

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
  //  Referenced by: '<S92>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S96>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S92>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S98>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S92>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S98>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S98>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S98>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S97>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S92>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S96>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S96>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S93>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S93>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_i
  //  Referenced by: '<S99>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S99>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S93>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S93>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S93>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S100>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S100>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S100>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S100>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S94>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S84>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S104>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S102>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S106>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S102>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S108>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S102>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_a
  //  Referenced by: '<S108>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S108>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S108>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S107>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S102>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_a
  //  Referenced by: '<S106>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S106>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S103>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S103>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_g
  //  Referenced by: '<S109>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S109>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S103>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S103>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S103>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S110>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S110>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S110>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S110>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S104>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S85>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S114>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S112>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S116>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S112>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S118>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S112>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_j
  //  Referenced by: '<S118>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S118>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S118>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S117>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S112>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_c
  //  Referenced by: '<S116>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S116>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S113>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S113>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_m
  //  Referenced by: '<S119>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S119>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S113>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S113>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S113>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S120>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_i
  //  Referenced by: '<S120>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S120>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S120>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S114>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S86>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S124>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S122>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S126>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S122>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S128>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S122>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S128>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S128>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S128>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S127>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S122>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_k
  //  Referenced by: '<S126>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S126>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S123>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S123>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_b
  //  Referenced by: '<S129>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S129>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S123>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S123>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S123>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S130>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_fj
  //  Referenced by: '<S130>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S130>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S130>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S124>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S87>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S134>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S132>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S136>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S132>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S138>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S132>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_g
  //  Referenced by: '<S138>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S138>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S138>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S137>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S132>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_bp
  //  Referenced by: '<S136>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S136>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S133>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S133>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_j
  //  Referenced by: '<S139>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S139>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S133>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S133>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S133>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S140>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_it
  //  Referenced by: '<S140>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S140>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S140>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S134>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S88>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S144>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S142>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S146>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S142>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S148>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S142>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S148>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S148>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S148>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S147>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S142>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_n
  //  Referenced by: '<S146>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S146>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S143>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S143>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_f
  //  Referenced by: '<S149>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S149>/Integrator'

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
  //  Referenced by: '<S150>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_o
  //  Referenced by: '<S150>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S150>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S150>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S144>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S89>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S154>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S152>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S156>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S152>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S158>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S152>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_l
  //  Referenced by: '<S158>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S158>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S158>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S157>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S152>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_l
  //  Referenced by: '<S156>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S156>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S153>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S153>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_jz
  //  Referenced by: '<S159>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S159>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S153>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S153>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S153>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S160>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_aa
  //  Referenced by: '<S160>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S160>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S160>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S154>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S90>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S164>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S162>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S166>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S162>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S168>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S162>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_b
  //  Referenced by: '<S168>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S168>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S168>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S167>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S162>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_no
  //  Referenced by: '<S166>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S166>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S163>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S163>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_cs
  //  Referenced by: '<S169>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S169>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S163>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S163>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S163>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S170>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_g3
  //  Referenced by: '<S170>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S170>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S170>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S164>/Unit Delay'

  0.0,

  // Computed Parameter: TSamp_WtEt_om
  //  Referenced by: '<S46>/TSamp'

  100.0,

  // Expression: 2*pi
  //  Referenced by: '<S47>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S53>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S51>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S55>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S51>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S57>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S51>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_je
  //  Referenced by: '<S57>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S57>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S57>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S56>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S51>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_gb
  //  Referenced by: '<S55>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S55>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S52>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S52>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_k3
  //  Referenced by: '<S58>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S58>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S52>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S52>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S52>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S59>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_bz
  //  Referenced by: '<S59>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S59>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S59>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S53>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S48>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S63>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S61>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S65>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S61>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S67>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S61>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_go
  //  Referenced by: '<S67>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S67>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S67>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S66>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S61>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_kx
  //  Referenced by: '<S65>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S65>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S62>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S62>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_ci
  //  Referenced by: '<S68>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S68>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S62>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S62>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S62>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S69>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_pv
  //  Referenced by: '<S69>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S69>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S69>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S63>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S49>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S73>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S71>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S75>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S71>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S77>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S71>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_gy
  //  Referenced by: '<S77>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S77>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S77>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S76>/ZeroGain'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S71>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_gs
  //  Referenced by: '<S75>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S75>/Integrator'

  0.0,

  // Expression: 1
  //  Referenced by: '<S72>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S72>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_cd
  //  Referenced by: '<S78>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S78>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S72>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S72>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S72>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S79>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_oh
  //  Referenced by: '<S79>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S79>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S79>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S73>/Unit Delay'

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
