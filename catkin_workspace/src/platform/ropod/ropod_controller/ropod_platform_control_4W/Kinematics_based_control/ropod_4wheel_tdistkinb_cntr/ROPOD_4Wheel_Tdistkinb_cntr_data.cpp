//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_data.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr'.
//
// Model version                  : 1.263
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Mon Jul 23 15:41:53 2018
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
  //  Referenced by: '<S80>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S91>/Constant'

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
  //  Referenced by: '<S89>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S89>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S93>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S93>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S89>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S94>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S89>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt
  //  Referenced by: '<S94>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S94>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S94>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S90>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S90>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_i
  //  Referenced by: '<S95>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S95>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S90>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S90>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S90>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S96>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_n
  //  Referenced by: '<S96>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S96>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S96>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S91>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S81>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S100>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S98>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S98>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_a
  //  Referenced by: '<S102>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S102>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S98>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S103>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S98>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_a
  //  Referenced by: '<S103>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S103>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S103>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S99>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S99>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_m
  //  Referenced by: '<S104>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S104>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S99>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S99>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S99>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S105>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_j
  //  Referenced by: '<S105>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S105>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S105>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S100>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S82>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S109>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S107>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S107>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_d
  //  Referenced by: '<S111>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S111>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S107>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S112>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S107>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_g
  //  Referenced by: '<S112>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S112>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S112>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S108>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S108>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_p
  //  Referenced by: '<S113>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S113>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S108>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S108>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S108>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S114>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_c
  //  Referenced by: '<S114>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S114>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S114>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S109>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S83>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S118>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S116>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S116>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_aj
  //  Referenced by: '<S120>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S120>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S116>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S121>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S116>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_g1
  //  Referenced by: '<S121>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S121>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S121>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S117>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S117>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_o
  //  Referenced by: '<S122>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S122>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S117>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S117>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S117>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S123>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_cq
  //  Referenced by: '<S123>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S123>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S123>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S118>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S84>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S127>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S125>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S125>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_f
  //  Referenced by: '<S129>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S129>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S125>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S130>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S125>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_ci
  //  Referenced by: '<S130>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S130>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S130>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S126>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S126>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_oc
  //  Referenced by: '<S131>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S131>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S126>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S126>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S126>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S132>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_ag
  //  Referenced by: '<S132>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S132>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S132>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S127>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S85>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S136>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S134>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S134>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_l
  //  Referenced by: '<S138>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S138>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S134>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S139>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S134>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_k
  //  Referenced by: '<S139>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S139>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S139>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S135>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S135>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_l5
  //  Referenced by: '<S140>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S140>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S135>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S135>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S135>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S141>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_gz
  //  Referenced by: '<S141>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S141>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S141>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S136>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S86>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S145>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S143>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S143>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_j
  //  Referenced by: '<S147>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S147>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S143>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S148>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S143>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_ky
  //  Referenced by: '<S148>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S148>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S148>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S144>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S144>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_jy
  //  Referenced by: '<S149>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S149>/Integrator'

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
  //  Referenced by: '<S150>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_l
  //  Referenced by: '<S150>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S150>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S150>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S145>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S87>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S154>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S152>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S152>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_fu
  //  Referenced by: '<S156>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S156>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S152>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S157>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S152>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_b
  //  Referenced by: '<S157>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S157>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S157>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S153>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S153>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_pb
  //  Referenced by: '<S158>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S158>/Integrator'

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
  //  Referenced by: '<S159>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_f
  //  Referenced by: '<S159>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S159>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S159>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S154>/Unit Delay'

  0.0,

  // Computed Parameter: TSamp_WtEt_o
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

  // Expression: 2*pi
  //  Referenced by: '<S51>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_g
  //  Referenced by: '<S55>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S55>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S51>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S56>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S51>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_je
  //  Referenced by: '<S56>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S56>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S56>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S52>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S52>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_k
  //  Referenced by: '<S57>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S57>/Integrator'

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
  //  Referenced by: '<S58>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_bz
  //  Referenced by: '<S58>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S58>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S58>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S53>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S48>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S62>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S60>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S60>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_kx
  //  Referenced by: '<S64>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S64>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S60>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S65>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S60>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_go
  //  Referenced by: '<S65>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S65>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S65>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S61>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S61>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_c
  //  Referenced by: '<S66>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S66>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S61>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S61>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S61>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S67>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_p
  //  Referenced by: '<S67>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S67>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S67>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S62>/Unit Delay'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S49>/Gain2'

  6.2831853071795862,

  // Expression: tau
  //  Referenced by: '<S71>/Constant'

  0.0005,

  // Expression: 1
  //  Referenced by: '<S69>/Constant4'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S69>/Gain2'

  6.2831853071795862,

  // Computed Parameter: Integrator_gainval_gs
  //  Referenced by: '<S73>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S73>/Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S69>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<S74>/Constant'

  1.0,

  // Expression: 0
  //  Referenced by: '<S69>/Constant5'

  0.0,

  // Computed Parameter: TSamp_WtEt_gy
  //  Referenced by: '<S74>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S74>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S74>/Filter Differentiator TF'

  0.0,

  // Expression: 1
  //  Referenced by: '<S70>/Constant4'

  1.0,

  // Expression: 0
  //  Referenced by: '<S70>/Constant2'

  0.0,

  // Computed Parameter: Integrator_gainval_cd
  //  Referenced by: '<S75>/Integrator'

  0.0005,

  // Expression: InitialConditionForIntegrator
  //  Referenced by: '<S75>/Integrator'

  0.0,

  // Expression: 2*pi
  //  Referenced by: '<S70>/Gain2'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S70>/Constant1'

  1.0,

  // Expression: 2*pi
  //  Referenced by: '<S70>/Gain1'

  6.2831853071795862,

  // Expression: 1
  //  Referenced by: '<S76>/Constant'

  1.0,

  // Computed Parameter: TSamp_WtEt_oh
  //  Referenced by: '<S76>/TSamp'

  0.0005,

  // Expression: [1 -1]
  //  Referenced by: '<S76>/Filter Differentiator TF'

  { 1.0, -1.0 },

  // Expression: InitialConditionForFilter
  //  Referenced by: '<S76>/Filter Differentiator TF'

  0.0,

  // Expression: 0
  //  Referenced by: '<S71>/Unit Delay'

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
