//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_node.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr_node'.
//
// Model version                  : 1.257
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Thu Jun 14 14:19:07 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_node_h_
#define RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_node_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef ROPOD_4Wheel_Tdistkinb_cntr_node_COMMON_INCLUDES_
# define ROPOD_4Wheel_Tdistkinb_cntr_node_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slros_initialize.h"
#endif                                 // ROPOD_4Wheel_Tdistkinb_cntr_node_COMMON_INCLUDES_ 

#include "ROPOD_4Wheel_Tdistkinb_cntr_node_types.h"
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
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_nav_msgs_Odometry BusAssignment;// '<S3>/Bus Assignment' 
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
  real_T Product9[8];                  // '<S78>/Product9'
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_geometry_msgs_Twist In1;// '<S18>/In1' 
  real_T SFunction[40];                // '<S28>/S-Function'
  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_geometry_msgs_Twist b_varargout_2;
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
  real_T Sum_oa[3];                    // '<S43>/Sum'
  real_T Product3[3];                  // '<S2>/Product3'
  real_T dv2[3];
  real_T work_c[3];
  char_T cv8[22];
  char_T cv9[21];
  real_T EnabledDelay;                 // '<S10>/Enabled Delay'
  real_T Gain1;                        // '<S10>/Gain1'
  real_T Gain;                         // '<S10>/Gain'
  real_T Gain3;                        // '<S10>/Gain3'
  real_T Gain2;                        // '<S10>/Gain2'
  real_T Gain5;                        // '<S10>/Gain5'
  real_T Gain4;                        // '<S10>/Gain4'
  real_T Gain2_c;                      // '<S88>/Gain2'
  real_T Gain1_m;                      // '<S89>/Gain1'
  real_T Divide1;                      // '<S89>/Divide1'
  real_T Gain2_l;                      // '<S97>/Gain2'
  real_T Gain1_n;                      // '<S98>/Gain1'
  real_T Divide1_h;                    // '<S98>/Divide1'
  real_T Gain2_e;                      // '<S106>/Gain2'
  real_T Gain1_o;                      // '<S107>/Gain1'
  real_T Divide1_f;                    // '<S107>/Divide1'
  real_T Gain2_b;                      // '<S115>/Gain2'
  real_T Gain1_h;                      // '<S116>/Gain1'
  real_T Divide1_j;                    // '<S116>/Divide1'
  real_T Gain2_d;                      // '<S124>/Gain2'
  real_T Gain1_h0;                     // '<S125>/Gain1'
  real_T Divide1_g;                    // '<S125>/Divide1'
  real_T Gain2_m;                      // '<S133>/Gain2'
  real_T Gain1_e;                      // '<S134>/Gain1'
  real_T Divide1_i;                    // '<S134>/Divide1'
  real_T Gain2_h;                      // '<S142>/Gain2'
  real_T Gain1_l;                      // '<S143>/Gain1'
  real_T Divide1_e;                    // '<S143>/Divide1'
  real_T Gain2_dy;                     // '<S151>/Gain2'
  real_T Gain1_p;                      // '<S152>/Gain1'
  real_T Divide1_b;                    // '<S152>/Divide1'
  real_T Gain2_j;                      // '<S50>/Gain2'
  real_T Gain1_a;                      // '<S51>/Gain1'
  real_T Divide1_o;                    // '<S51>/Divide1'
  real_T Gain2_cy;                     // '<S59>/Gain2'
  real_T Gain1_a5;                     // '<S60>/Gain1'
  real_T Divide1_k;                    // '<S60>/Divide1'
  real_T Gain2_mp;                     // '<S68>/Gain2'
  real_T Gain1_i;                      // '<S69>/Gain1'
  real_T Divide1_gs;                   // '<S69>/Divide1'
  real_T Gain3_g;                      // '<S44>/Gain3'
  real_T Switch1[8];                   // '<S19>/Switch1'
  real_T command2;                     // '<S21>/Constant'
  real_T timestamp;                    // '<S21>/Constant10'
  real_T timestamp_k;                  // '<S21>/Constant2'
  real_T command2_p;                   // '<S21>/Constant6'
  real_T timestamp_a;                  // '<S21>/Constant8'
  real_T command2_i;                   // '<S21>/Constant9'
  real_T limit1_p;                     // '<S21>/Gain'
  real_T limit1_n;                     // '<S21>/Gain1'
  real_T command1;                     // '<S21>/Gain10'
  real_T command1_b;                   // '<S21>/Gain8'
  real_T limit1_n_c;                   // '<S21>/Gain15'
  real_T limit2_p;                     // '<S21>/Gain16'
  real_T limit2_n;                     // '<S21>/Gain17'
  real_T command1_bn;                  // '<S21>/Gain18'
  real_T limit1_p_d;                   // '<S21>/Gain19'
  real_T limit2_p_m;                   // '<S21>/Gain2'
  real_T limit2_n_n;                   // '<S21>/Gain3'
  real_T limit1_p_m;                   // '<S21>/Gain4'
  real_T limit1_n_b;                   // '<S21>/Gain5'
  real_T limit2_p_g;                   // '<S21>/Gain6'
  real_T limit2_n_m;                   // '<S21>/Gain7'
  real_T setpoint2;                    // '<S21>/sign_convention'
  real_T setpoint2_g;                  // '<S21>/sign_convention1'
  real_T setpoint2_a;                  // '<S21>/sign_convention3'
  real_T g;                            // '<S153>/MATLAB Function'
  real_T a;                            // '<S153>/MATLAB Function'
  real_T g_l;                          // '<S144>/MATLAB Function'
  real_T a_e;                          // '<S144>/MATLAB Function'
  real_T g_a;                          // '<S135>/MATLAB Function'
  real_T a_b;                          // '<S135>/MATLAB Function'
  real_T g_j;                          // '<S126>/MATLAB Function'
  real_T a_k;                          // '<S126>/MATLAB Function'
  real_T g_ay;                         // '<S117>/MATLAB Function'
  real_T a_m;                          // '<S117>/MATLAB Function'
  real_T g_p;                          // '<S108>/MATLAB Function'
  real_T a_d;                          // '<S108>/MATLAB Function'
  real_T g_d;                          // '<S99>/MATLAB Function'
  real_T a_l;                          // '<S99>/MATLAB Function'
  real_T g_b;                          // '<S90>/MATLAB Function'
  real_T a_a;                          // '<S90>/MATLAB Function'
  real_T g_e;                          // '<S70>/MATLAB Function'
  real_T a_n;                          // '<S70>/MATLAB Function'
  real_T g_f;                          // '<S61>/MATLAB Function'
  real_T a_g;                          // '<S61>/MATLAB Function'
  real_T g_lz;                         // '<S52>/MATLAB Function'
  real_T a_mi;                         // '<S52>/MATLAB Function'
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
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t15;
  real_T t17;
  real_T t18;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
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
  real_T t13;
  real_T t49;
  real_T t50;
  real_T deltafalllimit;               // '<S35>/delta fall limit'
  real_T deltafalllimit_o;             // '<S34>/delta fall limit'
  real_T deltafalllimit_b;             // '<S33>/delta fall limit'
  real_T Switch_j;                     // '<S10>/Switch'
  real_T max_current;                  // '<S8>/Get Parameter2'
  real_T LL_pole_fhz_n;                // '<S6>/Get Parameter5'
  real_T LL_zero_fhz_m;                // '<S6>/Get Parameter4'
  real_T I_freq_hz_e;                  // '<S6>/Get Parameter3'
  real_T LPF_fhz_n;                    // '<S6>/Get Parameter6'
  real_T LL_pole_fhz;                  // '<S6>/Get Parameter13'
  real_T LL_zero_fhz;                  // '<S6>/Get Parameter12'
  real_T I_freq_hz;                    // '<S6>/Get Parameter11'
  real_T LPF_fhz;                      // '<S6>/Get Parameter14'
  real_T DOut_au;                      // '<S155>/DOut'
  real_T DOut_h;                       // '<S148>/DOut'
  real_T DOut_ld;                      // '<S146>/DOut'
  real_T DOut_lh;                      // '<S139>/DOut'
  real_T DOut_d;                       // '<S137>/DOut'
  real_T DOut_lp;                      // '<S130>/DOut'
  real_T DOut_bg;                      // '<S128>/DOut'
  real_T DOut_o;                       // '<S121>/DOut'
  real_T DOut_i;                       // '<S119>/DOut'
  real_T DOut_l;                       // '<S112>/DOut'
  real_T DOut_m;                       // '<S110>/DOut'
  real_T DOut_b;                       // '<S103>/DOut'
  real_T DOut_a2;                      // '<S101>/DOut'
  real_T DOut_a;                       // '<S94>/DOut'
  real_T DOut;                         // '<S92>/DOut'
  real_T POut_io;                      // '<S155>/POut'
  real_T POut_le;                      // '<S146>/POut'
  real_T POut_h;                       // '<S137>/POut'
  real_T POut_os;                      // '<S128>/POut'
  real_T POut_k;                       // '<S119>/POut'
  real_T POut_i;                       // '<S110>/POut'
  real_T POut_l;                       // '<S101>/POut'
  real_T POut;                         // '<S92>/POut'
  real_T FilterDifferentiatorTF_tmp_ho;
  real_T FilterDifferentiatorTF_tmp_hi2;
  real_T FilterDifferentiatorTF_tmp_fw;
  real_T FilterDifferentiatorTF_tmp_f;
  real_T FilterDifferentiatorTF_tmp_k;
  real_T FilterDifferentiatorTF_tmp_hi;
  real_T FilterDifferentiatorTF_tmp_pt;
  real_T FilterDifferentiatorTF_tmp_m;
  real_T FilterDifferentiatorTF_tmp_h;
  real_T FilterDifferentiatorTF_tmp_c;
  real_T FilterDifferentiatorTF_tmp_pz;
  real_T FilterDifferentiatorTF_tmp_e;
  real_T FilterDifferentiatorTF_tmp_b;
  real_T FilterDifferentiatorTF_tmp_p;
  real_T FilterDifferentiatorTF_tmp;
  real_T Integrator_i;
  real_T Integrator_op;
  real_T Integrator_fc;
  real_T Integrator_oa;
  real_T Integrator_c;
  real_T Integrator_o;
  real_T Integrator;
  real_T rtb_Switch_idx_2;
  real_T rtb_Switch_idx_0;
  real_T rtb_Switch_idx_1;
  real_T rtb_Switch_idx_3;
  real_T t8_tmp;
  real_T t17_tmp;
  real_T t30_tmp;
  real_T t31_tmp;
  real_T t41_tmp;
  real_T rtb_TmpSignalConversionAtSFun_f;
  real_T Integrator_c_tmp;
  real_T rtb_POut_i_tmp;
  real_T Integrator_oa_tmp;
  real_T rtb_POut_k_tmp;
  real_T Integrator_fc_tmp;
  real_T rtb_POut_os_tmp;
  real_T Integrator_op_tmp;
  real_T rtb_POut_h_tmp;
  real_T Integrator_i_tmp;
  real_T rtb_POut_le_tmp;
  real_T rtb_POut_io_tmp;
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
  real_T scale_g;
  real_T absxk_g;
  real_T t_m;
  real_T scale_n;
  real_T absxk_p;
  real_T t_l;
  real_T c;
  real_T scale_j;
  int32_T ECAT_Interface_i;            // '<S5>/ECAT_Interface'
  int32_T k;
  int32_T i0;
  int32_T i1;
  int32_T rtb_Gtl_tmp;
  int32_T k_d;
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
  int32_T i_g;
  int32_T knt;
  int32_T lastv_l;
  int32_T lastc_d;
  int32_T coltop_d;
  uint16_T BitwiseOperator1;           // '<S21>/Bitwise Operator1'
  uint16_T BitwiseOperator2;           // '<S21>/Bitwise Operator2'
} B_ROPOD_4Wheel_Tdistkinb_cntr_node_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_bl_kd_T obj; // '<S9>/Get Parameter'
  robotics_slros_internal_bl_kd_T obj_f;// '<S9>/Get Parameter1'
  robotics_slros_internal_bl_kd_T obj_n;// '<S9>/Get Parameter2'
  robotics_slros_internal_bl_kd_T obj_i;// '<S9>/Get Parameter3'
  robotics_slros_internal_bl_kd_T obj_k;// '<S8>/Get Parameter1'
  robotics_slros_internal_bl_kd_T obj_m;// '<S8>/Get Parameter3'
  robotics_slros_internal_bl_kd_T obj_i4;// '<S8>/Get Parameter4'
  robotics_slros_internal_bl_kd_T obj_b;// '<S8>/Get Parameter5'
  robotics_slros_internal_bl_kd_T obj_h;// '<S8>/Get Parameter2'
  robotics_slros_internal_bl_kd_T obj_bg;// '<S8>/Get Parameter'
  robotics_slros_internal_bl_kd_T obj_be;// '<S7>/Get Parameter'
  robotics_slros_internal_bl_kd_T obj_l;// '<S7>/Get Parameter11'
  robotics_slros_internal_bl_kd_T obj_fa;// '<S7>/Get Parameter12'
  robotics_slros_internal_bl_kd_T obj_p;// '<S7>/Get Parameter13'
  robotics_slros_internal_bl_kd_T obj_l1;// '<S7>/Get Parameter14'
  robotics_slros_internal_bl_kd_T obj_pe;// '<S7>/Get Parameter15'
  robotics_slros_internal_bl_kd_T obj_g;// '<S7>/Get Parameter16'
  robotics_slros_internal_bl_kd_T obj_bc;// '<S7>/Get Parameter17'
  robotics_slros_internal_bl_kd_T obj_hv;// '<S7>/Get Parameter1'
  robotics_slros_internal_bl_kd_T obj_j;// '<S7>/Get Parameter2'
  robotics_slros_internal_bl_kd_T obj_e;// '<S7>/Get Parameter3'
  robotics_slros_internal_bl_kd_T obj_jj;// '<S7>/Get Parameter4'
  robotics_slros_internal_bl_kd_T obj_d;// '<S7>/Get Parameter5'
  robotics_slros_internal_bl_kd_T obj_ep;// '<S7>/Get Parameter6'
  robotics_slros_internal_bl_kd_T obj_lm;// '<S7>/Get Parameter7'
  robotics_slros_internal_bl_kd_T obj_ew;// '<S7>/Get Parameter8'
  robotics_slros_internal_bl_kd_T obj_nj;// '<S7>/Get Parameter9'
  robotics_slros_internal_bl_kd_T obj_b1;// '<S7>/Get Parameter10'
  robotics_slros_internal_bl_kd_T obj_ft;// '<S6>/Get Parameter14'
  robotics_slros_internal_bl_kd_T obj_pz;// '<S6>/Get Parameter10'
  robotics_slros_internal_bl_kd_T obj_jt;// '<S6>/Get Parameter11'
  robotics_slros_internal_bl_kd_T obj_da;// '<S6>/Get Parameter12'
  robotics_slros_internal_bl_kd_T obj_e5;// '<S6>/Get Parameter13'
  robotics_slros_internal_bl_kd_T obj_c;// '<S6>/Get Parameter6'
  robotics_slros_internal_bl_kd_T obj_mn;// '<S6>/Get Parameter'
  robotics_slros_internal_bl_kd_T obj_d0;// '<S6>/Get Parameter3'
  robotics_slros_internal_bl_kd_T obj_ey;// '<S6>/Get Parameter4'
  robotics_slros_internal_bl_kd_T obj_g0;// '<S6>/Get Parameter5'
  robotics_slros_internal_bl_kd_T obj_ch;// '<S6>/Get Parameter9'
  robotics_slros_internal_bl_kd_T obj_fy;// '<S6>/Get Parameter1'
  robotics_slros_internal_bl_kd_T obj_hq;// '<S6>/Get Parameter2'
  robotics_slros_internal_bl_kd_T obj_eq;// '<S6>/Get Parameter7'
  robotics_slros_internal_bl_kd_T obj_a;// '<S6>/Get Parameter8'
  real_T EnabledDelay_DSTATE;          // '<S10>/Enabled Delay'
  real_T DelayInput2_DSTATE;           // '<S33>/Delay Input2'
  real_T DelayInput2_DSTATE_f;         // '<S34>/Delay Input2'
  real_T DelayInput2_DSTATE_k;         // '<S35>/Delay Input2'
  real_T Integrator_DSTATE;            // '<S92>/Integrator'
  real_T FilterDifferentiatorTF_states;// '<S93>/Filter Differentiator TF'
  real_T Integrator_DSTATE_l;          // '<S94>/Integrator'
  real_T FilterDifferentiatorTF_states_l;// '<S95>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE;             // '<S90>/Unit Delay'
  real_T Integrator_DSTATE_f;          // '<S101>/Integrator'
  real_T FilterDifferentiatorTF_states_b;// '<S102>/Filter Differentiator TF'
  real_T Integrator_DSTATE_h;          // '<S103>/Integrator'
  real_T FilterDifferentiatorTF_states_o;// '<S104>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_c;           // '<S99>/Unit Delay'
  real_T Integrator_DSTATE_i;          // '<S110>/Integrator'
  real_T FilterDifferentiatorTF_states_m;// '<S111>/Filter Differentiator TF'
  real_T Integrator_DSTATE_hs;         // '<S112>/Integrator'
  real_T FilterDifferentiatorTF_state_bh;// '<S113>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_d;           // '<S108>/Unit Delay'
  real_T Integrator_DSTATE_m;          // '<S119>/Integrator'
  real_T FilterDifferentiatorTF_states_f;// '<S120>/Filter Differentiator TF'
  real_T Integrator_DSTATE_b;          // '<S121>/Integrator'
  real_T FilterDifferentiatorTF_states_k;// '<S122>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_cy;          // '<S117>/Unit Delay'
  real_T Integrator_DSTATE_e;          // '<S128>/Integrator'
  real_T FilterDifferentiatorTF_states_d;// '<S129>/Filter Differentiator TF'
  real_T Integrator_DSTATE_g;          // '<S130>/Integrator'
  real_T FilterDifferentiatorTF_state_mj;// '<S131>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_o;           // '<S126>/Unit Delay'
  real_T Integrator_DSTATE_mc;         // '<S137>/Integrator'
  real_T FilterDifferentiatorTF_states_e;// '<S138>/Filter Differentiator TF'
  real_T Integrator_DSTATE_n;          // '<S139>/Integrator'
  real_T FilterDifferentiatorTF_states_n;// '<S140>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_cd;          // '<S135>/Unit Delay'
  real_T Integrator_DSTATE_c;          // '<S146>/Integrator'
  real_T FilterDifferentiatorTF_state_l0;// '<S147>/Filter Differentiator TF'
  real_T Integrator_DSTATE_n3;         // '<S148>/Integrator'
  real_T FilterDifferentiatorTF_state_eh;// '<S149>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_j;           // '<S144>/Unit Delay'
  real_T Integrator_DSTATE_fp;         // '<S155>/Integrator'
  real_T FilterDifferentiatorTF_state_es;// '<S156>/Filter Differentiator TF'
  real_T Integrator_DSTATE_gz;         // '<S157>/Integrator'
  real_T FilterDifferentiatorTF_states_j;// '<S158>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_d5;          // '<S153>/Unit Delay'
  real_T Integrator_DSTATE_ig;         // '<S54>/Integrator'
  real_T FilterDifferentiatorTF_state_er;// '<S55>/Filter Differentiator TF'
  real_T Integrator_DSTATE_j;          // '<S56>/Integrator'
  real_T FilterDifferentiatorTF_state_nl;// '<S57>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_b;           // '<S52>/Unit Delay'
  real_T Integrator_DSTATE_n0;         // '<S63>/Integrator'
  real_T FilterDifferentiatorTF_states_a;// '<S64>/Filter Differentiator TF'
  real_T Integrator_DSTATE_cj;         // '<S65>/Integrator'
  real_T FilterDifferentiatorTF_state_ml;// '<S66>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_n;           // '<S61>/Unit Delay'
  real_T Integrator_DSTATE_gj;         // '<S72>/Integrator'
  real_T FilterDifferentiatorTF_state_bm;// '<S73>/Filter Differentiator TF'
  real_T Integrator_DSTATE_hn;         // '<S74>/Integrator'
  real_T FilterDifferentiatorTF_state_ou;// '<S75>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_de;          // '<S70>/Unit Delay'
  real_T DiscreteTimeIntegrator_DSTATE[3];// '<S2>/Discrete-Time Integrator'
  real_T ECAT_Interface_RWORK[13];     // '<S5>/ECAT_Interface'
  robotics_slcore_internal_bloc_T obj_nv;// '<S3>/Coordinate Transformation Conversion' 
  robotics_slros_internal_block_T obj_hy;// '<S16>/SinkBlock'
  robotics_slros_internal_blo_k_T obj_a1;// '<S17>/SourceBlock'
  int8_T Integrator_PrevResetState;    // '<S92>/Integrator'
  int8_T Integrator_PrevResetState_d;  // '<S101>/Integrator'
  int8_T Integrator_PrevResetState_n;  // '<S110>/Integrator'
  int8_T Integrator_PrevResetState_e;  // '<S119>/Integrator'
  int8_T Integrator_PrevResetState_o;  // '<S128>/Integrator'
  int8_T Integrator_PrevResetState_l;  // '<S137>/Integrator'
  int8_T Integrator_PrevResetState_p;  // '<S146>/Integrator'
  int8_T Integrator_PrevResetState_f;  // '<S155>/Integrator'
  int8_T Integrator_PrevResetState_g;  // '<S54>/Integrator'
  int8_T Integrator_PrevResetState_k;  // '<S63>/Integrator'
  int8_T Integrator_PrevResetState_np; // '<S72>/Integrator'
} DW_ROPOD_4Wheel_Tdistkinb_cntr_node_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState FilterDifferentiatorTF_Reset_ZC;// '<S93>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__g;// '<S102>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__k;// '<S111>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__c;// '<S120>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_gp;// '<S129>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__e;// '<S138>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_gs;// '<S147>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_e2;// '<S156>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_gy;// '<S55>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_gf;// '<S64>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_kl;// '<S73>/Filter Differentiator TF' 
} PrevZCX_ROPOD_4Wheel_Tdistkinb_cntr_node_T;

