//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_TdistZMPC_cntr.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_TdistZMPC_cntr'.
//
// Model version                  : 1.316
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Mon Aug 27 13:49:16 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ROPOD_4Wheel_TdistZMPC_cntr_h_
#define RTW_HEADER_ROPOD_4Wheel_TdistZMPC_cntr_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef ROPOD_4Wheel_TdistZMPC_cntr_COMMON_INCLUDES_
# define ROPOD_4Wheel_TdistZMPC_cntr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slros_initialize.h"
#endif                                 // ROPOD_4Wheel_TdistZMPC_cntr_COMMON_INCLUDES_ 

#include "ROPOD_4Wheel_TdistZMPC_cntr_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
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

// Block signals for system '<S46>/speed deflection angle calculation X+'
typedef struct {
  real_T TmpSignalConversionAtSFun_h[8];// '<S46>/speed deflection angle calculation X+' 
} B_speeddeflectionanglecalcula_T;

// Block signals for system '<S47>/Zone MPC'
typedef struct {
  real_T rtu_A[4080];
  real_T Linv[1600];
  real_T A[1600];
  real_T Hinv[1600];
  real_T RLinv[1600];
  real_T D[1600];
  real_T H[1600];
  real_T U[1600];
  real_T b_A[1600];
  real_T b_A_m[1600];
  real_T TL[1600];
  real_T QQ[1600];
  real_T RR[1600];
  real_T rtu_W[102];
  real_T lam[102];
  real_T cTol[102];
  real_T varargin_1[102];
  real_T c[82];
  real_T Opt[80];
  real_T Rhs[80];
  real_T f[40];
  real_T u_qp[40];
  real_T r[40];
  real_T AcRow[40];
  real_T A_c[40];
  real_T tau[40];
  real_T work[40];
  real_T work_k[40];
  int16_T b_iA[102];
  int16_T iC[102];
  real_T Fxk[20];
  int32_T ipiv[40];
  boolean_T iAi[102];
  boolean_T rtu_iA0[102];
  int8_T h_data[80];
  real_T bi[4];
  real_T epsilon;
  real_T u_f;
  real_T mv;
  real_T j;
  real_T k;
  real_T rMin;
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T t;
  real_T d0;
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  real_T scale;
  real_T absxk;
  real_T t_c;
  real_T temp;
  real_T smax;
  real_T s;
  real_T temp_b;
  real_T temp_p;
  real_T c_c;
  int32_T b_f;
  int32_T d;
  int32_T jmax;
  int32_T i0;
  int32_T h_size;
  int32_T i;
  int32_T i1;
  int32_T Hinv_tmp;
  int32_T kDrop_tmp;
  int32_T U_tmp;
  int32_T i_g;
  int32_T j_g;
  int32_T i2;
  int32_T i3;
  int32_T d_i;
  int32_T itau;
  int32_T iaii;
  int32_T c_j;
} B_ZoneMPC_ROPOD_4Wheel_TdistZ_T;

