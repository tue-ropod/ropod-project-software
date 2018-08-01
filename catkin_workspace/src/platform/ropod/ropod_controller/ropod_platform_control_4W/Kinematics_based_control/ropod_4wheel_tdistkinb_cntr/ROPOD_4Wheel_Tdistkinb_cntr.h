//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr'.
//
// Model version                  : 1.266
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Aug  1 17:44:50 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_h_
#define RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef ROPOD_4Wheel_Tdistkinb_cntr_COMMON_INCLUDES_
# define ROPOD_4Wheel_Tdistkinb_cntr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slros_initialize.h"
#endif                                 // ROPOD_4Wheel_Tdistkinb_cntr_COMMON_INCLUDES_ 

#include "ROPOD_4Wheel_Tdistkinb_cntr_types.h"
#include "rtGetNaN.h"
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
  real_T Ac[189];
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_nav_msgs_Odometry BusAssignment;// '<S3>/Bus Assignment' 
  real_T Linv[81];
  real_T Hinv[81];
  real_T RLinv[81];
  real_T D[81];
  real_T H[81];
  real_T U[81];
  real_T TL[81];
  real_T QQ[81];
  real_T RR[81];
  real_T b_A[81];
  real_T P[64];
  real_T Gtl[45];                      // '<S44>/Gl_matrices'
  real_T Gl[45];                       // '<S44>/Gl_matrices'
  real_T SFunction_o[40];              // '<S29>/S-Function'
  real_T SFunction_b[40];              // '<S30>/S-Function'
  real_T SFunction_m[40];              // '<S31>/S-Function'
  real_T rtb_Gtl_m[27];
  real_T b_A_c[27];
  real_T rtb_TmpSignalConversionAtSFun_k[24];
  real_T lam[21];
  real_T b_b[21];
  real_T cTol[21];
  real_T varargin_1[21];
  real_T dv0[18];
  real_T Opt[18];
  real_T Rhs[18];
  int16_T K[64];
  real_T dv1[15];
  real_T f[9];
  real_T x[9];
  real_T r[9];
  real_T AcRow[9];
  real_T Ac_c[9];
  real_T tau[9];
  real_T work[9];
  real_T work_b[9];
  real_T e[9];
  real_T Switch2_k[8];                 // '<S20>/Switch2'
  real_T Product9[8];                  // '<S82>/Product9'
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_geometry_msgs_Twist In1;// '<S18>/In1'
  real_T SFunction[40];                // '<S28>/S-Function'
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_geometry_msgs_Twist b_varargout_2;
  int16_T iC[21];
  int16_T iA[21];
  real_T varargin_1_p[5];
  char_T cv0[33];
  char_T cv1[32];
  real_T s[4];
  char_T cv2[31];
  char_T cv3[30];
  char_T cv4[29];
  char_T cv5[28];
  char_T cv6[26];
  char_T cv7[25];
  real_T Sum_pp[3];                    // '<S43>/Sum'
  real_T Diff[3];                      // '<S46>/Diff'
  real_T dv2[3];
  real_T work_c[3];
  char_T cv8[22];
  char_T cv9[21];
  real_T DigitalClock;                 // '<S10>/Digital Clock'
  real_T EnabledDelay;                 // '<S10>/Enabled Delay'
  real_T Gain1;                        // '<S10>/Gain1'
  real_T Gain;                         // '<S10>/Gain'
  real_T DifferenceInputs2;            // '<S33>/Difference Inputs2'
  real_T Gain3;                        // '<S10>/Gain3'
  real_T Gain2;                        // '<S10>/Gain2'
  real_T DifferenceInputs2_l;          // '<S34>/Difference Inputs2'
  real_T Gain5;                        // '<S10>/Gain5'
  real_T Gain4;                        // '<S10>/Gain4'
  real_T DifferenceInputs2_g;          // '<S35>/Difference Inputs2'
  real_T Gain2_c;                      // '<S92>/Gain2'
  real_T Gain1_m;                      // '<S93>/Gain1'
  real_T Divide1;                      // '<S93>/Divide1'
  real_T Gain2_f;                      // '<S102>/Gain2'
  real_T Gain1_g;                      // '<S103>/Gain1'
  real_T Divide1_h;                    // '<S103>/Divide1'
  real_T Gain2_n;                      // '<S112>/Gain2'
  real_T Gain1_i;                      // '<S113>/Gain1'
  real_T Divide1_i;                    // '<S113>/Divide1'
  real_T Gain2_h;                      // '<S122>/Gain2'
  real_T Gain1_f;                      // '<S123>/Gain1'
  real_T Divide1_o;                    // '<S123>/Divide1'
  real_T Gain2_e;                      // '<S132>/Gain2'
  real_T Gain1_j;                      // '<S133>/Gain1'
  real_T Divide1_g;                    // '<S133>/Divide1'
  real_T Gain2_m;                      // '<S142>/Gain2'
  real_T Gain1_l;                      // '<S143>/Gain1'
  real_T Divide1_p;                    // '<S143>/Divide1'
  real_T Gain2_i;                      // '<S152>/Gain2'
  real_T Gain1_d;                      // '<S153>/Gain1'
  real_T Divide1_j;                    // '<S153>/Divide1'
  real_T Gain2_hk;                     // '<S162>/Gain2'
  real_T Gain1_jd;                     // '<S163>/Gain1'
  real_T Divide1_g2;                   // '<S163>/Divide1'
  real_T Gain_h;                       // '<S43>/Gain'
  real_T Gain1_iu;                     // '<S43>/Gain1'
  real_T Gain2_m2;                     // '<S43>/Gain2'
  real_T Gain2_k;                      // '<S51>/Gain2'
  real_T Gain1_ga;                     // '<S52>/Gain1'
  real_T Divide1_ht;                   // '<S52>/Divide1'
  real_T Gain2_l;                      // '<S61>/Gain2'
  real_T Gain1_jx;                     // '<S62>/Gain1'
  real_T Divide1_pu;                   // '<S62>/Divide1'
  real_T Gain2_mj;                     // '<S71>/Gain2'
  real_T Gain1_a;                      // '<S72>/Gain1'
  real_T Divide1_f;                    // '<S72>/Divide1'
  real_T Gain3_g;                      // '<S44>/Gain3'
  real_T Switch1[8];                   // '<S19>/Switch1'
  real_T command2;                     // '<S21>/Constant'
  real_T command2_p;                   // '<S21>/Constant1'
  real_T timestamp;                    // '<S21>/Constant10'
  real_T timestamp_k;                  // '<S21>/Constant2'
  real_T command2_pi;                  // '<S21>/Constant6'
  real_T timestamp_n;                  // '<S21>/Constant7'
  real_T timestamp_a;                  // '<S21>/Constant8'
  real_T command2_i;                   // '<S21>/Constant9'
  real_T limit1_p;                     // '<S21>/Gain'
  real_T limit1_n;                     // '<S21>/Gain1'
  real_T command1;                     // '<S21>/Gain10'
  real_T limit1_n_o;                   // '<S21>/Gain11'
  real_T limit2_p;                     // '<S21>/Gain12'
  real_T limit2_n;                     // '<S21>/Gain13'
  real_T command1_b;                   // '<S21>/Gain8'
  real_T command1_f;                   // '<S21>/Gain14'
  real_T limit1_n_c;                   // '<S21>/Gain15'
  real_T limit2_p_i;                   // '<S21>/Gain16'
  real_T limit2_n_p;                   // '<S21>/Gain17'
  real_T command1_bn;                  // '<S21>/Gain18'
  real_T limit1_p_d;                   // '<S21>/Gain19'
  real_T limit2_p_m;                   // '<S21>/Gain2'
  real_T limit2_n_n;                   // '<S21>/Gain3'
  real_T limit1_p_m;                   // '<S21>/Gain4'
  real_T limit1_n_b;                   // '<S21>/Gain5'
  real_T limit2_p_g;                   // '<S21>/Gain6'
  real_T limit2_n_m;                   // '<S21>/Gain7'
  real_T limit1_p_l;                   // '<S21>/Gain9'
  real_T setpoint2;                    // '<S21>/sign_convention'
  real_T setpoint2_g;                  // '<S21>/sign_convention1'
  real_T setpoint2_n;                  // '<S21>/sign_convention2'
  real_T setpoint2_a;                  // '<S21>/sign_convention3'
  real_T g;                            // '<S164>/MATLAB Function'
  real_T a;                            // '<S164>/MATLAB Function'
  real_T g_k;                          // '<S154>/MATLAB Function'
  real_T a_f;                          // '<S154>/MATLAB Function'
  real_T g_g;                          // '<S144>/MATLAB Function'
  real_T a_fe;                         // '<S144>/MATLAB Function'
  real_T g_m;                          // '<S134>/MATLAB Function'
  real_T a_i;                          // '<S134>/MATLAB Function'
  real_T g_p;                          // '<S124>/MATLAB Function'
  real_T a_f5;                         // '<S124>/MATLAB Function'
  real_T g_l;                          // '<S114>/MATLAB Function'
  real_T a_c;                          // '<S114>/MATLAB Function'
  real_T g_n;                          // '<S104>/MATLAB Function'
  real_T a_k;                          // '<S104>/MATLAB Function'
  real_T g_b;                          // '<S94>/MATLAB Function'
  real_T a_a;                          // '<S94>/MATLAB Function'
  real_T g_bl;                         // '<S73>/MATLAB Function'
  real_T a_cg;                         // '<S73>/MATLAB Function'
  real_T g_ne;                         // '<S63>/MATLAB Function'
  real_T a_j;                          // '<S63>/MATLAB Function'
  real_T g_c;                          // '<S53>/MATLAB Function'
  real_T a_jp;                         // '<S53>/MATLAB Function'
  real_T max_acc_xy;                   // '<S9>/Get Parameter'
  real_T max_vel_xy;                   // '<S9>/Get Parameter1'
  real_T max_acc_theta;                // '<S9>/Get Parameter2'
  real_T max_vel_theta;                // '<S9>/Get Parameter3'
  real_T pivot_offs_sw1;               // '<S8>/Get Parameter1'
  real_T pivot_offs_sw2;               // '<S8>/Get Parameter3'
  real_T pivot_offs_sw3;               // '<S8>/Get Parameter4'
  real_T pivot_offs_sw4;               // '<S8>/Get Parameter5'
  real_T GetParameter_o1;              // '<S7>/Get Parameter'
  real_T GetParameter11_o1;            // '<S7>/Get Parameter11'
  real_T GetParameter12_o1;            // '<S7>/Get Parameter12'
  real_T GetParameter13_o1;            // '<S7>/Get Parameter13'
  real_T GetParameter14_o1;            // '<S7>/Get Parameter14'
  real_T GetParameter15_o1;            // '<S7>/Get Parameter15'
  real_T GetParameter16_o1;            // '<S7>/Get Parameter16'
  real_T GetParameter17_o1;            // '<S7>/Get Parameter17'
  real_T GetParameter1_o1;             // '<S7>/Get Parameter1'
  real_T GetParameter2_o1;             // '<S7>/Get Parameter2'
  real_T GetParameter3_o1;             // '<S7>/Get Parameter3'
  real_T GetParameter4_o1;             // '<S7>/Get Parameter4'
  real_T GetParameter5_o1;             // '<S7>/Get Parameter5'
  real_T GetParameter6_o1;             // '<S7>/Get Parameter6'
  real_T GetParameter7_o1;             // '<S7>/Get Parameter7'
  real_T GetParameter8_o1;             // '<S7>/Get Parameter8'
  real_T GetParameter9_o1;             // '<S7>/Get Parameter9'
  real_T GetParameter10_o1;            // '<S7>/Get Parameter10'
  real_T P_gain;                       // '<S6>/Get Parameter10'
  real_T P_gain_i;                     // '<S6>/Get Parameter'
  real_T P_gain_h;                     // '<S6>/Get Parameter1'
  real_T t2;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t15;
  real_T t17;
  real_T t18;
  real_T t22;
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
  real_T t48;
  real_T t49;
  real_T t50;
  real_T Product1_i;                   // '<S53>/Product1'
  real_T Sum_by;                       // '<S169>/Sum'
  real_T Sum_b;                        // '<S159>/Sum'
  real_T Sum_f;                        // '<S149>/Sum'
  real_T Sum_j;                        // '<S139>/Sum'
  real_T Sum_oj;                       // '<S129>/Sum'
  real_T Sum_h;                        // '<S119>/Sum'
  real_T Switch2_j;                    // '<S10>/Switch2'
  real_T Switch1_f;                    // '<S10>/Switch1'
  real_T Switch_j;                     // '<S10>/Switch'
  real_T sampletime_i;                 // '<S35>/sample time'
  real_T sampletime_d;                 // '<S34>/sample time'
  real_T sampletime;                   // '<S33>/sample time'
  real_T max_current;                  // '<S8>/Get Parameter2'
  real_T LL_pole_fhz_n;                // '<S6>/Get Parameter5'
  real_T LL_zero_fhz_m;                // '<S6>/Get Parameter4'
  real_T I_freq_hz_e;                  // '<S6>/Get Parameter3'
  real_T LPF_fhz_n;                    // '<S6>/Get Parameter6'
  real_T LL_pole_fhz;                  // '<S6>/Get Parameter13'
  real_T LL_zero_fhz;                  // '<S6>/Get Parameter12'
  real_T I_freq_hz;                    // '<S6>/Get Parameter11'
  real_T LPF_fhz;                      // '<S6>/Get Parameter14'
  real_T FilterDifferentiatorTF_m;     // '<S67>/Filter Differentiator TF'
  real_T FilterDifferentiatorTF_pe;    // '<S168>/Filter Differentiator TF'
  real_T DOut_i;                       // '<S159>/DOut'
  real_T DOut_g;                       // '<S156>/DOut'
  real_T DOut_m1;                      // '<S149>/DOut'
  real_T DOut_m0;                      // '<S146>/DOut'
  real_T DOut_hv;                      // '<S139>/DOut'
  real_T DOut_f;                       // '<S136>/DOut'
  real_T DOut_j;                       // '<S129>/DOut'
  real_T DOut_d;                       // '<S126>/DOut'
  real_T DOut_h;                       // '<S119>/DOut'
  real_T DOut_et;                      // '<S116>/DOut'
  real_T DOut_e;                       // '<S109>/DOut'
  real_T Switch2_e;                    // '<S41>/Switch2'
  real_T Yk1_h;                        // '<S35>/Delay Input2'
  real_T Switch2_l;                    // '<S38>/Switch2'
  real_T Yk1_k;                        // '<S34>/Delay Input2'
  real_T Switch2_o;                    // '<S37>/Switch2'
  real_T Yk1;                          // '<S33>/Delay Input2'
  real_T Switch2;                      // '<S36>/Switch2'
  real_T FilterDifferentiatorTF_tmp_kx;
  real_T FilterDifferentiatorTF_tmp_o;
  real_T FilterDifferentiatorTF_tmp_m;
  real_T FilterDifferentiatorTF_tmp_k;
  real_T FilterDifferentiatorTF_tmp_l;
  real_T FilterDifferentiatorTF_tmp_i;
  real_T FilterDifferentiatorTF_tmp_at;
  real_T FilterDifferentiatorTF_tmp_n;
  real_T FilterDifferentiatorTF_tmp_h;
  real_T FilterDifferentiatorTF_tmp_a;
  real_T Integrator_h;
  real_T Integrator_b;
  real_T Integrator_o;
  real_T Integrator_k1;
  real_T Integrator_e;
  real_T Integrator_l;
  real_T rtb_TSamp_idx_0;
  real_T rtb_TSamp_idx_1;
  real_T rtb_TSamp_idx_2;
  real_T rtb_Switch_idx_0;
  real_T rtb_Switch_idx_1;
  real_T rtb_Switch_idx_2;
  real_T rtb_Switch_idx_3;
  real_T t10_tmp;
  real_T t14_tmp;
  real_T t17_tmp;
  real_T t30_tmp;
  real_T t31_tmp;
  real_T t34_tmp;
  real_T rtb_TmpSignalConversionAtSFun_g;
  real_T Integrator_e_tmp;
  real_T rtb_DOut_f_tmp;
  real_T Integrator_k1_tmp;
  real_T rtb_DOut_m0_tmp;
  real_T Integrator_o_tmp;
  real_T rtb_DOut_g_tmp;
  real_T Integrator_b_tmp;
  real_T Integrator_h_tmp;
  real_T absxk;
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T t;
  real_T d0;
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  real_T temp;
  real_T nrm;
  real_T rt;
  real_T ztest;
  real_T smm1;
  real_T emm1;
  real_T sqds;
  real_T shift;
  real_T roe;
  real_T absa;
  real_T absb;
  real_T scale;
  real_T ads;
  real_T bds;
  real_T scale_g;
  real_T absxk_m;
  real_T t_n;
  real_T scale_p;
  real_T absxk_l;
  real_T t_j;
  real_T c;
  real_T scale_d;
  int32_T ECAT_Interface_i;            // '<S5>/ECAT_Interface'
  int32_T k;
  int32_T i0;
  int32_T i1;
  int32_T rtb_Gtl_tmp;
  int32_T k_g;
  int32_T ixstart;
  int32_T i2;
  int32_T kDrop_tmp;
  int32_T U_tmp;
  int32_T i;
  int32_T j;
  int32_T i3;
  int32_T i4;
  int32_T d_i;
  int32_T itau;
  int32_T iaii;
  int32_T lastv;
  int32_T lastc;
  int32_T coltop;
  int32_T ia;
  int32_T i_i;
  int32_T i_l;
  int32_T knt;
  int32_T lastv_d;
  int32_T lastc_d;
  int32_T coltop_l;
  int32_T ia_o;
  int32_T q;
  int32_T qq;
  uint16_T BitwiseOperator1;           // '<S21>/Bitwise Operator1'
  uint16_T BitwiseOperator2;           // '<S21>/Bitwise Operator2'
  boolean_T SourceBlock_o1;            // '<S17>/SourceBlock'
} B_ROPOD_4Wheel_Tdistkinb_cntr_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_bl_ic_T obj; // '<S9>/Get Parameter'
  robotics_slros_internal_bl_ic_T obj_f;// '<S9>/Get Parameter1'
  robotics_slros_internal_bl_ic_T obj_n;// '<S9>/Get Parameter2'
  robotics_slros_internal_bl_ic_T obj_i;// '<S9>/Get Parameter3'
  robotics_slros_internal_bl_ic_T obj_k;// '<S8>/Get Parameter1'
  robotics_slros_internal_bl_ic_T obj_m;// '<S8>/Get Parameter3'
  robotics_slros_internal_bl_ic_T obj_i4;// '<S8>/Get Parameter4'
  robotics_slros_internal_bl_ic_T obj_b;// '<S8>/Get Parameter5'
  robotics_slros_internal_bl_ic_T obj_h;// '<S8>/Get Parameter2'
  robotics_slros_internal_bl_ic_T obj_bg;// '<S8>/Get Parameter'
  robotics_slros_internal_bl_ic_T obj_be;// '<S7>/Get Parameter'
  robotics_slros_internal_bl_ic_T obj_l;// '<S7>/Get Parameter11'
  robotics_slros_internal_bl_ic_T obj_fa;// '<S7>/Get Parameter12'
  robotics_slros_internal_bl_ic_T obj_p;// '<S7>/Get Parameter13'
  robotics_slros_internal_bl_ic_T obj_l1;// '<S7>/Get Parameter14'
  robotics_slros_internal_bl_ic_T obj_pe;// '<S7>/Get Parameter15'
  robotics_slros_internal_bl_ic_T obj_g;// '<S7>/Get Parameter16'
  robotics_slros_internal_bl_ic_T obj_bc;// '<S7>/Get Parameter17'
  robotics_slros_internal_bl_ic_T obj_hv;// '<S7>/Get Parameter1'
  robotics_slros_internal_bl_ic_T obj_j;// '<S7>/Get Parameter2'
  robotics_slros_internal_bl_ic_T obj_e;// '<S7>/Get Parameter3'
  robotics_slros_internal_bl_ic_T obj_jj;// '<S7>/Get Parameter4'
  robotics_slros_internal_bl_ic_T obj_d;// '<S7>/Get Parameter5'
  robotics_slros_internal_bl_ic_T obj_ep;// '<S7>/Get Parameter6'
  robotics_slros_internal_bl_ic_T obj_lm;// '<S7>/Get Parameter7'
  robotics_slros_internal_bl_ic_T obj_ew;// '<S7>/Get Parameter8'
  robotics_slros_internal_bl_ic_T obj_nj;// '<S7>/Get Parameter9'
  robotics_slros_internal_bl_ic_T obj_b1;// '<S7>/Get Parameter10'
  robotics_slros_internal_bl_ic_T obj_ft;// '<S6>/Get Parameter14'
  robotics_slros_internal_bl_ic_T obj_pz;// '<S6>/Get Parameter10'
  robotics_slros_internal_bl_ic_T obj_jt;// '<S6>/Get Parameter11'
  robotics_slros_internal_bl_ic_T obj_da;// '<S6>/Get Parameter12'
  robotics_slros_internal_bl_ic_T obj_e5;// '<S6>/Get Parameter13'
  robotics_slros_internal_bl_ic_T obj_c;// '<S6>/Get Parameter6'
  robotics_slros_internal_bl_ic_T obj_mn;// '<S6>/Get Parameter'
  robotics_slros_internal_bl_ic_T obj_d0;// '<S6>/Get Parameter3'
  robotics_slros_internal_bl_ic_T obj_ey;// '<S6>/Get Parameter4'
  robotics_slros_internal_bl_ic_T obj_g0;// '<S6>/Get Parameter5'
  robotics_slros_internal_bl_ic_T obj_ch;// '<S6>/Get Parameter9'
  robotics_slros_internal_bl_ic_T obj_fy;// '<S6>/Get Parameter1'
  robotics_slros_internal_bl_ic_T obj_hq;// '<S6>/Get Parameter2'
  robotics_slros_internal_bl_ic_T obj_eq;// '<S6>/Get Parameter7'
  robotics_slros_internal_bl_ic_T obj_a;// '<S6>/Get Parameter8'
  real_T EnabledDelay_DSTATE;          // '<S10>/Enabled Delay'
  real_T DelayInput2_DSTATE;           // '<S33>/Delay Input2'
  real_T DelayInput2_DSTATE_f;         // '<S34>/Delay Input2'
  real_T DelayInput2_DSTATE_k;         // '<S35>/Delay Input2'
  real_T FilterDifferentiatorTF_states;// '<S98>/Filter Differentiator TF'
  real_T Integrator_DSTATE;            // '<S96>/Integrator'
  real_T Integrator_DSTATE_l;          // '<S99>/Integrator'
  real_T FilterDifferentiatorTF_states_l;// '<S100>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE;             // '<S94>/Unit Delay'
  real_T FilterDifferentiatorTF_states_f;// '<S108>/Filter Differentiator TF'
  real_T Integrator_DSTATE_b;          // '<S106>/Integrator'
  real_T Integrator_DSTATE_f;          // '<S109>/Integrator'
  real_T FilterDifferentiatorTF_states_o;// '<S110>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_d;           // '<S104>/Unit Delay'
  real_T FilterDifferentiatorTF_states_k;// '<S118>/Filter Differentiator TF'
  real_T Integrator_DSTATE_o;          // '<S116>/Integrator'
  real_T Integrator_DSTATE_fl;         // '<S119>/Integrator'
  real_T FilterDifferentiatorTF_states_g;// '<S120>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_e;           // '<S114>/Unit Delay'
  real_T FilterDifferentiatorTF_state_gl;// '<S128>/Filter Differentiator TF'
  real_T Integrator_DSTATE_k;          // '<S126>/Integrator'
  real_T Integrator_DSTATE_bo;         // '<S129>/Integrator'
  real_T FilterDifferentiatorTF_states_h;// '<S130>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_h;           // '<S124>/Unit Delay'
  real_T FilterDifferentiatorTF_states_i;// '<S138>/Filter Differentiator TF'
  real_T Integrator_DSTATE_h;          // '<S136>/Integrator'
  real_T Integrator_DSTATE_j;          // '<S139>/Integrator'
  real_T FilterDifferentiatorTF_states_b;// '<S140>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_k;           // '<S134>/Unit Delay'
  real_T FilterDifferentiatorTF_state_fs;// '<S148>/Filter Differentiator TF'
  real_T Integrator_DSTATE_ji;         // '<S146>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S149>/Integrator'
  real_T FilterDifferentiatorTF_state_fw;// '<S150>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_o;           // '<S144>/Unit Delay'
  real_T FilterDifferentiatorTF_states_e;// '<S158>/Filter Differentiator TF'
  real_T Integrator_DSTATE_m;          // '<S156>/Integrator'
  real_T Integrator_DSTATE_bd;         // '<S159>/Integrator'
  real_T FilterDifferentiatorTF_state_e2;// '<S160>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_i;           // '<S154>/Unit Delay'
  real_T FilterDifferentiatorTF_state_ir;// '<S168>/Filter Differentiator TF'
  real_T Integrator_DSTATE_c;          // '<S166>/Integrator'
  real_T Integrator_DSTATE_ft;         // '<S169>/Integrator'
  real_T FilterDifferentiatorTF_states_d;// '<S170>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_c;           // '<S164>/Unit Delay'
  real_T UD_DSTATE[3];                 // '<S46>/UD'
  real_T FilterDifferentiatorTF_state_ku;// '<S57>/Filter Differentiator TF'
  real_T Integrator_DSTATE_mx;         // '<S55>/Integrator'
  real_T Integrator_DSTATE_jf;         // '<S58>/Integrator'
  real_T FilterDifferentiatorTF_states_j;// '<S59>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_g;           // '<S53>/Unit Delay'
  real_T FilterDifferentiatorTF_state_fc;// '<S67>/Filter Differentiator TF'
  real_T Integrator_DSTATE_c5;         // '<S65>/Integrator'
  real_T Integrator_DSTATE_p;          // '<S68>/Integrator'
  real_T FilterDifferentiatorTF_state_dl;// '<S69>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_gb;          // '<S63>/Unit Delay'
  real_T FilterDifferentiatorTF_state_ei;// '<S77>/Filter Differentiator TF'
  real_T Integrator_DSTATE_d;          // '<S75>/Integrator'
  real_T Integrator_DSTATE_os;         // '<S78>/Integrator'
  real_T FilterDifferentiatorTF_states_p;// '<S79>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_f;           // '<S73>/Unit Delay'
  real_T DiscreteTimeIntegrator_DSTATE[3];// '<S2>/Discrete-Time Integrator'
  real_T ECAT_Interface_RWORK[13];     // '<S5>/ECAT_Interface'
  robotics_slcore_internal_bloc_T obj_nv;// '<S3>/Coordinate Transformation Conversion' 
  robotics_slros_internal_block_T obj_hy;// '<S16>/SinkBlock'
  robotics_slros_internal_blo_i_T obj_a1;// '<S17>/SourceBlock'
  int8_T Integrator_PrevResetState;    // '<S96>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S106>/Integrator'
  int8_T Integrator_PrevResetState_d;  // '<S116>/Integrator'
  int8_T Integrator_PrevResetState_f;  // '<S126>/Integrator'
  int8_T Integrator_PrevResetState_dm; // '<S136>/Integrator'
  int8_T Integrator_PrevResetState_n;  // '<S146>/Integrator'
  int8_T Integrator_PrevResetState_p;  // '<S156>/Integrator'
  int8_T Integrator_PrevResetState_k;  // '<S166>/Integrator'
  int8_T Integrator_PrevResetState_fn; // '<S55>/Integrator'
  int8_T Integrator_PrevResetState_o;  // '<S65>/Integrator'
  int8_T Integrator_PrevResetState_m;  // '<S75>/Integrator'
} DW_ROPOD_4Wheel_Tdistkinb_cntr_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState FilterDifferentiatorTF_Reset_ZC;// '<S98>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__i;// '<S108>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__c;// '<S118>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__k;// '<S128>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__l;// '<S138>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__j;// '<S148>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__f;// '<S158>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__h;// '<S168>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_l3;// '<S57>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_l5;// '<S67>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__g;// '<S77>/Filter Differentiator TF' 
} PrevZCX_ROPOD_4Wheel_Tdistkinb_cntr_T;

