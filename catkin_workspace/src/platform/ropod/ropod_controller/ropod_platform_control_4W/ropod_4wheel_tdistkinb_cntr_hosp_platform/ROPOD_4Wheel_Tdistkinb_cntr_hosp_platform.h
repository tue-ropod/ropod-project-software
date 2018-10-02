//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform'.
//
// Model version                  : 1.279
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Sep 26 22:09:30 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_h_
#define RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_COMMON_INCLUDES_
# define ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slros_initialize.h"
#endif                                 // ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_COMMON_INCLUDES_ 

#include "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_types.h"
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
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni BusAssignment;// '<S3>/Bus Assignment' 
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
  real_T Gtl[45];                      // '<S45>/Gl_matrices'
  real_T Gl[45];                       // '<S45>/Gl_matrices'
  real_T SFunction[40];                // '<S29>/S-Function'
  real_T SFunction_o[40];              // '<S30>/S-Function'
  real_T SFunction_b[40];              // '<S31>/S-Function'
  real_T SFunction_m[40];              // '<S32>/S-Function'
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
  char_T cv0[67];
  char_T cv1[66];
  char_T cv2[65];
  char_T cv3[64];
  real_T Switch2_k[8];                 // '<S20>/Switch2'
  real_T Product9[8];                  // '<S83>/Product9'
  char_T cv4[63];
  char_T cv5[62];
  char_T cv6[60];
  char_T cv7[59];
  char_T cv8[56];
  char_T cv9[55];
  char_T cv10[54];
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 In1;// '<S18>/In1'
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 b_varargout_2;
  int16_T iC[21];
  int16_T iA[21];
  real_T varargin_1_p[5];
  real_T s[4];
  real_T Sum_pp[3];                    // '<S44>/Sum'
  real_T Diff[3];                      // '<S47>/Diff'
  real_T dv2[3];
  real_T work_c[3];
  real_T DigitalClock;                 // '<S10>/Digital Clock'
  real_T EnabledDelay;                 // '<S10>/Enabled Delay'
  real_T Gain1;                        // '<S10>/Gain1'
  real_T Gain;                         // '<S10>/Gain'
  real_T DifferenceInputs2;            // '<S34>/Difference Inputs2'
  real_T Gain3;                        // '<S10>/Gain3'
  real_T Gain2;                        // '<S10>/Gain2'
  real_T DifferenceInputs2_l;          // '<S35>/Difference Inputs2'
  real_T Gain5;                        // '<S10>/Gain5'
  real_T Gain4;                        // '<S10>/Gain4'
  real_T DifferenceInputs2_g;          // '<S36>/Difference Inputs2'
  real_T Gain2_c;                      // '<S93>/Gain2'
  real_T Gain1_m;                      // '<S94>/Gain1'
  real_T Divide1;                      // '<S94>/Divide1'
  real_T Gain2_f;                      // '<S103>/Gain2'
  real_T Gain1_g;                      // '<S104>/Gain1'
  real_T Divide1_h;                    // '<S104>/Divide1'
  real_T Gain2_n;                      // '<S113>/Gain2'
  real_T Gain1_i;                      // '<S114>/Gain1'
  real_T Divide1_i;                    // '<S114>/Divide1'
  real_T Gain2_h;                      // '<S123>/Gain2'
  real_T Gain1_f;                      // '<S124>/Gain1'
  real_T Divide1_o;                    // '<S124>/Divide1'
  real_T Gain2_e;                      // '<S133>/Gain2'
  real_T Gain1_j;                      // '<S134>/Gain1'
  real_T Divide1_g;                    // '<S134>/Divide1'
  real_T Gain2_m;                      // '<S143>/Gain2'
  real_T Gain1_l;                      // '<S144>/Gain1'
  real_T Divide1_p;                    // '<S144>/Divide1'
  real_T Gain2_i;                      // '<S153>/Gain2'
  real_T Gain1_d;                      // '<S154>/Gain1'
  real_T Divide1_j;                    // '<S154>/Divide1'
  real_T Gain2_hk;                     // '<S163>/Gain2'
  real_T Gain1_jd;                     // '<S164>/Gain1'
  real_T Divide1_g2;                   // '<S164>/Divide1'
  real_T Gain_h;                       // '<S44>/Gain'
  real_T Gain1_iu;                     // '<S44>/Gain1'
  real_T Gain2_m2;                     // '<S44>/Gain2'
  real_T Gain2_k;                      // '<S52>/Gain2'
  real_T Gain1_ga;                     // '<S53>/Gain1'
  real_T Divide1_ht;                   // '<S53>/Divide1'
  real_T Gain2_l;                      // '<S62>/Gain2'
  real_T Gain1_jx;                     // '<S63>/Gain1'
  real_T Divide1_pu;                   // '<S63>/Divide1'
  real_T Gain2_mj;                     // '<S72>/Gain2'
  real_T Gain1_a;                      // '<S73>/Gain1'
  real_T Divide1_f;                    // '<S73>/Divide1'
  real_T Gain3_g;                      // '<S45>/Gain3'
  real_T Switch1[8];                   // '<S19>/Switch1'
  real_T command2;                     // '<S22>/Constant'
  real_T command2_p;                   // '<S22>/Constant1'
  real_T timestamp;                    // '<S22>/Constant10'
  real_T timestamp_k;                  // '<S22>/Constant2'
  real_T command2_pi;                  // '<S22>/Constant6'
  real_T timestamp_n;                  // '<S22>/Constant7'
  real_T timestamp_a;                  // '<S22>/Constant8'
  real_T command2_i;                   // '<S22>/Constant9'
  real_T limit1_p;                     // '<S22>/Gain'
  real_T limit1_n;                     // '<S22>/Gain1'
  real_T command1;                     // '<S22>/Gain10'
  real_T limit1_n_o;                   // '<S22>/Gain11'
  real_T limit2_p;                     // '<S22>/Gain12'
  real_T limit2_n;                     // '<S22>/Gain13'
  real_T command1_b;                   // '<S22>/Gain8'
  real_T command1_f;                   // '<S22>/Gain14'
  real_T limit1_n_c;                   // '<S22>/Gain15'
  real_T limit2_p_i;                   // '<S22>/Gain16'
  real_T limit2_n_p;                   // '<S22>/Gain17'
  real_T command1_bn;                  // '<S22>/Gain18'
  real_T limit1_p_d;                   // '<S22>/Gain19'
  real_T limit2_p_m;                   // '<S22>/Gain2'
  real_T limit2_n_n;                   // '<S22>/Gain3'
  real_T limit1_p_m;                   // '<S22>/Gain4'
  real_T limit1_n_b;                   // '<S22>/Gain5'
  real_T limit2_p_g;                   // '<S22>/Gain6'
  real_T limit2_n_m;                   // '<S22>/Gain7'
  real_T limit1_p_l;                   // '<S22>/Gain9'
  real_T setpoint2;                    // '<S22>/sign_convention'
  real_T setpoint2_g;                  // '<S22>/sign_convention1'
  real_T setpoint2_n;                  // '<S22>/sign_convention2'
  real_T setpoint2_a;                  // '<S22>/sign_convention3'
  real_T g;                            // '<S165>/MATLAB Function'
  real_T a;                            // '<S165>/MATLAB Function'
  real_T g_k;                          // '<S155>/MATLAB Function'
  real_T a_f;                          // '<S155>/MATLAB Function'
  real_T g_g;                          // '<S145>/MATLAB Function'
  real_T a_fe;                         // '<S145>/MATLAB Function'
  real_T g_m;                          // '<S135>/MATLAB Function'
  real_T a_i;                          // '<S135>/MATLAB Function'
  real_T g_p;                          // '<S125>/MATLAB Function'
  real_T a_f5;                         // '<S125>/MATLAB Function'
  real_T g_l;                          // '<S115>/MATLAB Function'
  real_T a_c;                          // '<S115>/MATLAB Function'
  real_T g_n;                          // '<S105>/MATLAB Function'
  real_T a_k;                          // '<S105>/MATLAB Function'
  real_T g_b;                          // '<S95>/MATLAB Function'
  real_T a_a;                          // '<S95>/MATLAB Function'
  real_T g_bl;                         // '<S74>/MATLAB Function'
  real_T a_cg;                         // '<S74>/MATLAB Function'
  real_T g_ne;                         // '<S64>/MATLAB Function'
  real_T a_j;                          // '<S64>/MATLAB Function'
  real_T g_c;                          // '<S54>/MATLAB Function'
  real_T a_jp;                         // '<S54>/MATLAB Function'
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
  real_T Product1_i;                   // '<S54>/Product1'
  real_T Sum_by;                       // '<S170>/Sum'
  real_T Sum_b;                        // '<S160>/Sum'
  real_T Sum_f;                        // '<S150>/Sum'
  real_T Sum_j;                        // '<S140>/Sum'
  real_T Sum_oj;                       // '<S130>/Sum'
  real_T Sum_h;                        // '<S120>/Sum'
  real_T Switch2_j;                    // '<S10>/Switch2'
  real_T Switch1_f;                    // '<S10>/Switch1'
  real_T Switch_j;                     // '<S10>/Switch'
  real_T sampletime_i;                 // '<S36>/sample time'
  real_T sampletime_d;                 // '<S35>/sample time'
  real_T sampletime;                   // '<S34>/sample time'
  real_T max_current;                  // '<S8>/Get Parameter2'
  real_T LL_pole_fhz_n;                // '<S6>/Get Parameter5'
  real_T LL_zero_fhz_m;                // '<S6>/Get Parameter4'
  real_T I_freq_hz_e;                  // '<S6>/Get Parameter3'
  real_T LPF_fhz_n;                    // '<S6>/Get Parameter6'
  real_T LL_pole_fhz;                  // '<S6>/Get Parameter13'
  real_T LL_zero_fhz;                  // '<S6>/Get Parameter12'
  real_T I_freq_hz;                    // '<S6>/Get Parameter11'
  real_T LPF_fhz;                      // '<S6>/Get Parameter14'
  real_T FilterDifferentiatorTF_m;     // '<S68>/Filter Differentiator TF'
  real_T FilterDifferentiatorTF_pe;    // '<S169>/Filter Differentiator TF'
  real_T DOut_i;                       // '<S160>/DOut'
  real_T DOut_g;                       // '<S157>/DOut'
  real_T DOut_m1;                      // '<S150>/DOut'
  real_T DOut_m0;                      // '<S147>/DOut'
  real_T DOut_hv;                      // '<S140>/DOut'
  real_T DOut_f;                       // '<S137>/DOut'
  real_T DOut_j;                       // '<S130>/DOut'
  real_T DOut_d;                       // '<S127>/DOut'
  real_T DOut_h;                       // '<S120>/DOut'
  real_T DOut_et;                      // '<S117>/DOut'
  real_T DOut_e;                       // '<S110>/DOut'
  real_T Switch2_e;                    // '<S42>/Switch2'
  real_T Yk1_h;                        // '<S36>/Delay Input2'
  real_T Switch2_l;                    // '<S39>/Switch2'
  real_T Yk1_k;                        // '<S35>/Delay Input2'
  real_T Switch2_o;                    // '<S38>/Switch2'
  real_T Yk1;                          // '<S34>/Delay Input2'
  real_T Switch2;                      // '<S37>/Switch2'
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
  uint16_T BitwiseOperator1;           // '<S22>/Bitwise Operator1'
  uint16_T BitwiseOperator2;           // '<S22>/Bitwise Operator2'
  boolean_T SourceBlock_o1;            // '<S17>/SourceBlock'
} B_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_bl_hi_T obj; // '<S9>/Get Parameter'
  robotics_slros_internal_bl_hi_T obj_f;// '<S9>/Get Parameter1'
  robotics_slros_internal_bl_hi_T obj_n;// '<S9>/Get Parameter2'
  robotics_slros_internal_bl_hi_T obj_i;// '<S9>/Get Parameter3'
  robotics_slros_internal_bl_hi_T obj_k;// '<S8>/Get Parameter1'
  robotics_slros_internal_bl_hi_T obj_m;// '<S8>/Get Parameter3'
  robotics_slros_internal_bl_hi_T obj_i4;// '<S8>/Get Parameter4'
  robotics_slros_internal_bl_hi_T obj_b;// '<S8>/Get Parameter5'
  robotics_slros_internal_bl_hi_T obj_h;// '<S8>/Get Parameter2'
  robotics_slros_internal_bl_hi_T obj_bg;// '<S8>/Get Parameter'
  robotics_slros_internal_bl_hi_T obj_m5;// '<S8>/Get Parameter6'
  robotics_slros_internal_bl_hi_T obj_nk;// '<S8>/Get Parameter7'
  robotics_slros_internal_bl_hi_T obj_be;// '<S7>/Get Parameter'
  robotics_slros_internal_bl_hi_T obj_l;// '<S7>/Get Parameter11'
  robotics_slros_internal_bl_hi_T obj_fa;// '<S7>/Get Parameter12'
  robotics_slros_internal_bl_hi_T obj_p;// '<S7>/Get Parameter13'
  robotics_slros_internal_bl_hi_T obj_l1;// '<S7>/Get Parameter14'
  robotics_slros_internal_bl_hi_T obj_pe;// '<S7>/Get Parameter15'
  robotics_slros_internal_bl_hi_T obj_g;// '<S7>/Get Parameter16'
  robotics_slros_internal_bl_hi_T obj_bc;// '<S7>/Get Parameter17'
  robotics_slros_internal_bl_hi_T obj_hv;// '<S7>/Get Parameter1'
  robotics_slros_internal_bl_hi_T obj_j;// '<S7>/Get Parameter2'
  robotics_slros_internal_bl_hi_T obj_e;// '<S7>/Get Parameter3'
  robotics_slros_internal_bl_hi_T obj_jj;// '<S7>/Get Parameter4'
  robotics_slros_internal_bl_hi_T obj_d;// '<S7>/Get Parameter5'
  robotics_slros_internal_bl_hi_T obj_ep;// '<S7>/Get Parameter6'
  robotics_slros_internal_bl_hi_T obj_lm;// '<S7>/Get Parameter7'
  robotics_slros_internal_bl_hi_T obj_ew;// '<S7>/Get Parameter8'
  robotics_slros_internal_bl_hi_T obj_nj;// '<S7>/Get Parameter9'
  robotics_slros_internal_bl_hi_T obj_b1;// '<S7>/Get Parameter10'
  robotics_slros_internal_bl_hi_T obj_ft;// '<S6>/Get Parameter14'
  robotics_slros_internal_bl_hi_T obj_pz;// '<S6>/Get Parameter10'
  robotics_slros_internal_bl_hi_T obj_jt;// '<S6>/Get Parameter11'
  robotics_slros_internal_bl_hi_T obj_da;// '<S6>/Get Parameter12'
  robotics_slros_internal_bl_hi_T obj_e5;// '<S6>/Get Parameter13'
  robotics_slros_internal_bl_hi_T obj_c;// '<S6>/Get Parameter6'
  robotics_slros_internal_bl_hi_T obj_mn;// '<S6>/Get Parameter'
  robotics_slros_internal_bl_hi_T obj_d0;// '<S6>/Get Parameter3'
  robotics_slros_internal_bl_hi_T obj_ey;// '<S6>/Get Parameter4'
  robotics_slros_internal_bl_hi_T obj_g0;// '<S6>/Get Parameter5'
  robotics_slros_internal_bl_hi_T obj_ch;// '<S6>/Get Parameter9'
  robotics_slros_internal_bl_hi_T obj_fy;// '<S6>/Get Parameter1'
  robotics_slros_internal_bl_hi_T obj_hq;// '<S6>/Get Parameter2'
  robotics_slros_internal_bl_hi_T obj_eq;// '<S6>/Get Parameter7'
  robotics_slros_internal_bl_hi_T obj_a;// '<S6>/Get Parameter8'
  real_T EnabledDelay_DSTATE;          // '<S10>/Enabled Delay'
  real_T DelayInput2_DSTATE;           // '<S34>/Delay Input2'
  real_T DelayInput2_DSTATE_f;         // '<S35>/Delay Input2'
  real_T DelayInput2_DSTATE_k;         // '<S36>/Delay Input2'
  real_T FilterDifferentiatorTF_states;// '<S99>/Filter Differentiator TF'
  real_T Integrator_DSTATE;            // '<S97>/Integrator'
  real_T Integrator_DSTATE_l;          // '<S100>/Integrator'
  real_T FilterDifferentiatorTF_states_l;// '<S101>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE;             // '<S95>/Unit Delay'
  real_T FilterDifferentiatorTF_states_f;// '<S109>/Filter Differentiator TF'
  real_T Integrator_DSTATE_b;          // '<S107>/Integrator'
  real_T Integrator_DSTATE_f;          // '<S110>/Integrator'
  real_T FilterDifferentiatorTF_states_o;// '<S111>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_d;           // '<S105>/Unit Delay'
  real_T FilterDifferentiatorTF_states_k;// '<S119>/Filter Differentiator TF'
  real_T Integrator_DSTATE_o;          // '<S117>/Integrator'
  real_T Integrator_DSTATE_fl;         // '<S120>/Integrator'
  real_T FilterDifferentiatorTF_states_g;// '<S121>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_e;           // '<S115>/Unit Delay'
  real_T FilterDifferentiatorTF_state_gl;// '<S129>/Filter Differentiator TF'
  real_T Integrator_DSTATE_k;          // '<S127>/Integrator'
  real_T Integrator_DSTATE_bo;         // '<S130>/Integrator'
  real_T FilterDifferentiatorTF_states_h;// '<S131>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_h;           // '<S125>/Unit Delay'
  real_T FilterDifferentiatorTF_states_i;// '<S139>/Filter Differentiator TF'
  real_T Integrator_DSTATE_h;          // '<S137>/Integrator'
  real_T Integrator_DSTATE_j;          // '<S140>/Integrator'
  real_T FilterDifferentiatorTF_states_b;// '<S141>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_k;           // '<S135>/Unit Delay'
  real_T FilterDifferentiatorTF_state_fs;// '<S149>/Filter Differentiator TF'
  real_T Integrator_DSTATE_ji;         // '<S147>/Integrator'
  real_T Integrator_DSTATE_e;          // '<S150>/Integrator'
  real_T FilterDifferentiatorTF_state_fw;// '<S151>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_o;           // '<S145>/Unit Delay'
  real_T FilterDifferentiatorTF_states_e;// '<S159>/Filter Differentiator TF'
  real_T Integrator_DSTATE_m;          // '<S157>/Integrator'
  real_T Integrator_DSTATE_bd;         // '<S160>/Integrator'
  real_T FilterDifferentiatorTF_state_e2;// '<S161>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_i;           // '<S155>/Unit Delay'
  real_T FilterDifferentiatorTF_state_ir;// '<S169>/Filter Differentiator TF'
  real_T Integrator_DSTATE_c;          // '<S167>/Integrator'
  real_T Integrator_DSTATE_ft;         // '<S170>/Integrator'
  real_T FilterDifferentiatorTF_states_d;// '<S171>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_c;           // '<S165>/Unit Delay'
  real_T UD_DSTATE[3];                 // '<S47>/UD'
  real_T FilterDifferentiatorTF_state_ku;// '<S58>/Filter Differentiator TF'
  real_T Integrator_DSTATE_mx;         // '<S56>/Integrator'
  real_T Integrator_DSTATE_jf;         // '<S59>/Integrator'
  real_T FilterDifferentiatorTF_states_j;// '<S60>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_g;           // '<S54>/Unit Delay'
  real_T FilterDifferentiatorTF_state_fc;// '<S68>/Filter Differentiator TF'
  real_T Integrator_DSTATE_c5;         // '<S66>/Integrator'
  real_T Integrator_DSTATE_p;          // '<S69>/Integrator'
  real_T FilterDifferentiatorTF_state_dl;// '<S70>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_gb;          // '<S64>/Unit Delay'
  real_T FilterDifferentiatorTF_state_ei;// '<S78>/Filter Differentiator TF'
  real_T Integrator_DSTATE_d;          // '<S76>/Integrator'
  real_T Integrator_DSTATE_os;         // '<S79>/Integrator'
  real_T FilterDifferentiatorTF_states_p;// '<S80>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_f;           // '<S74>/Unit Delay'
  real_T DiscreteTimeIntegrator_DSTATE[3];// '<S2>/Discrete-Time Integrator'
  real_T ECAT_Interface_RWORK[13];     // '<S5>/ECAT_Interface'
  robotics_slcore_internal_bloc_T obj_nv;// '<S3>/Coordinate Transformation Conversion' 
  robotics_slros_internal_block_T obj_hy;// '<S16>/SinkBlock'
  robotics_slros_internal_blo_h_T obj_a1;// '<S17>/SourceBlock'
  int8_T Integrator_PrevResetState;    // '<S97>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S107>/Integrator'
  int8_T Integrator_PrevResetState_d;  // '<S117>/Integrator'
  int8_T Integrator_PrevResetState_f;  // '<S127>/Integrator'
  int8_T Integrator_PrevResetState_dm; // '<S137>/Integrator'
  int8_T Integrator_PrevResetState_n;  // '<S147>/Integrator'
  int8_T Integrator_PrevResetState_p;  // '<S157>/Integrator'
  int8_T Integrator_PrevResetState_k;  // '<S167>/Integrator'
  int8_T Integrator_PrevResetState_fn; // '<S56>/Integrator'
  int8_T Integrator_PrevResetState_o;  // '<S66>/Integrator'
  int8_T Integrator_PrevResetState_m;  // '<S76>/Integrator'
} DW_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState FilterDifferentiatorTF_Reset_ZC;// '<S99>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__i;// '<S109>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__c;// '<S119>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__k;// '<S129>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__l;// '<S139>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__j;// '<S149>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__f;// '<S159>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__h;// '<S169>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_l3;// '<S58>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_l5;// '<S68>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__g;// '<S78>/Filter Differentiator TF' 
} PrevZCX_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T;