// Block signals (auto storage)
typedef struct {
  real_T Ac[189];
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_nav_msgs_Odometry BusAssignment;// '<S2>/Bus Assignment' 
  real_T Delay2_p[102];                // '<S47>/Delay2'
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
  real_T rtb_Gtl_m[27];
  real_T b_A_c[27];
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q BusAssignment_p;// '<S490>/Bus Assignment' 
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
  real_T Switch2_m[8];                 // '<S24>/Switch2'
  real_T Product9[8];                  // '<S394>/Product9'
  real_T x_p[8];
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Twist In1;// '<S482>/In1'
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Twist b_varargout_2;
  int16_T iC[21];
  int16_T iA[21];
  real_T varargin_1_c[5];
  char_T cv0[33];
  char_T cv1[32];
  real_T Force_Xp[4];
  real_T Force_Xm[4];
  real_T Force_Yp[4];
  real_T Force_Ym[4];
  real_T Torque_Xp[4];
  real_T Torque_Xm[4];
  real_T Torque_Yp[4];
  real_T Torque_Ym[4];
  real_T s[4];
  char_T cv2[31];
  char_T cv3[30];
  char_T cv4[29];
  char_T cv5[28];
  char_T cv6[26];
  char_T cv7[25];
  real_T Sum_jnr[3];                   // '<S43>/Sum'
  real_T Product3[3];                  // '<S11>/Product3'
  real_T dv2[3];
  real_T work_f[3];
  char_T cv8[23];
  char_T cv9[22];
  char_T cv10[21];
  char_T cv11[20];
  char_T cv12[19];
  real_T Switch;                       // '<S13>/Switch'
  real_T SFunctionBuilder_o1;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o2;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o3;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o4;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o5;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o6;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o7;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o8;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o9;          // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o10;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o11;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o12;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o13;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o14;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o15;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o16;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o17;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o18;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o19;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o20;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o21;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o22;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o23;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o24;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o25;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o26;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o27;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o28;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o29;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o30;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o31;         // '<S46>/S-Function Builder'
  real_T SFunctionBuilder_o32;         // '<S46>/S-Function Builder'
  real_T SFunction[40];                // '<S32>/S-Function'
  real_T SFunction_f[40];              // '<S33>/S-Function'
  real_T SFunction_n[40];              // '<S34>/S-Function'
  real_T SFunction_m[40];              // '<S35>/S-Function'
  real_T EnabledDelay;                 // '<S367>/Enabled Delay'
  real_T Gain1;                        // '<S366>/Gain1'
  real_T Gain;                         // '<S366>/Gain'
  real_T Gain3;                        // '<S366>/Gain3'
  real_T Gain2;                        // '<S366>/Gain2'
  real_T Gain5;                        // '<S366>/Gain5'
  real_T Gain4;                        // '<S366>/Gain4'
  real_T Gain2_c;                      // '<S404>/Gain2'
  real_T Gain1_h;                      // '<S405>/Gain1'
  real_T Divide1;                      // '<S405>/Divide1'
  real_T Gain2_b;                      // '<S413>/Gain2'
  real_T Gain1_hb;                     // '<S414>/Gain1'
  real_T Divide1_i;                    // '<S414>/Divide1'
  real_T Gain2_p;                      // '<S422>/Gain2'
  real_T Gain1_c;                      // '<S423>/Gain1'
  real_T Divide1_b;                    // '<S423>/Divide1'
  real_T Gain2_a;                      // '<S431>/Gain2'
  real_T Gain1_h0;                     // '<S432>/Gain1'
  real_T Divide1_n;                    // '<S432>/Divide1'
  real_T Gain2_pu;                     // '<S440>/Gain2'
  real_T Gain1_n;                      // '<S441>/Gain1'
  real_T Divide1_h;                    // '<S441>/Divide1'
  real_T Gain2_f;                      // '<S449>/Gain2'
  real_T Gain1_g;                      // '<S450>/Gain1'
  real_T Divide1_iu;                   // '<S450>/Divide1'
  real_T Gain2_m;                      // '<S458>/Gain2'
  real_T Gain1_m;                      // '<S459>/Gain1'
  real_T Divide1_g;                    // '<S459>/Divide1'
  real_T Gain2_cs;                     // '<S467>/Gain2'
  real_T Gain1_j;                      // '<S468>/Gain1'
  real_T Divide1_i0;                   // '<S468>/Divide1'
  real_T Gain2_o;                      // '<S338>/Gain2'
  real_T Gain1_jt;                     // '<S339>/Gain1'
  real_T Divide1_m;                    // '<S339>/Divide1'
  real_T Gain2_aq;                     // '<S347>/Gain2'
  real_T Gain1_p;                      // '<S348>/Gain1'
  real_T Divide1_g1;                   // '<S348>/Divide1'
  real_T Gain2_l;                      // '<S356>/Gain2'
  real_T Gain1_hg;                     // '<S357>/Gain1'
  real_T Divide1_n0;                   // '<S357>/Divide1'
  real_T Gain3_m;                      // '<S44>/Gain3'
  real_T Switch1[8];                   // '<S23>/Switch1'
  real_T command2;                     // '<S25>/Constant'
  real_T command2_p;                   // '<S25>/Constant1'
  real_T timestamp;                    // '<S25>/Constant10'
  real_T timestamp_m;                  // '<S25>/Constant2'
  real_T command2_m;                   // '<S25>/Constant6'
  real_T timestamp_p;                  // '<S25>/Constant7'
  real_T timestamp_k;                  // '<S25>/Constant8'
  real_T command2_f;                   // '<S25>/Constant9'
  real_T limit1_p;                     // '<S25>/Gain'
  real_T limit1_n;                     // '<S25>/Gain1'
  real_T command1;                     // '<S25>/Gain10'
  real_T limit1_n_p;                   // '<S25>/Gain11'
  real_T limit2_p;                     // '<S25>/Gain12'
  real_T limit2_n;                     // '<S25>/Gain13'
  real_T command1_b;                   // '<S25>/Gain8'
  real_T command1_p;                   // '<S25>/Gain14'
  real_T limit1_n_o;                   // '<S25>/Gain15'
  real_T limit2_p_n;                   // '<S25>/Gain16'
  real_T limit2_n_b;                   // '<S25>/Gain17'
  real_T command1_pn;                  // '<S25>/Gain18'
  real_T limit1_p_i;                   // '<S25>/Gain19'
  real_T limit2_p_b;                   // '<S25>/Gain2'
  real_T limit2_n_l;                   // '<S25>/Gain3'
  real_T limit1_p_p;                   // '<S25>/Gain4'
  real_T limit1_n_pw;                  // '<S25>/Gain5'
  real_T limit2_p_o;                   // '<S25>/Gain6'
  real_T limit2_n_i;                   // '<S25>/Gain7'
  real_T limit1_p_k;                   // '<S25>/Gain9'
  real_T setpoint2;                    // '<S25>/sign_convention'
  real_T setpoint2_m;                  // '<S25>/sign_convention1'
  real_T setpoint2_g;                  // '<S25>/sign_convention2'
  real_T setpoint2_l;                  // '<S25>/sign_convention3'
  real_T max_acc_xy;                   // '<S8>/Get Parameter'
  real_T max_vel_xy;                   // '<S8>/Get Parameter1'
  real_T max_acc_theta;                // '<S8>/Get Parameter2'
  real_T max_vel_theta;                // '<S8>/Get Parameter3'
  real_T pivot_offs_sw1;               // '<S7>/Get Parameter1'
  real_T pivot_offs_sw2;               // '<S7>/Get Parameter3'
  real_T pivot_offs_sw3;               // '<S7>/Get Parameter4'
  real_T pivot_offs_sw4;               // '<S7>/Get Parameter5'
  real_T GetParameter_o1;              // '<S6>/Get Parameter'
  real_T GetParameter11_o1;            // '<S6>/Get Parameter11'
  real_T GetParameter12_o1;            // '<S6>/Get Parameter12'
  real_T GetParameter13_o1;            // '<S6>/Get Parameter13'
  real_T GetParameter14_o1;            // '<S6>/Get Parameter14'
  real_T GetParameter15_o1;            // '<S6>/Get Parameter15'
  real_T GetParameter16_o1;            // '<S6>/Get Parameter16'
  real_T GetParameter17_o1;            // '<S6>/Get Parameter17'
  real_T GetParameter1_o1;             // '<S6>/Get Parameter1'
  real_T GetParameter2_o1;             // '<S6>/Get Parameter2'
  real_T GetParameter3_o1;             // '<S6>/Get Parameter3'
  real_T GetParameter4_o1;             // '<S6>/Get Parameter4'
  real_T GetParameter5_o1;             // '<S6>/Get Parameter5'
  real_T GetParameter6_o1;             // '<S6>/Get Parameter6'
  real_T GetParameter7_o1;             // '<S6>/Get Parameter7'
  real_T GetParameter8_o1;             // '<S6>/Get Parameter8'
  real_T GetParameter9_o1;             // '<S6>/Get Parameter9'
  real_T GetParameter10_o1;            // '<S6>/Get Parameter10'
  real_T P_gain;                       // '<S5>/Get Parameter10'
  real_T P_gain_i;                     // '<S5>/Get Parameter'
  real_T P_gain_h;                     // '<S5>/Get Parameter1'
  real_T g;                            // '<S469>/MATLAB Function'
  real_T a;                            // '<S469>/MATLAB Function'
  real_T g_p;                          // '<S460>/MATLAB Function'
  real_T a_i;                          // '<S460>/MATLAB Function'
  real_T g_h;                          // '<S451>/MATLAB Function'
  real_T a_l;                          // '<S451>/MATLAB Function'
  real_T g_o;                          // '<S442>/MATLAB Function'
  real_T a_c;                          // '<S442>/MATLAB Function'
  real_T g_c;                          // '<S433>/MATLAB Function'
  real_T a_k;                          // '<S433>/MATLAB Function'
  real_T g_j;                          // '<S424>/MATLAB Function'
  real_T a_j;                          // '<S424>/MATLAB Function'
  real_T g_pd;                         // '<S415>/MATLAB Function'
  real_T a_a;                          // '<S415>/MATLAB Function'
  real_T g_n;                          // '<S406>/MATLAB Function'
  real_T a_o;                          // '<S406>/MATLAB Function'
  real_T g_jl;                         // '<S358>/MATLAB Function'
  real_T a_h;                          // '<S358>/MATLAB Function'
  real_T g_e;                          // '<S349>/MATLAB Function'
  real_T a_ik;                         // '<S349>/MATLAB Function'
  real_T g_hk;                         // '<S340>/MATLAB Function'
  real_T a_i3;                         // '<S340>/MATLAB Function'
  real_T mv;                           // '<S48>/Zone MPC'
  real_T mv_i;                         // '<S47>/Zone MPC'
  real_T Sum1;                         // '<S45>/Sum1'
  real_T ZMPC_x;                       // '<S13>/Chart'
  real_T ZMPC_y;                       // '<S13>/Chart'
  real_T ZMPC_o;                       // '<S13>/Chart'
  real_T ZMPCx_Fd_min;                 // '<S13>/Chart'
  real_T ZMPCy_Fd_min;                 // '<S13>/Chart'
  real_T ZMPCx_Fd_max;                 // '<S13>/Chart'
  real_T ZMPCy_Fd_max;                 // '<S13>/Chart'
  real_T t2;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t14;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
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
  real_T t49;
  real_T t50;
  real_T a_m;                          // '<S388>/MATLAB Function'
  real_T g_g;                          // '<S388>/MATLAB Function'
  real_T a_hx;                         // '<S384>/MATLAB Function'
  real_T g_p_g;                        // '<S384>/MATLAB Function'
  real_T a_og;                         // '<S382>/MATLAB Function'
  real_T g_i;                          // '<S382>/MATLAB Function'
  real_T a_b;                          // '<S386>/MATLAB Function'
  real_T g_f;                          // '<S386>/MATLAB Function'
  real_T data_out;                     // '<S67>/Calibration1'
  real_T i_f;                          // '<S67>/Calibration1'
  real_T cal_angle;                    // '<S67>/Calibration1'
  real_T data_out_h;                   // '<S63>/Calibration1'
  real_T cal_angle_p3;                 // '<S63>/Calibration1'
  real_T data_out_m;                   // '<S66>/Calibration1'
  real_T i_e;                          // '<S66>/Calibration1'
  real_T Product1_a;                   // '<S291>/Product1'
  real_T Product1_ms;                  // '<S289>/Product1'
  real_T Product1_ib;                  // '<S287>/Product1'
  real_T Product1_dm;                  // '<S285>/Product1'
  real_T Product1_jd;                  // '<S283>/Product1'
  real_T Product1_d;                   // '<S281>/Product1'
  real_T Product1_p0;                  // '<S277>/Product1'
  real_T Product1_b5;                  // '<S279>/Product1'
  real_T a_c_m;                        // '<S291>/MATLAB Function'
  real_T a_lg;                         // '<S289>/MATLAB Function'
  real_T a_eq;                         // '<S287>/MATLAB Function'
  real_T a_cx;                         // '<S285>/MATLAB Function'
  real_T a_ls;                         // '<S283>/MATLAB Function'
  real_T a_il;                         // '<S281>/MATLAB Function'
  real_T a_g;                          // '<S277>/MATLAB Function'
  real_T a_n;                          // '<S279>/MATLAB Function'
  real_T data_out_f;                   // '<S60>/Calibration1'
  real_T i_hm;                         // '<S60>/Calibration1'
  real_T cal_angle_pk;                 // '<S60>/Calibration1'
  real_T Product1_la;                  // '<S235>/Product1'
  real_T Product1_n5;                  // '<S233>/Product1'
  real_T Product1_ky;                  // '<S231>/Product1'
  real_T Product1_it;                  // '<S229>/Product1'
  real_T Product1_nx;                  // '<S227>/Product1'
  real_T Product1_b;                   // '<S225>/Product1'
  real_T Product1_pz;                  // '<S221>/Product1'
  real_T Product1_p;                   // '<S223>/Product1'
  real_T a_ii;                         // '<S235>/MATLAB Function'
  real_T a_nc;                         // '<S233>/MATLAB Function'
  real_T a_p;                          // '<S231>/MATLAB Function'
  real_T a_mf;                         // '<S229>/MATLAB Function'
  real_T a_a_p;                        // '<S227>/MATLAB Function'
  real_T a_kr;                         // '<S225>/MATLAB Function'
  real_T a_f;                          // '<S221>/MATLAB Function'
  real_T a_i_l;                        // '<S223>/MATLAB Function'
  real_T data_out_ab;                  // '<S65>/Calibration1'
  real_T i_g;                          // '<S65>/Calibration1'
  real_T data_out_l;                   // '<S62>/Calibration1'
  real_T i_k;                          // '<S62>/Calibration1'
  real_T data_out_a;                   // '<S64>/Calibration1'
  real_T i_h;                          // '<S64>/Calibration1'
  real_T Product1_kt;                  // '<S179>/Product1'
  real_T Product1_ih;                  // '<S177>/Product1'
  real_T Product1_jg;                  // '<S175>/Product1'
  real_T Product1_g5;                  // '<S173>/Product1'
  real_T Product1_g;                   // '<S171>/Product1'
  real_T Product1_h;                   // '<S169>/Product1'
  real_T Product1_o;                   // '<S165>/Product1'
  real_T Product1_k;                   // '<S167>/Product1'
  real_T a_o_j;                        // '<S179>/MATLAB Function'
  real_T a_jg;                         // '<S177>/MATLAB Function'
  real_T a_ix;                         // '<S175>/MATLAB Function'
  real_T a_an;                         // '<S173>/MATLAB Function'
  real_T a_ch;                         // '<S171>/MATLAB Function'
  real_T a_nx;                         // '<S169>/MATLAB Function'
  real_T a_k_d;                        // '<S165>/MATLAB Function'
  real_T a_e;                          // '<S167>/MATLAB Function'
  real_T data_out_ao;                  // '<S61>/Calibration1'
  real_T i_ft;                         // '<S61>/Calibration1'
  real_T Product1_e;                   // '<S123>/Product1'
  real_T Product1_ne;                  // '<S121>/Product1'
  real_T Product1_l;                   // '<S119>/Product1'
  real_T Product1_m;                   // '<S117>/Product1'
  real_T Product1_n;                   // '<S115>/Product1'
  real_T Product1_i;                   // '<S113>/Product1'
  real_T Product1_j;                   // '<S109>/Product1'
  real_T Product1;                     // '<S111>/Product1'
  real_T a_eg;                         // '<S123>/MATLAB Function'
  real_T a_iy;                         // '<S121>/MATLAB Function'
  real_T a_ck;                         // '<S119>/MATLAB Function'
  real_T a_gm;                         // '<S117>/MATLAB Function'
  real_T a_m0;                         // '<S115>/MATLAB Function'
  real_T a_nu;                         // '<S113>/MATLAB Function'
  real_T a_l_g;                        // '<S109>/MATLAB Function'
  real_T a_h_l;                        // '<S111>/MATLAB Function'
  real_T Gain9;                        // '<S18>/Gain9'
  real_T Gain7;                        // '<S18>/Gain7'
  real_T Gain1_c_d;                    // '<S18>/Gain1'
  real_T Gain_e;                       // '<S18>/Gain'
  real_T Sum_fh;                       // '<S85>/Sum'
  real_T Sum_js;                       // '<S291>/Sum'
  real_T Sum_iw;                       // '<S289>/Sum'
  real_T Sum_cg;                       // '<S287>/Sum'
  real_T Sum_gf;                       // '<S285>/Sum'
  real_T Sum_l0;                       // '<S283>/Sum'
  real_T Sum_ng;                       // '<S281>/Sum'
  real_T Sum_n;                        // '<S277>/Sum'
  real_T Sum_cn;                       // '<S279>/Sum'
  real_T Sum_c;                        // '<S235>/Sum'
  real_T Sum_jn;                       // '<S233>/Sum'
  real_T Sum_lf;                       // '<S231>/Sum'
  real_T Sum_f;                        // '<S229>/Sum'
  real_T Sum_hk;                       // '<S227>/Sum'
  real_T Sum_e1;                       // '<S225>/Sum'
  real_T Sum_ho;                       // '<S221>/Sum'
  real_T Sum_gx;                       // '<S223>/Sum'
  real_T Fd;                           // '<S13>/Add1'
  real_T distance_k;                   // '<S70>/Discrete-Time Integrator'
  real_T Sum_lk;                       // '<S179>/Sum'
  real_T Sum_mz;                       // '<S177>/Sum'
  real_T Sum_j;                        // '<S175>/Sum'
  real_T Sum_h;                        // '<S173>/Sum'
  real_T Sum_my;                       // '<S171>/Sum'
  real_T Sum_g2;                       // '<S169>/Sum'
  real_T Sum_ev2;                      // '<S165>/Sum'
  real_T Sum_od;                       // '<S167>/Sum'
  real_T Sum_iy;                       // '<S123>/Sum'
  real_T Sum_ev;                       // '<S121>/Sum'
  real_T Sum_d;                        // '<S119>/Sum'
  real_T Sum_gg;                       // '<S117>/Sum'
  real_T Sum_g;                        // '<S115>/Sum'
  real_T Sum_om;                       // '<S113>/Sum'
  real_T Sum_ez;                       // '<S109>/Sum'
  real_T Sum_jj;                       // '<S111>/Sum'
  real_T deltafalllimit;               // '<S370>/delta fall limit'
  real_T deltafalllimit_m;             // '<S369>/delta fall limit'
  real_T max_current;                  // '<S7>/Get Parameter2'
  real_T LL_pole_fhz_n;                // '<S5>/Get Parameter5'
  real_T LL_zero_fhz_m;                // '<S5>/Get Parameter4'
  real_T I_freq_hz_e;                  // '<S5>/Get Parameter3'
  real_T LPF_fhz_n;                    // '<S5>/Get Parameter6'
  real_T LL_pole_fhz;                  // '<S5>/Get Parameter13'
  real_T LL_zero_fhz;                  // '<S5>/Get Parameter12'
  real_T I_freq_hz;                    // '<S5>/Get Parameter11'
  real_T LPF_fhz;                      // '<S5>/Get Parameter14'
  real_T DOut_c4;                      // '<S471>/DOut'
  real_T DOut_n;                       // '<S464>/DOut'
  real_T DOut_c;                       // '<S462>/DOut'
  real_T DOut_gd;                      // '<S455>/DOut'
  real_T DOut_fr;                      // '<S453>/DOut'
  real_T DOut_ac;                      // '<S446>/DOut'
  real_T DOut_j;                       // '<S444>/DOut'
  real_T DOut_d;                       // '<S437>/DOut'
  real_T DOut_m;                       // '<S435>/DOut'
  real_T DOut_f;                       // '<S428>/DOut'
  real_T DOut_a;                       // '<S426>/DOut'
  real_T DOut_g;                       // '<S419>/DOut'
  real_T DOut_kt;                      // '<S417>/DOut'
  real_T DOut_k;                       // '<S410>/DOut'
  real_T DOut;                         // '<S408>/DOut'
  real_T POut_d;                       // '<S471>/POut'
  real_T POut_n;                       // '<S462>/POut'
  real_T POut_e;                       // '<S453>/POut'
  real_T POut_c;                       // '<S444>/POut'
  real_T POut_k;                       // '<S435>/POut'
  real_T POut_h;                       // '<S426>/POut'
  real_T POut_j;                       // '<S417>/POut'
  real_T POut;                         // '<S408>/POut'
  real_T FilterDifferentiatorTF_tmp_i;
  real_T FilterDifferentiatorTF_tmp_f3;
  real_T FilterDifferentiatorTF_tmp_au;
  real_T FilterDifferentiatorTF_tmp_kz;
  real_T FilterDifferentiatorTF_tmp_k;
  real_T FilterDifferentiatorTF_tmp_j;
  real_T FilterDifferentiatorTF_tmp_c;
  real_T FilterDifferentiatorTF_tmp_a;
  real_T FilterDifferentiatorTF_tmp_hp;
  real_T FilterDifferentiatorTF_tmp_e;
  real_T FilterDifferentiatorTF_tmp_h;
  real_T FilterDifferentiatorTF_tmp_m;
  real_T FilterDifferentiatorTF_tmp_f;
  real_T FilterDifferentiatorTF_tmp_l;
  real_T FilterDifferentiatorTF_tmp;
  real_T Integrator_e;
  real_T Integrator_ix;
  real_T Integrator_mm;
  real_T Integrator_i;
  real_T Integrator_k0;
  real_T Integrator_j;
  real_T Integrator;
  real_T rtb_TSamp_d;
  real_T rtb_Switch_ov_idx_0;
  real_T rtb_Switch_ov_idx_1;
  real_T rtb_Switch_ov_idx_2;
  real_T rtb_Switch_ov_idx_3;
  real_T rtb_Switch_ov_idx_4;
  real_T rtb_Switch_ov_idx_5;
  real_T rtb_Switch_ov_idx_6;
  real_T rtb_Switch_ov_idx_7;
  real_T rtb_Switch_b_idx_0;
  real_T rtb_Switch_b_idx_1;
  real_T rtb_Switch_b_idx_2;
  real_T rtb_Switch_b_idx_3;
  real_T rtb_Switch_b_idx_4;
  real_T rtb_Switch_b_idx_5;
  real_T rtb_Switch_b_idx_6;
  real_T rtb_Switch_b_idx_7;
  real_T rtb_Switch_oo_idx_0;
  real_T rtb_Switch_oo_idx_1;
  real_T rtb_Switch_oo_idx_2;
  real_T rtb_Switch_oo_idx_3;
  real_T rtb_Switch_oo_idx_4;
  real_T rtb_Switch_oo_idx_5;
  real_T rtb_Switch_oo_idx_6;
  real_T rtb_Switch_oo_idx_7;
  real_T rtb_Switch_hk_idx_0;
  real_T rtb_Switch_hk_idx_1;
  real_T rtb_Switch_hk_idx_2;
  real_T rtb_Switch_hk_idx_3;
  real_T rtb_Switch_hk_idx_4;
  real_T rtb_Switch_hk_idx_5;
  real_T rtb_Switch_hk_idx_6;
  real_T rtb_Switch_hk_idx_7;
  real_T rtb_Sum1_lh_idx_0;
  real_T rtb_Sum1_lh_idx_1;
  real_T rtb_Switch_idx_0;
  real_T rtb_Switch_idx_1;
  real_T rtb_Switch_idx_2;
  real_T rtb_Switch_idx_3;
  real_T rtb_TSamp_idx_0;
  real_T rtb_TSamp_idx_1;
  real_T rtb_Compare_tmp;
  real_T t4_tmp;
  real_T t14_tmp;
  real_T t17_tmp;
  real_T t18_tmp;
  real_T t26_tmp;
  real_T t33_tmp;
  real_T t39_tmp;
  real_T t42_tmp;
  real_T Integrator_k0_tmp;
  real_T rtb_POut_h_tmp;
  real_T Integrator_i_tmp;
  real_T rtb_POut_k_tmp;
  real_T Integrator_mm_tmp;
  real_T rtb_POut_c_tmp;
  real_T Integrator_ix_tmp;
  real_T rtb_POut_e_tmp;
  real_T Integrator_e_tmp;
  real_T rtb_POut_n_tmp;
  real_T rtb_POut_d_tmp;
  real_T Sum6;                         // '<S46>/Sum6'
  real_T Sum5;                         // '<S46>/Sum5'
  real_T Internal_a;                   // '<S55>/Internal'
  real_T Internal;                     // '<S54>/Internal'
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
  real_T scale_l;
  real_T absxk_o;
  real_T t_b;
  real_T scale_n;
  real_T absxk_b;
  real_T t_l;
  real_T c;
  real_T scale_h;
  real_T absxk_bn;
  real_T t_d;
  real_T scale_e;
  real_T absxk_bj;
  real_T t_j;
  real_T d1;
  real_T a_fd;
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16 In1_p;// '<S479>/In1'
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool In1_j;// '<S480>/In1'
  int32_T ECAT_Interface_c;            // '<S12>/ECAT_Interface'
  int32_T i;
  int32_T i0;
  int32_T i1;
  int32_T rtb_Gtl_tmp;
  int32_T k;
  int32_T ixstart;
  int32_T i2;
  int32_T kDrop_tmp;
  int32_T U_tmp;
  int32_T i_a;
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
  int32_T i_j;
  int32_T knt;
  int32_T lastv_j;
  int32_T lastc_o;
  int32_T coltop_n;
  int32_T ia_i;
  int32_T jA;
  int32_T jy;
  int32_T ix;
  int32_T j_o;
  int32_T b_n;
  int32_T ijA;
  int32_T q;
  int32_T qq;
  int32_T qjj;
  int32_T m;
  int32_T kase;
  int32_T d_ii;
  int32_T kend;
  int32_T k_m;
  int32_T kend_c;
  int32_T k_md;
  int32_T ix_m;
  int32_T iy;
  int32_T b_j;
  int32_T iac;
  int32_T d;
  int32_T ia_h;
  int32_T kend_c0;
  int32_T k_c;
  int32_T k_p;
  int32_T i_p;
  int32_T i5;
  int32_T ix_a;
  int32_T iy_e;
  int32_T k_a;
  int32_T ix_as;
  int32_T iy_i;
  int32_T k_l;
  int32_T ix_o;
  int32_T iy_o;
  int32_T k_i;
  int32_T ix_f;
  int32_T iy_iz;
  int32_T k_f;
  int32_T u0;
  int32_T u1;
  int32_T i6;
  int32_T i_gx;
  int32_T k_co;
  int32_T k_o;
  int16_T nA;
  int16_T kDrop;
  int16_T kNext;
  int16_T iSave;
  int16_T i_l;
  int16_T j_m;
  int16_T c_k;
  int16_T i_m;
  int16_T i_c;
  uint16_T BitwiseOperator1;           // '<S25>/Bitwise Operator1'
  uint16_T BitwiseOperator2;           // '<S25>/Bitwise Operator2'
  uint16_T state;                      // '<S13>/Chart'
  uint16_T q_f;
  uint16_T b_x;
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16 BusAssignment_k;// '<S493>/Bus Assignment' 
  uint8_T Gain6_i;                     // '<S367>/Gain6'
  boolean_T SourceBlock_o1;            // '<S481>/SourceBlock'
  boolean_T LogicalOperator_f;         // '<S394>/Logical Operator'
  boolean_T LogicalOperator_p;         // '<S15>/Logical Operator'
  boolean_T LogicalOperator2;          // '<S16>/Logical Operator2'
  boolean_T LogicalOperator1;          // '<S16>/Logical Operator1'
  boolean_T Compare;                   // '<S10>/Compare'
  boolean_T Compare_l;                 // '<S329>/Compare'
  boolean_T Compare_k;                 // '<S38>/Compare'
  boolean_T cTolComputed;
  boolean_T DualFeasible;
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool b_varargout_2_p;
  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool BusAssignment_h;// '<S494>/Bus Assignment' 
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T sf_ZoneMPC_i;// '<S48>/Zone MPC'
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T sf_ZoneMPC;// '<S47>/Zone MPC'
  B_speeddeflectionanglecalcula_T sf_speeddeflectionanglecalcu_fc;// '<S46>/speed deflection angle calculation Y-' 
  B_speeddeflectionanglecalcula_T sf_speeddeflectionanglecalcul_j;// '<S46>/speed deflection angle calculation Y+' 
  B_speeddeflectionanglecalcula_T sf_speeddeflectionanglecalcul_f;// '<S46>/speed deflection angle calculation X-' 
  B_speeddeflectionanglecalcula_T sf_speeddeflectionanglecalculat;// '<S46>/speed deflection angle calculation X+' 
} B_ROPOD_4Wheel_TdistZMPC_cntr_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_bl_pj_T obj; // '<S8>/Get Parameter'
  robotics_slros_internal_bl_pj_T obj_f;// '<S8>/Get Parameter1'
  robotics_slros_internal_bl_pj_T obj_n;// '<S8>/Get Parameter2'
  robotics_slros_internal_bl_pj_T obj_i;// '<S8>/Get Parameter3'
  robotics_slros_internal_bl_pj_T obj_k;// '<S7>/Get Parameter1'
  robotics_slros_internal_bl_pj_T obj_m;// '<S7>/Get Parameter3'
  robotics_slros_internal_bl_pj_T obj_i4;// '<S7>/Get Parameter4'
  robotics_slros_internal_bl_pj_T obj_b;// '<S7>/Get Parameter5'
  robotics_slros_internal_bl_pj_T obj_h;// '<S7>/Get Parameter2'
  robotics_slros_internal_bl_pj_T obj_bg;// '<S7>/Get Parameter'
  robotics_slros_internal_bl_pj_T obj_be;// '<S6>/Get Parameter'
  robotics_slros_internal_bl_pj_T obj_l;// '<S6>/Get Parameter11'
  robotics_slros_internal_bl_pj_T obj_fa;// '<S6>/Get Parameter12'
  robotics_slros_internal_bl_pj_T obj_p;// '<S6>/Get Parameter13'
  robotics_slros_internal_bl_pj_T obj_l1;// '<S6>/Get Parameter14'
  robotics_slros_internal_bl_pj_T obj_pe;// '<S6>/Get Parameter15'
  robotics_slros_internal_bl_pj_T obj_g;// '<S6>/Get Parameter16'
  robotics_slros_internal_bl_pj_T obj_bc;// '<S6>/Get Parameter17'
  robotics_slros_internal_bl_pj_T obj_hv;// '<S6>/Get Parameter1'
  robotics_slros_internal_bl_pj_T obj_j;// '<S6>/Get Parameter2'
  robotics_slros_internal_bl_pj_T obj_e;// '<S6>/Get Parameter3'
  robotics_slros_internal_bl_pj_T obj_jj;// '<S6>/Get Parameter4'
  robotics_slros_internal_bl_pj_T obj_d;// '<S6>/Get Parameter5'
  robotics_slros_internal_bl_pj_T obj_ep;// '<S6>/Get Parameter6'
  robotics_slros_internal_bl_pj_T obj_lm;// '<S6>/Get Parameter7'
  robotics_slros_internal_bl_pj_T obj_ew;// '<S6>/Get Parameter8'
  robotics_slros_internal_bl_pj_T obj_nj;// '<S6>/Get Parameter9'
  robotics_slros_internal_bl_pj_T obj_b1;// '<S6>/Get Parameter10'
  robotics_slros_internal_bl_pj_T obj_ft;// '<S5>/Get Parameter14'
  robotics_slros_internal_bl_pj_T obj_pz;// '<S5>/Get Parameter10'
  robotics_slros_internal_bl_pj_T obj_jt;// '<S5>/Get Parameter11'
  robotics_slros_internal_bl_pj_T obj_da;// '<S5>/Get Parameter12'
  robotics_slros_internal_bl_pj_T obj_e5;// '<S5>/Get Parameter13'
  robotics_slros_internal_bl_pj_T obj_c;// '<S5>/Get Parameter6'
  robotics_slros_internal_bl_pj_T obj_mn;// '<S5>/Get Parameter'
  robotics_slros_internal_bl_pj_T obj_d0;// '<S5>/Get Parameter3'
  robotics_slros_internal_bl_pj_T obj_ey;// '<S5>/Get Parameter4'
  robotics_slros_internal_bl_pj_T obj_g0;// '<S5>/Get Parameter5'
  robotics_slros_internal_bl_pj_T obj_ch;// '<S5>/Get Parameter9'
  robotics_slros_internal_bl_pj_T obj_fy;// '<S5>/Get Parameter1'
  robotics_slros_internal_bl_pj_T obj_hq;// '<S5>/Get Parameter2'
  robotics_slros_internal_bl_pj_T obj_eq;// '<S5>/Get Parameter7'
  robotics_slros_internal_bl_pj_T obj_a;// '<S5>/Get Parameter8'
  real_T UnitDelay_DSTATE;             // '<S111>/Unit Delay'
  real_T UnitDelay_DSTATE_i;           // '<S109>/Unit Delay'
  real_T UnitDelay_DSTATE_b;           // '<S113>/Unit Delay'
  real_T UnitDelay_DSTATE_l;           // '<S115>/Unit Delay'
  real_T UnitDelay_DSTATE_l0;          // '<S117>/Unit Delay'
  real_T UnitDelay_DSTATE_lh;          // '<S119>/Unit Delay'
  real_T UnitDelay_DSTATE_lr;          // '<S121>/Unit Delay'
  real_T UnitDelay_DSTATE_e;           // '<S123>/Unit Delay'
  real_T UnitDelay_DSTATE_n;           // '<S167>/Unit Delay'
  real_T UnitDelay_DSTATE_j;           // '<S165>/Unit Delay'
  real_T UnitDelay_DSTATE_g;           // '<S169>/Unit Delay'
  real_T UnitDelay_DSTATE_bw;          // '<S171>/Unit Delay'
  real_T UnitDelay_DSTATE_jo;          // '<S173>/Unit Delay'
  real_T UnitDelay_DSTATE_f;           // '<S175>/Unit Delay'
  real_T UnitDelay_DSTATE_h;           // '<S177>/Unit Delay'
  real_T UnitDelay_DSTATE_e0;          // '<S179>/Unit Delay'
  real_T UnitDelay_DSTATE_d;           // '<S223>/Unit Delay'
  real_T UnitDelay_DSTATE_er;          // '<S221>/Unit Delay'
  real_T UnitDelay_DSTATE_ff;          // '<S225>/Unit Delay'
  real_T UnitDelay_DSTATE_a;           // '<S227>/Unit Delay'
  real_T UnitDelay_DSTATE_fe;          // '<S229>/Unit Delay'
  real_T UnitDelay_DSTATE_ii;          // '<S231>/Unit Delay'
  real_T UnitDelay_DSTATE_dw;          // '<S233>/Unit Delay'
  real_T UnitDelay_DSTATE_a3;          // '<S235>/Unit Delay'
  real_T UnitDelay_DSTATE_il;          // '<S279>/Unit Delay'
  real_T UnitDelay_DSTATE_a0;          // '<S277>/Unit Delay'
  real_T UnitDelay_DSTATE_ej;          // '<S281>/Unit Delay'
  real_T UnitDelay_DSTATE_jm;          // '<S283>/Unit Delay'
  real_T UnitDelay_DSTATE_m;           // '<S285>/Unit Delay'
  real_T UnitDelay_DSTATE_p;           // '<S287>/Unit Delay'
  real_T UnitDelay_DSTATE_al;          // '<S289>/Unit Delay'
  real_T UnitDelay_DSTATE_jx;          // '<S291>/Unit Delay'
  real_T Internal_DSTATE[2];           // '<S54>/Internal'
  real_T Internal_DSTATE_o[2];         // '<S55>/Internal'
  real_T EnabledDelay_DSTATE;          // '<S367>/Enabled Delay'
  real_T DelayInput2_DSTATE;           // '<S368>/Delay Input2'
  real_T DelayInput2_DSTATE_e;         // '<S369>/Delay Input2'
  real_T DelayInput2_DSTATE_k;         // '<S370>/Delay Input2'
  real_T Integrator_DSTATE;            // '<S408>/Integrator'
  real_T FilterDifferentiatorTF_states;// '<S409>/Filter Differentiator TF'
  real_T Integrator_DSTATE_f;          // '<S410>/Integrator'
  real_T FilterDifferentiatorTF_states_l;// '<S411>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_lv;          // '<S406>/Unit Delay'
  real_T Integrator_DSTATE_d;          // '<S417>/Integrator'
  real_T FilterDifferentiatorTF_states_f;// '<S418>/Filter Differentiator TF'
  real_T Integrator_DSTATE_h;          // '<S419>/Integrator'
  real_T FilterDifferentiatorTF_states_j;// '<S420>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_c;           // '<S415>/Unit Delay'
  real_T Integrator_DSTATE_i;          // '<S426>/Integrator'
  real_T FilterDifferentiatorTF_states_d;// '<S427>/Filter Differentiator TF'
  real_T Integrator_DSTATE_l;          // '<S428>/Integrator'
  real_T FilterDifferentiatorTF_states_i;// '<S429>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_k;           // '<S424>/Unit Delay'
  real_T Integrator_DSTATE_j;          // '<S435>/Integrator'
  real_T FilterDifferentiatorTF_state_im;// '<S436>/Filter Differentiator TF'
  real_T Integrator_DSTATE_o;          // '<S437>/Integrator'
  real_T FilterDifferentiatorTF_states_k;// '<S438>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_ev;          // '<S433>/Unit Delay'
  real_T Integrator_DSTATE_p;          // '<S444>/Integrator'
  real_T FilterDifferentiatorTF_states_a;// '<S445>/Filter Differentiator TF'
  real_T Integrator_DSTATE_py;         // '<S446>/Integrator'
  real_T FilterDifferentiatorTF_states_p;// '<S447>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_kp;          // '<S442>/Unit Delay'
  real_T Integrator_DSTATE_dj;         // '<S453>/Integrator'
  real_T FilterDifferentiatorTF_state_iz;// '<S454>/Filter Differentiator TF'
  real_T Integrator_DSTATE_fd;         // '<S455>/Integrator'
  real_T FilterDifferentiatorTF_states_g;// '<S456>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_ez;          // '<S451>/Unit Delay'
  real_T Integrator_DSTATE_n;          // '<S462>/Integrator'
  real_T FilterDifferentiatorTF_state_a4;// '<S463>/Filter Differentiator TF'
  real_T Integrator_DSTATE_ik;         // '<S464>/Integrator'
  real_T FilterDifferentiatorTF_states_m;// '<S465>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_lu;          // '<S460>/Unit Delay'
  real_T Integrator_DSTATE_a;          // '<S471>/Integrator'
  real_T FilterDifferentiatorTF_state_l5;// '<S472>/Filter Differentiator TF'
  real_T Integrator_DSTATE_i3;         // '<S473>/Integrator'
  real_T FilterDifferentiatorTF_state_pi;// '<S474>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_f1;          // '<S469>/Unit Delay'
  real_T UD_DSTATE[3];                 // '<S333>/UD'
  real_T Integrator_DSTATE_g;          // '<S342>/Integrator'
  real_T FilterDifferentiatorTF_state_kb;// '<S343>/Filter Differentiator TF'
  real_T Integrator_DSTATE_g0;         // '<S344>/Integrator'
  real_T FilterDifferentiatorTF_state_dz;// '<S345>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_hv;          // '<S340>/Unit Delay'
  real_T Integrator_DSTATE_do;         // '<S351>/Integrator'
  real_T FilterDifferentiatorTF_state_jy;// '<S352>/Filter Differentiator TF'
  real_T Integrator_DSTATE_dw;         // '<S353>/Integrator'
  real_T FilterDifferentiatorTF_state_al;// '<S354>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_ka;          // '<S349>/Unit Delay'
  real_T Integrator_DSTATE_c;          // '<S360>/Integrator'
  real_T FilterDifferentiatorTF_state_mb;// '<S361>/Filter Differentiator TF'
  real_T Integrator_DSTATE_ol;         // '<S362>/Integrator'
  real_T FilterDifferentiatorTF_states_e;// '<S363>/Filter Differentiator TF'
  real_T UnitDelay_DSTATE_du;          // '<S358>/Unit Delay'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S69>/Discrete-Time Integrator'
  real_T UnitDelay_DSTATE_lq;          // '<S81>/Unit Delay'
  real_T UnitDelay_DSTATE_bt;          // '<S79>/Unit Delay'
  real_T DiscreteTimeIntegrator_DSTATE_e;// '<S70>/Discrete-Time Integrator'
  real_T UnitDelay_DSTATE_jz;          // '<S85>/Unit Delay'
  real_T UnitDelay_DSTATE_ge;          // '<S83>/Unit Delay'
  real_T UnitDelay_DSTATE_az;          // '<S386>/Unit Delay'
  real_T UnitDelay_DSTATE_m0;          // '<S382>/Unit Delay'
  real_T UnitDelay_DSTATE_fz;          // '<S384>/Unit Delay'
  real_T UnitDelay_DSTATE_io;          // '<S388>/Unit Delay'
  real_T DiscreteTimeIntegrator_DSTATE_p[3];// '<S11>/Discrete-Time Integrator'
  real_T Delay_DSTATE;                 // '<S48>/Delay'
  real_T Delay1_DSTATE;                // '<S48>/Delay1'
  real_T Delay2_DSTATE[102];           // '<S48>/Delay2'
  real_T Delay3_DSTATE;                // '<S48>/Delay3'
  real_T Delay4_DSTATE;                // '<S48>/Delay4'
  real_T Delay6_DSTATE;                // '<S48>/Delay6'
  real_T Delay_DSTATE_j;               // '<S47>/Delay'
  real_T Delay1_DSTATE_d;              // '<S47>/Delay1'
  real_T Delay2_DSTATE_l[102];         // '<S47>/Delay2'
  real_T Delay3_DSTATE_d;              // '<S47>/Delay3'
  real_T Delay4_DSTATE_a;              // '<S47>/Delay4'
  real_T Delay6_DSTATE_m;              // '<S47>/Delay6'
  real_T DiscreteTimeIntegrator_DSTATE_k;// '<S45>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTATE;// '<S45>/Discrete-Time Integrator1'
  real_T Memory2_PreviousInput;        // '<S61>/Memory2'
  real_T Memory3_PreviousInput;        // '<S61>/Memory3'
  real_T Memory2_PreviousInput_l;      // '<S64>/Memory2'
  real_T Memory3_PreviousInput_g;      // '<S64>/Memory3'
  real_T Memory2_PreviousInput_n;      // '<S62>/Memory2'
  real_T Memory3_PreviousInput_e;      // '<S62>/Memory3'
  real_T Memory2_PreviousInput_c;      // '<S65>/Memory2'
  real_T Memory3_PreviousInput_ed;     // '<S65>/Memory3'
  real_T Memory2_PreviousInput_b;      // '<S60>/Memory2'
  real_T Memory3_PreviousInput_m;      // '<S60>/Memory3'
  real_T Memory2_PreviousInput_c4;     // '<S66>/Memory2'
  real_T Memory3_PreviousInput_f;      // '<S66>/Memory3'
  real_T Memory2_PreviousInput_j;      // '<S63>/Memory2'
  real_T Memory3_PreviousInput_gi;     // '<S63>/Memory3'
  real_T Memory2_PreviousInput_a;      // '<S67>/Memory2'
  real_T Memory3_PreviousInput_c;      // '<S67>/Memory3'
  real_T Memory2_PreviousInput_j2;     // '<S68>/Memory2'
  real_T Memory3_PreviousInput_b;      // '<S68>/Memory3'
  real_T ECAT_Interface_RWORK[13];     // '<S12>/ECAT_Interface'
  robotics_slcore_internal_bloc_T obj_nv;// '<S2>/Coordinate Transformation Conversion' 
  robotics_slros_internal_block_T obj_ps;// '<S488>/SinkBlock'
  robotics_slros_internal_block_T obj_k1;// '<S487>/SinkBlock'
  robotics_slros_internal_block_T obj_ia;// '<S486>/SinkBlock'
  robotics_slros_internal_block_T obj_fk;// '<S485>/SinkBlock'
  robotics_slros_internal_block_T obj_lmr;// '<S484>/SinkBlock'
  robotics_slros_internal_block_T obj_ht;// '<S483>/SinkBlock'
  robotics_slros_internal_block_T obj_hy;// '<S476>/SinkBlock'
  robotics_slros_internal_blo_p_T obj_a1;// '<S481>/SourceBlock'
  robotics_slros_internal_blo_p_T obj_c0;// '<S478>/SourceBlock'
  robotics_slros_internal_blo_p_T obj_c5;// '<S477>/SourceBlock'
  int8_T Integrator_PrevResetState;    // '<S408>/Integrator'
  int8_T Integrator_PrevResetState_m;  // '<S417>/Integrator'
  int8_T Integrator_PrevResetState_b;  // '<S426>/Integrator'
  int8_T Integrator_PrevResetState_l;  // '<S435>/Integrator'
  int8_T Integrator_PrevResetState_c;  // '<S444>/Integrator'
  int8_T Integrator_PrevResetState_o;  // '<S453>/Integrator'
  int8_T Integrator_PrevResetState_f;  // '<S462>/Integrator'
  int8_T Integrator_PrevResetState_d;  // '<S471>/Integrator'
  int8_T Integrator_PrevResetState_om; // '<S342>/Integrator'
  int8_T Integrator_PrevResetState_k;  // '<S351>/Integrator'
  int8_T Integrator_PrevResetState_e;  // '<S360>/Integrator'
  uint8_T is_active_c3_ROPOD_4Wheel_Tdist;// '<S13>/Chart'
  uint8_T is_c3_ROPOD_4Wheel_TdistZMPC_cn;// '<S13>/Chart'
  uint8_T is_Mode1_Operation_mode;     // '<S13>/Chart'
  uint8_T is_Mode4_Connect_to_cart;    // '<S13>/Chart'
  boolean_T ZMPC_y_MODE;               // '<S41>/ZMPC_y'
  boolean_T ZMPC_x_MODE;               // '<S41>/ZMPC_x'
  boolean_T Anglecontroller_MODE;      // '<S41>/Angle controller'
} DW_ROPOD_4Wheel_TdistZMPC_cntr_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState FilterDifferentiatorTF_Reset_ZC;// '<S409>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__h;// '<S418>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__j;// '<S427>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__d;// '<S436>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__m;// '<S445>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_mn;// '<S454>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__i;// '<S463>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__a;// '<S472>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__g;// '<S343>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset__f;// '<S352>/Filter Differentiator TF' 
  ZCSigState FilterDifferentiatorTF_Reset_dv;// '<S361>/Filter Differentiator TF' 
} PrevZCX_ROPOD_4Wheel_TdistZMPC_cntr_T;