// Parameters (auto storage)
struct P_ROPOD_4Wheel_Tdistkinb_cntr_T_ {
  real_T FFtheta_intia;                // Variable: FFtheta_intia
                                       //  Referenced by: '<S43>/Gain2'

  real_T FFxy_mass;                    // Variable: FFxy_mass
                                       //  Referenced by:
                                       //    '<S43>/Gain'
                                       //    '<S43>/Gain1'

  real_T SW_COM1_ENABLE1;              // Variable: SW_COM1_ENABLE1
                                       //  Referenced by: '<S21>/Constant3'

  real_T SW_COM1_ENABLE2;              // Variable: SW_COM1_ENABLE2
                                       //  Referenced by: '<S21>/Constant4'

  real_T SW_COM1_MODE_TORQUE;          // Variable: SW_COM1_MODE_TORQUE
                                       //  Referenced by: '<S19>/Constant13'

  real_T SW_COM1_MODE_VELOCITY;        // Variable: SW_COM1_MODE_VELOCITY
                                       //  Referenced by: '<S19>/Constant5'

  real_T SW_COM1_USE_TS;               // Variable: SW_COM1_USE_TS
                                       //  Referenced by: '<S21>/Constant11'

  real_T Taucompfactor;                // Variable: Taucompfactor
                                       //  Referenced by:
                                       //    '<S21>/Gain20'
                                       //    '<S26>/Gain1'
                                       //    '<S26>/Gain2'