// Parameters (auto storage)
struct P_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T_ {
  real_T FFtheta_intia;                // Variable: FFtheta_intia
                                       //  Referenced by: '<S44>/Gain2'

  real_T FFxy_mass;                    // Variable: FFxy_mass
                                       //  Referenced by:
                                       //    '<S44>/Gain'
                                       //    '<S44>/Gain1'

  real_T SW_COM1_ENABLE1;              // Variable: SW_COM1_ENABLE1
                                       //  Referenced by: '<S22>/Constant3'

  real_T SW_COM1_ENABLE2;              // Variable: SW_COM1_ENABLE2
                                       //  Referenced by: '<S22>/Constant4'

  real_T SW_COM1_MODE_TORQUE;          // Variable: SW_COM1_MODE_TORQUE
                                       //  Referenced by: '<S19>/Constant13'

  real_T SW_COM1_MODE_VELOCITY;        // Variable: SW_COM1_MODE_VELOCITY
                                       //  Referenced by: '<S19>/Constant5'

  real_T SW_COM1_USE_TS;               // Variable: SW_COM1_USE_TS
                                       //  Referenced by: '<S22>/Constant11'

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
                                       //    '<S8>/Get Parameter6'
                                       //    '<S8>/Get Parameter7'
                                       //    '<S9>/Get Parameter'
                                       //    '<S9>/Get Parameter1'
                                       //    '<S9>/Get Parameter2'
                                       //    '<S9>/Get Parameter3'