// Parameters (auto storage)
struct P_ROPOD_4Wheel_Tdistkinb_cntr_node_T_ {
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

  real_T sw_tau_2_curr;                // Variable: sw_tau_2_curr
                                       //  Referenced by:
                                       //    '<S26>/Gain3'
                                       //    '<S44>/Gain3'

  real_T CompareToConstant_const;      // Mask Parameter: CompareToConstant_const
                                       //  Referenced by: '<S32>/Constant'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S15>/Constant'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                                      //  Referenced by: '<S18>/Out1'

  SL_Bus_ROPOD_4Wheel_Tdistkinb_cntr_node_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                      //  Referenced by: '<S17>/Constant'

  real_T MovinfaroundSWaxiscenter_Value[8];// Expression: [2 -2 2 -2 2 -2 2 -2]
                                           //  Referenced by: '<S19>/Movinf around SW axis center'

  real_T signconvention_Gain;          // Expression: -1
                                       //  Referenced by: '<S20>/sign convention'

  real_T signconvention1_Gain;         // Expression: -1
                                       //  Referenced by: '<S20>/sign convention1'

  real_T Constant5_Value;              // Expression: 0
                                       //  Referenced by: '<S27>/Constant5'

  real_T Constant17_Value;             // Expression: 0
                                       //  Referenced by: '<S27>/Constant17'

