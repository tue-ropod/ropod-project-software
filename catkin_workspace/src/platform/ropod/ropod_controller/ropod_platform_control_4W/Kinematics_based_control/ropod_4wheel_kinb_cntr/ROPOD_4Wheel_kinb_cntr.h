//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_kinb_cntr.h
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
#ifndef RTW_HEADER_ROPOD_4Wheel_kinb_cntr_h_
#define RTW_HEADER_ROPOD_4Wheel_kinb_cntr_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef ROPOD_4Wheel_kinb_cntr_COMMON_INCLUDES_
# define ROPOD_4Wheel_kinb_cntr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slros_initialize.h"
#endif                                 // ROPOD_4Wheel_kinb_cntr_COMMON_INCLUDES_ 

#include "ROPOD_4Wheel_kinb_cntr_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_ROPOD_4Wheel_kinb_cntr_nav_msgs_Odometry BusAssignment;// '<S4>/Bus Assignment' 
  real_T dv0[45];
  real_T SFunction[40];                // '<S41>/S-Function'
  real_T SFunction_n[40];              // '<S42>/S-Function'
  real_T SFunction_m[40];              // '<S43>/S-Function'
  real_T SFunction_k[40];              // '<S44>/S-Function'
  real_T rtb_TmpSignalConversionAtSFun_m[24];
  real_T dv1[9];
  real_T TmpSignalConversionAtSelect[8];
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist In1;// '<S56>/In1'
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist b_varargout_2;
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment7;// '<S1>/Bus Assignment7' 
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment6;// '<S1>/Bus Assignment6' 
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment4;// '<S1>/Bus Assignment4' 
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment5;// '<S1>/Bus Assignment5' 
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment3;// '<S1>/Bus Assignment3' 
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment2;// '<S1>/Bus Assignment2' 
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment1;// '<S1>/Bus Assignment1' 
  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist BusAssignment_h;// '<S1>/Bus Assignment' 
  real_T Add[4];                       // '<S35>/Add'
  char_T cv0[29];
  char_T cv1[26];
  char_T cv2[25];
  real_T TmpSignalConversionAtCoordi[3];
  char_T cv3[23];
  char_T cv4[22];
  char_T cv5[21];
  real_T command2;                     // '<S36>/Constant'
  real_T command2_h;                   // '<S36>/Constant1'
  real_T timestamp;                    // '<S36>/Constant10'
  real_T timestamp_d;                  // '<S36>/Constant2'
  real_T command2_d;                   // '<S36>/Constant6'
  real_T timestamp_i;                  // '<S36>/Constant7'
  real_T timestamp_o;                  // '<S36>/Constant8'
  real_T command2_j;                   // '<S36>/Constant9'
  real_T limit1_p;                     // '<S36>/Gain'
  real_T limit1_n;                     // '<S36>/Gain1'
  real_T command1;                     // '<S36>/Gain10'
  real_T limit1_n_g;                   // '<S36>/Gain11'
  real_T limit2_p;                     // '<S36>/Gain12'
  real_T limit2_n;                     // '<S36>/Gain13'
  real_T command1_o;                   // '<S36>/Gain8'
  real_T command1_d;                   // '<S36>/Gain14'
  real_T limit1_n_d;                   // '<S36>/Gain15'
  real_T limit2_p_c;                   // '<S36>/Gain16'
  real_T limit2_n_k;                   // '<S36>/Gain17'
  real_T command1_e;                   // '<S36>/Gain18'
  real_T limit1_p_b;                   // '<S36>/Gain19'
  real_T limit2_p_i;                   // '<S36>/Gain2'
  real_T limit2_n_f;                   // '<S36>/Gain3'
  real_T limit1_p_o;                   // '<S36>/Gain4'
  real_T limit1_n_m;                   // '<S36>/Gain5'
  real_T limit2_p_l;                   // '<S36>/Gain6'
  real_T limit2_n_j;                   // '<S36>/Gain7'
  real_T limit1_p_f;                   // '<S36>/Gain9'
  real_T EnabledDelay;                 // '<S13>/Enabled Delay'
  real_T Gain1;                        // '<S13>/Gain1'
  real_T Gain;                         // '<S13>/Gain'
  real_T DifferenceInputs2;            // '<S46>/Difference Inputs2'
  real_T Gain3;                        // '<S13>/Gain3'
  real_T Gain2;                        // '<S13>/Gain2'
  real_T DifferenceInputs2_n;          // '<S47>/Difference Inputs2'
  real_T Gain5;                        // '<S13>/Gain5'
  real_T Gain4;                        // '<S13>/Gain4'
  real_T DifferenceInputs2_g;          // '<S48>/Difference Inputs2'
  real_T Product3[15];                 // '<S2>/Product3'
  real_T setpoint2;                    // '<S36>/sign_convention'
  real_T setpoint2_h;                  // '<S36>/sign_convention1'
  real_T setpoint2_j;                  // '<S36>/sign_convention2'
  real_T setpoint2_n;                  // '<S36>/sign_convention3'
  real_T max_acc_xy;                   // '<S11>/Get Parameter'
  real_T max_vel_xy;                   // '<S11>/Get Parameter1'
  real_T max_acc_theta;                // '<S11>/Get Parameter2'
  real_T max_vel_theta;                // '<S11>/Get Parameter3'
  real_T pivot_offs_sw1;               // '<S9>/Get Parameter1'
  real_T pivot_offs_sw2;               // '<S9>/Get Parameter3'
  real_T pivot_offs_sw3;               // '<S9>/Get Parameter4'
  real_T pivot_offs_sw4;               // '<S9>/Get Parameter5'
  real_T GetParameter_o1;              // '<S8>/Get Parameter'
  real_T GetParameter11_o1;            // '<S8>/Get Parameter11'
  real_T GetParameter12_o1;            // '<S8>/Get Parameter12'
  real_T GetParameter13_o1;            // '<S8>/Get Parameter13'
  real_T GetParameter14_o1;            // '<S8>/Get Parameter14'
  real_T GetParameter15_o1;            // '<S8>/Get Parameter15'
  real_T GetParameter16_o1;            // '<S8>/Get Parameter16'
  real_T GetParameter17_o1;            // '<S8>/Get Parameter17'
  real_T GetParameter1_o1;             // '<S8>/Get Parameter1'
  real_T GetParameter2_o1;             // '<S8>/Get Parameter2'
  real_T GetParameter3_o1;             // '<S8>/Get Parameter3'
  real_T GetParameter4_o1;             // '<S8>/Get Parameter4'
  real_T GetParameter5_o1;             // '<S8>/Get Parameter5'
  real_T GetParameter6_o1;             // '<S8>/Get Parameter6'
  real_T GetParameter7_o1;             // '<S8>/Get Parameter7'
  real_T GetParameter8_o1;             // '<S8>/Get Parameter8'
  real_T GetParameter9_o1;             // '<S8>/Get Parameter9'
  real_T GetParameter10_o1;            // '<S8>/Get Parameter10'
  real_T t2;
  real_T t10;
  real_T t11;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t30;
  real_T t31;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t35;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T Switch2_k;                    // '<S13>/Switch2'
  real_T Switch1;                      // '<S13>/Switch1'
  real_T Switch;                       // '<S13>/Switch'
  real_T sampletime_a;                 // '<S48>/sample time'
  real_T sampletime_o;                 // '<S47>/sample time'
  real_T sampletime;                   // '<S46>/sample time'
  real_T Switch2_a;                    // '<S55>/Switch2'
  real_T Yk1_lf;                       // '<S48>/Delay Input2'
  real_T Switch2_km;                   // '<S51>/Switch2'
  real_T Yk1_l;                        // '<S47>/Delay Input2'
  real_T Switch2_l;                    // '<S50>/Switch2'
  real_T Yk1;                          // '<S46>/Delay Input2'
  real_T Switch2;                      // '<S49>/Switch2'
  real_T t15_tmp;
  real_T t3_tmp;
  real_T t4_tmp;
  real_T t5_tmp;
  int32_T ECAT_Interface_e;            // '<S5>/ECAT_Interface'
  boolean_T SourceBlock_o1;            // '<S52>/SourceBlock'
} B_ROPOD_4Wheel_kinb_cntr_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_blo_n_T obj; // '<S11>/Get Parameter'
  robotics_slros_internal_blo_n_T obj_p;// '<S11>/Get Parameter1'
  robotics_slros_internal_blo_n_T obj_o;// '<S11>/Get Parameter2'
  robotics_slros_internal_blo_n_T obj_pq;// '<S11>/Get Parameter3'
  robotics_slros_internal_blo_n_T obj_b;// '<S9>/Get Parameter1'
  robotics_slros_internal_blo_n_T obj_l;// '<S9>/Get Parameter3'
  robotics_slros_internal_blo_n_T obj_c;// '<S9>/Get Parameter4'
  robotics_slros_internal_blo_n_T obj_a;// '<S9>/Get Parameter5'
  robotics_slros_internal_blo_n_T obj_f;// '<S9>/Get Parameter'
  robotics_slros_internal_blo_n_T obj_g;// '<S9>/Get Parameter2'
  robotics_slros_internal_blo_n_T obj_ft;// '<S8>/Get Parameter'
  robotics_slros_internal_blo_n_T obj_e;// '<S8>/Get Parameter11'
  robotics_slros_internal_blo_n_T obj_ps;// '<S8>/Get Parameter12'
  robotics_slros_internal_blo_n_T obj_h;// '<S8>/Get Parameter13'
  robotics_slros_internal_blo_n_T obj_k;// '<S8>/Get Parameter14'
  robotics_slros_internal_blo_n_T obj_kj;// '<S8>/Get Parameter15'
  robotics_slros_internal_blo_n_T obj_i;// '<S8>/Get Parameter16'
  robotics_slros_internal_blo_n_T obj_m;// '<S8>/Get Parameter17'
  robotics_slros_internal_blo_n_T obj_ei;// '<S8>/Get Parameter1'
  robotics_slros_internal_blo_n_T obj_j;// '<S8>/Get Parameter2'
  robotics_slros_internal_blo_n_T obj_is;// '<S8>/Get Parameter3'
  robotics_slros_internal_blo_n_T obj_kd;// '<S8>/Get Parameter4'
  robotics_slros_internal_blo_n_T obj_aa;// '<S8>/Get Parameter5'
  robotics_slros_internal_blo_n_T obj_m2;// '<S8>/Get Parameter6'
  robotics_slros_internal_blo_n_T obj_d;// '<S8>/Get Parameter7'
  robotics_slros_internal_blo_n_T obj_gc;// '<S8>/Get Parameter8'
  robotics_slros_internal_blo_n_T obj_c0;// '<S8>/Get Parameter9'
  robotics_slros_internal_blo_n_T obj_fc;// '<S8>/Get Parameter10'
  real_T EnabledDelay_DSTATE;          // '<S13>/Enabled Delay'
  real_T DelayInput2_DSTATE;           // '<S46>/Delay Input2'
  real_T DelayInput2_DSTATE_a;         // '<S47>/Delay Input2'
  real_T DelayInput2_DSTATE_e;         // '<S48>/Delay Input2'
  real_T DiscreteTimeIntegrator_DSTATE[3];// '<S3>/Discrete-Time Integrator'
  real_T ECAT_Interface_RWORK[13];     // '<S5>/ECAT_Interface'
  robotics_slros_internal_block_T obj_hz;// '<S34>/SinkBlock'
  robotics_slros_internal_block_T obj_fm;// '<S29>/SinkBlock'
  robotics_slros_internal_block_T obj_cx;// '<S28>/SinkBlock'
  robotics_slros_internal_block_T obj_du;// '<S27>/SinkBlock'
  robotics_slros_internal_block_T obj_k1;// '<S26>/SinkBlock'
  robotics_slros_internal_block_T obj_dq;// '<S25>/SinkBlock'
  robotics_slros_internal_block_T obj_k1w;// '<S24>/SinkBlock'
  robotics_slros_internal_block_T obj_kt;// '<S23>/SinkBlock'
  robotics_slros_internal_block_T obj_o2;// '<S22>/SinkBlock'
  robotics_slcore_internal_bloc_T obj_dx;// '<S4>/Coordinate Transformation Conversion' 
  robotics_slros_internal_bl_nc_T obj_ja;// '<S52>/SourceBlock'
} DW_ROPOD_4Wheel_kinb_cntr_T;