  real_T Tinit;                        // Variable: Tinit
                                       //  Referenced by: '<S1>/Constant'

  real_T Tsp;                          // Variable: Tsp
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

  real_T max_hw_tau;                   // Variable: max_hw_tau
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

  real_T max_ropod_sw_force;           // Variable: max_ropod_sw_force
                                       //  Referenced by:
                                       //    '<S55>/Saturate'
                                       //    '<S65>/Saturate'
                                       //    '<S56>/DeadZone'
                                       //    '<S66>/DeadZone'

  real_T max_ropod_sw_tau;             // Variable: max_ropod_sw_tau
                                       //  Referenced by:
                                       //    '<S75>/Saturate'
                                       //    '<S76>/DeadZone'

  real_T sw_tau_2_curr;                // Variable: sw_tau_2_curr
                                       //  Referenced by:
                                       //    '<S26>/Gain3'
                                       //    '<S44>/Gain3'

  real_T DiscreteDerivative_ICPrevScaled;// Mask Parameter: DiscreteDerivative_ICPrevScaled
                                         //  Referenced by: '<S46>/UD'

  real_T CompareToConstant_const;      // Mask Parameter: CompareToConstant_const
                                       //  Referenced by: '<S32>/Constant'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S15>/Constant'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                                 //  Referenced by: '<S18>/Out1'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                      //  Referenced by: '<S17>/Constant'