  real_T max_hw_tau;                   // Variable: max_hw_tau
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

  real_T max_ropod_sw_force;           // Variable: max_ropod_sw_force
                                       //  Referenced by:
                                       //    '<S56>/Saturate'
                                       //    '<S66>/Saturate'
                                       //    '<S57>/DeadZone'
                                       //    '<S67>/DeadZone'

  real_T max_ropod_sw_tau;             // Variable: max_ropod_sw_tau
                                       //  Referenced by:
                                       //    '<S76>/Saturate'
                                       //    '<S77>/DeadZone'

  real_T sw_tau_2_curr;                // Variable: sw_tau_2_curr
                                       //  Referenced by:
                                       //    '<S27>/Gain3'
                                       //    '<S45>/Gain3'

  real_T DiscreteDerivative_ICPrevScaled;// Mask Parameter: DiscreteDerivative_ICPrevScaled
                                         //  Referenced by: '<S47>/UD'

  real_T CompareToConstant_const;      // Mask Parameter: CompareToConstant_const
                                       //  Referenced by: '<S33>/Constant'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Odometry_68ooni Constant_Value;// Computed Parameter: Constant_Value
                                                                  //  Referenced by: '<S15>/Constant'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 Out1_Y0;// Computed Parameter: Out1_Y0
                                                        //  Referenced by: '<S18>/Out1'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cn_Twist_zi6ye9 Constant_Value_e;// Computed Parameter: Constant_Value_e
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
                                       //  Referenced by: '<S84>/Gain2'

  real_T Constant_Value_i;             // Expression: tau
                                       //  Referenced by: '<S95>/Constant'

  real_T SFunction_P1_Size[2];         // Computed Parameter: SFunction_P1_Size
                                       //  Referenced by: '<S29>/S-Function'