  real_T signconvention2_Gain;         // Expression: -1
                                       //  Referenced by: '<S20>/sign convention2'

  real_T signconvention3_Gain;         // Expression: -1
                                       //  Referenced by: '<S20>/sign convention3'

  real_T Constant2_Value[8];           // Expression: [0 0 0 0 0 0 0 0]
                                       //  Referenced by: '<S20>/Constant2'

  real_T Constant20_Value;             // Expression: 0
                                       //  Referenced by: '<S27>/Constant20'

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
                                       //  Referenced by: '<S79>/Gain2'

  real_T Constant_Value_i;             // Expression: tau
                                       //  Referenced by: '<S90>/Constant'

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

  real_T sampletime_WtEt;              // Computed Parameter: sampletime_WtEt
                                       //  Referenced by: '<S33>/sample time'

  real_T Constant3_Value;              // Expression: 0
                                       //  Referenced by: '<S10>/Constant3'

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

  real_T Constant_Value_n[8];          // Expression: [1 1 1 1 0 0 1 1]
                                       //  Referenced by: '<Root>/Constant'

  real_T Constant4_Value;              // Expression: 1
                                       //  Referenced by: '<S88>/Constant4'

  real_T Gain2_Gain_i;                 // Expression: 2*pi
                                       //  Referenced by: '<S88>/Gain2'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                       //  Referenced by: '<S92>/Integrator'

