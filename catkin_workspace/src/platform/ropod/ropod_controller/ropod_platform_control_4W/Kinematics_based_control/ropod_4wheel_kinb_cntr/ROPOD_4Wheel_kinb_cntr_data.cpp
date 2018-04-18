//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_kinb_cntr_data.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_kinb_cntr'.
//
// Model version                  : 1.203
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Apr 18 17:04:04 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_kinb_cntr.h"
#include "ROPOD_4Wheel_kinb_cntr_private.h"

// Block parameters (auto storage)
P_ROPOD_4Wheel_kinb_cntr_T ROPOD_4Wheel_kinb_cntr_P = {
  // Variable: SW_COM1_ENABLE1
  //  Referenced by: '<S36>/Constant3'

  1.0,

  // Variable: SW_COM1_ENABLE2
  //  Referenced by: '<S36>/Constant4'

  2.0,

  // Variable: SW_COM1_MODE_VELOCITY
  //  Referenced by: '<S36>/Constant5'

  8.0,

  // Variable: SW_COM1_USE_TS
  //  Referenced by: '<S36>/Constant11'

  32768.0,

  // Variable: Tsp
  //  Referenced by:
  //    '<S8>/Get Parameter'
  //    '<S8>/Get Parameter1'
  //    '<S8>/Get Parameter10'
  //    '<S8>/Get Parameter11'
  //    '<S8>/Get Parameter12'
  //    '<S8>/Get Parameter13'
  //    '<S8>/Get Parameter14'
  //    '<S8>/Get Parameter15'
  //    '<S8>/Get Parameter16'
  //    '<S8>/Get Parameter17'
  //    '<S8>/Get Parameter2'
  //    '<S8>/Get Parameter3'
  //    '<S8>/Get Parameter4'
  //    '<S8>/Get Parameter5'
  //    '<S8>/Get Parameter6'
  //    '<S8>/Get Parameter7'
  //    '<S8>/Get Parameter8'
  //    '<S8>/Get Parameter9'
  //    '<S9>/Get Parameter'
  //    '<S9>/Get Parameter1'
  //    '<S9>/Get Parameter2'
  //    '<S9>/Get Parameter3'
  //    '<S9>/Get Parameter4'
  //    '<S9>/Get Parameter5'
  //    '<S11>/Get Parameter'
  //    '<S11>/Get Parameter1'
  //    '<S11>/Get Parameter2'
  //    '<S11>/Get Parameter3'

  1.0,

  // Mask Parameter: CompareToConstant_const
  //  Referenced by: '<S45>/Constant'

  0.5,

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S33>/Constant'

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
  //  Referenced by: '<S56>/Out1'

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

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S52>/Constant'

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

  // Computed Parameter: Constant_Value_d0
  //  Referenced by: '<S14>/Constant'

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

  // Computed Parameter: Constant_Value_m
  //  Referenced by: '<S15>/Constant'

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

  // Computed Parameter: Constant_Value_f
  //  Referenced by: '<S16>/Constant'

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

  // Computed Parameter: Constant_Value_i
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

  // Computed Parameter: Constant_Value_n
  //  Referenced by: '<S18>/Constant'

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

  // Computed Parameter: Constant_Value_i5
  //  Referenced by: '<S19>/Constant'

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

  // Computed Parameter: Constant_Value_mu
  //  Referenced by: '<S20>/Constant'

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

  // Computed Parameter: Constant_Value_h
  //  Referenced by: '<S21>/Constant'

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

  // Expression: 0
  //  Referenced by: '<S13>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S13>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S13>/Constant'

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

  // Computed Parameter: SFunction_P1_Size
  //  Referenced by: '<S41>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S41>/S-Function'

  1.0,

  // Computed Parameter: SFunction_P1_Size_d
  //  Referenced by: '<S42>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S42>/S-Function'

  2.0,

  // Computed Parameter: SFunction_P1_Size_e
  //  Referenced by: '<S43>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S43>/S-Function'

  3.0,

  // Computed Parameter: SFunction_P1_Size_l
  //  Referenced by: '<S44>/S-Function'

  { 1.0, 1.0 },

  // Expression: link_id
  //  Referenced by: '<S44>/S-Function'

  4.0,

  // Expression: 2
  //  Referenced by: '<S36>/shift'

  2.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant10'

  0.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant6'

  0.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant7'

  0.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant8'

  0.0,

  // Expression: 0
  //  Referenced by: '<S36>/Constant9'

  0.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain'

  1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain1'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain11'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain12'

  1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain13'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain8'

  1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain14'

  1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain15'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain16'

  1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain17'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain18'

  1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain19'

  1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain2'

  1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain3'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain4'

  1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain5'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain6'

  1.0,

  // Expression: -1
  //  Referenced by: '<S36>/Gain7'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S36>/Gain9'

  1.0,

  // Computed Parameter: sampletime_WtEt
  //  Referenced by: '<S46>/sample time'

  0.01,

  // Expression: 0.0
  //  Referenced by: '<S13>/Enabled Delay'

  0.0,

  // Expression: -1
  //  Referenced by: '<S13>/Gain1'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S46>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S13>/Gain'

  -1.0,

  // Computed Parameter: sampletime_WtEt_n
  //  Referenced by: '<S47>/sample time'

  0.01,

  // Expression: -1
  //  Referenced by: '<S13>/Gain3'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S47>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S13>/Gain2'

  -1.0,

  // Computed Parameter: sampletime_WtEt_e
  //  Referenced by: '<S48>/sample time'

  0.01,

  // Expression: -1
  //  Referenced by: '<S13>/Gain5'

  -1.0,

  // Expression: 0
  //  Referenced by: '<S48>/Delay Input2'

  0.0,

  // Expression: -1
  //  Referenced by: '<S13>/Gain4'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S36>/sign_convention'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S36>/sign_convention1'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S36>/sign_convention2'

  -1.0,

  // Expression: -1
  //  Referenced by: '<S36>/sign_convention3'

  -1.0,

  // Expression: 1
  //  Referenced by: '<S1>/Constant'

  1.0,

  // Expression: 1
  //  Referenced by: '<S1>/Constant12'

  1.0,

  // Expression: 2
  //  Referenced by: '<S1>/Constant3'

  2.0,

  // Expression: 0
  //  Referenced by: '<S1>/Constant5'

  0.0,

  // Expression: 3
  //  Referenced by: '<S1>/Constant1'

  3.0,

  // Expression: 2
  //  Referenced by: '<S1>/Constant13'

  2.0,

  // Expression: 4
  //  Referenced by: '<S1>/Constant2'

  4.0,

  // Expression: 0
  //  Referenced by: '<S1>/Constant4'

  0.0,

  // Expression: 5
  //  Referenced by: '<S1>/Constant6'

  5.0,

  // Expression: 3
  //  Referenced by: '<S1>/Constant14'

  3.0,

  // Expression: 6
  //  Referenced by: '<S1>/Constant7'

  6.0,

  // Expression: 0
  //  Referenced by: '<S1>/Constant8'

  0.0,

  // Expression: 7
  //  Referenced by: '<S1>/Constant9'

  7.0,

  // Expression: 4
  //  Referenced by: '<S1>/Constant15'

  4.0,

  // Expression: 8
  //  Referenced by: '<S1>/Constant10'

  8.0,

  // Expression: 0
  //  Referenced by: '<S1>/Constant11'

  0.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S3>/Discrete-Time Integrator'

  0.001,

  // Expression: 0
  //  Referenced by: '<S3>/Discrete-Time Integrator'

  0.0,

  // Expression: 0
  //  Referenced by: '<S4>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S4>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S4>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S4>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S4>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S4>/Constant5'

  0.0,

  // Computed Parameter: EnabledDelay_DelayLength
  //  Referenced by: '<S13>/Enabled Delay'

  1U,

  // Computed Parameter: Gain10_Gain
  //  Referenced by: '<S36>/Gain10'

  32768U,

  // Computed Parameter: Gain6_Gain_a
  //  Referenced by: '<S13>/Gain6'

  0U,

  // Computed Parameter: Switch_Threshold
  //  Referenced by: '<S13>/Switch'

  0U,

  // Computed Parameter: Switch1_Threshold
  //  Referenced by: '<S13>/Switch1'

  0U,

  // Computed Parameter: Switch2_Threshold
  //  Referenced by: '<S13>/Switch2'

  0U
};

//
// File trailer for generated code.
//
// [EOF]
//