  real_T SFunction_P1;                 // Expression: link_id
                                       //  Referenced by: '<S29>/S-Function'

  real_T SFunction_P1_Size_a[2];       // Computed Parameter: SFunction_P1_Size_a
                                       //  Referenced by: '<S30>/S-Function'

  real_T SFunction_P1_p;               // Expression: link_id
                                       //  Referenced by: '<S30>/S-Function'

  real_T SFunction_P1_Size_b[2];       // Computed Parameter: SFunction_P1_Size_b
                                       //  Referenced by: '<S31>/S-Function'

  real_T SFunction_P1_f;               // Expression: link_id
                                       //  Referenced by: '<S31>/S-Function'

  real_T SFunction_P1_Size_g[2];       // Computed Parameter: SFunction_P1_Size_g
                                       //  Referenced by: '<S32>/S-Function'

  real_T SFunction_P1_f5;              // Expression: link_id
                                       //  Referenced by: '<S32>/S-Function'

  real_T sampletime_WtEt;              // Computed Parameter: sampletime_WtEt
                                       //  Referenced by: '<S34>/sample time'

  real_T EnabledDelay_InitialCondition;// Expression: 0.0
                                       //  Referenced by: '<S10>/Enabled Delay'

  real_T Gain1_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain1'

  real_T DelayInput2_InitialCondition; // Expression: 0
                                       //  Referenced by: '<S34>/Delay Input2'

  real_T Gain_Gain;                    // Expression: -1
                                       //  Referenced by: '<S10>/Gain'

  real_T sampletime_WtEt_j;            // Computed Parameter: sampletime_WtEt_j
                                       //  Referenced by: '<S35>/sample time'

  real_T Gain3_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain3'

  real_T DelayInput2_InitialCondition_o;// Expression: 0
                                        //  Referenced by: '<S35>/Delay Input2'

  real_T Gain2_Gain_d;                 // Expression: -1
                                       //  Referenced by: '<S10>/Gain2'

  real_T sampletime_WtEt_b;            // Computed Parameter: sampletime_WtEt_b
                                       //  Referenced by: '<S36>/sample time'

  real_T Gain5_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain5'

  real_T DelayInput2_InitialCondition_c;// Expression: 0
                                        //  Referenced by: '<S36>/Delay Input2'

  real_T Gain4_Gain;                   // Expression: -1
                                       //  Referenced by: '<S10>/Gain4'

  real_T Constant_Value_n[8];          // Expression: [1 1 1 1 1 1 1 1]
                                       //  Referenced by: '<Root>/Constant'

  real_T Constant4_Value;              // Expression: 1
                                       //  Referenced by: '<S93>/Constant4'

  real_T Constant_Value_j;             // Expression: 0
                                       //  Referenced by: '<S97>/Constant'

  real_T Constant_Value_o;             // Expression: 0
                                       //  Referenced by: '<S93>/Constant'

  real_T Constant_Value_nr;            // Expression: 1
                                       //  Referenced by: '<S99>/Constant'

  real_T Constant5_Value;              // Expression: 0
                                       //  Referenced by: '<S93>/Constant5'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                       //  Referenced by: '<S99>/TSamp'

  real_T FilterDifferentiatorTF_NumCoef[2];// Expression: [1 -1]
                                           //  Referenced by: '<S99>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_InitialS;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S99>/Filter Differentiator TF'

  real_T ZeroGain_Gain;                // Expression: 0
                                       //  Referenced by: '<S98>/ZeroGain'

  real_T Gain2_Gain_i;                 // Expression: 2*pi
                                       //  Referenced by: '<S93>/Gain2'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                       //  Referenced by: '<S97>/Integrator'

  real_T Integrator_IC;                // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S97>/Integrator'

  real_T Constant4_Value_k;            // Expression: 1
                                       //  Referenced by: '<S94>/Constant4'

  real_T Constant2_Value_m;            // Expression: 0
                                       //  Referenced by: '<S94>/Constant2'

  real_T Integrator_gainval_i;         // Computed Parameter: Integrator_gainval_i
                                       //  Referenced by: '<S100>/Integrator'

  real_T Integrator_IC_b;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S100>/Integrator'

  real_T Gain2_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S94>/Gain2'

  real_T Constant1_Value_d;            // Expression: 1
                                       //  Referenced by: '<S94>/Constant1'

  real_T Gain1_Gain_c;                 // Expression: 2*pi
                                       //  Referenced by: '<S94>/Gain1'

  real_T Constant_Value_b;             // Expression: 1
                                       //  Referenced by: '<S101>/Constant'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                       //  Referenced by: '<S101>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_a[2];// Expression: [1 -1]
                                            //  Referenced by: '<S101>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_p;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S101>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                       //  Referenced by: '<S95>/Unit Delay'

  real_T Gain2_Gain_a;                 // Expression: 2*pi
                                       //  Referenced by: '<S85>/Gain2'

  real_T Constant_Value_m;             // Expression: tau
                                       //  Referenced by: '<S105>/Constant'

  real_T Constant4_Value_c;            // Expression: 1
                                       //  Referenced by: '<S103>/Constant4'

  real_T Constant_Value_k;             // Expression: 0
                                       //  Referenced by: '<S107>/Constant'

  real_T Constant_Value_c;             // Expression: 0
                                       //  Referenced by: '<S103>/Constant'

  real_T Constant_Value_gk;            // Expression: 1
                                       //  Referenced by: '<S109>/Constant'

  real_T Constant5_Value_j;            // Expression: 0
                                       //  Referenced by: '<S103>/Constant5'

  real_T TSamp_WtEt_a;                 // Computed Parameter: TSamp_WtEt_a
                                       //  Referenced by: '<S109>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_c[2];// Expression: [1 -1]
                                            //  Referenced by: '<S109>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_f;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S109>/Filter Differentiator TF'

  real_T ZeroGain_Gain_m;              // Expression: 0
                                       //  Referenced by: '<S108>/ZeroGain'

  real_T Gain2_Gain_i2;                // Expression: 2*pi
                                       //  Referenced by: '<S103>/Gain2'

  real_T Integrator_gainval_a;         // Computed Parameter: Integrator_gainval_a
                                       //  Referenced by: '<S107>/Integrator'

  real_T Integrator_IC_bi;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S107>/Integrator'

  real_T Constant4_Value_d;            // Expression: 1
                                       //  Referenced by: '<S104>/Constant4'

  real_T Constant2_Value_c;            // Expression: 0
                                       //  Referenced by: '<S104>/Constant2'

  real_T Integrator_gainval_g;         // Computed Parameter: Integrator_gainval_g
                                       //  Referenced by: '<S110>/Integrator'

  real_T Integrator_IC_o;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S110>/Integrator'

  real_T Gain2_Gain_h;                 // Expression: 2*pi
                                       //  Referenced by: '<S104>/Gain2'

  real_T Constant1_Value_i;            // Expression: 1
                                       //  Referenced by: '<S104>/Constant1'

  real_T Gain1_Gain_i;                 // Expression: 2*pi
                                       //  Referenced by: '<S104>/Gain1'

  real_T Constant_Value_lu;            // Expression: 1
                                       //  Referenced by: '<S111>/Constant'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                       //  Referenced by: '<S111>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_i[2];// Expression: [1 -1]
                                            //  Referenced by: '<S111>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_d;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S111>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_i; // Expression: 0
                                       //  Referenced by: '<S105>/Unit Delay'

  real_T Gain2_Gain_m;                 // Expression: 2*pi
                                       //  Referenced by: '<S86>/Gain2'

  real_T Constant_Value_eq;            // Expression: tau
                                       //  Referenced by: '<S115>/Constant'

  real_T Constant4_Value_a;            // Expression: 1
                                       //  Referenced by: '<S113>/Constant4'

  real_T Constant_Value_gw;            // Expression: 0
                                       //  Referenced by: '<S117>/Constant'

  real_T Constant_Value_oz;            // Expression: 0
                                       //  Referenced by: '<S113>/Constant'

  real_T Constant_Value_ed;            // Expression: 1
                                       //  Referenced by: '<S119>/Constant'

  real_T Constant5_Value_l;            // Expression: 0
                                       //  Referenced by: '<S113>/Constant5'

  real_T TSamp_WtEt_j;                 // Computed Parameter: TSamp_WtEt_j
                                       //  Referenced by: '<S119>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_c1[2];// Expression: [1 -1]
                                            //  Referenced by: '<S119>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_db;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S119>/Filter Differentiator TF'