// Parameters (auto storage)
struct P_ROPOD_4Wheel_kinb_cntr_T_ {
  real_T SW_COM1_ENABLE1;              // Variable: SW_COM1_ENABLE1
                                       //  Referenced by: '<S36>/Constant3'

  real_T SW_COM1_ENABLE2;              // Variable: SW_COM1_ENABLE2
                                       //  Referenced by: '<S36>/Constant4'

  real_T SW_COM1_MODE_VELOCITY;        // Variable: SW_COM1_MODE_VELOCITY
                                       //  Referenced by: '<S36>/Constant5'

  real_T SW_COM1_USE_TS;               // Variable: SW_COM1_USE_TS
                                       //  Referenced by: '<S36>/Constant11'

  real_T Tsp;                          // Variable: Tsp
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

  real_T CompareToConstant_const;      // Mask Parameter: CompareToConstant_const
                                       //  Referenced by: '<S45>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                                 //  Referenced by: '<S33>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                            //  Referenced by: '<S56>/Out1'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                     //  Referenced by: '<S52>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_d0;// Computed Parameter: Constant_Value_d0
                                                                      //  Referenced by: '<S14>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                     //  Referenced by: '<S15>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                     //  Referenced by: '<S16>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                     //  Referenced by: '<S17>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                                     //  Referenced by: '<S18>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_i5;// Computed Parameter: Constant_Value_i5
                                                                      //  Referenced by: '<S19>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_mu;// Computed Parameter: Constant_Value_mu
                                                                      //  Referenced by: '<S20>/Constant'