  real_T Integrator_IC;                // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S92>/Integrator'

  real_T Constant_Value_o;             // Expression: 0
                                       //  Referenced by: '<S88>/Constant'

  real_T Constant_Value_nr;            // Expression: 1
                                       //  Referenced by: '<S93>/Constant'

  real_T Constant5_Value_l;            // Expression: 0
                                       //  Referenced by: '<S88>/Constant5'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                       //  Referenced by: '<S93>/TSamp'

  real_T FilterDifferentiatorTF_NumCoef[2];// Expression: [1 -1]
                                           //  Referenced by: '<S93>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_InitialS;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S93>/Filter Differentiator TF'

  real_T Constant4_Value_k;            // Expression: 1
                                       //  Referenced by: '<S89>/Constant4'

  real_T Constant2_Value_m;            // Expression: 0
                                       //  Referenced by: '<S89>/Constant2'

  real_T Integrator_gainval_i;         // Computed Parameter: Integrator_gainval_i
                                       //  Referenced by: '<S94>/Integrator'

  real_T Integrator_IC_b;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S94>/Integrator'

  real_T Gain2_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S89>/Gain2'

  real_T Constant1_Value_d;            // Expression: 1
                                       //  Referenced by: '<S89>/Constant1'

  real_T Gain1_Gain_c;                 // Expression: 2*pi
                                       //  Referenced by: '<S89>/Gain1'

  real_T Constant_Value_b;             // Expression: 1
                                       //  Referenced by: '<S95>/Constant'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                       //  Referenced by: '<S95>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_a[2];// Expression: [1 -1]
                                            //  Referenced by: '<S95>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_p;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S95>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                       //  Referenced by: '<S90>/Unit Delay'

  real_T Gain2_Gain_dw;                // Expression: 2*pi
                                       //  Referenced by: '<S80>/Gain2'

  real_T Constant_Value_f;             // Expression: tau
                                       //  Referenced by: '<S99>/Constant'

  real_T Constant4_Value_d;            // Expression: 1
                                       //  Referenced by: '<S97>/Constant4'

  real_T Gain2_Gain_l;                 // Expression: 2*pi
                                       //  Referenced by: '<S97>/Gain2'

  real_T Integrator_gainval_a;         // Computed Parameter: Integrator_gainval_a
                                       //  Referenced by: '<S101>/Integrator'

  real_T Integrator_IC_m;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S101>/Integrator'

  real_T Constant_Value_fb;            // Expression: 0
                                       //  Referenced by: '<S97>/Constant'

  real_T Constant_Value_h;             // Expression: 1
                                       //  Referenced by: '<S102>/Constant'

  real_T Constant5_Value_g;            // Expression: 0
                                       //  Referenced by: '<S97>/Constant5'

  real_T TSamp_WtEt_a;                 // Computed Parameter: TSamp_WtEt_a
                                       //  Referenced by: '<S102>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_l[2];// Expression: [1 -1]
                                            //  Referenced by: '<S102>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_j;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S102>/Filter Differentiator TF'

  real_T Constant4_Value_a;            // Expression: 1
                                       //  Referenced by: '<S98>/Constant4'

  real_T Constant2_Value_k;            // Expression: 0
                                       //  Referenced by: '<S98>/Constant2'

  real_T Integrator_gainval_m;         // Computed Parameter: Integrator_gainval_m
                                       //  Referenced by: '<S103>/Integrator'

  real_T Integrator_IC_e;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S103>/Integrator'

  real_T Gain2_Gain_h;                 // Expression: 2*pi
                                       //  Referenced by: '<S98>/Gain2'

  real_T Constant1_Value_m;            // Expression: 1
                                       //  Referenced by: '<S98>/Constant1'

  real_T Gain1_Gain_p;                 // Expression: 2*pi
                                       //  Referenced by: '<S98>/Gain1'

  real_T Constant_Value_m;             // Expression: 1
                                       //  Referenced by: '<S104>/Constant'

  real_T TSamp_WtEt_j;                 // Computed Parameter: TSamp_WtEt_j
                                       //  Referenced by: '<S104>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_lb[2];// Expression: [1 -1]
                                            //  Referenced by: '<S104>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_g;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S104>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_j; // Expression: 0
                                       //  Referenced by: '<S99>/Unit Delay'

  real_T Gain2_Gain_a;                 // Expression: 2*pi
                                       //  Referenced by: '<S81>/Gain2'

  real_T Constant_Value_f4;            // Expression: tau
                                       //  Referenced by: '<S108>/Constant'

  real_T Constant4_Value_h;            // Expression: 1
                                       //  Referenced by: '<S106>/Constant4'

  real_T Gain2_Gain_hv;                // Expression: 2*pi
                                       //  Referenced by: '<S106>/Gain2'

  real_T Integrator_gainval_d;         // Computed Parameter: Integrator_gainval_d
                                       //  Referenced by: '<S110>/Integrator'

  real_T Integrator_IC_i;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S110>/Integrator'

  real_T Constant_Value_bv;            // Expression: 0
                                       //  Referenced by: '<S106>/Constant'

  real_T Constant_Value_k;             // Expression: 1
                                       //  Referenced by: '<S111>/Constant'

  real_T Constant5_Value_c;            // Expression: 0
                                       //  Referenced by: '<S106>/Constant5'

  real_T TSamp_WtEt_g;                 // Computed Parameter: TSamp_WtEt_g
                                       //  Referenced by: '<S111>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_h[2];// Expression: [1 -1]
                                            //  Referenced by: '<S111>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_o;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S111>/Filter Differentiator TF'

  real_T Constant4_Value_e;            // Expression: 1
                                       //  Referenced by: '<S107>/Constant4'

  real_T Constant2_Value_ko;           // Expression: 0
                                       //  Referenced by: '<S107>/Constant2'

  real_T Integrator_gainval_p;         // Computed Parameter: Integrator_gainval_p
                                       //  Referenced by: '<S112>/Integrator'

  real_T Integrator_IC_n;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S112>/Integrator'