  real_T ZeroGain_Gain_n;              // Expression: 0
                                       //  Referenced by: '<S118>/ZeroGain'

  real_T Gain2_Gain_e;                 // Expression: 2*pi
                                       //  Referenced by: '<S113>/Gain2'

  real_T Integrator_gainval_c;         // Computed Parameter: Integrator_gainval_c
                                       //  Referenced by: '<S117>/Integrator'

  real_T Integrator_IC_a;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S117>/Integrator'

  real_T Constant4_Value_e;            // Expression: 1
                                       //  Referenced by: '<S114>/Constant4'

  real_T Constant2_Value_n;            // Expression: 0
                                       //  Referenced by: '<S114>/Constant2'

  real_T Integrator_gainval_m;         // Computed Parameter: Integrator_gainval_m
                                       //  Referenced by: '<S120>/Integrator'

  real_T Integrator_IC_e;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S120>/Integrator'

  real_T Gain2_Gain_l;                 // Expression: 2*pi
                                       //  Referenced by: '<S114>/Gain2'

  real_T Constant1_Value_ix;           // Expression: 1
                                       //  Referenced by: '<S114>/Constant1'

  real_T Gain1_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S114>/Gain1'

  real_T Constant_Value_c2;            // Expression: 1
                                       //  Referenced by: '<S121>/Constant'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                       //  Referenced by: '<S121>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_l[2];// Expression: [1 -1]
                                            //  Referenced by: '<S121>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_pj;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S121>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_k; // Expression: 0
                                       //  Referenced by: '<S115>/Unit Delay'

  real_T Gain2_Gain_g;                 // Expression: 2*pi
                                       //  Referenced by: '<S87>/Gain2'

  real_T Constant_Value_co;            // Expression: tau
                                       //  Referenced by: '<S125>/Constant'

  real_T Constant4_Value_ed;           // Expression: 1
                                       //  Referenced by: '<S123>/Constant4'

  real_T Constant_Value_oi;            // Expression: 0
                                       //  Referenced by: '<S127>/Constant'

  real_T Constant_Value_f;             // Expression: 0
                                       //  Referenced by: '<S123>/Constant'

  real_T Constant_Value_fq;            // Expression: 1
                                       //  Referenced by: '<S129>/Constant'

  real_T Constant5_Value_d;            // Expression: 0
                                       //  Referenced by: '<S123>/Constant5'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                       //  Referenced by: '<S129>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_p[2];// Expression: [1 -1]
                                            //  Referenced by: '<S129>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_a;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S129>/Filter Differentiator TF'

  real_T ZeroGain_Gain_k;              // Expression: 0
                                       //  Referenced by: '<S128>/ZeroGain'

  real_T Gain2_Gain_j;                 // Expression: 2*pi
                                       //  Referenced by: '<S123>/Gain2'

  real_T Integrator_gainval_k;         // Computed Parameter: Integrator_gainval_k
                                       //  Referenced by: '<S127>/Integrator'

  real_T Integrator_IC_h;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S127>/Integrator'

  real_T Constant4_Value_dr;           // Expression: 1
                                       //  Referenced by: '<S124>/Constant4'

  real_T Constant2_Value_d;            // Expression: 0
                                       //  Referenced by: '<S124>/Constant2'

  real_T Integrator_gainval_b;         // Computed Parameter: Integrator_gainval_b
                                       //  Referenced by: '<S130>/Integrator'

  real_T Integrator_IC_be;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S130>/Integrator'

  real_T Gain2_Gain_gn;                // Expression: 2*pi
                                       //  Referenced by: '<S124>/Gain2'

  real_T Constant1_Value_j;            // Expression: 1
                                       //  Referenced by: '<S124>/Constant1'

  real_T Gain1_Gain_k;                 // Expression: 2*pi
                                       //  Referenced by: '<S124>/Gain1'

  real_T Constant_Value_d;             // Expression: 1
                                       //  Referenced by: '<S131>/Constant'

  real_T TSamp_WtEt_fj;                // Computed Parameter: TSamp_WtEt_fj
                                       //  Referenced by: '<S131>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_l3[2];// Expression: [1 -1]
                                            //  Referenced by: '<S131>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_j;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S131>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_n; // Expression: 0
                                       //  Referenced by: '<S125>/Unit Delay'

  real_T Gain2_Gain_mi;                // Expression: 2*pi
                                       //  Referenced by: '<S88>/Gain2'

  real_T Constant_Value_cs;            // Expression: tau
                                       //  Referenced by: '<S135>/Constant'

  real_T Constant4_Value_dg;           // Expression: 1
                                       //  Referenced by: '<S133>/Constant4'

  real_T Constant_Value_op;            // Expression: 0
                                       //  Referenced by: '<S137>/Constant'

  real_T Constant_Value_l2;            // Expression: 0
                                       //  Referenced by: '<S133>/Constant'

  real_T Constant_Value_p;             // Expression: 1
                                       //  Referenced by: '<S139>/Constant'

  real_T Constant5_Value_n;            // Expression: 0
                                       //  Referenced by: '<S133>/Constant5'

  real_T TSamp_WtEt_g;                 // Computed Parameter: TSamp_WtEt_g
                                       //  Referenced by: '<S139>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_d[2];// Expression: [1 -1]
                                            //  Referenced by: '<S139>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_l;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S139>/Filter Differentiator TF'

  real_T ZeroGain_Gain_h;              // Expression: 0
                                       //  Referenced by: '<S138>/ZeroGain'

  real_T Gain2_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S133>/Gain2'

  real_T Integrator_gainval_bp;        // Computed Parameter: Integrator_gainval_bp
                                       //  Referenced by: '<S137>/Integrator'

  real_T Integrator_IC_k;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S137>/Integrator'

  real_T Constant4_Value_aw;           // Expression: 1
                                       //  Referenced by: '<S134>/Constant4'

  real_T Constant2_Value_k;            // Expression: 0
                                       //  Referenced by: '<S134>/Constant2'

  real_T Integrator_gainval_j;         // Computed Parameter: Integrator_gainval_j
                                       //  Referenced by: '<S140>/Integrator'

  real_T Integrator_IC_kh;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S140>/Integrator'

  real_T Gain2_Gain_be;                // Expression: 2*pi
                                       //  Referenced by: '<S134>/Gain2'

  real_T Constant1_Value_ji;           // Expression: 1
                                       //  Referenced by: '<S134>/Constant1'

  real_T Gain1_Gain_d;                 // Expression: 2*pi
                                       //  Referenced by: '<S134>/Gain1'

  real_T Constant_Value_ev;            // Expression: 1
                                       //  Referenced by: '<S141>/Constant'

  real_T TSamp_WtEt_it;                // Computed Parameter: TSamp_WtEt_it
                                       //  Referenced by: '<S141>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_j[2];// Expression: [1 -1]
                                            //  Referenced by: '<S141>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_h;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S141>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_m; // Expression: 0
                                       //  Referenced by: '<S135>/Unit Delay'

  real_T Gain2_Gain_p;                 // Expression: 2*pi
                                       //  Referenced by: '<S89>/Gain2'

  real_T Constant_Value_bl;            // Expression: tau
                                       //  Referenced by: '<S145>/Constant'

  real_T Constant4_Value_h;            // Expression: 1
                                       //  Referenced by: '<S143>/Constant4'

  real_T Constant_Value_bu;            // Expression: 0
                                       //  Referenced by: '<S147>/Constant'

  real_T Constant_Value_h;             // Expression: 0
                                       //  Referenced by: '<S143>/Constant'

  real_T Constant_Value_cs4;           // Expression: 1
                                       //  Referenced by: '<S149>/Constant'

  real_T Constant5_Value_e;            // Expression: 0
                                       //  Referenced by: '<S143>/Constant5'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                       //  Referenced by: '<S149>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_e[2];// Expression: [1 -1]
                                            //  Referenced by: '<S149>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_fq;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S149>/Filter Differentiator TF'

  real_T ZeroGain_Gain_l;              // Expression: 0
                                       //  Referenced by: '<S148>/ZeroGain'

  real_T Gain2_Gain_ie;                // Expression: 2*pi
                                       //  Referenced by: '<S143>/Gain2'

  real_T Integrator_gainval_n;         // Computed Parameter: Integrator_gainval_n
                                       //  Referenced by: '<S147>/Integrator'

  real_T Integrator_IC_l;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S147>/Integrator'

  real_T Constant4_Value_f;            // Expression: 1
                                       //  Referenced by: '<S144>/Constant4'