  SL_Bus_ROPOD_4Wheel_kinb_cntr_geometry_msgs_Twist Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                     //  Referenced by: '<S21>/Constant'

  real_T Constant2_Value;              // Expression: 0
                                       //  Referenced by: '<S13>/Constant2'

  real_T Constant1_Value;              // Expression: 0
                                       //  Referenced by: '<S13>/Constant1'

  real_T Constant_Value_k;             // Expression: 0
                                       //  Referenced by: '<S13>/Constant'

  real_T ECAT_Interface_P1_Size[2];    // Computed Parameter: ECAT_Interface_P1_Size
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T ECAT_Interface_P1[4];         // Computed Parameter: ECAT_Interface_P1
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T ECAT_Interface_P2_Size[2];    // Computed Parameter: ECAT_Interface_P2_Size
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T ECAT_Interface_P2;            // Expression: TS
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T SFunction_P1_Size[2];         // Computed Parameter: SFunction_P1_Size
                                       //  Referenced by: '<S41>/S-Function'

  real_T SFunction_P1;                 // Expression: link_id
                                       //  Referenced by: '<S41>/S-Function'

  real_T SFunction_P1_Size_d[2];       // Computed Parameter: SFunction_P1_Size_d
                                       //  Referenced by: '<S42>/S-Function'

