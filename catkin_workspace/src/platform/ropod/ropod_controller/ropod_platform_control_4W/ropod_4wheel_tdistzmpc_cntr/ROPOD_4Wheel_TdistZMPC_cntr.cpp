//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_TdistZMPC_cntr.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_TdistZMPC_cntr'.
//
// Model version                  : 1.321
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Mon Sep 24 16:56:41 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_TdistZMPC_cntr.h"
#include "ROPOD_4Wheel_TdistZMPC_cntr_private.h"

// Named constants for Chart: '<S13>/Chart'
#define ROPOD_4Whee_IN_Velocity_control ((uint8_T)3U)
#define ROPOD_4Wheel_IN_Connect_to_cart ((uint8_T)1U)
#define ROPOD_4Wheel_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define ROPOD_4Wheel__IN_No_interaction ((uint8_T)4U)
#define ROPOD_4_IN_Mode1_Operation_mode ((uint8_T)1U)
#define ROPOD_IN_Hold_contact_with_cart ((uint8_T)2U)
#define ROPOD_IN_Interaction_right_side ((uint8_T)3U)
#define ROPOD__IN_Collision_with_object ((uint8_T)1U)
#define ROPOD__IN_Interaction_left_side ((uint8_T)2U)
#define ROPOD__IN_Mode4_Connect_to_cart ((uint8_T)2U)
#define ParameterInitia_pjsf4rz1te2ravh (10.0)
#define ParameterInitialV_pjsf4rz1te2ra (0.0525)
#define ParameterInitialVa_pjsf4rz1te2r (0.01)
#define ParameterInitialVal_pjsf4rz1te2 (0.08)
#define ParameterInitialValu_pjsf4rz1te (0.21)
#define ParameterInitialValue_pjsf4rz1 (0.05)
#define ParameterInitialValue_pjsf4rz1t (-0.21)
#define ParameterInitial_pjsf4rz1te2rav (1.0)
#define ROPOD_4Wh_ParameterInitialValue (20.0)
#define ROPOD_4Wheel_Td_MessageQueueLen (1)
#define ROPOD_4Wheel__MessageQueueLen_p (5)
#define ROPOD_4_ParameterInitialValue_p (0.5)
#define ROPOD_ParameterInitialValue_pjs (100.0)
#define ROPOD__ParameterInitialValue_pj (150.0)
#define ROPO_ParameterInitialValue_pjsf (0.25)
#define ROP_ParameterInitialValue_pjsf4 (200.0)
#define RO_ParameterInitialValue_pjsf4r (2.0)
#define R_ParameterInitia_f            (2.059)
#define R_ParameterInitia_g            (3.465)
#define R_ParameterInitia_h            (4.784)
#define R_ParameterInitia_j            (3.835)
#define R_ParameterInitia_j4           (4.0)
#define R_ParameterInitia_n            (1.6)
#define R_ParameterInitialValue_pjsf4rz (0.0)

// Block signals (auto storage)
B_ROPOD_4Wheel_TdistZMPC_cntr_T ROPOD_4Wheel_TdistZMPC_cntr_B;

// Block states (auto storage)
DW_ROPOD_4Wheel_TdistZMPC_cntr_T ROPOD_4Wheel_TdistZMPC_cntr_DW;

// Previous zero-crossings (trigger) states
PrevZCX_ROPOD_4Wheel_TdistZMPC_cntr_T ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX;

// Real-time model
RT_MODEL_ROPOD_4Wheel_TdistZMPC_cntr_T ROPOD_4Wheel_TdistZMPC_cntr_M_;
RT_MODEL_ROPOD_4Wheel_TdistZMPC_cntr_T *const ROPOD_4Wheel_TdistZMPC_cntr_M =
  &ROPOD_4Wheel_TdistZMPC_cntr_M_;

// Forward declaration for local functions
static real_T ROPOD_4Wheel_TdistZMPC_cntr_sum(const real_T x[4]);

// Forward declaration for local functions
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_m(const real_T x[4]);

// Forward declaration for local functions
static int32_T ROPOD_4Wheel_TdistZMPC_c_xpotrf(real_T A[1600]);
static void ROPOD_4Wheel_TdistZMPC_cn_xswap(real_T x[1600], int32_T ix0, int32_T
  iy0);
static void ROPOD_4Wheel_TdistZMPC_c_xgetrf(real_T A[1600], int32_T ipiv[40],
  int32_T *info);
static void ROPOD_4Wheel_TdistZMPC_cn_xtrsm(const real_T A[1600], real_T B[1600]);
static void ROPOD_4Wheel_TdistZMPC__xtrsm_j(const real_T A[1600], real_T B[1600]);
static void ROPOD_4Wheel_TdistZMPC_mldivide(const real_T A[1600], real_T B[1600]);
static boolean_T ROPOD_4Wheel_TdistZ_ifWhileCond(const boolean_T x[102]);
static void ROPOD_4Wheel_Tdis_Unconstrained(const real_T Hinv[1600], const
  real_T f[40], real_T x[40]);
static real_T ROPOD_4Wheel_TdistZMPC_cnt_norm(const real_T x[40]);
static void ROPOD_4Wheel_TdistZMPC_cntr_abs(const real_T x[40], real_T y[40]);
static void ROPOD_4Wheel_TdistZMPC_cn_abs_p(const real_T x[102], real_T y[102]);
static real_T ROPOD_4Wheel_TdistZMPC_cn_xnrm2(int32_T n, const real_T x[1600],
  int32_T ix0);
static real_T ROPOD_4Wheel_Tdis_rt_hypotd_snf(real_T u0, real_T u1);
static real_T ROPOD_4Wheel_TdistZMPC__xzlarfg(int32_T n, real_T *alpha1, real_T
  x[1600], int32_T ix0);
static int32_T ROPOD_4Wheel_TdistZMPC_c_ilazlc(int32_T m, int32_T n, const
  real_T A[1600], int32_T ia0);
static void ROPOD_4Wheel_TdistZMPC_cn_xgemv(int32_T m, int32_T n, const real_T
  A[1600], int32_T ia0, const real_T x[1600], int32_T ix0, real_T y[40]);
static void ROPOD_4Wheel_TdistZMPC_cnt_xger(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[40], real_T A[1600], int32_T ia0);
static void ROPOD_4Wheel_TdistZMPC_c_xzlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40]);
static void ROPOD_4Wheel_TdistZMPC_c_xgeqrf(real_T A[1600], real_T tau[40]);
static void ROPOD_4Wheel_TdistZMPC_xzlarf_k(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40]);
static void ROPOD_4Wheel_TdistZMPC_cn_xscal(int32_T n, real_T a, real_T x[1600],
  int32_T ix0);
static void ROPOD_4Wheel_TdistZMPC_cntr_qr(const real_T A[1600], real_T Q[1600],
  real_T R[1600]);
static real_T ROPOD_4Wheel_TdistZM_KWIKfactor(const real_T Ac[4080], const
  int16_T iC[102], int16_T nA, const real_T Linv[1600], real_T RLinv[1600],
  real_T D[1600], real_T H[1600]);
static void ROPOD_4Wheel_Tdi_DropConstraint(int16_T kDrop, int16_T iA[102],
  int16_T *nA, int16_T iC[102]);
static void ROPOD_4Wheel_TdistZ_mpcqpsolver(const real_T Linv[1600], const
  real_T f[40], const real_T A[4080], const real_T b[102], const boolean_T iA0
  [102], real_T x[40], real_T *status, boolean_T iA[102]);
static int32_T ROPOD_4Wheel_TdistZMPC_xpotrf_h(real_T A[1600]);
static void ROPOD_4Wheel_TdistZMPC__xswap_n(real_T x[1600], int32_T ix0, int32_T
  iy0);
static void ROPOD_4Wheel_TdistZMPC_xgetrf_a(real_T A[1600], int32_T ipiv[40],
  int32_T *info);
static void ROPOD_4Wheel_TdistZMPC__xtrsm_f(const real_T A[1600], real_T B[1600]);
static void ROPOD_4Wheel_TdistZMPC_xtrsm_f0(const real_T A[1600], real_T B[1600]);
static void ROPOD_4Wheel_TdistZM_mldivide_m(const real_T A[1600], real_T B[1600]);
static boolean_T ROPOD_4Wheel_Tdis_ifWhileCond_m(const boolean_T x[102]);
static void ROPOD_4Wheel_Td_Unconstrained_f(const real_T Hinv[1600], const
  real_T f[40], real_T x[40]);
static real_T ROPOD_4Wheel_TdistZMPC_c_norm_i(const real_T x[40]);
static void ROPOD_4Wheel_TdistZMPC_cn_abs_i(const real_T x[40], real_T y[40]);
static void ROPOD_4Wheel_TdistZMPC_c_abs_ig(const real_T x[102], real_T y[102]);
static real_T ROPOD_4Wheel_TdistZMPC__xnrm2_k(int32_T n, const real_T x[1600],
  int32_T ix0);
static real_T ROPOD_4Wheel_TdistZMP_xzlarfg_i(int32_T n, real_T *alpha1, real_T
  x[1600], int32_T ix0);
static int32_T ROPOD_4Wheel_TdistZMPC_ilazlc_p(int32_T m, int32_T n, const
  real_T A[1600], int32_T ia0);
static void ROPOD_4Wheel_TdistZMPC__xgemv_e(int32_T m, int32_T n, const real_T
  A[1600], int32_T ia0, const real_T x[1600], int32_T ix0, real_T y[40]);
static void ROPOD_4Wheel_TdistZMPC_c_xger_a(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[40], real_T A[1600], int32_T ia0);
static void ROPOD_4Wheel_TdistZMPC_xzlarf_c(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40]);
static void ROPOD_4Wheel_TdistZMPC_xgeqrf_i(real_T A[1600], real_T tau[40]);
static void ROPOD_4Wheel_TdistZMP_xzlarf_cv(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40]);
static void ROPOD_4Wheel_TdistZMPC__xscal_i(int32_T n, real_T a, real_T x[1600],
  int32_T ix0);
static void ROPOD_4Wheel_TdistZMPC_cnt_qr_p(const real_T A[1600], real_T Q[1600],
  real_T R[1600]);
static real_T ROPOD_4Wheel_Tdist_KWIKfactor_a(const real_T Ac[4080], const
  int16_T iC[102], int16_T nA, const real_T Linv[1600], real_T RLinv[1600],
  real_T D[1600], real_T H[1600]);
static void ROPOD_4Wheel_T_DropConstraint_n(int16_T kDrop, int16_T iA[102],
  int16_T *nA, int16_T iC[102]);
static void ROPOD_4Wheel_Tdis_mpcqpsolver_g(const real_T Linv[1600], const
  real_T f[40], const real_T A[4080], const real_T b[102], const boolean_T iA0
  [102], real_T x[40], real_T *status, boolean_T iA[102]);
static real_T ROPOD_4Wheel_TdistZMPC__xnrm2_h(int32_T n, const real_T x[27],
  int32_T ix0);
static real_T ROPOD_4Wheel_TdistZMPC_xnrm2_hb(int32_T n, const real_T x[9],
  int32_T ix0);
static void ROPOD_4Wheel_TdistZMPC_xaxpy_er(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC__xaxpy_e(int32_T n, real_T a, const real_T x
  [27], int32_T ix0, real_T y[3], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s);
static real_T ROPOD_4Wheel_TdistZMPC_cn_xdotc(int32_T n, const real_T x[27],
  int32_T ix0, const real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC_cn_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC_cntr_svd(const real_T A[27], real_T U[3]);
static void ROPOD_4Wheel_Td_Unconstrained_n(const real_T Hinv[81], const real_T
  f[9], real_T x[9]);
static real_T ROPOD_4Wheel_TdistZMPC_c_norm_m(const real_T x[9]);
static void ROPOD_4Wheel_TdistZMPC_cn_abs_d(const real_T x[9], real_T y[9]);
static void ROPOD_4Wheel_TdistZMPC_c_abs_d5(const real_T x[21], real_T y[21]);
static real_T ROPOD_4Wheel_TdistZMP_xnrm2_hbi(int32_T n, const real_T x[81],
  int32_T ix0);
static void ROPOD_4Wheel_TdistZMPC__xgemv_m(int32_T m, int32_T n, const real_T
  A[81], int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
static void ROPOD_4Wheel_TdistZMPC_c_xger_g(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[9], real_T A[81], int32_T ia0);
static void ROPOD_4Wheel_TdistZMPC_xgeqrf_h(real_T A[81], real_T tau[9]);
static void ROPOD_4Wheel_TdistZMPC_cnt_qr_k(const real_T A[81], real_T Q[81],
  real_T R[81]);
static real_T ROPOD_4Wheel_Tdist_KWIKfactor_m(const real_T Ac[189], const
  int16_T iC[21], int16_T nA, const real_T Linv[81], real_T RLinv[81], real_T D
  [81], real_T H[81]);
static void ROPOD_4Wheel_T_DropConstraint_b(int16_T kDrop, int16_T iA[21],
  int16_T *nA, int16_T iC[21]);
static void ROPOD_4Wheel_T_ResetToColdStart(int16_T iA[21], int16_T iC[21]);
static void ROPOD_4Wheel_Tdis_mpcqpsolver_p(const real_T Linv[81], const real_T
  f[9], const real_T b[18], const real_T Aeq[27], const real_T beq[3], real_T x
  [9]);
static real_T ROPOD_4Wheel_Tdis_rt_atan2d_snf(real_T u0, real_T u1);
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_k(const real_T x[4]);
static void rate_scheduler(void);

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1])++;
  if ((ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1]) > 9) {// Sample time: [0.01s, 0.0s] 
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] = 0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleHits[1] =
    (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0);
  (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2])++;
  if ((ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2]) > 999) {// Sample time: [1.0s, 0.0s] 
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] = 0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleHits[2] =
    (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0);
}

//
// Output and update for atomic system:
//    '<S76>/MATLAB Function'
//    '<S78>/MATLAB Function'
//    '<S80>/MATLAB Function'
//    '<S82>/MATLAB Function'
//    '<S106>/MATLAB Function'
//    '<S108>/MATLAB Function'
//    '<S110>/MATLAB Function'
//    '<S112>/MATLAB Function'
//    '<S114>/MATLAB Function'
//    '<S116>/MATLAB Function'
//    ...
//
void ROPOD_4Wheel_Tdi_MATLABFunction(real_T rtu_w, real_T rtu_tau, real_T *rty_g,
  real_T *rty_a)
{
  real_T wt;
  wt = rtu_w * rtu_tau;
  wt /= 1.0 + wt;
  *rty_a = 1.0 - 2.0 * wt;
  *rty_g = wt;
}

//
// Output and update for atomic system:
//    '<S57>/Calibration1'
//    '<S59>/Calibration1'
//    '<S60>/Calibration1'
//    '<S61>/Calibration1'
//    '<S62>/Calibration1'
//    '<S63>/Calibration1'
//    '<S64>/Calibration1'
//    '<S65>/Calibration1'
//
void ROPOD_4Wheel_Tdist_Calibration1(real_T rtu_angle, real_T rtu_sample, real_T
  rtu_data, real_T *rty_cal_angle, real_T *rty_i, real_T *rty_data_out)
{
  if ((rtu_sample > 5000.0) && (rtu_sample <= 6000.0)) {
    *rty_data_out = rtu_data + rtu_angle;
    *rty_cal_angle = rtu_angle;
  } else {
    *rty_cal_angle = rtu_angle - rtu_data / 1000.0;
    *rty_data_out = rtu_data;
  }

  *rty_i = rtu_sample + 1.0;
}

// Function for MATLAB Function: '<S43>/speed deflection angle calculation X+'
static real_T ROPOD_4Wheel_TdistZMPC_cntr_sum(const real_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

//
// Output and update for atomic system:
//    '<S43>/speed deflection angle calculation X+'
//    '<S43>/speed deflection angle calculation X+1'
//
void speeddeflectionanglecalculation(real_T rtu_s_data, real_T rtu_s_data_n,
  real_T rtu_s_data_m, real_T rtu_s_data_k, real_T rtu_s_data_i, real_T
  rtu_s_data_in, real_T rtu_s_data_ia, real_T rtu_s_data_ku, real_T rtu_k_cx,
  real_T rtu_b_cx, real_T *rty_Total_deflection, real_T *rty_Total_speed, real_T
  *rty_Toatal_torque)
{
  real_T rtb_TmpSignalConversionAtSFu_gd[8];

  // SignalConversion: '<S68>/TmpSignal ConversionAt SFunction Inport1'
  rtb_TmpSignalConversionAtSFu_gd[0] = rtu_s_data;
  rtb_TmpSignalConversionAtSFu_gd[1] = rtu_s_data_n;
  rtb_TmpSignalConversionAtSFu_gd[2] = rtu_s_data_m;
  rtb_TmpSignalConversionAtSFu_gd[3] = rtu_s_data_k;
  rtb_TmpSignalConversionAtSFu_gd[4] = rtu_s_data_i;
  rtb_TmpSignalConversionAtSFu_gd[5] = rtu_s_data_in;
  rtb_TmpSignalConversionAtSFu_gd[6] = rtu_s_data_ia;
  rtb_TmpSignalConversionAtSFu_gd[7] = rtu_s_data_ku;
  *rty_Total_deflection = ROPOD_4Wheel_TdistZMPC_cntr_sum
    (&rtb_TmpSignalConversionAtSFu_gd[0]);
  *rty_Total_speed = ROPOD_4Wheel_TdistZMPC_cntr_sum
    (&rtb_TmpSignalConversionAtSFu_gd[4]);

  // SignalConversion: '<S68>/TmpSignal ConversionAt SFunction Inport1'
  *rty_Toatal_torque = (((rtu_k_cx * rtu_s_data + rtu_b_cx * rtu_s_data_i) * 1.5
    * 0.164 + (rtu_k_cx * rtu_s_data_n + rtu_b_cx * rtu_s_data_in) * 0.164) +
                        (rtu_k_cx * rtu_s_data_m + rtu_b_cx * rtu_s_data_ia) *
                        -0.164) + (rtu_k_cx * rtu_s_data_k + rtu_b_cx *
    rtu_s_data_ku) * -1.5 * 0.164;
}

// Function for MATLAB Function: '<S43>/speed deflection angle calculation X+2'
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_m(const real_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

//
// Output and update for atomic system:
//    '<S43>/speed deflection angle calculation X+2'
//    '<S43>/speed deflection angle calculation X+3'
//
void speeddeflectionanglecalculati_l(real_T rtu_s_data, real_T rtu_s_data_k,
  real_T rtu_s_data_f, real_T rtu_s_data_fi, real_T rtu_s_data_n, real_T
  rtu_s_data_ft, real_T rtu_s_data_i, real_T rtu_s_data_a, real_T rtu_k_cy,
  real_T rtu_b_cy, real_T *rty_Total_deflection, real_T *rty_Total_speed, real_T
  *rty_Toatal_torque)
{
  real_T rtb_TmpSignalConversionAtSFu_az[8];

  // SignalConversion: '<S70>/TmpSignal ConversionAt SFunction Inport1'
  rtb_TmpSignalConversionAtSFu_az[0] = rtu_s_data;
  rtb_TmpSignalConversionAtSFu_az[1] = rtu_s_data_k;
  rtb_TmpSignalConversionAtSFu_az[2] = rtu_s_data_f;
  rtb_TmpSignalConversionAtSFu_az[3] = rtu_s_data_fi;
  rtb_TmpSignalConversionAtSFu_az[4] = rtu_s_data_n;
  rtb_TmpSignalConversionAtSFu_az[5] = rtu_s_data_ft;
  rtb_TmpSignalConversionAtSFu_az[6] = rtu_s_data_i;
  rtb_TmpSignalConversionAtSFu_az[7] = rtu_s_data_a;
  *rty_Total_deflection = ROPOD_4Wheel_TdistZMPC_cn_sum_m
    (&rtb_TmpSignalConversionAtSFu_az[0]);
  *rty_Total_speed = ROPOD_4Wheel_TdistZMPC_cn_sum_m
    (&rtb_TmpSignalConversionAtSFu_az[4]);

  // SignalConversion: '<S70>/TmpSignal ConversionAt SFunction Inport1'
  *rty_Toatal_torque = (((rtu_k_cy * rtu_s_data + rtu_b_cy * rtu_s_data_n) * 1.5
    * 0.164 + (rtu_k_cy * rtu_s_data_k + rtu_b_cy * rtu_s_data_ft) * 0.164) +
                        (rtu_k_cy * rtu_s_data_f + rtu_b_cy * rtu_s_data_i) *
                        -0.164) + (rtu_k_cy * rtu_s_data_fi + rtu_b_cy *
    rtu_s_data_a) * -1.5 * 0.164;
}

//
// Output and update for atomic system:
//    '<S337>/MATLAB Function'
//    '<S346>/MATLAB Function'
//    '<S355>/MATLAB Function'
//    '<S403>/MATLAB Function'
//    '<S412>/MATLAB Function'
//    '<S421>/MATLAB Function'
//    '<S430>/MATLAB Function'
//    '<S439>/MATLAB Function'
//    '<S448>/MATLAB Function'
//    '<S457>/MATLAB Function'
//    '<S466>/MATLAB Function'
//
void ROPOD_4Wheel_T_MATLABFunction_j(real_T rtu_w, real_T rtu_tau, real_T *rty_g,
  real_T *rty_a)
{
  real_T wt;
  wt = rtu_w * rtu_tau;
  wt /= 1.0 + wt;
  *rty_a = 1.0 - 2.0 * wt;
  *rty_g = wt;
}

//
// Output and update for atomic system:
//    '<S379>/MATLAB Function'
//    '<S381>/MATLAB Function'
//    '<S383>/MATLAB Function'
//    '<S385>/MATLAB Function'
//
void ROPOD_4Wheel_T_MATLABFunction_o(real_T rtu_w, real_T rtu_tau, real_T *rty_g,
  real_T *rty_a)
{
  real_T wt;
  wt = rtu_w * rtu_tau;
  wt /= 1.0 + wt;
  *rty_a = 1.0 - 2.0 * wt;
  *rty_g = wt;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2((real_T)u0_0, (real_T)u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

//
// Output and update for atomic system:
//    '<S18>/MATLAB Function1'
//    '<S18>/MATLAB Function2'
//    '<S18>/MATLAB Function3'
//
void ROPOD_4Wheel_Td_MATLABFunction1(real_T rtu_tl, real_T rtu_tr, real_T
  rtu_ropod_kinmodel_param_vec, real_T rtu_ropod_kinmodel_param_vec_a, real_T
  rtu_ropod_kinmodel_param_vec_e5, real_T rtu_ropod_kinmodel_param_vec_b, real_T
  rtu_kmax, real_T *rty_tl_out, real_T *rty_tr_out)
{
  real_T Fxi;
  real_T Fyi;
  real_T Fxi_tmp;

  // SignalConversion: '<S388>/TmpSignal ConversionAt SFunction Inport3'
  Fyi = rtu_tr / rtu_ropod_kinmodel_param_vec_a;
  Fxi_tmp = rtu_tl / rtu_ropod_kinmodel_param_vec;
  Fxi = Fxi_tmp + Fyi;

  // SignalConversion: '<S388>/TmpSignal ConversionAt SFunction Inport3'
  Fyi = (Fyi - Fxi_tmp) * (rtu_ropod_kinmodel_param_vec_b / (2.0 *
    rtu_ropod_kinmodel_param_vec_e5));
  if (sqrt(Fxi * Fxi + Fyi * Fyi) > 30.0) {
    Fxi = (rtu_kmax - 1.0) * fabs(sin(rt_atan2d_snf(Fyi, Fxi))) + 1.0;
  } else {
    Fxi = 1.0;
  }

  *rty_tl_out = rtu_tl * Fxi;
  *rty_tr_out = rtu_tr * Fxi;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static int32_T ROPOD_4Wheel_TdistZMPC_c_xpotrf(real_T A[1600])
{
  int32_T info;
  boolean_T exitg1;
  info = 0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.j_o = 0;
  exitg1 = false;
  while ((!exitg1) && (ROPOD_4Wheel_TdistZMPC_cntr_B.j_o + 1 < 41)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p = ROPOD_4Wheel_TdistZMPC_cntr_B.j_o * 40
      + ROPOD_4Wheel_TdistZMPC_cntr_B.j_o;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d = 0.0;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.j_o < 1)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l = ROPOD_4Wheel_TdistZMPC_cntr_B.j_o;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_k = ROPOD_4Wheel_TdistZMPC_cntr_B.j_o;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_j = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_j <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_o) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d +=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l] *
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_k];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l += 40;
        ROPOD_4Wheel_TdistZMPC_cntr_B.iy_k += 40;
        ROPOD_4Wheel_TdistZMPC_cntr_B.k_j++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d = A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p]
      - ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d > 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d = sqrt
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d);
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.j_o + 1 < 40) {
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.j_o != 0) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l = ROPOD_4Wheel_TdistZMPC_cntr_B.j_o;
          ROPOD_4Wheel_TdistZMPC_cntr_B.iy_k =
            ((ROPOD_4Wheel_TdistZMPC_cntr_B.j_o - 1) * 40 +
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_o) + 2;
          ROPOD_4Wheel_TdistZMPC_cntr_B.k_j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_o
            + 2;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_j <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iy_k) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_af =
              -A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l];
            ROPOD_4Wheel_TdistZMPC_cntr_B.b_iy_f =
              ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p + 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.e_c =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.k_j -
               ROPOD_4Wheel_TdistZMPC_cntr_B.j_o) + 38;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ia_fq =
              ROPOD_4Wheel_TdistZMPC_cntr_B.k_j;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_fq <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.e_c) {
              A[ROPOD_4Wheel_TdistZMPC_cntr_B.b_iy_f] +=
                A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_fq - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.c_af;
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_iy_f++;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ia_fq++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l += 40;
            ROPOD_4Wheel_TdistZMPC_cntr_B.k_j += 40;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d = 1.0 /
          ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l = (ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p
          - ROPOD_4Wheel_TdistZMPC_cntr_B.j_o) + 40;
        ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p++;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.ix_l) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p] *=
            ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d;
          ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.j_o++;
    } else {
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj_p] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ajj_d;
      info = ROPOD_4Wheel_TdistZMPC_cntr_B.j_o + 1;
      exitg1 = true;
    }
  }

  return info;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xswap(real_T x[1600], int32_T ix0, int32_T
  iy0)
{
  ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c2 = ix0 - 1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.iy_h = iy0 - 1;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_da = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_da < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_da++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.temp_c = x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c2];
    x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c2] =
      x[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_h];
    x[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_h] = ROPOD_4Wheel_TdistZMPC_cntr_B.temp_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c2 += 40;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_h += 40;
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_xgetrf(real_T A[1600], int32_T ipiv[40],
  int32_T *info)
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_n = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.j_n <
       40; ROPOD_4Wheel_TdistZMPC_cntr_B.j_n++) {
    ipiv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_n] = 1 +
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_n;
  }

  *info = 0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_n = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.j_n <
       39; ROPOD_4Wheel_TdistZMPC_cntr_B.j_n++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0 = ROPOD_4Wheel_TdistZMPC_cntr_B.j_n * 41;
    ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p = 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c = ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.smax_h = fabs
      (A[ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0]);
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_nc = 2;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_nc <= 40 -
           ROPOD_4Wheel_TdistZMPC_cntr_B.j_n) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.s_e = fabs
        (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c]);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.s_e >
          ROPOD_4Wheel_TdistZMPC_cntr_B.smax_h) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p = ROPOD_4Wheel_TdistZMPC_cntr_B.k_nc;
        ROPOD_4Wheel_TdistZMPC_cntr_B.smax_h = ROPOD_4Wheel_TdistZMPC_cntr_B.s_e;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.k_nc++;
    }

    if (A[(ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0 +
           ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p) - 1] != 0.0) {
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p - 1 != 0) {
        ipiv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_n] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_n + ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p;
        ROPOD_4Wheel_TdistZMPC_cn_xswap(A, ROPOD_4Wheel_TdistZMPC_cntr_B.j_n + 1,
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_n + ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p);
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0 -
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_n) + 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c = ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0 +
        1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c + 1 <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p) {
        A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c] /=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c++;
      }
    } else {
      *info = ROPOD_4Wheel_TdistZMPC_cntr_B.j_n + 1;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p = ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c = ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0 + 40;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_nc = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_nc <= 39 -
           ROPOD_4Wheel_TdistZMPC_cntr_B.j_n) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.smax_h =
        A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c];
      if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_ix_d =
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_l0 + 1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.d_o = (ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p
          - ROPOD_4Wheel_TdistZMPC_cntr_B.j_n) + 80;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_j = 41 +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_j + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.d_o) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_j] +=
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.b_ix_d] *
            -ROPOD_4Wheel_TdistZMPC_cntr_B.smax_h;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_ix_d++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_j++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c += 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.jA_p += 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_nc++;
    }
  }

  if ((*info == 0) && (!(A[1599] != 0.0))) {
    *info = 40;
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xtrsm(const real_T A[1600], real_T B[1600])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_mi = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.j_mi < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.j_mi++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_o = 40 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_mi;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_ku = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_ku < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_ku++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol_n = 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.k_ku;
      if (B[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ku +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_o] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_jk = ROPOD_4Wheel_TdistZMPC_cntr_B.k_ku
          + 1;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_jk + 1 < 41) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i14 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_jk
            + ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_o;
          B[ROPOD_4Wheel_TdistZMPC_cntr_B.i14] -=
            B[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ku +
            ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_o] *
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_jk +
            ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol_n];
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_jk++;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC__xtrsm_j(const real_T A[1600], real_T B[1600])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.j_i <
       40; ROPOD_4Wheel_TdistZMPC_cntr_B.j_i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_h = 40 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_i;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_f = 39;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_f >= 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_f--) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol_f = 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.k_f;
      ROPOD_4Wheel_TdistZMPC_cntr_B.i11 = ROPOD_4Wheel_TdistZMPC_cntr_B.k_f +
        ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_h;
      if (B[ROPOD_4Wheel_TdistZMPC_cntr_B.i11] != 0.0) {
        B[ROPOD_4Wheel_TdistZMPC_cntr_B.i11] =
          B[ROPOD_4Wheel_TdistZMPC_cntr_B.k_f +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_h] /
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.k_f +
          ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol_f];
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cy = 0;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cy + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.k_f) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i12 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_cy
            + ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_h;
          B[ROPOD_4Wheel_TdistZMPC_cntr_B.i12] -=
            B[ROPOD_4Wheel_TdistZMPC_cntr_B.i11] *
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cy +
            ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol_f];
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_cy++;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_mldivide(const real_T A[1600], real_T B[1600])
{
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_m[0], &A[0], 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_c_xgetrf(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_m,
    ROPOD_4Wheel_TdistZMPC_cntr_B.ipiv_c, &ROPOD_4Wheel_TdistZMPC_cntr_B.info_i);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.info_i = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.info_i < 39;
       ROPOD_4Wheel_TdistZMPC_cntr_B.info_i++) {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.info_i + 1 !=
        ROPOD_4Wheel_TdistZMPC_cntr_B.ipiv_c[ROPOD_4Wheel_TdistZMPC_cntr_B.info_i])
    {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ip_d =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ipiv_c[ROPOD_4Wheel_TdistZMPC_cntr_B.info_i]
        - 1;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.xj_g = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.xj_g < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.xj_g++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.temp_f = B[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj_g +
          ROPOD_4Wheel_TdistZMPC_cntr_B.info_i];
        B[ROPOD_4Wheel_TdistZMPC_cntr_B.info_i + 40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj_g] = B[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj_g +
          ROPOD_4Wheel_TdistZMPC_cntr_B.ip_d];
        B[ROPOD_4Wheel_TdistZMPC_cntr_B.ip_d + 40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj_g] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.temp_f;
      }
    }
  }

  ROPOD_4Wheel_TdistZMPC_cn_xtrsm(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_m, B);
  ROPOD_4Wheel_TdistZMPC__xtrsm_j(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_m, B);
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static boolean_T ROPOD_4Wheel_TdistZ_ifWhileCond(const boolean_T x[102])
{
  boolean_T y;
  boolean_T exitg1;
  y = true;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_hm = 1;
  exitg1 = false;
  while ((!exitg1) && (ROPOD_4Wheel_TdistZMPC_cntr_B.k_hm < 103)) {
    if (!x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_hm - 1]) {
      y = false;
      exitg1 = true;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_hm++;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_Tdis_Unconstrained(const real_T Hinv[1600], const
  real_T f[40], real_T x[40])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_g3 = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_g3 < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_g3++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_d = ROPOD_4Wheel_TdistZMPC_cntr_B.i_g3 + 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.d5 = 0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i17 = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i17 < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i17++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.d5 += -Hinv[(40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i17 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_d) -
        1] * f[ROPOD_4Wheel_TdistZMPC_cntr_B.i17];
    }

    x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_g3] = ROPOD_4Wheel_TdistZMPC_cntr_B.d5;
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC_cnt_norm(const real_T x[40])
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_pc = 3.3121686421112381E-170;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_ho = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_ho < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_ho++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ho]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_pc) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_c = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_pc
        / ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_c *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_c + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_pc =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_c = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b /
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_pc;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_c * ROPOD_4Wheel_TdistZMPC_cntr_B.t_c;
    }
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_pc * sqrt(y);
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cntr_abs(const real_T x[40], real_T y[40])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_om = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_om < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_om++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_om] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_om]);
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_abs_p(const real_T x[102], real_T y[102])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_gi = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_gi < 102;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_gi++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_gi] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_gi]);
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC_cn_xnrm2(int32_T n, const real_T x[1600],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_j = 3.3121686421112381E-170;
      ROPOD_4Wheel_TdistZMPC_cntr_B.kend_f = (ix0 + n) - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_d = ix0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_d <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.kend_f) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_e = fabs
          (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_d - 1]);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_e >
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_j) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_o =
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_j /
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_e;
          y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_o *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_o + 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_j =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_e;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_o =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_e /
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_j;
          y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_o *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_o;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.k_d++;
      }

      y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_j * sqrt(y);
    }
  }

  return y;
}