// Parameters (auto storage)
struct P_ROPOD_4Wheel_TdistZMPC_cntr_T_ {
  real_T FFtheta_intia;                // Variable: FFtheta_intia
                                       //  Referenced by: '<S43>/Gain2'

  real_T FFxy_mass;                    // Variable: FFxy_mass
                                       //  Referenced by:
                                       //    '<S43>/Gain'
                                       //    '<S43>/Gain1'

  real_T Fd_max;                       // Variable: Fd_max
                                       //  Referenced by: '<S13>/Fd_max'

  real_T Fd_min;                       // Variable: Fd_min
                                       //  Referenced by: '<S13>/Fd_min'

  real_T Fr_max;                       // Variable: Fr_max
                                       //  Referenced by:
                                       //    '<S47>/Constant27'
                                       //    '<S48>/Constant27'

  real_T Fr_min;                       // Variable: Fr_min
                                       //  Referenced by:
                                       //    '<S47>/Constant26'
                                       //    '<S48>/Constant26'

  real_T SW_COM1_ENABLE1;              // Variable: SW_COM1_ENABLE1
                                       //  Referenced by: '<S25>/Constant3'

  real_T SW_COM1_ENABLE2;              // Variable: SW_COM1_ENABLE2
                                       //  Referenced by: '<S25>/Constant4'

  real_T SW_COM1_MODE_TORQUE;          // Variable: SW_COM1_MODE_TORQUE
                                       //  Referenced by: '<S23>/Constant13'

  real_T SW_COM1_MODE_VELOCITY;        // Variable: SW_COM1_MODE_VELOCITY
                                       //  Referenced by: '<S23>/Constant5'

  real_T SW_COM1_USE_TS;               // Variable: SW_COM1_USE_TS
                                       //  Referenced by: '<S25>/Constant11'

  real_T Taucompfactor;                // Variable: Taucompfactor
                                       //  Referenced by:
                                       //    '<S25>/Gain20'
                                       //    '<S30>/Gain1'
                                       //    '<S30>/Gain2'

  real_T Tinit;                        // Variable: Tinit
                                       //  Referenced by: '<S10>/Constant'

  real_T Tsp;                          // Variable: Tsp
                                       //  Referenced by:
                                       //    '<S5>/Get Parameter'
                                       //    '<S5>/Get Parameter1'
                                       //    '<S5>/Get Parameter10'
                                       //    '<S5>/Get Parameter11'
                                       //    '<S5>/Get Parameter12'
                                       //    '<S5>/Get Parameter13'
                                       //    '<S5>/Get Parameter14'
                                       //    '<S5>/Get Parameter2'
                                       //    '<S5>/Get Parameter3'
                                       //    '<S5>/Get Parameter4'
                                       //    '<S5>/Get Parameter5'
                                       //    '<S5>/Get Parameter6'
                                       //    '<S5>/Get Parameter7'
                                       //    '<S5>/Get Parameter8'
                                       //    '<S5>/Get Parameter9'
                                       //    '<S6>/Get Parameter'
                                       //    '<S6>/Get Parameter1'
                                       //    '<S6>/Get Parameter10'
                                       //    '<S6>/Get Parameter11'
                                       //    '<S6>/Get Parameter12'
                                       //    '<S6>/Get Parameter13'
                                       //    '<S6>/Get Parameter14'
                                       //    '<S6>/Get Parameter15'
                                       //    '<S6>/Get Parameter16'
                                       //    '<S6>/Get Parameter17'
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
                                       //    '<S7>/Get Parameter2'
                                       //    '<S7>/Get Parameter3'
                                       //    '<S7>/Get Parameter4'
                                       //    '<S7>/Get Parameter5'
                                       //    '<S8>/Get Parameter'
                                       //    '<S8>/Get Parameter1'
                                       //    '<S8>/Get Parameter2'
                                       //    '<S8>/Get Parameter3'

  real_T b_cx;                         // Variable: b_cx
                                       //  Referenced by:
                                       //    '<S13>/Gain1'
                                       //    '<S46>/Constant2'