  real_T SFunction_P1_g;               // Expression: link_id
                                       //  Referenced by: '<S42>/S-Function'

  real_T SFunction_P1_Size_e[2];       // Computed Parameter: SFunction_P1_Size_e
                                       //  Referenced by: '<S43>/S-Function'

  real_T SFunction_P1_j;               // Expression: link_id
                                       //  Referenced by: '<S43>/S-Function'

  real_T SFunction_P1_Size_l[2];       // Computed Parameter: SFunction_P1_Size_l
                                       //  Referenced by: '<S44>/S-Function'

  real_T SFunction_P1_i;               // Expression: link_id
                                       //  Referenced by: '<S44>/S-Function'

  real_T shift_Gain;                   // Expression: 2
                                       //  Referenced by: '<S36>/shift'

  real_T Constant_Value_n3;            // Expression: 0
                                       //  Referenced by: '<S36>/Constant'

  real_T Constant1_Value_g;            // Expression: 0
                                       //  Referenced by: '<S36>/Constant1'

  real_T Constant10_Value;             // Expression: 0
                                       //  Referenced by: '<S36>/Constant10'

  real_T Constant2_Value_i;            // Expression: 0
                                       //  Referenced by: '<S36>/Constant2'

  real_T Constant6_Value;              // Expression: 0
                                       //  Referenced by: '<S36>/Constant6'