  real_T Constant2_Value_p;            // Expression: 0
                                       //  Referenced by: '<S144>/Constant2'

  real_T Integrator_gainval_f;         // Computed Parameter: Integrator_gainval_f
                                       //  Referenced by: '<S150>/Integrator'

  real_T Integrator_IC_lm;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S150>/Integrator'

  real_T Gain2_Gain_pp;                // Expression: 2*pi
                                       //  Referenced by: '<S144>/Gain2'

  real_T Constant1_Value_p;            // Expression: 1
                                       //  Referenced by: '<S144>/Constant1'

  real_T Gain1_Gain_be;                // Expression: 2*pi
                                       //  Referenced by: '<S144>/Gain1'

  real_T Constant_Value_d0;            // Expression: 1
                                       //  Referenced by: '<S151>/Constant'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                       //  Referenced by: '<S151>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_dm[2];// Expression: [1 -1]
                                            //  Referenced by: '<S151>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_i;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S151>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_a; // Expression: 0
                                       //  Referenced by: '<S145>/Unit Delay'

  real_T Gain2_Gain_c;                 // Expression: 2*pi
                                       //  Referenced by: '<S90>/Gain2'

  real_T Constant_Value_h5;            // Expression: tau
                                       //  Referenced by: '<S155>/Constant'

  real_T Constant4_Value_h3;           // Expression: 1
                                       //  Referenced by: '<S153>/Constant4'

  real_T Constant_Value_gf;            // Expression: 0
                                       //  Referenced by: '<S157>/Constant'

  real_T Constant_Value_a;             // Expression: 0
                                       //  Referenced by: '<S153>/Constant'

  real_T Constant_Value_go;            // Expression: 1
                                       //  Referenced by: '<S159>/Constant'

  real_T Constant5_Value_p;            // Expression: 0
                                       //  Referenced by: '<S153>/Constant5'

  real_T TSamp_WtEt_l;                 // Computed Parameter: TSamp_WtEt_l
                                       //  Referenced by: '<S159>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_n[2];// Expression: [1 -1]
                                            //  Referenced by: '<S159>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_hh;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S159>/Filter Differentiator TF'

  real_T ZeroGain_Gain_e;              // Expression: 0
                                       //  Referenced by: '<S158>/ZeroGain'

  real_T Gain2_Gain_n;                 // Expression: 2*pi
                                       //  Referenced by: '<S153>/Gain2'

  real_T Integrator_gainval_l;         // Computed Parameter: Integrator_gainval_l
                                       //  Referenced by: '<S157>/Integrator'

  real_T Integrator_IC_ed;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S157>/Integrator'

  real_T Constant4_Value_o;            // Expression: 1
                                       //  Referenced by: '<S154>/Constant4'

  real_T Constant2_Value_nj;           // Expression: 0
                                       //  Referenced by: '<S154>/Constant2'

  real_T Integrator_gainval_jz;        // Computed Parameter: Integrator_gainval_jz
                                       //  Referenced by: '<S160>/Integrator'

  real_T Integrator_IC_l1;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S160>/Integrator'

  real_T Gain2_Gain_a1;                // Expression: 2*pi
                                       //  Referenced by: '<S154>/Gain2'

  real_T Constant1_Value_a;            // Expression: 1
                                       //  Referenced by: '<S154>/Constant1'

  real_T Gain1_Gain_n;                 // Expression: 2*pi
                                       //  Referenced by: '<S154>/Gain1'

  real_T Constant_Value_kx;            // Expression: 1
                                       //  Referenced by: '<S161>/Constant'

  real_T TSamp_WtEt_aa;                // Computed Parameter: TSamp_WtEt_aa
                                       //  Referenced by: '<S161>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_ea[2];// Expression: [1 -1]
                                            //  Referenced by: '<S161>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_lr;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S161>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_e; // Expression: 0
                                       //  Referenced by: '<S155>/Unit Delay'

  real_T Gain2_Gain_gl;                // Expression: 2*pi
                                       //  Referenced by: '<S91>/Gain2'

  real_T Constant_Value_ov;            // Expression: tau
                                       //  Referenced by: '<S165>/Constant'

  real_T Constant4_Value_n;            // Expression: 1
                                       //  Referenced by: '<S163>/Constant4'

  real_T Constant_Value_gh;            // Expression: 0
                                       //  Referenced by: '<S167>/Constant'

  real_T Constant_Value_jl;            // Expression: 0
                                       //  Referenced by: '<S163>/Constant'

  real_T Constant_Value_ck;            // Expression: 1
                                       //  Referenced by: '<S169>/Constant'

  real_T Constant5_Value_m;            // Expression: 0
                                       //  Referenced by: '<S163>/Constant5'

  real_T TSamp_WtEt_b;                 // Computed Parameter: TSamp_WtEt_b
                                       //  Referenced by: '<S169>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_ps[2];// Expression: [1 -1]
                                            //  Referenced by: '<S169>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_b;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S169>/Filter Differentiator TF'

  real_T ZeroGain_Gain_c;              // Expression: 0
                                       //  Referenced by: '<S168>/ZeroGain'

  real_T Gain2_Gain_iel;               // Expression: 2*pi
                                       //  Referenced by: '<S163>/Gain2'

  real_T Integrator_gainval_no;        // Computed Parameter: Integrator_gainval_no
                                       //  Referenced by: '<S167>/Integrator'

  real_T Integrator_IC_h1;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S167>/Integrator'

  real_T Constant4_Value_b;            // Expression: 1
                                       //  Referenced by: '<S164>/Constant4'

  real_T Constant2_Value_pf;           // Expression: 0
                                       //  Referenced by: '<S164>/Constant2'

  real_T Integrator_gainval_cs;        // Computed Parameter: Integrator_gainval_cs
                                       //  Referenced by: '<S170>/Integrator'

  real_T Integrator_IC_es;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S170>/Integrator'

  real_T Gain2_Gain_c1;                // Expression: 2*pi
                                       //  Referenced by: '<S164>/Gain2'

  real_T Constant1_Value_e;            // Expression: 1
                                       //  Referenced by: '<S164>/Constant1'

  real_T Gain1_Gain_a;                 // Expression: 2*pi
                                       //  Referenced by: '<S164>/Gain1'

  real_T Constant_Value_ov1;           // Expression: 1
                                       //  Referenced by: '<S171>/Constant'

  real_T TSamp_WtEt_g3;                // Computed Parameter: TSamp_WtEt_g3
                                       //  Referenced by: '<S171>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_k[2];// Expression: [1 -1]
                                            //  Referenced by: '<S171>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_hz;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S171>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_p; // Expression: 0
                                       //  Referenced by: '<S165>/Unit Delay'

  real_T TSamp_WtEt_om;                // Computed Parameter: TSamp_WtEt_om
                                       //  Referenced by: '<S47>/TSamp'

  real_T Gain2_Gain_cc;                // Expression: 2*pi
                                       //  Referenced by: '<S48>/Gain2'

  real_T Constant_Value_fp;            // Expression: tau
                                       //  Referenced by: '<S54>/Constant'

  real_T Constant4_Value_hd;           // Expression: 1
                                       //  Referenced by: '<S52>/Constant4'

  real_T Constant_Value_ah;            // Expression: 0
                                       //  Referenced by: '<S56>/Constant'

  real_T Constant_Value_e0;            // Expression: 0
                                       //  Referenced by: '<S52>/Constant'

  real_T Constant_Value_lp;            // Expression: 1
                                       //  Referenced by: '<S58>/Constant'

  real_T Constant5_Value_jy;           // Expression: 0
                                       //  Referenced by: '<S52>/Constant5'

  real_T TSamp_WtEt_je;                // Computed Parameter: TSamp_WtEt_je
                                       //  Referenced by: '<S58>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_jq[2];// Expression: [1 -1]
                                            //  Referenced by: '<S58>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ae;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S58>/Filter Differentiator TF'

  real_T ZeroGain_Gain_hq;             // Expression: 0
                                       //  Referenced by: '<S57>/ZeroGain'

  real_T Gain2_Gain_nx;                // Expression: 2*pi
                                       //  Referenced by: '<S52>/Gain2'

  real_T Integrator_gainval_gb;        // Computed Parameter: Integrator_gainval_gb
                                       //  Referenced by: '<S56>/Integrator'

  real_T Integrator_IC_m;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S56>/Integrator'

  real_T Constant4_Value_dt;           // Expression: 1
                                       //  Referenced by: '<S53>/Constant4'