  real_T b_cy;                         // Variable: b_cy
                                       //  Referenced by:
                                       //    '<S13>/Gain3'
                                       //    '<S46>/Constant4'

  real_T k_cx;                         // Variable: k_cx
                                       //  Referenced by:
                                       //    '<S13>/Gain'
                                       //    '<S46>/Constant1'

  real_T k_cy;                         // Variable: k_cy
                                       //  Referenced by:
                                       //    '<S13>/Gain2'
                                       //    '<S46>/Constant3'

  real_T sw_tau_2_curr;                // Variable: sw_tau_2_curr
                                       //  Referenced by:
                                       //    '<S30>/Gain3'
                                       //    '<S44>/Gain3'

  real_T xA[4080];                     // Variable: xA
                                       //  Referenced by: '<S47>/Constant30'

  real_T xBd_dis[4];                   // Variable: xBd_dis
                                       //  Referenced by: '<S47>/Constant2'

  real_T xF[80];                       // Variable: xF
                                       //  Referenced by: '<S47>/Constant28'

  real_T xH[1600];                     // Variable: xH
                                       //  Referenced by: '<S47>/Constant16'

  real_T xPhi[320];                    // Variable: xPhi
                                       //  Referenced by: '<S47>/Constant1'

  real_T xW[328];                      // Variable: xW
                                       //  Referenced by: '<S47>/Constant31'

  real_T xrho;                         // Variable: xrho
                                       //  Referenced by: '<S47>/Constant32'

  real_T yA[4080];                     // Variable: yA
                                       //  Referenced by: '<S48>/Constant30'

  real_T yBd_dis[4];                   // Variable: yBd_dis
                                       //  Referenced by: '<S48>/Constant2'

  real_T yF[80];                       // Variable: yF
                                       //  Referenced by: '<S48>/Constant28'

  real_T yH[1600];                     // Variable: yH
                                       //  Referenced by: '<S48>/Constant16'

  real_T yPhi[320];                    // Variable: yPhi
                                       //  Referenced by: '<S48>/Constant1'

  real_T yW[328];                      // Variable: yW
                                       //  Referenced by: '<S48>/Constant31'

  real_T yrho;                         // Variable: yrho
                                       //  Referenced by: '<S48>/Constant32'

  real_T DiscreteDerivative_ICPrevScaled;// Mask Parameter: DiscreteDerivative_ICPrevScaled
                                         //  Referenced by: '<S333>/UD'

  real_T CompareToConstant_const;      // Mask Parameter: CompareToConstant_const
                                       //  Referenced by: '<S326>/Constant'

  real_T CompareToConstant_const_e;    // Mask Parameter: CompareToConstant_const_e
                                       //  Referenced by: '<S327>/Constant'

  real_T CompareToConstant_const_g;    // Mask Parameter: CompareToConstant_const_g
                                       //  Referenced by: '<S328>/Constant'

  real_T CompareToConstant_const_b;    // Mask Parameter: CompareToConstant_const_b
                                       //  Referenced by: '<S329>/Constant'

  real_T CompareToConstant_const_i;    // Mask Parameter: CompareToConstant_const_i
                                       //  Referenced by: '<S377>/Constant'

  uint16_T CompareToConstant_const_gv; // Mask Parameter: CompareToConstant_const_gv
                                       //  Referenced by: '<S37>/Constant'

  boolean_T CompareToConstant1_const;  // Mask Parameter: CompareToConstant1_const
                                       //  Referenced by: '<S38>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S475>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                      //  Referenced by: '<S496>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                      //  Referenced by: '<S495>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                      //  Referenced by: '<S497>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cn_WrenchStamped_datn2q Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                      //  Referenced by: '<S498>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                                 //  Referenced by: '<S482>/Out1'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                      //  Referenced by: '<S481>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                       //  Referenced by: '<S18>/Constant1'

  real_T damping_Gain;                 // Expression: .2
                                       //  Referenced by: '<S18>/damping'

  real_T Gain_Gain;                    // Expression: -1
                                       //  Referenced by: '<S18>/Gain'

  real_T Gain1_Gain;                   // Expression: 1
                                       //  Referenced by: '<S18>/Gain1'

  real_T damping1_Gain;                // Expression: .2
                                       //  Referenced by: '<S18>/damping1'

  real_T Gain6_Gain;                   // Expression: -1
                                       //  Referenced by: '<S18>/Gain6'

  real_T Gain7_Gain;                   // Expression: 1
                                       //  Referenced by: '<S18>/Gain7'

  real_T damping2_Gain;                // Expression: .2
                                       //  Referenced by: '<S18>/damping2'

  real_T Gain8_Gain;                   // Expression: -1
                                       //  Referenced by: '<S18>/Gain8'

  real_T Gain9_Gain;                   // Expression: 1
                                       //  Referenced by: '<S18>/Gain9'

  real_T damping3_Gain;                // Expression: .2
                                       //  Referenced by: '<S18>/damping3'

  real_T Gain10_Gain;                  // Expression: -1
                                       //  Referenced by: '<S18>/Gain10'

  real_T Gain11_Gain;                  // Expression: 1
                                       //  Referenced by: '<S18>/Gain11'

  real_T Constant1_Value_h;            // Expression: 0
                                       //  Referenced by: '<S19>/Constant1'

  real_T Constant1_Value_p;            // Expression: 0
                                       //  Referenced by: '<S15>/Constant1'

  real_T Constant1_Value_o;            // Expression: 0
                                       //  Referenced by: '<S394>/Constant1'

  real_T MovinfaroundSWaxiscenter_Value[8];// Expression: [2 -2 2 -2 2 -2 2 -2]
                                           //  Referenced by: '<S23>/Movinf around SW axis center'

  real_T signconvention_Gain;          // Expression: -1
                                       //  Referenced by: '<S24>/sign convention'

  real_T signconvention1_Gain;         // Expression: -1
                                       //  Referenced by: '<S24>/sign convention1'

  real_T signconvention2_Gain;         // Expression: -1
                                       //  Referenced by: '<S24>/sign convention2'

  real_T signconvention3_Gain;         // Expression: -1
                                       //  Referenced by: '<S24>/sign convention3'

  real_T Constant2_Value[8];           // Expression: [0 0 0 0 0 0 0 0]
                                       //  Referenced by: '<S24>/Constant2'

  real_T Constant1_Value_m[4];         // Expression: [0 0 0 0]
                                       //  Referenced by: '<S24>/Constant1'

  real_T Constant_Value_n[4];          // Expression: [0 0 0 0]
                                       //  Referenced by: '<S24>/Constant'

  real_T Constant1_Value_g;            // Expression: 0
                                       //  Referenced by: '<S13>/Constant1'

  real_T Constant_Value_m;             // Expression: 1
                                       //  Referenced by: '<S13>/Constant'

  real_T u_N_Y0;                       // Expression: 0
                                       //  Referenced by: '<S45>/u_N'

  real_T Ref_speed_Value;              // Expression: 0
                                       //  Referenced by: '<S45>/Ref_speed'

  real_T D_Gain;                       // Expression: 1
                                       //  Referenced by: '<S45>/D'

  real_T DiscreteTimeIntegrator_gainval;// Computed Parameter: DiscreteTimeIntegrator_gainval
                                        //  Referenced by: '<S45>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                       //  Referenced by: '<S45>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainval;// Computed Parameter: DiscreteTimeIntegrator1_gainval
                                         //  Referenced by: '<S45>/Discrete-Time Integrator1'

  real_T DiscreteTimeIntegrator1_IC;   // Expression: 0
                                       //  Referenced by: '<S45>/Discrete-Time Integrator1'

  real_T I_Gain;                       // Expression: 1
                                       //  Referenced by: '<S45>/I'

  real_T P_Gain;                       // Expression: 4000
                                       //  Referenced by: '<S45>/P'

  real_T Constant_Value_ms;            // Expression: 0
                                       //  Referenced by: '<S75>/Constant'

  real_T Constant_Value_p;             // Expression: 0
                                       //  Referenced by: '<S76>/Constant'

  real_T Constant_Value_b;             // Expression: 0
                                       //  Referenced by: '<S77>/Constant'

  real_T Constant_Value_c;             // Expression: 0
                                       //  Referenced by: '<S78>/Constant'

  real_T Fx_Y0;                        // Expression: 0
                                       //  Referenced by: '<S47>/Fx'

  real_T Feasability_Y0;               // Expression: 0
                                       //  Referenced by: '<S47>/Feasability'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                       //  Referenced by: '<S47>/Delay'

  real_T Delay1_InitialCondition;      // Expression: 0.0
                                       //  Referenced by: '<S47>/Delay1'

  real_T Delay2_InitialCondition;      // Expression: 0.0
                                       //  Referenced by: '<S47>/Delay2'

  real_T Delay3_InitialCondition;      // Expression: 0.0
                                       //  Referenced by: '<S47>/Delay3'

  real_T Delay4_InitialCondition;      // Expression: 0.0
                                       //  Referenced by: '<S47>/Delay4'

  real_T Delay6_InitialCondition;      // Expression: 10
                                       //  Referenced by: '<S47>/Delay6'

  real_T Fx_Y0_c;                      // Expression: 0
                                       //  Referenced by: '<S48>/Fx'

  real_T Feasability_Y0_j;             // Expression: 0
                                       //  Referenced by: '<S48>/Feasability'

  real_T Delay_InitialCondition_a;     // Expression: 0.0
                                       //  Referenced by: '<S48>/Delay'

  real_T Delay1_InitialCondition_g;    // Expression: 0.0
                                       //  Referenced by: '<S48>/Delay1'

  real_T Delay2_InitialCondition_o;    // Expression: 0.0
                                       //  Referenced by: '<S48>/Delay2'

  real_T Delay3_InitialCondition_e;    // Expression: 0.0
                                       //  Referenced by: '<S48>/Delay3'

  real_T Delay4_InitialCondition_m;    // Expression: 0.0
                                       //  Referenced by: '<S48>/Delay4'

  real_T Delay6_InitialCondition_e;    // Expression: 10
                                       //  Referenced by: '<S48>/Delay6'

  real_T Constant2_Value_i;            // Expression: 0
                                       //  Referenced by: '<S43>/Constant2'

  real_T Constant1_Value_or;           // Expression: 0
                                       //  Referenced by: '<S43>/Constant1'

  real_T Constant_Value_k;             // Expression: 0
                                       //  Referenced by: '<S43>/Constant'

  real_T Constant2_Value_p;            // Expression: 0
                                       //  Referenced by: '<S367>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                       //  Referenced by: '<S17>/Constant3'

  real_T Constant1_Value_d;            // Expression: 0
                                       //  Referenced by: '<S367>/Constant1'

  real_T Constant2_Value_j;            // Expression: 0
                                       //  Referenced by: '<S17>/Constant2'

  real_T Constant_Value_pg;            // Expression: 0
                                       //  Referenced by: '<S367>/Constant'

  real_T Constant1_Value_hl;           // Expression: 0
                                       //  Referenced by: '<S17>/Constant1'

  real_T ECAT_Interface_P1_Size[2];    // Computed Parameter: ECAT_Interface_P1_Size
                                       //  Referenced by: '<S12>/ECAT_Interface'

  real_T ECAT_Interface_P1[4];         // Computed Parameter: ECAT_Interface_P1
                                       //  Referenced by: '<S12>/ECAT_Interface'

  real_T ECAT_Interface_P2_Size[2];    // Computed Parameter: ECAT_Interface_P2_Size
                                       //  Referenced by: '<S12>/ECAT_Interface'

  real_T ECAT_Interface_P2;            // Expression: TS
                                       //  Referenced by: '<S12>/ECAT_Interface'

  real_T Constant6_Value;              // Expression: 0
                                       //  Referenced by: '<S46>/Constant6'

  real_T Constant_Value_pu;            // Expression: 2*pi*0.8
                                       //  Referenced by: '<S56>/Constant'

  real_T Constant_Value_no;            // Expression: tau
                                       //  Referenced by: '<S111>/Constant'

  real_T UnitDelay_InitialCondition;   // Expression: 0
                                       //  Referenced by: '<S111>/Unit Delay'

  real_T Constant_Value_de;            // Expression: tau
                                       //  Referenced by: '<S109>/Constant'

  real_T UnitDelay_InitialCondition_e; // Expression: 0
                                       //  Referenced by: '<S109>/Unit Delay'

  real_T Constant_Value_bx;            // Expression: tau
                                       //  Referenced by: '<S113>/Constant'

  real_T UnitDelay_InitialCondition_l; // Expression: 0
                                       //  Referenced by: '<S113>/Unit Delay'

  real_T Constant_Value_g;             // Expression: tau
                                       //  Referenced by: '<S115>/Constant'

  real_T UnitDelay_InitialCondition_h; // Expression: 0
                                       //  Referenced by: '<S115>/Unit Delay'

  real_T Constant_Value_en;            // Expression: tau
                                       //  Referenced by: '<S117>/Constant'

  real_T UnitDelay_InitialCondition_j; // Expression: 0
                                       //  Referenced by: '<S117>/Unit Delay'

  real_T Constant_Value_dr;            // Expression: tau
                                       //  Referenced by: '<S119>/Constant'

  real_T UnitDelay_InitialCondition_g; // Expression: 0
                                       //  Referenced by: '<S119>/Unit Delay'

  real_T Constant_Value_ie;            // Expression: tau
                                       //  Referenced by: '<S121>/Constant'

  real_T UnitDelay_InitialCondition_i; // Expression: 0
                                       //  Referenced by: '<S121>/Unit Delay'

  real_T Constant_Value_l;             // Expression: tau
                                       //  Referenced by: '<S123>/Constant'

  real_T UnitDelay_InitialCondition_f; // Expression: 0
                                       //  Referenced by: '<S123>/Unit Delay'

  real_T Memory2_InitialCondition;     // Expression: 1
                                       //  Referenced by: '<S61>/Memory2'

  real_T Memory3_InitialCondition;     // Expression: 0
                                       //  Referenced by: '<S61>/Memory3'

  real_T Switch2_Threshold;            // Expression: 0
                                       //  Referenced by: '<S46>/Switch2'

  real_T Constant5_Value;              // Expression: 0
                                       //  Referenced by: '<S46>/Constant5'

  real_T Constant_Value_lv;            // Expression: 2*pi*0.8
                                       //  Referenced by: '<S57>/Constant'

  real_T Constant_Value_p1;            // Expression: tau
                                       //  Referenced by: '<S167>/Constant'

  real_T UnitDelay_InitialCondition_e4;// Expression: 0
                                       //  Referenced by: '<S167>/Unit Delay'

  real_T Constant_Value_dx;            // Expression: tau
                                       //  Referenced by: '<S165>/Constant'

  real_T UnitDelay_InitialCondition_lu;// Expression: 0
                                       //  Referenced by: '<S165>/Unit Delay'

  real_T Constant_Value_e2;            // Expression: tau
                                       //  Referenced by: '<S169>/Constant'

  real_T UnitDelay_InitialCondition_if;// Expression: 0
                                       //  Referenced by: '<S169>/Unit Delay'

  real_T Constant_Value_na;            // Expression: tau
                                       //  Referenced by: '<S171>/Constant'

  real_T UnitDelay_InitialCondition_hg;// Expression: 0
                                       //  Referenced by: '<S171>/Unit Delay'

  real_T Constant_Value_f;             // Expression: tau
                                       //  Referenced by: '<S173>/Constant'

  real_T UnitDelay_InitialCondition_n; // Expression: 0
                                       //  Referenced by: '<S173>/Unit Delay'

  real_T Constant_Value_ix;            // Expression: tau
                                       //  Referenced by: '<S175>/Constant'

  real_T UnitDelay_InitialCondition_m; // Expression: 0
                                       //  Referenced by: '<S175>/Unit Delay'

  real_T Constant_Value_h;             // Expression: tau
                                       //  Referenced by: '<S177>/Constant'

  real_T UnitDelay_InitialCondition_l3;// Expression: 0
                                       //  Referenced by: '<S177>/Unit Delay'

  real_T Constant_Value_ly;            // Expression: tau
                                       //  Referenced by: '<S179>/Constant'

  real_T UnitDelay_InitialCondition_j4;// Expression: 0
                                       //  Referenced by: '<S179>/Unit Delay'

  real_T Memory2_InitialCondition_f;   // Expression: 1
                                       //  Referenced by: '<S64>/Memory2'

  real_T Memory3_InitialCondition_h;   // Expression: 0
                                       //  Referenced by: '<S64>/Memory3'

  real_T Memory2_InitialCondition_k;   // Expression: 1
                                       //  Referenced by: '<S62>/Memory2'

  real_T Memory3_InitialCondition_k;   // Expression: 0
                                       //  Referenced by: '<S62>/Memory3'

  real_T Switch3_Threshold;            // Expression: 0
                                       //  Referenced by: '<S46>/Switch3'

  real_T Memory2_InitialCondition_c;   // Expression: 1
                                       //  Referenced by: '<S65>/Memory2'

  real_T Memory3_InitialCondition_e;   // Expression: 0
                                       //  Referenced by: '<S65>/Memory3'

  real_T Constant_Value_c4;            // Expression: 2*pi*0.8
                                       //  Referenced by: '<S58>/Constant'

  real_T Constant_Value_ieq;           // Expression: tau
                                       //  Referenced by: '<S223>/Constant'

  real_T UnitDelay_InitialCondition_gu;// Expression: 0
                                       //  Referenced by: '<S223>/Unit Delay'

  real_T Constant_Value_pb;            // Expression: tau
                                       //  Referenced by: '<S221>/Constant'

  real_T UnitDelay_InitialCondition_i3;// Expression: 0
                                       //  Referenced by: '<S221>/Unit Delay'

  real_T Constant_Value_eno;           // Expression: tau
                                       //  Referenced by: '<S225>/Constant'

  real_T UnitDelay_InitialCondition_hy;// Expression: 0
                                       //  Referenced by: '<S225>/Unit Delay'

  real_T Constant_Value_fa;            // Expression: tau
                                       //  Referenced by: '<S227>/Constant'

  real_T UnitDelay_InitialCondition_b; // Expression: 0
                                       //  Referenced by: '<S227>/Unit Delay'

  real_T Constant_Value_mf;            // Expression: tau
                                       //  Referenced by: '<S229>/Constant'