  real_T Gain2_Gain_ft;                // Expression: 2*pi
                                       //  Referenced by: '<S107>/Gain2'

  real_T Constant1_Value_l;            // Expression: 1
                                       //  Referenced by: '<S107>/Constant1'

  real_T Gain1_Gain_g;                 // Expression: 2*pi
                                       //  Referenced by: '<S107>/Gain1'

  real_T Constant_Value_d;             // Expression: 1
                                       //  Referenced by: '<S113>/Constant'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                       //  Referenced by: '<S113>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_j[2];// Expression: [1 -1]
                                            //  Referenced by: '<S113>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_e;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S113>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_h; // Expression: 0
                                       //  Referenced by: '<S108>/Unit Delay'

  real_T Gain2_Gain_az;                // Expression: 2*pi
                                       //  Referenced by: '<S82>/Gain2'

  real_T Constant_Value_n3;            // Expression: tau
                                       //  Referenced by: '<S117>/Constant'

  real_T Constant4_Value_o;            // Expression: 1
                                       //  Referenced by: '<S115>/Constant4'

  real_T Gain2_Gain_e;                 // Expression: 2*pi
                                       //  Referenced by: '<S115>/Gain2'

  real_T Integrator_gainval_aj;        // Computed Parameter: Integrator_gainval_aj
                                       //  Referenced by: '<S119>/Integrator'

  real_T Integrator_IC_ih;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S119>/Integrator'

  real_T Constant_Value_mc;            // Expression: 0
                                       //  Referenced by: '<S115>/Constant'

  real_T Constant_Value_kp;            // Expression: 1
                                       //  Referenced by: '<S120>/Constant'

  real_T Constant5_Value_l5;           // Expression: 0
                                       //  Referenced by: '<S115>/Constant5'

  real_T TSamp_WtEt_g1;                // Computed Parameter: TSamp_WtEt_g1
                                       //  Referenced by: '<S120>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_g[2];// Expression: [1 -1]
                                            //  Referenced by: '<S120>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ji;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S120>/Filter Differentiator TF'

  real_T Constant4_Value_m;            // Expression: 1
                                       //  Referenced by: '<S116>/Constant4'

  real_T Constant2_Value_j;            // Expression: 0
                                       //  Referenced by: '<S116>/Constant2'

  real_T Integrator_gainval_o;         // Computed Parameter: Integrator_gainval_o
                                       //  Referenced by: '<S121>/Integrator'

  real_T Integrator_IC_in;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S121>/Integrator'

  real_T Gain2_Gain_j;                 // Expression: 2*pi
                                       //  Referenced by: '<S116>/Gain2'

  real_T Constant1_Value_p;            // Expression: 1
                                       //  Referenced by: '<S116>/Constant1'

  real_T Gain1_Gain_e;                 // Expression: 2*pi
                                       //  Referenced by: '<S116>/Gain1'

  real_T Constant_Value_h1;            // Expression: 1
                                       //  Referenced by: '<S122>/Constant'

  real_T TSamp_WtEt_cq;                // Computed Parameter: TSamp_WtEt_cq
                                       //  Referenced by: '<S122>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_k[2];// Expression: [1 -1]
                                            //  Referenced by: '<S122>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ow;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S122>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_f; // Expression: 0
                                       //  Referenced by: '<S117>/Unit Delay'

  real_T Gain2_Gain_hs;                // Expression: 2*pi
                                       //  Referenced by: '<S83>/Gain2'

  real_T Constant_Value_fi;            // Expression: tau
                                       //  Referenced by: '<S126>/Constant'

  real_T Constant4_Value_hz;           // Expression: 1
                                       //  Referenced by: '<S124>/Constant4'

  real_T Gain2_Gain_c;                 // Expression: 2*pi
                                       //  Referenced by: '<S124>/Gain2'

  real_T Integrator_gainval_f;         // Computed Parameter: Integrator_gainval_f
                                       //  Referenced by: '<S128>/Integrator'

  real_T Integrator_IC_j;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S128>/Integrator'

  real_T Constant_Value_ol;            // Expression: 0
                                       //  Referenced by: '<S124>/Constant'

  real_T Constant_Value_dw;            // Expression: 1
                                       //  Referenced by: '<S129>/Constant'

  real_T Constant5_Value_i;            // Expression: 0
                                       //  Referenced by: '<S124>/Constant5'

  real_T TSamp_WtEt_ci;                // Computed Parameter: TSamp_WtEt_ci
                                       //  Referenced by: '<S129>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_e[2];// Expression: [1 -1]
                                            //  Referenced by: '<S129>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_h;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S129>/Filter Differentiator TF'

  real_T Constant4_Value_f;            // Expression: 1
                                       //  Referenced by: '<S125>/Constant4'

  real_T Constant2_Value_o;            // Expression: 0
                                       //  Referenced by: '<S125>/Constant2'

  real_T Integrator_gainval_oc;        // Computed Parameter: Integrator_gainval_oc
                                       //  Referenced by: '<S130>/Integrator'

  real_T Integrator_IC_l;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S130>/Integrator'

  real_T Gain2_Gain_n;                 // Expression: 2*pi
                                       //  Referenced by: '<S125>/Gain2'

  real_T Constant1_Value_b;            // Expression: 1
                                       //  Referenced by: '<S125>/Constant1'

  real_T Gain1_Gain_k;                 // Expression: 2*pi
                                       //  Referenced by: '<S125>/Gain1'

  real_T Constant_Value_n0;            // Expression: 1
                                       //  Referenced by: '<S131>/Constant'

  real_T TSamp_WtEt_ag;                // Computed Parameter: TSamp_WtEt_ag
                                       //  Referenced by: '<S131>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_d[2];// Expression: [1 -1]
                                            //  Referenced by: '<S131>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_b;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S131>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_fm;// Expression: 0
                                       //  Referenced by: '<S126>/Unit Delay'

  real_T Gain2_Gain_ff;                // Expression: 2*pi
                                       //  Referenced by: '<S84>/Gain2'

  real_T Constant_Value_o1;            // Expression: tau
                                       //  Referenced by: '<S135>/Constant'

  real_T Constant4_Value_fb;           // Expression: 1
                                       //  Referenced by: '<S133>/Constant4'

  real_T Gain2_Gain_lh;                // Expression: 2*pi
                                       //  Referenced by: '<S133>/Gain2'

  real_T Integrator_gainval_l;         // Computed Parameter: Integrator_gainval_l
                                       //  Referenced by: '<S137>/Integrator'

  real_T Integrator_IC_nm;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S137>/Integrator'

  real_T Constant_Value_gd;            // Expression: 0
                                       //  Referenced by: '<S133>/Constant'

  real_T Constant_Value_c;             // Expression: 1
                                       //  Referenced by: '<S138>/Constant'

  real_T Constant5_Value_d;            // Expression: 0
                                       //  Referenced by: '<S133>/Constant5'

  real_T TSamp_WtEt_k;                 // Computed Parameter: TSamp_WtEt_k
                                       //  Referenced by: '<S138>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_m[2];// Expression: [1 -1]
                                            //  Referenced by: '<S138>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ph;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S138>/Filter Differentiator TF'

  real_T Constant4_Value_l;            // Expression: 1
                                       //  Referenced by: '<S134>/Constant4'

  real_T Constant2_Value_js;           // Expression: 0
                                       //  Referenced by: '<S134>/Constant2'

  real_T Integrator_gainval_l5;        // Computed Parameter: Integrator_gainval_l5
                                       //  Referenced by: '<S139>/Integrator'

  real_T Integrator_IC_g;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S139>/Integrator'

  real_T Gain2_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S134>/Gain2'

  real_T Constant1_Value_e;            // Expression: 1
                                       //  Referenced by: '<S134>/Constant1'

  real_T Gain1_Gain_e1;                // Expression: 2*pi
                                       //  Referenced by: '<S134>/Gain1'