  real_T MovinfaroundSWaxiscenter_Value[8];// Expression: [2 -2 2 -2 2 -2 2 -2]
                                           //  Referenced by: '<S19>/Movinf around SW axis center'

  real_T signconvention_Gain;          // Expression: -1
                                       //  Referenced by: '<S20>/sign convention'

  real_T signconvention1_Gain;         // Expression: -1
                                       //  Referenced by: '<S20>/sign convention1'

  real_T signconvention2_Gain;         // Expression: -1
                                       //  Referenced by: '<S20>/sign convention2'

  real_T signconvention3_Gain;         // Expression: -1
                                       //  Referenced by: '<S20>/sign convention3'

  real_T Constant2_Value[8];           // Expression: [0 0 0 0 0 0 0 0]
                                       //  Referenced by: '<S20>/Constant2'

  real_T Constant_Value_l[4];          // Expression: [0 0 0 0]
                                       //  Referenced by: '<S20>/Constant'

  real_T Constant2_Value_h;            // Expression: 0
                                       //  Referenced by: '<S10>/Constant2'

  real_T Constant1_Value;              // Expression: 0
                                       //  Referenced by: '<S10>/Constant1'

  real_T Constant_Value_g;             // Expression: 0
                                       //  Referenced by: '<S10>/Constant'

  real_T ECAT_Interface_P1_Size[2];    // Computed Parameter: ECAT_Interface_P1_Size
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T ECAT_Interface_P1[4];         // Computed Parameter: ECAT_Interface_P1
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T ECAT_Interface_P2_Size[2];    // Computed Parameter: ECAT_Interface_P2_Size
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T ECAT_Interface_P2;            // Expression: TS
                                       //  Referenced by: '<S5>/ECAT_Interface'

  real_T Gain2_Gain;                   // Expression: 2*pi
                                       //  Referenced by: '<S83>/Gain2'

  real_T Constant_Value_i;             // Expression: tau
                                       //  Referenced by: '<S94>/Constant'

  real_T SFunction_P1_Size[2];         // Computed Parameter: SFunction_P1_Size
                                       //  Referenced by: '<S28>/S-Function'

  real_T SFunction_P1;                 // Expression: link_id
                                       //  Referenced by: '<S28>/S-Function'

  real_T SFunction_P1_Size_a[2];       // Computed Parameter: SFunction_P1_Size_a
                                       //  Referenced by: '<S29>/S-Function'

  real_T SFunction_P1_p;               // Expression: link_id
                                       //  Referenced by: '<S29>/S-Function'

  real_T SFunction_P1_Size_b[2];       // Computed Parameter: SFunction_P1_Size_b
                                       //  Referenced by: '<S30>/S-Function'

  real_T SFunction_P1_f;               // Expression: link_id
                                       //  Referenced by: '<S30>/S-Function'

  real_T SFunction_P1_Size_g[2];       // Computed Parameter: SFunction_P1_Size_g
                                       //  Referenced by: '<S31>/S-Function'

  real_T SFunction_P1_f5;              // Expression: link_id
                                       //  Referenced by: '<S31>/S-Function'

  real_T sampletime_WtEt;              // Computed Parameter: sampletime_WtEt
                                       //  Referenced by: '<S33>/sample time'

  real_T EnabledDelay_InitialCondition;// Expression: 0.0
                                       //  Referenced by: '<S10>/Enabled Delay'

  real_T Gain1_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain1'

  real_T DelayInput2_InitialCondition; // Expression: 0
                                       //  Referenced by: '<S33>/Delay Input2'

  real_T Gain_Gain;                    // Expression: -1
                                       //  Referenced by: '<S10>/Gain'

  real_T sampletime_WtEt_j;            // Computed Parameter: sampletime_WtEt_j
                                       //  Referenced by: '<S34>/sample time'

  real_T Gain3_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain3'

  real_T DelayInput2_InitialCondition_o;// Expression: 0
                                        //  Referenced by: '<S34>/Delay Input2'

  real_T Gain2_Gain_d;                 // Expression: -1
                                       //  Referenced by: '<S10>/Gain2'

  real_T sampletime_WtEt_b;            // Computed Parameter: sampletime_WtEt_b
                                       //  Referenced by: '<S35>/sample time'

  real_T Gain5_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain5'

  real_T DelayInput2_InitialCondition_c;// Expression: 0
                                        //  Referenced by: '<S35>/Delay Input2'

  real_T Gain4_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain4'

  real_T Constant_Value_n[8];          // Expression: [1 1 1 1 1 1 1 1]
                                       //  Referenced by: '<Root>/Constant'

  real_T Constant4_Value;              // Expression: 1
                                       //  Referenced by: '<S92>/Constant4'

  real_T Constant_Value_j;             // Expression: 0
                                       //  Referenced by: '<S96>/Constant'

  real_T Constant_Value_o;             // Expression: 0
                                       //  Referenced by: '<S92>/Constant'

  real_T Constant_Value_nr;            // Expression: 1
                                       //  Referenced by: '<S98>/Constant'

  real_T Constant5_Value;              // Expression: 0
                                       //  Referenced by: '<S92>/Constant5'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                       //  Referenced by: '<S98>/TSamp'

  real_T FilterDifferentiatorTF_NumCoef[2];// Expression: [1 -1]
                                           //  Referenced by: '<S98>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_InitialS;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S98>/Filter Differentiator TF'

  real_T ZeroGain_Gain;                // Expression: 0
                                       //  Referenced by: '<S97>/ZeroGain'

  real_T Gain2_Gain_i;                 // Expression: 2*pi
                                       //  Referenced by: '<S92>/Gain2'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                       //  Referenced by: '<S96>/Integrator'

  real_T Integrator_IC;                // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S96>/Integrator'

  real_T Constant4_Value_k;            // Expression: 1
                                       //  Referenced by: '<S93>/Constant4'

  real_T Constant2_Value_m;            // Expression: 0
                                       //  Referenced by: '<S93>/Constant2'

  real_T Integrator_gainval_i;         // Computed Parameter: Integrator_gainval_i
                                       //  Referenced by: '<S99>/Integrator'

  real_T Integrator_IC_b;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S99>/Integrator'

  real_T Gain2_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S93>/Gain2'

  real_T Constant1_Value_d;            // Expression: 1
                                       //  Referenced by: '<S93>/Constant1'

  real_T Gain1_Gain_c;                 // Expression: 2*pi
                                       //  Referenced by: '<S93>/Gain1'

  real_T Constant_Value_b;             // Expression: 1
                                       //  Referenced by: '<S100>/Constant'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                       //  Referenced by: '<S100>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_a[2];// Expression: [1 -1]
                                            //  Referenced by: '<S100>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_p;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S100>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                       //  Referenced by: '<S94>/Unit Delay'

  real_T Gain2_Gain_a;                 // Expression: 2*pi
                                       //  Referenced by: '<S84>/Gain2'

  real_T Constant_Value_m;             // Expression: tau
                                       //  Referenced by: '<S104>/Constant'

  real_T Constant4_Value_c;            // Expression: 1
                                       //  Referenced by: '<S102>/Constant4'

  real_T Constant_Value_k;             // Expression: 0
                                       //  Referenced by: '<S106>/Constant'

  real_T Constant_Value_c;             // Expression: 0
                                       //  Referenced by: '<S102>/Constant'

  real_T Constant_Value_gk;            // Expression: 1
                                       //  Referenced by: '<S108>/Constant'

  real_T Constant5_Value_j;            // Expression: 0
                                       //  Referenced by: '<S102>/Constant5'