  real_T UnitDelay_InitialCondition_lj;// Expression: 0
                                       //  Referenced by: '<S229>/Unit Delay'

  real_T Constant_Value_go;            // Expression: tau
                                       //  Referenced by: '<S231>/Constant'

  real_T UnitDelay_InitialCondition_lr;// Expression: 0
                                       //  Referenced by: '<S231>/Unit Delay'

  real_T Constant_Value_ce;            // Expression: tau
                                       //  Referenced by: '<S233>/Constant'

  real_T UnitDelay_InitialCondition_jw;// Expression: 0
                                       //  Referenced by: '<S233>/Unit Delay'

  real_T Constant_Value_g3;            // Expression: tau
                                       //  Referenced by: '<S235>/Constant'

  real_T UnitDelay_InitialCondition_mi;// Expression: 0
                                       //  Referenced by: '<S235>/Unit Delay'

  real_T Memory2_InitialCondition_m;   // Expression: 1
                                       //  Referenced by: '<S60>/Memory2'

  real_T Memory3_InitialCondition_hg;  // Expression: 0
                                       //  Referenced by: '<S60>/Memory3'

  real_T Constant_Value_iz;            // Expression: 2*pi*0.8
                                       //  Referenced by: '<S59>/Constant'

  real_T Constant_Value_ixy;           // Expression: tau
                                       //  Referenced by: '<S279>/Constant'

  real_T UnitDelay_InitialCondition_n3;// Expression: 0
                                       //  Referenced by: '<S279>/Unit Delay'

  real_T Constant_Value_br;            // Expression: tau
                                       //  Referenced by: '<S277>/Constant'

  real_T UnitDelay_InitialCondition_gn;// Expression: 0
                                       //  Referenced by: '<S277>/Unit Delay'

  real_T Constant_Value_hh;            // Expression: tau
                                       //  Referenced by: '<S281>/Constant'

  real_T UnitDelay_InitialCondition_nr;// Expression: 0
                                       //  Referenced by: '<S281>/Unit Delay'

  real_T Constant_Value_ek;            // Expression: tau
                                       //  Referenced by: '<S283>/Constant'

  real_T UnitDelay_InitialCondition_lq;// Expression: 0
                                       //  Referenced by: '<S283>/Unit Delay'

  real_T Constant_Value_du;            // Expression: tau
                                       //  Referenced by: '<S285>/Constant'

  real_T UnitDelay_InitialCondition_a; // Expression: 0
                                       //  Referenced by: '<S285>/Unit Delay'

  real_T Constant_Value_e5;            // Expression: tau
                                       //  Referenced by: '<S287>/Constant'

  real_T UnitDelay_InitialCondition_k; // Expression: 0
                                       //  Referenced by: '<S287>/Unit Delay'

  real_T Constant_Value_jy;            // Expression: tau
                                       //  Referenced by: '<S289>/Constant'

  real_T UnitDelay_InitialCondition_ah;// Expression: 0
                                       //  Referenced by: '<S289>/Unit Delay'

  real_T Constant_Value_oi;            // Expression: tau
                                       //  Referenced by: '<S291>/Constant'

  real_T UnitDelay_InitialCondition_n3m;// Expression: 0
                                        //  Referenced by: '<S291>/Unit Delay'

  real_T Memory2_InitialCondition_mc;  // Expression: 1
                                       //  Referenced by: '<S66>/Memory2'

  real_T Memory3_InitialCondition_i;   // Expression: 0
                                       //  Referenced by: '<S66>/Memory3'

  real_T Internal_A[3];                // Computed Parameter: Internal_A
                                       //  Referenced by: '<S54>/Internal'

  real_T Internal_B;                   // Computed Parameter: Internal_B
                                       //  Referenced by: '<S54>/Internal'

  real_T Internal_C[2];                // Computed Parameter: Internal_C
                                       //  Referenced by: '<S54>/Internal'

  real_T Internal_D;                   // Computed Parameter: Internal_D
                                       //  Referenced by: '<S54>/Internal'

  real_T Internal_InitialCondition;    // Expression: 0
                                       //  Referenced by: '<S54>/Internal'

  real_T Memory2_InitialCondition_mt;  // Expression: 1
                                       //  Referenced by: '<S63>/Memory2'

  real_T Memory3_InitialCondition_f;   // Expression: 0
                                       //  Referenced by: '<S63>/Memory3'

  real_T Memory2_InitialCondition_g;   // Expression: 1
                                       //  Referenced by: '<S67>/Memory2'

  real_T Memory3_InitialCondition_hh;  // Expression: 0
                                       //  Referenced by: '<S67>/Memory3'

  real_T Internal_A_m[3];              // Computed Parameter: Internal_A_m
                                       //  Referenced by: '<S55>/Internal'

  real_T Internal_B_j;                 // Computed Parameter: Internal_B_j
                                       //  Referenced by: '<S55>/Internal'

  real_T Internal_C_o[2];              // Computed Parameter: Internal_C_o
                                       //  Referenced by: '<S55>/Internal'

  real_T Internal_D_n;                 // Computed Parameter: Internal_D_n
                                       //  Referenced by: '<S55>/Internal'

  real_T Internal_InitialCondition_g;  // Expression: 0
                                       //  Referenced by: '<S55>/Internal'

  real_T Gain2_Gain;                   // Expression: 2*pi
                                       //  Referenced by: '<S395>/Gain2'

  real_T Constant_Value_kb;            // Expression: tau
                                       //  Referenced by: '<S406>/Constant'

  real_T SFunction_P1_Size[2];         // Computed Parameter: SFunction_P1_Size
                                       //  Referenced by: '<S32>/S-Function'

  real_T SFunction_P1;                 // Expression: link_id
                                       //  Referenced by: '<S32>/S-Function'

  real_T SFunction_P1_Size_j[2];       // Computed Parameter: SFunction_P1_Size_j
                                       //  Referenced by: '<S33>/S-Function'

  real_T SFunction_P1_p;               // Expression: link_id
                                       //  Referenced by: '<S33>/S-Function'

  real_T SFunction_P1_Size_e[2];       // Computed Parameter: SFunction_P1_Size_e
                                       //  Referenced by: '<S34>/S-Function'

  real_T SFunction_P1_d;               // Expression: link_id
                                       //  Referenced by: '<S34>/S-Function'

  real_T SFunction_P1_Size_d[2];       // Computed Parameter: SFunction_P1_Size_d
                                       //  Referenced by: '<S35>/S-Function'

  real_T SFunction_P1_f;               // Expression: link_id
                                       //  Referenced by: '<S35>/S-Function'

  real_T sampletime_WtEt;              // Computed Parameter: sampletime_WtEt
                                       //  Referenced by: '<S368>/sample time'

  real_T EnabledDelay_InitialCondition;// Expression: 0.0
                                       //  Referenced by: '<S367>/Enabled Delay'

  real_T Switch1_Threshold;            // Expression: 0
                                       //  Referenced by: '<S17>/Switch1'

  real_T Gain1_Gain_j;                 // Expression: -1
                                       //  Referenced by: '<S366>/Gain1'

  real_T DelayInput2_InitialCondition; // Expression: 0
                                       //  Referenced by: '<S368>/Delay Input2'

  real_T Gain_Gain_p;                  // Expression: -1
                                       //  Referenced by: '<S366>/Gain'

  real_T sampletime_WtEt_l;            // Computed Parameter: sampletime_WtEt_l
                                       //  Referenced by: '<S369>/sample time'

  real_T Switch2_Threshold_f;          // Expression: 0
                                       //  Referenced by: '<S17>/Switch2'

  real_T Gain3_Gain;                   // Expression: -1
                                       //  Referenced by: '<S366>/Gain3'

  real_T DelayInput2_InitialCondition_k;// Expression: 0
                                        //  Referenced by: '<S369>/Delay Input2'

  real_T Gain2_Gain_j;                 // Expression: -1
                                       //  Referenced by: '<S366>/Gain2'

  real_T sampletime_WtEt_b;            // Computed Parameter: sampletime_WtEt_b
                                       //  Referenced by: '<S370>/sample time'

  real_T Switch3_Threshold_c;          // Expression: 0
                                       //  Referenced by: '<S17>/Switch3'

  real_T Gain5_Gain;                   // Expression: -1
                                       //  Referenced by: '<S366>/Gain5'

  real_T DelayInput2_InitialCondition_i;// Expression: 0
                                        //  Referenced by: '<S370>/Delay Input2'

  real_T Gain4_Gain;                   // Expression: -1
                                       //  Referenced by: '<S366>/Gain4'

  real_T Constant_Value_ci[8];         // Expression: [1 1 1 1 1 1 1 1]
                                       //  Referenced by: '<S1>/Constant'

  real_T Constant4_Value;              // Expression: 1
                                       //  Referenced by: '<S404>/Constant4'

  real_T Gain2_Gain_e;                 // Expression: 2*pi
                                       //  Referenced by: '<S404>/Gain2'

  real_T Integrator_gainval;           // Computed Parameter: Integrator_gainval
                                       //  Referenced by: '<S408>/Integrator'

  real_T Integrator_IC;                // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S408>/Integrator'

  real_T Constant_Value_a;             // Expression: 0
                                       //  Referenced by: '<S404>/Constant'

  real_T Constant_Value_hg;            // Expression: 1
                                       //  Referenced by: '<S409>/Constant'

  real_T Constant5_Value_h;            // Expression: 0
                                       //  Referenced by: '<S404>/Constant5'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                       //  Referenced by: '<S409>/TSamp'

  real_T FilterDifferentiatorTF_NumCoef[2];// Expression: [1 -1]
                                           //  Referenced by: '<S409>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_InitialS;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S409>/Filter Differentiator TF'

  real_T Constant4_Value_k;            // Expression: 1
                                       //  Referenced by: '<S405>/Constant4'

  real_T Constant2_Value_c;            // Expression: 0
                                       //  Referenced by: '<S405>/Constant2'

  real_T Integrator_gainval_b;         // Computed Parameter: Integrator_gainval_b
                                       //  Referenced by: '<S410>/Integrator'

  real_T Integrator_IC_e;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S410>/Integrator'

  real_T Gain2_Gain_l;                 // Expression: 2*pi
                                       //  Referenced by: '<S405>/Gain2'

  real_T Constant1_Value_k;            // Expression: 1
                                       //  Referenced by: '<S405>/Constant1'

  real_T Gain1_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S405>/Gain1'

  real_T Constant_Value_dm;            // Expression: 1
                                       //  Referenced by: '<S411>/Constant'

  real_T TSamp_WtEt_h;                 // Computed Parameter: TSamp_WtEt_h
                                       //  Referenced by: '<S411>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_d[2];// Expression: [1 -1]
                                            //  Referenced by: '<S411>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_n;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S411>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_jc;// Expression: 0
                                       //  Referenced by: '<S406>/Unit Delay'

  real_T Gain2_Gain_ea;                // Expression: 2*pi
                                       //  Referenced by: '<S396>/Gain2'

  real_T Constant_Value_cc;            // Expression: tau
                                       //  Referenced by: '<S415>/Constant'

  real_T Constant4_Value_kt;           // Expression: 1
                                       //  Referenced by: '<S413>/Constant4'

  real_T Gain2_Gain_d;                 // Expression: 2*pi
                                       //  Referenced by: '<S413>/Gain2'

  real_T Integrator_gainval_j;         // Computed Parameter: Integrator_gainval_j
                                       //  Referenced by: '<S417>/Integrator'

  real_T Integrator_IC_l;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S417>/Integrator'

  real_T Constant_Value_l5;            // Expression: 0
                                       //  Referenced by: '<S413>/Constant'

  real_T Constant_Value_ks;            // Expression: 1
                                       //  Referenced by: '<S418>/Constant'

  real_T Constant5_Value_k;            // Expression: 0
                                       //  Referenced by: '<S413>/Constant5'

  real_T TSamp_WtEt_m;                 // Computed Parameter: TSamp_WtEt_m
                                       //  Referenced by: '<S418>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_m[2];// Expression: [1 -1]
                                            //  Referenced by: '<S418>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_e;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S418>/Filter Differentiator TF'

  real_T Constant4_Value_o;            // Expression: 1
                                       //  Referenced by: '<S414>/Constant4'

  real_T Constant2_Value_d;            // Expression: 0
                                       //  Referenced by: '<S414>/Constant2'

  real_T Integrator_gainval_d;         // Computed Parameter: Integrator_gainval_d
                                       //  Referenced by: '<S419>/Integrator'

  real_T Integrator_IC_la;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S419>/Integrator'

  real_T Gain2_Gain_a;                 // Expression: 2*pi
                                       //  Referenced by: '<S414>/Gain2'

  real_T Constant1_Value_kp;           // Expression: 1
                                       //  Referenced by: '<S414>/Constant1'

  real_T Gain1_Gain_o;                 // Expression: 2*pi
                                       //  Referenced by: '<S414>/Gain1'

  real_T Constant_Value_nz;            // Expression: 1
                                       //  Referenced by: '<S420>/Constant'

  real_T TSamp_WtEt_l;                 // Computed Parameter: TSamp_WtEt_l
                                       //  Referenced by: '<S420>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_b[2];// Expression: [1 -1]
                                            //  Referenced by: '<S420>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_m;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S420>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_c; // Expression: 0
                                       //  Referenced by: '<S415>/Unit Delay'

  real_T Gain2_Gain_i;                 // Expression: 2*pi
                                       //  Referenced by: '<S397>/Gain2'

  real_T Constant_Value_hc;            // Expression: tau
                                       //  Referenced by: '<S424>/Constant'

  real_T Constant4_Value_h;            // Expression: 1
                                       //  Referenced by: '<S422>/Constant4'

  real_T Gain2_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S422>/Gain2'

  real_T Integrator_gainval_bn;        // Computed Parameter: Integrator_gainval_bn
                                       //  Referenced by: '<S426>/Integrator'

  real_T Integrator_IC_d;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S426>/Integrator'

  real_T Constant_Value_nn;            // Expression: 0
                                       //  Referenced by: '<S422>/Constant'

  real_T Constant_Value_e2s;           // Expression: 1
                                       //  Referenced by: '<S427>/Constant'

  real_T Constant5_Value_a;            // Expression: 0
                                       //  Referenced by: '<S422>/Constant5'

  real_T TSamp_WtEt_c;                 // Computed Parameter: TSamp_WtEt_c
                                       //  Referenced by: '<S427>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_j[2];// Expression: [1 -1]
                                            //  Referenced by: '<S427>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_a;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S427>/Filter Differentiator TF'

  real_T Constant4_Value_c;            // Expression: 1
                                       //  Referenced by: '<S423>/Constant4'

  real_T Constant2_Value_m;            // Expression: 0
                                       //  Referenced by: '<S423>/Constant2'

  real_T Integrator_gainval_e;         // Computed Parameter: Integrator_gainval_e
                                       //  Referenced by: '<S428>/Integrator'

  real_T Integrator_IC_n;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S428>/Integrator'

  real_T Gain2_Gain_ip;                // Expression: 2*pi
                                       //  Referenced by: '<S423>/Gain2'

  real_T Constant1_Value_b;            // Expression: 1
                                       //  Referenced by: '<S423>/Constant1'

  real_T Gain1_Gain_og;                // Expression: 2*pi
                                       //  Referenced by: '<S423>/Gain1'

  real_T Constant_Value_jf;            // Expression: 1
                                       //  Referenced by: '<S429>/Constant'

  real_T TSamp_WtEt_o;                 // Computed Parameter: TSamp_WtEt_o
                                       //  Referenced by: '<S429>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_e[2];// Expression: [1 -1]
                                            //  Referenced by: '<S429>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_j;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S429>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_n2;// Expression: 0
                                       //  Referenced by: '<S424>/Unit Delay'

  real_T Gain2_Gain_h;                 // Expression: 2*pi
                                       //  Referenced by: '<S398>/Gain2'

  real_T Constant_Value_dz;            // Expression: tau
                                       //  Referenced by: '<S433>/Constant'

  real_T Constant4_Value_b;            // Expression: 1
                                       //  Referenced by: '<S431>/Constant4'

  real_T Gain2_Gain_o;                 // Expression: 2*pi
                                       //  Referenced by: '<S431>/Gain2'

  real_T Integrator_gainval_n;         // Computed Parameter: Integrator_gainval_n
                                       //  Referenced by: '<S435>/Integrator'

  real_T Integrator_IC_c;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S435>/Integrator'

  real_T Constant_Value_j5;            // Expression: 0
                                       //  Referenced by: '<S431>/Constant'

  real_T Constant_Value_f3;            // Expression: 1
                                       //  Referenced by: '<S436>/Constant'

  real_T Constant5_Value_n;            // Expression: 0
                                       //  Referenced by: '<S431>/Constant5'

  real_T TSamp_WtEt_n;                 // Computed Parameter: TSamp_WtEt_n
                                       //  Referenced by: '<S436>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_g[2];// Expression: [1 -1]
                                            //  Referenced by: '<S436>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_d;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S436>/Filter Differentiator TF'

  real_T Constant4_Value_n;            // Expression: 1
                                       //  Referenced by: '<S432>/Constant4'

  real_T Constant2_Value_l;            // Expression: 0
                                       //  Referenced by: '<S432>/Constant2'

  real_T Integrator_gainval_je;        // Computed Parameter: Integrator_gainval_je
                                       //  Referenced by: '<S437>/Integrator'

  real_T Integrator_IC_f;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S437>/Integrator'

  real_T Gain2_Gain_io;                // Expression: 2*pi
                                       //  Referenced by: '<S432>/Gain2'

  real_T Constant1_Value_c;            // Expression: 1
                                       //  Referenced by: '<S432>/Constant1'

  real_T Gain1_Gain_k;                 // Expression: 2*pi
                                       //  Referenced by: '<S432>/Gain1'

  real_T Constant_Value_ba;            // Expression: 1
                                       //  Referenced by: '<S438>/Constant'

  real_T TSamp_WtEt_cd;                // Computed Parameter: TSamp_WtEt_cd
                                       //  Referenced by: '<S438>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_k[2];// Expression: [1 -1]
                                            //  Referenced by: '<S438>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_m3;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S438>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_fx;// Expression: 0
                                       //  Referenced by: '<S433>/Unit Delay'

  real_T Gain2_Gain_jg;                // Expression: 2*pi
                                       //  Referenced by: '<S399>/Gain2'