  real_T Constant_Value_nl;            // Expression: 1
                                       //  Referenced by: '<S140>/Constant'

  real_T TSamp_WtEt_gz;                // Computed Parameter: TSamp_WtEt_gz
                                       //  Referenced by: '<S140>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_n[2];// Expression: [1 -1]
                                            //  Referenced by: '<S140>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_c;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S140>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_b; // Expression: 0
                                       //  Referenced by: '<S135>/Unit Delay'

  real_T Gain2_Gain_eh;                // Expression: 2*pi
                                       //  Referenced by: '<S85>/Gain2'

  real_T Constant_Value_ev;            // Expression: tau
                                       //  Referenced by: '<S144>/Constant'

  real_T Constant4_Value_n;            // Expression: 1
                                       //  Referenced by: '<S142>/Constant4'

  real_T Gain2_Gain_b2;                // Expression: 2*pi
                                       //  Referenced by: '<S142>/Gain2'

  real_T Integrator_gainval_j;         // Computed Parameter: Integrator_gainval_j
                                       //  Referenced by: '<S146>/Integrator'

  real_T Integrator_IC_iv;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S146>/Integrator'

  real_T Constant_Value_j;             // Expression: 0
                                       //  Referenced by: '<S142>/Constant'

  real_T Constant_Value_b3;            // Expression: 1
                                       //  Referenced by: '<S147>/Constant'

  real_T Constant5_Value_p;            // Expression: 0
                                       //  Referenced by: '<S142>/Constant5'

  real_T TSamp_WtEt_ky;                // Computed Parameter: TSamp_WtEt_ky
                                       //  Referenced by: '<S147>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_jl[2];// Expression: [1 -1]
                                            //  Referenced by: '<S147>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_gq;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S147>/Filter Differentiator TF'

  real_T Constant4_Value_g;            // Expression: 1
                                       //  Referenced by: '<S143>/Constant4'

  real_T Constant2_Value_l;            // Expression: 0
                                       //  Referenced by: '<S143>/Constant2'

  real_T Integrator_gainval_jy;        // Computed Parameter: Integrator_gainval_jy
                                       //  Referenced by: '<S148>/Integrator'

  real_T Integrator_IC_p;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S148>/Integrator'

  real_T Gain2_Gain_p;                 // Expression: 2*pi
                                       //  Referenced by: '<S143>/Gain2'

  real_T Constant1_Value_lf;           // Expression: 1
                                       //  Referenced by: '<S143>/Constant1'

  real_T Gain1_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S143>/Gain1'

  real_T Constant_Value_hq;            // Expression: 1
                                       //  Referenced by: '<S149>/Constant'

  real_T TSamp_WtEt_l;                 // Computed Parameter: TSamp_WtEt_l
                                       //  Referenced by: '<S149>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_kz[2];// Expression: [1 -1]
                                            //  Referenced by: '<S149>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_f;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S149>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_g; // Expression: 0
                                       //  Referenced by: '<S144>/Unit Delay'

  real_T Gain2_Gain_ap;                // Expression: 2*pi
                                       //  Referenced by: '<S86>/Gain2'

  real_T Constant_Value_je;            // Expression: tau
                                       //  Referenced by: '<S153>/Constant'

  real_T Constant4_Value_b;            // Expression: 1
                                       //  Referenced by: '<S151>/Constant4'

  real_T Gain2_Gain_fh;                // Expression: 2*pi
                                       //  Referenced by: '<S151>/Gain2'

  real_T Integrator_gainval_fu;        // Computed Parameter: Integrator_gainval_fu
                                       //  Referenced by: '<S155>/Integrator'

  real_T Integrator_IC_eq;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S155>/Integrator'

  real_T Constant_Value_c2;            // Expression: 0
                                       //  Referenced by: '<S151>/Constant'

  real_T Constant_Value_kc;            // Expression: 1
                                       //  Referenced by: '<S156>/Constant'

  real_T Constant5_Value_j;            // Expression: 0
                                       //  Referenced by: '<S151>/Constant5'

  real_T TSamp_WtEt_b;                 // Computed Parameter: TSamp_WtEt_b
                                       //  Referenced by: '<S156>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_ju[2];// Expression: [1 -1]
                                            //  Referenced by: '<S156>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_l;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S156>/Filter Differentiator TF'

  real_T Constant4_Value_p;            // Expression: 1
                                       //  Referenced by: '<S152>/Constant4'

  real_T Constant2_Value_d;            // Expression: 0
                                       //  Referenced by: '<S152>/Constant2'

  real_T Integrator_gainval_pb;        // Computed Parameter: Integrator_gainval_pb
                                       //  Referenced by: '<S157>/Integrator'

  real_T Integrator_IC_m1;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S157>/Integrator'

  real_T Gain2_Gain_pr;                // Expression: 2*pi
                                       //  Referenced by: '<S152>/Gain2'

  real_T Constant1_Value_h;            // Expression: 1
                                       //  Referenced by: '<S152>/Constant1'

  real_T Gain1_Gain_m;                 // Expression: 2*pi
                                       //  Referenced by: '<S152>/Gain1'

  real_T Constant_Value_mf;            // Expression: 1
                                       //  Referenced by: '<S158>/Constant'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                       //  Referenced by: '<S158>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_a0[2];// Expression: [1 -1]
                                            //  Referenced by: '<S158>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_m;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S158>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_bi;// Expression: 0
                                       //  Referenced by: '<S153>/Unit Delay'

  real_T Gain2_Gain_ll;                // Expression: 2*pi
                                       //  Referenced by: '<S46>/Gain2'

  real_T Constant_Value_gi;            // Expression: tau
                                       //  Referenced by: '<S52>/Constant'

  real_T Constant4_Value_kz;           // Expression: 1
                                       //  Referenced by: '<S50>/Constant4'

  real_T Gain2_Gain_p0;                // Expression: 2*pi
                                       //  Referenced by: '<S50>/Gain2'

  real_T Integrator_gainval_ar;        // Computed Parameter: Integrator_gainval_ar
                                       //  Referenced by: '<S54>/Integrator'

  real_T Integrator_IC_o;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S54>/Integrator'

  real_T Constant_Value_jy;            // Expression: 0
                                       //  Referenced by: '<S50>/Constant'

  real_T Constant_Value_ff;            // Expression: 1
                                       //  Referenced by: '<S55>/Constant'

  real_T Constant5_Value_b;            // Expression: 0
                                       //  Referenced by: '<S50>/Constant5'

  real_T TSamp_WtEt_bq;                // Computed Parameter: TSamp_WtEt_bq
                                       //  Referenced by: '<S55>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_f[2];// Expression: [1 -1]
                                            //  Referenced by: '<S55>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_d;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S55>/Filter Differentiator TF'

  real_T Constant4_Value_kt;           // Expression: 1
                                       //  Referenced by: '<S51>/Constant4'

  real_T Constant2_Value_km;           // Expression: 0
                                       //  Referenced by: '<S51>/Constant2'

  real_T Integrator_gainval_mf;        // Computed Parameter: Integrator_gainval_mf
                                       //  Referenced by: '<S56>/Integrator'

  real_T Integrator_IC_pk;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S56>/Integrator'

  real_T Gain2_Gain_ie;                // Expression: 2*pi
                                       //  Referenced by: '<S51>/Gain2'

  real_T Constant1_Value_g;            // Expression: 1
                                       //  Referenced by: '<S51>/Constant1'

  real_T Gain1_Gain_j;                 // Expression: 2*pi
                                       //  Referenced by: '<S51>/Gain1'

  real_T Constant_Value_jj;            // Expression: 1
                                       //  Referenced by: '<S57>/Constant'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                       //  Referenced by: '<S57>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_b[2];// Expression: [1 -1]
                                            //  Referenced by: '<S57>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_k;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S57>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_bf;// Expression: 0
                                       //  Referenced by: '<S52>/Unit Delay'