  real_T Constant2_Value_ny;           // Expression: 0
                                       //  Referenced by: '<S53>/Constant2'

  real_T Integrator_gainval_k3;        // Computed Parameter: Integrator_gainval_k3
                                       //  Referenced by: '<S59>/Integrator'

  real_T Integrator_IC_g;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S59>/Integrator'

  real_T Gain2_Gain_gy;                // Expression: 2*pi
                                       //  Referenced by: '<S53>/Gain2'

  real_T Constant1_Value_j0;           // Expression: 1
                                       //  Referenced by: '<S53>/Constant1'

  real_T Gain1_Gain_e;                 // Expression: 2*pi
                                       //  Referenced by: '<S53>/Gain1'

  real_T Constant_Value_az;            // Expression: 1
                                       //  Referenced by: '<S60>/Constant'

  real_T TSamp_WtEt_bz;                // Computed Parameter: TSamp_WtEt_bz
                                       //  Referenced by: '<S60>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_o[2];// Expression: [1 -1]
                                            //  Referenced by: '<S60>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_c;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S60>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_pg;// Expression: 0
                                       //  Referenced by: '<S54>/Unit Delay'

  real_T Gain2_Gain_ju;                // Expression: 2*pi
                                       //  Referenced by: '<S49>/Gain2'

  real_T Constant_Value_l1;            // Expression: tau
                                       //  Referenced by: '<S64>/Constant'

  real_T Constant4_Value_oj;           // Expression: 1
                                       //  Referenced by: '<S62>/Constant4'

  real_T Constant_Value_nd;            // Expression: 0
                                       //  Referenced by: '<S66>/Constant'

  real_T Constant_Value_oh;            // Expression: 0
                                       //  Referenced by: '<S62>/Constant'

  real_T Constant_Value_pi;            // Expression: 1
                                       //  Referenced by: '<S68>/Constant'

  real_T Constant5_Value_b;            // Expression: 0
                                       //  Referenced by: '<S62>/Constant5'

  real_T TSamp_WtEt_go;                // Computed Parameter: TSamp_WtEt_go
                                       //  Referenced by: '<S68>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_k0[2];// Expression: [1 -1]
                                            //  Referenced by: '<S68>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_b2;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S68>/Filter Differentiator TF'

  real_T ZeroGain_Gain_d;              // Expression: 0
                                       //  Referenced by: '<S67>/ZeroGain'

  real_T Gain2_Gain_fk;                // Expression: 2*pi
                                       //  Referenced by: '<S62>/Gain2'

  real_T Integrator_gainval_kx;        // Computed Parameter: Integrator_gainval_kx
                                       //  Referenced by: '<S66>/Integrator'

  real_T Integrator_IC_oh;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S66>/Integrator'

  real_T Constant4_Value_ce;           // Expression: 1
                                       //  Referenced by: '<S63>/Constant4'

  real_T Constant2_Value_c5;           // Expression: 0
                                       //  Referenced by: '<S63>/Constant2'

  real_T Integrator_gainval_ci;        // Computed Parameter: Integrator_gainval_ci
                                       //  Referenced by: '<S69>/Integrator'

  real_T Integrator_IC_f;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S69>/Integrator'

  real_T Gain2_Gain_o;                 // Expression: 2*pi
                                       //  Referenced by: '<S63>/Gain2'

  real_T Constant1_Value_at;           // Expression: 1
                                       //  Referenced by: '<S63>/Constant1'

  real_T Gain1_Gain_p;                 // Expression: 2*pi
                                       //  Referenced by: '<S63>/Gain1'

  real_T Constant_Value_kq;            // Expression: 1
                                       //  Referenced by: '<S70>/Constant'

  real_T TSamp_WtEt_pv;                // Computed Parameter: TSamp_WtEt_pv
                                       //  Referenced by: '<S70>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_h[2];// Expression: [1 -1]
                                            //  Referenced by: '<S70>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_k;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S70>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_ew;// Expression: 0
                                       //  Referenced by: '<S64>/Unit Delay'

  real_T Gain2_Gain_op;                // Expression: 2*pi
                                       //  Referenced by: '<S50>/Gain2'

  real_T Constant_Value_or;            // Expression: tau
                                       //  Referenced by: '<S74>/Constant'

  real_T Constant4_Value_bw;           // Expression: 1
                                       //  Referenced by: '<S72>/Constant4'

  real_T Constant_Value_om;            // Expression: 0
                                       //  Referenced by: '<S76>/Constant'

  real_T Constant_Value_gl;            // Expression: 0
                                       //  Referenced by: '<S72>/Constant'

  real_T Constant_Value_gy;            // Expression: 1
                                       //  Referenced by: '<S78>/Constant'

  real_T Constant5_Value_ba;           // Expression: 0
                                       //  Referenced by: '<S72>/Constant5'

  real_T TSamp_WtEt_gy;                // Computed Parameter: TSamp_WtEt_gy
                                       //  Referenced by: '<S78>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_it[2];// Expression: [1 -1]
                                            //  Referenced by: '<S78>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_bt;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S78>/Filter Differentiator TF'

  real_T ZeroGain_Gain_f;              // Expression: 0
                                       //  Referenced by: '<S77>/ZeroGain'

  real_T Gain2_Gain_fo;                // Expression: 2*pi
                                       //  Referenced by: '<S72>/Gain2'

  real_T Integrator_gainval_gs;        // Computed Parameter: Integrator_gainval_gs
                                       //  Referenced by: '<S76>/Integrator'

  real_T Integrator_IC_c;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S76>/Integrator'

  real_T Constant4_Value_ci;           // Expression: 1
                                       //  Referenced by: '<S73>/Constant4'

  real_T Constant2_Value_i;            // Expression: 0
                                       //  Referenced by: '<S73>/Constant2'

  real_T Integrator_gainval_cd;        // Computed Parameter: Integrator_gainval_cd
                                       //  Referenced by: '<S79>/Integrator'

  real_T Integrator_IC_l2;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S79>/Integrator'

  real_T Gain2_Gain_bw;                // Expression: 2*pi
                                       //  Referenced by: '<S73>/Gain2'

  real_T Constant1_Value_c;            // Expression: 1
                                       //  Referenced by: '<S73>/Constant1'

  real_T Gain1_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S73>/Gain1'

  real_T Constant_Value_e5;            // Expression: 1
                                       //  Referenced by: '<S80>/Constant'

  real_T TSamp_WtEt_oh;                // Computed Parameter: TSamp_WtEt_oh
                                       //  Referenced by: '<S80>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_b[2];// Expression: [1 -1]
                                            //  Referenced by: '<S80>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_o;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S80>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_if;// Expression: 0
                                       //  Referenced by: '<S74>/Unit Delay'

  real_T shift_Gain;                   // Expression: 2
                                       //  Referenced by: '<S22>/shift'

  real_T Constant_Value_pl;            // Expression: 0
                                       //  Referenced by: '<S22>/Constant'

  real_T Constant1_Value_b;            // Expression: 0
                                       //  Referenced by: '<S22>/Constant1'

  real_T Constant10_Value;             // Expression: 0
                                       //  Referenced by: '<S22>/Constant10'

  real_T Constant2_Value_nc;           // Expression: 0
                                       //  Referenced by: '<S22>/Constant2'

  real_T Constant6_Value;              // Expression: 0
                                       //  Referenced by: '<S22>/Constant6'

  real_T Constant7_Value;              // Expression: 0
                                       //  Referenced by: '<S22>/Constant7'

  real_T Constant8_Value;              // Expression: 0
                                       //  Referenced by: '<S22>/Constant8'

  real_T Constant9_Value;              // Expression: 0
                                       //  Referenced by: '<S22>/Constant9'

  real_T Gain_Gain_a;                  // Expression: 1
                                       //  Referenced by: '<S22>/Gain'

  real_T Gain1_Gain_bw;                // Expression: -1
                                       //  Referenced by: '<S22>/Gain1'

  real_T Gain11_Gain;                  // Expression: -1
                                       //  Referenced by: '<S22>/Gain11'

  real_T Gain12_Gain;                  // Expression: 1
                                       //  Referenced by: '<S22>/Gain12'

  real_T Gain13_Gain;                  // Expression: -1
                                       //  Referenced by: '<S22>/Gain13'

  real_T Gain8_Gain;                   // Expression: 1
                                       //  Referenced by: '<S22>/Gain8'

  real_T Gain14_Gain;                  // Expression: 1
                                       //  Referenced by: '<S22>/Gain14'