  real_T Constant_Value_jt;            // Expression: tau
                                       //  Referenced by: '<S442>/Constant'

  real_T Constant4_Value_i;            // Expression: 1
                                       //  Referenced by: '<S440>/Constant4'

  real_T Gain2_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S440>/Gain2'

  real_T Integrator_gainval_k;         // Computed Parameter: Integrator_gainval_k
                                       //  Referenced by: '<S444>/Integrator'

  real_T Integrator_IC_j;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S444>/Integrator'

  real_T Constant_Value_md;            // Expression: 0
                                       //  Referenced by: '<S440>/Constant'

  real_T Constant_Value_fh;            // Expression: 1
                                       //  Referenced by: '<S445>/Constant'

  real_T Constant5_Value_l;            // Expression: 0
                                       //  Referenced by: '<S440>/Constant5'

  real_T TSamp_WtEt_lp;                // Computed Parameter: TSamp_WtEt_lp
                                       //  Referenced by: '<S445>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_l[2];// Expression: [1 -1]
                                            //  Referenced by: '<S445>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_mb;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S445>/Filter Differentiator TF'

  real_T Constant4_Value_iu;           // Expression: 1
                                       //  Referenced by: '<S441>/Constant4'

  real_T Constant2_Value_c0;           // Expression: 0
                                       //  Referenced by: '<S441>/Constant2'

  real_T Integrator_gainval_bnj;       // Computed Parameter: Integrator_gainval_bnj
                                       //  Referenced by: '<S446>/Integrator'

  real_T Integrator_IC_en;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S446>/Integrator'

  real_T Gain2_Gain_d2;                // Expression: 2*pi
                                       //  Referenced by: '<S441>/Gain2'

  real_T Constant1_Value_of;           // Expression: 1
                                       //  Referenced by: '<S441>/Constant1'

  real_T Gain1_Gain_g;                 // Expression: 2*pi
                                       //  Referenced by: '<S441>/Gain1'

  real_T Constant_Value_gr;            // Expression: 1
                                       //  Referenced by: '<S447>/Constant'

  real_T TSamp_WtEt_d;                 // Computed Parameter: TSamp_WtEt_d
                                       //  Referenced by: '<S447>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_a[2];// Expression: [1 -1]
                                            //  Referenced by: '<S447>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ms;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S447>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_o; // Expression: 0
                                       //  Referenced by: '<S442>/Unit Delay'

  real_T Gain2_Gain_ap;                // Expression: 2*pi
                                       //  Referenced by: '<S400>/Gain2'

  real_T Constant_Value_ad;            // Expression: tau
                                       //  Referenced by: '<S451>/Constant'

  real_T Constant4_Value_kn;           // Expression: 1
                                       //  Referenced by: '<S449>/Constant4'

  real_T Gain2_Gain_g;                 // Expression: 2*pi
                                       //  Referenced by: '<S449>/Gain2'

  real_T Integrator_gainval_m;         // Computed Parameter: Integrator_gainval_m
                                       //  Referenced by: '<S453>/Integrator'

  real_T Integrator_IC_m;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S453>/Integrator'

  real_T Constant_Value_hf;            // Expression: 0
                                       //  Referenced by: '<S449>/Constant'

  real_T Constant_Value_ej;            // Expression: 1
                                       //  Referenced by: '<S454>/Constant'

  real_T Constant5_Value_m;            // Expression: 0
                                       //  Referenced by: '<S449>/Constant5'

  real_T TSamp_WtEt_b;                 // Computed Parameter: TSamp_WtEt_b
                                       //  Referenced by: '<S454>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_eq[2];// Expression: [1 -1]
                                            //  Referenced by: '<S454>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_c;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S454>/Filter Differentiator TF'

  real_T Constant4_Value_g;            // Expression: 1
                                       //  Referenced by: '<S450>/Constant4'

  real_T Constant2_Value_a;            // Expression: 0
                                       //  Referenced by: '<S450>/Constant2'

  real_T Integrator_gainval_o;         // Computed Parameter: Integrator_gainval_o
                                       //  Referenced by: '<S455>/Integrator'

  real_T Integrator_IC_mp;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S455>/Integrator'

  real_T Gain2_Gain_fc;                // Expression: 2*pi
                                       //  Referenced by: '<S450>/Gain2'

  real_T Constant1_Value_e;            // Expression: 1
                                       //  Referenced by: '<S450>/Constant1'

  real_T Gain1_Gain_i;                 // Expression: 2*pi
                                       //  Referenced by: '<S450>/Gain1'

  real_T Constant_Value_l4;            // Expression: 1
                                       //  Referenced by: '<S456>/Constant'

  real_T TSamp_WtEt_he;                // Computed Parameter: TSamp_WtEt_he
                                       //  Referenced by: '<S456>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_o[2];// Expression: [1 -1]
                                            //  Referenced by: '<S456>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_nn;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S456>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_cu;// Expression: 0
                                       //  Referenced by: '<S451>/Unit Delay'

  real_T Gain2_Gain_n;                 // Expression: 2*pi
                                       //  Referenced by: '<S401>/Gain2'

  real_T Constant_Value_oif;           // Expression: tau
                                       //  Referenced by: '<S460>/Constant'

  real_T Constant4_Value_cu;           // Expression: 1
                                       //  Referenced by: '<S458>/Constant4'

  real_T Gain2_Gain_o0;                // Expression: 2*pi
                                       //  Referenced by: '<S458>/Gain2'

  real_T Integrator_gainval_i;         // Computed Parameter: Integrator_gainval_i
                                       //  Referenced by: '<S462>/Integrator'

  real_T Integrator_IC_lt;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S462>/Integrator'

  real_T Constant_Value_po;            // Expression: 0
                                       //  Referenced by: '<S458>/Constant'

  real_T Constant_Value_lu;            // Expression: 1
                                       //  Referenced by: '<S463>/Constant'

  real_T Constant5_Value_f;            // Expression: 0
                                       //  Referenced by: '<S458>/Constant5'

  real_T TSamp_WtEt_e;                 // Computed Parameter: TSamp_WtEt_e
                                       //  Referenced by: '<S463>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_ka[2];// Expression: [1 -1]
                                            //  Referenced by: '<S463>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_l;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S463>/Filter Differentiator TF'

  real_T Constant4_Value_a;            // Expression: 1
                                       //  Referenced by: '<S459>/Constant4'

  real_T Constant2_Value_k;            // Expression: 0
                                       //  Referenced by: '<S459>/Constant2'

  real_T Integrator_gainval_ij;        // Computed Parameter: Integrator_gainval_ij
                                       //  Referenced by: '<S464>/Integrator'

  real_T Integrator_IC_do;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S464>/Integrator'

  real_T Gain2_Gain_od;                // Expression: 2*pi
                                       //  Referenced by: '<S459>/Gain2'

  real_T Constant1_Value_hy;           // Expression: 1
                                       //  Referenced by: '<S459>/Constant1'

  real_T Gain1_Gain_f;                 // Expression: 2*pi
                                       //  Referenced by: '<S459>/Gain1'

  real_T Constant_Value_eu;            // Expression: 1
                                       //  Referenced by: '<S465>/Constant'

  real_T TSamp_WtEt_hw;                // Computed Parameter: TSamp_WtEt_hw
                                       //  Referenced by: '<S465>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_f[2];// Expression: [1 -1]
                                            //  Referenced by: '<S465>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_i;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S465>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_kx;// Expression: 0
                                       //  Referenced by: '<S460>/Unit Delay'

  real_T Gain2_Gain_el;                // Expression: 2*pi
                                       //  Referenced by: '<S402>/Gain2'

  real_T Constant_Value_lw;            // Expression: tau
                                       //  Referenced by: '<S469>/Constant'

  real_T Constant4_Value_bc;           // Expression: 1
                                       //  Referenced by: '<S467>/Constant4'

  real_T Gain2_Gain_p;                 // Expression: 2*pi
                                       //  Referenced by: '<S467>/Gain2'

  real_T Integrator_gainval_g;         // Computed Parameter: Integrator_gainval_g
                                       //  Referenced by: '<S471>/Integrator'

  real_T Integrator_IC_j4;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S471>/Integrator'

  real_T Constant_Value_ee;            // Expression: 0
                                       //  Referenced by: '<S467>/Constant'

  real_T Constant_Value_cie;           // Expression: 1
                                       //  Referenced by: '<S472>/Constant'

  real_T Constant5_Value_e;            // Expression: 0
                                       //  Referenced by: '<S467>/Constant5'

  real_T TSamp_WtEt_f;                 // Computed Parameter: TSamp_WtEt_f
                                       //  Referenced by: '<S472>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_i[2];// Expression: [1 -1]
                                            //  Referenced by: '<S472>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_o;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S472>/Filter Differentiator TF'

  real_T Constant4_Value_bb;           // Expression: 1
                                       //  Referenced by: '<S468>/Constant4'

  real_T Constant2_Value_my;           // Expression: 0
                                       //  Referenced by: '<S468>/Constant2'

  real_T Integrator_gainval_bm;        // Computed Parameter: Integrator_gainval_bm
                                       //  Referenced by: '<S473>/Integrator'

  real_T Integrator_IC_p;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S473>/Integrator'

  real_T Gain2_Gain_k;                 // Expression: 2*pi
                                       //  Referenced by: '<S468>/Gain2'

  real_T Constant1_Value_kh;           // Expression: 1
                                       //  Referenced by: '<S468>/Constant1'

  real_T Gain1_Gain_l;                 // Expression: 2*pi
                                       //  Referenced by: '<S468>/Gain1'

  real_T Constant_Value_ld;            // Expression: 1
                                       //  Referenced by: '<S474>/Constant'

  real_T TSamp_WtEt_dj;                // Computed Parameter: TSamp_WtEt_dj
                                       //  Referenced by: '<S474>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_n[2];// Expression: [1 -1]
                                            //  Referenced by: '<S474>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_dx;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S474>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_la;// Expression: 0
                                       //  Referenced by: '<S469>/Unit Delay'

  real_T Gain3_Gain_p;                 // Expression: 0
                                       //  Referenced by: '<S43>/Gain3'

  real_T TSamp_WtEt_g;                 // Computed Parameter: TSamp_WtEt_g
                                       //  Referenced by: '<S333>/TSamp'

  real_T Gain2_Gain_df;                // Expression: 2*pi
                                       //  Referenced by: '<S334>/Gain2'

  real_T Constant_Value_lb;            // Expression: tau
                                       //  Referenced by: '<S340>/Constant'

  real_T Constant4_Value_p;            // Expression: 1
                                       //  Referenced by: '<S338>/Constant4'

  real_T Gain2_Gain_bs;                // Expression: 2*pi
                                       //  Referenced by: '<S338>/Gain2'

  real_T Integrator_gainval_p;         // Computed Parameter: Integrator_gainval_p
                                       //  Referenced by: '<S342>/Integrator'

  real_T Integrator_IC_cq;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S342>/Integrator'

  real_T Constant_Value_og;            // Expression: 0
                                       //  Referenced by: '<S338>/Constant'

  real_T Constant_Value_nh;            // Expression: 1
                                       //  Referenced by: '<S343>/Constant'

  real_T Constant5_Value_na;           // Expression: 0
                                       //  Referenced by: '<S338>/Constant5'

  real_T TSamp_WtEt_p;                 // Computed Parameter: TSamp_WtEt_p
                                       //  Referenced by: '<S343>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_eo[2];// Expression: [1 -1]
                                            //  Referenced by: '<S343>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_lu;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S343>/Filter Differentiator TF'

  real_T Constant4_Value_f;            // Expression: 1
                                       //  Referenced by: '<S339>/Constant4'

  real_T Constant2_Value_il;           // Expression: 0
                                       //  Referenced by: '<S339>/Constant2'

  real_T Integrator_gainval_e0;        // Computed Parameter: Integrator_gainval_e0
                                       //  Referenced by: '<S344>/Integrator'

  real_T Integrator_IC_ct;             // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S344>/Integrator'

  real_T Gain2_Gain_ig;                // Expression: 2*pi
                                       //  Referenced by: '<S339>/Gain2'

  real_T Constant1_Value_gr;           // Expression: 1
                                       //  Referenced by: '<S339>/Constant1'

  real_T Gain1_Gain_bs;                // Expression: 2*pi
                                       //  Referenced by: '<S339>/Gain1'

  real_T Constant_Value_ep;            // Expression: 1
                                       //  Referenced by: '<S345>/Constant'

  real_T TSamp_WtEt_dn;                // Computed Parameter: TSamp_WtEt_dn
                                       //  Referenced by: '<S345>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_ju[2];// Expression: [1 -1]
                                            //  Referenced by: '<S345>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_b;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S345>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_gs;// Expression: 0
                                       //  Referenced by: '<S340>/Unit Delay'

  real_T Gain2_Gain_bq;                // Expression: 2*pi
                                       //  Referenced by: '<S335>/Gain2'

  real_T Constant_Value_ar;            // Expression: tau
                                       //  Referenced by: '<S349>/Constant'

  real_T Constant4_Value_ol;           // Expression: 1
                                       //  Referenced by: '<S347>/Constant4'

  real_T Gain2_Gain_km;                // Expression: 2*pi
                                       //  Referenced by: '<S347>/Gain2'

  real_T Integrator_gainval_f;         // Computed Parameter: Integrator_gainval_f
                                       //  Referenced by: '<S351>/Integrator'

  real_T Integrator_IC_o;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S351>/Integrator'

  real_T Constant_Value_bh;            // Expression: 0
                                       //  Referenced by: '<S347>/Constant'

  real_T Constant_Value_c1;            // Expression: 1
                                       //  Referenced by: '<S352>/Constant'

  real_T Constant5_Value_d;            // Expression: 0
                                       //  Referenced by: '<S347>/Constant5'

  real_T TSamp_WtEt_nx;                // Computed Parameter: TSamp_WtEt_nx
                                       //  Referenced by: '<S352>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_iv[2];// Expression: [1 -1]
                                            //  Referenced by: '<S352>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_ir;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S352>/Filter Differentiator TF'

  real_T Constant4_Value_nr;           // Expression: 1
                                       //  Referenced by: '<S348>/Constant4'

  real_T Constant2_Value_b;            // Expression: 0
                                       //  Referenced by: '<S348>/Constant2'

  real_T Integrator_gainval_f4;        // Computed Parameter: Integrator_gainval_f4
                                       //  Referenced by: '<S353>/Integrator'

  real_T Integrator_IC_b;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S353>/Integrator'

  real_T Gain2_Gain_dt;                // Expression: 2*pi
                                       //  Referenced by: '<S348>/Gain2'

  real_T Constant1_Value_ma;           // Expression: 1
                                       //  Referenced by: '<S348>/Constant1'

  real_T Gain1_Gain_or;                // Expression: 2*pi
                                       //  Referenced by: '<S348>/Gain1'

  real_T Constant_Value_lc;            // Expression: 1
                                       //  Referenced by: '<S354>/Constant'

  real_T TSamp_WtEt_bh;                // Computed Parameter: TSamp_WtEt_bh
                                       //  Referenced by: '<S354>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_lv[2];// Expression: [1 -1]
                                            //  Referenced by: '<S354>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_al;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S354>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_p; // Expression: 0
                                       //  Referenced by: '<S349>/Unit Delay'

  real_T Gain2_Gain_fv;                // Expression: 2*pi
                                       //  Referenced by: '<S336>/Gain2'

  real_T Constant_Value_g4;            // Expression: tau
                                       //  Referenced by: '<S358>/Constant'

  real_T Constant4_Value_g3;           // Expression: 1
                                       //  Referenced by: '<S356>/Constant4'

  real_T Gain2_Gain_c;                 // Expression: 2*pi
                                       //  Referenced by: '<S356>/Gain2'

  real_T Integrator_gainval_h;         // Computed Parameter: Integrator_gainval_h
                                       //  Referenced by: '<S360>/Integrator'

  real_T Integrator_IC_i;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S360>/Integrator'

  real_T Constant_Value_lh;            // Expression: 0
                                       //  Referenced by: '<S356>/Constant'

  real_T Constant_Value_md1;           // Expression: 1
                                       //  Referenced by: '<S361>/Constant'

  real_T Constant5_Value_j;            // Expression: 0
                                       //  Referenced by: '<S356>/Constant5'

  real_T TSamp_WtEt_cp;                // Computed Parameter: TSamp_WtEt_cp
                                       //  Referenced by: '<S361>/TSamp'

  real_T FilterDifferentiatorTF_NumCo_mf[2];// Expression: [1 -1]
                                            //  Referenced by: '<S361>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initia_p;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S361>/Filter Differentiator TF'

  real_T Constant4_Value_i5;           // Expression: 1
                                       //  Referenced by: '<S357>/Constant4'

  real_T Constant2_Value_e;            // Expression: 0
                                       //  Referenced by: '<S357>/Constant2'

  real_T Integrator_gainval_mv;        // Computed Parameter: Integrator_gainval_mv
                                       //  Referenced by: '<S362>/Integrator'

  real_T Integrator_IC_k;              // Expression: InitialConditionForIntegrator
                                       //  Referenced by: '<S362>/Integrator'

  real_T Gain2_Gain_dy;                // Expression: 2*pi
                                       //  Referenced by: '<S357>/Gain2'

  real_T Constant1_Value_dd;           // Expression: 1
                                       //  Referenced by: '<S357>/Constant1'

  real_T Gain1_Gain_lt;                // Expression: 2*pi
                                       //  Referenced by: '<S357>/Gain1'

  real_T Constant_Value_ob;            // Expression: 1
                                       //  Referenced by: '<S363>/Constant'

  real_T TSamp_WtEt_bw;                // Computed Parameter: TSamp_WtEt_bw
                                       //  Referenced by: '<S363>/TSamp'

  real_T FilterDifferentiatorTF_NumCoe_p[2];// Expression: [1 -1]
                                            //  Referenced by: '<S363>/Filter Differentiator TF'

  real_T FilterDifferentiatorTF_Initi_im;// Expression: InitialConditionForFilter
                                         //  Referenced by: '<S363>/Filter Differentiator TF'

  real_T UnitDelay_InitialCondition_g3;// Expression: 0
                                       //  Referenced by: '<S358>/Unit Delay'