  real_T Gain2_Gain_i1;                // Expression: 2*pi
                                       //  Referenced by: '<S47>/Gain2'

  real_T Constant_Value_gf;            // Expression: tau
                                       //  Referenced by: '<S61>/Constant'

  real_T Constant4_Value_j;            // Expression: 1
                                       //  Referenced by: '<S59>/Constant4'

  real_T Gain2_Gain_g;                 // Expression: 2*pi
                                       //  Referenced by: '<S59>/Gain2'

  real_T Integrator_gainval_jd;        // Computed Parameter: Integrator_gainval_jd
                                       //  Referenced by: '<S63>/Integrator'

  real_T Integrator_IC_e0;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S63>/Integrator'

  real_T Constant_Value_a;             // Expression: 0
                                       //  Referenced by: '<S59>/Constant'

  real_T Constant_Value_as;            // Expression: 1
                                       //  Referenced by: '<S64>/Constant'

  real_T Constant5_Value_f;            // Expression: 0
                                       //  Referenced by: '<S59>/Constant5'

  real_T TSamp_WtEt_i;                 // Computed Parameter: TSamp_WtEt_i
                                       //  Referenced by: '<S64>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_p[2];// Expression: [1 -1]
                                            //  Referenced by: '<S64>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ex;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S64>/Filter Differentiator TF'

  real_T Constant4_Value_aj;           // Expression: 1
                                       //  Referenced by: '<S60>/Constant4'

  real_T Constant2_Value_c;            // Expression: 0
                                       //  Referenced by: '<S60>/Constant2'

  real_T Integrator_gainval_om;        // Computed Parameter: Integrator_gainval_om
                                       //  Referenced by: '<S65>/Integrator'

  real_T Integrator_IC_nb;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S65>/Integrator'

  real_T Gain2_Gain_pc;                // Expression: 2*pi
                                       //  Referenced by: '<S60>/Gain2'

  real_T Constant1_Value_i;            // Expression: 1
                                       //  Referenced by: '<S60>/Constant1'

  real_T Gain1_Gain_p3;                // Expression: 2*pi
                                       //  Referenced by: '<S60>/Gain1'

  real_T Constant_Value_ix;            // Expression: 1
                                       //  Referenced by: '<S66>/Constant'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                       //  Referenced by: '<S66>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_dt[2];// Expression: [1 -1]
                                            //  Referenced by: '<S66>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_cx;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S66>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_a; // Expression: 0
                                       //  Referenced by: '<S61>/Unit Delay'

  real_T Gain2_Gain_k;                 // Expression: 2*pi
                                       //  Referenced by: '<S48>/Gain2'

  real_T Constant_Value_ck;            // Expression: tau
                                       //  Referenced by: '<S70>/Constant'

  real_T Constant4_Value_fa;           // Expression: 1
                                       //  Referenced by: '<S68>/Constant4'

  real_T Gain2_Gain_b4;                // Expression: 2*pi
                                       //  Referenced by: '<S68>/Gain2'

  real_T Integrator_gainval_le;        // Computed Parameter: Integrator_gainval_le
                                       //  Referenced by: '<S72>/Integrator'

  real_T Integrator_IC_p5;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S72>/Integrator'

  real_T Constant_Value_fa;            // Expression: 0
                                       //  Referenced by: '<S68>/Constant'

  real_T Constant_Value_mu;            // Expression: 1
                                       //  Referenced by: '<S73>/Constant'

  real_T Constant5_Value_cw;           // Expression: 0
                                       //  Referenced by: '<S68>/Constant5'

  real_T TSamp_WtEt_cz;                // Computed Parameter: TSamp_WtEt_cz
                                       //  Referenced by: '<S73>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_nf[2];// Expression: [1 -1]
                                            //  Referenced by: '<S73>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_or;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S73>/Filter Differentiator TF'

  real_T Constant4_Value_kq;           // Expression: 1
                                       //  Referenced by: '<S69>/Constant4'

  real_T Constant2_Value_jl;           // Expression: 0
                                       //  Referenced by: '<S69>/Constant2'

  real_T Integrator_gainval_ln;        // Computed Parameter: Integrator_gainval_ln
                                       //  Referenced by: '<S74>/Integrator'

  real_T Integrator_IC_k;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S74>/Integrator'

  real_T Gain2_Gain_ao;                // Expression: 2*pi
                                       //  Referenced by: '<S69>/Gain2'

  real_T Constant1_Value_f;            // Expression: 1
                                       //  Referenced by: '<S69>/Constant1'

  real_T Gain1_Gain_d;                 // Expression: 2*pi
                                       //  Referenced by: '<S69>/Gain1'

  real_T Constant_Value_ch;            // Expression: 1
                                       //  Referenced by: '<S75>/Constant'

  real_T TSamp_WtEt_kf;                // Computed Parameter: TSamp_WtEt_kf
                                       //  Referenced by: '<S75>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_pt[2];// Expression: [1 -1]
                                            //  Referenced by: '<S75>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_dd;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S75>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_ap;// Expression: 0
                                       //  Referenced by: '<S70>/Unit Delay'

  real_T shift_Gain;                   // Expression: 2
                                       //  Referenced by: '<S21>/shift'

  real_T Constant_Value_p;             // Expression: 0
                                       //  Referenced by: '<S21>/Constant'

  real_T Constant10_Value;             // Expression: 0
                                       //  Referenced by: '<S21>/Constant10'

  real_T Constant2_Value_n;            // Expression: 0
                                       //  Referenced by: '<S21>/Constant2'

  real_T Constant6_Value;              // Expression: 0
                                       //  Referenced by: '<S21>/Constant6'

  real_T Constant8_Value;              // Expression: 0
                                       //  Referenced by: '<S21>/Constant8'

  real_T Constant9_Value;              // Expression: 0
                                       //  Referenced by: '<S21>/Constant9'

  real_T Gain_Gain_a;                  // Expression: 1
                                       //  Referenced by: '<S21>/Gain'

  real_T Gain1_Gain_b;                 // Expression: -1
                                       //  Referenced by: '<S21>/Gain1'

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

  real_T sign_convention_Gain;         // Expression: -1
                                       //  Referenced by: '<S21>/sign_convention'

  real_T sign_convention1_Gain;        // Expression: -1
                                       //  Referenced by: '<S21>/sign_convention1'

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

  real_T Constant3_Value_j;            // Expression: 0
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
struct tag_RTM_ROPOD_4Wheel_Tdistkinb_cntr_node_T {
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
    SimStruct childSFunctions[4];
    SimStruct *childSFunctionPtrs[4];
    struct _ssBlkInfo2 blkInfo2[4];
    struct _ssSFcnModelMethods2 methods2[4];
    struct _ssSFcnModelMethods3 methods3[4];
    struct _ssSFcnModelMethods4 methods4[4];
    struct _ssStatesInfo2 statesInfo2[4];
    ssPeriodicStatesInfo periodicStatesInfo[4];
    struct _ssPortInfo2 inputOutputPortInfo2[4];
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