  real_T TSamp_WtEt_a;                 // Computed Parameter: TSamp_WtEt_a
                                       //  Referenced by: '<S108>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_c[2];// Expression: [1 -1]
                                            //  Referenced by: '<S108>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_f;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S108>/Filter Differentiator TF'

  real_T ZeroGain_Gain_m;              // Expression: 0
                                       //  Referenced by: '<S107>/ZeroGain'

  real_T Gain2_Gain_i2;                // Expression: 2*pi
                                       //  Referenced by: '<S102>/Gain2'

  real_T Integrator_gainval_a;         // Computed Parameter: Integrator_gainval_a
                                       //  Referenced by: '<S106>/Integrator'

  real_T Integrator_IC_bi;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S106>/Integrator'

  real_T Constant4_Value_d;            // Expression: 1
                                       //  Referenced by: '<S103>/Constant4'

  real_T Constant2_Value_c;            // Expression: 0
                                       //  Referenced by: '<S103>/Constant2'

  real_T Integrator_gainval_g;         // Computed Parameter: Integrator_gainval_g
                                       //  Referenced by: '<S109>/Integrator'

  real_T Integrator_IC_o;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S109>/Integrator'

  real_T Gain2_Gain_h;                 // Expression: 2*pi
                                       //  Referenced by: '<S103>/Gain2'

  real_T Constant1_Value_i;            // Expression: 1
                                       //  Referenced by: '<S103>/Constant1'

  real_T Gain1_Gain_i;                 // Expression: 2*pi
                                       //  Referenced by: '<S103>/Gain1'

  real_T Constant_Value_lu;            // Expression: 1
                                       //  Referenced by: '<S110>/Constant'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                       //  Referenced by: '<S110>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_i[2];// Expression: [1 -1]
                                            //  Referenced by: '<S110>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_d;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S110>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_i; // Expression: 0
                                       //  Referenced by: '<S104>/Unit Delay'

  real_T Gain2_Gain_m;                 // Expression: 2*pi
                                       //  Referenced by: '<S85>/Gain2'

  real_T Constant_Value_eq;            // Expression: tau
                                       //  Referenced by: '<S114>/Constant'

  real_T Constant4_Value_a;            // Expression: 1
                                       //  Referenced by: '<S112>/Constant4'

  real_T Constant_Value_gw;            // Expression: 0
                                       //  Referenced by: '<S116>/Constant'

  real_T Constant_Value_oz;            // Expression: 0
                                       //  Referenced by: '<S112>/Constant'

  real_T Constant_Value_ed;            // Expression: 1
                                       //  Referenced by: '<S118>/Constant'

  real_T Constant5_Value_l;            // Expression: 0
                                       //  Referenced by: '<S112>/Constant5'

  real_T TSamp_WtEt_j;                 // Computed Parameter: TSamp_WtEt_j
                                       //  Referenced by: '<S118>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_c1[2];// Expression: [1 -1]
                                            //  Referenced by: '<S118>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_db;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S118>/Filter Differentiator TF'

  real_T ZeroGain_Gain_n;              // Expression: 0
                                       //  Referenced by: '<S117>/ZeroGain'

  real_T Gain2_Gain_e;                 // Expression: 2*pi
                                       //  Referenced by: '<S112>/Gain2'

  real_T Integrator_gainval_c;         // Computed Parameter: Integrator_gainval_c
                                       //  Referenced by: '<S116>/Integrator'

  real_T Integrator_IC_a;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S116>/Integrator'

  real_T Constant4_Value_e;            // Expression: 1
                                       //  Referenced by: '<S113>/Constant4'

  real_T Constant2_Value_n;            // Expression: 0
                                       //  Referenced by: '<S113>/Constant2'

  real_T Integrator_gainval_m;         // Computed Parameter: Integrator_gainval_m
                                       //  Referenced by: '<S119>/Integrator'

  real_T Integrator_IC_e;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S119>/Integrator'

  real_T Gain2_Gain_l;                 // Expression: 2*pi
                                       //  Referenced by: '<S113>/Gain2'

  real_T Constant1_Value_ix;           // Expression: 1
                                       //  Referenced by: '<S113>/Constant1'

  real_T Gain1_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S113>/Gain1'

  real_T Constant_Value_c2;            // Expression: 1
                                       //  Referenced by: '<S120>/Constant'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                       //  Referenced by: '<S120>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_l[2];// Expression: [1 -1]
                                            //  Referenced by: '<S120>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_pj;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S120>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_k; // Expression: 0
                                       //  Referenced by: '<S114>/Unit Delay'

  real_T Gain2_Gain_g;                 // Expression: 2*pi
                                       //  Referenced by: '<S86>/Gain2'

  real_T Constant_Value_co;            // Expression: tau
                                       //  Referenced by: '<S124>/Constant'

  real_T Constant4_Value_ed;           // Expression: 1
                                       //  Referenced by: '<S122>/Constant4'

  real_T Constant_Value_oi;            // Expression: 0
                                       //  Referenced by: '<S126>/Constant'

  real_T Constant_Value_f;             // Expression: 0
                                       //  Referenced by: '<S122>/Constant'

  real_T Constant_Value_fq;            // Expression: 1
                                       //  Referenced by: '<S128>/Constant'

  real_T Constant5_Value_d;            // Expression: 0
                                       //  Referenced by: '<S122>/Constant5'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                       //  Referenced by: '<S128>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_p[2];// Expression: [1 -1]
                                            //  Referenced by: '<S128>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_a;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S128>/Filter Differentiator TF'

  real_T ZeroGain_Gain_k;              // Expression: 0
                                       //  Referenced by: '<S127>/ZeroGain'

  real_T Gain2_Gain_j;                 // Expression: 2*pi
                                       //  Referenced by: '<S122>/Gain2'

  real_T Integrator_gainval_k;         // Computed Parameter: Integrator_gainval_k
                                       //  Referenced by: '<S126>/Integrator'

  real_T Integrator_IC_h;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S126>/Integrator'

  real_T Constant4_Value_dr;           // Expression: 1
                                       //  Referenced by: '<S123>/Constant4'

  real_T Constant2_Value_d;            // Expression: 0
                                       //  Referenced by: '<S123>/Constant2'

  real_T Integrator_gainval_b;         // Computed Parameter: Integrator_gainval_b
                                       //  Referenced by: '<S129>/Integrator'

  real_T Integrator_IC_be;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S129>/Integrator'

  real_T Gain2_Gain_gn;                // Expression: 2*pi
                                       //  Referenced by: '<S123>/Gain2'

  real_T Constant1_Value_j;            // Expression: 1
                                       //  Referenced by: '<S123>/Constant1'

  real_T Gain1_Gain_k;                 // Expression: 2*pi
                                       //  Referenced by: '<S123>/Gain1'

  real_T Constant_Value_d;             // Expression: 1
                                       //  Referenced by: '<S130>/Constant'

  real_T TSamp_WtEt_fj;                // Computed Parameter: TSamp_WtEt_fj
                                       //  Referenced by: '<S130>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_l3[2];// Expression: [1 -1]
                                            //  Referenced by: '<S130>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_j;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S130>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_n; // Expression: 0
                                       //  Referenced by: '<S124>/Unit Delay'

  real_T Gain2_Gain_mi;                // Expression: 2*pi
                                       //  Referenced by: '<S87>/Gain2'

  real_T Constant_Value_cs;            // Expression: tau
                                       //  Referenced by: '<S134>/Constant'

  real_T Constant4_Value_dg;           // Expression: 1
                                       //  Referenced by: '<S132>/Constant4'

  real_T Constant_Value_op;            // Expression: 0
                                       //  Referenced by: '<S136>/Constant'

  real_T Constant_Value_l2;            // Expression: 0
                                       //  Referenced by: '<S132>/Constant'

  real_T Constant_Value_p;             // Expression: 1
                                       //  Referenced by: '<S138>/Constant'

  real_T Constant5_Value_n;            // Expression: 0
                                       //  Referenced by: '<S132>/Constant5'

  real_T TSamp_WtEt_g;                 // Computed Parameter: TSamp_WtEt_g
                                       //  Referenced by: '<S138>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_d[2];// Expression: [1 -1]
                                            //  Referenced by: '<S138>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_l;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S138>/Filter Differentiator TF'

  real_T ZeroGain_Gain_h;              // Expression: 0
                                       //  Referenced by: '<S137>/ZeroGain'

  real_T Gain2_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S132>/Gain2'

  real_T Integrator_gainval_bp;        // Computed Parameter: Integrator_gainval_bp
                                       //  Referenced by: '<S136>/Integrator'

  real_T Integrator_IC_k;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S136>/Integrator'

  real_T Constant4_Value_aw;           // Expression: 1
                                       //  Referenced by: '<S133>/Constant4'

  real_T Constant2_Value_k;            // Expression: 0
                                       //  Referenced by: '<S133>/Constant2'

  real_T Integrator_gainval_j;         // Computed Parameter: Integrator_gainval_j
                                       //  Referenced by: '<S139>/Integrator'

  real_T Integrator_IC_kh;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S139>/Integrator'

  real_T Gain2_Gain_be;                // Expression: 2*pi
                                       //  Referenced by: '<S133>/Gain2'

  real_T Constant1_Value_ji;           // Expression: 1
                                       //  Referenced by: '<S133>/Constant1'

  real_T Gain1_Gain_d;                 // Expression: 2*pi
                                       //  Referenced by: '<S133>/Gain1'

  real_T Constant_Value_ev;            // Expression: 1
                                       //  Referenced by: '<S140>/Constant'

  real_T TSamp_WtEt_it;                // Computed Parameter: TSamp_WtEt_it
                                       //  Referenced by: '<S140>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_j[2];// Expression: [1 -1]
                                            //  Referenced by: '<S140>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_h;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S140>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_m; // Expression: 0
                                       //  Referenced by: '<S134>/Unit Delay'