static real_T ROPOD_4Wheel_Tdis_rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb = fabs(u0);
  y = fabs(u1);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb < y) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb /= y;
    y *= sqrt(ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb *
              ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb + 1.0);
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb > y) {
    y /= ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb;
    y = sqrt(y * y + 1.0) * ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb;
  } else {
    if (!rtIsNaN(y)) {
      y = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nb * 1.4142135623730951;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC__xzlarfg(int32_T n, real_T *alpha1, real_T
  x[1600], int32_T ix0)
{
  real_T tau;
  tau = 0.0;
  if (!(n <= 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a = ROPOD_4Wheel_TdistZMPC_cn_xnrm2(n -
      1, x, ix0);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a != 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a = ROPOD_4Wheel_Tdis_rt_hypotd_snf
        (*alpha1, ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a);
      if (*alpha1 >= 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a =
          -ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a;
      }

      if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a) < 1.0020841800044864E-292)
      {
        ROPOD_4Wheel_TdistZMPC_cntr_B.knt_d = 0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g = (ix0 + n) - 2;
        do {
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt_d++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l = ix0;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g) {
            x[ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l - 1] *= 9.9792015476736E+291;
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a) >=
                   1.0020841800044864E-292));

        ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a = ROPOD_4Wheel_Tdis_rt_hypotd_snf(*
          alpha1, ROPOD_4Wheel_TdistZMPC_cn_xnrm2(n - 1, x, ix0));
        if (*alpha1 >= 0.0) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a =
            -ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a;
        }

        tau = (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a - *alpha1) /
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a;
        *alpha1 = 1.0 / (*alpha1 - ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a);
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g = (ix0 + n) - 2;
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l = ix0;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g) {
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l - 1] *= *alpha1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_l++;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g = 1;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.knt_d) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a *= 1.0020841800044864E-292;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g++;
        }

        *alpha1 = ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a;
      } else {
        tau = (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a - *alpha1) /
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a;
        *alpha1 = 1.0 / (*alpha1 - ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a);
        ROPOD_4Wheel_TdistZMPC_cntr_B.knt_d = (ix0 + n) - 2;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g = ix0;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.knt_d) {
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g - 1] *= *alpha1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_k_g++;
        }

        *alpha1 = ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_a;
      }
    }
  }

  return tau;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static int32_T ROPOD_4Wheel_TdistZMPC_c_ilazlc(int32_T m, int32_T n, const
  real_T A[1600], int32_T ia0)
{
  int32_T j;
  int32_T exitg1;
  boolean_T exitg2;
  j = n;
  exitg2 = false;
  while ((!exitg2) && (j > 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_o = (j - 1) * 40 + ia0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ai = ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_o;
    do {
      exitg1 = 0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ai <=
          (ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_o + m) - 1) {
        if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ai - 1] != 0.0) {
          exitg1 = 1;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ai++;
        }
      } else {
        j--;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }

  return j;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xgemv(int32_T m, int32_T n, const real_T
  A[1600], int32_T ia0, const real_T x[1600], int32_T ix0, real_T y[40])
{
  if (n != 0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_ho = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iy_ho <= n) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_ho - 1] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_ho++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_ho = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_c = (n - 1) * 40 + ia0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iac_n = ia0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iac_n <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_c) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_j = ix0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c_n = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_k = (ROPOD_4Wheel_TdistZMPC_cntr_B.iac_n +
        m) - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ia_a = ROPOD_4Wheel_TdistZMPC_cntr_B.iac_n;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_a <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.d_k) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_n +=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_a - 1] *
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_j - 1];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_j++;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ia_a++;
      }

      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_ho] +=
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_n;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_ho++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iac_n += 40;
    }
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cnt_xger(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[40], real_T A[1600], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jA_oy = ia0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.jy_l = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.j_g = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_g <= n) {
      if (y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy_l] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.temp_o =
          y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy_l] * alpha1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_lu = ix0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_d = m +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jA_oy;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_dv =
          ROPOD_4Wheel_TdistZMPC_cntr_B.jA_oy;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_dv + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_d) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_dv] +=
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_lu - 1] *
            ROPOD_4Wheel_TdistZMPC_cntr_B.temp_o;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ix_lu++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_dv++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jy_l++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.jA_oy += 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_g++;
    }
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_xzlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40])
{
  if (tau != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j = m;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f1 = iv0 + m;
    while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j > 0) &&
           (C[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f1 - 2] == 0.0)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j--;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f1--;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f1 = ROPOD_4Wheel_TdistZMPC_c_ilazlc
      (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j, n, C, ic0);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f1 = 0;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j > 0) {
    ROPOD_4Wheel_TdistZMPC_cn_xgemv(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f1, C, ic0, C, iv0, work);
    ROPOD_4Wheel_TdistZMPC_cnt_xger(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f1, -tau, iv0, work, C, ic0);
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_xgeqrf(real_T A[1600], real_T tau[40])
{
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.work_a[0], 0, 40U * sizeof(real_T));
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_if = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_if < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_if++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c = ROPOD_4Wheel_TdistZMPC_cntr_B.i_if *
      40 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_if;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_if + 1 < 40) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_p =
        A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c];
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_p = ROPOD_4Wheel_TdistZMPC__xzlarfg(40 -
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_if,
        &ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_p, A,
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c + 2);
      tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_if] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_p;
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_p;
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_p =
        A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c];
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c] = 1.0;
      ROPOD_4Wheel_TdistZMPC_c_xzlarf(40 - ROPOD_4Wheel_TdistZMPC_cntr_B.i_if,
        39 - ROPOD_4Wheel_TdistZMPC_cntr_B.i_if,
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c + 1,
        tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_if], A,
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i_if +
         (ROPOD_4Wheel_TdistZMPC_cntr_B.i_if + 1) * 40) + 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.work_a);
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_c] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_p;
    } else {
      tau[39] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_xzlarf_k(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40])
{
  if (tau != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o = m;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f = iv0 + m;
    while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o > 0) &&
           (C[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f - 2] == 0.0)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o--;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f--;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f = ROPOD_4Wheel_TdistZMPC_c_ilazlc
      (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o, n, C, ic0);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f = 0;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o > 0) {
    ROPOD_4Wheel_TdistZMPC_cn_xgemv(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f, C, ic0, C, iv0, work);
    ROPOD_4Wheel_TdistZMPC_cnt_xger(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_o,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_f, -tau, iv0, work, C, ic0);
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xscal(int32_T n, real_T a, real_T x[1600],
  int32_T ix0)
{
  ROPOD_4Wheel_TdistZMPC_cntr_B.b_e = (ix0 + n) - 1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_mx = ix0;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_mx <= ROPOD_4Wheel_TdistZMPC_cntr_B.b_e)
  {
    x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_mx - 1] *= a;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_mx++;
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cntr_qr(const real_T A[1600], real_T Q[1600],
  real_T R[1600])
{
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[0], &A[0], 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_c_xgeqrf(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A,
    ROPOD_4Wheel_TdistZMPC_cntr_B.tau_j);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr + 1 <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d + 1) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr + 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d +
        ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr];
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr = ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d
      + 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr + 1 < 41) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr + 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.work_f[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d] =
      0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d = 39;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr = 39;
       ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr >= 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr--) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_g = ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr *
      40 + ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr + 1 < 40) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_g] =
        1.0;
      ROPOD_4Wheel_TdistZMPC_xzlarf_k(40 - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr,
        39 - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_g + 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.tau_j[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A, ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_g
        + 41, ROPOD_4Wheel_TdistZMPC_cntr_B.work_f);
      ROPOD_4Wheel_TdistZMPC_cn_xscal(39 - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr,
        -ROPOD_4Wheel_TdistZMPC_cntr_B.tau_j[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A, ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_g
        + 2);
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_g] =
      1.0 -
      ROPOD_4Wheel_TdistZMPC_cntr_B.tau_j[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d];
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_j_c = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_j_c <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_pr) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_g -
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_j_c] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c_j_c++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d--;
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d++) {
    memcpy(&Q[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d * 40],
           &ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_d
           * 40], 40U * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZM_KWIKfactor(const real_T Ac[4080], const
  int16_T iC[102], int16_T nA, const real_T Linv[1600], real_T RLinv[1600],
  real_T D[1600], real_T H[1600])
{
  real_T Status;
  int32_T exitg1;
  Status = 1.0;
  memset(&RLinv[0], 0, 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a <= nA) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i7 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i7 <
         40; ROPOD_4Wheel_TdistZMPC_cntr_B.i7++) {
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.i7 + 40 *
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a - 1)] = 0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_k = ROPOD_4Wheel_TdistZMPC_cntr_B.i_a - 1;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i7 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i7 <
         40; ROPOD_4Wheel_TdistZMPC_cntr_B.i7++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = ROPOD_4Wheel_TdistZMPC_cntr_B.i7 + 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_k;
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i8 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i8 < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i8++) {
        RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] = Ac
          [(iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_a - 1] + 102 *
            ROPOD_4Wheel_TdistZMPC_cntr_B.i8) - 1] * Linv[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i8 + ROPOD_4Wheel_TdistZMPC_cntr_B.i7] +
          RLinv[40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_k +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i7];
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_a++;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_qr(RLinv, ROPOD_4Wheel_TdistZMPC_cntr_B.QQ,
    ROPOD_4Wheel_TdistZMPC_cntr_B.RR);
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = 1;
  do {
    exitg1 = 0;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a <= nA) {
      if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.RR
               [((ROPOD_4Wheel_TdistZMPC_cntr_B.i_a - 1) * 40 +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_a) - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_a++;
      }
    } else {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_a < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_a++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_k = ROPOD_4Wheel_TdistZMPC_cntr_B.i_a +
          1;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_h = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_h < 40;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_h++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = ROPOD_4Wheel_TdistZMPC_cntr_B.j_h
            + 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.d2 = 0.0;
          for (ROPOD_4Wheel_TdistZMPC_cntr_B.i7 = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i7 < 40;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i7++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.d2 += Linv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i_k - 1) * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i7] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.QQ
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j_m - 1) * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i7];
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i_a +
            40 * ROPOD_4Wheel_TdistZMPC_cntr_B.j_h] =
            ROPOD_4Wheel_TdistZMPC_cntr_B.d2;
        }
      }

      memset(&RLinv[0], 0, 1600U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = nA;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a > 0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i7 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_a - 1;
        RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_a + 40 *
               ROPOD_4Wheel_TdistZMPC_cntr_B.i7) - 1] = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_h = ROPOD_4Wheel_TdistZMPC_cntr_B.i_a;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_h <= nA) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = ROPOD_4Wheel_TdistZMPC_cntr_B.j_h
            - 1;
          RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_a + 40 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.j_m) - 1] /=
            ROPOD_4Wheel_TdistZMPC_cntr_B.RR[((ROPOD_4Wheel_TdistZMPC_cntr_B.i_a
            - 1) * 40 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_a) - 1];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_h++;
        }

        if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a > 1) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_h = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_h <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i7) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_a;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o <= nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.j_m =
                ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.i8 =
                ROPOD_4Wheel_TdistZMPC_cntr_B.j_m * 40;
              RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_h + 40 *
                     ROPOD_4Wheel_TdistZMPC_cntr_B.j_m) - 1] = RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i8 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_h) - 1] -
                ROPOD_4Wheel_TdistZMPC_cntr_B.RR
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i7 * 40 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_h) - 1] * RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i8 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.i_a) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.j_h++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = (int16_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.i7;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_a < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_a++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_h = (int16_T)
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a + 1);
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_h <= 40) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i7 = ROPOD_4Wheel_TdistZMPC_cntr_B.j_h -
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = ROPOD_4Wheel_TdistZMPC_cntr_B.i_a
            + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i7;
          H[ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o = (int16_T)(nA + 1);
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o <= 40) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i8 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o - 1) * 40;
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] = H
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j_h - 1) * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_a] -
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[(ROPOD_4Wheel_TdistZMPC_cntr_B.i8
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_h) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i8
              + ROPOD_4Wheel_TdistZMPC_cntr_B.i_a];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o++;
          }

          H[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_h + 40 *
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_a) - 1] =
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.i7 * 40 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_a];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_h++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_a <= nA) {
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_h = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_h < 40;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_h++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i7 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_a -
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = ROPOD_4Wheel_TdistZMPC_cntr_B.j_h
            + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i7;
          D[ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_a;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o <= nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i8 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o - 1) * 40;
            D[ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] = RLinv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i8 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_a) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i8
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_h] +
              D[ROPOD_4Wheel_TdistZMPC_cntr_B.i7 * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.j_h];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_o++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_a++;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_Tdi_DropConstraint(int16_T kDrop, int16_T iA[102],
  int16_T *nA, int16_T iC[102])
{
  iA[iC[kDrop - 1] - 1] = 0;
  if (kDrop < *nA) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i20 = *nA - 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i20 < -32768) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i20 = -32768;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_kb = kDrop;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_kb <= (int16_T)
           ROPOD_4Wheel_TdistZMPC_cntr_B.i20) {
      iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_kb - 1] =
        iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_kb];
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_kb++;
    }
  }

  iC[*nA - 1] = 0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.i20 = *nA - 1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.i20 < -32768) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i20 = -32768;
  }

  *nA = (int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.i20;
}

// Function for MATLAB Function: '<S44>/Zone MPC'
static void ROPOD_4Wheel_TdistZ_mpcqpsolver(const real_T Linv[1600], const
  real_T f[40], const real_T A[4080], const real_T b[102], const boolean_T iA0
  [102], real_T x[40], real_T *status, boolean_T iA[102])
{
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  boolean_T exitg4;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c =
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq + 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c]
        = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c]
          = Linv[40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j] * Linv[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j] +
          ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
      }
    }
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c = 1;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 102;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] =
      iA0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
    ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] =
      0.0;
  }

  memset(&x[0], 0, 40U * sizeof(real_T));
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.r_d[0], 0, 40U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.rMin_m = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_h = false;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 102;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] =
      1.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] = 0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 = 0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f < 102;
       ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f++) {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f]
        == 1) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 +
        1;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 32767;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 = (int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[(int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq - 1] = (int16_T)
        (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f + 1);
    }
  }

  guard1 = false;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 > 0) {
    memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[0], 0, 80U * sizeof(real_T));
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] =
        f[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
        40] = 0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_p = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 32767;
    }

    if ((int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 50) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = (int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 50;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.q_a = (uint16_T)
      (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f / 10U);
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_x_h = (uint16_T)((uint32_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f - ROPOD_4Wheel_TdistZMPC_cntr_B.q_a *
      10);
    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.b_x_h > 0) &&
        (ROPOD_4Wheel_TdistZMPC_cntr_B.b_x_h >= 5)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.q_a++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n = false;
    do {
      exitg3 = 0;
      if ((!ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_p) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 > 0) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c <= 200)) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h = ROPOD_4Wheel_TdistZM_KWIKfactor
          (A, ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n,
           ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0, Linv,
           ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv, ROPOD_4Wheel_TdistZMPC_cntr_B.D,
           ROPOD_4Wheel_TdistZMPC_cntr_B.H);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h < 0.0) {
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c = -2;
            exitg3 = 2;
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 = 0;
            memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o[0], 0, 102U * sizeof
                   (int16_T));
            memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[0], 0, 102U * sizeof
                   (int16_T));
            ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n = true;
          }
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f - 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq
              - 1] =
              b[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m]
              - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq =
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o + 40 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m) - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.U[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                = 0.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m = 1;
              while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m <=
                     ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j =
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m - 1) * 40;
                ROPOD_4Wheel_TdistZMPC_cntr_B.U[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                  = ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o) - 1] *
                  ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f) - 1] +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.U
                  [((ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f - 1) * 40 +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o) - 1];
                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m++;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.U
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f + 40 *
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o - 1)) - 1] =
                ROPOD_4Wheel_TdistZMPC_cntr_B.U
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m * 40 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f++;
          }

          for (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f < 40;
               ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f + 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k +=
                ROPOD_4Wheel_TdistZMPC_cntr_B.H[(40 *
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f]
              = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f]
                += ROPOD_4Wheel_TdistZMPC_cntr_B.D
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o - 1) * 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq
                - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o++;
            }
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k +=
                ROPOD_4Wheel_TdistZMPC_cntr_B.D
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f - 1) * 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m
              - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j =
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i6 > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m
                - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.U
                [((ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o - 1) * 40 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i6
                - 1] +
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_j
                - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h = -1.0E-12;
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = 0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n
              [ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f - 1] - 1] =
              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m
              - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 32767;
            }

            if ((ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m
                 - 1] < ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h) &&
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0)) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o =
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h =
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq
                - 1];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f++;
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o <= 0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_p = true;
            memcpy(&x[0], &ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_b[0], 40U * sizeof
                   (real_T));
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c++;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c >
                ROPOD_4Wheel_TdistZMPC_cntr_B.q_a) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 = 0;
              memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o[0], 0, 102U * sizeof
                     (int16_T));
              memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[0], 0, 102U * sizeof
                     (int16_T));
              ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n = true;
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n
                [ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o - 1] - 1] = 0.0;
              ROPOD_4Wheel_Tdi_DropConstraint
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o,
                 &ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n);
            }
          }
        }
      } else {
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 <= 0) {
          memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[0], 0, 102U * sizeof
                 (real_T));
          ROPOD_4Wheel_Tdis_Unconstrained(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv, f,
            x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Tdis_Unconstrained(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv, f, x);
    guard1 = true;
  }

  if (guard1) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h = ROPOD_4Wheel_TdistZMPC_cnt_norm(x);
    do {
      exitg2 = 0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c <= 200) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c = -1.0E-6;
        ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 0;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o < 102;
             ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o++) {
          if (!ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_h) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o + 1;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.A_b[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                = A[(102 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
                     ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m) - 1] *
                x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_abs(ROPOD_4Wheel_TdistZMPC_cntr_B.A_b,
              ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e);
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k =
              ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[0];
            if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[0])) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 2;
              exitg4 = false;
              while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m <
                                   41)) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m;
                if (!rtIsNaN
                    (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m
                     - 1])) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m
                    - 1];
                  exitg4 = true;
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m++;
                }
              }
            }

            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40) {
              while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq + 1 < 41) {
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                    > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++;
              }
            }

            if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_p[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o]
                   > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k) || rtIsNaN
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k))) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_p[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o]
                = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
            }
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o]
              == 0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o + 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k += A[(102 *
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m) - 1] *
                x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k -
               b[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o]) /
              ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_p[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o];
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k <
                ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c =
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = (int16_T)
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o + 1);
            }
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_h = true;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f <= 0) {
          exitg2 = 1;
        } else {
          do {
            exitg1 = 0;
            if ((ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f > 0) &&
                (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c <= 200)) {
              guard2 = false;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 == 0) {
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                    = 0.0;
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                      += A[(102 * ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m +
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f) - 1] *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[40 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                  }
                }

                guard2 = true;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c =
                  ROPOD_4Wheel_TdistZM_KWIKfactor(A,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0, Linv,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.D,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.H);
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c <= 0.0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c = -2;
                  exitg1 = 1;
                } else {
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m++) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.U[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m
                        + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] =
                        -ROPOD_4Wheel_TdistZMPC_cntr_B.H[40 *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m];
                    }
                  }

                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                      = 0.0;
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m++) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                        += A[(102 * ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m +
                              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f) - 1] *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.U[40 *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                    }
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = 1;
                  while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o <=
                         ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k = 0.0;
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k += A[(102 *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f) - 1] *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.D
                        [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o - 1) * 40 +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                    }

                    ROPOD_4Wheel_TdistZMPC_cntr_B.r_d[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o
                      - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o++;
                  }

                  guard2 = true;
                }
              }

              if (guard2) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = 0;
                ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c = 0.0;
                ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_p = true;
                ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n = true;
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 > 0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m = 1;
                  exitg4 = false;
                  while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m <=
                                       ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0)) {
                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.r_d[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m
                        - 1] >= 1.0E-12) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n = false;
                      exitg4 = true;
                    } else {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m++;
                    }
                  }
                }

                if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 == 0) ||
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n)) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m = 1;
                  while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m <=
                         ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m - 1;
                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.r_d[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                        > 1.0E-12) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k =
                        ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n
                        [ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] - 1] /
                        ROPOD_4Wheel_TdistZMPC_cntr_B.r_d[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m
                        - 1];
                      if ((ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o == 0) ||
                          (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k <
                           ROPOD_4Wheel_TdistZMPC_cntr_B.rMin_m)) {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.rMin_m =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m;
                      }
                    }

                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m++;
                  }

                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o > 0) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.rMin_m;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_p = false;
                  }
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k = 0.0;
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k += A[(102 *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f) - 1] *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                }

                if (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k <= 0.0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k = 0.0;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n = true;
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.t_p = 0.0;
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_p += A[(102 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f) - 1] *
                      x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k =
                    (b[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f - 1] -
                     ROPOD_4Wheel_TdistZMPC_cntr_B.t_p) /
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n = false;
                }

                if (ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_p &&
                    ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c = -1;
                  exitg1 = 1;
                } else {
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_p =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c;
                  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_p) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_p =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
                  } else if ((ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c <
                              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k) || rtIsNaN
                             (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k)) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_p =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c;
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_p =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k;
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m = 1;
                  while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m <=
                         ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m - 1;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                      - 1;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m]
                      -=
                      ROPOD_4Wheel_TdistZMPC_cntr_B.r_d[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                      * ROPOD_4Wheel_TdistZMPC_cntr_B.t_p;
                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n
                        [ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m - 1] - 1] < 0.0)
                    {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m]
                        = 0.0;
                    }

                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m++;
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.lam_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f
                    - 1] += ROPOD_4Wheel_TdistZMPC_cntr_B.t_p;
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.t_p ==
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c) {
                    ROPOD_4Wheel_Tdi_DropConstraint
                      (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o,
                       ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o,
                       &ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0,
                       ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n);
                  }

                  if (!ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_n) {
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                      x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] +=
                        ROPOD_4Wheel_TdistZMPC_cntr_B.t_p *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                    }

                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.t_p ==
                        ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_k) {
                      if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 == 40) {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c = -1;
                        exitg1 = 1;
                      } else {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 + 1;
                        if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq > 32767) {
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 32767;
                        }

                        ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j0 = (int16_T)
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[(int16_T)
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq - 1] =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = (int16_T)
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
                        exitg4 = false;
                        while ((!exitg4) &&
                               (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o > 1)) {
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o - 1;
                          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o - 2;
                          if (ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                              >
                              ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m])
                          {
                            exitg4 = true;
                          } else {
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m =
                              ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o
                              - 1];
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                              =
                              ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o
                              - 2];
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_m]
                              = ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_m;
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_o = (int16_T)
                              ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq;
                          }
                        }

                        ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f
                          - 1] = 1;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_f = 0;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c++;
                      }
                    } else {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c++;
                    }
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c++;
                  }
                }
              }
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c =
                ROPOD_4Wheel_TdistZMPC_cnt_norm(x);
              if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c -
                       ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h) > 0.001) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_h =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_c;
                ROPOD_4Wheel_TdistZMPC_cn_abs_p(b,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_l);
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 102;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                      > 1.0) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                      =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq];
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
                      = 1.0;
                  }
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_h = false;
              }

              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = 1;
          }
        }
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c = 0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }

  *status = ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp_c;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq < 102;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq++) {
    iA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq] =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA_o[ROPOD_4Wheel_TdistZMPC_cntr_B.i_cq]
       != 0);
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static int32_T ROPOD_4Wheel_TdistZMPC_xpotrf_h(real_T A[1600])
{
  int32_T info;
  boolean_T exitg1;
  info = 0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.j_c = 0;
  exitg1 = false;
  while ((!exitg1) && (ROPOD_4Wheel_TdistZMPC_cntr_B.j_c + 1 < 41)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jj = ROPOD_4Wheel_TdistZMPC_cntr_B.j_c * 40 +
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ajj = 0.0;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.j_c < 1)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p = ROPOD_4Wheel_TdistZMPC_cntr_B.j_c;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_p = ROPOD_4Wheel_TdistZMPC_cntr_B.j_c;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_a = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_a <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_c) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.ajj +=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p] *
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_p];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p += 40;
        ROPOD_4Wheel_TdistZMPC_cntr_B.iy_p += 40;
        ROPOD_4Wheel_TdistZMPC_cntr_B.k_a++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.ajj = A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.ajj;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.ajj > 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ajj = sqrt(ROPOD_4Wheel_TdistZMPC_cntr_B.ajj);
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj] = ROPOD_4Wheel_TdistZMPC_cntr_B.ajj;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.j_c + 1 < 40) {
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.j_c != 0) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p = ROPOD_4Wheel_TdistZMPC_cntr_B.j_c;
          ROPOD_4Wheel_TdistZMPC_cntr_B.iy_p =
            ((ROPOD_4Wheel_TdistZMPC_cntr_B.j_c - 1) * 40 +
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_c) + 2;
          ROPOD_4Wheel_TdistZMPC_cntr_B.k_a = ROPOD_4Wheel_TdistZMPC_cntr_B.j_c
            + 2;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_a <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iy_p) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_a =
              -A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p];
            ROPOD_4Wheel_TdistZMPC_cntr_B.b_iy =
              ROPOD_4Wheel_TdistZMPC_cntr_B.jj + 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.e_o =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.k_a -
               ROPOD_4Wheel_TdistZMPC_cntr_B.j_c) + 38;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ia_j =
              ROPOD_4Wheel_TdistZMPC_cntr_B.k_a;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_j <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.e_o) {
              A[ROPOD_4Wheel_TdistZMPC_cntr_B.b_iy] +=
                A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_j - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.c_a;
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_iy++;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ia_j++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p += 40;
            ROPOD_4Wheel_TdistZMPC_cntr_B.k_a += 40;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.ajj = 1.0 /
          ROPOD_4Wheel_TdistZMPC_cntr_B.ajj;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p = (ROPOD_4Wheel_TdistZMPC_cntr_B.jj -
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_c) + 40;
        ROPOD_4Wheel_TdistZMPC_cntr_B.jj++;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.jj + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.ix_p) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj] *=
            ROPOD_4Wheel_TdistZMPC_cntr_B.ajj;
          ROPOD_4Wheel_TdistZMPC_cntr_B.jj++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.j_c++;
    } else {
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.jj] = ROPOD_4Wheel_TdistZMPC_cntr_B.ajj;
      info = ROPOD_4Wheel_TdistZMPC_cntr_B.j_c + 1;
      exitg1 = true;
    }
  }

  return info;
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC__xswap_n(real_T x[1600], int32_T ix0, int32_T
  iy0)
{
  ROPOD_4Wheel_TdistZMPC_cntr_B.ix_b = ix0 - 1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.iy = iy0 - 1;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_e = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.k_e <
       40; ROPOD_4Wheel_TdistZMPC_cntr_B.k_e++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.temp_e = x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_b];
    x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_b] = x[ROPOD_4Wheel_TdistZMPC_cntr_B.iy];
    x[ROPOD_4Wheel_TdistZMPC_cntr_B.iy] = ROPOD_4Wheel_TdistZMPC_cntr_B.temp_e;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_b += 40;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy += 40;
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_xgetrf_a(real_T A[1600], int32_T ipiv[40],
  int32_T *info)
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_j = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.j_j <
       40; ROPOD_4Wheel_TdistZMPC_cntr_B.j_j++) {
    ipiv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_j] = 1 +
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_j;
  }

  *info = 0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_j = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.j_j <
       39; ROPOD_4Wheel_TdistZMPC_cntr_B.j_j++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_i = ROPOD_4Wheel_TdistZMPC_cntr_B.j_j * 41;
    ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o = 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h = ROPOD_4Wheel_TdistZMPC_cntr_B.c_i;
    ROPOD_4Wheel_TdistZMPC_cntr_B.smax = fabs
      (A[ROPOD_4Wheel_TdistZMPC_cntr_B.c_i]);
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_n = 2;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_n <= 40 -
           ROPOD_4Wheel_TdistZMPC_cntr_B.j_j) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.s_g = fabs
        (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h]);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.s_g > ROPOD_4Wheel_TdistZMPC_cntr_B.smax)
      {
        ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o = ROPOD_4Wheel_TdistZMPC_cntr_B.k_n;
        ROPOD_4Wheel_TdistZMPC_cntr_B.smax = ROPOD_4Wheel_TdistZMPC_cntr_B.s_g;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.k_n++;
    }

    if (A[(ROPOD_4Wheel_TdistZMPC_cntr_B.c_i +
           ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o) - 1] != 0.0) {
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o - 1 != 0) {
        ipiv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_j] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_j + ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o;
        ROPOD_4Wheel_TdistZMPC__xswap_n(A, ROPOD_4Wheel_TdistZMPC_cntr_B.j_j + 1,
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_j + ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o);
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_i -
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_j) + 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h = ROPOD_4Wheel_TdistZMPC_cntr_B.c_i + 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h + 1 <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o) {
        A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h] /=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.c_i];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h++;
      }
    } else {
      *info = ROPOD_4Wheel_TdistZMPC_cntr_B.j_j + 1;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o = ROPOD_4Wheel_TdistZMPC_cntr_B.c_i;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h = ROPOD_4Wheel_TdistZMPC_cntr_B.c_i + 40;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_n = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_n <= 39 -
           ROPOD_4Wheel_TdistZMPC_cntr_B.j_j) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.smax = A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h];
      if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_ix = ROPOD_4Wheel_TdistZMPC_cntr_B.c_i +
          1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.d = (ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o -
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_j) + 80;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_c = 41 +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_c + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.d) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_c] +=
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.b_ix] *
            -ROPOD_4Wheel_TdistZMPC_cntr_B.smax;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_ix++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_c++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h += 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.jA_o += 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_n++;
    }
  }

  if ((*info == 0) && (!(A[1599] != 0.0))) {
    *info = 40;
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC__xtrsm_f(const real_T A[1600], real_T B[1600])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_k = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.j_k <
       40; ROPOD_4Wheel_TdistZMPC_cntr_B.j_k++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_n = 40 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_k;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_hz = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_hz < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_hz++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol_h = 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.k_hz;
      if (B[ROPOD_4Wheel_TdistZMPC_cntr_B.k_hz +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_n] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_b = ROPOD_4Wheel_TdistZMPC_cntr_B.k_hz +
          1;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_b + 1 < 41) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i13 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_b
            + ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_n;
          B[ROPOD_4Wheel_TdistZMPC_cntr_B.i13] -=
            B[ROPOD_4Wheel_TdistZMPC_cntr_B.k_hz +
            ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol_n] *
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_b +
            ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol_h];
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_b++;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_xtrsm_f0(const real_T A[1600], real_T B[1600])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_f0 = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.j_f0 < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.j_f0++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol = 40 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_f0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew = 39;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew >= 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew--) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol = 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew;
      ROPOD_4Wheel_TdistZMPC_cntr_B.i9 = ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew +
        ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol;
      if (B[ROPOD_4Wheel_TdistZMPC_cntr_B.i9] != 0.0) {
        B[ROPOD_4Wheel_TdistZMPC_cntr_B.i9] =
          B[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol] /
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew +
          ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol];
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_nh = 0;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_nh + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.k_ew) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i10 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_nh
            + ROPOD_4Wheel_TdistZMPC_cntr_B.jBcol;
          B[ROPOD_4Wheel_TdistZMPC_cntr_B.i10] -=
            B[ROPOD_4Wheel_TdistZMPC_cntr_B.i9] *
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_nh +
            ROPOD_4Wheel_TdistZMPC_cntr_B.kAcol];
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_nh++;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZM_mldivide_m(const real_T A[1600], real_T B[1600])
{
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_f[0], &A[0], 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_xgetrf_a(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_f,
    ROPOD_4Wheel_TdistZMPC_cntr_B.ipiv, &ROPOD_4Wheel_TdistZMPC_cntr_B.info);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.info = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.info < 39;
       ROPOD_4Wheel_TdistZMPC_cntr_B.info++) {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.info + 1 !=
        ROPOD_4Wheel_TdistZMPC_cntr_B.ipiv[ROPOD_4Wheel_TdistZMPC_cntr_B.info])
    {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ip =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ipiv[ROPOD_4Wheel_TdistZMPC_cntr_B.info] -
        1;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.xj = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.xj < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.xj++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.temp_a = B[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj + ROPOD_4Wheel_TdistZMPC_cntr_B.info];
        B[ROPOD_4Wheel_TdistZMPC_cntr_B.info + 40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj] = B[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj + ROPOD_4Wheel_TdistZMPC_cntr_B.ip];
        B[ROPOD_4Wheel_TdistZMPC_cntr_B.ip + 40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.xj] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.temp_a;
      }
    }
  }

  ROPOD_4Wheel_TdistZMPC__xtrsm_f(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_f, B);
  ROPOD_4Wheel_TdistZMPC_xtrsm_f0(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_f, B);
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static boolean_T ROPOD_4Wheel_Tdis_ifWhileCond_m(const boolean_T x[102])
{
  boolean_T y;
  boolean_T exitg1;
  y = true;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_jb = 1;
  exitg1 = false;
  while ((!exitg1) && (ROPOD_4Wheel_TdistZMPC_cntr_B.k_jb < 103)) {
    if (!x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_jb - 1]) {
      y = false;
      exitg1 = true;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_jb++;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_Td_Unconstrained_f(const real_T Hinv[1600], const
  real_T f[40], real_T x[40])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_j3 = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_j3 < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_j3++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_f = ROPOD_4Wheel_TdistZMPC_cntr_B.i_j3 + 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.d4 = 0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i16 = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i16 < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i16++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.d4 += -Hinv[(40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i16 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_f) -
        1] * f[ROPOD_4Wheel_TdistZMPC_cntr_B.i16];
    }

    x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_j3] = ROPOD_4Wheel_TdistZMPC_cntr_B.d4;
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC_c_norm_i(const real_T x[40])
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_m = 3.3121686421112381E-170;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_p = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.k_p <
       40; ROPOD_4Wheel_TdistZMPC_cntr_B.k_p++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_p]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_m) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_kb = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_m
        / ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_kb *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_kb + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_m =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_kb = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a
        / ROPOD_4Wheel_TdistZMPC_cntr_B.scale_m;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_kb *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_kb;
    }
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_m * sqrt(y);
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_abs_i(const real_T x[40], real_T y[40])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_jy = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_jy < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_jy++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_jy] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_jy]);
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_abs_ig(const real_T x[102], real_T y[102])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_ee = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_ee < 102;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_ee++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ee] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ee]);
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC__xnrm2_k(int32_T n, const real_T x[1600],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale = 3.3121686421112381E-170;
      ROPOD_4Wheel_TdistZMPC_cntr_B.kend = (ix0 + n) - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_g = ix0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_g <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.kend) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h = fabs
          (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_g - 1]);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h >
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_m =
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale /
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h;
          y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_m *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_m + 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_m =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h /
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale;
          y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_m *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_m;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.k_g++;
      }

      y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale * sqrt(y);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMP_xzlarfg_i(int32_T n, real_T *alpha1, real_T
  x[1600], int32_T ix0)
{
  real_T tau;
  tau = 0.0;
  if (!(n <= 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l = ROPOD_4Wheel_TdistZMPC__xnrm2_k(n -
      1, x, ix0);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l != 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l = ROPOD_4Wheel_Tdis_rt_hypotd_snf
        (*alpha1, ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l);
      if (*alpha1 >= 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l =
          -ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l;
      }

      if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l) < 1.0020841800044864E-292)
      {
        ROPOD_4Wheel_TdistZMPC_cntr_B.knt_o = 0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k = (ix0 + n) - 2;
        do {
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt_o++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k = ix0;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.b_k) {
            x[ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1] *= 9.9792015476736E+291;
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l) >=
                   1.0020841800044864E-292));

        ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l = ROPOD_4Wheel_Tdis_rt_hypotd_snf(*
          alpha1, ROPOD_4Wheel_TdistZMPC__xnrm2_k(n - 1, x, ix0));
        if (*alpha1 >= 0.0) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l =
            -ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l;
        }

        tau = (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l - *alpha1) /
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l;
        *alpha1 = 1.0 / (*alpha1 - ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l);
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k = (ix0 + n) - 2;
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_k = ix0;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_k) {
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1] *= *alpha1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k = 1;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.b_k <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.knt_o) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l *= 1.0020841800044864E-292;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_k++;
        }

        *alpha1 = ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l;
      } else {
        tau = (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l - *alpha1) /
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l;
        *alpha1 = 1.0 / (*alpha1 - ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l);
        ROPOD_4Wheel_TdistZMPC_cntr_B.knt_o = (ix0 + n) - 2;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_k = ix0;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.b_k <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.knt_o) {
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.b_k - 1] *= *alpha1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_k++;
        }

        *alpha1 = ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm_l;
      }
    }
  }

  return tau;
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static int32_T ROPOD_4Wheel_TdistZMPC_ilazlc_p(int32_T m, int32_T n, const
  real_T A[1600], int32_T ia0)
{
  int32_T j;
  int32_T exitg1;
  boolean_T exitg2;
  j = n;
  exitg2 = false;
  while ((!exitg2) && (j > 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_jc = (j - 1) * 40 + ia0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ia_c = ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_jc;
    do {
      exitg1 = 0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_c <=
          (ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_jc + m) - 1) {
        if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_c - 1] != 0.0) {
          exitg1 = 1;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.ia_c++;
        }
      } else {
        j--;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }

  return j;
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC__xgemv_e(int32_T m, int32_T n, const real_T
  A[1600], int32_T ia0, const real_T x[1600], int32_T ix0, real_T y[40])
{
  if (n != 0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_a = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iy_a <= n) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_a - 1] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_a++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_a = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_il = (n - 1) * 40 + ia0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iac = ia0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iac <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_il) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_bs = ix0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c_m = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_f = (ROPOD_4Wheel_TdistZMPC_cntr_B.iac + m)
        - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ji = ROPOD_4Wheel_TdistZMPC_cntr_B.iac;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ji <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.d_f) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_m +=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ji - 1] *
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_bs - 1];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_bs++;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ia_ji++;
      }

      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_a] += ROPOD_4Wheel_TdistZMPC_cntr_B.c_m;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_a++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iac += 40;
    }
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_xger_a(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[40], real_T A[1600], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jA_l = ia0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.jy_i = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.j_fc = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_fc <= n) {
      if (y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy_i] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.temp_p =
          y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy_i] * alpha1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_k = ix0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_a = m +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jA_l;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_d = ROPOD_4Wheel_TdistZMPC_cntr_B.jA_l;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_d + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_a) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_d] +=
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_k - 1] *
            ROPOD_4Wheel_TdistZMPC_cntr_B.temp_p;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ix_k++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ijA_d++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jy_i++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.jA_l += 40;
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_fc++;
    }
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_xzlarf_c(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40])
{
  if (tau != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e = m;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_e = iv0 + m;
    while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e > 0) &&
           (C[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_e - 2] == 0.0)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e--;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_e--;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_e = ROPOD_4Wheel_TdistZMPC_ilazlc_p
      (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e, n, C, ic0);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_e = 0;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e > 0) {
    ROPOD_4Wheel_TdistZMPC__xgemv_e(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_e, C, ic0, C, iv0, work);
    ROPOD_4Wheel_TdistZMPC_c_xger_a(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_e,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_e, -tau, iv0, work, C, ic0);
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_xgeqrf_i(real_T A[1600], real_T tau[40])
{
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.work_b[0], 0, 40U * sizeof(real_T));
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3 = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3 < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k = ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3 *
      40 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3 + 1 < 40) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_h =
        A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k];
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_o = ROPOD_4Wheel_TdistZMP_xzlarfg_i(40 -
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3,
        &ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_h, A,
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k + 2);
      tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_o;
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_h;
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_h =
        A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k];
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k] = 1.0;
      ROPOD_4Wheel_TdistZMPC_xzlarf_c(40 - ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3,
        39 - ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3,
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k + 1,
        tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3], A,
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3 +
         (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n3 + 1) * 40) + 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.work_b);
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i_k] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp_h;
    } else {
      tau[39] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMP_xzlarf_cv(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40])
{
  if (tau != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n = m;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_i = iv0 + m;
    while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n > 0) &&
           (C[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_i - 2] == 0.0)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n--;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_i--;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_i = ROPOD_4Wheel_TdistZMPC_ilazlc_p
      (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n, n, C, ic0);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_i = 0;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n > 0) {
    ROPOD_4Wheel_TdistZMPC__xgemv_e(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_i, C, ic0, C, iv0, work);
    ROPOD_4Wheel_TdistZMPC_c_xger_a(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_n,
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_i, -tau, iv0, work, C, ic0);
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC__xscal_i(int32_T n, real_T a, real_T x[1600],
  int32_T ix0)
{
  ROPOD_4Wheel_TdistZMPC_cntr_B.b_f = (ix0 + n) - 1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_gd = ix0;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_gd <= ROPOD_4Wheel_TdistZMPC_cntr_B.b_f)
  {
    x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_gd - 1] *= a;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_gd++;
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cnt_qr_p(const real_T A[1600], real_T Q[1600],
  real_T R[1600])
{
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[0], &A[0], 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_xgeqrf_i(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c,
    ROPOD_4Wheel_TdistZMPC_cntr_B.tau);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p + 1 <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p + 1) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p + 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p +
        ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p];
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p = ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p +
      1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p + 1 < 41) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p + 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.work[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p] =
      0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p = 39;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p = 39;
       ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p >= 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p--) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_n = ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p *
      40 + ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p + 1 < 40) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_n] =
        1.0;
      ROPOD_4Wheel_TdistZMP_xzlarf_cv(40 - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p,
        39 - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_n + 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.tau[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_n + 41,
        ROPOD_4Wheel_TdistZMPC_cntr_B.work);
      ROPOD_4Wheel_TdistZMPC__xscal_i(39 - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p,
        -ROPOD_4Wheel_TdistZMPC_cntr_B.tau[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_n + 2);
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_n] =
      1.0 -
      ROPOD_4Wheel_TdistZMPC_cntr_B.tau[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p];
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_j = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_j <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.d_i_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii_n -
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_j] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c_j++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p--;
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p < 40;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p++) {
    memcpy(&Q[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p * 40],
           &ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.itau_p
           * 40], 40U * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static real_T ROPOD_4Wheel_Tdist_KWIKfactor_a(const real_T Ac[4080], const
  int16_T iC[102], int16_T nA, const real_T Linv[1600], real_T RLinv[1600],
  real_T D[1600], real_T H[1600])
{
  real_T Status;
  int32_T exitg1;
  Status = 1.0;
  memset(&RLinv[0], 0, 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_on = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on <= nA) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i4 <
         40; ROPOD_4Wheel_TdistZMPC_cntr_B.i4++) {
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.i4 + 40 *
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on - 1)] = 0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = ROPOD_4Wheel_TdistZMPC_cntr_B.i_on - 1;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i4 <
         40; ROPOD_4Wheel_TdistZMPC_cntr_B.i4++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = ROPOD_4Wheel_TdistZMPC_cntr_B.i4 + 40 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c;
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i5 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i5 < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i5++) {
        RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] = Ac
          [(iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_on - 1] + 102 *
            ROPOD_4Wheel_TdistZMPC_cntr_B.i5) - 1] * Linv[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i5 + ROPOD_4Wheel_TdistZMPC_cntr_B.i4] +
          RLinv[40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_c +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i4];
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_on++;
  }

  ROPOD_4Wheel_TdistZMPC_cnt_qr_p(RLinv, ROPOD_4Wheel_TdistZMPC_cntr_B.QQ_g,
    ROPOD_4Wheel_TdistZMPC_cntr_B.RR_m);
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_on = 1;
  do {
    exitg1 = 0;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on <= nA) {
      if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.RR_m
               [((ROPOD_4Wheel_TdistZMPC_cntr_B.i_on - 1) * 40 +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_on) - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_on++;
      }
    } else {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_on < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_on++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = ROPOD_4Wheel_TdistZMPC_cntr_B.i_on +
          1;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz < 40;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz
            + 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.d1 = 0.0;
          for (ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i4 < 40;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i4++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.d1 += Linv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i_c - 1) * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i4] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.QQ_g
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j_f - 1) * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i4];
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.TL_g[ROPOD_4Wheel_TdistZMPC_cntr_B.i_on
            + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz] =
            ROPOD_4Wheel_TdistZMPC_cntr_B.d1;
        }
      }

      memset(&RLinv[0], 0, 1600U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_on = nA;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on > 0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_on -
          1;
        RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_on + 40 *
               ROPOD_4Wheel_TdistZMPC_cntr_B.i4) - 1] = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz = ROPOD_4Wheel_TdistZMPC_cntr_B.i_on;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz <= nA) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz
            - 1;
          RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_on + 40 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.j_f) - 1] /=
            ROPOD_4Wheel_TdistZMPC_cntr_B.RR_m
            [((ROPOD_4Wheel_TdistZMPC_cntr_B.i_on - 1) * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_on) - 1];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz++;
        }

        if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on > 1) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i4) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_on;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e <= nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.j_f =
                ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.i5 =
                ROPOD_4Wheel_TdistZMPC_cntr_B.j_f * 40;
              RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz + 40 *
                     ROPOD_4Wheel_TdistZMPC_cntr_B.j_f) - 1] = RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i5 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz) - 1] -
                ROPOD_4Wheel_TdistZMPC_cntr_B.RR_m
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i4 * 40 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz) - 1] * RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i5 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.i_on) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_on = (int16_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.i4;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_on < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_on++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz = (int16_T)
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on + 1);
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz <= 40) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz
            - 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = ROPOD_4Wheel_TdistZMPC_cntr_B.i_on
            + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i4;
          H[ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e = (int16_T)(nA + 1);
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e <= 40) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i5 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e - 1) * 40;
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] = H
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz - 1) * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_on] -
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL_g
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i5 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL_g[ROPOD_4Wheel_TdistZMPC_cntr_B.i5
              + ROPOD_4Wheel_TdistZMPC_cntr_B.i_on];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e++;
          }

          H[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz + 40 *
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_on) - 1] =
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.i4 * 40 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_on];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.i_on = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_on <= nA) {
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz < 40;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_on
            - 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz
            + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i4;
          D[ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_on;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e <= nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i5 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e - 1) * 40;
            D[ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] = RLinv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i5 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_on) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL_g[ROPOD_4Wheel_TdistZMPC_cntr_B.i5
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz] +
              D[ROPOD_4Wheel_TdistZMPC_cntr_B.i4 * 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.j_iz];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_e++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_on++;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_T_DropConstraint_n(int16_T kDrop, int16_T iA[102],
  int16_T *nA, int16_T iC[102])
{
  iA[iC[kDrop - 1] - 1] = 0;
  if (kDrop < *nA) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i19 = *nA - 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i19 < -32768) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i19 = -32768;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_lg = kDrop;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_lg <= (int16_T)
           ROPOD_4Wheel_TdistZMPC_cntr_B.i19) {
      iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_lg - 1] =
        iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_lg];
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_lg++;
    }
  }

  iC[*nA - 1] = 0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.i19 = *nA - 1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.i19 < -32768) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i19 = -32768;
  }

  *nA = (int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.i19;
}