  extern P_ROPOD_4Wheel_Tdistkinb_cntr_node_T ROPOD_4Wheel_Tdistkinb_cntr_node_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_ROPOD_4Wheel_Tdistkinb_cntr_node_T ROPOD_4Wheel_Tdistkinb_cntr_node_B;

// Block states (auto storage)
extern DW_ROPOD_4Wheel_Tdistkinb_cntr_node_T ROPOD_4Wheel_Tdistkinb_cntr_node_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void ROPOD_4Wheel_Tdistkinb_cntr_node_initialize(void);
  extern void ROPOD_4Wheel_Tdistkinb_cntr_node_step(void);
  extern void ROPOD_4Wheel_Tdistkinb_cntr_node_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_node_T *const
    ROPOD_4Wheel_Tdistkinb_cntr_node_M;

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
//  Block '<S21>/Constant1' : Unused code path elimination
//  Block '<S21>/Constant7' : Unused code path elimination
//  Block '<S21>/Gain11' : Unused code path elimination
//  Block '<S21>/Gain12' : Unused code path elimination
//  Block '<S21>/Gain13' : Unused code path elimination
//  Block '<S21>/Gain9' : Unused code path elimination
//  Block '<S21>/sign_convention2' : Unused code path elimination
//  Block '<S5>/To File1' : Unused code path elimination
//  Block '<S27>/Constant' : Unused code path elimination
//  Block '<S27>/Constant1' : Unused code path elimination
//  Block '<S27>/Constant10' : Unused code path elimination
//  Block '<S27>/Constant11' : Unused code path elimination
//  Block '<S27>/Constant12' : Unused code path elimination
//  Block '<S27>/Constant13' : Unused code path elimination
//  Block '<S27>/Constant14' : Unused code path elimination
//  Block '<S27>/Constant15' : Unused code path elimination
//  Block '<S27>/Constant16' : Unused code path elimination
//  Block '<S27>/Constant18' : Unused code path elimination
//  Block '<S27>/Constant19' : Unused code path elimination
//  Block '<S27>/Constant2' : Unused code path elimination
//  Block '<S27>/Constant21' : Unused code path elimination
//  Block '<S27>/Constant22' : Unused code path elimination
//  Block '<S27>/Constant23' : Unused code path elimination
//  Block '<S27>/Constant24' : Unused code path elimination
//  Block '<S27>/Constant25' : Unused code path elimination
//  Block '<S27>/Constant26' : Unused code path elimination
//  Block '<S27>/Constant27' : Unused code path elimination
//  Block '<S27>/Constant28' : Unused code path elimination
//  Block '<S27>/Constant29' : Unused code path elimination
//  Block '<S27>/Constant3' : Unused code path elimination
//  Block '<S27>/Constant30' : Unused code path elimination
//  Block '<S27>/Constant31' : Unused code path elimination
//  Block '<S27>/Constant32' : Unused code path elimination
//  Block '<S27>/Constant33' : Unused code path elimination
//  Block '<S27>/Constant4' : Unused code path elimination
//  Block '<S27>/Constant40' : Unused code path elimination
//  Block '<S27>/Constant41' : Unused code path elimination
//  Block '<S27>/Constant42' : Unused code path elimination
//  Block '<S27>/Constant43' : Unused code path elimination
//  Block '<S27>/Constant44' : Unused code path elimination
//  Block '<S27>/Constant45' : Unused code path elimination
//  Block '<S27>/Constant6' : Unused code path elimination
//  Block '<S27>/Constant7' : Unused code path elimination
//  Block '<S27>/Constant8' : Unused code path elimination
//  Block '<S27>/Constant9' : Unused code path elimination
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
//  Block '<S44>/Add' : Unused code path elimination
//  Block '<S44>/Product1' : Unused code path elimination
//  Block '<S44>/To File1' : Unused code path elimination
//  Block '<S21>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S21>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S55>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S64>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S73>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S93>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S102>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S111>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S120>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S129>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S138>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S147>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S156>/Passthrough for tuning' : Eliminate redundant data type conversion


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
//  '<Root>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node'
//  '<S1>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Allow Tinit seconds for initialization'
//  '<S2>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry and Measurement model 4SW'
//  '<S3>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry publisher'
//  '<S4>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Platform vel command'
//  '<S5>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE'
//  '<S6>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROS  Controllers conf'
//  '<S7>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Ropod kinematic parameters2'
//  '<S8>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROS Smart wheels conf'
//  '<S9>'   : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROS base conf'
//  '<S10>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1'
//  '<S11>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr'
//  '<S12>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr'
//  '<S13>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry and Measurement model 4SW/Jqwl_matrix'
//  '<S14>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry and Measurement model 4SW/pos_rot_matrix'
//  '<S15>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry publisher/Blank Message'
//  '<S16>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Odometry publisher/Publish'
//  '<S17>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Platform vel command/Subscribe1'
//  '<S18>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Platform vel command/Subscribe1/Enabled Subsystem'
//  '<S19>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Initialization switch'
//  '<S20>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_sens'
//  '<S21>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_torque_cmd'
//  '<S22>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1'
//  '<S23>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2'
//  '<S24>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3'
//  '<S25>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4'
//  '<S26>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Subsystem'
//  '<S27>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/empywheel'
//  '<S28>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel'
//  '<S29>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel'
//  '<S30>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel'
//  '<S31>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel'
//  '<S32>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Compare To Constant'
//  '<S33>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Rate Limiter Dynamic'
//  '<S34>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Rate Limiter Dynamic1'
//  '<S35>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Rate Limiter Dynamic2'
//  '<S36>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Saturation Dynamic'
//  '<S37>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Saturation Dynamic1'
//  '<S38>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Saturation Dynamic2'
//  '<S39>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Rate Limiter Dynamic/Saturation Dynamic'
//  '<S40>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Rate Limiter Dynamic1/Saturation Dynamic'
//  '<S41>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/Subscriber vel commands1/Rate Limiter Dynamic2/Saturation Dynamic'
//  '<S42>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Inverse Kinematics 4SW'
//  '<S43>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller'
//  '<S44>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Torque distribution'
//  '<S45>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Inverse Kinematics 4SW/Gl_matrix'
//  '<S46>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1'
//  '<S47>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2'
//  '<S48>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3'
//  '<S49>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3'
//  '<S50>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)'
//  '<S51>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)'
//  '<S52>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS'
//  '<S53>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S54>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S55>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S56>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S57>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S58>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3'
//  '<S59>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)'
//  '<S60>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)'
//  '<S61>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS'
//  '<S62>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S63>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S64>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S65>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S66>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S67>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3'
//  '<S68>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)'
//  '<S69>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)'
//  '<S70>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS'
//  '<S71>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S72>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S73>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S74>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S75>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S76>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Torque distribution/Gl_matrices'
//  '<S77>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/platform vel cntr/Torque distribution/platform_forces_2_tau_dist_optimal'
//  '<S78>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller'
//  '<S79>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1'
//  '<S80>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2'
//  '<S81>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3'
//  '<S82>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4'
//  '<S83>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5'
//  '<S84>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6'
//  '<S85>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7'
//  '<S86>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8'
//  '<S87>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3'
//  '<S88>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)'
//  '<S89>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)'
//  '<S90>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS'
//  '<S91>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S92>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S93>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S94>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S95>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S96>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3'
//  '<S97>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)'
//  '<S98>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)'
//  '<S99>'  : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS'
//  '<S100>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S101>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S102>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S103>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S104>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S105>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3'
//  '<S106>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)'
//  '<S107>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)'
//  '<S108>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS'
//  '<S109>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S110>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S111>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S112>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S113>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S114>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3'
//  '<S115>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)'
//  '<S116>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)'
//  '<S117>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS'
//  '<S118>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S119>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S120>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S121>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S122>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S123>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3'
//  '<S124>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)'
//  '<S125>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)'
//  '<S126>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS'
//  '<S127>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S128>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S129>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S130>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S131>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S132>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3'
//  '<S133>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)'
//  '<S134>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)'
//  '<S135>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS'
//  '<S136>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S137>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S138>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S139>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S140>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S141>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3'
//  '<S142>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)'
//  '<S143>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)'
//  '<S144>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS'
//  '<S145>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S146>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S147>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S148>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S149>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S150>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3'
//  '<S151>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)'
//  '<S152>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)'
//  '<S153>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS'
//  '<S154>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S155>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S156>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S157>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S158>' : 'ROPOD_4Wheel_Tdistkinb_cntr_node/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'

#endif                                 // RTW_HEADER_ROPOD_4Wheel_Tdistkinb_cntr_node_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