  real_T Gain2_Gain_p;                 // Expression: 2*pi
                                       //  Referenced by: '<S88>/Gain2'

  real_T Constant_Value_bl;            // Expression: tau
                                       //  Referenced by: '<S144>/Constant'

  real_T Constant4_Value_h;            // Expression: 1
                                       //  Referenced by: '<S142>/Constant4'

  real_T Constant_Value_bu;            // Expression: 0
                                       //  Referenced by: '<S146>/Constant'

  real_T Constant_Value_h;             // Expression: 0
                                       //  Referenced by: '<S142>/Constant'

  real_T Constant_Value_cs4;           // Expression: 1
                                       //  Referenced by: '<S148>/Constant'

  real_T Constant5_Value_e;            // Expression: 0
                                       //  Referenced by: '<S142>/Constant5'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                       //  Referenced by: '<S148>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_e[2];// Expression: [1 -1]
                                            //  Referenced by: '<S148>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_fq;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S148>/Filter Differentiator TF'

  real_T ZeroGain_Gain_l;              // Expression: 0
                                       //  Referenced by: '<S147>/ZeroGain'

  real_T Gain2_Gain_ie;                // Expression: 2*pi
                                       //  Referenced by: '<S142>/Gain2'

  real_T Integrator_gainval_n;         // Computed Parameter: Integrator_gainval_n
                                       //  Referenced by: '<S146>/Integrator'

  real_T Integrator_IC_l;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S146>/Integrator'

  real_T Constant4_Value_f;            // Expression: 1
                                       //  Referenced by: '<S143>/Constant4'

  real_T Constant2_Value_p;            // Expression: 0
                                       //  Referenced by: '<S143>/Constant2'

  real_T Integrator_gainval_f;         // Computed Parameter: Integrator_gainval_f
                                       //  Referenced by: '<S149>/Integrator'

  real_T Integrator_IC_lm;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S149>/Integrator'

  real_T Gain2_Gain_pp;                // Expression: 2*pi
                                       //  Referenced by: '<S143>/Gain2'

  real_T Constant1_Value_p;            // Expression: 1
                                       //  Referenced by: '<S143>/Constant1'

  real_T Gain1_Gain_be;                // Expression: 2*pi
                                       //  Referenced by: '<S143>/Gain1'

  real_T Constant_Value_d0;            // Expression: 1
                                       //  Referenced by: '<S150>/Constant'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                       //  Referenced by: '<S150>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_dm[2];// Expression: [1 -1]
                                            //  Referenced by: '<S150>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_i;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S150>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_a; // Expression: 0
                                       //  Referenced by: '<S144>/Unit Delay'

  real_T Gain2_Gain_c;                 // Expression: 2*pi
                                       //  Referenced by: '<S89>/Gain2'

  real_T Constant_Value_h5;            // Expression: tau
                                       //  Referenced by: '<S154>/Constant'

  real_T Constant4_Value_h3;           // Expression: 1
                                       //  Referenced by: '<S152>/Constant4'

  real_T Constant_Value_gf;            // Expression: 0
                                       //  Referenced by: '<S156>/Constant'

  real_T Constant_Value_a;             // Expression: 0
                                       //  Referenced by: '<S152>/Constant'

  real_T Constant_Value_go;            // Expression: 1
                                       //  Referenced by: '<S158>/Constant'

  real_T Constant5_Value_p;            // Expression: 0
                                       //  Referenced by: '<S152>/Constant5'

  real_T TSamp_WtEt_l;                 // Computed Parameter: TSamp_WtEt_l
                                       //  Referenced by: '<S158>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_n[2];// Expression: [1 -1]
                                            //  Referenced by: '<S158>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_hh;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S158>/Filter Differentiator TF'

  real_T ZeroGain_Gain_e;              // Expression: 0
                                       //  Referenced by: '<S157>/ZeroGain'

  real_T Gain2_Gain_n;                 // Expression: 2*pi
                                       //  Referenced by: '<S152>/Gain2'

  real_T Integrator_gainval_l;         // Computed Parameter: Integrator_gainval_l
                                       //  Referenced by: '<S156>/Integrator'

  real_T Integrator_IC_ed;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S156>/Integrator'

  real_T Constant4_Value_o;            // Expression: 1
                                       //  Referenced by: '<S153>/Constant4'

  real_T Constant2_Value_nj;           // Expression: 0
                                       //  Referenced by: '<S153>/Constant2'

  real_T Integrator_gainval_jz;        // Computed Parameter: Integrator_gainval_jz
                                       //  Referenced by: '<S159>/Integrator'

  real_T Integrator_IC_l1;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S159>/Integrator'

  real_T Gain2_Gain_a1;                // Expression: 2*pi
                                       //  Referenced by: '<S153>/Gain2'

  real_T Constant1_Value_a;            // Expression: 1
                                       //  Referenced by: '<S153>/Constant1'

  real_T Gain1_Gain_n;                 // Expression: 2*pi
                                       //  Referenced by: '<S153>/Gain1'

  real_T Constant_Value_kx;            // Expression: 1
                                       //  Referenced by: '<S160>/Constant'

  real_T TSamp_WtEt_aa;                // Computed Parameter: TSamp_WtEt_aa
                                       //  Referenced by: '<S160>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_ea[2];// Expression: [1 -1]
                                            //  Referenced by: '<S160>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_lr;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S160>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_e; // Expression: 0
                                       //  Referenced by: '<S154>/Unit Delay'

  real_T Gain2_Gain_gl;                // Expression: 2*pi
                                       //  Referenced by: '<S90>/Gain2'

  real_T Constant_Value_ov;            // Expression: tau
                                       //  Referenced by: '<S164>/Constant'

  real_T Constant4_Value_n;            // Expression: 1
                                       //  Referenced by: '<S162>/Constant4'

  real_T Constant_Value_gh;            // Expression: 0
                                       //  Referenced by: '<S166>/Constant'

  real_T Constant_Value_jl;            // Expression: 0
                                       //  Referenced by: '<S162>/Constant'

  real_T Constant_Value_ck;            // Expression: 1
                                       //  Referenced by: '<S168>/Constant'

  real_T Constant5_Value_m;            // Expression: 0
                                       //  Referenced by: '<S162>/Constant5'

  real_T TSamp_WtEt_b;                 // Computed Parameter: TSamp_WtEt_b
                                       //  Referenced by: '<S168>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_ps[2];// Expression: [1 -1]
                                            //  Referenced by: '<S168>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_b;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S168>/Filter Differentiator TF'

  real_T ZeroGain_Gain_c;              // Expression: 0
                                       //  Referenced by: '<S167>/ZeroGain'

  real_T Gain2_Gain_iel;               // Expression: 2*pi
                                       //  Referenced by: '<S162>/Gain2'

  real_T Integrator_gainval_no;        // Computed Parameter: Integrator_gainval_no
                                       //  Referenced by: '<S166>/Integrator'

  real_T Integrator_IC_h1;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S166>/Integrator'

  real_T Constant4_Value_b;            // Expression: 1
                                       //  Referenced by: '<S163>/Constant4'

  real_T Constant2_Value_pf;           // Expression: 0
                                       //  Referenced by: '<S163>/Constant2'

  real_T Integrator_gainval_cs;        // Computed Parameter: Integrator_gainval_cs
                                       //  Referenced by: '<S169>/Integrator'

  real_T Integrator_IC_es;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S169>/Integrator'

  real_T Gain2_Gain_c1;                // Expression: 2*pi
                                       //  Referenced by: '<S163>/Gain2'

  real_T Constant1_Value_e;            // Expression: 1
                                       //  Referenced by: '<S163>/Constant1'

  real_T Gain1_Gain_a;                 // Expression: 2*pi
                                       //  Referenced by: '<S163>/Gain1'

  real_T Constant_Value_ov1;           // Expression: 1
                                       //  Referenced by: '<S170>/Constant'

  real_T TSamp_WtEt_g3;                // Computed Parameter: TSamp_WtEt_g3
                                       //  Referenced by: '<S170>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_k[2];// Expression: [1 -1]
                                            //  Referenced by: '<S170>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_hz;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S170>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_p; // Expression: 0
                                       //  Referenced by: '<S164>/Unit Delay'

  real_T TSamp_WtEt_om;                // Computed Parameter: TSamp_WtEt_om
                                       //  Referenced by: '<S46>/TSamp'

  real_T Gain2_Gain_cc;                // Expression: 2*pi
                                       //  Referenced by: '<S47>/Gain2'

  real_T Constant_Value_fp;            // Expression: tau
                                       //  Referenced by: '<S53>/Constant'

  real_T Constant4_Value_hd;           // Expression: 1
                                       //  Referenced by: '<S51>/Constant4'

  real_T Constant_Value_ah;            // Expression: 0
                                       //  Referenced by: '<S55>/Constant'

  real_T Constant_Value_e0;            // Expression: 0
                                       //  Referenced by: '<S51>/Constant'

  real_T Constant_Value_lp;            // Expression: 1
                                       //  Referenced by: '<S57>/Constant'

  real_T Constant5_Value_jy;           // Expression: 0
                                       //  Referenced by: '<S51>/Constant5'

  real_T TSamp_WtEt_je;                // Computed Parameter: TSamp_WtEt_je
                                       //  Referenced by: '<S57>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_jq[2];// Expression: [1 -1]
                                            //  Referenced by: '<S57>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ae;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S57>/Filter Differentiator TF'

  real_T ZeroGain_Gain_hq;             // Expression: 0
                                       //  Referenced by: '<S56>/ZeroGain'

  real_T Gain2_Gain_nx;                // Expression: 2*pi
                                       //  Referenced by: '<S51>/Gain2'

  real_T Integrator_gainval_gb;        // Computed Parameter: Integrator_gainval_gb
                                       //  Referenced by: '<S55>/Integrator'