  real_T Switch_Threshold;             // Expression: 0
                                       //  Referenced by: '<S43>/Switch'

  real_T Switch1_Threshold_h;          // Expression: 0
                                       //  Referenced by: '<S43>/Switch1'

  real_T Switch2_Threshold_i;          // Expression: 0
                                       //  Referenced by: '<S43>/Switch2'

  real_T Constant_Value_lbr;           // Expression: 2*pi*0.32
                                       //  Referenced by: '<S46>/Constant'

  real_T Constant_Value_ll;            // Expression: tau
                                       //  Referenced by: '<S81>/Constant'

  real_T DiscreteTimeIntegrator_gainva_b;// Computed Parameter: DiscreteTimeIntegrator_gainva_b
                                         //  Referenced by: '<S69>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_a;  // Expression: 0
                                       //  Referenced by: '<S69>/Discrete-Time Integrator'

  real_T UnitDelay_InitialCondition_oe;// Expression: 0
                                       //  Referenced by: '<S81>/Unit Delay'

  real_T Constant_Value_bq;            // Expression: tau
                                       //  Referenced by: '<S79>/Constant'

  real_T UnitDelay_InitialCondition_ay;// Expression: 0
                                       //  Referenced by: '<S79>/Unit Delay'

  real_T Constant_Value_a1;            // Expression: tau
                                       //  Referenced by: '<S85>/Constant'

  real_T DiscreteTimeIntegrator_gainva_k;// Computed Parameter: DiscreteTimeIntegrator_gainva_k
                                         //  Referenced by: '<S70>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_f;  // Expression: 0
                                       //  Referenced by: '<S70>/Discrete-Time Integrator'

  real_T UnitDelay_InitialCondition_d; // Expression: 0
                                       //  Referenced by: '<S85>/Unit Delay'

  real_T Constant_Value_kk;            // Expression: tau
                                       //  Referenced by: '<S83>/Constant'

  real_T UnitDelay_InitialCondition_ck;// Expression: 0
                                       //  Referenced by: '<S83>/Unit Delay'

  real_T Memory2_InitialCondition_l;   // Expression: 1
                                       //  Referenced by: '<S68>/Memory2'

  real_T Memory3_InitialCondition_c;   // Expression: 0
                                       //  Referenced by: '<S68>/Memory3'

  real_T Gain2_Gain_m;                 // Expression: -1
                                       //  Referenced by: '<S46>/Gain2'

  real_T Constant_Value_b5;            // Expression: 3
                                       //  Referenced by: '<S19>/Constant'

  real_T Constant2_Value_ea;           // Expression: 50
                                       //  Referenced by: '<S18>/Constant2'

  real_T Gain2_Gain_dyx;               // Expression: 2*pi
                                       //  Referenced by: '<S18>/Gain2'

  real_T Constant_Value_m2;            // Expression: tau
                                       //  Referenced by: '<S386>/Constant'

  real_T ref_Value[4];                 // Expression: [0 0 0 0]
                                       //  Referenced by: '<S18>/ref'

  real_T UnitDelay_InitialCondition_d2;// Expression: 0
                                       //  Referenced by: '<S386>/Unit Delay'

  real_T Gain3_Gain_k;                 // Expression: 2*pi
                                       //  Referenced by: '<S18>/Gain3'

  real_T Constant_Value_pf;            // Expression: tau
                                       //  Referenced by: '<S382>/Constant'

  real_T UnitDelay_InitialCondition_dh;// Expression: 0
                                       //  Referenced by: '<S382>/Unit Delay'

  real_T Gain4_Gain_b;                 // Expression: 2*pi
                                       //  Referenced by: '<S18>/Gain4'

  real_T Constant_Value_d4;            // Expression: tau
                                       //  Referenced by: '<S384>/Constant'

  real_T UnitDelay_InitialCondition_az;// Expression: 0
                                       //  Referenced by: '<S384>/Unit Delay'

  real_T Gain5_Gain_h;                 // Expression: 2*pi
                                       //  Referenced by: '<S18>/Gain5'

  real_T Constant_Value_ez;            // Expression: tau
                                       //  Referenced by: '<S388>/Constant'

  real_T UnitDelay_InitialCondition_du;// Expression: 0
                                       //  Referenced by: '<S388>/Unit Delay'

  real_T shift_Gain;                   // Expression: 2
                                       //  Referenced by: '<S25>/shift'

  real_T Constant_Value_jh;            // Expression: 0
                                       //  Referenced by: '<S25>/Constant'

  real_T Constant1_Value_gx;           // Expression: 0
                                       //  Referenced by: '<S25>/Constant1'

  real_T Constant10_Value;             // Expression: 0
                                       //  Referenced by: '<S25>/Constant10'

  real_T Constant2_Value_ks;           // Expression: 0
                                       //  Referenced by: '<S25>/Constant2'

  real_T Constant6_Value_o;            // Expression: 0
                                       //  Referenced by: '<S25>/Constant6'

  real_T Constant7_Value;              // Expression: 0
                                       //  Referenced by: '<S25>/Constant7'

  real_T Constant8_Value;              // Expression: 0
                                       //  Referenced by: '<S25>/Constant8'

  real_T Constant9_Value;              // Expression: 0
                                       //  Referenced by: '<S25>/Constant9'

  real_T Gain_Gain_m;                  // Expression: 1
                                       //  Referenced by: '<S25>/Gain'

  real_T Gain1_Gain_m;                 // Expression: -1
                                       //  Referenced by: '<S25>/Gain1'

  real_T Gain11_Gain_c;                // Expression: -1
                                       //  Referenced by: '<S25>/Gain11'

  real_T Gain12_Gain;                  // Expression: 1
                                       //  Referenced by: '<S25>/Gain12'

  real_T Gain13_Gain;                  // Expression: -1
                                       //  Referenced by: '<S25>/Gain13'

  real_T Gain8_Gain_g;                 // Expression: 1
                                       //  Referenced by: '<S25>/Gain8'

  real_T Gain14_Gain;                  // Expression: 1
                                       //  Referenced by: '<S25>/Gain14'

  real_T Gain15_Gain;                  // Expression: -1
                                       //  Referenced by: '<S25>/Gain15'

  real_T Gain16_Gain;                  // Expression: 1
                                       //  Referenced by: '<S25>/Gain16'

  real_T Gain17_Gain;                  // Expression: -1
                                       //  Referenced by: '<S25>/Gain17'

  real_T Gain18_Gain;                  // Expression: 1
                                       //  Referenced by: '<S25>/Gain18'

  real_T Gain19_Gain;                  // Expression: 1
                                       //  Referenced by: '<S25>/Gain19'

  real_T Gain2_Gain_l1;                // Expression: 1
                                       //  Referenced by: '<S25>/Gain2'

  real_T Gain3_Gain_k2;                // Expression: -1
                                       //  Referenced by: '<S25>/Gain3'

  real_T Gain4_Gain_i;                 // Expression: 1
                                       //  Referenced by: '<S25>/Gain4'

  real_T Gain5_Gain_n;                 // Expression: -1
                                       //  Referenced by: '<S25>/Gain5'

  real_T Gain6_Gain_c;                 // Expression: 1
                                       //  Referenced by: '<S25>/Gain6'

  real_T Gain7_Gain_f;                 // Expression: -1
                                       //  Referenced by: '<S25>/Gain7'

  real_T Gain9_Gain_l;                 // Expression: 1
                                       //  Referenced by: '<S25>/Gain9'

  real_T sign_convention_Gain;         // Expression: -1
                                       //  Referenced by: '<S25>/sign_convention'

  real_T sign_convention1_Gain;        // Expression: -1
                                       //  Referenced by: '<S25>/sign_convention1'

  real_T sign_convention2_Gain;        // Expression: -1
                                       //  Referenced by: '<S25>/sign_convention2'

  real_T sign_convention3_Gain;        // Expression: -1
                                       //  Referenced by: '<S25>/sign_convention3'

  real_T DiscreteTimeIntegrator_gainva_d;// Computed Parameter: DiscreteTimeIntegrator_gainva_d
                                         //  Referenced by: '<S11>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC_fq; // Expression: 0
                                       //  Referenced by: '<S11>/Discrete-Time Integrator'

  real_T Constant_Value_f2;            // Expression: 0
                                       //  Referenced by: '<S2>/Constant'

  real_T Constant1_Value_n;            // Expression: 0
                                       //  Referenced by: '<S2>/Constant1'

  real_T Constant2_Value_ap;           // Expression: 0
                                       //  Referenced by: '<S2>/Constant2'

  real_T Constant3_Value_j;            // Expression: 0
                                       //  Referenced by: '<S2>/Constant3'

  real_T Constant4_Value_if;           // Expression: 0
                                       //  Referenced by: '<S2>/Constant4'

  real_T Constant5_Value_h1;           // Expression: 0
                                       //  Referenced by: '<S2>/Constant5'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16 Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                               //  Referenced by: '<S479>/Out1'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16 Constant_Value_gt;// Computed Parameter: Constant_Value_gt
                                                                      //  Referenced by: '<S477>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_UInt16 Constant_Value_k2;// Computed Parameter: Constant_Value_k2
                                                                      //  Referenced by: '<S499>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                             //  Referenced by: '<S480>/Out1'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool Constant_Value_k4;// Computed Parameter: Constant_Value_k4
                                                                     //  Referenced by: '<S478>/Constant'

  SL_Bus_ROPOD_4Wheel_TdistZMPC_cntr_std_msgs_Bool Constant_Value_pl;// Computed Parameter: Constant_Value_pl
                                                                     //  Referenced by: '<S500>/Constant'

  uint32_T Delay_DelayLength;          // Computed Parameter: Delay_DelayLength
                                       //  Referenced by: '<S47>/Delay'

  uint32_T Delay1_DelayLength;         // Computed Parameter: Delay1_DelayLength
                                       //  Referenced by: '<S47>/Delay1'

  uint32_T Delay2_DelayLength;         // Computed Parameter: Delay2_DelayLength
                                       //  Referenced by: '<S47>/Delay2'

  uint32_T Delay3_DelayLength;         // Computed Parameter: Delay3_DelayLength
                                       //  Referenced by: '<S47>/Delay3'

  uint32_T Delay4_DelayLength;         // Computed Parameter: Delay4_DelayLength
                                       //  Referenced by: '<S47>/Delay4'

  uint32_T Delay6_DelayLength;         // Computed Parameter: Delay6_DelayLength
                                       //  Referenced by: '<S47>/Delay6'

  uint32_T Delay_DelayLength_o;        // Computed Parameter: Delay_DelayLength_o
                                       //  Referenced by: '<S48>/Delay'

  uint32_T Delay1_DelayLength_k;       // Computed Parameter: Delay1_DelayLength_k
                                       //  Referenced by: '<S48>/Delay1'

  uint32_T Delay2_DelayLength_e;       // Computed Parameter: Delay2_DelayLength_e
                                       //  Referenced by: '<S48>/Delay2'

  uint32_T Delay3_DelayLength_c;       // Computed Parameter: Delay3_DelayLength_c
                                       //  Referenced by: '<S48>/Delay3'

  uint32_T Delay4_DelayLength_e;       // Computed Parameter: Delay4_DelayLength_e
                                       //  Referenced by: '<S48>/Delay4'

  uint32_T Delay6_DelayLength_m;       // Computed Parameter: Delay6_DelayLength_m
                                       //  Referenced by: '<S48>/Delay6'

  uint32_T EnabledDelay_DelayLength;   // Computed Parameter: EnabledDelay_DelayLength
                                       //  Referenced by: '<S367>/Enabled Delay'

  uint16_T Gain10_Gain_o;              // Computed Parameter: Gain10_Gain_o
                                       //  Referenced by: '<S25>/Gain10'

  uint8_T Switch2_Threshold_n;         // Computed Parameter: Switch2_Threshold_n
                                       //  Referenced by: '<S367>/Switch2'

  uint8_T Switch1_Threshold_j;         // Computed Parameter: Switch1_Threshold_j
                                       //  Referenced by: '<S367>/Switch1'

  uint8_T Switch_Threshold_l;          // Computed Parameter: Switch_Threshold_l
                                       //  Referenced by: '<S367>/Switch'

  uint8_T Gain6_Gain_k;                // Computed Parameter: Gain6_Gain_k
                                       //  Referenced by: '<S367>/Gain6'

};

// Real-time Model Data Structure
struct tag_RTM_ROPOD_4Wheel_TdistZMPC_cntr_T {
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
    SimStruct childSFunctions[6];
    SimStruct *childSFunctionPtrs[6];
    struct _ssBlkInfo2 blkInfo2[6];
    struct _ssSFcnModelMethods2 methods2[6];
    struct _ssSFcnModelMethods3 methods3[6];
    struct _ssSFcnModelMethods4 methods4[6];
    struct _ssStatesInfo2 statesInfo2[6];
    ssPeriodicStatesInfo periodicStatesInfo[6];
    struct _ssPortInfo2 inputOutputPortInfo2[6];
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
      struct _ssPortOutputs outputPortInfo[32];
      struct _ssOutPortUnit outputPortUnits[32];
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
    } Sfcn5;
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

  extern P_ROPOD_4Wheel_TdistZMPC_cntr_T ROPOD_4Wheel_TdistZMPC_cntr_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_ROPOD_4Wheel_TdistZMPC_cntr_T ROPOD_4Wheel_TdistZMPC_cntr_B;

// Block states (auto storage)
extern DW_ROPOD_4Wheel_TdistZMPC_cntr_T ROPOD_4Wheel_TdistZMPC_cntr_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void ROPOD_4Wheel_TdistZMPC_cntr_initialize(void);
  extern void ROPOD_4Wheel_TdistZMPC_cntr_step(void);
  extern void ROPOD_4Wheel_TdistZMPC_cntr_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_ROPOD_4Wheel_TdistZMPC_cntr_T *const
    ROPOD_4Wheel_TdistZMPC_cntr_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S12>/Display1' : Unused code path elimination