// Function for MATLAB Function: '<S45>/Zone MPC'
static void ROPOD_4Wheel_Tdis_mpcqpsolver_g(const real_T Linv[1600], const
  real_T f[40], const real_T A[4080], const real_T b[102], const boolean_T iA0
  [102], real_T x[40], real_T *status, boolean_T iA[102])
{
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  boolean_T exitg4;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n <
       40; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp = ROPOD_4Wheel_TdistZMPC_cntr_B.i_n
        + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_c[ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp]
        = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n < 40;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_c[ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp]
          = Linv[40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n] * Linv[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n] +
          ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_c[40 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
      }
    }
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp = 1;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n <
       102; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] =
      iA0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
    ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] = 0.0;
  }

  memset(&x[0], 0, 40U * sizeof(real_T));
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.r[0], 0, 40U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.rMin = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_i = false;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n <
       102; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] = 1.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] = 0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j = 0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m < 102;
       ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m++) {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m]
        == 1) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j + 1;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 32767;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j = (int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iC[(int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n - 1] = (int16_T)
        (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m + 1);
    }
  }

  guard1 = false;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j > 0) {
    memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[0], 0, 80U * sizeof(real_T));
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] =
        f[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n + 40] =
        0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_d = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 32767;
    }

    if ((int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 50) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = (int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 50;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.q_n = (uint16_T)
      (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m / 10U);
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_x_j = (uint16_T)((uint32_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m - ROPOD_4Wheel_TdistZMPC_cntr_B.q_n *
      10);
    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.b_x_j > 0) &&
        (ROPOD_4Wheel_TdistZMPC_cntr_B.b_x_j >= 5)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.q_n++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b = false;
    do {
      exitg3 = 0;
      if ((!ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_d) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j > 0) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp <= 200)) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c = ROPOD_4Wheel_Tdist_KWIKfactor_a
          (A, ROPOD_4Wheel_TdistZMPC_cntr_B.iC,
           ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j, Linv,
           ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_k,
           ROPOD_4Wheel_TdistZMPC_cntr_B.D_c, ROPOD_4Wheel_TdistZMPC_cntr_B.H_b);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c < 0.0) {
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp = -2;
            exitg3 = 2;
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j = 0;
            memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA[0], 0, 102U * sizeof
                   (int16_T));
            memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.iC[0], 0, 102U * sizeof
                   (int16_T));
            ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b = true;
          }
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m - 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n
              - 1] =
              b[ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d]
              - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n =
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i + 40 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d) - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.U_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                = 0.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f = 1;
              while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f <=
                     ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n =
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f - 1) * 40;
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                  = ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_k
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i) - 1] *
                  ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_k
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m) - 1] +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.U_p
                  [((ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m - 1) * 40 +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i) - 1];
                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f++;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.U_p
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m + 40 *
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i - 1)) - 1] =
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_p
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d * 40 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m++;
          }

          for (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m < 40;
               ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m + 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p +=
                ROPOD_4Wheel_TdistZMPC_cntr_B.H_b[(40 *
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m]
              = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m]
                += ROPOD_4Wheel_TdistZMPC_cntr_B.D_c
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i - 1) * 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n
                - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i++;
            }
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p +=
                ROPOD_4Wheel_TdistZMPC_cntr_B.D_c
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m - 1) * 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d
              - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n =
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 40 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i3 > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d
                - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.U_p
                [((ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i - 1) * 40 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i3
                - 1] +
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp_n
                - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c = -1.0E-12;
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = 0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 40 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m
              - 1] - 1] =
              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d
              - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 32767;
            }

            if ((ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d
                 - 1] < ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c) &&
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j)) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i =
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c =
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n
                - 1];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m++;
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i <= 0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_d = true;
            memcpy(&x[0], &ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[0], 40U * sizeof
                   (real_T));
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp++;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp >
                ROPOD_4Wheel_TdistZMPC_cntr_B.q_n) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j = 0;
              memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA[0], 0, 102U * sizeof
                     (int16_T));
              memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.iC[0], 0, 102U * sizeof
                     (int16_T));
              ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b = true;
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC[
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i - 1] - 1] = 0.0;
              ROPOD_4Wheel_T_DropConstraint_n
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA,
                 &ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iC);
            }
          }
        }
      } else {
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j <= 0) {
          memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.lam[0], 0, 102U * sizeof(real_T));
          ROPOD_4Wheel_Td_Unconstrained_f(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_c,
            f, x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Td_Unconstrained_f(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_c, f, x);
    guard1 = true;
  }

  if (guard1) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c = ROPOD_4Wheel_TdistZMPC_c_norm_i(x);
    do {
      exitg2 = 0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp <= 200) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f = -1.0E-6;
        ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 0;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i < 102;
             ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i++) {
          if (!ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_i) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i + 1;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.A_h[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                = A[(102 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
                     ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d) - 1] *
                x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
            }

            ROPOD_4Wheel_TdistZMPC_cn_abs_i(ROPOD_4Wheel_TdistZMPC_cntr_B.A_h,
              ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow);
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p =
              ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[0];
            if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[0])) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 2;
              exitg4 = false;
              while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d <
                                   41)) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d;
                if (!rtIsNaN
                    (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d
                     - 1])) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d
                    - 1];
                  exitg4 = true;
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d++;
                }
              }
            }

            if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40) {
              while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n + 1 < 41) {
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                    > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++;
              }
            }

            if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i]
                   > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p) || rtIsNaN
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p))) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i]
                = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
            }
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i]
              == 0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i + 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p += A[(102 *
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d) - 1] *
                x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p -
               b[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i]) /
              ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i];
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p <
                ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f =
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = (int16_T)
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i + 1);
            }
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_i = true;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m <= 0) {
          exitg2 = 1;
        } else {
          do {
            exitg1 = 0;
            if ((ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m > 0) &&
                (ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp <= 200)) {
              guard2 = false;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j == 0) {
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                    = 0.0;
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                      += A[(102 * ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d +
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m) - 1] *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_c[40 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                  }
                }

                guard2 = true;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f =
                  ROPOD_4Wheel_Tdist_KWIKfactor_a(A,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.iC,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j, Linv,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_k,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.D_c,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.H_b);
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f <= 0.0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp = -2;
                  exitg1 = 1;
                } else {
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d++) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.U_p[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d
                        + 40 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] =
                        -ROPOD_4Wheel_TdistZMPC_cntr_B.H_b[40 *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d];
                    }
                  }

                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                      = 0.0;
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d++) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                        += A[(102 * ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d +
                              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m) - 1] *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.U_p[40 *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                    }
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = 1;
                  while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i <=
                         ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p = 0.0;
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p += A[(102 *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m) - 1] *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.D_c
                        [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i - 1) * 40 +
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                    }

                    ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i
                      - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i++;
                  }

                  guard2 = true;
                }
              }

              if (guard2) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = 0;
                ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f = 0.0;
                ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_d = true;
                ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b = true;
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j > 0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f = 1;
                  exitg4 = false;
                  while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f <=
                                       ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j)) {
                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f
                        - 1] >= 1.0E-12) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b = false;
                      exitg4 = true;
                    } else {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f++;
                    }
                  }
                }

                if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j == 0) ||
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b)) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f = 1;
                  while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f <=
                         ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.i_n =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f - 1;
                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                        > 1.0E-12) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p =
                        ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC
                        [ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] - 1] /
                        ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f
                        - 1];
                      if ((ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i == 0) ||
                          (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p <
                           ROPOD_4Wheel_TdistZMPC_cntr_B.rMin)) {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.rMin =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f;
                      }
                    }

                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f++;
                  }

                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i > 0) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.rMin;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_d = false;
                  }
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p = 0.0;
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p += A[(102 *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m) - 1] *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                }

                if (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p <= 0.0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p = 0.0;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b = true;
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.t_e = 0.0;
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_e += A[(102 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m) - 1] *
                      x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p =
                    (b[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m - 1] -
                     ROPOD_4Wheel_TdistZMPC_cntr_B.t_e) /
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b = false;
                }

                if (ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_d &&
                    ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp = -1;
                  exitg1 = 1;
                } else {
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_e =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f;
                  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible_d) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_e =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
                  } else if ((ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f <
                              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p) || rtIsNaN
                             (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p)) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_e =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f;
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.t_e =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p;
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f = 1;
                  while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f <=
                         ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.i_n =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f - 1;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                      - 1;
                    ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d]
                      -=
                      ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                      * ROPOD_4Wheel_TdistZMPC_cntr_B.t_e;
                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC
                        [ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f - 1] - 1] < 0.0)
                    {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d]
                        = 0.0;
                    }

                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f++;
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m
                    - 1] += ROPOD_4Wheel_TdistZMPC_cntr_B.t_e;
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.t_e ==
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f) {
                    ROPOD_4Wheel_T_DropConstraint_n
                      (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i,
                       ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA,
                       &ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j,
                       ROPOD_4Wheel_TdistZMPC_cntr_B.iC);
                  }

                  if (!ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset_b) {
                    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 40;
                         ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                      x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] +=
                        ROPOD_4Wheel_TdistZMPC_cntr_B.t_e *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                    }

                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.t_e ==
                        ROPOD_4Wheel_TdistZMPC_cntr_B.cVal_p) {
                      if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j == 40) {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp = -1;
                        exitg1 = 1;
                      } else {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j + 1;
                        if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n > 32767) {
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 32767;
                        }

                        ROPOD_4Wheel_TdistZMPC_cntr_B.nA_j = (int16_T)
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.iC[(int16_T)
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n - 1] =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = (int16_T)
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
                        exitg4 = false;
                        while ((!exitg4) &&
                               (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i > 1)) {
                          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i - 1;
                          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i - 2;
                          if (ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                              >
                              ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d])
                          {
                            exitg4 = true;
                          } else {
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f =
                              ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i
                              - 1];
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                              =
                              ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i
                              - 2];
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp_d]
                              = ROPOD_4Wheel_TdistZMPC_cntr_B.iSave_f;
                            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_i = (int16_T)
                              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
                          }
                        }

                        ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m
                          - 1] = 1;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kNext_m = 0;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp++;
                      }
                    } else {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp++;
                    }
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp++;
                  }
                }
              }
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f =
                ROPOD_4Wheel_TdistZMPC_c_norm_i(x);
              if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f -
                       ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c) > 0.001) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0_c =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cMin_f;
                ROPOD_4Wheel_TdistZMPC_c_abs_ig(b,
                  ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1);
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_n < 102;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                      > 1.0) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                      =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n];
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n]
                      = 1.0;
                  }
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed_i = false;
              }

              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = 1;
          }
        }
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp = 0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }

  *status = ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_tmp;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n <
       102; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
    iA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.b_iA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] !=
       0);
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC__xnrm2_h(int32_T n, const real_T x[27],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (n == 1) {
    y = fabs(x[ix0 - 1]);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.scale_ie = 3.3121686421112381E-170;
    ROPOD_4Wheel_TdistZMPC_cntr_B.kend_c = (ix0 + n) - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_h = ix0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_h <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.kend_c) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_oc = fabs
        (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_h - 1]);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_oc >
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_ie) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_m4 =
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_ie /
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_oc;
        y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_m4 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_m4 + 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_ie =
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_oc;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_m4 =
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_oc /
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_ie;
        y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_m4 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_m4;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.k_h++;
    }

    y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_ie * sqrt(y);
  }

  return y;
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_xnrm2_hb(int32_T n, const real_T x[9],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_i = 3.3121686421112381E-170;
  ROPOD_4Wheel_TdistZMPC_cntr_B.kend_j = (ix0 + n) - 1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_o = ix0;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_o <=
         ROPOD_4Wheel_TdistZMPC_cntr_B.kend_j) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_o - 1]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_i) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_k = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_i /
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_k *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_k + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_i =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_k = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o /
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_i;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_k * ROPOD_4Wheel_TdistZMPC_cntr_B.t_k;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.k_o++;
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_i * sqrt(y);
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_xaxpy_er(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[27], int32_T iy0)
{
  if (!((n < 1) || (a == 0.0))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_g = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_d = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_m = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_m <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_d] += a *
        x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_g];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_g++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_d++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_m++;
    }
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC__xaxpy_e(int32_T n, real_T a, const real_T x
  [27], int32_T ix0, real_T y[3], int32_T iy0)
{
  if (!((n < 1) || (a == 0.0))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_lf = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_m4 = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_nt = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_nt <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_m4] += a *
        x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_lf];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_lf++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_m4++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_nt++;
    }
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  ROPOD_4Wheel_TdistZMPC_cntr_B.roe = *b;
  ROPOD_4Wheel_TdistZMPC_cntr_B.absa = fabs(*a);
  ROPOD_4Wheel_TdistZMPC_cntr_B.absb = fabs(*b);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.absa > ROPOD_4Wheel_TdistZMPC_cntr_B.absb) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.roe = *a;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b = ROPOD_4Wheel_TdistZMPC_cntr_B.absa +
    ROPOD_4Wheel_TdistZMPC_cntr_B.absb;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b == 0.0) {
    *s = 0.0;
    *c = 1.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.absa = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ads = ROPOD_4Wheel_TdistZMPC_cntr_B.absa /
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.bds = ROPOD_4Wheel_TdistZMPC_cntr_B.absb /
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b *= sqrt
      (ROPOD_4Wheel_TdistZMPC_cntr_B.ads * ROPOD_4Wheel_TdistZMPC_cntr_B.ads +
       ROPOD_4Wheel_TdistZMPC_cntr_B.bds * ROPOD_4Wheel_TdistZMPC_cntr_B.bds);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.roe < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b =
        -ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b;
    }

    *c = *a / ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b;
    *s = *b / ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absa > ROPOD_4Wheel_TdistZMPC_cntr_B.absb)
    {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absa = *s;
    } else if (*c != 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absa = 1.0 / *c;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absa = 1.0;
    }
  }

  *a = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b;
  *b = ROPOD_4Wheel_TdistZMPC_cntr_B.absa;
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_cn_xdotc(int32_T n, const real_T x[27],
  int32_T ix0, const real_T y[27], int32_T iy0)
{
  real_T d;
  d = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h5 = ix0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.iy_m = iy0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_gm = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_gm <= n) {
    d += x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h5 - 1] *
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_m - 1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_h5++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_m++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_gm++;
  }

  return d;
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[27], int32_T iy0)
{
  if (!(a == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_li = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_kg = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_ic = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_ic <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_kg] += a *
        y[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_li];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_li++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_kg++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_ic++;
    }
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cntr_svd(const real_T A[27], real_T U[3])
{
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[0], &A[0], 27U * sizeof(real_T));
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.e[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.work_l[0] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.work_l[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.work_l[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.apply_transform = false;
  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC__xnrm2_h(3,
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 1);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nrm > 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.apply_transform = true;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[0] < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = -ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.s[0]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.s
        [0];
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 3) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 3) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] /=
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[0];
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[0]++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = -ROPOD_4Wheel_TdistZMPC_cntr_B.s[0];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = 0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.q = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 < 10) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.q;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.apply_transform) {
      ROPOD_4Wheel_TdistZMPC_cn_xaxpy(3, -(ROPOD_4Wheel_TdistZMPC_cn_xdotc(3,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1) / ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[0]), 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1);
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
    ROPOD_4Wheel_TdistZMPC_cntr_B.q++;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_xnrm2_hb(8,
    ROPOD_4Wheel_TdistZMPC_cntr_B.e, 2);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nrm == 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.e[0] = 0.0;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.e[1] < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[0] = -ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.e[0];
    if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.e[0]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.e
        [0];
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] /=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.e[1]++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.e[0] = -ROPOD_4Wheel_TdistZMPC_cntr_B.e[0];
    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 4) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.work_l[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] =
        0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC__xaxpy_e(2,
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 2,
        ROPOD_4Wheel_TdistZMPC_cntr_B.work_l, 2);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC_xaxpy_er(2,
        -ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[1], ROPOD_4Wheel_TdistZMPC_cntr_B.work_l,
        2, ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 2);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.apply_transform = false;
  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC__xnrm2_h(2,
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 5);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nrm > 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.apply_transform = true;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[4] < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = -ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.s[1]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.s
        [1];
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 4;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 6) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 4;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 6) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] /=
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[1];
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[4]++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = -ROPOD_4Wheel_TdistZMPC_cntr_B.s[1];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = 0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.q = 2;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 < 10) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.apply_transform) {
      ROPOD_4Wheel_TdistZMPC_cn_xaxpy(2, -(ROPOD_4Wheel_TdistZMPC_cn_xdotc(2,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 5,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1) / ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[4]), 5,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1);
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
    ROPOD_4Wheel_TdistZMPC_cntr_B.q++;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_xnrm2_hb(7,
    ROPOD_4Wheel_TdistZMPC_cntr_B.e, 3);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nrm == 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.e[1] = 0.0;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.e[2] < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[1] = -ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.e[1];
    if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.e[1]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.e
        [1];
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 2;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 2;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] /=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.e[2]++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.e[1] = -ROPOD_4Wheel_TdistZMPC_cntr_B.e[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 2;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 4) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.work_l[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] =
        0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 2;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC__xaxpy_e(1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 3,
        ROPOD_4Wheel_TdistZMPC_cntr_B.work_l, 3);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 2;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC_xaxpy_er(1,
        -ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[2], ROPOD_4Wheel_TdistZMPC_cntr_B.work_l,
        3, ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 3);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.q = 3;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 < 10) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[3 * ROPOD_4Wheel_TdistZMPC_cntr_B.q +
      2];
    ROPOD_4Wheel_TdistZMPC_cntr_B.q++;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_xnrm2_hb(6,
    ROPOD_4Wheel_TdistZMPC_cntr_B.e, 4);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nrm == 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.e[2] = 0.0;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.e[3] < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[2] = -ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.e[2];
    if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.e[2]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.e
        [2];
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 3;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 3;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] /=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.e[2] = -ROPOD_4Wheel_TdistZMPC_cntr_B.e[2];
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.m = 2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.s[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[8];
  ROPOD_4Wheel_TdistZMPC_cntr_B.s[3] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.e[0];
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.s[0]);
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] /
      ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.e[0] /
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ztest != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.ztest);
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] *= ROPOD_4Wheel_TdistZMPC_cntr_B.rt /
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.e[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
  ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.e[1];
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.s[1]);
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] /
      ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.e[1] /
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ztest != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.ztest);
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.rt /
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm * ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_j[8];
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.e[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
  ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.e[2];
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.s[2] != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.s[2]);
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.s[2] /
      ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.e[2] /
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ztest != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.ztest);
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[3] = ROPOD_4Wheel_TdistZMPC_cntr_B.rt /
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm * 0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.e[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.s[3] != 0.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[3] = (rtNaN);
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.e[3] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 0;
  if ((ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] > ROPOD_4Wheel_TdistZMPC_cntr_B.e[0]) ||
      rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.e[0])) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.s[0];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.e[0];
  }

  if ((ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] > ROPOD_4Wheel_TdistZMPC_cntr_B.e[1]) ||
      rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.e[1])) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = ROPOD_4Wheel_TdistZMPC_cntr_B.s[1];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rt = ROPOD_4Wheel_TdistZMPC_cntr_B.e[1];
  }

  if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.nrm > ROPOD_4Wheel_TdistZMPC_cntr_B.rt) ||
        rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.rt))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
  }

  if ((ROPOD_4Wheel_TdistZMPC_cntr_B.s[2] > ROPOD_4Wheel_TdistZMPC_cntr_B.ztest)
      || rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.ztest)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.s[2];
  }

  if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.nrm > ROPOD_4Wheel_TdistZMPC_cntr_B.ztest)
        || rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.ztest))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
  }

  while ((ROPOD_4Wheel_TdistZMPC_cntr_B.m + 2 > 0) &&
         (!(ROPOD_4Wheel_TdistZMPC_cntr_B.qq >= 75))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.kase = ROPOD_4Wheel_TdistZMPC_cntr_B.m + 1;
    do {
      exitg1 = 0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.q = ROPOD_4Wheel_TdistZMPC_cntr_B.kase;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.kase == 0) {
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs
          (ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.kase -
           1]);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.rt <= (fabs
             (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.kase
              - 1]) + fabs
             (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.kase]))
            * 2.2204460492503131E-16) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.kase - 1]
            = 0.0;
          exitg1 = 1;
        } else if ((ROPOD_4Wheel_TdistZMPC_cntr_B.rt <= 1.0020841800044864E-292)
                   || ((ROPOD_4Wheel_TdistZMPC_cntr_B.qq > 20) &&
                       (ROPOD_4Wheel_TdistZMPC_cntr_B.rt <=
                        2.2204460492503131E-16 *
                        ROPOD_4Wheel_TdistZMPC_cntr_B.nrm))) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.kase - 1]
            = 0.0;
          exitg1 = 1;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.kase--;
        }
      }
    } while (exitg1 == 0);

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.m + 1 ==
        ROPOD_4Wheel_TdistZMPC_cntr_B.kase) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kase = 4;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = ROPOD_4Wheel_TdistZMPC_cntr_B.m + 2;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii = ROPOD_4Wheel_TdistZMPC_cntr_B.m + 2;
      exitg2 = false;
      while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii >=
                           ROPOD_4Wheel_TdistZMPC_cntr_B.kase)) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii ==
            ROPOD_4Wheel_TdistZMPC_cntr_B.kase) {
          exitg2 = true;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.rt = 0.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii <
              ROPOD_4Wheel_TdistZMPC_cntr_B.m + 2) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.rt = fabs
              (ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii
               - 1]);
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii >
              ROPOD_4Wheel_TdistZMPC_cntr_B.kase + 1) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.rt += fabs
              (ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii
               - 2]);
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = fabs
            (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii
             - 1]);
          if ((ROPOD_4Wheel_TdistZMPC_cntr_B.ztest <= 2.2204460492503131E-16 *
               ROPOD_4Wheel_TdistZMPC_cntr_B.rt) ||
              (ROPOD_4Wheel_TdistZMPC_cntr_B.ztest <= 1.0020841800044864E-292))
          {
            ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii -
              1] = 0.0;
            exitg2 = true;
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.d_ii--;
          }
        }
      }

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj ==
          ROPOD_4Wheel_TdistZMPC_cntr_B.kase) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.kase = 3;
      } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.m + 2 ==
                 ROPOD_4Wheel_TdistZMPC_cntr_B.qjj) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.kase = 1;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.kase = 2;
        ROPOD_4Wheel_TdistZMPC_cntr_B.q = ROPOD_4Wheel_TdistZMPC_cntr_B.qjj;
      }
    }

    switch (ROPOD_4Wheel_TdistZMPC_cntr_B.kase) {
     case 1:
      ROPOD_4Wheel_TdistZMPC_cntr_B.rt =
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.m];
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.m] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = ROPOD_4Wheel_TdistZMPC_cntr_B.m;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 >=
             ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
        ROPOD_4Wheel_TdistZMPC_cn_xrotg(&ROPOD_4Wheel_TdistZMPC_cntr_B.ztest,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.rt, &ROPOD_4Wheel_TdistZMPC_cntr_B.sqds,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.smm1);
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 >
            ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.rt =
            ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj -
            1] * -ROPOD_4Wheel_TdistZMPC_cntr_B.smm1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1]
            *= ROPOD_4Wheel_TdistZMPC_cntr_B.sqds;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj--;
      }
      break;

     case 2:
      ROPOD_4Wheel_TdistZMPC_cntr_B.rt =
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q - 1];
      ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q - 1] = 0.0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.m + 2) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q];
        ROPOD_4Wheel_TdistZMPC_cn_xrotg(&ROPOD_4Wheel_TdistZMPC_cntr_B.ztest,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.rt, &ROPOD_4Wheel_TdistZMPC_cntr_B.sqds,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.smm1);
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
        ROPOD_4Wheel_TdistZMPC_cntr_B.rt = -ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q];
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.sqds;
        ROPOD_4Wheel_TdistZMPC_cntr_B.q++;
      }
      break;

     case 3:
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[0] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.m + 1]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[1] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.m]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[2] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.m]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[3] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[4] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
        ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[0];
      if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[0])) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.kase = 2;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.kase < 6)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = ROPOD_4Wheel_TdistZMPC_cntr_B.kase;
          if (!rtIsNaN
              (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[ROPOD_4Wheel_TdistZMPC_cntr_B.kase
               - 1])) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
              ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[ROPOD_4Wheel_TdistZMPC_cntr_B.kase
              - 1];
            exitg2 = true;
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kase++;
          }
        }
      }

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj < 5) {
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 < 6) {
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj]
              > ROPOD_4Wheel_TdistZMPC_cntr_B.ztest) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
              ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_a[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.rt =
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.m + 1] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
      ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 =
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.m] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
      ROPOD_4Wheel_TdistZMPC_cntr_B.emm1 =
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.m] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
      ROPOD_4Wheel_TdistZMPC_cntr_B.sqds =
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest;
      ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 = ((ROPOD_4Wheel_TdistZMPC_cntr_B.smm1
        + ROPOD_4Wheel_TdistZMPC_cntr_B.rt) *
        (ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 - ROPOD_4Wheel_TdistZMPC_cntr_B.rt)
        + ROPOD_4Wheel_TdistZMPC_cntr_B.emm1 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.emm1) / 2.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.emm1 *= ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
      ROPOD_4Wheel_TdistZMPC_cntr_B.emm1 *= ROPOD_4Wheel_TdistZMPC_cntr_B.emm1;
      if ((ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 != 0.0) ||
          (ROPOD_4Wheel_TdistZMPC_cntr_B.emm1 != 0.0)) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.shift = sqrt
          (ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 *
           ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 +
           ROPOD_4Wheel_TdistZMPC_cntr_B.emm1);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 < 0.0) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.shift =
            -ROPOD_4Wheel_TdistZMPC_cntr_B.shift;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.shift = ROPOD_4Wheel_TdistZMPC_cntr_B.emm1
          / (ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 +
             ROPOD_4Wheel_TdistZMPC_cntr_B.shift);
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.shift = 0.0;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.rt = (ROPOD_4Wheel_TdistZMPC_cntr_B.sqds +
        ROPOD_4Wheel_TdistZMPC_cntr_B.rt) * (ROPOD_4Wheel_TdistZMPC_cntr_B.sqds
        - ROPOD_4Wheel_TdistZMPC_cntr_B.rt) +
        ROPOD_4Wheel_TdistZMPC_cntr_B.shift;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest * ROPOD_4Wheel_TdistZMPC_cntr_B.sqds;
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.m + 1) {
        ROPOD_4Wheel_TdistZMPC_cn_xrotg(&ROPOD_4Wheel_TdistZMPC_cntr_B.rt,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.ztest,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.sqds,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.smm1);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj > ROPOD_4Wheel_TdistZMPC_cntr_B.q
            + 1) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 2]
            = ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.rt =
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1]
          * ROPOD_4Wheel_TdistZMPC_cntr_B.sqds +
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1]
          * ROPOD_4Wheel_TdistZMPC_cntr_B.smm1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1]
          * ROPOD_4Wheel_TdistZMPC_cntr_B.sqds -
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1]
          * ROPOD_4Wheel_TdistZMPC_cntr_B.smm1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.smm1
          * ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.sqds;
        ROPOD_4Wheel_TdistZMPC_cn_xrotg(&ROPOD_4Wheel_TdistZMPC_cntr_B.rt,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.ztest,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.sqds,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.smm1);
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
        ROPOD_4Wheel_TdistZMPC_cntr_B.rt =
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1]
          * ROPOD_4Wheel_TdistZMPC_cntr_B.sqds +
          ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj - 1]
          * -ROPOD_4Wheel_TdistZMPC_cntr_B.smm1 +
          ROPOD_4Wheel_TdistZMPC_cntr_B.sqds *
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ztest = ROPOD_4Wheel_TdistZMPC_cntr_B.smm1
          * ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.sqds;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.m] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      break;

     default:
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q] < 0.0)
      {
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
          -ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q];
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1;
      while ((ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 < 4) &&
             (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q] <
              ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qq]))
      {
        ROPOD_4Wheel_TdistZMPC_cntr_B.rt =
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q];
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qq];
        ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.rt;
        ROPOD_4Wheel_TdistZMPC_cntr_B.q = ROPOD_4Wheel_TdistZMPC_cntr_B.qq;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.m--;
      break;
    }
  }

  U[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.s[0];
  U[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.s[1];
  U[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.s[2];
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Td_Unconstrained_n(const real_T Hinv[81], const real_T
  f[9], real_T x[9])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_hn = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_hn < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_hn++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_h = ROPOD_4Wheel_TdistZMPC_cntr_B.i_hn + 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.d3 = 0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i15 = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i15 < 9;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i15++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.d3 += -Hinv[(9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i15 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_h) -
        1] * f[ROPOD_4Wheel_TdistZMPC_cntr_B.i15];
    }

    x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_hn] = ROPOD_4Wheel_TdistZMPC_cntr_B.d3;
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_c_norm_m(const real_T x[9])
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_c = 3.3121686421112381E-170;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.k_i <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.k_i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_f = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_i]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_f >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_c) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_h = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_c /
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_f;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_h *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_h + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_c =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_f;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_h = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_f /
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_c;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_h * ROPOD_4Wheel_TdistZMPC_cntr_B.t_h;
    }
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_c * sqrt(y);
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_abs_d(const real_T x[9], real_T y[9])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_jk = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_jk < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_jk++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_jk] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_jk]);
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_c_abs_d5(const real_T x[21], real_T y[21])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_ga = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_ga < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_ga++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ga] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_ga]);
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMP_xnrm2_hbi(int32_T n, const real_T x[81],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_p = 3.3121686421112381E-170;
      ROPOD_4Wheel_TdistZMPC_cntr_B.kend_h = (ix0 + n) - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_k = ix0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_k <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.kend_h) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_p = fabs
          (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_k - 1]);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_p >
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_p) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_f =
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_p /
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_p;
          y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_f *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_f + 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_p =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_p;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_f =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_p /
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_p;
          y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_f *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_f;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.k_k++;
      }

      y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_p * sqrt(y);
    }
  }

  return y;
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC__xgemv_m(int32_T m, int32_T n, const real_T
  A[81], int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9])
{
  if (n != 0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_j = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iy_j <= n) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_j - 1] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_j++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_j = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_kl = (n - 1) * 9 + ia0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iac_b = ia0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iac_b <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_kl) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_f = ix0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c_l = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_h = (ROPOD_4Wheel_TdistZMPC_cntr_B.iac_b +
        m) - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ia_e = ROPOD_4Wheel_TdistZMPC_cntr_B.iac_b;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_e <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.d_h) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_l +=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_e - 1] *
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_f - 1];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_f++;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ia_e++;
      }

      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_j] += ROPOD_4Wheel_TdistZMPC_cntr_B.c_l;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_j++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iac_b += 9;
    }
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_c_xger_g(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[9], real_T A[81], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jA = ia0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.jy = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.j_a = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_a <= n) {
      if (y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.temp = y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy]
          * alpha1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix = ix0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_g = m + ROPOD_4Wheel_TdistZMPC_cntr_B.jA;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ijA = ROPOD_4Wheel_TdistZMPC_cntr_B.jA;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.ijA + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_g) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ijA] +=
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix - 1] *
            ROPOD_4Wheel_TdistZMPC_cntr_B.temp;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ix++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ijA++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jy++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.jA += 9;
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_a++;
    }
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_xgeqrf_h(real_T A[81], real_T tau[9])
{
  int32_T exitg1;
  boolean_T exitg2;
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.work_af[0], 0, 9U * sizeof(real_T));
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_e = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_e <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.i_e++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_i = ROPOD_4Wheel_TdistZMPC_cntr_B.i_e * 9 +
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_e;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_e + 1 < 9) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i];
      ROPOD_4Wheel_TdistZMPC_cntr_B.b = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm = ROPOD_4Wheel_TdistZMP_xnrm2_hbi(8 -
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_e, A, ROPOD_4Wheel_TdistZMPC_cntr_B.i_i
        + 2);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm = ROPOD_4Wheel_Tdis_rt_hypotd_snf
          (A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i],
           ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm);
        if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] >= 0.0) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm =
            -ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
        }

        if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm) < 1.0020841800044864E-292)
        {
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt = 0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i -
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_e) + 9;
          do {
            ROPOD_4Wheel_TdistZMPC_cntr_B.knt++;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m + 1 <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m) {
              A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m] *= 9.9792015476736E+291;
              ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm *= 9.9792015476736E+291;
            ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp *= 9.9792015476736E+291;
          } while (!(fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm) >=
                     1.0020841800044864E-292));

          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm = ROPOD_4Wheel_Tdis_rt_hypotd_snf
            (ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp,
             ROPOD_4Wheel_TdistZMP_xnrm2_hbi(8 -
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_e, A,
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 2));
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp >= 0.0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm =
              -ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.b = (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm
            - ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp) /
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = 1.0 /
            (ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp -
             ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm);
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i -
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_e) + 9;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m + 1 <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m) {
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m] *=
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.knt) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm *= 1.0020841800044864E-292;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp =
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.b = (ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm
            - A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i]) /
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = 1.0 /
            (A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] -
             ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm);
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt = (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i
            - ROPOD_4Wheel_TdistZMPC_cntr_B.i_e) + 9;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m + 1 <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.knt) {
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m] *=
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp =
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
        }
      }

      tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_e] = ROPOD_4Wheel_TdistZMPC_cntr_B.b;
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i];
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] = 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.knt = ((ROPOD_4Wheel_TdistZMPC_cntr_B.i_e +
        1) * 9 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_e) + 1;
      if (tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_e] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m = 9 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_e;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m =
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i - ROPOD_4Wheel_TdistZMPC_cntr_B.i_e)
          + 8;
        while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m > 0) &&
               (A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m] == 0.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m--;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m--;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m = 8 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_e;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m > 0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_j =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m - 1) * 9 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.knt;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ia_f =
            ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_j;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_f <=
                (ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_j +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m) - 1) {
              if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_f - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ia_f++;
              }
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m = 0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m = 0;
      }

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m > 0) {
        ROPOD_4Wheel_TdistZMPC__xgemv_m(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work_af);
        ROPOD_4Wheel_TdistZMPC_c_xger_g(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_m,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_m,
          -tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_e],
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work_af, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt);
      }

      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
    } else {
      tau[8] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cnt_qr_k(const real_T A[81], real_T Q[81],
  real_T R[81])
{
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[0], &A[0], 81U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_xgeqrf_h(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n,
    ROPOD_4Wheel_TdistZMPC_cntr_B.tau_p);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 1 <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.itau + 1) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau + ROPOD_4Wheel_TdistZMPC_cntr_B.d_i];
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i = ROPOD_4Wheel_TdistZMPC_cntr_B.itau + 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 1 < 10) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.work_p[ROPOD_4Wheel_TdistZMPC_cntr_B.itau] =
      0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.itau = 8;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i = 8; ROPOD_4Wheel_TdistZMPC_cntr_B.d_i >=
       0; ROPOD_4Wheel_TdistZMPC_cntr_B.d_i--) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iaii = (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i * 9
      + ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) + 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 1 < 9) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii - 1]
        = 1.0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.tau_p[ROPOD_4Wheel_TdistZMPC_cntr_B.itau]
          != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv = 9 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.d_i;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc =
          (ROPOD_4Wheel_TdistZMPC_cntr_B.iaii -
           ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) + 7;
        while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv > 0) &&
               (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc]
                == 0.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv--;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc--;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc = 8 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.d_i;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc > 0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.coltop =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc - 1) * 9 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.iaii;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ia =
            ROPOD_4Wheel_TdistZMPC_cntr_B.coltop;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ia + 9 <=
                (ROPOD_4Wheel_TdistZMPC_cntr_B.coltop +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.lastv) + 8) {
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[ROPOD_4Wheel_TdistZMPC_cntr_B.ia
                  + 8] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ia++;
              }
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv = 0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc = 0;
      }

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv > 0) {
        ROPOD_4Wheel_TdistZMPC__xgemv_m(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc,
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n,
          ROPOD_4Wheel_TdistZMPC_cntr_B.iaii + 9,
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n,
          ROPOD_4Wheel_TdistZMPC_cntr_B.iaii,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work_p);
        ROPOD_4Wheel_TdistZMPC_c_xger_g(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc,
          -ROPOD_4Wheel_TdistZMPC_cntr_B.tau_p[ROPOD_4Wheel_TdistZMPC_cntr_B.itau],
          ROPOD_4Wheel_TdistZMPC_cntr_B.iaii,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work_p,
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n,
          ROPOD_4Wheel_TdistZMPC_cntr_B.iaii + 9);
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv = (ROPOD_4Wheel_TdistZMPC_cntr_B.iaii
        - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) + 8;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc = ROPOD_4Wheel_TdistZMPC_cntr_B.iaii;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc + 1 <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.lastv) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc]
          *=
          -ROPOD_4Wheel_TdistZMPC_cntr_B.tau_p[ROPOD_4Wheel_TdistZMPC_cntr_B.itau];
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii - 1] =
      1.0 -
      ROPOD_4Wheel_TdistZMPC_cntr_B.tau_p[ROPOD_4Wheel_TdistZMPC_cntr_B.itau];
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[(ROPOD_4Wheel_TdistZMPC_cntr_B.iaii -
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv) - 1] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.itau--;
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau++) {
    memcpy(&Q[ROPOD_4Wheel_TdistZMPC_cntr_B.itau * 9],
           &ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_n[ROPOD_4Wheel_TdistZMPC_cntr_B.itau
           * 9], 9U * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdist_KWIKfactor_m(const real_T Ac[189], const
  int16_T iC[21], int16_T nA, const real_T Linv[81], real_T RLinv[81], real_T D
  [81], real_T H[81])
{
  real_T Status;
  int32_T exitg1;
  Status = 1.0;
  memset(&RLinv[0], 0, 81U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 <= nA) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i1 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i1++) {
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.i1 + 9 *
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 - 1)] = 0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_jg = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 - 1;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i1 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i1++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.i1 + 9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_jg;
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i2 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i2 < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i2++) {
        RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = Ac
          [(iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 - 1] + 21 *
            ROPOD_4Wheel_TdistZMPC_cntr_B.i2) - 1] * Linv[9 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i2 + ROPOD_4Wheel_TdistZMPC_cntr_B.i1] +
          RLinv[9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_jg +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1];
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2++;
  }

  ROPOD_4Wheel_TdistZMPC_cnt_qr_k(RLinv, ROPOD_4Wheel_TdistZMPC_cntr_B.QQ_o,
    ROPOD_4Wheel_TdistZMPC_cntr_B.RR_b);
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 = 1;
  do {
    exitg1 = 0;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 <= nA) {
      if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.RR_b
               [((ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 - 1) * 9 +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2) - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2++;
      }
    } else {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_jg = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2
          + 1;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 < 9;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 +
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.d0 = 0.0;
          for (ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i1 < 9;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i1++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.d0 += Linv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i_jg - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.QQ_o
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i1];
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.TL_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2
            + 9 * ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0] =
            ROPOD_4Wheel_TdistZMPC_cntr_B.d0;
        }
      }

      memset(&RLinv[0], 0, 81U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 = nA;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 > 0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 -
          1;
        RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 + 9 *
               ROPOD_4Wheel_TdistZMPC_cntr_B.i1) - 1] = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 <= nA) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 -
            1;
          RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 + 9 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.j) - 1] /=
            ROPOD_4Wheel_TdistZMPC_cntr_B.RR_b
            [((ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2) - 1];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0++;
        }

        if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 > 1) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i1) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu <= nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.j =
                ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.i2 = ROPOD_4Wheel_TdistZMPC_cntr_B.j
                * 9;
              RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 + 9 *
                     ROPOD_4Wheel_TdistZMPC_cntr_B.j) - 1] = RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i2 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0) - 1] -
                ROPOD_4Wheel_TdistZMPC_cntr_B.RR_b
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i1 * 9 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0) - 1] * RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i2 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 = (int16_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 = (int16_T)
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 + 1);
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 <= 9) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0
            - 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 +
            9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i1;
          H[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu = (int16_T)(nA + 1);
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu <= 9) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i2 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu - 1) * 9;
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = H
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2] -
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL_l
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i2 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i2
              + ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu++;
          }

          H[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 + 9 *
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2) - 1] =
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.i1 * 9 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2 <= nA) {
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 < 9;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2
            - 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0 +
            9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i1;
          D[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu <= nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i2 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu - 1) * 9;
            D[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = RLinv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i2 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i2
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0] +
              D[ROPOD_4Wheel_TdistZMPC_cntr_B.i1 * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.j_a0];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k_lu++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c2++;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_T_DropConstraint_b(int16_T kDrop, int16_T iA[21],
  int16_T *nA, int16_T iC[21])
{
  iA[iC[kDrop - 1] - 1] = 0;
  if (kDrop < *nA) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i18 = *nA - 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i18 < -32768) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i18 = -32768;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_jz = kDrop;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_jz <= (int16_T)
           ROPOD_4Wheel_TdistZMPC_cntr_B.i18) {
      iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_jz - 1] =
        iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_jz];
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_jz++;
    }
  }

  iC[*nA - 1] = 0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.i18 = *nA - 1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.i18 < -32768) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i18 = -32768;
  }

  *nA = (int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.i18;
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_T_ResetToColdStart(int16_T iA[21], int16_T iC[21])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_ji = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_ji < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_ji++) {
    iA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_ji] = 0;
    iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_ji] = 0;
  }

  iA[18] = 1;
  iC[0] = 19;
  iA[19] = 1;
  iC[1] = 20;
  iA[20] = 1;
  iC[2] = 21;
}