  real_T Integrator_IC_m;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S55>/Integrator'

  real_T Constant4_Value_dt;           // Expression: 1
                                       //  Referenced by: '<S52>/Constant4'

  real_T Constant2_Value_ny;           // Expression: 0
                                       //  Referenced by: '<S52>/Constant2'

  real_T Integrator_gainval_k3;        // Computed Parameter: Integrator_gainval_k3
                                       //  Referenced by: '<S58>/Integrator'

  real_T Integrator_IC_g;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S58>/Integrator'

  real_T Gain2_Gain_gy;                // Expression: 2*pi
                                       //  Referenced by: '<S52>/Gain2'

  real_T Constant1_Value_j0;           // Expression: 1
                                       //  Referenced by: '<S52>/Constant1'

  real_T Gain1_Gain_e;                 // Expression: 2*pi
                                       //  Referenced by: '<S52>/Gain1'

  real_T Constant_Value_az;            // Expression: 1
                                       //  Referenced by: '<S59>/Constant'

  real_T TSamp_WtEt_bz;                // Computed Parameter: TSamp_WtEt_bz
                                       //  Referenced by: '<S59>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_o[2];// Expression: [1 -1]
                                            //  Referenced by: '<S59>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_c;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S59>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_pg;// Expression: 0
                                       //  Referenced by: '<S53>/Unit Delay'

  real_T Gain2_Gain_ju;                // Expression: 2*pi
                                       //  Referenced by: '<S48>/Gain2'

  real_T Constant_Value_l1;            // Expression: tau
                                       //  Referenced by: '<S63>/Constant'

  real_T Constant4_Value_oj;           // Expression: 1
                                       //  Referenced by: '<S61>/Constant4'

  real_T Constant_Value_nd;            // Expression: 0
                                       //  Referenced by: '<S65>/Constant'

  real_T Constant_Value_oh;            // Expression: 0
                                       //  Referenced by: '<S61>/Constant'

  real_T Constant_Value_pi;            // Expression: 1
                                       //  Referenced by: '<S67>/Constant'

  real_T Constant5_Value_b;            // Expression: 0
                                       //  Referenced by: '<S61>/Constant5'

  real_T TSamp_WtEt_go;                // Computed Parameter: TSamp_WtEt_go
                                       //  Referenced by: '<S67>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_k0[2];// Expression: [1 -1]
                                            //  Referenced by: '<S67>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_b2;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S67>/Filter Differentiator TF'

  real_T ZeroGain_Gain_d;              // Expression: 0
                                       //  Referenced by: '<S66>/ZeroGain'

  real_T Gain2_Gain_fk;                // Expression: 2*pi
                                       //  Referenced by: '<S61>/Gain2'

  real_T Integrator_gainval_kx;        // Computed Parameter: Integrator_gainval_kx
                                       //  Referenced by: '<S65>/Integrator'

  real_T Integrator_IC_oh;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S65>/Integrator'

  real_T Constant4_Value_ce;           // Expression: 1
                                       //  Referenced by: '<S62>/Constant4'

  real_T Constant2_Value_c5;           // Expression: 0
                                       //  Referenced by: '<S62>/Constant2'

  real_T Integrator_gainval_ci;        // Computed Parameter: Integrator_gainval_ci
                                       //  Referenced by: '<S68>/Integrator'

  real_T Integrator_IC_f;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S68>/Integrator'

  real_T Gain2_Gain_o;                 // Expression: 2*pi
                                       //  Referenced by: '<S62>/Gain2'

  real_T Constant1_Value_at;           // Expression: 1
                                       //  Referenced by: '<S62>/Constant1'

  real_T Gain1_Gain_p;                 // Expression: 2*pi
                                       //  Referenced by: '<S62>/Gain1'

  real_T Constant_Value_kq;            // Expression: 1
                                       //  Referenced by: '<S69>/Constant'

  real_T TSamp_WtEt_pv;                // Computed Parameter: TSamp_WtEt_pv
                                       //  Referenced by: '<S69>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_h[2];// Expression: [1 -1]
                                            //  Referenced by: '<S69>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_k;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S69>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_ew;// Expression: 0
                                       //  Referenced by: '<S63>/Unit Delay'

  real_T Gain2_Gain_op;                // Expression: 2*pi
                                       //  Referenced by: '<S49>/Gain2'

  real_T Constant_Value_or;            // Expression: tau
                                       //  Referenced by: '<S73>/Constant'

  real_T Constant4_Value_bw;           // Expression: 1
                                       //  Referenced by: '<S71>/Constant4'

  real_T Constant_Value_om;            // Expression: 0
                                       //  Referenced by: '<S75>/Constant'

  real_T Constant_Value_gl;            // Expression: 0
                                       //  Referenced by: '<S71>/Constant'

  real_T Constant_Value_gy;            // Expression: 1
                                       //  Referenced by: '<S77>/Constant'

  real_T Constant5_Value_ba;           // Expression: 0
                                       //  Referenced by: '<S71>/Constant5'

  real_T TSamp_WtEt_gy;                // Computed Parameter: TSamp_WtEt_gy
                                       //  Referenced by: '<S77>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_it[2];// Expression: [1 -1]
                                            //  Referenced by: '<S77>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_bt;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S77>/Filter Differentiator TF'

  real_T ZeroGain_Gain_f;              // Expression: 0
                                       //  Referenced by: '<S76>/ZeroGain'

  real_T Gain2_Gain_fo;                // Expression: 2*pi
                                       //  Referenced by: '<S71>/Gain2'

  real_T Integrator_gainval_gs;        // Computed Parameter: Integrator_gainval_gs
                                       //  Referenced by: '<S75>/Integrator'

  real_T Integrator_IC_c;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S75>/Integrator'

  real_T Constant4_Value_ci;           // Expression: 1
                                       //  Referenced by: '<S72>/Constant4'

  real_T Constant2_Value_i;            // Expression: 0
                                       //  Referenced by: '<S72>/Constant2'

  real_T Integrator_gainval_cd;        // Computed Parameter: Integrator_gainval_cd
                                       //  Referenced by: '<S78>/Integrator'

  real_T Integrator_IC_l2;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S78>/Integrator'

  real_T Gain2_Gain_bw;                // Expression: 2*pi
                                       //  Referenced by: '<S72>/Gain2'

  real_T Constant1_Value_c;            // Expression: 1
                                       //  Referenced by: '<S72>/Constant1'

  real_T Gain1_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S72>/Gain1'

  real_T Constant_Value_e5;            // Expression: 1
                                       //  Referenced by: '<S79>/Constant'

  real_T TSamp_WtEt_oh;                // Computed Parameter: TSamp_WtEt_oh
                                       //  Referenced by: '<S79>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_b[2];// Expression: [1 -1]
                                            //  Referenced by: '<S79>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_o;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S79>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_if;// Expression: 0
                                       //  Referenced by: '<S73>/Unit Delay'

  real_T shift_Gain;                   // Expression: 2
                                       //  Referenced by: '<S21>/shift'

  real_T Constant_Value_pl;            // Expression: 0
                                       //  Referenced by: '<S21>/Constant'

  real_T Constant1_Value_b;            // Expression: 0
                                       //  Referenced by: '<S21>/Constant1'

  real_T Constant10_Value;             // Expression: 0
                                       //  Referenced by: '<S21>/Constant10'

  real_T Constant2_Value_nc;           // Expression: 0
                                       //  Referenced by: '<S21>/Constant2'

  real_T Constant6_Value;              // Expression: 0
                                       //  Referenced by: '<S21>/Constant6'

  real_T Constant7_Value;              // Expression: 0
                                       //  Referenced by: '<S21>/Constant7'

  real_T Constant8_Value;              // Expression: 0
                                       //  Referenced by: '<S21>/Constant8'

  real_T Constant9_Value;              // Expression: 0
                                       //  Referenced by: '<S21>/Constant9'

  real_T Gain_Gain_a;                  // Expression: 1
                                       //  Referenced by: '<S21>/Gain'

  real_T Gain1_Gain_bw;                // Expression: -1
                                       //  Referenced by: '<S21>/Gain1'

  real_T Gain11_Gain;                  // Expression: -1
                                       //  Referenced by: '<S21>/Gain11'

  real_T Gain12_Gain;                  // Expression: 1
                                       //  Referenced by: '<S21>/Gain12'

  real_T Gain13_Gain;                  // Expression: -1
                                       //  Referenced by: '<S21>/Gain13'

  real_T Gain8_Gain;                   // Expression: 1
                                       //  Referenced by: '<S21>/Gain8'

  real_T Gain14_Gain;                  // Expression: 1
                                       //  Referenced by: '<S21>/Gain14'

  real_T Gain15_Gain;                  // Expression: -1
                                       //  Referenced by: '<S21>/Gain15'

  real_T Gain16_Gain;                  // Expression: 1
                                       //  Referenced by: '<S21>/Gain16'

  real_T Gain17_Gain;                  // Expression: -1
                                       //  Referenced by: '<S21>/Gain17'

  real_T Gain18_Gain;                  // Expression: 1
                                       //  Referenced by: '<S21>/Gain18'

  real_T Gain19_Gain;                  // Expression: 1
                                       //  Referenced by: '<S21>/Gain19'

  real_T Gain2_Gain_l3;                // Expression: 1
                                       //  Referenced by: '<S21>/Gain2'

  real_T Gain3_Gain_n;                 // Expression: -1
                                       //  Referenced by: '<S21>/Gain3'

  real_T Gain4_Gain_d;                 // Expression: 1
                                       //  Referenced by: '<S21>/Gain4'

  real_T Gain5_Gain_e;                 // Expression: -1
                                       //  Referenced by: '<S21>/Gain5'