  real_T Constant7_Value;              // Expression: 0
                                       //  Referenced by: '<S36>/Constant7'

  real_T Constant8_Value;              // Expression: 0
                                       //  Referenced by: '<S36>/Constant8'

  real_T Constant9_Value;              // Expression: 0
                                       //  Referenced by: '<S36>/Constant9'

  real_T Gain_Gain;                    // Expression: 1
                                       //  Referenced by: '<S36>/Gain'

  real_T Gain1_Gain;                   // Expression: -1
                                       //  Referenced by: '<S36>/Gain1'

  real_T Gain11_Gain;                  // Expression: -1
                                       //  Referenced by: '<S36>/Gain11'

  real_T Gain12_Gain;                  // Expression: 1
                                       //  Referenced by: '<S36>/Gain12'

  real_T Gain13_Gain;                  // Expression: -1
                                       //  Referenced by: '<S36>/Gain13'

  real_T Gain8_Gain;                   // Expression: 1
                                       //  Referenced by: '<S36>/Gain8'

  real_T Gain14_Gain;                  // Expression: 1
                                       //  Referenced by: '<S36>/Gain14'

  real_T Gain15_Gain;                  // Expression: -1
                                       //  Referenced by: '<S36>/Gain15'

  real_T Gain16_Gain;                  // Expression: 1
                                       //  Referenced by: '<S36>/Gain16'

  real_T Gain17_Gain;                  // Expression: -1
                                       //  Referenced by: '<S36>/Gain17'

  real_T Gain18_Gain;                  // Expression: 1
                                       //  Referenced by: '<S36>/Gain18'

  real_T Gain19_Gain;                  // Expression: 1
                                       //  Referenced by: '<S36>/Gain19'

  real_T Gain2_Gain;                   // Expression: 1
                                       //  Referenced by: '<S36>/Gain2'

  real_T Gain3_Gain;                   // Expression: -1
                                       //  Referenced by: '<S36>/Gain3'

  real_T Gain4_Gain;                   // Expression: 1
                                       //  Referenced by: '<S36>/Gain4'

  real_T Gain5_Gain;                   // Expression: -1
                                       //  Referenced by: '<S36>/Gain5'

  real_T Gain6_Gain;                   // Expression: 1
                                       //  Referenced by: '<S36>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                       //  Referenced by: '<S36>/Gain7'

  real_T Gain9_Gain;                   // Expression: 1
                                       //  Referenced by: '<S36>/Gain9'

  real_T sampletime_WtEt;              // Computed Parameter: sampletime_WtEt
                                       //  Referenced by: '<S46>/sample time'