// Function for MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdis_mpcqpsolver_p(const real_T Linv[81], const real_T
  f[9], const real_T b[18], const real_T Aeq[27], const real_T beq[3], real_T x
  [9])
{
  static const int8_T e[162] = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  static const int8_T b_iA[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1 };

  int32_T exitg1;
  boolean_T exitg2;
  int32_T exitg3;
  boolean_T exitg4;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed = true;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.k < 27;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed && ((!rtIsInf
         (Aeq[ROPOD_4Wheel_TdistZMPC_cntr_B.k])) && (!rtIsNaN
         (Aeq[ROPOD_4Wheel_TdistZMPC_cntr_B.k]))));
  }

  ROPOD_4Wheel_TdistZMPC_cntr_svd(Aeq, ROPOD_4Wheel_TdistZMPC_cntr_B.dv3);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk = ROPOD_4Wheel_TdistZMPC_cntr_B.dv3[0];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk = (rtNaN);
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.absxk = fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.absxk);
  if ((!rtIsInf(ROPOD_4Wheel_TdistZMPC_cntr_B.absxk)) && (!rtIsNaN
       (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk)) &&
      (!(ROPOD_4Wheel_TdistZMPC_cntr_B.absxk <= 2.2250738585072014E-308))) {
    frexp(ROPOD_4Wheel_TdistZMPC_cntr_B.absxk,
          &ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart);
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 9;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.k = ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
        9 * ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_d[ROPOD_4Wheel_TdistZMPC_cntr_B.k] =
        0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_d[ROPOD_4Wheel_TdistZMPC_cntr_B.k] =
          Linv[9 * ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp] * Linv[9 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp] +
          ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_d[9 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
          ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
      }
    }

    for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 18;
         ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
        21 * ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] = e[18 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[18 + 21 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[19 + 21 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart + 1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[20 + 21 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart + 2];
  }

  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[0], &b[0], 18U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[18] = beq[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[19] = beq[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[20] = beq[2];
  ROPOD_4Wheel_TdistZMPC_cntr_B.k = 1;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iA[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
      b_iA[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
    ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
      0.0;
  }

  memset(&x[0], 0, 9U * sizeof(real_T));
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.r_h[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.absxk = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed = false;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_n[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
      1.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
      0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nA = 0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.kNext < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.kNext++) {
    if (b_iA[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext] == 1) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = ROPOD_4Wheel_TdistZMPC_cntr_B.nA +
        1;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.nA = (int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[(int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart - 1] = (int16_T)
        (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext + 1);
    }
  }

  guard1 = false;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA > 0) {
    memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[0], 0, 18U * sizeof(real_T));
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
         ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
        = f[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart
        + 9] = 0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.nA;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
    }

    if ((int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 50) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = (int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 50;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.q_d = (uint16_T)
      (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext / 10U);
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_x = (uint16_T)((uint32_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - ROPOD_4Wheel_TdistZMPC_cntr_B.q_d *
      10);
    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.b_x > 0) &&
        (ROPOD_4Wheel_TdistZMPC_cntr_B.b_x >= 5)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.q_d++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset = false;
    do {
      exitg3 = 0;
      if ((!ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.nA > 0) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.k <= 200)) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 = ROPOD_4Wheel_Tdist_KWIKfactor_m
          (ROPOD_4Wheel_TdistZMPC_cntr_B.Ac, ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a,
           ROPOD_4Wheel_TdistZMPC_cntr_B.nA, Linv,
           ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_g,
           ROPOD_4Wheel_TdistZMPC_cntr_B.D_l, ROPOD_4Wheel_TdistZMPC_cntr_B.H_d);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 < 0.0) {
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset) {
            exitg3 = 2;
          } else {
            ROPOD_4Wheel_T_ResetToColdStart(ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
              ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a);
            ROPOD_4Wheel_TdistZMPC_cntr_B.nA = 3;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset = true;
          }
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart
              - 1] =
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a
              [ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp] - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop + 9 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp) - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.U_d[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                = 0.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.iSave = 1;
              while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave <=
                     ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp =
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave - 1) * 9;
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_d[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                  = ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_g
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop) - 1] *
                  ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_g
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.U_d
                  [((ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - 1) * 9 +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop) - 1];
                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave++;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.U_d
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext + 9 *
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1)) - 1] =
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_d
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp * 9 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext++;
          }

          for (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.kNext < 9;
               ROPOD_4Wheel_TdistZMPC_cntr_B.kNext++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext + 1;
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal +=
                ROPOD_4Wheel_TdistZMPC_cntr_B.H_d[(9 *
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext]
              = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext]
                += ROPOD_4Wheel_TdistZMPC_cntr_B.D_l
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1) * 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart
                - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop++;
            }
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal = 0.0;
            for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                 ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal +=
                ROPOD_4Wheel_TdistZMPC_cntr_B.D_l
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - 1) * 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
              - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp =
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.i0 = 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i0 = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.U_d
                [((ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1) * 9 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i0
                - 1] +
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp
                - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 = -1.0E-12;
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = 0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a
              [ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - 1] - 1] =
              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
              - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 32767;
            }

            if ((ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                 - 1] < ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0) &&
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA - 3)) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop =
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 =
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart
                - 1];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext++;
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <= 0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible = true;
            memcpy(&x[0], &ROPOD_4Wheel_TdistZMPC_cntr_B.Opt_m[0], 9U * sizeof
                   (real_T));
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.k++;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.k >
                ROPOD_4Wheel_TdistZMPC_cntr_B.q_d) {
              ROPOD_4Wheel_T_ResetToColdStart(ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
                ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a);
              ROPOD_4Wheel_TdistZMPC_cntr_B.nA = 3;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset = true;
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a
                [ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1] - 1] = 0.0;
              ROPOD_4Wheel_T_DropConstraint_b
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
                 &ROPOD_4Wheel_TdistZMPC_cntr_B.nA,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a);
            }
          }
        }
      } else {
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA <= 0) {
          memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[0], 0, 21U * sizeof(real_T));
          ROPOD_4Wheel_Td_Unconstrained_n(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_d,
            f, x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Td_Unconstrained_n(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_d, f, x);
    guard1 = true;
  }

  if (guard1) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 = ROPOD_4Wheel_TdistZMPC_c_norm_m(x);
    exitg2 = false;
    while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.k <= 200)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cMin = -1.0E-6;
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop < 18;
           ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop++) {
        if (!ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop + 1;
          for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
               ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.Ac_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
              = ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
          }

          ROPOD_4Wheel_TdistZMPC_cn_abs_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Ac_c,
            ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c);
          ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
            ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[0];
          if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[0])) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 2;
            exitg4 = false;
            while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 10))
            {
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp;
              if (!rtIsNaN
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                   - 1])) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                  - 1];
                exitg4 = true;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++;
              }
            }
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9) {
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart + 1 < 10) {
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                  > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++;
            }
          }

          if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop]
                 > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal) || rtIsNaN
                (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal))) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop]
              = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
          }
        }

        if (ROPOD_4Wheel_TdistZMPC_cntr_B.iA[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop]
            == 0) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop + 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.cVal = 0.0;
          for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
               ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal +=
              ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal -
             ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop])
            /
            ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_n[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop];
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal <
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cMin =
              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = (int16_T)
              (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop + 1);
          }
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed = true;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext <= 0) {
        exitg2 = true;
      } else {
        do {
          exitg1 = 0;
          if ((ROPOD_4Wheel_TdistZMPC_cntr_B.kNext > 0) &&
              (ROPOD_4Wheel_TdistZMPC_cntr_B.k <= 200)) {
            guard2 = false;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA == 0) {
              for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                  = 0.0;
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 9;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    += ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv_d[9 *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                }
              }

              guard2 = true;
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin =
                ROPOD_4Wheel_Tdist_KWIKfactor_m(ROPOD_4Wheel_TdistZMPC_cntr_B.Ac,
                ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a,
                ROPOD_4Wheel_TdistZMPC_cntr_B.nA, Linv,
                ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv_g,
                ROPOD_4Wheel_TdistZMPC_cntr_B.D_l,
                ROPOD_4Wheel_TdistZMPC_cntr_B.H_d);
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.cMin <= 0.0) {
                exitg1 = 1;
              } else {
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.U_d[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                      + 9 * ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
                      -ROPOD_4Wheel_TdistZMPC_cntr_B.H_d[9 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp];
                  }
                }

                for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    = 0.0;
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                      += ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.U_d[9 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                  }
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = 1;
                while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <=
                       ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal = 0.0;
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal +=
                      ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.D_l
                      [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1) * 9 +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.r_h[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop
                    - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop++;
                }

                guard2 = true;
              }
            }

            if (guard2) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = 0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin = 0.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible = true;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset = true;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA > 3) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave = 1;
                exitg4 = false;
                while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave <=
                                     ROPOD_4Wheel_TdistZMPC_cntr_B.nA - 3)) {
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.r_h[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave
                      - 1] >= 1.0E-12) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset = false;
                    exitg4 = true;
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave++;
                  }
                }
              }

              if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.nA == 3) ||
                    ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset)) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.nA - 3;
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < -32768) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = -32768;
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave = 1;
                while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave <= (int16_T)
                       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave - 1;
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.r_h[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
                      > 1.0E-12) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a
                      [ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp] - 1] /
                      ROPOD_4Wheel_TdistZMPC_cntr_B.r_h[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave
                      - 1];
                    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop == 0) ||
                        (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal <
                         ROPOD_4Wheel_TdistZMPC_cntr_B.absxk)) {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.absxk =
                        ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop =
                        ROPOD_4Wheel_TdistZMPC_cntr_B.iSave;
                    }
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave++;
                }

                if (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop > 0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cMin =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible = false;
                }
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.cVal = 0.0;
              for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal +=
                  ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
              }

              if (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal <= 0.0) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal = 0.0;
                ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset = true;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.t = 0.0;
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.t +=
                    ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                    x[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext
                   - 1] - ROPOD_4Wheel_TdistZMPC_cntr_B.t) /
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
                ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset = false;
              }

              if (ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible &&
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset) {
                exitg1 = 1;
              } else {
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.t =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cMin;
                } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.t =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
                } else if ((ROPOD_4Wheel_TdistZMPC_cntr_B.cMin <
                            ROPOD_4Wheel_TdistZMPC_cntr_B.cVal) || rtIsNaN
                           (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal)) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.t =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cMin;
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.t =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave = 1;
                while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave <=
                       ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave - 1;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    - 1;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
                    -=
                    ROPOD_4Wheel_TdistZMPC_cntr_B.r_h[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    * ROPOD_4Wheel_TdistZMPC_cntr_B.t;
                  if ((ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave
                       - 1] <= 18) &&
                      (ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a
                       [ROPOD_4Wheel_TdistZMPC_cntr_B.iSave - 1] - 1] < 0.0)) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
                      = 0.0;
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave++;
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.lam_o[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext
                  - 1] += ROPOD_4Wheel_TdistZMPC_cntr_B.t;
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.t ==
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cMin) {
                  ROPOD_4Wheel_T_DropConstraint_b
                    (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop,
                     ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
                     &ROPOD_4Wheel_TdistZMPC_cntr_B.nA,
                     ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a);
                }

                if (!ROPOD_4Wheel_TdistZMPC_cntr_B.ColdReset) {
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                    x[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] +=
                      ROPOD_4Wheel_TdistZMPC_cntr_B.t *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow_c[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                  }

                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.t ==
                      ROPOD_4Wheel_TdistZMPC_cntr_B.cVal) {
                    if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA == 9) {
                      exitg1 = 1;
                    } else {
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                        ROPOD_4Wheel_TdistZMPC_cntr_B.nA + 1;
                      if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
                      }

                      ROPOD_4Wheel_TdistZMPC_cntr_B.nA = (int16_T)
                        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[(int16_T)
                        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart - 1] =
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = (int16_T)
                        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
                      exitg4 = false;
                      while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop >
                                           1)) {
                        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1;
                        ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
                          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 2;
                        if (ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                            >
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp])
                        {
                          exitg4 = true;
                        } else {
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iSave =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop
                            - 1];
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                            =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop
                            - 2];
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iC_a[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
                            = ROPOD_4Wheel_TdistZMPC_cntr_B.iSave;
                          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = (int16_T)
                            ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
                        }
                      }

                      ROPOD_4Wheel_TdistZMPC_cntr_B.iA[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext
                        - 1] = 1;
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext = 0;
                      ROPOD_4Wheel_TdistZMPC_cntr_B.k++;
                    }
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.k++;
                  }
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.k++;
                }
              }
            }
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cMin = ROPOD_4Wheel_TdistZMPC_c_norm_m
              (x);
            if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.cMin -
                     ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0) > 0.001) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 =
                ROPOD_4Wheel_TdistZMPC_cntr_B.cMin;
              ROPOD_4Wheel_TdistZMPC_c_abs_d5(ROPOD_4Wheel_TdistZMPC_cntr_B.b_b,
                ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_m);
              for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 21;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    > 1.0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_n[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_m[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cTol_n[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    = 1.0;
                }
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed = false;
            }

            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    }
  }
}