//  Block '<S12>/Gain1' : Unused code path elimination
//  Block '<S46>/To Workspace1' : Unused code path elimination
//  Block '<S46>/To Workspace2' : Unused code path elimination
//  Block '<S46>/To Workspace3' : Unused code path elimination
//  Block '<S46>/To Workspace4' : Unused code path elimination
//  Block '<S46>/To Workspace5' : Unused code path elimination
//  Block '<S46>/To Workspace6' : Unused code path elimination
//  Block '<S46>/To Workspace7' : Unused code path elimination
//  Block '<S46>/To Workspace8' : Unused code path elimination
//  Block '<S46>/To Workspace9' : Unused code path elimination
//  Block '<S41>/To Workspace' : Unused code path elimination
//  Block '<S41>/To Workspace1' : Unused code path elimination
//  Block '<S41>/To Workspace2' : Unused code path elimination
//  Block '<S41>/To Workspace3' : Unused code path elimination
//  Block '<S41>/To Workspace4' : Unused code path elimination
//  Block '<S41>/To Workspace5' : Unused code path elimination
//  Block '<S41>/To Workspace6' : Unused code path elimination
//  Block '<S41>/To Workspace8' : Unused code path elimination
//  Block '<S47>/To Workspace10' : Unused code path elimination
//  Block '<S47>/To Workspace9' : Unused code path elimination
//  Block '<S48>/To Workspace10' : Unused code path elimination
//  Block '<S48>/To Workspace9' : Unused code path elimination
//  Block '<S333>/Data Type Duplicate' : Unused code path elimination
//  Block '<S16>/To Workspace1' : Unused code path elimination
//  Block '<S368>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S374>/Data Type Duplicate' : Unused code path elimination
//  Block '<S374>/Data Type Propagation' : Unused code path elimination
//  Block '<S369>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S375>/Data Type Duplicate' : Unused code path elimination
//  Block '<S375>/Data Type Propagation' : Unused code path elimination
//  Block '<S370>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S376>/Data Type Duplicate' : Unused code path elimination
//  Block '<S376>/Data Type Propagation' : Unused code path elimination
//  Block '<S371>/Data Type Duplicate' : Unused code path elimination
//  Block '<S371>/Data Type Propagation' : Unused code path elimination
//  Block '<S372>/Data Type Duplicate' : Unused code path elimination
//  Block '<S372>/Data Type Propagation' : Unused code path elimination
//  Block '<S373>/Data Type Duplicate' : Unused code path elimination
//  Block '<S373>/Data Type Propagation' : Unused code path elimination
//  Block '<S25>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S25>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S46>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S46>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S46>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S46>/Data Type Conversion4' : Eliminate redundant data type conversion
//  Block '<S46>/Rate Transition1' : Eliminated since input and output rates are identical
//  Block '<S46>/Rate Transition2' : Eliminated since input and output rates are identical
//  Block '<S46>/Rate Transition4' : Eliminated since input and output rates are identical
//  Block '<S46>/Rate Transition5' : Eliminated since input and output rates are identical
//  Block '<S343>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S352>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S361>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S409>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S418>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S427>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S436>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S445>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S454>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S463>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S472>/Passthrough for tuning' : Eliminate redundant data type conversion
//  Block '<S494>/Rate Transition' : Eliminated since input and output rates are identical


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
//  '<Root>' : 'ROPOD_4Wheel_TdistZMPC_cntr'
//  '<S1>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller'
//  '<S2>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/Odometry publisher'
//  '<S3>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform mobidik command'
//  '<S4>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform vel command'
//  '<S5>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/ROS  Controllers conf'
//  '<S6>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/ROS Ropod kinematic parameters2'
//  '<S7>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/ROS Smart wheels conf'
//  '<S8>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/ROS base conf'
//  '<S9>'   : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem'
//  '<S10>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/Allow Tinit seconds for initialization1'
//  '<S11>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/Odometry and Measurement model 4SW'
//  '<S12>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE'
//  '<S13>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/State machine'
//  '<S14>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/State machine1'
//  '<S15>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/Subsystem'
//  '<S16>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr'
//  '<S17>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint'
//  '<S18>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr'
//  '<S19>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel flip compensation'
//  '<S20>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr'
//  '<S21>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/Odometry and Measurement model 4SW/Jqwl_matrix'
//  '<S22>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/Odometry and Measurement model 4SW/pos_rot_matrix'
//  '<S23>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Initialization switch'
//  '<S24>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_sens'
//  '<S25>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/ROPOD_4Wheel_torque_cmd'
//  '<S26>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1'
//  '<S27>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2'
//  '<S28>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3'
//  '<S29>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4'
//  '<S30>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Subsystem'
//  '<S31>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/empywheel'
//  '<S32>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel'
//  '<S33>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel'
//  '<S34>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel'
//  '<S35>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel'
//  '<S36>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/State machine/Chart'
//  '<S37>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/State machine/Compare To Constant'
//  '<S38>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/State machine/Compare To Constant1'
//  '<S39>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/State machine1/Chart'
//  '<S40>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/State machine1/Compare To Constant'
//  '<S41>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller'
//  '<S42>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Inverse Kinematics 4SW'
//  '<S43>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller'
//  '<S44>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Torque distribution'
//  '<S45>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Angle controller'
//  '<S46>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system'
//  '<S47>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/ZMPC_x'
//  '<S48>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/ZMPC_y'
//  '<S49>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass1'
//  '<S50>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass2'
//  '<S51>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass3'
//  '<S52>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass4'
//  '<S53>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Force_per_sensor'
//  '<S54>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System'
//  '<S55>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System1'
//  '<S56>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1'
//  '<S57>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2'
//  '<S58>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3'
//  '<S59>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4'
//  '<S60>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal'
//  '<S61>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal1'
//  '<S62>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal2'
//  '<S63>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal3'
//  '<S64>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal4'
//  '<S65>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal5'
//  '<S66>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal6'
//  '<S67>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal7'
//  '<S68>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal8'
//  '<S69>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/differentiator1'
//  '<S70>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/differentiator2'
//  '<S71>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/speed deflection angle calculation X+'
//  '<S72>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/speed deflection angle calculation X-'
//  '<S73>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/speed deflection angle calculation Y+'
//  '<S74>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/speed deflection angle calculation Y-'
//  '<S75>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup'
//  '<S76>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup1'
//  '<S77>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup2'
//  '<S78>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup3'
//  '<S79>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass1/FOS'
//  '<S80>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass1/FOS/MATLAB Function'
//  '<S81>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass2/FOS'
//  '<S82>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass2/FOS/MATLAB Function'
//  '<S83>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass3/FOS'
//  '<S84>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S85>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass4/FOS'
//  '<S86>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Discrete Varying Lowpass4/FOS/MATLAB Function'
//  '<S87>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System/IO Delay'
//  '<S88>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System/Input Delay'
//  '<S89>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System/Output Delay'
//  '<S90>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System1/IO Delay'
//  '<S91>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System1/Input Delay'
//  '<S92>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/LTI System1/Output Delay'
//  '<S93>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass1'
//  '<S94>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass2'
//  '<S95>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass3'
//  '<S96>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass4'
//  '<S97>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass5'
//  '<S98>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass6'
//  '<S99>'  : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass7'
//  '<S100>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass8'
//  '<S101>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System'
//  '<S102>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System1'
//  '<S103>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System2'
//  '<S104>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System3'
//  '<S105>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System4'
//  '<S106>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System5'
//  '<S107>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System6'
//  '<S108>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System7'
//  '<S109>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass1/FOS'
//  '<S110>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass1/FOS/MATLAB Function'
//  '<S111>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass2/FOS'
//  '<S112>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass2/FOS/MATLAB Function'
//  '<S113>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass3/FOS'
//  '<S114>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S115>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass4/FOS'
//  '<S116>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass4/FOS/MATLAB Function'
//  '<S117>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass5/FOS'
//  '<S118>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass5/FOS/MATLAB Function'
//  '<S119>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass6/FOS'
//  '<S120>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass6/FOS/MATLAB Function'
//  '<S121>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass7/FOS'
//  '<S122>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass7/FOS/MATLAB Function'
//  '<S123>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass8/FOS'
//  '<S124>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/Discrete Varying Lowpass8/FOS/MATLAB Function'
//  '<S125>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System/IO Delay'
//  '<S126>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System/Input Delay'
//  '<S127>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System/Output Delay'
//  '<S128>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System1/IO Delay'
//  '<S129>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System1/Input Delay'
//  '<S130>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System1/Output Delay'
//  '<S131>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System2/IO Delay'
//  '<S132>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System2/Input Delay'
//  '<S133>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System2/Output Delay'
//  '<S134>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System3/IO Delay'
//  '<S135>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System3/Input Delay'
//  '<S136>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System3/Output Delay'
//  '<S137>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System4/IO Delay'
//  '<S138>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System4/Input Delay'
//  '<S139>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System4/Output Delay'
//  '<S140>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System5/IO Delay'
//  '<S141>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System5/Input Delay'
//  '<S142>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System5/Output Delay'
//  '<S143>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System6/IO Delay'
//  '<S144>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System6/Input Delay'
//  '<S145>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System6/Output Delay'
//  '<S146>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System7/IO Delay'
//  '<S147>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System7/Input Delay'
//  '<S148>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter1/LTI System7/Output Delay'
//  '<S149>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass1'
//  '<S150>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass2'
//  '<S151>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass3'
//  '<S152>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass4'
//  '<S153>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass5'
//  '<S154>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass6'
//  '<S155>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass7'
//  '<S156>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass8'
//  '<S157>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System'
//  '<S158>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System1'
//  '<S159>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System2'
//  '<S160>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System3'
//  '<S161>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System4'
//  '<S162>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System5'
//  '<S163>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System6'
//  '<S164>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System7'
//  '<S165>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass1/FOS'
//  '<S166>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass1/FOS/MATLAB Function'
//  '<S167>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass2/FOS'
//  '<S168>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass2/FOS/MATLAB Function'
//  '<S169>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass3/FOS'
//  '<S170>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S171>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass4/FOS'
//  '<S172>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass4/FOS/MATLAB Function'
//  '<S173>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass5/FOS'
//  '<S174>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass5/FOS/MATLAB Function'
//  '<S175>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass6/FOS'
//  '<S176>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass6/FOS/MATLAB Function'
//  '<S177>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass7/FOS'
//  '<S178>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass7/FOS/MATLAB Function'
//  '<S179>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass8/FOS'
//  '<S180>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/Discrete Varying Lowpass8/FOS/MATLAB Function'
//  '<S181>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System/IO Delay'
//  '<S182>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System/Input Delay'
//  '<S183>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System/Output Delay'
//  '<S184>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System1/IO Delay'
//  '<S185>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System1/Input Delay'
//  '<S186>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System1/Output Delay'
//  '<S187>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System2/IO Delay'
//  '<S188>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System2/Input Delay'
//  '<S189>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System2/Output Delay'
//  '<S190>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System3/IO Delay'
//  '<S191>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System3/Input Delay'
//  '<S192>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System3/Output Delay'
//  '<S193>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System4/IO Delay'
//  '<S194>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System4/Input Delay'
//  '<S195>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System4/Output Delay'
//  '<S196>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System5/IO Delay'
//  '<S197>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System5/Input Delay'
//  '<S198>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System5/Output Delay'
//  '<S199>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System6/IO Delay'
//  '<S200>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System6/Input Delay'
//  '<S201>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System6/Output Delay'
//  '<S202>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System7/IO Delay'
//  '<S203>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System7/Input Delay'
//  '<S204>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter2/LTI System7/Output Delay'
//  '<S205>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass1'
//  '<S206>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass2'
//  '<S207>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass3'
//  '<S208>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass4'
//  '<S209>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass5'
//  '<S210>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass6'
//  '<S211>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass7'
//  '<S212>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass8'
//  '<S213>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System'
//  '<S214>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System1'
//  '<S215>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System2'
//  '<S216>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System3'
//  '<S217>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System4'
//  '<S218>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System5'
//  '<S219>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System6'
//  '<S220>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System7'
//  '<S221>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass1/FOS'
//  '<S222>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass1/FOS/MATLAB Function'
//  '<S223>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass2/FOS'
//  '<S224>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass2/FOS/MATLAB Function'
//  '<S225>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass3/FOS'
//  '<S226>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S227>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass4/FOS'
//  '<S228>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass4/FOS/MATLAB Function'
//  '<S229>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass5/FOS'
//  '<S230>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass5/FOS/MATLAB Function'
//  '<S231>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass6/FOS'
//  '<S232>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass6/FOS/MATLAB Function'
//  '<S233>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass7/FOS'
//  '<S234>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass7/FOS/MATLAB Function'
//  '<S235>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass8/FOS'
//  '<S236>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/Discrete Varying Lowpass8/FOS/MATLAB Function'
//  '<S237>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System/IO Delay'
//  '<S238>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System/Input Delay'
//  '<S239>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System/Output Delay'
//  '<S240>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System1/IO Delay'
//  '<S241>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System1/Input Delay'
//  '<S242>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System1/Output Delay'
//  '<S243>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System2/IO Delay'
//  '<S244>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System2/Input Delay'
//  '<S245>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System2/Output Delay'
//  '<S246>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System3/IO Delay'
//  '<S247>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System3/Input Delay'
//  '<S248>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System3/Output Delay'
//  '<S249>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System4/IO Delay'
//  '<S250>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System4/Input Delay'
//  '<S251>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System4/Output Delay'
//  '<S252>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System5/IO Delay'
//  '<S253>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System5/Input Delay'
//  '<S254>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System5/Output Delay'
//  '<S255>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System6/IO Delay'
//  '<S256>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System6/Input Delay'
//  '<S257>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System6/Output Delay'
//  '<S258>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System7/IO Delay'
//  '<S259>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System7/Input Delay'
//  '<S260>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter3/LTI System7/Output Delay'
//  '<S261>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass1'
//  '<S262>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass2'
//  '<S263>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass3'
//  '<S264>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass4'
//  '<S265>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass5'
//  '<S266>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass6'
//  '<S267>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass7'
//  '<S268>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass8'
//  '<S269>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System'
//  '<S270>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System1'
//  '<S271>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System2'
//  '<S272>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System3'
//  '<S273>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System4'
//  '<S274>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System5'
//  '<S275>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System6'
//  '<S276>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System7'
//  '<S277>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass1/FOS'
//  '<S278>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass1/FOS/MATLAB Function'
//  '<S279>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass2/FOS'
//  '<S280>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass2/FOS/MATLAB Function'
//  '<S281>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass3/FOS'
//  '<S282>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S283>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass4/FOS'
//  '<S284>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass4/FOS/MATLAB Function'
//  '<S285>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass5/FOS'
//  '<S286>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass5/FOS/MATLAB Function'
//  '<S287>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass6/FOS'
//  '<S288>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass6/FOS/MATLAB Function'
//  '<S289>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass7/FOS'
//  '<S290>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass7/FOS/MATLAB Function'
//  '<S291>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass8/FOS'
//  '<S292>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/Discrete Varying Lowpass8/FOS/MATLAB Function'
//  '<S293>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System/IO Delay'
//  '<S294>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System/Input Delay'
//  '<S295>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System/Output Delay'
//  '<S296>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System1/IO Delay'
//  '<S297>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System1/Input Delay'
//  '<S298>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System1/Output Delay'
//  '<S299>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System2/IO Delay'
//  '<S300>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System2/Input Delay'
//  '<S301>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System2/Output Delay'
//  '<S302>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System3/IO Delay'
//  '<S303>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System3/Input Delay'
//  '<S304>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System3/Output Delay'
//  '<S305>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System4/IO Delay'
//  '<S306>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System4/Input Delay'
//  '<S307>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System4/Output Delay'
//  '<S308>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System5/IO Delay'
//  '<S309>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System5/Input Delay'
//  '<S310>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System5/Output Delay'
//  '<S311>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System6/IO Delay'
//  '<S312>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System6/Input Delay'
//  '<S313>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System6/Output Delay'
//  '<S314>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System7/IO Delay'
//  '<S315>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System7/Input Delay'
//  '<S316>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/Lo-Pass filter4/LTI System7/Output Delay'
//  '<S317>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal/Calibration1'
//  '<S318>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal1/Calibration1'
//  '<S319>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal2/Calibration1'
//  '<S320>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal3/Calibration1'
//  '<S321>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal4/Calibration1'
//  '<S322>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal5/Calibration1'
//  '<S323>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal6/Calibration1'
//  '<S324>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal7/Calibration1'
//  '<S325>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/cal8/Calibration1'
//  '<S326>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup/Compare To Constant'
//  '<S327>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup1/Compare To Constant'
//  '<S328>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup2/Compare To Constant'
//  '<S329>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/startup3/Compare To Constant'
//  '<S330>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/ZMPC_x/Zone MPC'
//  '<S331>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/ZMPC_y/Zone MPC'
//  '<S332>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Inverse Kinematics 4SW/Gl_matrix'
//  '<S333>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/Discrete Derivative'
//  '<S334>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1'
//  '<S335>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2'
//  '<S336>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3'
//  '<S337>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3'
//  '<S338>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)'
//  '<S339>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)'
//  '<S340>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS'
//  '<S341>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S342>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S343>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S344>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S345>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S346>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3'
//  '<S347>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)'
//  '<S348>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)'
//  '<S349>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS'
//  '<S350>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S351>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S352>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S353>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S354>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S355>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3'
//  '<S356>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)'
//  '<S357>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)'
//  '<S358>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS'
//  '<S359>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S360>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S361>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S362>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S363>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Platorm Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S364>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Torque distribution/Gl_matrices'
//  '<S365>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Torque distribution/platform_forces_2_tau_dist_optimal'
//  '<S366>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits'
//  '<S367>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits1'
//  '<S368>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Rate Limiter Dynamic'
//  '<S369>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Rate Limiter Dynamic1'
//  '<S370>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Rate Limiter Dynamic2'
//  '<S371>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Saturation Dynamic'
//  '<S372>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Saturation Dynamic1'
//  '<S373>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Saturation Dynamic2'
//  '<S374>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Rate Limiter Dynamic/Saturation Dynamic'
//  '<S375>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Rate Limiter Dynamic1/Saturation Dynamic'
//  '<S376>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits/Rate Limiter Dynamic2/Saturation Dynamic'
//  '<S377>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/velocity_setpoint/Acceleration and Velocity Limits1/Compare To Constant'
//  '<S378>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass1'
//  '<S379>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass2'
//  '<S380>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass3'
//  '<S381>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass4'
//  '<S382>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass1/FOS'
//  '<S383>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass1/FOS/MATLAB Function'
//  '<S384>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass2/FOS'
//  '<S385>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass2/FOS/MATLAB Function'
//  '<S386>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass3/FOS'
//  '<S387>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S388>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass4/FOS'
//  '<S389>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel angle vel cntr/Discrete Varying Lowpass4/FOS/MATLAB Function'
//  '<S390>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel flip compensation/MATLAB Function'
//  '<S391>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel flip compensation/MATLAB Function1'
//  '<S392>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel flip compensation/MATLAB Function2'
//  '<S393>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel flip compensation/MATLAB Function3'
//  '<S394>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller'
//  '<S395>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1'
//  '<S396>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2'
//  '<S397>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3'
//  '<S398>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4'
//  '<S399>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5'
//  '<S400>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6'
//  '<S401>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7'
//  '<S402>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8'
//  '<S403>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3'
//  '<S404>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)'
//  '<S405>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)'
//  '<S406>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS'
//  '<S407>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S408>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S409>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S410>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S411>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller1/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S412>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3'
//  '<S413>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)'
//  '<S414>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)'
//  '<S415>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS'
//  '<S416>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S417>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S418>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S419>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S420>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller2/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S421>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3'
//  '<S422>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)'
//  '<S423>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)'
//  '<S424>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS'
//  '<S425>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S426>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S427>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S428>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S429>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller3/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S430>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3'
//  '<S431>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)'
//  '<S432>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)'
//  '<S433>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS'
//  '<S434>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S435>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S436>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S437>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S438>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller4/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S439>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3'
//  '<S440>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)'
//  '<S441>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)'
//  '<S442>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS'
//  '<S443>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S444>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S445>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S446>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S447>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller5/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S448>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3'
//  '<S449>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)'
//  '<S450>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)'
//  '<S451>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS'
//  '<S452>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S453>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S454>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S455>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S456>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller6/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S457>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3'
//  '<S458>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)'
//  '<S459>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)'
//  '<S460>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS'
//  '<S461>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S462>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S463>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S464>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S465>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller7/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S466>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3'
//  '<S467>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)'
//  '<S468>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)'
//  '<S469>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS'
//  '<S470>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Discrete Varying Lowpass3/FOS/MATLAB Function'
//  '<S471>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3'
//  '<S472>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Integrator (Tustin)/PID Controller3/Filter Differentiator'
//  '<S473>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3'
//  '<S474>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/wheel vel cntr/Wheels Velocity controller/G_I_LL_LPF Controller8/Shapeit Lead-Lag (Tustin)/PID Controller3/Filter Differentiator'
//  '<S475>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Odometry publisher/Blank Message'
//  '<S476>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Odometry publisher/Publish'
//  '<S477>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform mobidik command/Subscribe1'
//  '<S478>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform mobidik command/Subscribe2'
//  '<S479>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform mobidik command/Subscribe1/Enabled Subsystem'
//  '<S480>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform mobidik command/Subscribe2/Enabled Subsystem'
//  '<S481>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform vel command/Subscribe1'
//  '<S482>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Platform vel command/Subscribe1/Enabled Subsystem'
//  '<S483>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish'
//  '<S484>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish1'
//  '<S485>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish2'
//  '<S486>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish3'
//  '<S487>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish4'
//  '<S488>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Publish5'
//  '<S489>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem'
//  '<S490>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem1'
//  '<S491>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem2'
//  '<S492>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem3'
//  '<S493>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem4'
//  '<S494>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem5'
//  '<S495>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem/Blank Message'
//  '<S496>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem1/Blank Message'
//  '<S497>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem2/Blank Message'
//  '<S498>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem3/Blank Message'
//  '<S499>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem4/Blank Message'
//  '<S500>' : 'ROPOD_4Wheel_TdistZMPC_cntr/Subsystem/Subsystem5/Blank Message'

#endif                                 // RTW_HEADER_ROPOD_4Wheel_TdistZMPC_cntr_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