  real_T EnabledDelay_InitialCondition;// Expression: 0.0
                                       //  Referenced by: '<S13>/Enabled Delay'

  real_T Gain1_Gain_j;                 // Expression: -1
                                       //  Referenced by: '<S13>/Gain1'

  real_T DelayInput2_InitialCondition; // Expression: 0
                                       //  Referenced by: '<S46>/Delay Input2'

  real_T Gain_Gain_g;                  // Expression: -1
                                       //  Referenced by: '<S13>/Gain'

  real_T sampletime_WtEt_n;            // Computed Parameter: sampletime_WtEt_n
                                       //  Referenced by: '<S47>/sample time'

  real_T Gain3_Gain_e;                 // Expression: -1
                                       //  Referenced by: '<S13>/Gain3'

  real_T DelayInput2_InitialCondition_e;// Expression: 0
                                        //  Referenced by: '<S47>/Delay Input2'

  real_T Gain2_Gain_e;                 // Expression: -1
                                       //  Referenced by: '<S13>/Gain2'

  real_T sampletime_WtEt_e;            // Computed Parameter: sampletime_WtEt_e
                                       //  Referenced by: '<S48>/sample time'

  real_T Gain5_Gain_c;                 // Expression: -1
                                       //  Referenced by: '<S13>/Gain5'

  real_T DelayInput2_InitialCondition_eo;// Expression: 0
                                         //  Referenced by: '<S48>/Delay Input2'

  real_T Gain4_Gain_c;                 // Expression: -1
                                       //  Referenced by: '<S13>/Gain4'

  real_T sign_convention_Gain;         // Expression: -1
                                       //  Referenced by: '<S36>/sign_convention'

  real_T sign_convention1_Gain;        // Expression: -1
                                       //  Referenced by: '<S36>/sign_convention1'

  real_T sign_convention2_Gain;        // Expression: -1
                                       //  Referenced by: '<S36>/sign_convention2'

  real_T sign_convention3_Gain;        // Expression: -1
                                       //  Referenced by: '<S36>/sign_convention3'

  real_T Constant_Value_l;             // Expression: 1
                                       //  Referenced by: '<S1>/Constant'

  real_T Constant12_Value;             // Expression: 1
                                       //  Referenced by: '<S1>/Constant12'

  real_T Constant3_Value;              // Expression: 2
                                       //  Referenced by: '<S1>/Constant3'

  real_T Constant5_Value;              // Expression: 0
                                       //  Referenced by: '<S1>/Constant5'

  real_T Constant1_Value_j;            // Expression: 3
                                       //  Referenced by: '<S1>/Constant1'

  real_T Constant13_Value;             // Expression: 2
                                       //  Referenced by: '<S1>/Constant13'

  real_T Constant2_Value_n;            // Expression: 4
                                       //  Referenced by: '<S1>/Constant2'

  real_T Constant4_Value;              // Expression: 0
                                       //  Referenced by: '<S1>/Constant4'

  real_T Constant6_Value_j;            // Expression: 5
                                       //  Referenced by: '<S1>/Constant6'

  real_T Constant14_Value;             // Expression: 3
                                       //  Referenced by: '<S1>/Constant14'

  real_T Constant7_Value_p;            // Expression: 6
                                       //  Referenced by: '<S1>/Constant7'

  real_T Constant8_Value_c;            // Expression: 0
                                       //  Referenced by: '<S1>/Constant8'

  real_T Constant9_Value_b;            // Expression: 7
                                       //  Referenced by: '<S1>/Constant9'

  real_T Constant15_Value;             // Expression: 4
                                       //  Referenced by: '<S1>/Constant15'

  real_T Constant10_Value_c;           // Expression: 8
                                       //  Referenced by: '<S1>/Constant10'

  real_T Constant11_Value;             // Expression: 0
                                       //  Referenced by: '<S1>/Constant11'