static real_T ROPOD_4Wheel_Tdis_rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.u0 = 1;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.u0 = -1;
    }

    if (u1 > 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.u1 = 1;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.u1 = -1;
    }

    y = atan2((real_T)ROPOD_4Wheel_TdistZMPC_cntr_B.u0, (real_T)
              ROPOD_4Wheel_TdistZMPC_cntr_B.u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Function for MATLAB Function: '<S43>/Force_per_sensor'
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_k(const real_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

// Model step function
void ROPOD_4Wheel_TdistZMPC_cntr_step(void)
{
  static const int8_T b[120] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
  };

  static const int8_T l[1600] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  static const int8_T l_0[1600] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  // S-Function (ECAT_Interface): '<S12>/ECAT_Interface'

  // Level2 S-Function Block: '<S12>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  // DigitalClock: '<S1>/Digital Clock1' incorporates:
  //   DigitalClock: '<S364>/Digital Clock'
  //   DigitalClock: '<S72>/Digital Clock'
  //   DigitalClock: '<S73>/Digital Clock'
  //   DigitalClock: '<S74>/Digital Clock'
  //   DigitalClock: '<S75>/Digital Clock'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.t[0];

  // RelationalOperator: '<S10>/Compare' incorporates:
  //   Constant: '<S10>/Constant'
  //   DigitalClock: '<S1>/Digital Clock1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Compare =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp <
     ROPOD_4Wheel_TdistZMPC_cntr_P.Tinit);
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Subscribe1'
    // MATLABSystem: '<S474>/SourceBlock' incorporates:
    //   Inport: '<S476>/In1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_9639.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k);

    // Outputs for Enabled SubSystem: '<S474>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S476>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p =
        ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k;
    }

    // End of MATLABSystem: '<S474>/SourceBlock'
    // End of Outputs for SubSystem: '<S474>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe1'

    // RelationalOperator: '<S36>/Compare' incorporates:
    //   Constant: '<S36>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_o =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p.Data ==
       ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_lg);

    // Switch: '<S13>/Switch' incorporates:
    //   Constant: '<S13>/Constant'
    //   Constant: '<S13>/Constant1'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_o) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_m;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_e;
    }

    // End of Switch: '<S13>/Switch'
  }

  // MATLAB Function: '<S108>/MATLAB Function' incorporates:
  //   Constant: '<S108>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_e, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_d);

  // S-Function (Read_Serial_Port): '<S43>/S-Function Builder'

  // Level2 S-Function Block: '<S43>/S-Function Builder' (Read_Serial_Port)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S72>/Switch' incorporates:
  //   Constant: '<S323>/Constant'
  //   Constant: '<S72>/Constant'
  //   RelationalOperator: '<S323>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o2;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o3;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o4;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o5;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o6;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o7;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o8;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h;
  }

  // End of Switch: '<S72>/Switch'

  // Sum: '<S108>/Sum' incorporates:
  //   UnitDelay: '<S108>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gu =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE;

  // Product: '<S108>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_e *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gu;

  // MATLAB Function: '<S106>/MATLAB Function' incorporates:
  //   Constant: '<S106>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pe,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_e, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_gb);

  // Sum: '<S106>/Sum' incorporates:
  //   UnitDelay: '<S106>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f;

  // Product: '<S106>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g = ROPOD_4Wheel_TdistZMPC_cntr_B.a_e *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw;

  // MATLAB Function: '<S110>/MATLAB Function' incorporates:
  //   Constant: '<S110>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_g,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_e);

  // Sum: '<S110>/Sum' incorporates:
  //   UnitDelay: '<S110>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i;

  // Product: '<S110>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_c = ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jv;

  // MATLAB Function: '<S112>/MATLAB Function' incorporates:
  //   Constant: '<S112>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_b_l, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz);

  // Sum: '<S112>/Sum' incorporates:
  //   UnitDelay: '<S112>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k;

  // Product: '<S112>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o = ROPOD_4Wheel_TdistZMPC_cntr_B.a_b_l
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n;

  // MATLAB Function: '<S114>/MATLAB Function' incorporates:
  //   Constant: '<S114>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_le, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_b_l);

  // Sum: '<S114>/Sum' incorporates:
  //   UnitDelay: '<S114>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d;

  // Product: '<S114>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i = ROPOD_4Wheel_TdistZMPC_cntr_B.a_le *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d;

  // MATLAB Function: '<S116>/MATLAB Function' incorporates:
  //   Constant: '<S116>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ib,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_fj, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_le);

  // Sum: '<S116>/Sum' incorporates:
  //   UnitDelay: '<S116>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_kv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j;

  // Product: '<S116>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l = ROPOD_4Wheel_TdistZMPC_cntr_B.a_fj *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_kv;

  // MATLAB Function: '<S118>/MATLAB Function' incorporates:
  //   Constant: '<S118>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i4, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_fj);

  // Sum: '<S118>/Sum' incorporates:
  //   UnitDelay: '<S118>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_bw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p;

  // Product: '<S118>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o2 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_i4
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_bw;

  // MATLAB Function: '<S120>/MATLAB Function' incorporates:
  //   Constant: '<S120>/Constant'
  //   Constant: '<S53>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mv,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_dm, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i4);

  // Sum: '<S120>/Sum' incorporates:
  //   UnitDelay: '<S120>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h;

  // Product: '<S120>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it = ROPOD_4Wheel_TdistZMPC_cntr_B.a_dm
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d4;

  // MATLAB Function: '<S43>/speed deflection angle calculation X+' incorporates:
  //   Constant: '<S43>/Constant7'
  //   Constant: '<S43>/Constant8'

  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_c,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o2,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it,
    ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx, ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_dm);

  // MATLAB Function: '<S58>/Calibration1' incorporates:
  //   Memory: '<S58>/Memory2'
  //   Memory: '<S58>/Memory3'

  if ((ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput > 5000.0) &&
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput <= 6000.0)) {
    // Update for Memory: '<S58>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput +=
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_d =
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_d =
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn -
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput / 1000.0;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Subscribe2'
    // MATLABSystem: '<S475>/SourceBlock' incorporates:
    //   Inport: '<S477>/In1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_9640.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2_j);

    // Outputs for Enabled SubSystem: '<S475>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S477>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2_j;
    }

    // End of MATLABSystem: '<S475>/SourceBlock'
    // End of Outputs for SubSystem: '<S475>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe2'
  }

  // MATLAB Function: '<S164>/MATLAB Function' incorporates:
  //   Constant: '<S164>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_od,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_aq, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_l);

  // Switch: '<S73>/Switch' incorporates:
  //   Constant: '<S324>/Constant'
  //   Constant: '<S73>/Constant'
  //   RelationalOperator: '<S324>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_l) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o9;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o10;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o11;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o12;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o13;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o14;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o15;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o16;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dk;
  }

  // End of Switch: '<S73>/Switch'

  // Sum: '<S164>/Sum' incorporates:
  //   UnitDelay: '<S164>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mj =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a;

  // Product: '<S164>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n = ROPOD_4Wheel_TdistZMPC_cntr_B.a_aq *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mj;

  // MATLAB Function: '<S162>/MATLAB Function' incorporates:
  //   Constant: '<S162>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fa,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_aq, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_dm);

  // Sum: '<S162>/Sum' incorporates:
  //   UnitDelay: '<S162>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g;

  // Product: '<S162>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nm = ROPOD_4Wheel_TdistZMPC_cntr_B.a_aq
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c2;

  // MATLAB Function: '<S166>/MATLAB Function' incorporates:
  //   Constant: '<S166>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o1,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_px, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_aq);

  // Sum: '<S166>/Sum' incorporates:
  //   UnitDelay: '<S166>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n;

  // Product: '<S166>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h = ROPOD_4Wheel_TdistZMPC_cntr_B.a_px *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d5;

  // MATLAB Function: '<S168>/MATLAB Function' incorporates:
  //   Constant: '<S168>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_o, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_px);

  // Sum: '<S168>/Sum' incorporates:
  //   UnitDelay: '<S168>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ia =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nm;

  // Product: '<S168>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b = ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_o
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ia;

  // MATLAB Function: '<S170>/MATLAB Function' incorporates:
  //   Constant: '<S170>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gg,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_n_c, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_o);

  // Sum: '<S170>/Sum' incorporates:
  //   UnitDelay: '<S170>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c;

  // Product: '<S170>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = ROPOD_4Wheel_TdistZMPC_cntr_B.a_n_c
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_p;

  // MATLAB Function: '<S172>/MATLAB Function' incorporates:
  //   Constant: '<S172>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ji,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_h2, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_n_c);

  // Sum: '<S172>/Sum' incorporates:
  //   UnitDelay: '<S172>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dv;

  // Product: '<S172>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ok = ROPOD_4Wheel_TdistZMPC_cntr_B.a_h2
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lm;

  // MATLAB Function: '<S174>/MATLAB Function' incorporates:
  //   Constant: '<S174>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jy,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_pj, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_h2);

  // Sum: '<S174>/Sum' incorporates:
  //   UnitDelay: '<S174>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_p4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hg;

  // Product: '<S174>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nk = ROPOD_4Wheel_TdistZMPC_cntr_B.a_pj
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_p4;

  // MATLAB Function: '<S176>/MATLAB Function' incorporates:
  //   Constant: '<S176>/Constant'
  //   Constant: '<S54>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bw,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hv, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_pj);

  // Sum: '<S176>/Sum' incorporates:
  //   UnitDelay: '<S176>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jy =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_o;

  // Product: '<S176>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d = ROPOD_4Wheel_TdistZMPC_cntr_B.a_hv *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jy;

  // MATLAB Function: '<S43>/speed deflection angle calculation X+1' incorporates:
  //   Constant: '<S43>/Constant10'
  //   Constant: '<S43>/Constant9'

  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nm,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ok,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nk,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d, ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx,
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_n,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l);

  // MATLAB Function: '<S61>/Calibration1' incorporates:
  //   Memory: '<S61>/Memory2'
  //   Memory: '<S61>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_g,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_o,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_im,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_g,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_n);

  // Switch: '<S43>/Switch2' incorporates:
  //   Constant: '<S43>/Constant6'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value;
  }

  // End of Switch: '<S43>/Switch2'

  // Switch: '<S43>/Switch' incorporates:
  //   Constant: '<S43>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j.Data) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_im =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value;
  }

  // End of Switch: '<S43>/Switch'

  // Sum: '<S43>/Sum2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.distance_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_d -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_im;

  // MATLAB Function: '<S59>/Calibration1' incorporates:
  //   Memory: '<S59>/Memory2'
  //   Memory: '<S59>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_i,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_d,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_o);

  // MATLAB Function: '<S62>/Calibration1' incorporates:
  //   Memory: '<S62>/Memory2'
  //   Memory: '<S62>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.g_n,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_o,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_i,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_l,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_im);

  // Switch: '<S43>/Switch3' incorporates:
  //   Constant: '<S43>/Constant6'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch3_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value;
  }

  // End of Switch: '<S43>/Switch3'

  // Switch: '<S43>/Switch1' incorporates:
  //   Constant: '<S43>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j.Data) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value;
  }

  // End of Switch: '<S43>/Switch1'

  // Sum: '<S43>/Sum3'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hh =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_i;

  // Sum: '<S13>/Add1' incorporates:
  //   Gain: '<S13>/Gain'
  //   Gain: '<S13>/Gain1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.distance_f +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hh;

  // MATLAB Function: '<S220>/MATLAB Function' incorporates:
  //   Constant: '<S220>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_k,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_o);

  // Switch: '<S74>/Switch' incorporates:
  //   Constant: '<S325>/Constant'
  //   Constant: '<S74>/Constant'
  //   RelationalOperator: '<S325>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_o) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o17;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o18;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o19;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o20;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o21;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o22;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o23;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o24;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l;
  }

  // End of Switch: '<S74>/Switch'

  // Sum: '<S220>/Sum' incorporates:
  //   UnitDelay: '<S220>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du;

  // Product: '<S220>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j2;

  // MATLAB Function: '<S218>/MATLAB Function' incorporates:
  //   Constant: '<S218>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_an,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hv);

  // Sum: '<S218>/Sum' incorporates:
  //   UnitDelay: '<S218>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cd;

  // Product: '<S218>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_du =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg;

  // MATLAB Function: '<S222>/MATLAB Function' incorporates:
  //   Constant: '<S222>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ba,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m1, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx_g);

  // Sum: '<S222>/Sum' incorporates:
  //   UnitDelay: '<S222>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_dn =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c3;

  // Product: '<S222>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_cz = ROPOD_4Wheel_TdistZMPC_cntr_B.a_m1
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_dn;

  // MATLAB Function: '<S224>/MATLAB Function' incorporates:
  //   Constant: '<S224>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b1,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ib, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m1);

  // Sum: '<S224>/Sum' incorporates:
  //   UnitDelay: '<S224>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hf =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dvl;

  // Product: '<S224>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nl = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ib
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hf;

  // MATLAB Function: '<S226>/MATLAB Function' incorporates:
  //   Constant: '<S226>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mg,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_f, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ib);

  // Sum: '<S226>/Sum' incorporates:
  //   UnitDelay: '<S226>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hd =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nh;

  // Product: '<S226>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_cu =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_f * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hd;

  // MATLAB Function: '<S228>/MATLAB Function' incorporates:
  //   Constant: '<S228>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dx,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_mn, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_f);

  // Sum: '<S228>/Sum' incorporates:
  //   UnitDelay: '<S228>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_du =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nb;

  // Product: '<S228>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ec = ROPOD_4Wheel_TdistZMPC_cntr_B.a_mn
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_du;

  // MATLAB Function: '<S230>/MATLAB Function' incorporates:
  //   Constant: '<S230>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ki,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m3, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_mn);

  // Sum: '<S230>/Sum' incorporates:
  //   UnitDelay: '<S230>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_if;

  // Product: '<S230>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_m = ROPOD_4Wheel_TdistZMPC_cntr_B.a_m3 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_m;

  // MATLAB Function: '<S232>/MATLAB Function' incorporates:
  //   Constant: '<S232>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o5,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ep,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_j_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m3);

  // Sum: '<S232>/Sum' incorporates:
  //   UnitDelay: '<S232>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_al =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fk;

  // Product: '<S232>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_bu =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_j_i * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_al;

  // MATLAB Function: '<S43>/speed deflection angle calculation X+2' incorporates:
  //   Constant: '<S43>/Constant13'
  //   Constant: '<S43>/Constant14'

  speeddeflectionanglecalculati_l(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_du,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_cz,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nl,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_cu,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ec,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_m,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_bu,
    ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy, ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_j_i);

  // MATLAB Function: '<S57>/Calibration1' incorporates:
  //   Memory: '<S57>/Memory2'
  //   Memory: '<S57>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_gb,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_l,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_i,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_o,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_d);

  // MATLAB Function: '<S276>/MATLAB Function' incorporates:
  //   Constant: '<S276>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_cw,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c5, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_g);

  // Switch: '<S75>/Switch' incorporates:
  //   Constant: '<S326>/Constant'
  //   Constant: '<S75>/Constant'
  //   RelationalOperator: '<S326>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_j) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o25;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o26;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o27;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o28;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o29;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o30;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o31;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o32;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_da;
  }

  // End of Switch: '<S75>/Switch'

  // Sum: '<S276>/Sum' incorporates:
  //   UnitDelay: '<S276>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d5;

  // Product: '<S276>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_di = ROPOD_4Wheel_TdistZMPC_cntr_B.a_c5
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hv;

  // MATLAB Function: '<S274>/MATLAB Function' incorporates:
  //   Constant: '<S274>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nf,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c5, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_j_i);

  // Sum: '<S274>/Sum' incorporates:
  //   UnitDelay: '<S274>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_na =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io;

  // Product: '<S274>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_go = ROPOD_4Wheel_TdistZMPC_cntr_B.a_c5
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_na;

  // MATLAB Function: '<S278>/MATLAB Function' incorporates:
  //   Constant: '<S278>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_kh,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_de, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c5);

  // Sum: '<S278>/Sum' incorporates:
  //   UnitDelay: '<S278>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hi =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo;

  // Product: '<S278>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_df = ROPOD_4Wheel_TdistZMPC_cntr_B.a_de
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hi;

  // MATLAB Function: '<S280>/MATLAB Function' incorporates:
  //   Constant: '<S280>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mj,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_f_f, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_de);

  // Sum: '<S280>/Sum' incorporates:
  //   UnitDelay: '<S280>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jyn =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dm;

  // Product: '<S280>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ia =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_f_f * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jyn;

  // MATLAB Function: '<S282>/MATLAB Function' incorporates:
  //   Constant: '<S282>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f1,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_gj, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_f_f);

  // Sum: '<S282>/Sum' incorporates:
  //   UnitDelay: '<S282>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cb;

  // Product: '<S282>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_mh = ROPOD_4Wheel_TdistZMPC_cntr_B.a_gj
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2;

  // MATLAB Function: '<S284>/MATLAB Function' incorporates:
  //   Constant: '<S284>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nq,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_gj);

  // Sum: '<S284>/Sum' incorporates:
  //   UnitDelay: '<S284>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ox;

  // Product: '<S284>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m_i * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d3;

  // MATLAB Function: '<S286>/MATLAB Function' incorporates:
  //   Constant: '<S286>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jx,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_lw, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m_i);

  // Sum: '<S286>/Sum' incorporates:
  //   UnitDelay: '<S286>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ax =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m;

  // Product: '<S286>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p = ROPOD_4Wheel_TdistZMPC_cntr_B.a_lw *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ax;

  // MATLAB Function: '<S288>/MATLAB Function' incorporates:
  //   Constant: '<S288>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_la,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_lw);

  // Sum: '<S288>/Sum' incorporates:
  //   UnitDelay: '<S288>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dj;

  // Product: '<S288>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pt =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h2;

  // MATLAB Function: '<S43>/speed deflection angle calculation X+3' incorporates:
  //   Constant: '<S43>/Constant11'
  //   Constant: '<S43>/Constant12'

  speeddeflectionanglecalculati_l(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_di,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_go,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_df,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ia,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_mh,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pt,
    ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy, ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn, &ROPOD_4Wheel_TdistZMPC_cntr_B.g_n,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_i);

  // MATLAB Function: '<S63>/Calibration1' incorporates:
  //   Memory: '<S63>/Memory2'
  //   Memory: '<S63>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_a,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_j,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_i);

  // Sum: '<S43>/Sum5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum5 = ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_i
    - ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h;

  // DiscreteStateSpace: '<S51>/Internal'
  {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_C[0])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[0]
      + (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_C[1])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_D*
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum5;
  }

  // MATLAB Function: '<S60>/Calibration1' incorporates:
  //   Memory: '<S60>/Memory2'
  //   Memory: '<S60>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_p,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_i,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h);

  // MATLAB Function: '<S64>/Calibration1' incorporates:
  //   Memory: '<S64>/Memory2'
  //   Memory: '<S64>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.g_n,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_h,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_hp,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle, &ROPOD_4Wheel_TdistZMPC_cntr_B.i,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out);

  // Sum: '<S43>/Sum6'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum6 = ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e
    - ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;

  // DiscreteStateSpace: '<S52>/Internal'
  {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_h =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_C_m[0])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[0]
      + (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_C_m[1])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_h +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_D_n*
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum6;
  }

  // Sum: '<S13>/Add2' incorporates:
  //   Gain: '<S13>/Gain2'
  //   Gain: '<S13>/Gain3'

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Internal +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_h;

  // Chart: '<S13>/Chart' incorporates:
  //   Constant: '<S13>/Fd_min'
  //   Constant: '<S13>/Fd_min1'
  //   Constant: '<S13>/Fd_min2'
  //   Constant: '<S13>/Fd_min3'
  //   Constant: '<S13>/Fd_min4'
  //   Constant: '<S13>/Fd_min5'
  //   Constant: '<S13>/Fd_min6'
  //   Constant: '<S13>/Fd_min7'
  //   Constant: '<S13>/Fd_min8'
  //   Constant: '<S13>/Fd_min9'
  //   MATLAB Function: '<S58>/Calibration1'
  //   Memory: '<S58>/Memory2'

  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.is_active_c3_ROPOD_4Wheel_Tdist == 0U) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.is_active_c3_ROPOD_4Wheel_Tdist = 1U;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn =
      ROPOD_4Whee_IN_Velocity_control;
    ROPOD_4Wheel_TdistZMPC_cntr_B.state = 0U;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = 0.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
      ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_max_sp;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min = 0.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
      ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
  } else {
    switch (ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn) {
     case ROPOD_4_IN_Mode1_Operation_mode:
      ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = 0.0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p.Data == 4) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
          ROPOD_4Wheel_IN_NO_ACTIVE_CHILD;
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn =
          ROPOD__IN_Mode4_Connect_to_cart;
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart =
          ROPOD_4Wheel_IN_Connect_to_cart;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = 0.0;
      } else {
        switch (ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode) {
         case ROPOD__IN_Collision_with_object:
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 2U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p.Data == 0) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD_4Wheel_IN_NO_ACTIVE_CHILD;
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn =
              ROPOD_4Whee_IN_Velocity_control;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 0U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_max_sp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
          }
          break;

         case ROPOD__IN_Interaction_left_side:
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e <
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_min_sp - 2.0) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD_4Wheel__IN_No_interaction;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
          } else {
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_min_sp) {
              ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
                ROPOD__IN_Collision_with_object;
              ROPOD_4Wheel_TdistZMPC_cntr_B.state = 2U;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = -20.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
                -ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_min =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_min_sp;
            }
          }
          break;

         case ROPOD_IN_Interaction_right_side:
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e >
              -(ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_min_sp - 2.0)) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD_4Wheel__IN_No_interaction;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
          } else {
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_min_sp) {
              ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
                ROPOD__IN_Collision_with_object;
              ROPOD_4Wheel_TdistZMPC_cntr_B.state = 2U;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = -20.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
                -ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_min =
                ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_min_sp;
            }
          }
          break;

         default:
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_min_sp) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD__IN_Collision_with_object;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 2U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = -20.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_max_sp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
              -ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_max_sp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_min =
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_min_sp;
          } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e >
                     ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_min_sp + 2.0) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD__IN_Interaction_left_side;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
          } else {
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e <
                -(ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_min_sp + 2.0)) {
              ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
                ROPOD_IN_Interaction_right_side;
              ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
                -ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fd_max_sp;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max = 0.0;
            }
          }
          break;
        }
      }
      break;

     case ROPOD__IN_Mode4_Connect_to_cart:
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p.Data == 1) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart =
          ROPOD_4Wheel_IN_NO_ACTIVE_CHILD;
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn =
          ROPOD_4_IN_Mode1_Operation_mode;
        ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
          ROPOD_4Wheel__IN_No_interaction;
        ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
      } else if (ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart ==
                 ROPOD_4Wheel_IN_Connect_to_cart) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = 0.0;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd <
            -(ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_min_sp + 2.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart =
            ROPOD_IN_Hold_contact_with_cart;
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 4U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
            -ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_min_cart_sp;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min =
            -ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_max_cart_sp;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_max =
            ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_max_cart_sp;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_min =
            ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fr_min_cart_sp;
          ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = -30.0;
        }
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.state = 4U;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = -30.0;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
            -(ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCx_Fd_min_sp - 7.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart =
            ROPOD_4Wheel_IN_Connect_to_cart;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = 0.0;
        }
      }
      break;

     default:
      ROPOD_4Wheel_TdistZMPC_cntr_B.state = 0U;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
      if ((ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput > 6000.0) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p.Data == 1)) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn =
          ROPOD_4_IN_Mode1_Operation_mode;
        ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
          ROPOD_4Wheel__IN_No_interaction;
        ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
      }
      break;
    }
  }

  // End of Chart: '<S13>/Chart'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter14'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz);

    // MATLAB Function: '<S403>/MATLAB Function' incorporates:
    //   Constant: '<S403>/Constant'
    //   Gain: '<S392>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter14'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_a4,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_b, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_f);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S31>/S-Function'

  // Level2 S-Function Block: '<S31>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'

  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S33>/S-Function'

  // Level2 S-Function Block: '<S33>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S34>/S-Function'

  // Level2 S-Function Block: '<S34>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S23>/Switch2' incorporates:
  //   Constant: '<S23>/Constant2'
  //   Gain: '<S23>/sign convention'
  //   Gain: '<S23>/sign convention1'
  //   Gain: '<S23>/sign convention2'
  //   Gain: '<S23>/sign convention3'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value[0], sizeof(real_T) <<
           3U);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_p[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[3] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention1_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_p[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[4] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_o[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[5] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention2_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_o[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[6] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[7] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention3_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[17];
  }

  // End of Switch: '<S23>/Switch2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2173.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter'

    // MATLABSystem: '<S6>/Get Parameter11'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2176.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter11'

    // MATLABSystem: '<S6>/Get Parameter12'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2177.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter12'

    // MATLABSystem: '<S6>/Get Parameter13'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2178.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter13'

    // MATLABSystem: '<S6>/Get Parameter14'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2179.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter14'

    // MATLABSystem: '<S6>/Get Parameter15'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2180.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter15'

    // MATLABSystem: '<S6>/Get Parameter16'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2181.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter16'

    // MATLABSystem: '<S6>/Get Parameter17'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2182.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter17'

    // MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2174.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter1'

    // MATLABSystem: '<S6>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2183.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter2'

    // MATLABSystem: '<S6>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2184.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter3'

    // MATLABSystem: '<S6>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2185.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter4'

    // MATLABSystem: '<S6>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2186.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter5'

    // MATLABSystem: '<S6>/Get Parameter6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2187.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter6'

    // MATLABSystem: '<S6>/Get Parameter7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2188.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter7'

    // MATLABSystem: '<S6>/Get Parameter8'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2189.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter8'

    // MATLABSystem: '<S6>/Get Parameter9'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2190.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter9'

    // MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2175.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S6>/Get Parameter10'

    // MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2214.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S7>/Get Parameter1'

    // MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2216.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S7>/Get Parameter3'

    // MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2217.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S7>/Get Parameter4'

    // MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S7>/Get Parameter5'
  }

  // Switch: '<S23>/Switch' incorporates:
  //   Constant: '<S23>/Constant'
  //   Sum: '<S23>/Add'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dp[0];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dp[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dp[2];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dp[3];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_p[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw2;
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_o[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw3;
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw4;
  }

  // End of Switch: '<S23>/Switch'

  // MATLAB Function: '<S39>/Gl_matrix' incorporates:
  //   MATLAB Function: '<S11>/Jqwl_matrix'
  //   MATLAB Function: '<S41>/Gl_matrices'
  //   SignalConversion: '<S329>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 = cos(ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i
    [1]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t7 = sin(ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i
    [1]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = cos(ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i
    [2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t9 = sin(ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i
    [2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t30_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t31_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t30_tmp * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t41_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp *
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b * 0.5;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2237.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S8>/Get Parameter'
  }

  // Product: '<S365>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S365>/sample time'
  //
  //  About '<S365>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S8>/Get Parameter1'
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S478>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1 =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_1899.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S478>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S479>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
      // Inport: '<S479>/In1' incorporates:
      //   MATLABSystem: '<S478>/SourceBlock'

      ROPOD_4Wheel_TdistZMPC_cntr_B.In1 =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2;
    }

    // End of Outputs for SubSystem: '<S478>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'
  }

  // Delay: '<S364>/Enabled Delay'
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay =
      ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE;
  }

  // End of Delay: '<S364>/Enabled Delay'

  // Gain: '<S364>/Gain6' incorporates:
  //   Constant: '<S374>/Constant'
  //   RelationalOperator: '<S374>/Compare'
  //   Sum: '<S364>/Subtract'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_g = (uint8_T)
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp -
     ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay >=
     ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_p ? (int32_T)
     ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain_g : 0);

  // Switch: '<S16>/Switch1' incorporates:
  //   Constant: '<S16>/Constant1'
  //   Switch: '<S364>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_i;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_g >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch_Threshold_d) {
    // Switch: '<S364>/Switch' incorporates:
    //   Constant: '<S364>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_au;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Linear.X;
  }

  // End of Switch: '<S16>/Switch1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S363>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_g *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  }

  // Switch: '<S368>/Switch2' incorporates:
  //   RelationalOperator: '<S368>/LowerRelop1'
  //   RelationalOperator: '<S368>/UpperRelop'
  //   Switch: '<S368>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1) {
      // Switch: '<S368>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1;
    }
  }

  // End of Switch: '<S368>/Switch2'

  // Sum: '<S365>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S365>/Delay Input2'
  //
  //  Block description for '<S365>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S365>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S363>/Gain'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain_c *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy;
  }

  // Switch: '<S371>/Switch2' incorporates:
  //   RelationalOperator: '<S371>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e >
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
    // Product: '<S365>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S365>/sample time'
    //
    //  About '<S365>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle = ROPOD_4Wheel_TdistZMPC_cntr_B.Gain
      * ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt;

    // Switch: '<S371>/Switch' incorporates:
    //   RelationalOperator: '<S371>/UpperRelop'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e <
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e;
    }

    // End of Switch: '<S371>/Switch'
  }

  // End of Switch: '<S371>/Switch2'

  // Sum: '<S365>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S365>/Delay Input2'
  //
  //  Block description for '<S365>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S365>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE;

  // Product: '<S366>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S366>/sample time'
  //
  //  About '<S366>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_b;

  // Switch: '<S16>/Switch2' incorporates:
  //   Constant: '<S16>/Constant2'
  //   Switch: '<S364>/Switch1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_i) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_c;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_g >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold_g) {
    // Switch: '<S364>/Switch1' incorporates:
    //   Constant: '<S364>/Constant1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_a;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Linear.Y;
  }

  // End of Switch: '<S16>/Switch2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S363>/Gain3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  }

  // Switch: '<S369>/Switch2' incorporates:
  //   RelationalOperator: '<S369>/LowerRelop1'
  //   RelationalOperator: '<S369>/UpperRelop'
  //   Switch: '<S369>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3) {
      // Switch: '<S369>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3;
    }
  }

  // End of Switch: '<S369>/Switch2'

  // Sum: '<S366>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S366>/Delay Input2'
  //
  //  Block description for '<S366>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S366>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_j;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S363>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_o *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy;
  }

  // Switch: '<S372>/Switch2' incorporates:
  //   RelationalOperator: '<S372>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle >
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
    // Product: '<S366>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S366>/sample time'
    //
    //  About '<S366>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_b;

    // Switch: '<S372>/Switch' incorporates:
    //   RelationalOperator: '<S372>/UpperRelop'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle <
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;
    }

    // End of Switch: '<S372>/Switch'
  }

  // End of Switch: '<S372>/Switch2'

  // Sum: '<S366>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S366>/Delay Input2'
  //
  //  Block description for '<S366>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S366>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_j;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2239.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S8>/Get Parameter2'
  }

  // Product: '<S367>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S367>/sample time'
  //
  //  About '<S367>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_k;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2240.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S8>/Get Parameter3'

    // Gain: '<S363>/Gain5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta;
  }

  // Switch: '<S16>/Switch3' incorporates:
  //   Constant: '<S16>/Constant3'
  //   Switch: '<S364>/Switch2'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch3_Threshold_p) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant3_Value;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_g >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_i5) {
    // Switch: '<S364>/Switch2' incorporates:
    //   Constant: '<S364>/Constant2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_i;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Angular.Z;
  }

  // End of Switch: '<S16>/Switch3'

  // Switch: '<S370>/Switch2' incorporates:
  //   RelationalOperator: '<S370>/LowerRelop1'
  //   RelationalOperator: '<S370>/UpperRelop'
  //   Switch: '<S370>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5) {
      // Switch: '<S370>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5;
    }
  }

  // End of Switch: '<S370>/Switch2'

  // Sum: '<S367>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S367>/Delay Input2'
  //
  //  Block description for '<S367>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S367>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S363>/Gain4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta;
  }

  // Switch: '<S373>/Switch2' incorporates:
  //   RelationalOperator: '<S373>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n >
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
    // Product: '<S367>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S367>/sample time'
    //
    //  About '<S367>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain4 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_k;

    // Switch: '<S373>/Switch' incorporates:
    //   RelationalOperator: '<S373>/UpperRelop'

    if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n <
          ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n;
    }

    // End of Switch: '<S373>/Switch'
  }

  // End of Switch: '<S373>/Switch2'

  // Sum: '<S367>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S367>/Delay Input2'
  //
  //  Block description for '<S367>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S367>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e;

  // SignalConversion: '<S39>/TmpSignal ConversionAtProduct3Inport2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n;

  // MATLAB Function: '<S39>/Gl_matrix' incorporates:
  //   SignalConversion: '<S329>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[0] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[4] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[5] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[6] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[7] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj +
     ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[8] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj -
     ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[9] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[10] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[11] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t31_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[12] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t31_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[13] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_b) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[14] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn -
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_b) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[15] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[16] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[17] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[18] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[19] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[20] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[21] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp
    * ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[22] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp
    - ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[23] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t39 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[24] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[25] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t39 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7) * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[26] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t9 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[27] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t39 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp
    * ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[28] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[29] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t39 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[30] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[31] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[32] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[33] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[34] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[35] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t30_tmp - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[36] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[37] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) - ROPOD_4Wheel_TdistZMPC_cntr_B.t39)
    * -ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[38] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) + ROPOD_4Wheel_TdistZMPC_cntr_B.t39)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[39] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) - ROPOD_4Wheel_TdistZMPC_cntr_B.t39)
    * -ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[40] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) + ROPOD_4Wheel_TdistZMPC_cntr_B.t39)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[41] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k +
      ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_p) - ROPOD_4Wheel_TdistZMPC_cntr_B.t39)
    * -ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[42] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k +
      ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_p) + ROPOD_4Wheel_TdistZMPC_cntr_B.t39)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[43] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.t41_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[44] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t41_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;

  // Product: '<S39>/Product3' incorporates:
  //   SignalConversion: '<S39>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S19>/Sum'

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       15; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.dv2[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 30] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n +
      (ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 15]
       * ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle +
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e);
  }

  // End of Product: '<S39>/Product3'

  // Product: '<S391>/Product9' incorporates:
  //   Constant: '<S1>/Constant'
  //   Sum: '<S19>/Sum'

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       8; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.dv2[7 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
       - ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m])
      * ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nv[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
  }

  // End of Product: '<S391>/Product9'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2931.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S5>/Get Parameter10'
  }

  // Product: '<S392>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S405>/POut' incorporates:
  //   Constant: '<S401>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter11'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2932.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz);

    // Gain: '<S401>/Gain2' incorporates:
    //   Constant: '<S401>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter11'
    //   Product: '<S401>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_a;
  }

  // DiscreteIntegrator: '<S405>/Integrator' incorporates:
  //   Product: '<S405>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_p);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE;

  // End of DiscreteIntegrator: '<S405>/Integrator'

  // Product: '<S405>/DOut' incorporates:
  //   Constant: '<S401>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_d1;

  // SampleTimeMath: '<S406>/TSamp' incorporates:
  //   Constant: '<S401>/Constant5'
  //
  //  About '<S406>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt;

  // Math: '<S406>/Reciprocal' incorporates:
  //   Constant: '<S406>/Constant'
  //   Sum: '<S406>/SumDen'
  //
  //  About '<S406>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lan +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S406>/Filter Differentiator TF' incorporates:
  //   Constant: '<S406>/Constant'
  //   Product: '<S406>/Divide'
  //   Sum: '<S406>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_InitialS;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lan) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states;

  // Sum: '<S405>/Sum' incorporates:
  //   Constant: '<S401>/Constant5'
  //   DiscreteTransferFcn: '<S406>/Filter Differentiator TF'
  //   Product: '<S406>/DenCoefOut'
  //   Product: '<S406>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoef[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoef[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_n +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator);

  // DiscreteIntegrator: '<S407>/Integrator' incorporates:
  //   Constant: '<S402>/Constant2'
  //   Product: '<S407>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t30_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_g *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_j);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut = ROPOD_4Wheel_TdistZMPC_cntr_B.t30_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter12'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2933.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz);

    // Gain: '<S402>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter12'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // MATLABSystem: '<S5>/Get Parameter13'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2934.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz);

    // Gain: '<S402>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter13'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_o *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S402>/Divide1' incorporates:
    //   Constant: '<S402>/Constant1'
    //   Product: '<S402>/Divide'
    //   Sum: '<S402>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_f3 -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S408>/TSamp' incorporates:
  //   DataTypeConversion: '<S408>/Passthrough for tuning'
  //
  //  About '<S408>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_f;

  // Math: '<S408>/Reciprocal' incorporates:
  //   Constant: '<S408>/Constant'
  //   Sum: '<S408>/SumDen'
  //
  //  About '<S408>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fq +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S408>/Filter Differentiator TF' incorporates:
  //   Constant: '<S408>/Constant'
  //   Product: '<S407>/DOut'
  //   Product: '<S408>/Divide'
  //   Sum: '<S408>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fq) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a;

  // Sum: '<S407>/Sum' incorporates:
  //   Constant: '<S402>/Constant4'
  //   DataTypeConversion: '<S408>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S408>/Filter Differentiator TF'
  //   Product: '<S407>/POut'
  //   Product: '<S408>/DenCoefOut'
  //   Product: '<S408>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_p[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_p[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_l +
     ROPOD_4Wheel_TdistZMPC_cntr_B.POut);

  // Sum: '<S403>/Sum' incorporates:
  //   UnitDelay: '<S403>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_p = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hl;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S412>/MATLAB Function' incorporates:
    //   Constant: '<S412>/Constant'
    //   Gain: '<S393>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ip *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ban,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_ck, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a);
  }

  // Product: '<S393>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S414>/POut' incorporates:
  //   Constant: '<S410>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_lv;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S410>/Gain2' incorporates:
    //   Constant: '<S410>/Constant4'
    //   Product: '<S410>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_lv *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_c;
  }

  // DiscreteIntegrator: '<S414>/Integrator' incorporates:
  //   Product: '<S414>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_g != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_m;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t41_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_o *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_i);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t41_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d;

  // End of DiscreteIntegrator: '<S414>/Integrator'

  // Product: '<S414>/DOut' incorporates:
  //   Constant: '<S410>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e5;

  // SampleTimeMath: '<S415>/TSamp' incorporates:
  //   Constant: '<S410>/Constant5'
  //
  //  About '<S415>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_nt *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_j;

  // Math: '<S415>/Reciprocal' incorporates:
  //   Constant: '<S415>/Constant'
  //   Sum: '<S415>/SumDen'
  //
  //  About '<S415>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S415>/Filter Differentiator TF' incorporates:
  //   Constant: '<S415>/Constant'
  //   Product: '<S415>/Divide'
  //   Sum: '<S415>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_b;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e;

  // Sum: '<S414>/Sum' incorporates:
  //   Constant: '<S410>/Constant5'
  //   DiscreteTransferFcn: '<S415>/Filter Differentiator TF'
  //   Product: '<S415>/DenCoefOut'
  //   Product: '<S415>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_h[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_h[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_nt +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b);

  // DiscreteIntegrator: '<S416>/Integrator' incorporates:
  //   Constant: '<S411>/Constant2'
  //   Product: '<S416>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t31_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_a *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_f);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b = ROPOD_4Wheel_TdistZMPC_cntr_B.t31_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_b;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S411>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S411>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mt =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_d *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S411>/Divide1' incorporates:
    //   Constant: '<S411>/Constant1'
    //   Product: '<S411>/Divide'
    //   Sum: '<S411>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_c =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_j4 -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 /
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mt) * (1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S417>/TSamp' incorporates:
  //   DataTypeConversion: '<S417>/Passthrough for tuning'
  //
  //  About '<S417>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mt *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_a;

  // Math: '<S417>/Reciprocal' incorporates:
  //   Constant: '<S417>/Constant'
  //   Sum: '<S417>/SumDen'
  //
  //  About '<S417>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iv +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S417>/Filter Differentiator TF' incorporates:
  //   Constant: '<S417>/Constant'
  //   Product: '<S416>/DOut'
  //   Product: '<S417>/Divide'
  //   Sum: '<S417>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_c -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iv) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_o;

  // Sum: '<S416>/Sum' incorporates:
  //   Constant: '<S411>/Constant4'
  //   DataTypeConversion: '<S417>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S417>/Filter Differentiator TF'
  //   Product: '<S416>/POut'
  //   Product: '<S417>/DenCoefOut'
  //   Product: '<S417>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_d[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_b +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_d[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_o) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mt + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_c +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b);

  // Sum: '<S412>/Sum' incorporates:
  //   UnitDelay: '<S412>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_b = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ma;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S421>/MATLAB Function' incorporates:
    //   Constant: '<S421>/Constant'
    //   Gain: '<S394>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ipw
      * ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b5,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_j, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c);
  }

  // Product: '<S394>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S423>/POut' incorporates:
  //   Constant: '<S419>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_my = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_p;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S419>/Gain2' incorporates:
    //   Constant: '<S419>/Constant4'
    //   Product: '<S419>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_p *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ch;
  }

  // DiscreteIntegrator: '<S423>/Integrator' incorporates:
  //   Product: '<S423>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_p;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_n *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_e);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o;

  // End of DiscreteIntegrator: '<S423>/Integrator'

  // Product: '<S423>/DOut' incorporates:
  //   Constant: '<S419>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_je;

  // SampleTimeMath: '<S424>/TSamp' incorporates:
  //   Constant: '<S419>/Constant5'
  //
  //  About '<S424>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_c *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_l;

  // Math: '<S424>/Reciprocal' incorporates:
  //   Constant: '<S424>/Constant'
  //   Sum: '<S424>/SumDen'
  //
  //  About '<S424>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mp +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S424>/Filter Differentiator TF' incorporates:
  //   Constant: '<S424>/Constant'
  //   Product: '<S424>/Divide'
  //   Sum: '<S424>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_e;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_b;

  // Sum: '<S423>/Sum' incorporates:
  //   Constant: '<S419>/Constant5'
  //   DiscreteTransferFcn: '<S424>/Filter Differentiator TF'
  //   Product: '<S424>/DenCoefOut'
  //   Product: '<S424>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_n[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_n[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_b) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_c +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_my +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i);

  // DiscreteIntegrator: '<S425>/Integrator' incorporates:
  //   Constant: '<S420>/Constant2'
  //   Product: '<S425>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_my_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_gu *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_d);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_my =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_my_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S420>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_h *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S420>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S420>/Divide1' incorporates:
    //   Constant: '<S420>/Constant1'
    //   Product: '<S420>/Divide'
    //   Sum: '<S420>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_l =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_fh -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S426>/TSamp' incorporates:
  //   DataTypeConversion: '<S426>/Passthrough for tuning'
  //
  //  About '<S426>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_i;

  // Math: '<S426>/Reciprocal' incorporates:
  //   Constant: '<S426>/Constant'
  //   Sum: '<S426>/SumDen'
  //
  //  About '<S426>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ij +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S426>/Filter Differentiator TF' incorporates:
  //   Constant: '<S426>/Constant'
  //   Product: '<S425>/DOut'
  //   Product: '<S426>/Divide'
  //   Sum: '<S426>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_l -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ij) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_h;

  // Sum: '<S425>/Sum' incorporates:
  //   Constant: '<S420>/Constant4'
  //   DataTypeConversion: '<S426>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S426>/Filter Differentiator TF'
  //   Product: '<S425>/POut'
  //   Product: '<S426>/DenCoefOut'
  //   Product: '<S426>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_m[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h2 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_m[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_h) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_a +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_my);

  // Sum: '<S421>/Sum' incorporates:
  //   UnitDelay: '<S421>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ni;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S430>/MATLAB Function' incorporates:
    //   Constant: '<S430>/Constant'
    //   Gain: '<S395>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ix *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_or,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_c, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_b);
  }

  // Product: '<S395>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S432>/POut' incorporates:
  //   Constant: '<S428>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_f;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S428>/Gain2' incorporates:
    //   Constant: '<S428>/Constant4'
    //   Product: '<S428>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ip5;
  }

  // DiscreteIntegrator: '<S432>/Integrator' incorporates:
  //   Product: '<S432>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_gs != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_l;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b5_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_gj *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_d);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b5_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p;

  // End of DiscreteIntegrator: '<S432>/Integrator'

  // Product: '<S432>/DOut' incorporates:
  //   Constant: '<S428>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fo;

  // SampleTimeMath: '<S433>/TSamp' incorporates:
  //   Constant: '<S428>/Constant5'
  //
  //  About '<S433>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_o *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_g;

  // Math: '<S433>/Reciprocal' incorporates:
  //   Constant: '<S433>/Constant'
  //   Sum: '<S433>/SumDen'
  //
  //  About '<S433>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bh +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S433>/Filter Differentiator TF' incorporates:
  //   Constant: '<S433>/Constant'
  //   Product: '<S433>/Divide'
  //   Sum: '<S433>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__o ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__o !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_bh;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bh) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l;

  // Sum: '<S432>/Sum' incorporates:
  //   Constant: '<S428>/Constant5'
  //   DiscreteTransferFcn: '<S433>/Filter Differentiator TF'
  //   Product: '<S433>/DenCoefOut'
  //   Product: '<S433>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_di[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_o +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_di[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_o +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b5);

  // DiscreteIntegrator: '<S434>/Integrator' incorporates:
  //   Constant: '<S429>/Constant2'
  //   Product: '<S434>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_e *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_l);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_pf;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S429>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_p *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S429>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mo =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_h *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S429>/Divide1' incorporates:
    //   Constant: '<S429>/Constant1'
    //   Product: '<S429>/Divide'
    //   Sum: '<S429>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_c -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 /
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mo) * (1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S435>/TSamp' incorporates:
  //   DataTypeConversion: '<S435>/Passthrough for tuning'
  //
  //  About '<S435>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mo *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_e;

  // Math: '<S435>/Reciprocal' incorporates:
  //   Constant: '<S435>/Constant'
  //   Sum: '<S435>/SumDen'
  //
  //  About '<S435>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ev +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S435>/Filter Differentiator TF' incorporates:
  //   Constant: '<S435>/Constant'
  //   Product: '<S434>/DOut'
  //   Product: '<S435>/Divide'
  //   Sum: '<S435>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ev) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i;

  // Sum: '<S434>/Sum' incorporates:
  //   Constant: '<S429>/Constant4'
  //   DataTypeConversion: '<S435>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S435>/Filter Differentiator TF'
  //   Product: '<S434>/POut'
  //   Product: '<S435>/DenCoefOut'
  //   Product: '<S435>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_g[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_p +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_g[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_mo + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_p1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n);

  // Sum: '<S430>/Sum' incorporates:
  //   UnitDelay: '<S430>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_h = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jk;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S439>/MATLAB Function' incorporates:
    //   Constant: '<S439>/Constant'
    //   Gain: '<S396>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_k *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hy,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_n);
  }

  // Product: '<S396>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S441>/POut' incorporates:
  //   Constant: '<S437>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_mz = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_fr;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S437>/Gain2' incorporates:
    //   Constant: '<S437>/Constant4'
    //   Product: '<S437>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_fr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_co;
  }

  // DiscreteIntegrator: '<S441>/Integrator' incorporates:
  //   Product: '<S441>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_h;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_p_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_gh *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_m);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_p_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_e;

  // End of DiscreteIntegrator: '<S441>/Integrator'

  // Product: '<S441>/DOut' incorporates:
  //   Constant: '<S437>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_aq;

  // SampleTimeMath: '<S442>/TSamp' incorporates:
  //   Constant: '<S437>/Constant5'
  //
  //  About '<S442>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_i1;

  // Math: '<S442>/Reciprocal' incorporates:
  //   Constant: '<S442>/Constant'
  //   Sum: '<S442>/SumDen'
  //
  //  About '<S442>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iq +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S442>/Filter Differentiator TF' incorporates:
  //   Constant: '<S442>/Constant'
  //   Product: '<S442>/Divide'
  //   Sum: '<S442>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_iy ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_iy !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_a;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_iy =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_bw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iq) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k;

  // Sum: '<S441>/Sum' incorporates:
  //   Constant: '<S437>/Constant5'
  //   DiscreteTransferFcn: '<S442>/Filter Differentiator TF'
  //   Product: '<S442>/DenCoefOut'
  //   Product: '<S442>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_n0[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_bw +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_n0[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_mz +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_p);

  // DiscreteIntegrator: '<S443>/Integrator' incorporates:
  //   Constant: '<S438>/Constant2'
  //   Product: '<S443>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_mz_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_m *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_e);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_mz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_mz_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_cz;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S438>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ok *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S438>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_a *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S438>/Divide1' incorporates:
    //   Constant: '<S438>/Constant1'
    //   Product: '<S438>/Divide'
    //   Sum: '<S438>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_lt =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_l -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_f)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S444>/TSamp' incorporates:
  //   DataTypeConversion: '<S444>/Passthrough for tuning'
  //
  //  About '<S444>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_f *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_k;

  // Math: '<S444>/Reciprocal' incorporates:
  //   Constant: '<S444>/Constant'
  //   Sum: '<S444>/SumDen'
  //
  //  About '<S444>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nt +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S444>/Filter Differentiator TF' incorporates:
  //   Constant: '<S444>/Constant'
  //   Product: '<S443>/DOut'
  //   Product: '<S444>/Divide'
  //   Sum: '<S444>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_lt
    - (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nt) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m;

  // Sum: '<S443>/Sum' incorporates:
  //   Constant: '<S438>/Constant4'
  //   DataTypeConversion: '<S444>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S444>/Filter Differentiator TF'
  //   Product: '<S443>/POut'
  //   Product: '<S444>/DenCoefOut'
  //   Product: '<S444>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_p2[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_a +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_p2[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_f + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_h +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_mz);

  // Sum: '<S439>/Sum' incorporates:
  //   UnitDelay: '<S439>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_jg = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_he;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S448>/MATLAB Function' incorporates:
    //   Constant: '<S448>/Constant'
    //   Gain: '<S397>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ap *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_in,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_e, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i);
  }

  // Product: '<S397>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S450>/POut' incorporates:
  //   Constant: '<S446>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_od = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S446>/Gain2' incorporates:
    //   Constant: '<S446>/Constant4'
    //   Product: '<S446>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_g;
  }

  // DiscreteIntegrator: '<S450>/Integrator' incorporates:
  //   Product: '<S450>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_i != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_p3;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_ge *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_b);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d4;

  // End of DiscreteIntegrator: '<S450>/Integrator'

  // Product: '<S450>/DOut' incorporates:
  //   Constant: '<S446>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fm;

  // SampleTimeMath: '<S451>/TSamp' incorporates:
  //   Constant: '<S446>/Constant5'
  //
  //  About '<S451>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_i *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_h;

  // Math: '<S451>/Reciprocal' incorporates:
  //   Constant: '<S451>/Constant'
  //   Sum: '<S451>/SumDen'
  //
  //  About '<S451>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ls +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S451>/Filter Differentiator TF' incorporates:
  //   Constant: '<S451>/Constant'
  //   Product: '<S451>/Divide'
  //   Sum: '<S451>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_il ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_il !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ew =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_nw;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_il =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ls) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ew;

  // Sum: '<S450>/Sum' incorporates:
  //   Constant: '<S446>/Constant5'
  //   DiscreteTransferFcn: '<S451>/Filter Differentiator TF'
  //   Product: '<S451>/DenCoefOut'
  //   Product: '<S451>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_na[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_na[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ew) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_i +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_od +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j);

  // DiscreteIntegrator: '<S452>/Integrator' incorporates:
  //   Constant: '<S447>/Constant2'
  //   Product: '<S452>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_od_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_p *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_b);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_od =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_od_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_nk;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S447>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_b *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S447>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S447>/Divide1' incorporates:
    //   Constant: '<S447>/Constant1'
    //   Product: '<S447>/Divide'
    //   Sum: '<S447>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_e =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_o -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_i)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S453>/TSamp' incorporates:
  //   DataTypeConversion: '<S453>/Passthrough for tuning'
  //
  //  About '<S453>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_i *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_o;

  // Math: '<S453>/Reciprocal' incorporates:
  //   Constant: '<S453>/Constant'
  //   Sum: '<S453>/SumDen'
  //
  //  About '<S453>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jw +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S453>/Filter Differentiator TF' incorporates:
  //   Constant: '<S453>/Constant'
  //   Product: '<S452>/DOut'
  //   Product: '<S453>/Divide'
  //   Sum: '<S453>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_e -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jw) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d;

  // Sum: '<S452>/Sum' incorporates:
  //   Constant: '<S447>/Constant4'
  //   DataTypeConversion: '<S453>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S453>/Filter Differentiator TF'
  //   Product: '<S452>/POut'
  //   Product: '<S453>/DenCoefOut'
  //   Product: '<S453>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ha[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_n +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ha[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_i
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_he +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_od);

  // Sum: '<S448>/Sum' incorporates:
  //   UnitDelay: '<S448>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_hl = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_gt;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S457>/MATLAB Function' incorporates:
    //   Constant: '<S457>/Constant'
    //   Gain: '<S398>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ib *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mf,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_d, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m);
  }

  // Product: '<S398>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S459>/POut' incorporates:
  //   Constant: '<S455>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_nu = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S455>/Gain2' incorporates:
    //   Constant: '<S455>/Constant4'
    //   Product: '<S455>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_fw;
  }

  // DiscreteIntegrator: '<S459>/Integrator' incorporates:
  //   Product: '<S459>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_p != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_na =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_a;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ms_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_i *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_l);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ms =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ms_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_na;

  // End of DiscreteIntegrator: '<S459>/Integrator'

  // Product: '<S459>/DOut' incorporates:
  //   Constant: '<S455>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_kt;

  // SampleTimeMath: '<S460>/TSamp' incorporates:
  //   Constant: '<S455>/Constant5'
  //
  //  About '<S460>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_a *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_is;

  // Math: '<S460>/Reciprocal' incorporates:
  //   Constant: '<S460>/Constant'
  //   Sum: '<S460>/SumDen'
  //
  //  About '<S460>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_is +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S460>/Filter Differentiator TF' incorporates:
  //   Constant: '<S460>/Constant'
  //   Product: '<S460>/Divide'
  //   Sum: '<S460>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__n ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__n !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ev =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ez;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_is) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ev;

  // Sum: '<S459>/Sum' incorporates:
  //   Constant: '<S455>/Constant5'
  //   DiscreteTransferFcn: '<S460>/Filter Differentiator TF'
  //   Product: '<S460>/DenCoefOut'
  //   Product: '<S460>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_f[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_e +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_f[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ev) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_a +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_nu +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ms);

  // DiscreteIntegrator: '<S461>/Integrator' incorporates:
  //   Constant: '<S456>/Constant2'
  //   Product: '<S461>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_nu_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_au *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_bb);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_nu =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_nu_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_na5;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S456>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ck *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S456>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_oz *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S456>/Divide1' incorporates:
    //   Constant: '<S456>/Constant1'
    //   Product: '<S456>/Divide'
    //   Sum: '<S456>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_j =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_px -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_o)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S462>/TSamp' incorporates:
  //   DataTypeConversion: '<S462>/Passthrough for tuning'
  //
  //  About '<S462>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_o *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_m;

  // Math: '<S462>/Reciprocal' incorporates:
  //   Constant: '<S462>/Constant'
  //   Sum: '<S462>/SumDen'
  //
  //  About '<S462>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gs +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S462>/Filter Differentiator TF' incorporates:
  //   Constant: '<S462>/Constant'
  //   Product: '<S461>/DOut'
  //   Product: '<S462>/Divide'
  //   Sum: '<S462>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_j -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gs) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_c;

  // Sum: '<S461>/Sum' incorporates:
  //   Constant: '<S456>/Constant4'
  //   DataTypeConversion: '<S462>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S462>/Filter Differentiator TF'
  //   Product: '<S461>/POut'
  //   Product: '<S462>/DenCoefOut'
  //   Product: '<S462>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_nd[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_nd[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_c) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_o
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_d +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_nu);

  // Sum: '<S457>/Sum' incorporates:
  //   UnitDelay: '<S457>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_l = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kq;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S466>/MATLAB Function' incorporates:
    //   Constant: '<S466>/Constant'
    //   Gain: '<S399>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_cq *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nf5,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a);
  }

  // Product: '<S399>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S468>/POut' incorporates:
  //   Constant: '<S464>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_n;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S464>/Gain2' incorporates:
    //   Constant: '<S464>/Constant4'
    //   Product: '<S464>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_n *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_e;
  }

  // DiscreteIntegrator: '<S468>/Integrator' incorporates:
  //   Product: '<S468>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ec =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_i;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_mx *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_h);
  ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ec;

  // End of DiscreteIntegrator: '<S468>/Integrator'

  // Product: '<S468>/DOut' incorporates:
  //   Constant: '<S464>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_bj = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pe0;

  // SampleTimeMath: '<S469>/TSamp' incorporates:
  //   Constant: '<S464>/Constant5'
  //
  //  About '<S469>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_j *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_im;

  // Math: '<S469>/Reciprocal' incorporates:
  //   Constant: '<S469>/Constant'
  //   Sum: '<S469>/SumDen'
  //
  //  About '<S469>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jl +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S469>/Filter Differentiator TF' incorporates:
  //   Constant: '<S469>/Constant'
  //   Product: '<S469>/Divide'
  //   Sum: '<S469>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_bt;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_lw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_bj - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jl) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f;

  // Sum: '<S468>/Sum' incorporates:
  //   Constant: '<S464>/Constant5'
  //   DiscreteTransferFcn: '<S469>/Filter Differentiator TF'
  //   Product: '<S469>/DenCoefOut'
  //   Product: '<S469>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_a[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_lw +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_a[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_j +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e +
     ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz);

  // DiscreteIntegrator: '<S470>/Integrator' incorporates:
  //   Constant: '<S465>/Constant2'
  //   Product: '<S470>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_aq *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_c4);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_e5;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S465>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_pn *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S465>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_n *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S465>/Divide1' incorporates:
    //   Constant: '<S465>/Constant1'
    //   Product: '<S465>/Divide'
    //   Sum: '<S465>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_f =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_b -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S471>/TSamp' incorporates:
  //   DataTypeConversion: '<S471>/Passthrough for tuning'
  //
  //  About '<S471>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_az;

  // Math: '<S471>/Reciprocal' incorporates:
  //   Constant: '<S471>/Constant'
  //   Sum: '<S471>/SumDen'
  //
  //  About '<S471>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iqn +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S471>/Filter Differentiator TF' incorporates:
  //   Constant: '<S471>/Constant'
  //   Product: '<S470>/DOut'
  //   Product: '<S471>/Divide'
  //   Sum: '<S471>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_f -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iqn) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ep;

  // Sum: '<S470>/Sum' incorporates:
  //   Constant: '<S465>/Constant4'
  //   DataTypeConversion: '<S471>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S471>/Filter Differentiator TF'
  //   Product: '<S470>/POut'
  //   Product: '<S471>/DenCoefOut'
  //   Product: '<S471>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_nf[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_nf[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ep) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_k +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e);

  // Sum: '<S466>/Sum' incorporates:
  //   UnitDelay: '<S466>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_bj =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l;

  // MATLAB Function: '<S41>/Gl_matrices' incorporates:
  //   SignalConversion: '<S361>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj;
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t39 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp
    * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t22 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t8 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[0] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[4] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[5] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[6] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[7] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t49) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[8] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t49) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[9] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[10] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[11] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[12] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd -
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[13] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[14] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[15] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[16] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[17] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[18] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[19] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[20] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[21] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[22] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[23] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj * 0.5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[24] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[25] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 0.5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t7) * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[26] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t9 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[27] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 0.5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[28] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp -
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn * 0.5)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[29] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn * 0.5
     + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[30] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[31] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[32] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[33] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[34] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[35] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[36] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[37] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.g_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[38] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.g_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[39] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[40] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o
    + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7) * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[41] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[42] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[43] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t18 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t22) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp) *
    -ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[44] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t18 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t22) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       15; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[1 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
      = ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 15];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[2 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
      = ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 30];
  }

  // SampleTimeMath: '<S330>/TSamp' incorporates:
  //   Gain: '<S40>/Gain3'
  //   SignalConversion: '<S39>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S330>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_a *
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_gx;

  // Sum: '<S330>/Diff' incorporates:
  //   UnitDelay: '<S330>/UD'
  //
  //  Block description for '<S330>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S330>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m -
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0];

  // SampleTimeMath: '<S330>/TSamp' incorporates:
  //   Gain: '<S40>/Gain3'
  //   SignalConversion: '<S39>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S330>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_a *
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_gx;

  // Sum: '<S330>/Diff' incorporates:
  //   UnitDelay: '<S330>/UD'
  //
  //  Block description for '<S330>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S330>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m -
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1];

  // SampleTimeMath: '<S330>/TSamp' incorporates:
  //   Gain: '<S40>/Gain3'
  //   SignalConversion: '<S39>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S330>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_a *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_gx;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2903.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n);

    // MATLAB Function: '<S337>/MATLAB Function' incorporates:
    //   Constant: '<S337>/Constant'
    //   Gain: '<S331>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter6'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_k1 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_aj,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_ih, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx);
  }

  // MATLAB Function: '<S11>/Jqwl_matrix' incorporates:
  //   SignalConversion: '<S20>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t23 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t22 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t25 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t30 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t33 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t34 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t31 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t40 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t41 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t42 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t50 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[1] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t19 - ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp *=
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[2] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t27 + ROPOD_4Wheel_TdistZMPC_cntr_B.t25) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t30) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t26) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[4] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t19) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[5] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t27 + ROPOD_4Wheel_TdistZMPC_cntr_B.t25) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t30) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t26) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[6] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t8 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[7] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t23 - ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[8] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t34 + ROPOD_4Wheel_TdistZMPC_cntr_B.t35) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t31) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t33) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[9] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t8 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[10] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t23) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[11] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t34 + ROPOD_4Wheel_TdistZMPC_cntr_B.t35) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t31) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t33) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[12] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[13] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t24 - ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[14] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t41 + ROPOD_4Wheel_TdistZMPC_cntr_B.t42) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t40) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[15] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[16] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t24) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[17] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t41 + ROPOD_4Wheel_TdistZMPC_cntr_B.t42) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t40) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[18] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t16 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[19] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t22 - ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[20] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t39 + ROPOD_4Wheel_TdistZMPC_cntr_B.t49) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t50) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t38) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[21] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t16 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[22] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t22) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[23] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t39 + ROPOD_4Wheel_TdistZMPC_cntr_B.t49) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t50) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t38) *
    0.125;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       3; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    // Product: '<S11>/Product3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 8;
         ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] +=
        ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.jmax + ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[ROPOD_4Wheel_TdistZMPC_cntr_B.jmax];
    }

    // End of Product: '<S11>/Product3'

    // Sum: '<S40>/Sum'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] -=
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2716.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S5>/Get Parameter'
  }

  // Product: '<S331>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i;

  // Product: '<S339>/POut' incorporates:
  //   Constant: '<S335>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_hj;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2898.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e);

    // Gain: '<S335>/Gain2' incorporates:
    //   Constant: '<S335>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter3'
    //   Product: '<S335>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_hj *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_an;
  }

  // Logic: '<S15>/Logical Operator'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S339>/Integrator' incorporates:
  //   Product: '<S339>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_do != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_b;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_b *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_g);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j;

  // End of DiscreteIntegrator: '<S339>/Integrator'

  // Product: '<S339>/DOut' incorporates:
  //   Constant: '<S335>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nz;

  // SampleTimeMath: '<S340>/TSamp' incorporates:
  //   Constant: '<S335>/Constant5'
  //
  //  About '<S340>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h4 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_ic;

  // Math: '<S340>/Reciprocal' incorporates:
  //   Constant: '<S340>/Constant'
  //   Sum: '<S340>/SumDen'
  //
  //  About '<S340>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lb +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S340>/Filter Differentiator TF' incorporates:
  //   Constant: '<S340>/Constant'
  //   Product: '<S340>/Divide'
  //   Sum: '<S340>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mv =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_p;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lb) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mv;

  // Sum: '<S339>/Sum' incorporates:
  //   Constant: '<S335>/Constant5'
  //   DiscreteTransferFcn: '<S340>/Filter Differentiator TF'
  //   Product: '<S340>/DenCoefOut'
  //   Product: '<S340>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_e[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t6 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_e[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mv) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h4 +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.t4);

  // DiscreteIntegrator: '<S341>/Integrator' incorporates:
  //   Constant: '<S336>/Constant2'
  //   Product: '<S341>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_pc *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_p);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t7 = ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_m;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2900.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m);

    // Gain: '<S336>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_j *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

    // MATLABSystem: '<S5>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2902.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n);

    // Gain: '<S336>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter5'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_m *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

    // Product: '<S336>/Divide1' incorporates:
    //   Constant: '<S336>/Constant1'
    //   Product: '<S336>/Divide'
    //   Sum: '<S336>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_d =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_h -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S342>/TSamp' incorporates:
  //   DataTypeConversion: '<S342>/Passthrough for tuning'
  //
  //  About '<S342>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_fp;

  // Math: '<S342>/Reciprocal' incorporates:
  //   Constant: '<S342>/Constant'
  //   Sum: '<S342>/SumDen'
  //
  //  About '<S342>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S342>/Filter Differentiator TF' incorporates:
  //   Constant: '<S342>/Constant'
  //   Product: '<S341>/DOut'
  //   Product: '<S342>/Divide'
  //   Sum: '<S342>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t9 = ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_d -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5;

  // Sum: '<S341>/Sum' incorporates:
  //   Constant: '<S336>/Constant4'
  //   DataTypeConversion: '<S342>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S342>/Filter Differentiator TF'
  //   Product: '<S341>/POut'
  //   Product: '<S342>/DenCoefOut'
  //   Product: '<S342>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_mi[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t9 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_mi[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_ae +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t7);

  // Sum: '<S337>/Sum' incorporates:
  //   UnitDelay: '<S337>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 = ROPOD_4Wheel_TdistZMPC_cntr_B.t8 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nx;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S346>/MATLAB Function' incorporates:
    //   Constant: '<S346>/Constant'
    //   Gain: '<S332>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_pe *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gi,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_k, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_j);
  }

  // Product: '<S332>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i;

  // Product: '<S348>/POut' incorporates:
  //   Constant: '<S344>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_iu;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S344>/Gain2' incorporates:
    //   Constant: '<S344>/Constant4'
    //   Product: '<S344>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_er =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_iu *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_l;
  }

  // Logic: '<S15>/Logical Operator1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1 =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S348>/Integrator' incorporates:
  //   Product: '<S348>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1 ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_g3;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_ed *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_er);
  ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g;

  // End of DiscreteIntegrator: '<S348>/Integrator'

  // Product: '<S348>/DOut' incorporates:
  //   Constant: '<S344>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hi;

  // SampleTimeMath: '<S349>/TSamp' incorporates:
  //   Constant: '<S344>/Constant5'
  //
  //  About '<S349>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_cs *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_oi;

  // Math: '<S349>/Reciprocal' incorporates:
  //   Constant: '<S349>/Constant'
  //   Sum: '<S349>/SumDen'
  //
  //  About '<S349>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fw +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S349>/Filter Differentiator TF' incorporates:
  //   Constant: '<S349>/Constant'
  //   Product: '<S349>/Divide'
  //   Sum: '<S349>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1)
  {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_m;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fw) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g;

  // Sum: '<S348>/Sum' incorporates:
  //   Constant: '<S344>/Constant5'
  //   DiscreteTransferFcn: '<S349>/Filter Differentiator TF'
  //   Product: '<S349>/DenCoefOut'
  //   Product: '<S349>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_c[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t14 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_c[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_cs +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n);

  // DiscreteIntegrator: '<S350>/Integrator' incorporates:
  //   Constant: '<S345>/Constant2'
  //   Product: '<S350>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_l *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_c4j);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S345>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ba *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

    // Gain: '<S345>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_k *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

    // Product: '<S345>/Divide1' incorporates:
    //   Constant: '<S345>/Constant1'
    //   Product: '<S345>/Divide'
    //   Sum: '<S345>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_m =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_hf -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_d)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S351>/TSamp' incorporates:
  //   DataTypeConversion: '<S351>/Passthrough for tuning'
  //
  //  About '<S351>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_d *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_b;

  // Math: '<S351>/Reciprocal' incorporates:
  //   Constant: '<S351>/Constant'
  //   Sum: '<S351>/SumDen'
  //
  //  About '<S351>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pp +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S351>/Filter Differentiator TF' incorporates:
  //   Constant: '<S351>/Constant'
  //   Product: '<S350>/DOut'
  //   Product: '<S351>/Divide'
  //   Sum: '<S351>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_m
    - (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ac;

  // Sum: '<S350>/Sum' incorporates:
  //   Constant: '<S345>/Constant4'
  //   DataTypeConversion: '<S351>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S351>/Filter Differentiator TF'
  //   Product: '<S350>/POut'
  //   Product: '<S351>/DenCoefOut'
  //   Product: '<S351>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_l[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_l[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ac) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_d + (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_a1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t16);

  // Sum: '<S346>/Sum' incorporates:
  //   UnitDelay: '<S346>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d53;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter9'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2923.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);

    // MATLAB Function: '<S355>/MATLAB Function' incorporates:
    //   Constant: '<S355>/Constant'
    //   Gain: '<S333>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter9'

    ROPOD_4Wheel_T_MATLABFunction_j(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_iy *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dag,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_m, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c2);

    // MATLABSystem: '<S5>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2919.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_h = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // End of MATLABSystem: '<S5>/Get Parameter1'
  }

  // Product: '<S333>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[2] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_h;

  // Product: '<S357>/POut' incorporates:
  //   Constant: '<S353>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_e;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2920.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);

    // Gain: '<S353>/Gain2' incorporates:
    //   Constant: '<S353>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter2'
    //   Product: '<S353>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_bm =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_e *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_n;
  }

  // Logic: '<S15>/Logical Operator2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2 =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S357>/Integrator' incorporates:
  //   Product: '<S357>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2 ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_h4;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_d *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_bm);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 = ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h;

  // End of DiscreteIntegrator: '<S357>/Integrator'

  // Product: '<S357>/DOut' incorporates:
  //   Constant: '<S353>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l3;

  // SampleTimeMath: '<S358>/TSamp' incorporates:
  //   Constant: '<S353>/Constant5'
  //
  //  About '<S358>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_ac *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_mt;

  // Math: '<S358>/Reciprocal' incorporates:
  //   Constant: '<S358>/Constant'
  //   Sum: '<S358>/SumDen'
  //
  //  About '<S358>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_he +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S358>/Filter Differentiator TF' incorporates:
  //   Constant: '<S358>/Constant'
  //   Product: '<S358>/Divide'
  //   Sum: '<S358>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2)
  {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_o3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_mq;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t22 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_he) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_o3;

  // Sum: '<S357>/Sum' incorporates:
  //   Constant: '<S353>/Constant5'
  //   DiscreteTransferFcn: '<S358>/Filter Differentiator TF'
  //   Product: '<S358>/DenCoefOut'
  //   Product: '<S358>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_b[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t22 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_b[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_o3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_ac +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.t18);

  // DiscreteIntegrator: '<S359>/Integrator' incorporates:
  //   Constant: '<S354>/Constant2'
  //   Product: '<S359>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_ef *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_o);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26 = ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_gb;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2921.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);

    // Gain: '<S354>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter7'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_et *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // MATLABSystem: '<S5>/Get Parameter8'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2922.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);

    // Gain: '<S354>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter8'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_f3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // Product: '<S354>/Divide1' incorporates:
    //   Constant: '<S354>/Constant1'
    //   Product: '<S354>/Divide'
    //   Sum: '<S354>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_jp =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_ok -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t24 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t24);
  }

  // SampleTimeMath: '<S360>/TSamp' incorporates:
  //   DataTypeConversion: '<S360>/Passthrough for tuning'
  //
  //  About '<S360>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_d;

  // Math: '<S360>/Reciprocal' incorporates:
  //   Constant: '<S360>/Constant'
  //   Sum: '<S360>/SumDen'
  //
  //  About '<S360>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h3 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S360>/Filter Differentiator TF' incorporates:
  //   Constant: '<S360>/Constant'
  //   Product: '<S359>/DOut'
  //   Product: '<S360>/Divide'
  //   Sum: '<S360>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t33 = ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_jp -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_oc;

  // Sum: '<S359>/Sum' incorporates:
  //   Constant: '<S354>/Constant4'
  //   DataTypeConversion: '<S360>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S360>/Filter Differentiator TF'
  //   Product: '<S359>/POut'
  //   Product: '<S360>/DenCoefOut'
  //   Product: '<S360>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_aj[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t33 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_aj[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_oc) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_n2 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t26);

  // Sum: '<S355>/Sum' incorporates:
  //   UnitDelay: '<S355>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = ROPOD_4Wheel_TdistZMPC_cntr_B.t27 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cm;

  // Sum: '<S40>/Sum1' incorporates:
  //   Gain: '<S40>/Gain'
  //   Gain: '<S40>/Gain1'
  //   Product: '<S337>/Product1'
  //   Product: '<S346>/Product1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.FFxy_mass *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_ih * ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.FFxy_mass *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_k * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;

  // MATLAB Function: '<S78>/MATLAB Function' incorporates:
  //   Constant: '<S43>/Constant'
  //   Constant: '<S78>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_epj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pp3,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t41, &ROPOD_4Wheel_TdistZMPC_cntr_B.t34);

  // Sum: '<S78>/Sum' incorporates:
  //   DiscreteIntegrator: '<S66>/Discrete-Time Integrator'
  //   UnitDelay: '<S78>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_mz;

  // Product: '<S78>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = ROPOD_4Wheel_TdistZMPC_cntr_B.t41 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;

  // MATLAB Function: '<S76>/MATLAB Function' incorporates:
  //   Constant: '<S43>/Constant'
  //   Constant: '<S76>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_epj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b4o,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t40, &ROPOD_4Wheel_TdistZMPC_cntr_B.t35);

  // Sum: '<S76>/Sum' incorporates:
  //   UnitDelay: '<S76>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0] +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k3;

  // Product: '<S76>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o = ROPOD_4Wheel_TdistZMPC_cntr_B.t40 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit;

  // Outputs for Enabled SubSystem: '<S38>/ZMPC_x' incorporates:
  //   EnablePort: '<S44>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE) {
      // InitializeConditions for Delay: '<S44>/Delay'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_d =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition;

      // InitializeConditions for Delay: '<S44>/Delay1'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_k =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition;

      // InitializeConditions for Delay: '<S44>/Delay2'
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition;
      }

      // End of InitializeConditions for Delay: '<S44>/Delay2'

      // InitializeConditions for Delay: '<S44>/Delay3'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_b =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition;

      // InitializeConditions for Delay: '<S44>/Delay4'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_h =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition;

      // InitializeConditions for Delay: '<S44>/Delay6'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_l =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE = true;
    }

    // SignalConversion: '<S327>/TmpSignal ConversionAt SFunction Inport1' incorporates:
    //   MATLAB Function: '<S44>/Zone MPC'
    //   Sum: '<S43>/Sum'
    //   Sum: '<S43>/Sum1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o;
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n -
      ROPOD_4Wheel_TdistZMPC_cntr_B.distance_f;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj =
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o - ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hh;

    // MATLAB Function: '<S44>/Zone MPC' incorporates:
    //   Constant: '<S44>/Constant16'
    //   Constant: '<S44>/Constant28'
    //   Constant: '<S44>/Constant30'
    //   Constant: '<S44>/Constant31'
    //   Constant: '<S44>/Constant32'
    //   Delay: '<S44>/Delay'
    //   Delay: '<S44>/Delay1'
    //   Delay: '<S44>/Delay2'
    //   Delay: '<S44>/Delay3'
    //   Delay: '<S44>/Delay4'
    //   Delay: '<S44>/Delay6'
    //   SignalConversion: '<S327>/TmpSignal ConversionAt SFunction Inport1'

    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_l == 10.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_max;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[1] =
        -ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fr_min;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3] =
        -ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min;
      memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.c[0], 0, 82U * sizeof(real_T));
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 20;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax <<
          2) + 1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = (1 +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jmax) << 2;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_i >
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_m) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp =
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_m - ROPOD_4Wheel_TdistZMPC_cntr_B.b_i;
        ROPOD_4Wheel_TdistZMPC_cntr_B.h_size =
          ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp + 1;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.h_data[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
            = (int8_T)((int8_T)(ROPOD_4Wheel_TdistZMPC_cntr_B.b_i +
                                ROPOD_4Wheel_TdistZMPC_cntr_B.i_m) - 1);
        }

        for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
             ROPOD_4Wheel_TdistZMPC_cntr_B.h_size;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.c[ROPOD_4Wheel_TdistZMPC_cntr_B.h_data[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]]
            =
            ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.c[80] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c[81] =
        -ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min;
      memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.A[0],
             &ROPOD_4Wheel_TdistZMPC_cntr_P.xH[0], 1600U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = ROPOD_4Wheel_TdistZMPC_c_xpotrf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.A);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax == 0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 41;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jmax--;
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.b_i + 1 <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.jmax) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 1;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_i) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.A[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
            40 * ROPOD_4Wheel_TdistZMPC_cntr_B.b_i) - 1] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.b_i++;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 1600;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Linv[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          l[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      }

      ROPOD_4Wheel_TdistZMPC_mldivide(ROPOD_4Wheel_TdistZMPC_cntr_B.A,
        ROPOD_4Wheel_TdistZMPC_cntr_B.Linv);
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 20;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
          ROPOD_4Wheel_TdistZMPC_cntr_P.xF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
          60] * ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj +
          (ROPOD_4Wheel_TdistZMPC_cntr_P.xF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
           40] * ROPOD_4Wheel_TdistZMPC_cntr_B.t24 +
           (ROPOD_4Wheel_TdistZMPC_cntr_P.xF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
            20] * ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o +
            ROPOD_4Wheel_TdistZMPC_cntr_P.xF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] *
            ROPOD_4Wheel_TdistZMPC_cntr_B.g_n));
        ROPOD_4Wheel_TdistZMPC_cntr_B.Fxk[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.t39;
      }

      memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.f[0], 0, 40U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o = 2.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 20;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.f[(int32_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.g_n - 1] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.Fxk[ROPOD_4Wheel_TdistZMPC_cntr_B.jmax];
        ROPOD_4Wheel_TdistZMPC_cntr_B.f[(int32_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o - 1] =
          ROPOD_4Wheel_TdistZMPC_cntr_P.xrho;
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_n += 2.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o += 2.0;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.bv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          (ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
           == 0.0);
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 4080;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.dv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          -ROPOD_4Wheel_TdistZMPC_cntr_P.xA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 82;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          -((((ROPOD_4Wheel_TdistZMPC_cntr_P.xW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m
               + 82] * ROPOD_4Wheel_TdistZMPC_cntr_B.t32 +
               ROPOD_4Wheel_TdistZMPC_cntr_P.xW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
               * ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn) +
              ROPOD_4Wheel_TdistZMPC_cntr_P.xW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m
              + 164] * ROPOD_4Wheel_TdistZMPC_cntr_B.t24) +
             ROPOD_4Wheel_TdistZMPC_cntr_P.xW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m
             + 246] *
             ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj) +
            ROPOD_4Wheel_TdistZMPC_cntr_B.c[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]);
      }

      memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[82], 0, 20U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h =
        ROPOD_4Wheel_TdistZ_ifWhileCond(ROPOD_4Wheel_TdistZMPC_cntr_B.bv0);
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.bv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          ((!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) &&
           (ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
            != 0.0));
      }

      ROPOD_4Wheel_TdistZ_mpcqpsolver(ROPOD_4Wheel_TdistZMPC_cntr_B.Linv,
        ROPOD_4Wheel_TdistZMPC_cntr_B.f, ROPOD_4Wheel_TdistZMPC_cntr_B.dv0,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i, ROPOD_4Wheel_TdistZMPC_cntr_B.bv0,
        ROPOD_4Wheel_TdistZMPC_cntr_B.u_qp, &ROPOD_4Wheel_TdistZMPC_cntr_B.t23,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iAi);
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = ROPOD_4Wheel_TdistZMPC_cntr_B.u_qp[1];
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn = ROPOD_4Wheel_TdistZMPC_cntr_B.u_qp[0];
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.iAi[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.t42 = 1.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_h;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_b;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_d;
      ROPOD_4Wheel_TdistZMPC_cntr_B.t23 =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_k;
      memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[0],
             &ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_m[0], 102U * sizeof
             (real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42 =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_l + 1.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.mv_c = ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;

    // Update for Delay: '<S44>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv_c;

    // Update for Delay: '<S44>/Delay1' incorporates:
    //   MATLAB Function: '<S44>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t23;

    // Update for Delay: '<S44>/Delay2'
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_m[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[0], 102U * sizeof(real_T));

    // Update for Delay: '<S44>/Delay3' incorporates:
    //   MATLAB Function: '<S44>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_b =
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o;

    // Update for Delay: '<S44>/Delay4' incorporates:
    //   MATLAB Function: '<S44>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // Update for Delay: '<S44>/Delay6' incorporates:
    //   MATLAB Function: '<S44>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_l =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE) {
      // Disable for Outport: '<S44>/Fx'
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv_c = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S38>/ZMPC_x'

  // MATLAB Function: '<S82>/MATLAB Function' incorporates:
  //   Constant: '<S43>/Constant'
  //   Constant: '<S82>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_epj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bb,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t23, &ROPOD_4Wheel_TdistZMPC_cntr_B.t40);

  // Sum: '<S82>/Sum' incorporates:
  //   DiscreteIntegrator: '<S67>/Discrete-Time Integrator'
  //   UnitDelay: '<S82>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.distance_f =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_pc;

  // Product: '<S82>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = ROPOD_4Wheel_TdistZMPC_cntr_B.t23 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.distance_f;

  // MATLAB Function: '<S80>/MATLAB Function' incorporates:
  //   Constant: '<S43>/Constant'
  //   Constant: '<S80>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_epj,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_em,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t42, &ROPOD_4Wheel_TdistZMPC_cntr_B.t41);

  // Sum: '<S80>/Sum' incorporates:
  //   UnitDelay: '<S80>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hh = ROPOD_4Wheel_TdistZMPC_cntr_B.Product3
    [1] + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cp;

  // Product: '<S80>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hh;

  // Outputs for Enabled SubSystem: '<S38>/ZMPC_y' incorporates:
  //   EnablePort: '<S45>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE) {
      // InitializeConditions for Delay: '<S45>/Delay'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition_k;

      // InitializeConditions for Delay: '<S45>/Delay1'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition_n;

      // InitializeConditions for Delay: '<S45>/Delay2'
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition_f;
      }

      // End of InitializeConditions for Delay: '<S45>/Delay2'

      // InitializeConditions for Delay: '<S45>/Delay3'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition_g;

      // InitializeConditions for Delay: '<S45>/Delay4'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition_d;

      // InitializeConditions for Delay: '<S45>/Delay6'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition_m;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE = true;
    }

    // SignalConversion: '<S328>/TmpSignal ConversionAt SFunction Inport1' incorporates:
    //   MATLAB Function: '<S45>/Zone MPC'
    //   Sum: '<S43>/Sum8'
    //   Sum: '<S43>/Sum9'

    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o;
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n -
      ROPOD_4Wheel_TdistZMPC_cntr_B.Internal;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj =
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o -
      ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_h;

    // MATLAB Function: '<S45>/Zone MPC' incorporates:
    //   Constant: '<S45>/Constant16'
    //   Constant: '<S45>/Constant27'
    //   Constant: '<S45>/Constant28'
    //   Constant: '<S45>/Constant3'
    //   Constant: '<S45>/Constant30'
    //   Constant: '<S45>/Constant31'
    //   Constant: '<S45>/Constant32'
    //   Delay: '<S45>/Delay'
    //   Delay: '<S45>/Delay1'
    //   Delay: '<S45>/Delay2'
    //   Delay: '<S45>/Delay3'
    //   Delay: '<S45>/Delay4'
    //   Delay: '<S45>/Delay6'
    //   SignalConversion: '<S328>/TmpSignal ConversionAt SFunction Inport1'

    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE == 10.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fr_max_sp;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[1] =
        -ROPOD_4Wheel_TdistZMPC_cntr_P.ZMPCy_Fr_min_sp;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3] =
        -ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min;
      memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.c[0], 0, 82U * sizeof(real_T));
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 20;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax <<
          2) + 1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = (1 +
          ROPOD_4Wheel_TdistZMPC_cntr_B.jmax) << 2;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_i >
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_m) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp =
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_m - ROPOD_4Wheel_TdistZMPC_cntr_B.b_i;
        ROPOD_4Wheel_TdistZMPC_cntr_B.h_size =
          ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp + 1;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.h_data[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
            = (int8_T)((int8_T)(ROPOD_4Wheel_TdistZMPC_cntr_B.b_i +
                                ROPOD_4Wheel_TdistZMPC_cntr_B.i_m) - 1);
        }

        for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
             ROPOD_4Wheel_TdistZMPC_cntr_B.h_size;
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.c[ROPOD_4Wheel_TdistZMPC_cntr_B.h_data[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]]
            =
            ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.c[80] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c[81] =
        -ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min;
      memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.A[0],
             &ROPOD_4Wheel_TdistZMPC_cntr_P.yH[0], 1600U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = ROPOD_4Wheel_TdistZMPC_xpotrf_h
        (ROPOD_4Wheel_TdistZMPC_cntr_B.A);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax == 0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 41;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jmax--;
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.b_i + 1 <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.jmax) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 1;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_i) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.A[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
            40 * ROPOD_4Wheel_TdistZMPC_cntr_B.b_i) - 1] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.b_i++;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 1600;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Linv[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          l_0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      }

      ROPOD_4Wheel_TdistZM_mldivide_m(ROPOD_4Wheel_TdistZMPC_cntr_B.A,
        ROPOD_4Wheel_TdistZMPC_cntr_B.Linv);
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 20;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
          ROPOD_4Wheel_TdistZMPC_cntr_P.yF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
          60] * ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj +
          (ROPOD_4Wheel_TdistZMPC_cntr_P.yF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
           40] * ROPOD_4Wheel_TdistZMPC_cntr_B.t24 +
           (ROPOD_4Wheel_TdistZMPC_cntr_P.yF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
            20] * ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o +
            ROPOD_4Wheel_TdistZMPC_cntr_P.yF[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] *
            ROPOD_4Wheel_TdistZMPC_cntr_B.g_n));
        ROPOD_4Wheel_TdistZMPC_cntr_B.Fxk[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.t39;
      }

      memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.f[0], 0, 40U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o = 2.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 20;
           ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.f[(int32_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.g_n - 1] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.Fxk[ROPOD_4Wheel_TdistZMPC_cntr_B.jmax];
        ROPOD_4Wheel_TdistZMPC_cntr_B.f[(int32_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o - 1] =
          ROPOD_4Wheel_TdistZMPC_cntr_P.yrho;
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_n += 2.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o += 2.0;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.bv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          (ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
           == 0.0);
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 4080;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.dv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          -ROPOD_4Wheel_TdistZMPC_cntr_P.yA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 82;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          -((((ROPOD_4Wheel_TdistZMPC_cntr_P.yW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m
               + 82] * ROPOD_4Wheel_TdistZMPC_cntr_B.t32 +
               ROPOD_4Wheel_TdistZMPC_cntr_P.yW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
               * ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn) +
              ROPOD_4Wheel_TdistZMPC_cntr_P.yW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m
              + 164] * ROPOD_4Wheel_TdistZMPC_cntr_B.t24) +
             ROPOD_4Wheel_TdistZMPC_cntr_P.yW[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m
             + 246] *
             ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj) +
            ROPOD_4Wheel_TdistZMPC_cntr_B.c[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]);
      }

      memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[82], 0, 20U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h =
        ROPOD_4Wheel_Tdis_ifWhileCond_m(ROPOD_4Wheel_TdistZMPC_cntr_B.bv0);
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.bv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          ((!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) &&
           (ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
            != 0.0));
      }

      ROPOD_4Wheel_Tdis_mpcqpsolver_g(ROPOD_4Wheel_TdistZMPC_cntr_B.Linv,
        ROPOD_4Wheel_TdistZMPC_cntr_B.f, ROPOD_4Wheel_TdistZMPC_cntr_B.dv0,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i, ROPOD_4Wheel_TdistZMPC_cntr_B.bv0,
        ROPOD_4Wheel_TdistZMPC_cntr_B.u_qp, &ROPOD_4Wheel_TdistZMPC_cntr_B.t23,
        ROPOD_4Wheel_TdistZMPC_cntr_B.iAi);
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = ROPOD_4Wheel_TdistZMPC_cntr_B.u_qp[1];
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn = ROPOD_4Wheel_TdistZMPC_cntr_B.u_qp[0];
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 102;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
          ROPOD_4Wheel_TdistZMPC_cntr_B.iAi[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.t42 = 1.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE;
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE;
      ROPOD_4Wheel_TdistZMPC_cntr_B.t23 =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE;
      memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[0],
             &ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[0], 102U * sizeof
             (real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42 =
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE + 1.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.mv = ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;

    // Update for Delay: '<S45>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv;

    // Update for Delay: '<S45>/Delay1' incorporates:
    //   MATLAB Function: '<S45>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t23;

    // Update for Delay: '<S45>/Delay2'
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_B.iA_i[0], 102U * sizeof(real_T));

    // Update for Delay: '<S45>/Delay3' incorporates:
    //   MATLAB Function: '<S45>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o;

    // Update for Delay: '<S45>/Delay4' incorporates:
    //   MATLAB Function: '<S45>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // Update for Delay: '<S45>/Delay6' incorporates:
    //   MATLAB Function: '<S45>/Zone MPC'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE) {
      // Disable for Outport: '<S45>/Fx'
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0_j;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S38>/ZMPC_y'

  // MATLAB Function: '<S65>/Calibration1' incorporates:
  //   Memory: '<S65>/Memory2'
  //   Memory: '<S65>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_he,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_d,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn, &ROPOD_4Wheel_TdistZMPC_cntr_B.t42,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t23);

  // Outputs for Enabled SubSystem: '<S38>/Angle controller' incorporates:
  //   EnablePort: '<S42>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE) {
      // InitializeConditions for DiscreteIntegrator: '<S42>/Discrete-Time Integrator' 
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_c =
        ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC;

      // InitializeConditions for DiscreteIntegrator: '<S42>/Discrete-Time Integrator1' 
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_IC;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE = true;
    }

    // Sum: '<S42>/Sum2' incorporates:
    //   Constant: '<S42>/Ref_speed'
    //   Gain: '<S42>/Gain'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Ref_speed_Value -
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn;

    // Sum: '<S42>/Sum' incorporates:
    //   DiscreteIntegrator: '<S42>/Discrete-Time Integrator1'
    //   Gain: '<S42>/D'

    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = ROPOD_4Wheel_TdistZMPC_cntr_P.D_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l -
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE;

    // Sum: '<S42>/Sum1' incorporates:
    //   DiscreteIntegrator: '<S42>/Discrete-Time Integrator'
    //   Gain: '<S42>/P'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = (ROPOD_4Wheel_TdistZMPC_cntr_P.P_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l +
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_c) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

    // Update for DiscreteIntegrator: '<S42>/Discrete-Time Integrator' incorporates:
    //   Gain: '<S42>/I'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_c +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.I_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l *
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainval;

    // Update for DiscreteIntegrator: '<S42>/Discrete-Time Integrator1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_gainval *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE) {
      // Disable for Outport: '<S42>/u_N'
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = ROPOD_4Wheel_TdistZMPC_cntr_P.u_N_Y0;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S38>/Angle controller'

  // Switch: '<S40>/Switch' incorporates:
  //   Constant: '<S40>/Constant'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_a;
  }

  // End of Switch: '<S40>/Switch'

  // Sum: '<S15>/Sum' incorporates:
  //   Sum: '<S38>/Sum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[0] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.add_uF + ROPOD_4Wheel_TdistZMPC_cntr_B.mv_c)
    + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0;

  // Switch: '<S40>/Switch1' incorporates:
  //   Constant: '<S40>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold_p) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_m;
  }

  // End of Switch: '<S40>/Switch1'

  // Sum: '<S15>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv;

  // Switch: '<S40>/Switch2' incorporates:
  //   Constant: '<S40>/Constant2'
  //   Gain: '<S40>/Gain2'
  //   Product: '<S355>/Product1'
  //   Sum: '<S330>/Diff'
  //   Sum: '<S40>/Sum1'
  //   UnitDelay: '<S330>/UD'
  //
  //  Block description for '<S330>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S330>/UD':
  //
  //   Store in Global RAM

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_a) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_k;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m -
       ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2]) *
      ROPOD_4Wheel_TdistZMPC_cntr_P.FFtheta_intia +
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_m * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  }

  // End of Switch: '<S40>/Switch2'

  // Sum: '<S15>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.t39 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2215.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.max_current);

    // Gain: '<S41>/Gain3' incorporates:
    //   MATLABSystem: '<S7>/Get Parameter2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_b = 1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal' incorporates:
  //   Constant: '<S1>/Constant'

  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.K[0], 0, sizeof(int16_T) << 6U);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.K[ROPOD_4Wheel_TdistZMPC_cntr_B.jmax +
      (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax << 3)] = 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nv[ROPOD_4Wheel_TdistZMPC_cntr_B.jmax]
        == 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.K[ROPOD_4Wheel_TdistZMPC_cntr_B.jmax +
        (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax << 3)] = 1000;
    }
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       8; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 8;
         ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.P[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
        (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax << 3)] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_i < 8;
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.P[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
          (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax << 3)] += (real_T)
          (ROPOD_4Wheel_TdistZMPC_cntr_B.K[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <<
            3) + ROPOD_4Wheel_TdistZMPC_cntr_B.b_i] *
           ROPOD_4Wheel_TdistZMPC_cntr_B.K[(ROPOD_4Wheel_TdistZMPC_cntr_B.jmax <<
            3) + ROPOD_4Wheel_TdistZMPC_cntr_B.b_i]);
      }
    }
  }

  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[8] = ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_b *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_b * 8.0;
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.Linv_j[0], 0, 81U * sizeof(real_T));
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Linv_j[ROPOD_4Wheel_TdistZMPC_cntr_B.jmax + 9 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.jmax] = 1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_B.P[(ROPOD_4Wheel_TdistZMPC_cntr_B.jmax << 3)
      + ROPOD_4Wheel_TdistZMPC_cntr_B.jmax];
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Linv_j[80] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[8] = -1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[17] = 0.0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       8; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      -ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 9] =
      -ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_b;

    // MATLAB Function: '<S41>/Gl_matrices'
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.jmax = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.jmax < 3;
         ROPOD_4Wheel_TdistZMPC_cntr_B.jmax++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp =
        ROPOD_4Wheel_TdistZMPC_cntr_B.jmax + 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_m;
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp]
        = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.b_i = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_i < 15;
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[ROPOD_4Wheel_TdistZMPC_cntr_B.h_size_tmp]
          = ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_i + ROPOD_4Wheel_TdistZMPC_cntr_B.jmax]
          * (real_T)b[15 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_m +
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_i] +
          ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[3 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + ROPOD_4Wheel_TdistZMPC_cntr_B.jmax];
      }
    }
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       8; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_j[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_j[1 + 3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_j[2 + 3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_ic[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 2];
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_j[24] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_j[25] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_j[26] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[2];
  ROPOD_4Wheel_Tdis_mpcqpsolver_p(ROPOD_4Wheel_TdistZMPC_cntr_B.Linv_j,
    ROPOD_4Wheel_TdistZMPC_cntr_B.f_j, ROPOD_4Wheel_TdistZMPC_cntr_B.dv1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_j,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd, ROPOD_4Wheel_TdistZMPC_cntr_B.x);

  // MATLAB Function: '<S18>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant'
  //   MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'
  //   SignalConversion: '<S387>/TmpSignal ConversionAt SFunction Inport3'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[0] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[1] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = (ROPOD_4Wheel_TdistZMPC_cntr_B.x[1] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[0] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 / (2.0 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1));
  if (sqrt(ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l *
           ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l +
           ROPOD_4Wheel_TdistZMPC_cntr_B.g_n * ROPOD_4Wheel_TdistZMPC_cntr_B.g_n)
      > 30.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lf - 1.0) * fabs(sin
      (ROPOD_4Wheel_Tdis_rt_atan2d_snf(ROPOD_4Wheel_TdistZMPC_cntr_B.g_n,
      ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l))) + 1.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.0;
  }

  // MATLAB Function: '<S18>/MATLAB Function1' incorporates:
  //   Constant: '<S18>/Constant'
  //   MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[2],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[3],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lf,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t39, &ROPOD_4Wheel_TdistZMPC_cntr_B.t49);

  // MATLAB Function: '<S18>/MATLAB Function2' incorporates:
  //   Constant: '<S18>/Constant'
  //   MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[4],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[5],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lf,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t50,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj);

  // MATLAB Function: '<S18>/MATLAB Function3' incorporates:
  //   Constant: '<S18>/Constant'
  //   MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[6],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[7],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lf,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1);

  // MATLAB Function: '<S383>/MATLAB Function' incorporates:
  //   Constant: '<S17>/Constant2'
  //   Constant: '<S383>/Constant'
  //   Gain: '<S17>/Gain2'

  ROPOD_4Wheel_T_MATLABFunction_o(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_gn *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_f0,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jee,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_a,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l);

  // Switch: '<S23>/Switch1' incorporates:
  //   Constant: '<S23>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_p[0];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction
      [29];
  }

  // Sum: '<S17>/Sum' incorporates:
  //   Constant: '<S17>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[0] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

  // Switch: '<S23>/Switch1' incorporates:
  //   Constant: '<S23>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_p[1];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_p[29];
  }

  // Sum: '<S17>/Sum' incorporates:
  //   Constant: '<S17>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[1] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

  // Switch: '<S23>/Switch1' incorporates:
  //   Constant: '<S23>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_p[2];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_o[29];
  }

  // Sum: '<S17>/Sum' incorporates:
  //   Constant: '<S17>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[2] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

  // Switch: '<S23>/Switch1' incorporates:
  //   Constant: '<S23>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_p[3];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[29];
  }

  // Sum: '<S17>/Sum' incorporates:
  //   Constant: '<S17>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[3] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;

  // Sum: '<S383>/Sum' incorporates:
  //   UnitDelay: '<S383>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t25 = ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0]
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i0;

  // MATLAB Function: '<S379>/MATLAB Function' incorporates:
  //   Constant: '<S17>/Constant2'
  //   Constant: '<S379>/Constant'
  //   Gain: '<S17>/Gain3'

  ROPOD_4Wheel_T_MATLABFunction_o(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_g *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_f0,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c2,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_n, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn);

  // Sum: '<S379>/Sum' incorporates:
  //   UnitDelay: '<S379>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t30 = ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[1]
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b;

  // MATLAB Function: '<S381>/MATLAB Function' incorporates:
  //   Constant: '<S17>/Constant2'
  //   Constant: '<S381>/Constant'
  //   Gain: '<S17>/Gain4'

  ROPOD_4Wheel_T_MATLABFunction_o(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain_p *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_f0,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_el,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_f, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o);

  // Sum: '<S381>/Sum' incorporates:
  //   UnitDelay: '<S381>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t31 = ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[2]
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_le;

  // MATLAB Function: '<S385>/MATLAB Function' incorporates:
  //   Constant: '<S17>/Constant2'
  //   Constant: '<S385>/Constant'
  //   Gain: '<S17>/Gain5'

  ROPOD_4Wheel_T_MATLABFunction_o(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain_l *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_f0,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ax,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_o, &ROPOD_4Wheel_TdistZMPC_cntr_B.t32);

  // Sum: '<S385>/Sum' incorporates:
  //   UnitDelay: '<S385>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3]
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_mh;

  // Switch: '<S22>/Switch1' incorporates:
  //   Constant: '<S22>/Movinf around SW axis center'
  //   Gain: '<S29>/Gain1'
  //   Gain: '<S29>/Gain2'
  //   Gain: '<S29>/Gain3'
  //   Logic: '<S17>/Logical Operator'
  //   Switch: '<S17>/Switch1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_P.MovinfaroundSWaxiscenter_Value[0],
           sizeof(real_T) << 3U);
  } else {
    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0)) {
      // Gain: '<S17>/damping' incorporates:
      //   Product: '<S383>/Product1'
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_a = ROPOD_4Wheel_TdistZMPC_cntr_B.g_a *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t25 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping_Gain;

      // Gain: '<S17>/Gain' incorporates:
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain_a =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;

      // Gain: '<S17>/Gain1' incorporates:
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_a =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;

      // Gain: '<S17>/damping1' incorporates:
      //   Product: '<S379>/Product1'
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_a = ROPOD_4Wheel_TdistZMPC_cntr_B.g_n *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t30 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping1_Gain;

      // Gain: '<S17>/Gain6' incorporates:
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;

      // Gain: '<S17>/Gain7' incorporates:
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain7 =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain7_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;

      // Gain: '<S17>/damping2' incorporates:
      //   Product: '<S381>/Product1'
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_a = ROPOD_4Wheel_TdistZMPC_cntr_B.g_f *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t31 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping2_Gain;

      // Gain: '<S17>/Gain8' incorporates:
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_f =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain8_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;

      // Gain: '<S17>/Gain9' incorporates:
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain9 =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain9_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;

      // Gain: '<S17>/damping3' incorporates:
      //   Product: '<S385>/Product1'
      //   Switch: '<S17>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_a = ROPOD_4Wheel_TdistZMPC_cntr_B.g_o *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t38 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping3_Gain;

      // Switch: '<S17>/Switch1' incorporates:
      //   Gain: '<S17>/Gain10'
      //   Gain: '<S17>/Gain11'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain_a;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[1] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_a;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_n;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[3] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain7;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[4] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[5] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain9;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[6] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain10_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[7] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain11_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_a;
    } else {
      // Switch: '<S17>/Switch1' incorporates:
      //   Constant: '<S17>/Constant1'

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 8;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value;
      }
    }

    // Logic: '<S18>/Logical Operator'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h =
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0));

    // Logic: '<S14>/Logical Operator'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l =
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0));

    // Switch: '<S391>/Switch1' incorporates:
    //   Constant: '<S391>/Constant1'
    //   Logic: '<S391>/Logical Operator'
    //   Product: '<S403>/Product1'
    //   Product: '<S412>/Product1'
    //   Product: '<S421>/Product1'
    //   Product: '<S430>/Product1'
    //   Product: '<S439>/Product1'
    //   Product: '<S448>/Product1'
    //   Product: '<S457>/Product1'
    //   Product: '<S466>/Product1'

    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0)) {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 8;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_j;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_b * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_p;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_ck *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_b;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_j * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_c * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_h;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_i *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_jg;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_e *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_hl;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_d * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_l;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_bj;
    }

    // End of Switch: '<S391>/Switch1'

    // Switch: '<S18>/Switch1' incorporates:
    //   MATLAB Function: '<S18>/MATLAB Function'
    //   MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'

    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.x[0] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.x[1] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.t39;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[3] = ROPOD_4Wheel_TdistZMPC_cntr_B.t49;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[4] = ROPOD_4Wheel_TdistZMPC_cntr_B.t50;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[5] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu_mj;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[6] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[7] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1;

    // Sum: '<S1>/Add'
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i_m < 8;
         ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
      // Switch: '<S14>/Switch1' incorporates:
      //   Constant: '<S14>/Constant1'
      //   MATLAB Function: '<S41>/platform_forces_2_tau_dist_optimal'

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
          ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_k;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
          ROPOD_4Wheel_TdistZMPC_cntr_B.x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      }

      // End of Switch: '<S14>/Switch1'

      // Switch: '<S18>/Switch1' incorporates:
      //   Constant: '<S18>/Constant1'

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
          ROPOD_4Wheel_TdistZMPC_cntr_B.x_e[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
          ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_f;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] =
        ((ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
          + ROPOD_4Wheel_TdistZMPC_cntr_B.t24) +
         ROPOD_4Wheel_TdistZMPC_cntr_B.g_n) +
        ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_f[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m];
    }

    // End of Sum: '<S1>/Add'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Taucompfactor *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[3] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Taucompfactor *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[4] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[5] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[6] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[7] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7];
  }

  // End of Switch: '<S22>/Switch1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_h) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);

    // DataTypeConversion: '<S24>/Data Type Conversion6' incorporates:
    //   Constant: '<S24>/Constant3'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_ENABLE1);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t39) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t39)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t39,
        65536.0);
    }

    // DataTypeConversion: '<S24>/Data Type Conversion4' incorporates:
    //   MATLABSystem: '<S7>/Get Parameter'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = floor(ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t49) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t49)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t49,
        65536.0);
    }

    // S-Function (sfix_bitop): '<S24>/Bitwise Operator1' incorporates:
    //   DataTypeConversion: '<S24>/Data Type Conversion4'
    //   DataTypeConversion: '<S24>/Data Type Conversion6'

    ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator1 = (uint16_T)
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.t39 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.t39 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t39) & (ROPOD_4Wheel_TdistZMPC_cntr_B.t49 <
        0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_TdistZMPC_cntr_B.t49 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t49));

    // DataTypeConversion: '<S24>/Data Type Conversion7' incorporates:
    //   Constant: '<S24>/Constant4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_ENABLE2);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t39) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t39)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t39,
        65536.0);
    }

    // DataTypeConversion: '<S24>/Data Type Conversion5' incorporates:
    //   Gain: '<S24>/shift'
    //   MATLABSystem: '<S7>/Get Parameter'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.shift_Gain *
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t49) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t49)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t49,
        65536.0);
    }

    // S-Function (sfix_bitop): '<S24>/Bitwise Operator2' incorporates:
    //   DataTypeConversion: '<S24>/Data Type Conversion5'
    //   DataTypeConversion: '<S24>/Data Type Conversion7'

    ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator2 = (uint16_T)
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.t39 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.t39 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t39) & (ROPOD_4Wheel_TdistZMPC_cntr_B.t49 <
        0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_TdistZMPC_cntr_B.t49 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t49));

    // Gain: '<S24>/Gain'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain_b *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_hy *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // Constant: '<S24>/Constant'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jp;

  // Constant: '<S24>/Constant1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2_j =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_ht;

  // Constant: '<S24>/Constant10'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant10_Value;

  // Constant: '<S24>/Constant2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_o =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_pe;

  // Constant: '<S24>/Constant6'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value_d;

  // Constant: '<S24>/Constant7'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_n =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant7_Value;

  // Constant: '<S24>/Constant8'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_j =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant8_Value;

  // Constant: '<S24>/Constant9'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2_pm =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant9_Value;

  // Switch: '<S22>/Switch' incorporates:
  //   Constant: '<S22>/Constant13'
  //   Constant: '<S22>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_MODE_VELOCITY;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_MODE_TORQUE;
  }

  // End of Switch: '<S22>/Switch'

  // DataTypeConversion: '<S24>/Data Type Conversion2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = floor(ROPOD_4Wheel_TdistZMPC_cntr_B.g_n);
  if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t39) || rtIsInf
      (ROPOD_4Wheel_TdistZMPC_cntr_B.t39)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t39,
      65536.0);
  }

  // DataTypeConversion: '<S24>/Data Type Conversion3' incorporates:
  //   Constant: '<S24>/Constant11'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = 0.0 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_USE_TS;
  if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t49)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t49,
      65536.0);
  }

  // Gain: '<S24>/Gain10' incorporates:
  //   DataTypeConversion: '<S24>/Data Type Conversion2'
  //   DataTypeConversion: '<S24>/Data Type Conversion3'
  //   S-Function (sfix_bitop): '<S24>/Bitwise Operator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.command1 = (real_T)(uint16_T)((uint16_T)
    ((uint16_T)(ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator1 |
                ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator2) | (uint16_T)
     (ROPOD_4Wheel_TdistZMPC_cntr_B.t39 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.t39 : (int32_T)(uint16_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.t39)) | (uint16_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.t49) * ((real_T)
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain10_Gain_d * 3.0517578125E-5);
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S24>/Gain11'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain11_Gain_p *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain12'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain12_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain13'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain13_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain15'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain15_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain16'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain16_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain17'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain17_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // Gain: '<S24>/Gain8'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command1_f =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain8_Gain_b *
    ROPOD_4Wheel_TdistZMPC_cntr_B.command1;

  // Gain: '<S24>/Gain14'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command1_b =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain14_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.command1_f;

  // Gain: '<S24>/Gain18'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command1_i =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain18_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.command1_b;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S24>/Gain19'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain19_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_p5 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain20'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.5 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Taucompfactor *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_o *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S24>/Gain4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain_c *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;

    // Gain: '<S24>/Gain5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain_e *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;

    // Gain: '<S24>/Gain6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain_d *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;

    // Gain: '<S24>/Gain7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain7_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;

    // Gain: '<S24>/Gain9'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain9_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // Gain: '<S24>/sign_convention'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[1];

  // Gain: '<S24>/sign_convention1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention1_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[3];

  // Gain: '<S24>/sign_convention2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_c =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention2_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[5];

  // Gain: '<S24>/sign_convention3'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_m =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention3_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[7];

  // Update for UnitDelay: '<S78>/Unit Delay' incorporates:
  //   DiscreteIntegrator: '<S66>/Discrete-Time Integrator'
  //   Product: '<S78>/Product4'
  //   Sum: '<S78>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_mz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t34 * ROPOD_4Wheel_TdistZMPC_cntr_B.t2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE;

  // Update for UnitDelay: '<S82>/Unit Delay' incorporates:
  //   DiscreteIntegrator: '<S67>/Discrete-Time Integrator'
  //   Product: '<S82>/Product4'
  //   Sum: '<S82>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_pc =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40 * ROPOD_4Wheel_TdistZMPC_cntr_B.distance_f
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e;

  // MATLAB Function: '<S43>/Force_per_sensor' incorporates:
  //   Constant: '<S43>/Constant1'
  //   Constant: '<S43>/Constant2'
  //   Constant: '<S43>/Constant3'
  //   Constant: '<S43>/Constant4'
  //   SignalConversion: '<S50>/TmpSignal ConversionAt SFunction Inport1'
  //   SignalConversion: '<S50>/TmpSignal ConversionAt SFunction Inport2'
  //   SignalConversion: '<S50>/TmpSignal ConversionAt SFunction Inport3'
  //   SignalConversion: '<S50>/TmpSignal ConversionAt SFunction Inport4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_c +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[0] * 1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[1] * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[2] * -0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[3] * -1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nm +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ok;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nk;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[0] * 1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[1] * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[2] * -0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[3] * -1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_cu;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_du +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ec;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_cz +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_m;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nl +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_bu;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[0] * 1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[1] * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[2] * -0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[3] * -1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_di +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_mh;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_go +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_df +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ia +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pt;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[0] * 1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[1] * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[2] * -0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[3] * -1.5 * 0.164;

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S2>/Constant1'
  //   Constant: '<S2>/Constant2'
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
  //   SignalConversion: '<S2>/TmpSignal ConversionAtCoordinate Transformation ConversionInport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_n / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[0] = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_n / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_a / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1] = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_a / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[2] / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[2] / 2.0);

  // BusAssignment: '<S2>/Bus Assignment' incorporates:
  //   Constant: '<S2>/Constant'
  //   Constant: '<S472>/Constant'
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.X =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f2;

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1;

  // BusAssignment: '<S2>/Bus Assignment' incorporates:
  //   MATLABSystem: '<S2>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.W =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t49 * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g;

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_n = ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_1;

  // BusAssignment: '<S2>/Bus Assignment' incorporates:
  //   Constant: '<S2>/Constant3'
  //   Constant: '<S2>/Constant4'
  //   Constant: '<S2>/Constant5'
  //   MATLABSystem: '<S2>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.X =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 + ROPOD_4Wheel_TdistZMPC_cntr_B.g_n *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.Y =
    -ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lx_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_nd[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g + ROPOD_4Wheel_TdistZMPC_cntr_B.g_n
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39 * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g
    + ROPOD_4Wheel_TdistZMPC_cntr_B.t49 * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Linear.X =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Linear.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Linear.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant3_Value_j;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Angular.X =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_if;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Angular.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Angular.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[2];

  // RateTransition: '<S2>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // RelationalOperator: '<S37>/Compare' incorporates:
    //   Constant: '<S37>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_o =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_o !=
       ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant1_const);

    // Outputs for Atomic SubSystem: '<S2>/Publish'
    // MATLABSystem: '<S473>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_1896.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment);

    // End of Outputs for SubSystem: '<S2>/Publish'
  }

  // End of RateTransition: '<S2>/Rate Transition'

  // BusAssignment: '<S490>/Bus Assignment'
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k.Data =
    ROPOD_4Wheel_TdistZMPC_cntr_B.state;

  // RateTransition: '<S490>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish4'
    // MATLABSystem: '<S484>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9627.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k);

    // End of Outputs for SubSystem: '<S9>/Publish4'
  }

  // End of RateTransition: '<S490>/Rate Transition'

  // BusAssignment: '<S487>/Bus Assignment' incorporates:
  //   Constant: '<S493>/Constant'
  //   MATLAB Function: '<S43>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.Y =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp);

  // RateTransition: '<S487>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish'
    // MATLABSystem: '<S480>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9614.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish'
  }

  // End of RateTransition: '<S487>/Rate Transition'

  // BusAssignment: '<S486>/Bus Assignment' incorporates:
  //   Constant: '<S492>/Constant'
  //   MATLAB Function: '<S43>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_j;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.X =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp);

  // RateTransition: '<S486>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish1'
    // MATLABSystem: '<S481>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9624.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish1'
  }

  // End of RateTransition: '<S486>/Rate Transition'

  // BusAssignment: '<S488>/Bus Assignment' incorporates:
  //   Constant: '<S494>/Constant'
  //   MATLAB Function: '<S43>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_i;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.X =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm);

  // RateTransition: '<S488>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish2'
    // MATLABSystem: '<S482>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9625.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish2'
  }

  // End of RateTransition: '<S488>/Rate Transition'

  // BusAssignment: '<S489>/Bus Assignment' incorporates:
  //   Constant: '<S495>/Constant'
  //   MATLAB Function: '<S43>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_d;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.Y =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_k(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym);

  // RateTransition: '<S489>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish3'
    // MATLABSystem: '<S483>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9626.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish3'

    // BusAssignment: '<S491>/Bus Assignment'
    ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_h.Data =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_o;

    // Outputs for Atomic SubSystem: '<S9>/Publish5'
    // MATLABSystem: '<S485>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9643.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_h);

    // End of Outputs for SubSystem: '<S9>/Publish5'
  }

  // End of RateTransition: '<S489>/Rate Transition'

  // Update for UnitDelay: '<S108>/Unit Delay' incorporates:
  //   Product: '<S108>/Product4'
  //   Sum: '<S108>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_d * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gu +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_0;

  // Update for UnitDelay: '<S106>/Unit Delay' incorporates:
  //   Product: '<S106>/Product4'
  //   Sum: '<S106>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_gb * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_1;

  // Update for UnitDelay: '<S110>/Unit Delay' incorporates:
  //   Product: '<S110>/Product4'
  //   Sum: '<S110>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_e * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jv +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_2;

  // Update for UnitDelay: '<S112>/Unit Delay' incorporates:
  //   Product: '<S112>/Product4'
  //   Sum: '<S112>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_3;

  // Update for UnitDelay: '<S114>/Unit Delay' incorporates:
  //   Product: '<S114>/Product4'
  //   Sum: '<S114>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_b_l * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_4;

  // Update for UnitDelay: '<S116>/Unit Delay' incorporates:
  //   Product: '<S116>/Product4'
  //   Sum: '<S116>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_le * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_kv +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_5;

  // Update for UnitDelay: '<S118>/Unit Delay' incorporates:
  //   Product: '<S118>/Product4'
  //   Sum: '<S118>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_fj * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_bw +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_6;

  // Update for UnitDelay: '<S120>/Unit Delay' incorporates:
  //   Product: '<S120>/Product4'
  //   Sum: '<S120>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i4 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_o_idx_7;

  // Update for Memory: '<S58>/Memory2' incorporates:
  //   MATLAB Function: '<S58>/Calibration1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput++;

  // Update for UnitDelay: '<S164>/Unit Delay' incorporates:
  //   Product: '<S164>/Product4'
  //   Sum: '<S164>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_l * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mj +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_0;

  // Update for UnitDelay: '<S162>/Unit Delay' incorporates:
  //   Product: '<S162>/Product4'
  //   Sum: '<S162>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_dm * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c2 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_1;

  // Update for UnitDelay: '<S166>/Unit Delay' incorporates:
  //   Product: '<S166>/Product4'
  //   Sum: '<S166>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_aq * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_2;

  // Update for UnitDelay: '<S168>/Unit Delay' incorporates:
  //   Product: '<S168>/Product4'
  //   Sum: '<S168>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_px * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ia +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_3;

  // Update for UnitDelay: '<S170>/Unit Delay' incorporates:
  //   Product: '<S170>/Product4'
  //   Sum: '<S170>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_o * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_p +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_4;

  // Update for UnitDelay: '<S172>/Unit Delay' incorporates:
  //   Product: '<S172>/Product4'
  //   Sum: '<S172>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_n_c * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lm +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_5;

  // Update for UnitDelay: '<S174>/Unit Delay' incorporates:
  //   Product: '<S174>/Product4'
  //   Sum: '<S174>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hg =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_h2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_p4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_6;

  // Update for UnitDelay: '<S176>/Unit Delay' incorporates:
  //   Product: '<S176>/Product4'
  //   Sum: '<S176>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_pj * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jy +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_p1_idx_7;

  // Update for Memory: '<S61>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_g;

  // Update for Memory: '<S61>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_n;

  // Update for Memory: '<S59>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_d;

  // Update for Memory: '<S59>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_o;

  // Update for Memory: '<S62>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_l;

  // Update for Memory: '<S62>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_im;

  // Update for UnitDelay: '<S220>/Unit Delay' incorporates:
  //   Product: '<S220>/Product4'
  //   Sum: '<S220>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_o * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j2 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_0;

  // Update for UnitDelay: '<S218>/Unit Delay' incorporates:
  //   Product: '<S218>/Product4'
  //   Sum: '<S218>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cd =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_hv * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_1;

  // Update for UnitDelay: '<S222>/Unit Delay' incorporates:
  //   Product: '<S222>/Product4'
  //   Sum: '<S222>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_dn
    + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_2;

  // Update for UnitDelay: '<S224>/Unit Delay' incorporates:
  //   Product: '<S224>/Product4'
  //   Sum: '<S224>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dvl =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m1 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hf +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_3;

  // Update for UnitDelay: '<S226>/Unit Delay' incorporates:
  //   Product: '<S226>/Product4'
  //   Sum: '<S226>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nh =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ib * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_4;

  // Update for UnitDelay: '<S228>/Unit Delay' incorporates:
  //   Product: '<S228>/Product4'
  //   Sum: '<S228>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_f * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_du +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_5;

  // Update for UnitDelay: '<S230>/Unit Delay' incorporates:
  //   Product: '<S230>/Product4'
  //   Sum: '<S230>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_if =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_mn * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_m +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_6;

  // Update for UnitDelay: '<S232>/Unit Delay' incorporates:
  //   Product: '<S232>/Product4'
  //   Sum: '<S232>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fk =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m3 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_al +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ou_idx_7;

  // Update for Memory: '<S57>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_gb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_o;

  // Update for Memory: '<S57>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_d;

  // Update for UnitDelay: '<S276>/Unit Delay' incorporates:
  //   Product: '<S276>/Product4'
  //   Sum: '<S276>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hv +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_0;

  // Update for UnitDelay: '<S274>/Unit Delay' incorporates:
  //   Product: '<S274>/Product4'
  //   Sum: '<S274>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_j_i * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_na +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_1;

  // Update for UnitDelay: '<S278>/Unit Delay' incorporates:
  //   Product: '<S278>/Product4'
  //   Sum: '<S278>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c5 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hi +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_2;

  // Update for UnitDelay: '<S280>/Unit Delay' incorporates:
  //   Product: '<S280>/Product4'
  //   Sum: '<S280>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_de * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jyn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_3;

  // Update for UnitDelay: '<S282>/Unit Delay' incorporates:
  //   Product: '<S282>/Product4'
  //   Sum: '<S282>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_f_f * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_4;

  // Update for UnitDelay: '<S284>/Unit Delay' incorporates:
  //   Product: '<S284>/Product4'
  //   Sum: '<S284>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ox =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_gj * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d3 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_5;

  // Update for UnitDelay: '<S286>/Unit Delay' incorporates:
  //   Product: '<S286>/Product4'
  //   Sum: '<S286>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m_i * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ax +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_6;

  // Update for UnitDelay: '<S288>/Unit Delay' incorporates:
  //   Product: '<S288>/Product4'
  //   Sum: '<S288>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dj =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_lw * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h2 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_f_idx_7;

  // Update for Memory: '<S63>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_j;

  // Update for Memory: '<S63>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_i;

  // Update for DiscreteStateSpace: '<S51>/Internal'
  {
    real_T xnew[2];
    xnew[0] = (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A[0])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[0]
      + (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A[1])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[1];
    xnew[0] += ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_B*
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum5;
    xnew[1] = (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A[2])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[0];
    (void) memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[0], xnew,
                  sizeof(real_T)*2);
  }

  // Update for Memory: '<S60>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_i;

  // Update for Memory: '<S60>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h;

  // Update for Memory: '<S64>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i;

  // Update for Memory: '<S64>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_hp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out;

  // Update for DiscreteStateSpace: '<S52>/Internal'
  {
    real_T xnew[2];
    xnew[0] = (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A_n[0])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[0]
      + (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A_n[1])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[1];
    xnew[0] += ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_B_p*
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum6;
    xnew[1] = (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A_n[2])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[0];
    (void) memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[0], xnew,
                  sizeof(real_T)*2);
  }

  // Update for Delay: '<S364>/Enabled Delay'
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp;
  }

  // End of Update for Delay: '<S364>/Enabled Delay'

  // Update for UnitDelay: '<S365>/Delay Input2'
  //
  //  Block description for '<S365>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_e;

  // Update for UnitDelay: '<S366>/Delay Input2'
  //
  //  Block description for '<S366>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;

  // Update for UnitDelay: '<S367>/Delay Input2'
  //
  //  Block description for '<S367>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_n;

  // Update for DiscreteIntegrator: '<S405>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_bn_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S406>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp;

  // Update for DiscreteIntegrator: '<S407>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t30_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.POut;

  // Update for DiscreteTransferFcn: '<S408>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k;

  // Update for UnitDelay: '<S403>/Unit Delay' incorporates:
  //   Product: '<S403>/Product4'
  //   Sum: '<S403>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hl =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_f * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_p +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut;

  // Update for DiscreteIntegrator: '<S414>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t41_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_g = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S415>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m;

  // Update for DiscreteIntegrator: '<S416>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t31_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.POut_b;

  // Update for DiscreteTransferFcn: '<S417>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_b;

  // Update for UnitDelay: '<S412>/Unit Delay' incorporates:
  //   Product: '<S412>/Product4'
  //   Sum: '<S412>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ma =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_a * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_b +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n;

  // Update for DiscreteIntegrator: '<S423>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S424>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h;

  // Update for DiscreteIntegrator: '<S425>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_my_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_my;

  // Update for DiscreteTransferFcn: '<S426>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h2;

  // Update for UnitDelay: '<S421>/Unit Delay' incorporates:
  //   Product: '<S421>/Product4'
  //   Sum: '<S421>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ni =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_o;

  // Update for DiscreteIntegrator: '<S432>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b5_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_b5;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_gs = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S433>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_o;

  // Update for DiscreteIntegrator: '<S434>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_pf =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n;

  // Update for DiscreteTransferFcn: '<S435>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_p;

  // Update for UnitDelay: '<S430>/Unit Delay' incorporates:
  //   Product: '<S430>/Product4'
  //   Sum: '<S430>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jk =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_b * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_h +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f;

  // Update for DiscreteIntegrator: '<S441>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_p_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_p;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S442>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_bw;

  // Update for DiscreteIntegrator: '<S443>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_cz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_mz_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_mz;

  // Update for DiscreteTransferFcn: '<S444>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_a;

  // Update for UnitDelay: '<S439>/Unit Delay' incorporates:
  //   Product: '<S439>/Product4'
  //   Sum: '<S439>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_he =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_n * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_jg +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_oh;

  // Update for DiscreteIntegrator: '<S450>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_i = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S451>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ew =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c;

  // Update for DiscreteIntegrator: '<S452>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_nk =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_od_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_od;

  // Update for DiscreteTransferFcn: '<S453>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_n;

  // Update for UnitDelay: '<S448>/Unit Delay' incorporates:
  //   Product: '<S448>/Product4'
  //   Sum: '<S448>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_gt =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_hl +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_e;

  // Update for DiscreteIntegrator: '<S459>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_na =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ms_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ms;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_p = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S460>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ev =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_e;

  // Update for DiscreteIntegrator: '<S461>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_na5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_nu_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_nu;

  // Update for DiscreteTransferFcn: '<S462>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l;

  // Update for UnitDelay: '<S457>/Unit Delay' incorporates:
  //   Product: '<S457>/Product4'
  //   Sum: '<S457>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kq =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_l +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g;

  // Update for DiscreteIntegrator: '<S468>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ec =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S469>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_lw;

  // Update for DiscreteIntegrator: '<S470>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_e5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e;

  // Update for DiscreteTransferFcn: '<S471>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ep =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

  // Update for UnitDelay: '<S466>/Unit Delay' incorporates:
  //   Product: '<S466>/Product4'
  //   Sum: '<S466>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_bj +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

  // Update for DiscreteIntegrator: '<S339>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t4;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_do = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_b;

  // Update for DiscreteTransferFcn: '<S340>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6;

  // Update for DiscreteIntegrator: '<S341>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd + ROPOD_4Wheel_TdistZMPC_cntr_B.t7;

  // Update for DiscreteTransferFcn: '<S342>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;

  // Update for UnitDelay: '<S337>/Unit Delay' incorporates:
  //   Product: '<S337>/Product4'
  //   Sum: '<S337>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nx =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx * ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8;

  // Update for DiscreteIntegrator: '<S348>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1;

  // Update for DiscreteTransferFcn: '<S349>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14;

  // Update for DiscreteIntegrator: '<S350>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_a_c_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t16;

  // Update for DiscreteTransferFcn: '<S351>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ac =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

  // Update for UnitDelay: '<S346>/Unit Delay' incorporates:
  //   Product: '<S346>/Product4'
  //   Sum: '<S346>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d53 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_j * ROPOD_4Wheel_TdistZMPC_cntr_B.t11 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

  // Update for DiscreteIntegrator: '<S357>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t18;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2;

  // Update for DiscreteTransferFcn: '<S358>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_o3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t22;

  // Update for DiscreteIntegrator: '<S359>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_gb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t26;

  // Update for DiscreteTransferFcn: '<S360>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_oc =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t33;

  // Update for UnitDelay: '<S355>/Unit Delay' incorporates:
  //   Product: '<S355>/Product4'
  //   Sum: '<S355>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t19 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;

  // Update for DiscreteIntegrator: '<S66>/Discrete-Time Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE +=
    ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_d *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0];

  // Update for UnitDelay: '<S76>/Unit Delay' incorporates:
  //   Product: '<S76>/Product4'
  //   Sum: '<S76>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t35 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0];

  // Update for DiscreteIntegrator: '<S67>/Discrete-Time Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e +=
    ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1];

  // Update for UnitDelay: '<S80>/Unit Delay' incorporates:
  //   Product: '<S80>/Product4'
  //   Sum: '<S80>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t41 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hh +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1];

  // Update for Memory: '<S65>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_he =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t42;

  // Update for Memory: '<S65>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t23;

  // Update for UnitDelay: '<S383>/Unit Delay' incorporates:
  //   Product: '<S383>/Product4'
  //   Sum: '<S383>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Toatal_torque_l *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t25 + ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[0];

  // Update for UnitDelay: '<S379>/Unit Delay' incorporates:
  //   Product: '<S379>/Product4'
  //   Sum: '<S379>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_bn * ROPOD_4Wheel_TdistZMPC_cntr_B.t30 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[1];

  // Update for UnitDelay: '<S381>/Unit Delay' incorporates:
  //   Product: '<S381>/Product4'
  //   Sum: '<S381>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_le =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_o * ROPOD_4Wheel_TdistZMPC_cntr_B.t31 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[2];

  // Update for UnitDelay: '<S385>/Unit Delay' incorporates:
  //   Product: '<S385>/Product4'
  //   Sum: '<S385>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_mh =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32 * ROPOD_4Wheel_TdistZMPC_cntr_B.t38 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch_i[3];

  // MATLAB Function: '<S11>/pos_rot_matrix' incorporates:
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.t39;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t49;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[6] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.t49;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[4] = ROPOD_4Wheel_TdistZMPC_cntr_B.t39;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[7] = 0.0;

  // Update for UnitDelay: '<S330>/UD'
  //
  //  Block description for '<S330>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0;

  // MATLAB Function: '<S11>/pos_rot_matrix'
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[2] = 0.0;

  // Update for UnitDelay: '<S330>/UD'
  //
  //  Block description for '<S330>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1;

  // MATLAB Function: '<S11>/pos_rot_matrix'
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[5] = 0.0;

  // Update for UnitDelay: '<S330>/UD'
  //
  //  Block description for '<S330>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_m;

  // MATLAB Function: '<S11>/pos_rot_matrix'
  ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[8] = 1.0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       3; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    // Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m]
      += ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_b *
      (ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 6] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[2] +
       (ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 3]
        * ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1] +
        ROPOD_4Wheel_TdistZMPC_cntr_B.f_j[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0]));
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.t[0] =
    (++ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.clockTick0) *
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.stepSize0;
  rate_scheduler();
}