  real_T Gain15_Gain;                  // Expression: -1
                                       //  Referenced by: '<S22>/Gain15'

  real_T Gain16_Gain;                  // Expression: 1
                                       //  Referenced by: '<S22>/Gain16'

  real_T Gain17_Gain;                  // Expression: -1
                                       //  Referenced by: '<S22>/Gain17'

  real_T Gain18_Gain;                  // Expression: 1
                                       //  Referenced by: '<S22>/Gain18'

  real_T Gain19_Gain;                  // Expression: 1
                                       //  Referenced by: '<S22>/Gain19'

  real_T Gain2_Gain_l3;                // Expression: 1
                                       //  Referenced by: '<S22>/Gain2'

  real_T Gain3_Gain_n;                 // Expression: -1
                                       //  Referenced by: '<S22>/Gain3'

  real_T Gain4_Gain_d;                 // Expression: 1
                                       //  Referenced by: '<S22>/Gain4'

  real_T Gain5_Gain_e;                 // Expression: -1
                                       //  Referenced by: '<S22>/Gain5'

  real_T Gain6_Gain;                   // Expression: 1
                                       //  Referenced by: '<S22>/Gain6'

  real_T Gain7_Gain;                   // Expression: -1
                                       //  Referenced by: '<S22>/Gain7'

  real_T Gain9_Gain;                   // Expression: 1
                                       //  Referenced by: '<S22>/Gain9'

  real_T sign_convention_Gain;         // Expression: -1
                                       //  Referenced by: '<S22>/sign_convention'

  real_T sign_convention1_Gain;        // Expression: -1
                                       //  Referenced by: '<S22>/sign_convention1'

  real_T sign_convention2_Gain;        // Expression: -1
                                       //  Referenced by: '<S22>/sign_convention2'

  real_T sign_convention3_Gain;        // Expression: -1
                                       //  Referenced by: '<S22>/sign_convention3'

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
                                       //  Referenced by: '<S22>/Gain10'

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
struct tag_RTM_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T {
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

  extern P_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B;

// Block states (auto storage)
extern DW_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_initialize(void);
  extern void ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_step(void);
  extern void ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T *const
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M;

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
//  Block '<S34>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S40>/Data Type Duplicate' : Unused code path elimination
//  Block '<S40>/Data Type Propagation' : Unused code path elimination
//  Block '<S35>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S41>/Data Type Duplicate' : Unused code path elimination
//  Block '<S41>/Data Type Propagation' : Unused code path elimination
//  Block '<S36>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S42>/Data Type Duplicate' : Unused code path elimination
//  Block '<S42>/Data Type Propagation' : Unused code path elimination
//  Block '<S37>/Data Type Duplicate' : Unused code path elimination
//  Block '<S37>/Data Type Propagation' : Unused code path elimination
//  Block '<S38>/Data Type Duplicate' : Unused code path elimination
//  Block '<S38>/Data Type Propagation' : Unused code path elimination
//  Block '<S39>/Data Type Duplicate' : Unused code path elimination
//  Block '<S39>/Data Type Propagation' : Unused code path elimination
//  Block '<S47>/Data Type Duplicate' : Unused code path elimination
//  Block '<S45>/Add' : Unused code path elimination
//  Block '<S45>/Product1' : Unused code path elimination
//  Block '<S45>/To File1' : Unused code path elimination
//  Block '<S22>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S22>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S58>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S68>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S78>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S99>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S109>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S119>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S129>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S139>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S149>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S159>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S169>/Passthrough for tuning' : Eliminate redundant data type conversion


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
//  '<Root>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform'
//  '<S1>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Allow Tinit seconds for initialization'
//  '<S2>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Odometry and Measurement model 4SW'
//  '<S3>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Odometry publisher'
//  '<S4>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Platform vel command'
//  '<S5>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE'
//  '<S6>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS  Controllers conf'
//  '<S7>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Ropod kinematic parameters2'
//  '<S8>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS Smart wheels conf'
//  '<S9>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROS base conf'
//  '<S10>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1'
//  '<S11>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr'
//  '<S12>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr'
//  '<S13>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Odometry and Measurement model 4SW/Jqwl_matrix'
//  '<S14>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Odometry and Measurement model 4SW/pos_rot_matrix'
//  '<S15>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Odometry publisher/Blank Message'
//  '<S16>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Odometry publisher/Publish'
//  '<S17>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Platform vel command/Subscribe1'
//  '<S18>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Platform vel command/Subscribe1/Enabled Subsystem'
//  '<S19>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Initialization switch'
//  '<S20>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_sens'
//  '<S21>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_sens1'
//  '<S22>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_torque_cmd'
//  '<S23>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1'
//  '<S24>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2'
//  '<S25>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3'
//  '<S26>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4'
//  '<S27>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Subsystem'
//  '<S28>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/empywheel'
//  '<S29>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel'
//  '<S30>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel'
//  '<S31>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel'
//  '<S32>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel'
//  '<S33>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Compare To Constant'
//  '<S34>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Rate Limiter Dynamic'
//  '<S35>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Rate Limiter Dynamic1'
//  '<S36>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Rate Limiter Dynamic2'
//  '<S37>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Saturation Dynamic'
//  '<S38>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Saturation Dynamic1'
//  '<S39>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Saturation Dynamic2'
//  '<S40>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Rate Limiter Dynamic/Saturation Dynamic'
//  '<S41>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Rate Limiter Dynamic1/Saturation Dynamic'
//  '<S42>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/Subscriber vel commands1/Rate Limiter Dynamic2/Saturation Dynamic'
//  '<S43>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Inverse Kinematics 4SW'
//  '<S44>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller'
//  '<S45>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Torque distribution'
//  '<S46>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Inverse Kinematics 4SW/Gl_matrix'
//  '<S47>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/Discrete Derivative'
//  '<S48>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X'
//  '<S49>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y'
//  '<S50>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta'
//  '<S51>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Discrete Varying Lowpass3'
//  '<S52>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)'
//  '<S53>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Lead-Lag (Tustin)'
//  '<S54>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Discrete Varying Lowpass3/FOS'
//  '<S55>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S56>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S57>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S58>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S59>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S60>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_X/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S61>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Discrete Varying Lowpass3'
//  '<S62>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)'
//  '<S63>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Lead-Lag (Tustin)'
//  '<S64>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Discrete Varying Lowpass3/FOS'
//  '<S65>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S66>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S67>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S68>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S69>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S70>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_Y/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S71>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Discrete Varying Lowpass3'
//  '<S72>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)'
//  '<S73>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Lead-Lag (Tustin)'
//  '<S74>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Discrete Varying Lowpass3/FOS'
//  '<S75>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S76>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S77>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S78>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S79>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S80>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller_theta/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S81>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Torque distribution/Gl_matrices'
//  '<S82>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/platform vel cntr/Torque distribution/platform_forces_2_tau_dist_optimal'
//  '<S83>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller'
//  '<S84>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1'
//  '<S85>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2'
//  '<S86>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3'
//  '<S87>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4'
//  '<S88>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5'
//  '<S89>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6'
//  '<S90>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7'
//  '<S91>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8'
//  '<S92>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3'
//  '<S93>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)'
//  '<S94>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)'
//  '<S95>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS'
//  '<S96>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S97>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S98>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S99>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S100>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S101>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S102>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3'
//  '<S103>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)'
//  '<S104>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)'
//  '<S105>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS'
//  '<S106>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S107>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S108>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S109>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S110>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S111>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S112>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3'
//  '<S113>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)'
//  '<S114>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)'
//  '<S115>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS'
//  '<S116>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S117>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S118>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S119>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S120>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S121>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S122>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3'
//  '<S123>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)'
//  '<S124>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)'
//  '<S125>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS'
//  '<S126>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S127>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S128>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S129>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S130>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S131>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S132>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3'
//  '<S133>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)'
//  '<S134>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)'
//  '<S135>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS'
//  '<S136>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S137>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S138>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S139>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S140>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S141>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S142>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3'
//  '<S143>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)'
//  '<S144>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)'
//  '<S145>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS'
//  '<S146>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S147>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S148>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S149>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S150>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S151>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S152>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3'
//  '<S153>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)'
//  '<S154>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)'
//  '<S155>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS'
//  '<S156>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S157>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S158>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S159>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S160>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S161>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S162>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3'
//  '<S163>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)'
//  '<S164>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)'
//  '<S165>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS'
//  '<S166>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S167>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S168>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3/Clamping circuit'
//  '<S169>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S170>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S171>' : 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'

#endif                                 // RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