  real_T DiscreteTimeIntegrator_gainval;// Computed Parameter: DiscreteTimeIntegrator_gainval
                                        //  Referenced by: '<S3>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                       //  Referenced by: '<S3>/Discrete-Time Integrator'

  real_T Constant_Value_e;             // Expression: 0
                                       //  Referenced by: '<S4>/Constant'

  real_T Constant1_Value_gr;           // Expression: 0
                                       //  Referenced by: '<S4>/Constant1'

  real_T Constant2_Value_g;            // Expression: 0
                                       //  Referenced by: '<S4>/Constant2'

  real_T Constant3_Value_g;            // Expression: 0
                                       //  Referenced by: '<S4>/Constant3'

  real_T Constant4_Value_l;            // Expression: 0
                                       //  Referenced by: '<S4>/Constant4'

  real_T Constant5_Value_e;            // Expression: 0
                                       //  Referenced by: '<S4>/Constant5'

  uint32_T EnabledDelay_DelayLength;   // Computed Parameter: EnabledDelay_DelayLength
                                       //  Referenced by: '<S13>/Enabled Delay'

  uint16_T Gain10_Gain;                // Computed Parameter: Gain10_Gain
                                       //  Referenced by: '<S36>/Gain10'

  uint8_T Gain6_Gain_a;                // Computed Parameter: Gain6_Gain_a
                                       //  Referenced by: '<S13>/Gain6'

  uint8_T Switch_Threshold;            // Computed Parameter: Switch_Threshold
                                       //  Referenced by: '<S13>/Switch'

  uint8_T Switch1_Threshold;           // Computed Parameter: Switch1_Threshold
                                       //  Referenced by: '<S13>/Switch1'

  uint8_T Switch2_Threshold;           // Computed Parameter: Switch2_Threshold
                                       //  Referenced by: '<S13>/Switch2'

};

