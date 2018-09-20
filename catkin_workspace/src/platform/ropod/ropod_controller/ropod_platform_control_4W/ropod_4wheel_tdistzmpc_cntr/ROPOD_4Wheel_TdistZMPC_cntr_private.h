//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_TdistZMPC_cntr_private.h
//
// Code generated for Simulink model 'ROPOD_4Wheel_TdistZMPC_cntr'.
//
// Model version                  : 1.320
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Thu Sep 20 16:36:53 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ROPOD_4Wheel_TdistZMPC_cntr_private_h_
#define RTW_HEADER_ROPOD_4Wheel_TdistZMPC_cntr_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "ROPOD_4Wheel_TdistZMPC_cntr.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if 0

// Skip this size verification because of preprocessor limitation
#if ( ULONG_MAX != (0xFFFFFFFFFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFFFFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif
#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern "C" void ECAT_Interface(SimStruct *rts);
extern "C" void Read_Serial_Port(SimStruct *rts);
extern "C" void ec_ROPOD_SmartWheel(SimStruct *rts);
extern void ROPOD_4Wheel_Tdi_MATLABFunction(real_T rtu_w, real_T rtu_tau, real_T
  *rty_g, real_T *rty_a);
extern void ROPOD_4Wheel_Tdist_Calibration1(real_T rtu_angle, real_T rtu_sample,
  real_T rtu_data, real_T *rty_cal_angle, real_T *rty_i, real_T *rty_data_out);
extern void speeddeflectionanglecalculation(real_T rtu_s_data, real_T
  rtu_s_data_n, real_T rtu_s_data_m, real_T rtu_s_data_k, real_T rtu_s_data_i,
  real_T rtu_s_data_in, real_T rtu_s_data_ia, real_T rtu_s_data_ku, real_T
  rtu_k_cx, real_T rtu_b_cx, real_T *rty_Total_deflection, real_T
  *rty_Total_speed, real_T *rty_Toatal_torque);
extern void speeddeflectionanglecalculati_l(real_T rtu_s_data, real_T
  rtu_s_data_k, real_T rtu_s_data_f, real_T rtu_s_data_fi, real_T rtu_s_data_n,
  real_T rtu_s_data_ft, real_T rtu_s_data_i, real_T rtu_s_data_a, real_T
  rtu_k_cy, real_T rtu_b_cy, real_T *rty_Total_deflection, real_T
  *rty_Total_speed, real_T *rty_Toatal_torque);
extern void ROPOD_4Wheel_T_MATLABFunction_j(real_T rtu_w, real_T rtu_tau, real_T
  *rty_g, real_T *rty_a);
extern void ROPOD_4Wheel_T_MATLABFunction_o(real_T rtu_w, real_T rtu_tau, real_T
  *rty_g, real_T *rty_a);
extern void ROPOD_4Wheel_Td_MATLABFunction1(real_T rtu_tl, real_T rtu_tr, real_T
  rtu_ropod_kinmodel_param_vec, real_T rtu_ropod_kinmodel_param_vec_a, real_T
  rtu_ropod_kinmodel_param_vec_e5, real_T rtu_ropod_kinmodel_param_vec_b, real_T
  rtu_kmax, real_T *rty_tl_out, real_T *rty_tr_out);

#endif                                 // RTW_HEADER_ROPOD_4Wheel_TdistZMPC_cntr_private_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