// Model initialize function
void ROPOD_4Wheel_TdistZMPC_cntr_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)ROPOD_4Wheel_TdistZMPC_cntr_M, 0,
                sizeof(RT_MODEL_ROPOD_4Wheel_TdistZMPC_cntr_T));
  rtsiSetSolverName(&ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfo,
                    "FixedStepDiscrete");
  ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfoPtr =
    (&ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap =
      ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleTimes =
      (&ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleTimesArray[0]);
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.offsetTimes =
      (&ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.offsetTimesArray[0]);

    // task periods
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleTimes[0] = (0.001);
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleTimes[1] = (0.01);
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleTimes[2] = (1.0);

    // task offsets
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.offsetTimes[0] = (0.0);
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.offsetTimes[1] = (0.0);
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(ROPOD_4Wheel_TdistZMPC_cntr_M,
             &ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ROPOD_4Wheel_TdistZMPC_cntr_M, -1);
  ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.stepSize0 = 0.001;
  ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfoPtr =
    (&ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfo);
  ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfo, 0.001);
  rtsiSetSolverMode(&ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  // block I/O
  (void) memset(((void *) &ROPOD_4Wheel_TdistZMPC_cntr_B), 0,
                sizeof(B_ROPOD_4Wheel_TdistZMPC_cntr_T));

  // states (dwork)
  (void) memset((void *)&ROPOD_4Wheel_TdistZMPC_cntr_DW, 0,
                sizeof(DW_ROPOD_4Wheel_TdistZMPC_cntr_T));

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo =
      &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.sfcnInfo;
    ROPOD_4Wheel_TdistZMPC_cntr_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (ROPOD_4Wheel_TdistZMPC_cntr_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &ROPOD_4Wheel_TdistZMPC_cntr_M->Sizes.numSampTimes);
    ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(ROPOD_4Wheel_TdistZMPC_cntr_M)[0]);
    ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(ROPOD_4Wheel_TdistZMPC_cntr_M)[1]);
    ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.taskTimePtrs[2] =
      &(rtmGetTPtr(ROPOD_4Wheel_TdistZMPC_cntr_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,
                   ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ROPOD_4Wheel_TdistZMPC_cntr_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ROPOD_4Wheel_TdistZMPC_cntr_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (ROPOD_4Wheel_TdistZMPC_cntr_M));
    rtssSetStepSizePtr(sfcnInfo, &ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (ROPOD_4Wheel_TdistZMPC_cntr_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_TdistZMPC_cntr_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_TdistZMPC_cntr_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &ROPOD_4Wheel_TdistZMPC_cntr_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ROPOD_4Wheel_TdistZMPC_cntr_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &ROPOD_4Wheel_TdistZMPC_cntr_M->solverInfoPtr);
  }

  ROPOD_4Wheel_TdistZMPC_cntr_M->Sizes.numSFcns = (6);

  // register each child
  {
    (void) memset((void *)
                  &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  6*sizeof(SimStruct));
    ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions =
      (&ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 6; i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[i] =
          (&ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S12>/ECAT_Interface (ECAT_Interface) 
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_TdistZMPC_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods2
                           [0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods3
                           [0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods4
                           [0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.ECAT_Interface_k));
        }
      }

      // path info
      ssSetModelName(rts, "ECAT_Interface");
      ssSetPath(rts,
                "ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/ECAT_Interface");
      ssSetRTModel(rts,ROPOD_4Wheel_TdistZMPC_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_TdistZMPC_cntr_P.ECAT_Interface_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       ROPOD_4Wheel_TdistZMPC_cntr_P.ECAT_Interface_P2_Size);
      }

      // work vectors
      ssSetRWork(rts, (real_T *)
                 &ROPOD_4Wheel_TdistZMPC_cntr_DW.ECAT_Interface_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // RWORK
        ssSetDWorkWidth(rts, 0, 13);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ROPOD_4Wheel_TdistZMPC_cntr_DW.ECAT_Interface_RWORK
                   [0]);
      }

      // registration
      ECAT_Interface(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
    }

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S43>/S-Function Builder (Read_Serial_Port) 
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_TdistZMPC_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods2
                           [1]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods3
                           [1]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods4
                           [1]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 32);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        ssSetOutputPortUnit(rts, 6, 0);
        ssSetOutputPortUnit(rts, 7, 0);
        ssSetOutputPortUnit(rts, 8, 0);
        ssSetOutputPortUnit(rts, 9, 0);
        ssSetOutputPortUnit(rts, 10, 0);
        ssSetOutputPortUnit(rts, 11, 0);
        ssSetOutputPortUnit(rts, 12, 0);
        ssSetOutputPortUnit(rts, 13, 0);
        ssSetOutputPortUnit(rts, 14, 0);
        ssSetOutputPortUnit(rts, 15, 0);
        ssSetOutputPortUnit(rts, 16, 0);
        ssSetOutputPortUnit(rts, 17, 0);
        ssSetOutputPortUnit(rts, 18, 0);
        ssSetOutputPortUnit(rts, 19, 0);
        ssSetOutputPortUnit(rts, 20, 0);
        ssSetOutputPortUnit(rts, 21, 0);
        ssSetOutputPortUnit(rts, 22, 0);
        ssSetOutputPortUnit(rts, 23, 0);
        ssSetOutputPortUnit(rts, 24, 0);
        ssSetOutputPortUnit(rts, 25, 0);
        ssSetOutputPortUnit(rts, 26, 0);
        ssSetOutputPortUnit(rts, 27, 0);
        ssSetOutputPortUnit(rts, 28, 0);
        ssSetOutputPortUnit(rts, 29, 0);
        ssSetOutputPortUnit(rts, 30, 0);
        ssSetOutputPortUnit(rts, 31, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o1));
        }

        // port 1
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o2));
        }

        // port 2
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o3));
        }

        // port 3
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o4));
        }

        // port 4
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o5));
        }

        // port 5
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o6));
        }

        // port 6
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o7));
        }

        // port 7
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o8));
        }

        // port 8
        {
          _ssSetOutputPortNumDimensions(rts, 8, 1);
          ssSetOutputPortWidth(rts, 8, 1);
          ssSetOutputPortSignal(rts, 8, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o9));
        }

        // port 9
        {
          _ssSetOutputPortNumDimensions(rts, 9, 1);
          ssSetOutputPortWidth(rts, 9, 1);
          ssSetOutputPortSignal(rts, 9, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o10));
        }

        // port 10
        {
          _ssSetOutputPortNumDimensions(rts, 10, 1);
          ssSetOutputPortWidth(rts, 10, 1);
          ssSetOutputPortSignal(rts, 10, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o11));
        }

        // port 11
        {
          _ssSetOutputPortNumDimensions(rts, 11, 1);
          ssSetOutputPortWidth(rts, 11, 1);
          ssSetOutputPortSignal(rts, 11, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o12));
        }

        // port 12
        {
          _ssSetOutputPortNumDimensions(rts, 12, 1);
          ssSetOutputPortWidth(rts, 12, 1);
          ssSetOutputPortSignal(rts, 12, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o13));
        }

        // port 13
        {
          _ssSetOutputPortNumDimensions(rts, 13, 1);
          ssSetOutputPortWidth(rts, 13, 1);
          ssSetOutputPortSignal(rts, 13, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o14));
        }

        // port 14
        {
          _ssSetOutputPortNumDimensions(rts, 14, 1);
          ssSetOutputPortWidth(rts, 14, 1);
          ssSetOutputPortSignal(rts, 14, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o15));
        }

        // port 15
        {
          _ssSetOutputPortNumDimensions(rts, 15, 1);
          ssSetOutputPortWidth(rts, 15, 1);
          ssSetOutputPortSignal(rts, 15, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o16));
        }

        // port 16
        {
          _ssSetOutputPortNumDimensions(rts, 16, 1);
          ssSetOutputPortWidth(rts, 16, 1);
          ssSetOutputPortSignal(rts, 16, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o17));
        }

        // port 17
        {
          _ssSetOutputPortNumDimensions(rts, 17, 1);
          ssSetOutputPortWidth(rts, 17, 1);
          ssSetOutputPortSignal(rts, 17, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o18));
        }

        // port 18
        {
          _ssSetOutputPortNumDimensions(rts, 18, 1);
          ssSetOutputPortWidth(rts, 18, 1);
          ssSetOutputPortSignal(rts, 18, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o19));
        }

        // port 19
        {
          _ssSetOutputPortNumDimensions(rts, 19, 1);
          ssSetOutputPortWidth(rts, 19, 1);
          ssSetOutputPortSignal(rts, 19, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o20));
        }

        // port 20
        {
          _ssSetOutputPortNumDimensions(rts, 20, 1);
          ssSetOutputPortWidth(rts, 20, 1);
          ssSetOutputPortSignal(rts, 20, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o21));
        }

        // port 21
        {
          _ssSetOutputPortNumDimensions(rts, 21, 1);
          ssSetOutputPortWidth(rts, 21, 1);
          ssSetOutputPortSignal(rts, 21, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o22));
        }

        // port 22
        {
          _ssSetOutputPortNumDimensions(rts, 22, 1);
          ssSetOutputPortWidth(rts, 22, 1);
          ssSetOutputPortSignal(rts, 22, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o23));
        }

        // port 23
        {
          _ssSetOutputPortNumDimensions(rts, 23, 1);
          ssSetOutputPortWidth(rts, 23, 1);
          ssSetOutputPortSignal(rts, 23, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o24));
        }

        // port 24
        {
          _ssSetOutputPortNumDimensions(rts, 24, 1);
          ssSetOutputPortWidth(rts, 24, 1);
          ssSetOutputPortSignal(rts, 24, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o25));
        }

        // port 25
        {
          _ssSetOutputPortNumDimensions(rts, 25, 1);
          ssSetOutputPortWidth(rts, 25, 1);
          ssSetOutputPortSignal(rts, 25, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o26));
        }

        // port 26
        {
          _ssSetOutputPortNumDimensions(rts, 26, 1);
          ssSetOutputPortWidth(rts, 26, 1);
          ssSetOutputPortSignal(rts, 26, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o27));
        }

        // port 27
        {
          _ssSetOutputPortNumDimensions(rts, 27, 1);
          ssSetOutputPortWidth(rts, 27, 1);
          ssSetOutputPortSignal(rts, 27, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o28));
        }

        // port 28
        {
          _ssSetOutputPortNumDimensions(rts, 28, 1);
          ssSetOutputPortWidth(rts, 28, 1);
          ssSetOutputPortSignal(rts, 28, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o29));
        }

        // port 29
        {
          _ssSetOutputPortNumDimensions(rts, 29, 1);
          ssSetOutputPortWidth(rts, 29, 1);
          ssSetOutputPortSignal(rts, 29, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o30));
        }

        // port 30
        {
          _ssSetOutputPortNumDimensions(rts, 30, 1);
          ssSetOutputPortWidth(rts, 30, 1);
          ssSetOutputPortSignal(rts, 30, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o31));
        }

        // port 31
        {
          _ssSetOutputPortNumDimensions(rts, 31, 1);
          ssSetOutputPortWidth(rts, 31, 1);
          ssSetOutputPortSignal(rts, 31, ((real_T *)
            &ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o32));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function Builder");
      ssSetPath(rts,
                "ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/platform vel cntr/Bumper Interaction Controller/Bumper_system/S-Function Builder");
      ssSetRTModel(rts,ROPOD_4Wheel_TdistZMPC_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // registration
      Read_Serial_Port(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 1);
      _ssSetOutputPortConnected(rts, 8, 1);
      _ssSetOutputPortConnected(rts, 9, 1);
      _ssSetOutputPortConnected(rts, 10, 1);
      _ssSetOutputPortConnected(rts, 11, 1);
      _ssSetOutputPortConnected(rts, 12, 1);
      _ssSetOutputPortConnected(rts, 13, 1);
      _ssSetOutputPortConnected(rts, 14, 1);
      _ssSetOutputPortConnected(rts, 15, 1);
      _ssSetOutputPortConnected(rts, 16, 1);
      _ssSetOutputPortConnected(rts, 17, 1);
      _ssSetOutputPortConnected(rts, 18, 1);
      _ssSetOutputPortConnected(rts, 19, 1);
      _ssSetOutputPortConnected(rts, 20, 1);
      _ssSetOutputPortConnected(rts, 21, 1);
      _ssSetOutputPortConnected(rts, 22, 1);
      _ssSetOutputPortConnected(rts, 23, 1);
      _ssSetOutputPortConnected(rts, 24, 1);
      _ssSetOutputPortConnected(rts, 25, 1);
      _ssSetOutputPortConnected(rts, 26, 1);
      _ssSetOutputPortConnected(rts, 27, 1);
      _ssSetOutputPortConnected(rts, 28, 1);
      _ssSetOutputPortConnected(rts, 29, 1);
      _ssSetOutputPortConnected(rts, 30, 1);
      _ssSetOutputPortConnected(rts, 31, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 8, 0);
      _ssSetOutputPortBeingMerged(rts, 9, 0);
      _ssSetOutputPortBeingMerged(rts, 10, 0);
      _ssSetOutputPortBeingMerged(rts, 11, 0);
      _ssSetOutputPortBeingMerged(rts, 12, 0);
      _ssSetOutputPortBeingMerged(rts, 13, 0);
      _ssSetOutputPortBeingMerged(rts, 14, 0);
      _ssSetOutputPortBeingMerged(rts, 15, 0);
      _ssSetOutputPortBeingMerged(rts, 16, 0);
      _ssSetOutputPortBeingMerged(rts, 17, 0);
      _ssSetOutputPortBeingMerged(rts, 18, 0);
      _ssSetOutputPortBeingMerged(rts, 19, 0);
      _ssSetOutputPortBeingMerged(rts, 20, 0);
      _ssSetOutputPortBeingMerged(rts, 21, 0);
      _ssSetOutputPortBeingMerged(rts, 22, 0);
      _ssSetOutputPortBeingMerged(rts, 23, 0);
      _ssSetOutputPortBeingMerged(rts, 24, 0);
      _ssSetOutputPortBeingMerged(rts, 25, 0);
      _ssSetOutputPortBeingMerged(rts, 26, 0);
      _ssSetOutputPortBeingMerged(rts, 27, 0);
      _ssSetOutputPortBeingMerged(rts, 28, 0);
      _ssSetOutputPortBeingMerged(rts, 29, 0);
      _ssSetOutputPortBeingMerged(rts, 30, 0);
      _ssSetOutputPortBeingMerged(rts, 31, 0);

      // Update the BufferDstPort flags for each input port
    }

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S31>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[2];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_TdistZMPC_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods2
                           [2]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods3
                           [2]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods4
                           [2]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command1;
          sfcnUPtrs[1] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command2;
          sfcnUPtrs[2] = &ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[0];
          sfcnUPtrs[3] = &ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2;
          sfcnUPtrs[4] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p;
          sfcnUPtrs[5] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n;
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_e;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_m;
          sfcnUPtrs[8] = &ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_o;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_TdistZMPC_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_TdistZMPC_cntr_P.SFunction_P1_Size);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S32>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[3];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_TdistZMPC_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods2
                           [3]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods3
                           [3]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods4
                           [3]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command1_f;
          sfcnUPtrs[1] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command2_p;
          sfcnUPtrs[2] = &ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[2];
          sfcnUPtrs[3] = &ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_p;
          sfcnUPtrs[4] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_i;
          sfcnUPtrs[5] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_l;
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_o;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_i;
          sfcnUPtrs[8] = &ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_p));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_TdistZMPC_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_TdistZMPC_cntr_P.SFunction_P1_Size_d);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S33>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_TdistZMPC_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods2
                           [4]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods3
                           [4]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods4
                           [4]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command1_b;
          sfcnUPtrs[1] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command2_j;
          sfcnUPtrs[2] = &ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[4];
          sfcnUPtrs[3] = &ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_c;
          sfcnUPtrs[4] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_p;
          sfcnUPtrs[5] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_e;
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n;
          sfcnUPtrs[8] = &ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_o));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_TdistZMPC_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_TdistZMPC_cntr_P.SFunction_P1_Size_j);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S34>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[5];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_TdistZMPC_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods2
                           [5]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods3
                           [5]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.methods4
                           [5]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command1_i;
          sfcnUPtrs[1] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command2_pm;
          sfcnUPtrs[2] = &ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[6];
          sfcnUPtrs[3] = &ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_m;
          sfcnUPtrs[4] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_j;
          sfcnUPtrs[5] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_c;
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_l;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_g;
          sfcnUPtrs[8] = &ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_TdistZMPC_cntr/Non-ROS Ropod Controller/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_TdistZMPC_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_TdistZMPC_cntr_P.SFunction_P1_Size_k);
      }

      // registration
      ec_ROPOD_SmartWheel(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      // adjust sample time
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      // set compiled values of dynamic vector attributes
      ssSetNumNonsampledZCs(rts, 0);

      // Update connectivity flags for each port
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      // Update the BufferDstPort flags for each input port
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  {
    int32_T i;
    static const char_T tmp[28] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'l', 'o',
      'a', 'd', '_', 'a', 't', 't', 'a', 'c', 'h', 'e', 'd', '_', 'A', 'p', 'p',
      'l', 'i', 'e', 'd' };

    static const char_T tmp_0[19] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'r', 'i', 'g', 'h', 't' };

    static const char_T tmp_1[18] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'b', 'a', 'c', 'k' };

    static const char_T tmp_2[19] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'f', 'r', 'o', 'n', 't' };

    static const char_T tmp_3[18] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'l', 'e', 'f', 't' };

    static const char_T tmp_4[22] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'L',
      'L', 'C', 'm', 'o', 'd', 'e', '_', 'A', 'p', 'p', 'l', 'i', 'e', 'd' };

    static const char_T tmp_5[16] = { '/', 'o', 'd', 'o', 'm', '_', 'i', 'n',
      'c', 'o', 'm', 'p', 'l', 'e', 't', 'e' };

    static const char_T tmp_6[20] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'e', 'n', 'a', 'b', 'l', 'e' };

    static const char_T tmp_7[25] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'm', 'a', 'x', '_', 'c', 'u', 'r', 'r', 'e',
      'n', 't' };

    static const char_T tmp_8[31] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_9[31] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_a[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'I',
      '_', 'f', 'h', 'z' };

    static const char_T tmp_b[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'K',
      'g', 'a', 'i', 'n' };

    static const char_T tmp_c[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_d[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'L', '_',
      'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_e[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'L', '_',
      'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_f[25] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'I', '_', 'f',
      'h', 'z' };

    static const char_T tmp_g[25] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'K', 'g', 'a',
      'i', 'n' };

    static const char_T tmp_h[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'P', 'F',
      '_', 'f', 'h', 'z' };

    static const char_T tmp_i[32] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_j[32] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_k[28] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'I', '_', 'f', 'h', 'z' };

    static const char_T tmp_l[28] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'K', 'g', 'a', 'i', 'n' };

    static const char_T tmp_m[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_n[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_o[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_p[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 'x', 'y' };

    static const char_T tmp_q[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 'x', 'y' };

    static const char_T tmp_r[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '4' };

    static const char_T tmp_s[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '3' };

    static const char_T tmp_t[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '2' };

    static const char_T tmp_u[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '1' };

    static const char_T tmp_v[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_w[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_x[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_y[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_z[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_10[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_11[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_12[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_13[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'd', '_', 'w' };

    static const char_T tmp_14[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 's', '_', 'w' };

    static const char_T tmp_15[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '4' };

    static const char_T tmp_16[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '4' };

    static const char_T tmp_17[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '3' };

    static const char_T tmp_18[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '3' };

    static const char_T tmp_19[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '2' };

    static const char_T tmp_1a[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '2' };

    static const char_T tmp_1b[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '1' };

    static const char_T tmp_1c[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '1' };

    static const char_T tmp_1d[30] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_1e[35] = { '/', 'r', 'o', 'u', 't', 'e', '_', 'n',
      'a', 'v', 'i', 'g', 'a', 't', 'i', 'o', 'n', '/', 's', 'e', 't', '_', 'l',
      'o', 'a', 'd', '_', 'a', 't', 't', 'a', 'c', 'h', 'e', 'd' };

    static const char_T tmp_1f[18] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'S',
      'e', 't', '_', 'L', 'L', 'C', 'm', 'o', 'd', 'e' };

    char_T tmp_1g[17];
    char_T tmp_1h[9];

    // Start for S-Function (ECAT_Interface): '<S12>/ECAT_Interface'
    // Level2 S-Function Block: '<S12>/ECAT_Interface' (ECAT_Interface)
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for Atomic SubSystem: '<S3>/Subscribe1'
    // Start for MATLABSystem: '<S474>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[i] = tmp_1f[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[18] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_9639.createSubscriber
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv13, ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S474>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe1'

    // Start for S-Function (Read_Serial_Port): '<S43>/S-Function Builder'
    // Level2 S-Function Block: '<S43>/S-Function Builder' (Read_Serial_Port)
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for Atomic SubSystem: '<S3>/Subscribe2'
    // Start for MATLABSystem: '<S475>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 1;
    for (i = 0; i < 35; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[i] = tmp_1e[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[35] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_9640.createSubscriber
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv0, ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S475>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe2'

    // Start for MATLABSystem: '<S5>/Get Parameter14'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[i] = tmp_1d[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[30] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv3);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.set_initial_value
      (ROPOD_ParameterInitialValue_pjs);

    // End of Start for MATLABSystem: '<S5>/Get Parameter14'
    // Start for MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_1c[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2173.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2173.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2173.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter'

    // Start for MATLABSystem: '<S6>/Get Parameter11'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_1b[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2176.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2176.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2176.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter11'

    // Start for MATLABSystem: '<S6>/Get Parameter12'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_1a[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2177.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2177.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2177.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter12'

    // Start for MATLABSystem: '<S6>/Get Parameter13'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_19[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2178.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2178.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2178.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter13'

    // Start for MATLABSystem: '<S6>/Get Parameter14'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_18[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2179.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2179.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2179.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter14'

    // Start for MATLABSystem: '<S6>/Get Parameter15'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_17[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2180.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2180.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2180.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter15'

    // Start for MATLABSystem: '<S6>/Get Parameter16'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_16[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2181.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2181.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2181.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter16'

    // Start for MATLABSystem: '<S6>/Get Parameter17'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_15[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2182.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2182.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2182.set_initial_value
      (ParameterInitialV_pjsf4rz1te2ra);

    // End of Start for MATLABSystem: '<S6>/Get Parameter17'

    // Start for MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_14[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[19] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2174.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2174.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2174.set_initial_value
      (ParameterInitialVa_pjsf4rz1te2r);

    // End of Start for MATLABSystem: '<S6>/Get Parameter1'

    // Start for MATLABSystem: '<S6>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_13[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[19] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2183.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2183.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2183.set_initial_value
      (ParameterInitialVal_pjsf4rz1te2);

    // End of Start for MATLABSystem: '<S6>/Get Parameter2'

    // Start for MATLABSystem: '<S6>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_12[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2184.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2184.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2184.set_initial_value
      (ParameterInitialValu_pjsf4rz1te);

    // End of Start for MATLABSystem: '<S6>/Get Parameter3'

    // Start for MATLABSystem: '<S6>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_11[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2185.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2185.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2185.set_initial_value
      (ParameterInitialValu_pjsf4rz1te);

    // End of Start for MATLABSystem: '<S6>/Get Parameter4'

    // Start for MATLABSystem: '<S6>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_10[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2186.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2186.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2186.set_initial_value
      (ParameterInitialValue_pjsf4rz1t);

    // End of Start for MATLABSystem: '<S6>/Get Parameter5'

    // Start for MATLABSystem: '<S6>/Get Parameter6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_z[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2187.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2187.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2187.set_initial_value
      (ParameterInitialValu_pjsf4rz1te);

    // End of Start for MATLABSystem: '<S6>/Get Parameter6'

    // Start for MATLABSystem: '<S6>/Get Parameter7'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_y[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2188.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2188.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2188.set_initial_value
      (ParameterInitialValu_pjsf4rz1te);

    // End of Start for MATLABSystem: '<S6>/Get Parameter7'

    // Start for MATLABSystem: '<S6>/Get Parameter8'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_x[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2189.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2189.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2189.set_initial_value
      (ParameterInitialValue_pjsf4rz1t);

    // End of Start for MATLABSystem: '<S6>/Get Parameter8'

    // Start for MATLABSystem: '<S6>/Get Parameter9'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_w[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2190.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2190.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2190.set_initial_value
      (ParameterInitialValue_pjsf4rz1t);

    // End of Start for MATLABSystem: '<S6>/Get Parameter9'

    // Start for MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_v[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2175.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2175.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2175.set_initial_value
      (ParameterInitialValue_pjsf4rz1t);

    // End of Start for MATLABSystem: '<S6>/Get Parameter10'

    // Start for MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_u[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2214.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2214.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2214.set_initial_value
      (R_ParameterInitia_j);

    // End of Start for MATLABSystem: '<S7>/Get Parameter1'

    // Start for MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_t[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2216.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2216.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2216.set_initial_value
      (R_ParameterInitia_g);

    // End of Start for MATLABSystem: '<S7>/Get Parameter3'

    // Start for MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_s[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2217.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2217.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2217.set_initial_value
      (R_ParameterInitia_f);

    // End of Start for MATLABSystem: '<S7>/Get Parameter4'

    // Start for MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_r[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.set_initial_value
      (R_ParameterInitia_h);

    // End of Start for MATLABSystem: '<S7>/Get Parameter5'

    // Start for MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv10[i] = tmp_q[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv10[21] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2237.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv10);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2237.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2237.set_initial_value
      (R_ParameterInitia_j4);

    // End of Start for MATLABSystem: '<S8>/Get Parameter'

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv10[i] = tmp_p[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv10[21] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv10);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.set_initial_value
      (RO_ParameterInitialValue_pjsf4r);

    // End of Start for MATLABSystem: '<S8>/Get Parameter1'

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S478>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_1h[i] = tmp_o[i];
    }

    tmp_1h[8] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_1899.createSubscriber(tmp_1h,
      ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S478>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'

    // Start for Delay: '<S364>/Enabled Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay = 0.0;

    // Start for MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_n[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2239.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2239.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2239.set_initial_value
      (R_ParameterInitia_j4);

    // End of Start for MATLABSystem: '<S8>/Get Parameter2'

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_m[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2240.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2240.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2240.set_initial_value
      (R_ParameterInitia_n);

    // End of Start for MATLABSystem: '<S8>/Get Parameter3'

    // Start for MATLABSystem: '<S5>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_l[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2931.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2931.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2931.set_initial_value
      (ParameterInitialValue_pjsf4rz1);

    // End of Start for MATLABSystem: '<S5>/Get Parameter10'

    // Start for MATLABSystem: '<S5>/Get Parameter11'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_k[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2932.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2932.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2932.set_initial_value
      (R_ParameterInitialValue_pjsf4rz);

    // End of Start for MATLABSystem: '<S5>/Get Parameter11'

    // Start for MATLABSystem: '<S5>/Get Parameter12'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[i] = tmp_j[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[32] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2933.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv1);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2933.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2933.set_initial_value
      (RO_ParameterInitialValue_pjsf4r);

    // End of Start for MATLABSystem: '<S5>/Get Parameter12'

    // Start for MATLABSystem: '<S5>/Get Parameter13'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[i] = tmp_i[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[32] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2934.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv1);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2934.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2934.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S5>/Get Parameter13'

    // Start for MATLABSystem: '<S5>/Get Parameter6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[i] = tmp_h[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[27] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2903.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2903.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2903.set_initial_value
      (ROPOD_ParameterInitialValue_pjs);

    // End of Start for MATLABSystem: '<S5>/Get Parameter6'

    // Start for MATLABSystem: '<S5>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_g[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[25] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2716.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2716.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2716.set_initial_value
      (ROP_ParameterInitialValue_pjsf4);

    // End of Start for MATLABSystem: '<S5>/Get Parameter'

    // Start for MATLABSystem: '<S5>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_f[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[25] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2898.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2898.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2898.set_initial_value
      (ROPO_ParameterInitialValue_pjsf);

    // End of Start for MATLABSystem: '<S5>/Get Parameter3'

    // Start for MATLABSystem: '<S5>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_e[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[29] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2900.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2900.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2900.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S5>/Get Parameter4'

    // Start for MATLABSystem: '<S5>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_d[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[29] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2902.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2902.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2902.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S5>/Get Parameter5'

    // Start for MATLABSystem: '<S5>/Get Parameter9'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_c[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[29] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2923.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2923.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2923.set_initial_value
      (ROPOD_ParameterInitialValue_pjs);

    // End of Start for MATLABSystem: '<S5>/Get Parameter9'

    // Start for MATLABSystem: '<S5>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[i] = tmp_b[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[27] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2919.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2919.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2919.set_initial_value
      (ROPOD__ParameterInitialValue_pj);

    // End of Start for MATLABSystem: '<S5>/Get Parameter1'

    // Start for MATLABSystem: '<S5>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[i] = tmp_a[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[27] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2920.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2920.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2920.set_initial_value
      (ROPOD_4_ParameterInitialValue_p);

    // End of Start for MATLABSystem: '<S5>/Get Parameter2'

    // Start for MATLABSystem: '<S5>/Get Parameter7'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.isInitialized = 1;
    for (i = 0; i < 31; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv2[i] = tmp_9[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv2[31] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2921.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2921.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2921.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S5>/Get Parameter7'

    // Start for MATLABSystem: '<S5>/Get Parameter8'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 31; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv2[i] = tmp_8[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv2[31] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2922.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2922.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2922.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S5>/Get Parameter8'

    // Start for MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_7[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[25] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2215.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2215.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2215.set_initial_value
      (ParameterInitia_pjsf4rz1te2ravh);

    // End of Start for MATLABSystem: '<S7>/Get Parameter2'

    // Start for MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[i] = tmp_6[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[20] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv11);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.set_initial_value
      (ParameterInitial_pjsf4rz1te2rav);

    // End of Start for MATLABSystem: '<S7>/Get Parameter'

    // Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized = 1;

    // Start for Atomic SubSystem: '<S2>/Publish'
    // Start for MATLABSystem: '<S473>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_1g[i] = tmp_5[i];
    }

    tmp_1g[16] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_1896.createPublisher(tmp_1g,
      ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S473>/SinkBlock'
    // End of Start for SubSystem: '<S2>/Publish'

    // Start for Atomic SubSystem: '<S9>/Publish4'
    // Start for MATLABSystem: '<S484>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[i] = tmp_4[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[22] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9627.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv9, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S484>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish4'

    // Start for Atomic SubSystem: '<S9>/Publish'
    // Start for MATLABSystem: '<S480>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[i] = tmp_3[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[18] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9614.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv13, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S480>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish'

    // Start for Atomic SubSystem: '<S9>/Publish1'
    // Start for MATLABSystem: '<S481>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_2[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[19] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9624.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S481>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish1'

    // Start for Atomic SubSystem: '<S9>/Publish2'
    // Start for MATLABSystem: '<S482>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[i] = tmp_1[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[18] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9625.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv13, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S482>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish2'

    // Start for Atomic SubSystem: '<S9>/Publish3'
    // Start for MATLABSystem: '<S483>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_0[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[19] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9626.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S483>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish3'

    // Start for Atomic SubSystem: '<S9>/Publish5'
    // Start for MATLABSystem: '<S485>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9643.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S485>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish5'
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__o =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_iy =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_il =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__n =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j =
      UNINITIALIZED_ZCSIG;

    // InitializeConditions for UnitDelay: '<S108>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S106>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S110>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_i;

    // InitializeConditions for UnitDelay: '<S112>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_h;

    // InitializeConditions for UnitDelay: '<S114>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n;

    // InitializeConditions for UnitDelay: '<S116>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_kv;

    // InitializeConditions for UnitDelay: '<S118>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S120>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_b;

    // InitializeConditions for Memory: '<S58>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition;

    // InitializeConditions for Memory: '<S58>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition;

    // InitializeConditions for UnitDelay: '<S164>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_d;

    // InitializeConditions for UnitDelay: '<S162>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_l;

    // InitializeConditions for UnitDelay: '<S166>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_kp;

    // InitializeConditions for UnitDelay: '<S168>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nm =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_a;

    // InitializeConditions for UnitDelay: '<S170>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_j;

    // InitializeConditions for UnitDelay: '<S172>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dv =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S174>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hg =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S176>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gi;

    // InitializeConditions for Memory: '<S61>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_o;

    // InitializeConditions for Memory: '<S61>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_f;

    // InitializeConditions for Memory: '<S59>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_m;

    // InitializeConditions for Memory: '<S59>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_fv;

    // InitializeConditions for Memory: '<S62>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_h;

    // InitializeConditions for Memory: '<S62>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S220>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_mn;

    // InitializeConditions for UnitDelay: '<S218>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cd =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gs;

    // InitializeConditions for UnitDelay: '<S222>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_aq;

    // InitializeConditions for UnitDelay: '<S224>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dvl =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_o;

    // InitializeConditions for UnitDelay: '<S226>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nh =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_p;

    // InitializeConditions for UnitDelay: '<S228>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lk;

    // InitializeConditions for UnitDelay: '<S230>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_if =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gw;

    // InitializeConditions for UnitDelay: '<S232>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fk =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_f;

    // InitializeConditions for Memory: '<S57>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_gb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_p;

    // InitializeConditions for Memory: '<S57>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_l;

    // InitializeConditions for UnitDelay: '<S276>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_cn;

    // InitializeConditions for UnitDelay: '<S274>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gg;

    // InitializeConditions for UnitDelay: '<S278>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ja;

    // InitializeConditions for UnitDelay: '<S280>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dm =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n5;

    // InitializeConditions for UnitDelay: '<S282>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jq;

    // InitializeConditions for UnitDelay: '<S284>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ox =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jx;

    // InitializeConditions for UnitDelay: '<S286>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_m2;

    // InitializeConditions for UnitDelay: '<S288>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dj =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ih;

    // InitializeConditions for Memory: '<S63>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_d;

    // InitializeConditions for Memory: '<S63>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_e;

    // InitializeConditions for DiscreteStateSpace: '<S51>/Internal'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition;

    // InitializeConditions for Memory: '<S60>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_f;

    // InitializeConditions for Memory: '<S60>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_j;

    // InitializeConditions for Memory: '<S64>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_mp;

    // InitializeConditions for Memory: '<S64>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_hp =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_c;

    // InitializeConditions for DiscreteStateSpace: '<S52>/Internal'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition_f;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_n[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition_f;

    // InitializeConditions for Delay: '<S364>/Enabled Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.EnabledDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S365>/Delay Input2'
    //
    //  Block description for '<S365>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S366>/Delay Input2'
    //
    //  Block description for '<S366>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition_n;

    // InitializeConditions for UnitDelay: '<S367>/Delay Input2'
    //
    //  Block description for '<S367>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition_e;

    // InitializeConditions for DiscreteIntegrator: '<S405>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S406>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_InitialS;

    // InitializeConditions for DiscreteIntegrator: '<S407>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_o;

    // InitializeConditions for DiscreteTransferFcn: '<S408>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_h;

    // InitializeConditions for UnitDelay: '<S403>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hl =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_af;

    // InitializeConditions for DiscreteIntegrator: '<S414>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_m;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_g = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S415>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_b;

    // InitializeConditions for DiscreteIntegrator: '<S416>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_oa;

    // InitializeConditions for DiscreteTransferFcn: '<S417>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_k;

    // InitializeConditions for UnitDelay: '<S412>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ma =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ds;

    // InitializeConditions for DiscreteIntegrator: '<S423>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_p;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S424>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_e;

    // InitializeConditions for DiscreteIntegrator: '<S425>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_d;

    // InitializeConditions for DiscreteTransferFcn: '<S426>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_g;

    // InitializeConditions for UnitDelay: '<S421>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ni =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jl;

    // InitializeConditions for DiscreteIntegrator: '<S432>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_l;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_gs = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S433>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_bh;

    // InitializeConditions for DiscreteIntegrator: '<S434>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_pf =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_k;

    // InitializeConditions for DiscreteTransferFcn: '<S435>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_n;

    // InitializeConditions for UnitDelay: '<S430>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jk =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_if;

    // InitializeConditions for DiscreteIntegrator: '<S441>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_h;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S442>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_a;

    // InitializeConditions for DiscreteIntegrator: '<S443>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_cz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_n;

    // InitializeConditions for DiscreteTransferFcn: '<S444>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_bz;

    // InitializeConditions for UnitDelay: '<S439>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_he =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_id;

    // InitializeConditions for DiscreteIntegrator: '<S450>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_p3;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_i = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S451>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ew =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_nw;

    // InitializeConditions for DiscreteIntegrator: '<S452>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_nk =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_g;

    // InitializeConditions for DiscreteTransferFcn: '<S453>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_hu;

    // InitializeConditions for UnitDelay: '<S448>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_gt =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_a0;

    // InitializeConditions for DiscreteIntegrator: '<S459>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_na =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_a;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_p = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S460>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ev =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ez;

    // InitializeConditions for DiscreteIntegrator: '<S461>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_na5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_ol;

    // InitializeConditions for DiscreteTransferFcn: '<S462>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_o;

    // InitializeConditions for UnitDelay: '<S457>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kq =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_dh;

    // InitializeConditions for DiscreteIntegrator: '<S468>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ec =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_i;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S469>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_bt;

    // InitializeConditions for DiscreteIntegrator: '<S470>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_e5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_hj;

    // InitializeConditions for DiscreteTransferFcn: '<S471>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ep =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_l;

    // InitializeConditions for UnitDelay: '<S466>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jz;

    // InitializeConditions for DiscreteIntegrator: '<S339>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_b;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_do = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S340>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mv =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_p;

    // InitializeConditions for DiscreteIntegrator: '<S341>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_bb;

    // InitializeConditions for DiscreteTransferFcn: '<S342>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_i;

    // InitializeConditions for UnitDelay: '<S337>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_nx =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_hp;

    // InitializeConditions for DiscreteIntegrator: '<S348>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_g3;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S349>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_m;

    // InitializeConditions for DiscreteIntegrator: '<S350>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_f;

    // InitializeConditions for DiscreteTransferFcn: '<S351>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_ac =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_pt;

    // InitializeConditions for UnitDelay: '<S346>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d53 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_e;

    // InitializeConditions for DiscreteIntegrator: '<S357>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_h4;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S358>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_o3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_mq;

    // InitializeConditions for DiscreteIntegrator: '<S359>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_gb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_gp;

    // InitializeConditions for DiscreteTransferFcn: '<S360>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_oc =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_m5;

    // InitializeConditions for UnitDelay: '<S355>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cm =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_d3;

    // InitializeConditions for DiscreteIntegrator: '<S66>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_c;

    // InitializeConditions for UnitDelay: '<S78>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_mz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ng;

    // InitializeConditions for UnitDelay: '<S76>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n4;

    // InitializeConditions for DiscreteIntegrator: '<S67>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_b;

    // InitializeConditions for UnitDelay: '<S82>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_pc =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ok;

    // InitializeConditions for UnitDelay: '<S80>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_cp =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_el;

    // InitializeConditions for Memory: '<S65>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_he =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_n;

    // InitializeConditions for Memory: '<S65>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_d;

    // InitializeConditions for UnitDelay: '<S383>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jv;

    // InitializeConditions for UnitDelay: '<S379>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ei;

    // InitializeConditions for UnitDelay: '<S381>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_le =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_bd;

    // InitializeConditions for UnitDelay: '<S385>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_mh =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_io;

    // InitializeConditions for UnitDelay: '<S330>/UD'
    //
    //  Block description for '<S330>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_g;

    // InitializeConditions for UnitDelay: '<S330>/UD'
    //
    //  Block description for '<S330>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_g;

    // InitializeConditions for UnitDelay: '<S330>/UD'
    //
    //  Block description for '<S330>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_g;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S474>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S476>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S474>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S475>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S477>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S475>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe2'

    // SystemInitialize for Chart: '<S13>/Chart'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
      ROPOD_4Wheel_IN_NO_ACTIVE_CHILD;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart =
      ROPOD_4Wheel_IN_NO_ACTIVE_CHILD;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.is_active_c3_ROPOD_4Wheel_Tdist = 0U;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn =
      ROPOD_4Wheel_IN_NO_ACTIVE_CHILD;

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S478>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S479>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1 = ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S478>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'

    // SystemInitialize for Enabled SubSystem: '<S38>/ZMPC_x'
    // InitializeConditions for Delay: '<S44>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition;

    // InitializeConditions for Delay: '<S44>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S44>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition;

    // InitializeConditions for Delay: '<S44>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition;

    // InitializeConditions for Delay: '<S44>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition;

    // SystemInitialize for Outport: '<S44>/Fx'
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv_c = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0;

    // End of SystemInitialize for SubSystem: '<S38>/ZMPC_x'

    // SystemInitialize for Enabled SubSystem: '<S38>/ZMPC_y'
    // InitializeConditions for Delay: '<S45>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition_k;

    // InitializeConditions for Delay: '<S45>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition_n;

    // SystemInitialize for Enabled SubSystem: '<S38>/ZMPC_x'
    for (i = 0; i < 102; i++) {
      // InitializeConditions for Delay: '<S44>/Delay2'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_m[i] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition;

      // InitializeConditions for Delay: '<S45>/Delay2'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[i] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition_f;
    }

    // End of SystemInitialize for SubSystem: '<S38>/ZMPC_x'

    // InitializeConditions for Delay: '<S45>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition_g;

    // InitializeConditions for Delay: '<S45>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition_d;

    // InitializeConditions for Delay: '<S45>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition_m;

    // SystemInitialize for Outport: '<S45>/Fx'
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0_j;

    // End of SystemInitialize for SubSystem: '<S38>/ZMPC_y'

    // SystemInitialize for Enabled SubSystem: '<S38>/Angle controller'
    // InitializeConditions for DiscreteIntegrator: '<S42>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC;

    // InitializeConditions for DiscreteIntegrator: '<S42>/Discrete-Time Integrator1' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_IC;

    // SystemInitialize for Outport: '<S42>/u_N'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = ROPOD_4Wheel_TdistZMPC_cntr_P.u_N_Y0;

    // End of SystemInitialize for SubSystem: '<S38>/Angle controller'
  }
}

// Model terminate function
void ROPOD_4Wheel_TdistZMPC_cntr_terminate(void)
{
  // Terminate for S-Function (ECAT_Interface): '<S12>/ECAT_Interface'
  // Level2 S-Function Block: '<S12>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Terminate for Atomic SubSystem: '<S3>/Subscribe1'
  // Terminate for MATLABSystem: '<S474>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S474>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe1'

  // Terminate for S-Function (Read_Serial_Port): '<S43>/S-Function Builder'
  // Level2 S-Function Block: '<S43>/S-Function Builder' (Read_Serial_Port)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for Atomic SubSystem: '<S3>/Subscribe2'
  // Terminate for MATLABSystem: '<S475>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S475>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe2'

  // Terminate for MATLABSystem: '<S5>/Get Parameter14'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter14'

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S31>/S-Function'
  // Level2 S-Function Block: '<S31>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'
  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S33>/S-Function'
  // Level2 S-Function Block: '<S33>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S34>/S-Function'
  // Level2 S-Function Block: '<S34>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  // Terminate for MATLABSystem: '<S6>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter'

  // Terminate for MATLABSystem: '<S6>/Get Parameter11'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter11'

  // Terminate for MATLABSystem: '<S6>/Get Parameter12'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter12'

  // Terminate for MATLABSystem: '<S6>/Get Parameter13'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter13'

  // Terminate for MATLABSystem: '<S6>/Get Parameter14'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter14'

  // Terminate for MATLABSystem: '<S6>/Get Parameter15'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter15'

  // Terminate for MATLABSystem: '<S6>/Get Parameter16'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter16'

  // Terminate for MATLABSystem: '<S6>/Get Parameter17'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter17'

  // Terminate for MATLABSystem: '<S6>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter1'

  // Terminate for MATLABSystem: '<S6>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter2'

  // Terminate for MATLABSystem: '<S6>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter3'

  // Terminate for MATLABSystem: '<S6>/Get Parameter4'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter4'

  // Terminate for MATLABSystem: '<S6>/Get Parameter5'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter5'

  // Terminate for MATLABSystem: '<S6>/Get Parameter6'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter6'

  // Terminate for MATLABSystem: '<S6>/Get Parameter7'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter7'

  // Terminate for MATLABSystem: '<S6>/Get Parameter8'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter8'

  // Terminate for MATLABSystem: '<S6>/Get Parameter9'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter9'

  // Terminate for MATLABSystem: '<S6>/Get Parameter10'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter10'

  // Terminate for MATLABSystem: '<S7>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter1'

  // Terminate for MATLABSystem: '<S7>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter3'

  // Terminate for MATLABSystem: '<S7>/Get Parameter4'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter4'

  // Terminate for MATLABSystem: '<S7>/Get Parameter5'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter5'

  // Terminate for MATLABSystem: '<S8>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter'

  // Terminate for MATLABSystem: '<S8>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Terminate for MATLABSystem: '<S478>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S478>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe1'

  // Terminate for MATLABSystem: '<S8>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter2'

  // Terminate for MATLABSystem: '<S8>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter3'

  // Terminate for MATLABSystem: '<S5>/Get Parameter10'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter10'

  // Terminate for MATLABSystem: '<S5>/Get Parameter11'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter11'

  // Terminate for MATLABSystem: '<S5>/Get Parameter12'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter12'

  // Terminate for MATLABSystem: '<S5>/Get Parameter13'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter13'

  // Terminate for MATLABSystem: '<S5>/Get Parameter6'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter6'

  // Terminate for MATLABSystem: '<S5>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter'

  // Terminate for MATLABSystem: '<S5>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter3'

  // Terminate for MATLABSystem: '<S5>/Get Parameter4'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter4'

  // Terminate for MATLABSystem: '<S5>/Get Parameter5'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter5'

  // Terminate for MATLABSystem: '<S5>/Get Parameter9'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter9'

  // Terminate for MATLABSystem: '<S5>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter1'

  // Terminate for MATLABSystem: '<S5>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter2'

  // Terminate for MATLABSystem: '<S5>/Get Parameter7'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter7'

  // Terminate for MATLABSystem: '<S5>/Get Parameter8'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter8'

  // Terminate for MATLABSystem: '<S7>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter2'

  // Terminate for MATLABSystem: '<S7>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter'

  // Terminate for MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S2>/Coordinate Transformation Conversion' 

  // Terminate for Atomic SubSystem: '<S2>/Publish'
  // Terminate for MATLABSystem: '<S473>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S473>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish'

  // Terminate for Atomic SubSystem: '<S9>/Publish4'
  // Terminate for MATLABSystem: '<S484>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S484>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish4'

  // Terminate for Atomic SubSystem: '<S9>/Publish'
  // Terminate for MATLABSystem: '<S480>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S480>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish'

  // Terminate for Atomic SubSystem: '<S9>/Publish1'
  // Terminate for MATLABSystem: '<S481>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S481>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish1'

  // Terminate for Atomic SubSystem: '<S9>/Publish2'
  // Terminate for MATLABSystem: '<S482>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S482>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish2'

  // Terminate for Atomic SubSystem: '<S9>/Publish3'
  // Terminate for MATLABSystem: '<S483>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S483>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish3'

  // Terminate for Atomic SubSystem: '<S9>/Publish5'
  // Terminate for MATLABSystem: '<S485>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S485>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish5'
}

//
// File trailer for generated code.
//
// [EOF]
//