// Real-time Model Data Structure
struct tag_RTM_ROPOD_4Wheel_kinb_cntr_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  //
  //  NonInlinedSFcns:
  //  The following substructure contains information regarding
  //  non-inlined s-functions used in the model.

  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[3];
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      real_T const *UPtrs0[9];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      real_T const *UPtrs0[9];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      real_T const *UPtrs0[9];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      real_T const *UPtrs0[9];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn4;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T stepSize;
    uint32_T clockTick0;
    time_T stepSize0;
    struct {
      uint16_T TID[3];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_ROPOD_4Wheel_kinb_cntr_T ROPOD_4Wheel_kinb_cntr_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_ROPOD_4Wheel_kinb_cntr_T ROPOD_4Wheel_kinb_cntr_B;

// Block states (auto storage)
extern DW_ROPOD_4Wheel_kinb_cntr_T ROPOD_4Wheel_kinb_cntr_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void ROPOD_4Wheel_kinb_cntr_initialize(void);
  extern void ROPOD_4Wheel_kinb_cntr_step(void);
  extern void ROPOD_4Wheel_kinb_cntr_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_ROPOD_4Wheel_kinb_cntr_T *const ROPOD_4Wheel_kinb_cntr_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S5>/Display1' : Unused code path elimination
//  Block '<S5>/Gain1' : Unused code path elimination
//  Block '<S46>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S53>/Data Type Duplicate' : Unused code path elimination
//  Block '<S53>/Data Type Propagation' : Unused code path elimination
//  Block '<S47>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S54>/Data Type Duplicate' : Unused code path elimination
//  Block '<S54>/Data Type Propagation' : Unused code path elimination
//  Block '<S48>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S55>/Data Type Duplicate' : Unused code path elimination
//  Block '<S55>/Data Type Propagation' : Unused code path elimination
//  Block '<S49>/Data Type Duplicate' : Unused code path elimination
//  Block '<S49>/Data Type Propagation' : Unused code path elimination
//  Block '<S50>/Data Type Duplicate' : Unused code path elimination
//  Block '<S50>/Data Type Propagation' : Unused code path elimination
//  Block '<S51>/Data Type Duplicate' : Unused code path elimination
//  Block '<S51>/Data Type Propagation' : Unused code path elimination
//  Block '<S36>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S36>/Data Type Conversion1' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ROPOD_4Wheel_kinb_cntr'
//  '<S1>'   : 'ROPOD_4Wheel_kinb_cntr/Debug SWs'
//  '<S2>'   : 'ROPOD_4Wheel_kinb_cntr/Inverse Kinematics 4SW'
//  '<S3>'   : 'ROPOD_4Wheel_kinb_cntr/Odometry and Measurement model 4SW'
//  '<S4>'   : 'ROPOD_4Wheel_kinb_cntr/Odometry publisher'
//  '<S5>'   : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE'
//  '<S6>'   : 'ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters'
//  '<S7>'   : 'ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters1'
//  '<S8>'   : 'ROPOD_4Wheel_kinb_cntr/ROS Ropod kinematic parameters2'
//  '<S9>'   : 'ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf'
//  '<S10>'  : 'ROPOD_4Wheel_kinb_cntr/ROS Smart wheels conf1'
//  '<S11>'  : 'ROPOD_4Wheel_kinb_cntr/ROS base conf'
//  '<S12>'  : 'ROPOD_4Wheel_kinb_cntr/ROS base conf1'
//  '<S13>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands'
//  '<S14>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message'
//  '<S15>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message1'
//  '<S16>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message2'
//  '<S17>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message3'
//  '<S18>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message4'
//  '<S19>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message5'
//  '<S20>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message6'
//  '<S21>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Blank Message7'
//  '<S22>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish'
//  '<S23>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish1'
//  '<S24>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish2'
//  '<S25>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish3'
//  '<S26>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish4'
//  '<S27>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish5'
//  '<S28>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish6'
//  '<S29>'  : 'ROPOD_4Wheel_kinb_cntr/Debug SWs/Publish7'
//  '<S30>'  : 'ROPOD_4Wheel_kinb_cntr/Inverse Kinematics 4SW/Gl_matrix'
//  '<S31>'  : 'ROPOD_4Wheel_kinb_cntr/Odometry and Measurement model 4SW/Jqwl_matrix'
//  '<S32>'  : 'ROPOD_4Wheel_kinb_cntr/Odometry and Measurement model 4SW/pos_rot_matrix'
//  '<S33>'  : 'ROPOD_4Wheel_kinb_cntr/Odometry publisher/Blank Message'
//  '<S34>'  : 'ROPOD_4Wheel_kinb_cntr/Odometry publisher/Publish'
//  '<S35>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/ROPOD_4Wheel_sens'
//  '<S36>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/ROPOD_4Wheel_vel_cmd'
//  '<S37>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_1'
//  '<S38>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_2'
//  '<S39>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_3'
//  '<S40>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_4'
//  '<S41>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel'
//  '<S42>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel'
//  '<S43>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel'
//  '<S44>'  : 'ROPOD_4Wheel_kinb_cntr/ROPOD 4SW VELOCITY MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel'
//  '<S45>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Compare To Constant'
//  '<S46>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Rate Limiter Dynamic'
//  '<S47>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Rate Limiter Dynamic1'
//  '<S48>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Rate Limiter Dynamic2'
//  '<S49>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Saturation Dynamic'
//  '<S50>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Saturation Dynamic1'
//  '<S51>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Saturation Dynamic2'
//  '<S52>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Subscribe1'
//  '<S53>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Rate Limiter Dynamic/Saturation Dynamic'
//  '<S54>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Rate Limiter Dynamic1/Saturation Dynamic'
//  '<S55>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Rate Limiter Dynamic2/Saturation Dynamic'
//  '<S56>'  : 'ROPOD_4Wheel_kinb_cntr/Subscriber vel commands/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_ROPOD_4Wheel_kinb_cntr_h_

//
// File trailer for generated code.
//
// [EOF]
//