  real_T Gain6_Gain;                   // Expression: 1
                                       //  Referenced by: '<S21>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                       //  Referenced by: '<S21>/Gain7'

  real_T Gain9_Gain;                   // Expression: 1
                                       //  Referenced by: '<S21>/Gain9'

  real_T sign_convention_Gain;         // Expression: -1
                                       //  Referenced by: '<S21>/sign_convention'

  real_T sign_convention1_Gain;        // Expression: -1
                                       //  Referenced by: '<S21>/sign_convention1'

  real_T sign_convention2_Gain;        // Expression: -1
                                       //  Referenced by: '<S21>/sign_convention2'

  real_T sign_convention3_Gain;        // Expression: -1
                                       //  Referenced by: '<S21>/sign_convention3'

  real_T DiscreteTimeIntegrator_gainval;// Computed Parameter: DiscreteTimeIntegrator_gainval
                                        //  Referenced by: '<S2>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                       //  Referenced by: '<S2>/Discrete-Time Integrator'

  real_T Constant_Value_f2;            // Expression: 0
                                       //  Referenced by: '<S3>/Constant'

  real_T Constant1_Value_n;            // Expression: 0
                                       //  Referenced by: '<S3>/Constant1'

  real_T Constant2_Value_a;            // Expression: 0
                                       //  Referenced by: '<S3>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                       //  Referenced by: '<S3>/Constant3'

  real_T Constant4_Value_i;            // Expression: 0
                                       //  Referenced by: '<S3>/Constant4'

  real_T Constant5_Value_h;            // Expression: 0
                                       //  Referenced by: '<S3>/Constant5'

  uint32_T EnabledDelay_DelayLength;   // Computed Parameter: EnabledDelay_DelayLength
                                       //  Referenced by: '<S10>/Enabled Delay'

  uint16_T Gain10_Gain;                // Computed Parameter: Gain10_Gain
                                       //  Referenced by: '<S21>/Gain10'

  uint8_T Gain6_Gain_b;                // Computed Parameter: Gain6_Gain_b
                                       //  Referenced by: '<S10>/Gain6'

  uint8_T Switch_Threshold;            // Computed Parameter: Switch_Threshold
                                       //  Referenced by: '<S10>/Switch'

  uint8_T Switch1_Threshold;           // Computed Parameter: Switch1_Threshold
                                       //  Referenced by: '<S10>/Switch1'

  uint8_T Switch2_Threshold;           // Computed Parameter: Switch2_Threshold
                                       //  Referenced by: '<S10>/Switch2'

};

// Real-time Model Data Structure
struct tag_RTM_ROPOD_4Wheel_Tdistkinb_cntr_T {
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
    uint32_T clockTick2;
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

  extern P_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_B;

// Block states (auto storage)
extern DW_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void ROPOD_4Wheel_Tdistkinb_cntr_initialize(void);
  extern void ROPOD_4Wheel_Tdistkinb_cntr_step(void);
  extern void ROPOD_4Wheel_Tdistkinb_cntr_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_T *const
    ROPOD_4Wheel_Tdistkinb_cntr_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S5>/Display1' : Unused code path elimination
//  Block '<S5>/Gain1' : Unused code path elimination
//  Block '<S20>/Constant1' : Unused code path elimination
//  Block '<S20>/Switch1' : Unused code path elimination
//  Block '<S5>/To File1' : Unused code path elimination
//  Block '<S33>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S39>/Data Type Duplicate' : Unused code path elimination
//  Block '<S39>/Data Type Propagation' : Unused code path elimination
//  Block '<S34>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S40>/Data Type Duplicate' : Unused code path elimination
//  Block '<S40>/Data Type Propagation' : Unused code path elimination
//  Block '<S35>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S41>/Data Type Duplicate' : Unused code path elimination
//  Block '<S41>/Data Type Propagation' : Unused code path elimination
//  Block '<S36>/Data Type Duplicate' : Unused code path elimination
//  Block '<S36>/Data Type Propagation' : Unused code path elimination
//  Block '<S37>/Data Type Duplicate' : Unused code path elimination
//  Block '<S37>/Data Type Propagation' : Unused code path elimination
//  Block '<S38>/Data Type Duplicate' : Unused code path elimination
//  Block '<S38>/Data Type Propagation' : Unused code path elimination
//  Block '<S46>/Data Type Duplicate' : Unused code path elimination
//  Block '<S44>/Add' : Unused code path elimination
//  Block '<S44>/Product1' : Unused code path elimination
//  Block '<S44>/To File1' : Unused code path elimination
//  Block '<S21>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S21>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S57>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S67>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S77>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S98>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S108>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S118>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S128>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S138>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S148>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S158>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S168>/Passthrough for tuning' : Eliminate redundant data type conversion


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
//  '<Root>' : 'ROPOD_4Wheel_Tdistkinb_cntr'
//  '<S1>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/Allow Tinit seconds for initialization'
//  '<S2>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/Odometry and Measurement model 4SW'
//  '<S3>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/Odometry publisher'
//  '<S4>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/Platform vel command'
//  '<S5>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE'
//  '<S6>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/ROS  Controllers conf'
//  '<S7>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/ROS Ropod kinematic parameters2'
//  '<S8>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/ROS Smart wheels conf'
//  '<S9>'   : 'ROPOD_4Wheel_Tdistkinb_cntr/ROS base conf'
//  '<S10>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1'
//  '<S11>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr'
//  '<S12>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr'
//  '<S13>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Odometry and Measurement model 4SW/Jqwl_matrix'
//  '<S14>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Odometry and Measurement model 4SW/pos_rot_matrix'
//  '<S15>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Odometry publisher/Blank Message'
//  '<S16>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Odometry publisher/Publish'
//  '<S17>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Platform vel command/Subscribe1'
//  '<S18>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Platform vel command/Subscribe1/Enabled Subsystem'
//  '<S19>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Initialization switch'
//  '<S20>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_sens'
//  '<S21>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_torque_cmd'
//  '<S22>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1'
//  '<S23>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2'
//  '<S24>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3'
//  '<S25>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4'
//  '<S26>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Subsystem'
//  '<S27>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/empywheel'
//  '<S28>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel'
//  '<S29>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel'
//  '<S30>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel'
//  '<S31>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel'
//  '<S32>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Compare To Constant'
//  '<S33>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Rate Limiter Dynamic'
//  '<S34>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Rate Limiter Dynamic1'
//  '<S35>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Rate Limiter Dynamic2'
//  '<S36>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Saturation Dynamic'
//  '<S37>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Saturation Dynamic1'
//  '<S38>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Saturation Dynamic2'
//  '<S39>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Rate Limiter Dynamic/Saturation Dynamic'
//  '<S40>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Rate Limiter Dynamic1/Saturation Dynamic'
//  '<S41>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/Subscriber vel commands1/Rate Limiter Dynamic2/Saturation Dynamic'
//  '<S42>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Inverse Kinematics 4SW'
//  '<S43>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller'
//  '<S44>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Torque distribution'
//  '<S45>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Inverse Kinematics 4SW/Gl_matrix'
//  '<S46>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/Discrete Derivative'
//  '<S47>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X'
//  '<S48>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y'
//  '<S49>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta'
//  '<S50>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Discrete Varying Lowpass3'
//  '<S51>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)'
//  '<S52>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Lead-Lag (Tustin)'
//  '<S53>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Discrete Varying Lowpass3/FOS'
//  '<S54>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S55>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S56>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S57>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S58>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S59>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S60>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Discrete Varying Lowpass3'
//  '<S61>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)'
//  '<S62>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Lead-Lag (Tustin)'
//  '<S63>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Discrete Varying Lowpass3/FOS'
//  '<S64>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S65>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S66>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S67>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S68>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S69>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S70>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Discrete Varying Lowpass3'
//  '<S71>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)'
//  '<S72>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Lead-Lag (Tustin)'
//  '<S73>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Discrete Varying Lowpass3/FOS'
//  '<S74>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S75>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S76>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S77>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S78>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S79>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S80>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Torque distribution/Gl_matrices'
//  '<S81>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/platform vel cntr/Torque distribution/platform_forces_2_tau_dist_optimal'
//  '<S82>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller'
//  '<S83>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1'
//  '<S84>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2'
//  '<S85>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3'
//  '<S86>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4'
//  '<S87>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5'
//  '<S88>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6'
//  '<S89>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7'
//  '<S90>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8'
//  '<S91>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3'
//  '<S92>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)'
//  '<S93>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)'
//  '<S94>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS'
//  '<S95>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S96>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S97>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S98>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S99>'  : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S100>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S101>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3'
//  '<S102>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)'
//  '<S103>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)'
//  '<S104>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS'
//  '<S105>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S106>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S107>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S108>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S109>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S110>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S111>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3'
//  '<S112>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)'
//  '<S113>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)'
//  '<S114>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS'
//  '<S115>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S116>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S117>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S118>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S119>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S120>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S121>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3'
//  '<S122>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)'
//  '<S123>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)'
//  '<S124>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS'
//  '<S125>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S126>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S127>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S128>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S129>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S130>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S131>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3'
//  '<S132>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)'
//  '<S133>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)'
//  '<S134>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS'
//  '<S135>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S136>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S137>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S138>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S139>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S140>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S141>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3'
//  '<S142>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)'
//  '<S143>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)'
//  '<S144>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS'
//  '<S145>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S146>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S147>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S148>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S149>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S150>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S151>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3'
//  '<S152>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)'
//  '<S153>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)'
//  '<S154>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS'
//  '<S155>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S156>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S157>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S158>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S159>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S160>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S161>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3'
//  '<S162>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)'
//  '<S163>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)'
//  '<S164>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS'
//  '<S165>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S166>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S167>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S168>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S169>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S170>' : 'ROPOD_4Wheel_Tdistkinb_cntr/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'

#endif                                 // RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
