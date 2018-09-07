//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_TdistZMPC_cntr.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_TdistZMPC_cntr'.
//
// Model version                  : 1.318
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Sep  5 11:05:03 2018
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
#define R_ParameterInitia_f            (2.001)
#define R_ParameterInitia_g            (1.873)
#define R_ParameterInitia_h            (3.508)
#define R_ParameterInitia_j            (2.21)
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
static int32_T ROPOD_4Wheel_TdistZMPC_c_xpotrf(real_T A[1600]);
static void ROPOD_4Wheel_TdistZMPC_cn_xswap(real_T x[1600], int32_T ix0, int32_T
  iy0, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_c_xgetrf(real_T A[1600], int32_T ipiv[40],
  int32_T *info, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_cn_xtrsm(const real_T A[1600], real_T B[1600]);
static void ROPOD_4Wheel_TdistZMPC__xtrsm_g(const real_T A[1600], real_T B[1600]);
static void ROPOD_4Wheel_TdistZMPC_mldivide(const real_T A[1600], real_T B[1600],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static boolean_T ROPOD_4Wheel_TdistZ_ifWhileCond(const boolean_T x[102]);
static void ROPOD_4Wheel_Tdis_Unconstrained(const real_T Hinv[1600], const
  real_T f[40], real_T x[40]);
static real_T ROPOD_4Wheel_TdistZMPC_cnt_norm(const real_T x[40]);
static real_T ROPOD_4Wheel_TdistZMPC_cn_xnrm2(int32_T n, const real_T x[1600],
  int32_T ix0, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static real_T ROPOD_4Wheel_TdistZMPC__xzlarfg(int32_T n, real_T *alpha1, real_T
  x[1600], int32_T ix0, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_cn_xgemv(int32_T m, int32_T n, const real_T
  A[1600], int32_T ia0, const real_T x[1600], int32_T ix0, real_T y[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static int32_T ROPOD_4Wheel_TdistZMPC_c_ilazlc(int32_T m, int32_T n, const
  real_T A[1600], int32_T ia0);
static void ROPOD_4Wheel_TdistZMPC_cnt_xger(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[40], real_T A[1600], int32_T ia0,
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_c_xzlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_c_xgeqrf(real_T A[1600], real_T tau[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_xzlarf_m(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_cn_xscal(int32_T n, real_T a, real_T x[1600],
  int32_T ix0);
static void ROPOD_4Wheel_TdistZMPC_cntr_qr(const real_T A[1600], real_T Q[1600],
  real_T R[1600], B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static real_T ROPOD_4Wheel_TdistZM_KWIKfactor(const real_T Ac[4080], const
  int16_T iC[102], int16_T nA, const real_T Linv[1600], real_T RLinv[1600],
  real_T D[1600], real_T H[1600], B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);
static void ROPOD_4Wheel_TdistZMPC_cntr_abs(const real_T x[40], real_T y[40]);
static void ROPOD_4Wheel_TdistZMPC_cn_abs_o(const real_T x[102], real_T y[102]);
static void ROPOD_4Wheel_Tdi_DropConstraint(int16_T kDrop, int16_T iA[102],
  int16_T *nA, int16_T iC[102]);
static void ROPOD_4Wheel_TdistZ_mpcqpsolver(const real_T Linv[1600], const
  real_T f[40], const real_T A[4080], const real_T b[102], const boolean_T iA0
  [102], real_T x[40], real_T *status, boolean_T iA[102],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB);

// Forward declaration for local functions
static real_T ROPOD_4Wheel_TdistZMPC__xnrm2_o(int32_T n, const real_T x[27],
  int32_T ix0);
static real_T ROPOD_4Wheel_TdistZMPC_xnrm2_ow(int32_T n, const real_T x[9],
  int32_T ix0);
static void ROPOD_4Wheel_TdistZMPC_xaxpy_oq(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC__xaxpy_o(int32_T n, real_T a, const real_T x
  [27], int32_T ix0, real_T y[3], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s);
static real_T ROPOD_4Wheel_TdistZMPC_cn_xdotc(int32_T n, const real_T x[27],
  int32_T ix0, const real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC_cn_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_TdistZMPC_cntr_svd(const real_T A[27], real_T U[3]);
static void ROPOD_4Wheel_Td_Unconstrained_d(const real_T Hinv[81], const real_T
  f[9], real_T x[9]);
static real_T ROPOD_4Wheel_TdistZMPC_c_norm_m(const real_T x[9]);
static void ROPOD_4Wheel_TdistZMPC_cn_abs_h(const real_T x[9], real_T y[9]);
static void ROPOD_4Wheel_TdistZMPC_c_abs_hu(const real_T x[21], real_T y[21]);
static real_T ROPOD_4Wheel_TdistZMP_xnrm2_owt(int32_T n, const real_T x[81],
  int32_T ix0);
static real_T ROPOD_4Wheel_Tdis_rt_hypotd_snf(real_T u0, real_T u1);
static void ROPOD_4Wheel_TdistZMPC__xgemv_k(int32_T m, int32_T n, const real_T
  A[81], int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
static void ROPOD_4Wheel_TdistZMPC_c_xger_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[9], real_T A[81], int32_T ia0);
static void ROPOD_4Wheel_TdistZMPC_xgeqrf_c(real_T A[81], real_T tau[9]);
static void ROPOD_4Wheel_TdistZMPC_cnt_qr_m(const real_T A[81], real_T Q[81],
  real_T R[81]);
static real_T ROPOD_4Wheel_Tdist_KWIKfactor_e(const real_T Ac[189], const
  int16_T iC[21], int16_T nA, const real_T Linv[81], real_T RLinv[81], real_T D
  [81], real_T H[81]);
static void ROPOD_4Wheel_T_DropConstraint_n(int16_T kDrop, int16_T iA[21],
  int16_T *nA, int16_T iC[21]);
static void ROPOD_4Wheel_T_ResetToColdStart(int16_T iA[21], int16_T iC[21]);
static void ROPOD_4Wheel_Tdis_mpcqpsolver_p(const real_T Linv[81], const real_T
  f[9], const real_T b[18], const real_T Aeq[27], const real_T beq[3], real_T x
  [9]);
static real_T ROPOD_4Wheel_Tdis_rt_atan2d_snf(real_T u0, real_T u1);
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_d(const real_T x[4]);
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
//    '<S78>/MATLAB Function'
//    '<S80>/MATLAB Function'
//    '<S82>/MATLAB Function'
//    '<S84>/MATLAB Function'
//    '<S108>/MATLAB Function'
//    '<S110>/MATLAB Function'
//    '<S112>/MATLAB Function'
//    '<S114>/MATLAB Function'
//    '<S116>/MATLAB Function'
//    '<S118>/MATLAB Function'
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
//    '<S59>/Calibration1'
//    '<S60>/Calibration1'
//    '<S61>/Calibration1'
//    '<S62>/Calibration1'
//    '<S63>/Calibration1'
//    '<S64>/Calibration1'
//    '<S65>/Calibration1'
//    '<S66>/Calibration1'
//    '<S67>/Calibration1'
//
void ROPOD_4Wheel_Tdist_Calibration1(real_T rtu_angle, real_T rtu_sample, real_T
  rtu_data, real_T *rty_cal_angle, real_T *rty_i, real_T *rty_data_out)
{
  if ((rtu_sample > 1000.0) && (rtu_sample <= 2000.0)) {
    *rty_data_out = rtu_data + rtu_angle;
    *rty_cal_angle = rtu_angle;
  } else {
    *rty_cal_angle = rtu_angle - rtu_data / 1000.0;
    *rty_data_out = rtu_data;
  }

  *rty_i = rtu_sample + 1.0;
}

// Function for MATLAB Function: '<S45>/speed deflection angle calculation X+'
static real_T ROPOD_4Wheel_TdistZMPC_cntr_sum(const real_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

//
// Output and update for atomic system:
//    '<S45>/speed deflection angle calculation X+'
//    '<S45>/speed deflection angle calculation X-'
//    '<S45>/speed deflection angle calculation Y+'
//    '<S45>/speed deflection angle calculation Y-'
//
void speeddeflectionanglecalculation(real_T rtu_s_data, real_T rtu_s_data_p,
  real_T rtu_s_data_n, real_T rtu_s_data_np, real_T rtu_s_data_i, real_T
  rtu_s_data_h, real_T rtu_s_data_g, real_T rtu_s_data_g3, real_T
  *rty_Total_deflection, real_T *rty_Total_speed, real_T *rty_max_angle,
  B_speeddeflectionanglecalcula_T *localB)
{
  real_T varargin_1[4];
  real_T mtmp;
  int32_T ixstart;
  int32_T ix;
  boolean_T exitg1;

  // SignalConversion: '<S70>/TmpSignal ConversionAt SFunction Inport1'
  localB->TmpSignalConversionAtSFun_h[0] = rtu_s_data;
  localB->TmpSignalConversionAtSFun_h[1] = rtu_s_data_p;
  localB->TmpSignalConversionAtSFun_h[2] = rtu_s_data_n;
  localB->TmpSignalConversionAtSFun_h[3] = rtu_s_data_np;
  localB->TmpSignalConversionAtSFun_h[4] = rtu_s_data_i;
  localB->TmpSignalConversionAtSFun_h[5] = rtu_s_data_h;
  localB->TmpSignalConversionAtSFun_h[6] = rtu_s_data_g;
  localB->TmpSignalConversionAtSFun_h[7] = rtu_s_data_g3;
  *rty_Total_deflection = ROPOD_4Wheel_TdistZMPC_cntr_sum
    (&localB->TmpSignalConversionAtSFun_h[0]);
  *rty_Total_speed = ROPOD_4Wheel_TdistZMPC_cntr_sum
    (&localB->TmpSignalConversionAtSFun_h[4]);

  // SignalConversion: '<S70>/TmpSignal ConversionAt SFunction Inport1'
  varargin_1[0] = atan((rtu_s_data - rtu_s_data_p) / 164.0);
  varargin_1[1] = atan((rtu_s_data_p - rtu_s_data_n) / 164.0);
  varargin_1[2] = atan((rtu_s_data_n - rtu_s_data_np) / 164.0);
  varargin_1[3] = atan((rtu_s_data - rtu_s_data_np) / 492.0);
  ixstart = 1;
  mtmp = varargin_1[0];
  if (rtIsNaN(varargin_1[0])) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 5)) {
      ixstart = ix;
      if (!rtIsNaN(varargin_1[ix - 1])) {
        mtmp = varargin_1[ix - 1];
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 4) {
    while (ixstart + 1 < 5) {
      if (varargin_1[ixstart] > mtmp) {
        mtmp = varargin_1[ixstart];
      }

      ixstart++;
    }
  }

  *rty_max_angle = 57.295779513082323 * mtmp;
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static int32_T ROPOD_4Wheel_TdistZMPC_c_xpotrf(real_T A[1600])
{
  int32_T info;
  int32_T jj;
  real_T ajj;
  int32_T j;
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T c;
  int32_T b_iy;
  int32_T e;
  int32_T ia;
  boolean_T exitg1;
  info = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j + 1 < 41)) {
    jj = j * 40 + j;
    ajj = 0.0;
    if (!(j < 1)) {
      ix = j;
      iy = j;
      for (k = 1; k <= j; k++) {
        ajj += A[ix] * A[iy];
        ix += 40;
        iy += 40;
      }
    }

    ajj = A[jj] - ajj;
    if (ajj > 0.0) {
      ajj = sqrt(ajj);
      A[jj] = ajj;
      if (j + 1 < 40) {
        if (j != 0) {
          ix = j;
          iy = ((j - 1) * 40 + j) + 2;
          for (k = j + 2; k <= iy; k += 40) {
            c = -A[ix];
            b_iy = jj + 1;
            e = (k - j) + 38;
            for (ia = k; ia <= e; ia++) {
              A[b_iy] += A[ia - 1] * c;
              b_iy++;
            }

            ix += 40;
          }
        }

        ajj = 1.0 / ajj;
        ix = (jj - j) + 40;
        for (jj++; jj + 1 <= ix; jj++) {
          A[jj] *= ajj;
        }
      }

      j++;
    } else {
      A[jj] = ajj;
      info = j + 1;
      exitg1 = true;
    }
  }

  return info;
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xswap(real_T x[1600], int32_T ix0, int32_T
  iy0, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 40; k++) {
    localB->temp_b = x[ix];
    x[ix] = x[iy];
    x[iy] = localB->temp_b;
    ix += 40;
    iy += 40;
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_xgetrf(real_T A[1600], int32_T ipiv[40],
  int32_T *info, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T j;
  int32_T c;
  int32_T ix;
  int32_T k;
  int32_T jA;
  int32_T b_ix;
  int32_T d;
  int32_T ijA;
  for (j = 0; j < 40; j++) {
    ipiv[j] = 1 + j;
  }

  *info = 0;
  for (j = 0; j < 39; j++) {
    c = j * 41;
    jA = 1;
    ix = c;
    localB->smax = fabs(A[c]);
    for (k = 2; k <= 40 - j; k++) {
      ix++;
      localB->s = fabs(A[ix]);
      if (localB->s > localB->smax) {
        jA = k;
        localB->smax = localB->s;
      }
    }

    if (A[(c + jA) - 1] != 0.0) {
      if (jA - 1 != 0) {
        ipiv[j] = j + jA;
        ROPOD_4Wheel_TdistZMPC_cn_xswap(A, j + 1, j + jA, localB);
      }

      jA = (c - j) + 40;
      for (ix = c + 1; ix + 1 <= jA; ix++) {
        A[ix] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    jA = c;
    ix = c + 40;
    for (k = 1; k <= 39 - j; k++) {
      localB->smax = A[ix];
      if (A[ix] != 0.0) {
        b_ix = c + 1;
        d = (jA - j) + 80;
        for (ijA = 41 + jA; ijA + 1 <= d; ijA++) {
          A[ijA] += A[b_ix] * -localB->smax;
          b_ix++;
        }
      }

      ix += 40;
      jA += 40;
    }
  }

  if ((*info == 0) && (!(A[1599] != 0.0))) {
    *info = 40;
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xtrsm(const real_T A[1600], real_T B[1600])
{
  int32_T jBcol;
  int32_T kAcol;
  int32_T j;
  int32_T k;
  int32_T i;
  int32_T tmp;
  for (j = 0; j < 40; j++) {
    jBcol = 40 * j;
    for (k = 0; k < 40; k++) {
      kAcol = 40 * k;
      if (B[k + jBcol] != 0.0) {
        for (i = k + 1; i + 1 < 41; i++) {
          tmp = i + jBcol;
          B[tmp] -= B[k + jBcol] * A[i + kAcol];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC__xtrsm_g(const real_T A[1600], real_T B[1600])
{
  int32_T jBcol;
  int32_T kAcol;
  int32_T j;
  int32_T k;
  int32_T i;
  int32_T tmp;
  int32_T tmp_0;
  for (j = 0; j < 40; j++) {
    jBcol = 40 * j;
    for (k = 39; k >= 0; k--) {
      kAcol = 40 * k;
      tmp = k + jBcol;
      if (B[tmp] != 0.0) {
        B[tmp] = B[k + jBcol] / A[k + kAcol];
        for (i = 0; i + 1 <= k; i++) {
          tmp_0 = i + jBcol;
          B[tmp_0] -= B[tmp] * A[i + kAcol];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_mldivide(const real_T A[1600], real_T B[1600],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T ip;
  int32_T info;
  int32_T xj;
  memcpy(&localB->b_A_m[0], &A[0], 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_c_xgetrf(localB->b_A_m, localB->ipiv, &info, localB);
  for (info = 0; info < 39; info++) {
    if (info + 1 != localB->ipiv[info]) {
      ip = localB->ipiv[info] - 1;
      for (xj = 0; xj < 40; xj++) {
        localB->temp = B[40 * xj + info];
        B[info + 40 * xj] = B[40 * xj + ip];
        B[ip + 40 * xj] = localB->temp;
      }
    }
  }

  ROPOD_4Wheel_TdistZMPC_cn_xtrsm(localB->b_A_m, B);
  ROPOD_4Wheel_TdistZMPC__xtrsm_g(localB->b_A_m, B);
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static boolean_T ROPOD_4Wheel_TdistZ_ifWhileCond(const boolean_T x[102])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k < 103)) {
    if (!x[k - 1]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_Tdis_Unconstrained(const real_T Hinv[1600], const
  real_T f[40], real_T x[40])
{
  int16_T i;
  int32_T i_0;
  real_T tmp;
  int32_T i_1;
  for (i = 0; i < 40; i++) {
    i_0 = i + 1;
    tmp = 0.0;
    for (i_1 = 0; i_1 < 40; i_1++) {
      tmp += -Hinv[(40 * i_1 + i_0) - 1] * f[i_1];
    }

    x[i] = tmp;
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC_cnt_norm(const real_T x[40])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 40; k++) {
    absxk = fabs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC_cn_xnrm2(int32_T n, const real_T x[1600],
  int32_T ix0, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      localB->scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        localB->absxk = fabs(x[k - 1]);
        if (localB->absxk > localB->scale) {
          localB->t_c = localB->scale / localB->absxk;
          y = y * localB->t_c * localB->t_c + 1.0;
          localB->scale = localB->absxk;
        } else {
          localB->t_c = localB->absxk / localB->scale;
          y += localB->t_c * localB->t_c;
        }
      }

      y = localB->scale * sqrt(y);
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T a;
  a = fabs(u0);
  y = fabs(u1);
  if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = sqrt(y * y + 1.0) * a;
  } else {
    if (!rtIsNaN(y)) {
      y = a * 1.4142135623730951;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZMPC__xzlarfg(int32_T n, real_T *alpha1, real_T
  x[1600], int32_T ix0, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  real_T tau;
  int32_T knt;
  int32_T b_k;
  int32_T c_k;
  tau = 0.0;
  if (!(n <= 0)) {
    localB->xnorm = ROPOD_4Wheel_TdistZMPC_cn_xnrm2(n - 1, x, ix0, localB);
    if (localB->xnorm != 0.0) {
      localB->xnorm = rt_hypotd_snf(*alpha1, localB->xnorm);
      if (*alpha1 >= 0.0) {
        localB->xnorm = -localB->xnorm;
      }

      if (fabs(localB->xnorm) < 1.0020841800044864E-292) {
        knt = 0;
        b_k = (ix0 + n) - 2;
        do {
          knt++;
          for (c_k = ix0; c_k <= b_k; c_k++) {
            x[c_k - 1] *= 9.9792015476736E+291;
          }

          localB->xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(localB->xnorm) >= 1.0020841800044864E-292));

        localB->xnorm = rt_hypotd_snf(*alpha1, ROPOD_4Wheel_TdistZMPC_cn_xnrm2(n
          - 1, x, ix0, localB));
        if (*alpha1 >= 0.0) {
          localB->xnorm = -localB->xnorm;
        }

        tau = (localB->xnorm - *alpha1) / localB->xnorm;
        *alpha1 = 1.0 / (*alpha1 - localB->xnorm);
        b_k = (ix0 + n) - 2;
        for (c_k = ix0; c_k <= b_k; c_k++) {
          x[c_k - 1] *= *alpha1;
        }

        for (b_k = 1; b_k <= knt; b_k++) {
          localB->xnorm *= 1.0020841800044864E-292;
        }

        *alpha1 = localB->xnorm;
      } else {
        tau = (localB->xnorm - *alpha1) / localB->xnorm;
        *alpha1 = 1.0 / (*alpha1 - localB->xnorm);
        knt = (ix0 + n) - 2;
        for (b_k = ix0; b_k <= knt; b_k++) {
          x[b_k - 1] *= *alpha1;
        }

        *alpha1 = localB->xnorm;
      }
    }
  }

  return tau;
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xgemv(int32_T m, int32_T n, const real_T
  A[1600], int32_T ia0, const real_T x[1600], int32_T ix0, real_T y[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T ix;
  int32_T iy;
  int32_T b;
  int32_T iac;
  int32_T d;
  int32_T ia;
  if (n != 0) {
    for (iy = 1; iy <= n; iy++) {
      y[iy - 1] = 0.0;
    }

    iy = 0;
    b = (n - 1) * 40 + ia0;
    for (iac = ia0; iac <= b; iac += 40) {
      ix = ix0;
      localB->c_c = 0.0;
      d = (iac + m) - 1;
      for (ia = iac; ia <= d; ia++) {
        localB->c_c += A[ia - 1] * x[ix - 1];
        ix++;
      }

      y[iy] += localB->c_c;
      iy++;
    }
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static int32_T ROPOD_4Wheel_TdistZMPC_c_ilazlc(int32_T m, int32_T n, const
  real_T A[1600], int32_T ia0)
{
  int32_T j;
  int32_T coltop;
  int32_T ia;
  int32_T exitg1;
  boolean_T exitg2;
  j = n;
  exitg2 = false;
  while ((!exitg2) && (j > 0)) {
    coltop = (j - 1) * 40 + ia0;
    ia = coltop;
    do {
      exitg1 = 0;
      if (ia <= (coltop + m) - 1) {
        if (A[ia - 1] != 0.0) {
          exitg1 = 1;
        } else {
          ia++;
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

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cnt_xger(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[40], real_T A[1600], int32_T ia0,
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T jA;
  int32_T jy;
  int32_T ix;
  int32_T j;
  int32_T b;
  int32_T ijA;
  if (!(alpha1 == 0.0)) {
    jA = ia0 - 1;
    jy = 0;
    for (j = 1; j <= n; j++) {
      if (y[jy] != 0.0) {
        localB->temp_p = y[jy] * alpha1;
        ix = ix0;
        b = m + jA;
        for (ijA = jA; ijA + 1 <= b; ijA++) {
          A[ijA] += A[ix - 1] * localB->temp_p;
          ix++;
        }
      }

      jy++;
      jA += 40;
    }
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_xzlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T lastv;
  int32_T lastc;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = ROPOD_4Wheel_TdistZMPC_c_ilazlc(lastv, n, C, ic0);
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    ROPOD_4Wheel_TdistZMPC_cn_xgemv(lastv, lastc, C, ic0, C, iv0, work, localB);
    ROPOD_4Wheel_TdistZMPC_cnt_xger(lastv, lastc, -tau, iv0, work, C, ic0,
      localB);
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_c_xgeqrf(real_T A[1600], real_T tau[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T i_i;
  int32_T i;
  memset(&localB->work_k[0], 0, 40U * sizeof(real_T));
  for (i = 0; i < 40; i++) {
    i_i = i * 40 + i;
    if (i + 1 < 40) {
      localB->b_atmp = A[i_i];
      localB->b = ROPOD_4Wheel_TdistZMPC__xzlarfg(40 - i, &localB->b_atmp, A,
        i_i + 2, localB);
      tau[i] = localB->b;
      A[i_i] = localB->b_atmp;
      localB->b_atmp = A[i_i];
      A[i_i] = 1.0;
      ROPOD_4Wheel_TdistZMPC_c_xzlarf(40 - i, 39 - i, i_i + 1, tau[i], A, (i +
        (i + 1) * 40) + 1, localB->work_k, localB);
      A[i_i] = localB->b_atmp;
    } else {
      tau[39] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_xzlarf_m(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C[1600], int32_T ic0, real_T work[40],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  int32_T lastv;
  int32_T lastc;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = ROPOD_4Wheel_TdistZMPC_c_ilazlc(lastv, n, C, ic0);
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    ROPOD_4Wheel_TdistZMPC_cn_xgemv(lastv, lastc, C, ic0, C, iv0, work, localB);
    ROPOD_4Wheel_TdistZMPC_cnt_xger(lastv, lastc, -tau, iv0, work, C, ic0,
      localB);
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_xscal(int32_T n, real_T a, real_T x[1600],
  int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = (ix0 + n) - 1;
  for (k = ix0; k <= b; k++) {
    x[k - 1] *= a;
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cntr_qr(const real_T A[1600], real_T Q[1600],
  real_T R[1600], B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  memcpy(&localB->b_A[0], &A[0], 1600U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_c_xgeqrf(localB->b_A, localB->tau, localB);
  for (localB->itau = 0; localB->itau < 40; localB->itau++) {
    localB->d_i = 0;
    while (localB->d_i + 1 <= localB->itau + 1) {
      R[localB->d_i + 40 * localB->itau] = localB->b_A[40 * localB->itau +
        localB->d_i];
      localB->d_i++;
    }

    localB->d_i = localB->itau + 1;
    while (localB->d_i + 1 < 41) {
      R[localB->d_i + 40 * localB->itau] = 0.0;
      localB->d_i++;
    }

    localB->work[localB->itau] = 0.0;
  }

  localB->itau = 39;
  for (localB->d_i = 39; localB->d_i >= 0; localB->d_i--) {
    localB->iaii = localB->d_i * 40 + localB->d_i;
    if (localB->d_i + 1 < 40) {
      localB->b_A[localB->iaii] = 1.0;
      ROPOD_4Wheel_TdistZMPC_xzlarf_m(40 - localB->d_i, 39 - localB->d_i,
        localB->iaii + 1, localB->tau[localB->itau], localB->b_A, localB->iaii +
        41, localB->work, localB);
      ROPOD_4Wheel_TdistZMPC_cn_xscal(39 - localB->d_i, -localB->tau
        [localB->itau], localB->b_A, localB->iaii + 2);
    }

    localB->b_A[localB->iaii] = 1.0 - localB->tau[localB->itau];
    localB->c_j = 1;
    while (localB->c_j <= localB->d_i) {
      localB->b_A[localB->iaii - localB->c_j] = 0.0;
      localB->c_j++;
    }

    localB->itau--;
  }

  for (localB->itau = 0; localB->itau < 40; localB->itau++) {
    memcpy(&Q[localB->itau * 40], &localB->b_A[localB->itau * 40], 40U * sizeof
           (real_T));
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static real_T ROPOD_4Wheel_TdistZM_KWIKfactor(const real_T Ac[4080], const
  int16_T iC[102], int16_T nA, const real_T Linv[1600], real_T RLinv[1600],
  real_T D[1600], real_T H[1600], B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  real_T Status;
  int16_T i;
  int16_T j;
  int16_T c_k;
  int32_T exitg1;
  Status = 1.0;
  memset(&RLinv[0], 0, 1600U * sizeof(real_T));
  for (i = 1; i <= nA; i++) {
    for (localB->i2 = 0; localB->i2 < 40; localB->i2++) {
      RLinv[localB->i2 + 40 * (i - 1)] = 0.0;
    }

    localB->i_g = i - 1;
    for (localB->i2 = 0; localB->i2 < 40; localB->i2++) {
      localB->j_g = localB->i2 + 40 * localB->i_g;
      RLinv[localB->j_g] = 0.0;
      for (localB->i3 = 0; localB->i3 < 40; localB->i3++) {
        RLinv[localB->j_g] = Ac[(iC[i - 1] + 102 * localB->i3) - 1] * Linv[40 *
          localB->i3 + localB->i2] + RLinv[40 * localB->i_g + localB->i2];
      }
    }
  }

  ROPOD_4Wheel_TdistZMPC_cntr_qr(RLinv, localB->QQ, localB->RR, localB);
  i = 1;
  do {
    exitg1 = 0;
    if (i <= nA) {
      if (fabs(localB->RR[((i - 1) * 40 + i) - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (i = 0; i < 40; i++) {
        localB->i_g = i + 1;
        for (j = 0; j < 40; j++) {
          localB->j_g = j + 1;
          localB->d0 = 0.0;
          for (localB->i2 = 0; localB->i2 < 40; localB->i2++) {
            localB->d0 += Linv[(localB->i_g - 1) * 40 + localB->i2] * localB->
              QQ[(localB->j_g - 1) * 40 + localB->i2];
          }

          localB->TL[i + 40 * j] = localB->d0;
        }
      }

      memset(&RLinv[0], 0, 1600U * sizeof(real_T));
      i = nA;
      while (i > 0) {
        localB->i2 = i - 1;
        RLinv[(i + 40 * localB->i2) - 1] = 1.0;
        for (j = i; j <= nA; j++) {
          localB->j_g = j - 1;
          RLinv[(i + 40 * localB->j_g) - 1] /= localB->RR[((i - 1) * 40 + i) - 1];
        }

        if (i > 1) {
          for (j = 1; j <= localB->i2; j++) {
            for (c_k = i; c_k <= nA; c_k++) {
              localB->j_g = c_k - 1;
              localB->i3 = localB->j_g * 40;
              RLinv[(j + 40 * localB->j_g) - 1] = RLinv[(localB->i3 + j) - 1] -
                localB->RR[(localB->i2 * 40 + j) - 1] * RLinv[(localB->i3 + i) -
                1];
            }
          }
        }

        i = (int16_T)localB->i2;
      }

      for (i = 0; i < 40; i++) {
        for (j = (int16_T)(i + 1); j < 41; j++) {
          localB->i2 = j - 1;
          localB->j_g = i + 40 * localB->i2;
          H[localB->j_g] = 0.0;
          for (c_k = (int16_T)(nA + 1); c_k < 41; c_k++) {
            localB->i3 = (c_k - 1) * 40;
            H[localB->j_g] = H[(j - 1) * 40 + i] - localB->TL[(localB->i3 + j) -
              1] * localB->TL[localB->i3 + i];
          }

          H[(j + 40 * i) - 1] = H[localB->i2 * 40 + i];
        }
      }

      for (i = 1; i <= nA; i++) {
        for (j = 0; j < 40; j++) {
          localB->i2 = i - 1;
          localB->j_g = j + 40 * localB->i2;
          D[localB->j_g] = 0.0;
          for (c_k = i; c_k <= nA; c_k++) {
            localB->i3 = (c_k - 1) * 40;
            D[localB->j_g] = RLinv[(localB->i3 + i) - 1] * localB->TL[localB->i3
              + j] + D[localB->i2 * 40 + j];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cntr_abs(const real_T x[40], real_T y[40])
{
  int32_T k;
  for (k = 0; k < 40; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_abs_o(const real_T x[102], real_T y[102])
{
  int32_T k;
  for (k = 0; k < 102; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_Tdi_DropConstraint(int16_T kDrop, int16_T iA[102],
  int16_T *nA, int16_T iC[102])
{
  int16_T i;
  int32_T tmp;
  iA[iC[kDrop - 1] - 1] = 0;
  if (kDrop < *nA) {
    tmp = *nA - 1;
    if (tmp < -32768) {
      tmp = -32768;
    }

    for (i = kDrop; i <= (int16_T)tmp; i++) {
      iC[i - 1] = iC[i];
    }
  }

  iC[*nA - 1] = 0;
  tmp = *nA - 1;
  if (tmp < -32768) {
    tmp = -32768;
  }

  *nA = (int16_T)tmp;
}

// Function for MATLAB Function: '<S46>/Zone MPC'
static void ROPOD_4Wheel_TdistZ_mpcqpsolver(const real_T Linv[1600], const
  real_T f[40], const real_T A[4080], const real_T b[102], const boolean_T iA0
  [102], real_T x[40], real_T *status, boolean_T iA[102],
  B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
  boolean_T cTolComputed;
  int16_T nA;
  boolean_T DualFeasible;
  boolean_T ColdReset;
  int16_T kDrop;
  int16_T kNext;
  int16_T iSave;
  uint16_T q;
  uint16_T b_x;
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  boolean_T exitg4;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  for (localB->i = 0; localB->i < 40; localB->i++) {
    for (localB->kDrop_tmp = 0; localB->kDrop_tmp < 40; localB->kDrop_tmp++) {
      localB->Hinv_tmp = localB->i + 40 * localB->kDrop_tmp;
      localB->Hinv[localB->Hinv_tmp] = 0.0;
      for (localB->U_tmp = 0; localB->U_tmp < 40; localB->U_tmp++) {
        localB->Hinv[localB->Hinv_tmp] = Linv[40 * localB->i + localB->U_tmp] *
          Linv[40 * localB->kDrop_tmp + localB->U_tmp] + localB->Hinv[40 *
          localB->kDrop_tmp + localB->i];
      }
    }
  }

  localB->Hinv_tmp = 1;
  for (localB->i = 0; localB->i < 102; localB->i++) {
    localB->b_iA[localB->i] = iA0[localB->i];
    localB->lam[localB->i] = 0.0;
  }

  memset(&x[0], 0, 40U * sizeof(real_T));
  memset(&localB->r[0], 0, 40U * sizeof(real_T));
  localB->rMin = 0.0;
  cTolComputed = false;
  for (localB->i = 0; localB->i < 102; localB->i++) {
    localB->cTol[localB->i] = 1.0;
    localB->iC[localB->i] = 0;
  }

  nA = 0;
  for (kNext = 0; kNext < 102; kNext++) {
    if (localB->b_iA[kNext] == 1) {
      localB->i = nA + 1;
      if (localB->i > 32767) {
        localB->i = 32767;
      }

      nA = (int16_T)localB->i;
      localB->iC[(int16_T)localB->i - 1] = (int16_T)(kNext + 1);
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&localB->Opt[0], 0, 80U * sizeof(real_T));
    for (localB->i = 0; localB->i < 40; localB->i++) {
      localB->Rhs[localB->i] = f[localB->i];
      localB->Rhs[localB->i + 40] = 0.0;
    }

    DualFeasible = false;
    localB->i = 3 * nA;
    if (localB->i > 32767) {
      localB->i = 32767;
    }

    if ((int16_T)localB->i > 50) {
      kNext = (int16_T)localB->i;
    } else {
      kNext = 50;
    }

    q = (uint16_T)(kNext / 10U);
    b_x = (uint16_T)((uint32_T)kNext - q * 10);
    if ((b_x > 0) && (b_x >= 5)) {
      q++;
    }

    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!DualFeasible) && (nA > 0) && (localB->Hinv_tmp <= 200)) {
        localB->Xnorm0 = ROPOD_4Wheel_TdistZM_KWIKfactor(A, localB->iC, nA, Linv,
          localB->RLinv, localB->D, localB->H, localB);
        if (localB->Xnorm0 < 0.0) {
          if (ColdReset) {
            localB->Hinv_tmp = -2;
            exitg3 = 2;
          } else {
            nA = 0;
            memset(&localB->b_iA[0], 0, 102U * sizeof(int16_T));
            memset(&localB->iC[0], 0, 102U * sizeof(int16_T));
            ColdReset = true;
          }
        } else {
          for (kNext = 1; kNext <= nA; kNext++) {
            localB->i = 40 + kNext;
            if (localB->i > 32767) {
              localB->i = 32767;
            }

            localB->kDrop_tmp = kNext - 1;
            localB->Rhs[localB->i - 1] = b[localB->iC[localB->kDrop_tmp] - 1];
            for (kDrop = kNext; kDrop <= nA; kDrop++) {
              localB->i = (kDrop + 40 * localB->kDrop_tmp) - 1;
              localB->U[localB->i] = 0.0;
              for (iSave = 1; iSave <= nA; iSave++) {
                localB->U_tmp = (iSave - 1) * 40;
                localB->U[localB->i] = localB->RLinv[(localB->U_tmp + kDrop) - 1]
                  * localB->RLinv[(localB->U_tmp + kNext) - 1] + localB->U
                  [((kNext - 1) * 40 + kDrop) - 1];
              }

              localB->U[(kNext + 40 * (kDrop - 1)) - 1] = localB->U
                [(localB->kDrop_tmp * 40 + kDrop) - 1];
            }
          }

          for (kNext = 0; kNext < 40; kNext++) {
            localB->kDrop_tmp = kNext + 1;
            localB->cVal = 0.0;
            for (localB->i = 0; localB->i < 40; localB->i++) {
              localB->cVal += localB->H[(40 * localB->i + localB->kDrop_tmp) - 1]
                * localB->Rhs[localB->i];
            }

            localB->Opt[kNext] = localB->cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              localB->i = 40 + kDrop;
              if (localB->i > 32767) {
                localB->i = 32767;
              }

              localB->Opt[kNext] += localB->D[(kDrop - 1) * 40 + kNext] *
                localB->Rhs[localB->i - 1];
            }
          }

          for (kNext = 1; kNext <= nA; kNext++) {
            localB->cVal = 0.0;
            for (localB->i = 0; localB->i < 40; localB->i++) {
              localB->cVal += localB->D[(kNext - 1) * 40 + localB->i] *
                localB->Rhs[localB->i];
            }

            localB->i = 40 + kNext;
            localB->kDrop_tmp = localB->i;
            if (localB->i > 32767) {
              localB->kDrop_tmp = 32767;
            }

            localB->Opt[localB->kDrop_tmp - 1] = localB->cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              localB->kDrop_tmp = localB->i;
              if (localB->i > 32767) {
                localB->kDrop_tmp = 32767;
              }

              localB->U_tmp = localB->i;
              if (localB->i > 32767) {
                localB->U_tmp = 32767;
              }

              localB->i1 = 40 + kDrop;
              if (localB->i1 > 32767) {
                localB->i1 = 32767;
              }

              localB->Opt[localB->kDrop_tmp - 1] = localB->U[((kDrop - 1) * 40 +
                kNext) - 1] * localB->Rhs[localB->i1 - 1] + localB->Opt
                [localB->U_tmp - 1];
            }
          }

          localB->Xnorm0 = -1.0E-12;
          kDrop = 0;
          for (kNext = 1; kNext <= nA; kNext++) {
            localB->i = 40 + kNext;
            localB->kDrop_tmp = localB->i;
            if (localB->i > 32767) {
              localB->kDrop_tmp = 32767;
            }

            localB->lam[localB->iC[kNext - 1] - 1] = localB->Opt
              [localB->kDrop_tmp - 1];
            localB->kDrop_tmp = localB->i;
            if (localB->i > 32767) {
              localB->kDrop_tmp = 32767;
            }

            if ((localB->Opt[localB->kDrop_tmp - 1] < localB->Xnorm0) && (kNext <=
                 nA)) {
              kDrop = kNext;
              if (localB->i > 32767) {
                localB->i = 32767;
              }

              localB->Xnorm0 = localB->Opt[localB->i - 1];
            }
          }

          if (kDrop <= 0) {
            DualFeasible = true;
            memcpy(&x[0], &localB->Opt[0], 40U * sizeof(real_T));
          } else {
            localB->Hinv_tmp++;
            if (localB->Hinv_tmp > q) {
              nA = 0;
              memset(&localB->b_iA[0], 0, 102U * sizeof(int16_T));
              memset(&localB->iC[0], 0, 102U * sizeof(int16_T));
              ColdReset = true;
            } else {
              localB->lam[localB->iC[kDrop - 1] - 1] = 0.0;
              ROPOD_4Wheel_Tdi_DropConstraint(kDrop, localB->b_iA, &nA,
                localB->iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&localB->lam[0], 0, 102U * sizeof(real_T));
          ROPOD_4Wheel_Tdis_Unconstrained(localB->Hinv, f, x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Tdis_Unconstrained(localB->Hinv, f, x);
    guard1 = true;
  }

  if (guard1) {
    localB->Xnorm0 = ROPOD_4Wheel_TdistZMPC_cnt_norm(x);
    do {
      exitg2 = 0;
      if (localB->Hinv_tmp <= 200) {
        localB->cMin = -1.0E-6;
        kNext = 0;
        for (kDrop = 0; kDrop < 102; kDrop++) {
          if (!cTolComputed) {
            localB->kDrop_tmp = kDrop + 1;
            for (localB->i = 0; localB->i < 40; localB->i++) {
              localB->A_c[localB->i] = A[(102 * localB->i + localB->kDrop_tmp) -
                1] * x[localB->i];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_abs(localB->A_c, localB->AcRow);
            localB->i = 1;
            localB->cVal = localB->AcRow[0];
            if (rtIsNaN(localB->AcRow[0])) {
              localB->kDrop_tmp = 2;
              exitg4 = false;
              while ((!exitg4) && (localB->kDrop_tmp < 41)) {
                localB->i = localB->kDrop_tmp;
                if (!rtIsNaN(localB->AcRow[localB->kDrop_tmp - 1])) {
                  localB->cVal = localB->AcRow[localB->kDrop_tmp - 1];
                  exitg4 = true;
                } else {
                  localB->kDrop_tmp++;
                }
              }
            }

            if (localB->i < 40) {
              while (localB->i + 1 < 41) {
                if (localB->AcRow[localB->i] > localB->cVal) {
                  localB->cVal = localB->AcRow[localB->i];
                }

                localB->i++;
              }
            }

            if (!((localB->cTol[kDrop] > localB->cVal) || rtIsNaN(localB->cVal)))
            {
              localB->cTol[kDrop] = localB->cVal;
            }
          }

          if (localB->b_iA[kDrop] == 0) {
            localB->kDrop_tmp = kDrop + 1;
            localB->cVal = 0.0;
            for (localB->i = 0; localB->i < 40; localB->i++) {
              localB->cVal += A[(102 * localB->i + localB->kDrop_tmp) - 1] *
                x[localB->i];
            }

            localB->cVal = (localB->cVal - b[kDrop]) / localB->cTol[kDrop];
            if (localB->cVal < localB->cMin) {
              localB->cMin = localB->cVal;
              kNext = (int16_T)(kDrop + 1);
            }
          }
        }

        cTolComputed = true;
        if (kNext <= 0) {
          exitg2 = 1;
        } else {
          do {
            exitg1 = 0;
            if ((kNext > 0) && (localB->Hinv_tmp <= 200)) {
              guard2 = false;
              if (nA == 0) {
                for (localB->i = 0; localB->i < 40; localB->i++) {
                  localB->AcRow[localB->i] = 0.0;
                  for (localB->kDrop_tmp = 0; localB->kDrop_tmp < 40;
                       localB->kDrop_tmp++) {
                    localB->AcRow[localB->i] += A[(102 * localB->kDrop_tmp +
                      kNext) - 1] * localB->Hinv[40 * localB->kDrop_tmp +
                      localB->i];
                  }
                }

                guard2 = true;
              } else {
                localB->cMin = ROPOD_4Wheel_TdistZM_KWIKfactor(A, localB->iC, nA,
                  Linv, localB->RLinv, localB->D, localB->H, localB);
                if (localB->cMin <= 0.0) {
                  localB->Hinv_tmp = -2;
                  exitg1 = 1;
                } else {
                  for (localB->i = 0; localB->i < 40; localB->i++) {
                    for (localB->kDrop_tmp = 0; localB->kDrop_tmp < 40;
                         localB->kDrop_tmp++) {
                      localB->U[localB->kDrop_tmp + 40 * localB->i] = -localB->
                        H[40 * localB->i + localB->kDrop_tmp];
                    }
                  }

                  for (localB->i = 0; localB->i < 40; localB->i++) {
                    localB->AcRow[localB->i] = 0.0;
                    for (localB->kDrop_tmp = 0; localB->kDrop_tmp < 40;
                         localB->kDrop_tmp++) {
                      localB->AcRow[localB->i] += A[(102 * localB->kDrop_tmp +
                        kNext) - 1] * localB->U[40 * localB->kDrop_tmp +
                        localB->i];
                    }
                  }

                  for (kDrop = 1; kDrop <= nA; kDrop++) {
                    localB->cVal = 0.0;
                    for (localB->i = 0; localB->i < 40; localB->i++) {
                      localB->cVal += A[(102 * localB->i + kNext) - 1] *
                        localB->D[(kDrop - 1) * 40 + localB->i];
                    }

                    localB->r[kDrop - 1] = localB->cVal;
                  }

                  guard2 = true;
                }
              }

              if (guard2) {
                kDrop = 0;
                localB->cMin = 0.0;
                DualFeasible = true;
                ColdReset = true;
                if (nA > 0) {
                  iSave = 1;
                  exitg4 = false;
                  while ((!exitg4) && (iSave <= nA)) {
                    if (localB->r[iSave - 1] >= 1.0E-12) {
                      ColdReset = false;
                      exitg4 = true;
                    } else {
                      iSave++;
                    }
                  }
                }

                if (!((nA == 0) || ColdReset)) {
                  for (iSave = 1; iSave <= nA; iSave++) {
                    localB->i = iSave - 1;
                    if (localB->r[localB->i] > 1.0E-12) {
                      localB->cVal = localB->lam[localB->iC[localB->i] - 1] /
                        localB->r[iSave - 1];
                      if ((kDrop == 0) || (localB->cVal < localB->rMin)) {
                        localB->rMin = localB->cVal;
                        kDrop = iSave;
                      }
                    }
                  }

                  if (kDrop > 0) {
                    localB->cMin = localB->rMin;
                    DualFeasible = false;
                  }
                }

                localB->cVal = 0.0;
                for (localB->i = 0; localB->i < 40; localB->i++) {
                  localB->cVal += A[(102 * localB->i + kNext) - 1] *
                    localB->AcRow[localB->i];
                }

                if (localB->cVal <= 0.0) {
                  localB->cVal = 0.0;
                  ColdReset = true;
                } else {
                  localB->t = 0.0;
                  for (localB->i = 0; localB->i < 40; localB->i++) {
                    localB->t += A[(102 * localB->i + kNext) - 1] * x[localB->i];
                  }

                  localB->cVal = (b[kNext - 1] - localB->t) / localB->cVal;
                  ColdReset = false;
                }

                if (DualFeasible && ColdReset) {
                  localB->Hinv_tmp = -1;
                  exitg1 = 1;
                } else {
                  if (ColdReset) {
                    localB->t = localB->cMin;
                  } else if (DualFeasible) {
                    localB->t = localB->cVal;
                  } else if ((localB->cMin < localB->cVal) || rtIsNaN
                             (localB->cVal)) {
                    localB->t = localB->cMin;
                  } else {
                    localB->t = localB->cVal;
                  }

                  for (iSave = 1; iSave <= nA; iSave++) {
                    localB->i = iSave - 1;
                    localB->kDrop_tmp = localB->iC[localB->i] - 1;
                    localB->lam[localB->kDrop_tmp] -= localB->r[localB->i] *
                      localB->t;
                    if (localB->lam[localB->iC[iSave - 1] - 1] < 0.0) {
                      localB->lam[localB->kDrop_tmp] = 0.0;
                    }
                  }

                  localB->lam[kNext - 1] += localB->t;
                  if (localB->t == localB->cMin) {
                    ROPOD_4Wheel_Tdi_DropConstraint(kDrop, localB->b_iA, &nA,
                      localB->iC);
                  }

                  if (!ColdReset) {
                    for (localB->i = 0; localB->i < 40; localB->i++) {
                      x[localB->i] += localB->t * localB->AcRow[localB->i];
                    }

                    if (localB->t == localB->cVal) {
                      if (nA == 40) {
                        localB->Hinv_tmp = -1;
                        exitg1 = 1;
                      } else {
                        localB->i = nA + 1;
                        if (localB->i > 32767) {
                          localB->i = 32767;
                        }

                        nA = (int16_T)localB->i;
                        localB->iC[(int16_T)localB->i - 1] = kNext;
                        kDrop = (int16_T)localB->i;
                        exitg4 = false;
                        while ((!exitg4) && (kDrop > 1)) {
                          localB->i = kDrop - 1;
                          localB->kDrop_tmp = kDrop - 2;
                          if (localB->iC[localB->i] > localB->iC
                              [localB->kDrop_tmp]) {
                            exitg4 = true;
                          } else {
                            iSave = localB->iC[kDrop - 1];
                            localB->iC[localB->i] = localB->iC[kDrop - 2];
                            localB->iC[localB->kDrop_tmp] = iSave;
                            kDrop = (int16_T)localB->i;
                          }
                        }

                        localB->b_iA[kNext - 1] = 1;
                        kNext = 0;
                        localB->Hinv_tmp++;
                      }
                    } else {
                      localB->Hinv_tmp++;
                    }
                  } else {
                    localB->Hinv_tmp++;
                  }
                }
              }
            } else {
              localB->cMin = ROPOD_4Wheel_TdistZMPC_cnt_norm(x);
              if (fabs(localB->cMin - localB->Xnorm0) > 0.001) {
                localB->Xnorm0 = localB->cMin;
                ROPOD_4Wheel_TdistZMPC_cn_abs_o(b, localB->varargin_1);
                for (localB->i = 0; localB->i < 102; localB->i++) {
                  if (localB->varargin_1[localB->i] > 1.0) {
                    localB->cTol[localB->i] = localB->varargin_1[localB->i];
                  } else {
                    localB->cTol[localB->i] = 1.0;
                  }
                }

                cTolComputed = false;
              }

              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = 1;
          }
        }
      } else {
        localB->Hinv_tmp = 0;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }

  *status = localB->Hinv_tmp;
  for (localB->i = 0; localB->i < 102; localB->i++) {
    iA[localB->i] = (localB->b_iA[localB->i] != 0);
  }
}

//
// Output and update for atomic system:
//    '<S46>/Zone MPC'
//    '<S47>/Zone MPC'
//
void ROPOD_4Wheel_TdistZMPC__ZoneMPC(real_T rtu_mo, real_T rtu_mo_m, real_T
  rtu_mo_f, real_T rtu_mo_k, real_T rtu_Fd_max, real_T rtu_Fd_min, real_T
  rtu_Fr_max, real_T rtu_Fr_min, const real_T rtu_H[1600], const real_T rtu_F[80],
  const real_T rtu_A[4080], const real_T rtu_W[328], real_T rtu_rho, real_T
  rtu_epsilon_old, real_T rtu_uf_old, real_T rtu_mv_old, real_T rtu_exitflag_old,
  const real_T rtu_iA0[102], real_T rtu_s_old, real_T *rty_epsilon, real_T
  *rty_u_f, real_T *rty_mv, real_T *rty_exitflag, real_T rty_iA[102], real_T
  *rty_s, B_ZoneMPC_ROPOD_4Wheel_TdistZ_T *localB)
{
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

  boolean_T tmp;
  if (rtu_s_old == 10.0) {
    localB->bi[0] = rtu_Fr_max;
    localB->bi[1] = -rtu_Fr_min;
    localB->bi[2] = rtu_Fd_max;
    localB->bi[3] = -rtu_Fd_min;
    memset(&localB->c[0], 0, 82U * sizeof(real_T));
    for (localB->jmax = 0; localB->jmax < 20; localB->jmax++) {
      localB->b_f = (localB->jmax << 2) + 1;
      localB->d = (1 + localB->jmax) << 2;
      if (localB->b_f > localB->d) {
        localB->b_f = 1;
        localB->d = 0;
      }

      localB->d -= localB->b_f;
      localB->h_size = localB->d + 1;
      for (localB->i0 = 0; localB->i0 <= localB->d; localB->i0++) {
        localB->h_data[localB->i0] = (int8_T)((int8_T)(localB->b_f + localB->i0)
          - 1);
      }

      for (localB->i0 = 0; localB->i0 < localB->h_size; localB->i0++) {
        localB->c[localB->h_data[localB->i0]] = localB->bi[localB->i0];
      }
    }

    localB->c[80] = rtu_Fd_max;
    localB->c[81] = -rtu_Fd_min;
    memcpy(&localB->A[0], &rtu_H[0], 1600U * sizeof(real_T));
    localB->jmax = ROPOD_4Wheel_TdistZMPC_c_xpotrf(localB->A);
    if (localB->jmax == 0) {
      localB->jmax = 41;
    }

    localB->jmax--;
    localB->b_f = 1;
    while (localB->b_f + 1 <= localB->jmax) {
      localB->d = 1;
      while (localB->d <= localB->b_f) {
        localB->A[(localB->d + 40 * localB->b_f) - 1] = 0.0;
        localB->d++;
      }

      localB->b_f++;
    }

    for (localB->i0 = 0; localB->i0 < 1600; localB->i0++) {
      localB->Linv[localB->i0] = l[localB->i0];
    }

    ROPOD_4Wheel_TdistZMPC_mldivide(localB->A, localB->Linv, localB);
    for (localB->i0 = 0; localB->i0 < 20; localB->i0++) {
      // SignalConversion: '<S233>/TmpSignal ConversionAt SFunction Inport1'
      localB->j = rtu_F[localB->i0 + 60] * rtu_mo_k + (rtu_F[localB->i0 + 40] *
        rtu_mo_f + (rtu_F[localB->i0 + 20] * rtu_mo_m + rtu_F[localB->i0] *
                    rtu_mo));
      localB->Fxk[localB->i0] = localB->j;
    }

    memset(&localB->f[0], 0, 40U * sizeof(real_T));
    localB->j = 1.0;
    localB->k = 2.0;
    for (localB->jmax = 0; localB->jmax < 20; localB->jmax++) {
      localB->f[(int32_T)localB->j - 1] = localB->Fxk[localB->jmax];
      localB->f[(int32_T)localB->k - 1] = rtu_rho;
      localB->j += 2.0;
      localB->k += 2.0;
    }

    for (localB->i0 = 0; localB->i0 < 102; localB->i0++) {
      localB->rtu_iA0[localB->i0] = (rtu_iA0[localB->i0] == 0.0);
    }

    for (localB->i0 = 0; localB->i0 < 4080; localB->i0++) {
      localB->rtu_A[localB->i0] = -rtu_A[localB->i0];
    }

    for (localB->i0 = 0; localB->i0 < 82; localB->i0++) {
      // SignalConversion: '<S233>/TmpSignal ConversionAt SFunction Inport1'
      localB->rtu_W[localB->i0] = -((((rtu_W[localB->i0 + 82] * rtu_mo_m +
        rtu_W[localB->i0] * rtu_mo) + rtu_W[localB->i0 + 164] * rtu_mo_f) +
        rtu_W[localB->i0 + 246] * rtu_mo_k) + localB->c[localB->i0]);
    }

    memset(&localB->rtu_W[82], 0, 20U * sizeof(real_T));
    tmp = ROPOD_4Wheel_TdistZ_ifWhileCond(localB->rtu_iA0);
    for (localB->i0 = 0; localB->i0 < 102; localB->i0++) {
      localB->rtu_iA0[localB->i0] = ((!tmp) && (rtu_iA0[localB->i0] != 0.0));
    }

    ROPOD_4Wheel_TdistZ_mpcqpsolver(localB->Linv, localB->f, localB->rtu_A,
      localB->rtu_W, localB->rtu_iA0, localB->u_qp, &localB->k, localB->iAi,
      localB);
    localB->epsilon = localB->u_qp[1];
    localB->u_f = 0.0;
    localB->mv = localB->u_qp[0];
    for (localB->jmax = 0; localB->jmax < 102; localB->jmax++) {
      rty_iA[localB->jmax] = localB->iAi[localB->jmax];
    }

    localB->j = 1.0;
  } else {
    localB->epsilon = rtu_epsilon_old;
    localB->u_f = rtu_uf_old;
    localB->mv = rtu_mv_old;
    localB->k = rtu_exitflag_old;
    memcpy(&rty_iA[0], &rtu_iA0[0], 102U * sizeof(real_T));
    localB->j = rtu_s_old + 1.0;
  }

  *rty_epsilon = localB->epsilon;
  *rty_u_f = localB->u_f;
  *rty_mv = localB->mv;
  *rty_exitflag = localB->k;
  *rty_s = localB->j;
}

//
// Output and update for atomic system:
//    '<S243>/MATLAB Function'
//    '<S252>/MATLAB Function'
//    '<S261>/MATLAB Function'
//    '<S309>/MATLAB Function'
//    '<S318>/MATLAB Function'
//    '<S327>/MATLAB Function'
//    '<S336>/MATLAB Function'
//    '<S345>/MATLAB Function'
//    '<S354>/MATLAB Function'
//    '<S363>/MATLAB Function'
//    '<S372>/MATLAB Function'
//
void ROPOD_4Wheel_T_MATLABFunction_d(real_T rtu_w, real_T rtu_tau, real_T *rty_g,
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
//    '<S285>/MATLAB Function'
//    '<S287>/MATLAB Function'
//    '<S289>/MATLAB Function'
//    '<S291>/MATLAB Function'
//
void ROPOD_4Wheel_T_MATLABFunction_m(real_T rtu_w, real_T rtu_tau, real_T *rty_g,
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
//    '<S19>/MATLAB Function1'
//    '<S19>/MATLAB Function2'
//    '<S19>/MATLAB Function3'
//
void ROPOD_4Wheel_Td_MATLABFunction1(real_T rtu_tl, real_T rtu_tr, real_T
  rtu_ropod_kinmodel_param_vec, real_T rtu_ropod_kinmodel_param_vec_l, real_T
  rtu_ropod_kinmodel_param_vec_gn, real_T rtu_ropod_kinmodel_param_vec_e, real_T
  rtu_kmax, real_T *rty_tl_out, real_T *rty_tr_out)
{
  real_T Fxi;
  real_T Fyi;
  real_T Fxi_tmp;

  // SignalConversion: '<S294>/TmpSignal ConversionAt SFunction Inport3'
  Fyi = rtu_tr / rtu_ropod_kinmodel_param_vec_l;
  Fxi_tmp = rtu_tl / rtu_ropod_kinmodel_param_vec;
  Fxi = Fxi_tmp + Fyi;

  // SignalConversion: '<S294>/TmpSignal ConversionAt SFunction Inport3'
  Fyi = (Fyi - Fxi_tmp) * (rtu_ropod_kinmodel_param_vec_e / (2.0 *
    rtu_ropod_kinmodel_param_vec_gn));
  if (sqrt(Fxi * Fxi + Fyi * Fyi) > 30.0) {
    Fxi = (rtu_kmax - 1.0) * fabs(sin(rt_atan2d_snf(Fyi, Fxi))) + 1.0;
  } else {
    Fxi = 1.0;
  }

  *rty_tl_out = rtu_tl * Fxi;
  *rty_tr_out = rtu_tr * Fxi;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC__xnrm2_o(int32_T n, const real_T x[27],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (n == 1) {
    y = fabs(x[ix0 - 1]);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.scale_n = 3.3121686421112381E-170;
    ROPOD_4Wheel_TdistZMPC_cntr_B.kend_c = (ix0 + n) - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_md = ix0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_md <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.kend_c) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b = fabs
        (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_md - 1]);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b >
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_n) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_l =
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_n /
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b;
        y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_l *
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_l + 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_n =
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_l =
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b /
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_n;
        y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_l *
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_l;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.k_md++;
    }

    y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_n * sqrt(y);
  }

  return y;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_xnrm2_ow(int32_T n, const real_T x[9],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l = 3.3121686421112381E-170;
  ROPOD_4Wheel_TdistZMPC_cntr_B.kend = (ix0 + n) - 1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_m = ix0;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_m <= ROPOD_4Wheel_TdistZMPC_cntr_B.kend)
  {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_m - 1]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_b = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l /
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_b *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_b + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_b = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_o /
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_b * ROPOD_4Wheel_TdistZMPC_cntr_B.t_b;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.k_m++;
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l * sqrt(y);
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_xaxpy_oq(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[27], int32_T iy0)
{
  if (!((n < 1) || (a == 0.0))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_f = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_iz = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_f = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_f <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_iz] += a *
        x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_f];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_f++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_iz++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_f++;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC__xaxpy_o(int32_T n, real_T a, const real_T x
  [27], int32_T ix0, real_T y[3], int32_T iy0)
{
  if (!((n < 1) || (a == 0.0))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_o = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_o = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_i = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_i <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_o] += a *
        x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_o];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_o++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_o++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_i++;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  ROPOD_4Wheel_TdistZMPC_cntr_B.roe = *b;
  ROPOD_4Wheel_TdistZMPC_cntr_B.absa = fabs(*a);
  ROPOD_4Wheel_TdistZMPC_cntr_B.absb = fabs(*b);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.absa > ROPOD_4Wheel_TdistZMPC_cntr_B.absb) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.roe = *a;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.scale = ROPOD_4Wheel_TdistZMPC_cntr_B.absa +
    ROPOD_4Wheel_TdistZMPC_cntr_B.absb;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.absa = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ads = ROPOD_4Wheel_TdistZMPC_cntr_B.absa /
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale;
    ROPOD_4Wheel_TdistZMPC_cntr_B.bds = ROPOD_4Wheel_TdistZMPC_cntr_B.absb /
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale;
    ROPOD_4Wheel_TdistZMPC_cntr_B.scale *= sqrt
      (ROPOD_4Wheel_TdistZMPC_cntr_B.ads * ROPOD_4Wheel_TdistZMPC_cntr_B.ads +
       ROPOD_4Wheel_TdistZMPC_cntr_B.bds * ROPOD_4Wheel_TdistZMPC_cntr_B.bds);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.roe < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale = -ROPOD_4Wheel_TdistZMPC_cntr_B.scale;
    }

    *c = *a / ROPOD_4Wheel_TdistZMPC_cntr_B.scale;
    *s = *b / ROPOD_4Wheel_TdistZMPC_cntr_B.scale;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absa > ROPOD_4Wheel_TdistZMPC_cntr_B.absb)
    {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absa = *s;
    } else if (*c != 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absa = 1.0 / *c;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absa = 1.0;
    }
  }

  *a = ROPOD_4Wheel_TdistZMPC_cntr_B.scale;
  *b = ROPOD_4Wheel_TdistZMPC_cntr_B.absa;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_cn_xdotc(int32_T n, const real_T x[27],
  int32_T ix0, const real_T y[27], int32_T iy0)
{
  real_T d;
  d = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.ix_as = ix0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.iy_i = iy0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_l = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_l <= n) {
    d += x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_as - 1] *
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_i - 1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_as++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_i++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_l++;
  }

  return d;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[27], int32_T iy0)
{
  if (!(a == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_a = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_e = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_a = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_a <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_e] += a *
        y[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_a];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_a++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_e++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_a++;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cntr_svd(const real_T A[27], real_T U[3])
{
  boolean_T apply_transform;
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[0], &A[0], 27U * sizeof(real_T));
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.e[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.work_f[0] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.work_f[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.work_f[2] = 0.0;
  apply_transform = false;
  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC__xnrm2_o(3,
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 1);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[0] < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = -ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.s[0]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.s
        [0];
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 3) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 3) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] /=
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[0];
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[0]++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = -ROPOD_4Wheel_TdistZMPC_cntr_B.s[0];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[0] = 0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.q = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 < 10) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.q;
    if (apply_transform) {
      ROPOD_4Wheel_TdistZMPC_cn_xaxpy(3, -(ROPOD_4Wheel_TdistZMPC_cn_xdotc(3,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1) / ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[0]), 1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1);
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
    ROPOD_4Wheel_TdistZMPC_cntr_B.q++;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_xnrm2_ow(8,
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.work_f[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] =
        0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC__xaxpy_o(2,
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 2,
        ROPOD_4Wheel_TdistZMPC_cntr_B.work_f, 2);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC_xaxpy_oq(2,
        -ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[1], ROPOD_4Wheel_TdistZMPC_cntr_B.work_f,
        2, ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 2);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }
  }

  apply_transform = false;
  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC__xnrm2_o(2,
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 5);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[4] < 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = -ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.s[1]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.s
        [1];
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 4;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 6) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] *=
          ROPOD_4Wheel_TdistZMPC_cntr_B.nrm;
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 4;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 <= 6) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj] /=
          ROPOD_4Wheel_TdistZMPC_cntr_B.s[1];
        ROPOD_4Wheel_TdistZMPC_cntr_B.qjj++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[4]++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = -ROPOD_4Wheel_TdistZMPC_cntr_B.s[1];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.s[1] = 0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.q = 2;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 < 10) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1;
    if (apply_transform) {
      ROPOD_4Wheel_TdistZMPC_cn_xaxpy(2, -(ROPOD_4Wheel_TdistZMPC_cn_xdotc(2,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 5,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1) / ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[4]), 5,
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, ROPOD_4Wheel_TdistZMPC_cntr_B.qjj +
        1);
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
    ROPOD_4Wheel_TdistZMPC_cntr_B.q++;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_xnrm2_ow(7,
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.work_f[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] =
        0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 2;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC__xaxpy_o(1,
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq],
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 3,
        ROPOD_4Wheel_TdistZMPC_cntr_B.work_f, 3);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.qq = 2;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_TdistZMPC_xaxpy_oq(1,
        -ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.qq] /
        ROPOD_4Wheel_TdistZMPC_cntr_B.e[2], ROPOD_4Wheel_TdistZMPC_cntr_B.work_f,
        3, ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.qq + 3);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qq++;
    }
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.q = 3;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.q + 1 < 10) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[3 * ROPOD_4Wheel_TdistZMPC_cntr_B.q +
      2];
    ROPOD_4Wheel_TdistZMPC_cntr_B.q++;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.nrm = ROPOD_4Wheel_TdistZMPC_xnrm2_ow(6,
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
  ROPOD_4Wheel_TdistZMPC_cntr_B.s[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[8];
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.nrm * ROPOD_4Wheel_TdistZMPC_cntr_B.b_A_c[8];
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[0] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.m + 1]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[1] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.m]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[2] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.m]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[3] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.s[ROPOD_4Wheel_TdistZMPC_cntr_B.q]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[4] = fabs
        (ROPOD_4Wheel_TdistZMPC_cntr_B.e[ROPOD_4Wheel_TdistZMPC_cntr_B.q]);
      ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
        ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[0];
      if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[0])) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.kase = 2;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.kase < 6)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.qjj = ROPOD_4Wheel_TdistZMPC_cntr_B.kase;
          if (!rtIsNaN
              (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[ROPOD_4Wheel_TdistZMPC_cntr_B.kase
               - 1])) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
              ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[ROPOD_4Wheel_TdistZMPC_cntr_B.kase
              - 1];
            exitg2 = true;
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kase++;
          }
        }
      }

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj < 5) {
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.qjj + 1 < 6) {
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj]
              > ROPOD_4Wheel_TdistZMPC_cntr_B.ztest) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.ztest =
              ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1_c[ROPOD_4Wheel_TdistZMPC_cntr_B.qjj];
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Td_Unconstrained_d(const real_T Hinv[81], const real_T
  f[9], real_T x[9])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_m = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.i_m++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_p = ROPOD_4Wheel_TdistZMPC_cntr_B.i_m + 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.d1 = 0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i5 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i5 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i5++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.d1 += -Hinv[(9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i5 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_p) -
        1] * f[ROPOD_4Wheel_TdistZMPC_cntr_B.i5];
    }

    x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_m] = ROPOD_4Wheel_TdistZMPC_cntr_B.d1;
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_c_norm_m(const real_T x[9])
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e = 3.3121686421112381E-170;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_p = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.k_p <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.k_p++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bj = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_p]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bj >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_j = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e /
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bj;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_j *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_j + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bj;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_j = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bj
        / ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_j * ROPOD_4Wheel_TdistZMPC_cntr_B.t_j;
    }
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e * sqrt(y);
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_abs_h(const real_T x[9], real_T y[9])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_o = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.k_o <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.k_o++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_o] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_o]);
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_c_abs_hu(const real_T x[21], real_T y[21])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_co = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_co < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_co++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_co] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_co]);
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMP_xnrm2_owt(int32_T n, const real_T x[81],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_h = 3.3121686421112381E-170;
      ROPOD_4Wheel_TdistZMPC_cntr_B.kend_c0 = (ix0 + n) - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_c = ix0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_c <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.kend_c0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bn = fabs
          (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_c - 1]);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bn >
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_h) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_d =
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_h /
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bn;
          y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_d *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_d + 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_h =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bn;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_d =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_bn /
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_h;
          y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_d *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_d;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.k_c++;
      }

      y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_h * sqrt(y);
    }
  }

  return y;
}

static real_T ROPOD_4Wheel_Tdis_rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd = fabs(u0);
  y = fabs(u1);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd < y) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd /= y;
    y *= sqrt(ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd *
              ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd + 1.0);
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd > y) {
    y /= ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd;
    y = sqrt(y * y + 1.0) * ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd;
  } else {
    if (!rtIsNaN(y)) {
      y = ROPOD_4Wheel_TdistZMPC_cntr_B.a_fd * 1.4142135623730951;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC__xgemv_k(int32_T m, int32_T n, const real_T
  A[81], int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9])
{
  if (n != 0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iy <= n) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy - 1] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.iy = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_j = (n - 1) * 9 + ia0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iac = ia0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iac <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_j) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_m = ix0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d = (ROPOD_4Wheel_TdistZMPC_cntr_B.iac + m)
        - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ia_h = ROPOD_4Wheel_TdistZMPC_cntr_B.iac;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_h <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.d) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.c += A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_h
          - 1] * x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_m - 1];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_m++;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ia_h++;
      }

      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy] += ROPOD_4Wheel_TdistZMPC_cntr_B.c;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iac += 9;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_c_xger_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[9], real_T A[81], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jA = ia0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.jy = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.j_o = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_o <= n) {
      if (y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.temp = y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy]
          * alpha1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix = ix0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_n = m + ROPOD_4Wheel_TdistZMPC_cntr_B.jA;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ijA = ROPOD_4Wheel_TdistZMPC_cntr_B.jA;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.ijA + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_n) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ijA] +=
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix - 1] *
            ROPOD_4Wheel_TdistZMPC_cntr_B.temp;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ix++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ijA++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jy++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.jA += 9;
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_o++;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_xgeqrf_c(real_T A[81], real_T tau[9])
{
  int32_T exitg1;
  boolean_T exitg2;
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.work_b[0], 0, 9U * sizeof(real_T));
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_j = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_j <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.i_j++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_i = ROPOD_4Wheel_TdistZMPC_cntr_B.i_j * 9 +
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_j;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_j + 1 < 9) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i];
      ROPOD_4Wheel_TdistZMPC_cntr_B.b = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm = ROPOD_4Wheel_TdistZMP_xnrm2_owt(8 -
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_j, A, ROPOD_4Wheel_TdistZMPC_cntr_B.i_i
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
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i -
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_j) + 9;
          do {
            ROPOD_4Wheel_TdistZMPC_cntr_B.knt++;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o + 1 <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j) {
              A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o] *= 9.9792015476736E+291;
              ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm *= 9.9792015476736E+291;
            ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp *= 9.9792015476736E+291;
          } while (!(fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm) >=
                     1.0020841800044864E-292));

          ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm = ROPOD_4Wheel_Tdis_rt_hypotd_snf
            (ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp,
             ROPOD_4Wheel_TdistZMP_xnrm2_owt(8 -
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_j, A,
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
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i -
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_j) + 9;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o + 1 <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j) {
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o] *=
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.knt) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm *= 1.0020841800044864E-292;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j++;
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
            - ROPOD_4Wheel_TdistZMPC_cntr_B.i_j) + 9;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j + 1 <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.knt) {
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j] *=
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp =
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
        }
      }

      tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_j] = ROPOD_4Wheel_TdistZMPC_cntr_B.b;
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i];
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] = 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.knt = ((ROPOD_4Wheel_TdistZMPC_cntr_B.i_j +
        1) * 9 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_j) + 1;
      if (tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_j] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j = 9 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_j;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o =
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i - ROPOD_4Wheel_TdistZMPC_cntr_B.i_j)
          + 8;
        while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j > 0) &&
               (A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o] == 0.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j--;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o--;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o = 8 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_j;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o > 0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_n =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o - 1) * 9 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.knt;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ia_i =
            ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_n;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_i <=
                (ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_n +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j) - 1) {
              if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_i - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ia_i++;
              }
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j = 0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o = 0;
      }

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j > 0) {
        ROPOD_4Wheel_TdistZMPC__xgemv_k(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work_b);
        ROPOD_4Wheel_TdistZMPC_c_xger_i(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_j,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o,
          -tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_j],
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work_b, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt);
      }

      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
    } else {
      tau[8] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cnt_qr_m(const real_T A[81], real_T Q[81],
  real_T R[81])
{
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[0], &A[0], 81U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_xgeqrf_c(ROPOD_4Wheel_TdistZMPC_cntr_B.b_A,
    ROPOD_4Wheel_TdistZMPC_cntr_B.tau);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 1 <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.itau + 1) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau] = ROPOD_4Wheel_TdistZMPC_cntr_B.b_A
        [9 * ROPOD_4Wheel_TdistZMPC_cntr_B.itau +
        ROPOD_4Wheel_TdistZMPC_cntr_B.d_i];
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.d_i = ROPOD_4Wheel_TdistZMPC_cntr_B.itau + 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 1 < 10) {
      R[ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.itau] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d_i++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.work[ROPOD_4Wheel_TdistZMPC_cntr_B.itau] = 0.0;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.itau = 8;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i = 8; ROPOD_4Wheel_TdistZMPC_cntr_B.d_i >=
       0; ROPOD_4Wheel_TdistZMPC_cntr_B.d_i--) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.iaii = (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i * 9
      + ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) + 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.d_i + 1 < 9) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii - 1] =
        1.0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.tau[ROPOD_4Wheel_TdistZMPC_cntr_B.itau]
          != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv = 9 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.d_i;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc =
          (ROPOD_4Wheel_TdistZMPC_cntr_B.iaii -
           ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) + 7;
        while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv > 0) &&
               (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc]
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
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia
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
        ROPOD_4Wheel_TdistZMPC__xgemv_k(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc, ROPOD_4Wheel_TdistZMPC_cntr_B.b_A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.iaii + 9,
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_A, ROPOD_4Wheel_TdistZMPC_cntr_B.iaii,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work);
        ROPOD_4Wheel_TdistZMPC_c_xger_i(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc,
          -ROPOD_4Wheel_TdistZMPC_cntr_B.tau[ROPOD_4Wheel_TdistZMPC_cntr_B.itau],
          ROPOD_4Wheel_TdistZMPC_cntr_B.iaii, ROPOD_4Wheel_TdistZMPC_cntr_B.work,
          ROPOD_4Wheel_TdistZMPC_cntr_B.b_A, ROPOD_4Wheel_TdistZMPC_cntr_B.iaii
          + 9);
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv = (ROPOD_4Wheel_TdistZMPC_cntr_B.iaii
        - ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) + 8;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastc = ROPOD_4Wheel_TdistZMPC_cntr_B.iaii;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc + 1 <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.lastv) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc] *=
          -ROPOD_4Wheel_TdistZMPC_cntr_B.tau[ROPOD_4Wheel_TdistZMPC_cntr_B.itau];
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc++;
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.iaii - 1] =
      1.0 - ROPOD_4Wheel_TdistZMPC_cntr_B.tau[ROPOD_4Wheel_TdistZMPC_cntr_B.itau];
    ROPOD_4Wheel_TdistZMPC_cntr_B.lastv = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.d_i) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[(ROPOD_4Wheel_TdistZMPC_cntr_B.iaii -
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv) - 1] = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.lastv++;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.itau--;
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.itau = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.itau++) {
    memcpy(&Q[ROPOD_4Wheel_TdistZMPC_cntr_B.itau * 9],
           &ROPOD_4Wheel_TdistZMPC_cntr_B.b_A[ROPOD_4Wheel_TdistZMPC_cntr_B.itau
           * 9], 9U * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdist_KWIKfactor_e(const real_T Ac[189], const
  int16_T iC[21], int16_T nA, const real_T Linv[81], real_T RLinv[81], real_T D
  [81], real_T H[81])
{
  real_T Status;
  int32_T exitg1;
  Status = 1.0;
  memset(&RLinv[0], 0, 81U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l <= nA) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i3 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i3++) {
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.i3 + 9 *
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l - 1)] = 0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = ROPOD_4Wheel_TdistZMPC_cntr_B.i_l - 1;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i3 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i3++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.i3 + 9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_a;
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i4 < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i4++) {
        RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = Ac
          [(iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_l - 1] + 21 *
            ROPOD_4Wheel_TdistZMPC_cntr_B.i4) - 1] * Linv[9 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i4 + ROPOD_4Wheel_TdistZMPC_cntr_B.i3] +
          RLinv[9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_a +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3];
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_l++;
  }

  ROPOD_4Wheel_TdistZMPC_cnt_qr_m(RLinv, ROPOD_4Wheel_TdistZMPC_cntr_B.QQ,
    ROPOD_4Wheel_TdistZMPC_cntr_B.RR);
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = 1;
  do {
    exitg1 = 0;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l <= nA) {
      if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.RR
               [((ROPOD_4Wheel_TdistZMPC_cntr_B.i_l - 1) * 9 +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_l) - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_l++;
      }
    } else {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_l < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_l++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = ROPOD_4Wheel_TdistZMPC_cntr_B.i_l +
          1;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_m < 9;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_m++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_m +
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.d0 = 0.0;
          for (ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i3 < 9;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i3++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.d0 += Linv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i_a - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i3] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.QQ[(ROPOD_4Wheel_TdistZMPC_cntr_B.j
              - 1) * 9 + ROPOD_4Wheel_TdistZMPC_cntr_B.i3];
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i_l + 9
            * ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] =
            ROPOD_4Wheel_TdistZMPC_cntr_B.d0;
        }
      }

      memset(&RLinv[0], 0, 81U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = nA;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l > 0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_l - 1;
        RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_l + 9 *
               ROPOD_4Wheel_TdistZMPC_cntr_B.i3) - 1] = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = ROPOD_4Wheel_TdistZMPC_cntr_B.i_l;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_m <= nA) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_m -
            1;
          RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_l + 9 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.j) - 1] /=
            ROPOD_4Wheel_TdistZMPC_cntr_B.RR[((ROPOD_4Wheel_TdistZMPC_cntr_B.i_l
            - 1) * 9 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_l) - 1];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_m++;
        }

        if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l > 1) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_m <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i3) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_l;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <= nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.j =
                ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = ROPOD_4Wheel_TdistZMPC_cntr_B.j
                * 9;
              RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_m + 9 *
                     ROPOD_4Wheel_TdistZMPC_cntr_B.j) - 1] = RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i4 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_m) - 1] -
                ROPOD_4Wheel_TdistZMPC_cntr_B.RR
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i3 * 9 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_m) - 1] * RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i4 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.i_l) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.j_m++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = (int16_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_l < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_l++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = (int16_T)
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l + 1);
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_m <= 9) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = ROPOD_4Wheel_TdistZMPC_cntr_B.j_m -
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.i_l +
            9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i3;
          H[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k = (int16_T)(nA + 1);
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <= 9) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i4 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1) * 9;
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = H
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j_m - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_l] -
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[(ROPOD_4Wheel_TdistZMPC_cntr_B.i4
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_m) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i4
              + ROPOD_4Wheel_TdistZMPC_cntr_B.i_l];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
          }

          H[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_m + 9 *
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_l) - 1] =
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.i3 * 9 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_l];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_m++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l <= nA) {
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_m = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_m < 9;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_m++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_l -
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_m +
            9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i3;
          D[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k = ROPOD_4Wheel_TdistZMPC_cntr_B.i_l;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <= nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i4 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1) * 9;
            D[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = RLinv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i4 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_l) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i4
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_m] +
              D[ROPOD_4Wheel_TdistZMPC_cntr_B.i3 * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.j_m];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_l++;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_T_DropConstraint_n(int16_T kDrop, int16_T iA[21],
  int16_T *nA, int16_T iC[21])
{
  iA[iC[kDrop - 1] - 1] = 0;
  if (kDrop < *nA) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = *nA - 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i6 < -32768) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = -32768;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = kDrop;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c <= (int16_T)
           ROPOD_4Wheel_TdistZMPC_cntr_B.i6) {
      iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_c - 1] =
        iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_c];
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_c++;
    }
  }

  iC[*nA - 1] = 0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = *nA - 1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.i6 < -32768) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = -32768;
  }

  *nA = (int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.i6;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_T_ResetToColdStart(int16_T iA[21], int16_T iC[21])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_gx = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_gx < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i_gx++) {
    iA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_gx] = 0;
    iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_gx] = 0;
  }

  iA[18] = 1;
  iC[0] = 19;
  iA[19] = 1;
  iC[1] = 20;
  iA[20] = 1;
  iC[2] = 21;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdis_mpcqpsolver_p(const real_T Linv[81], const real_T
  f[9], const real_T b[18], const real_T Aeq[27], const real_T beq[3], real_T x
  [9])
{
  boolean_T ColdReset;
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

  ROPOD_4Wheel_TdistZMPC_cntr_svd(Aeq, ROPOD_4Wheel_TdistZMPC_cntr_B.dv2);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk = ROPOD_4Wheel_TdistZMPC_cntr_B.dv2[0];
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[ROPOD_4Wheel_TdistZMPC_cntr_B.k] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[ROPOD_4Wheel_TdistZMPC_cntr_B.k] =
          Linv[9 * ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp] * Linv[9 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
          ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp] +
          ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[9 *
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
      0.0;
  }

  memset(&x[0], 0, 9U * sizeof(real_T));
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.r[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.absxk = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.cTolComputed = false;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
      1.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] = 0;
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.iC[(int16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart - 1] = (int16_T)
        (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext + 1);
    }
  }

  guard1 = false;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA > 0) {
    memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[0], 0, 18U * sizeof(real_T));
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
         ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
         ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
        f[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
      ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
        9] = 0.0;
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

    ROPOD_4Wheel_TdistZMPC_cntr_B.q_f = (uint16_T)
      (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext / 10U);
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_x = (uint16_T)((uint32_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - ROPOD_4Wheel_TdistZMPC_cntr_B.q_f *
      10);
    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.b_x > 0) &&
        (ROPOD_4Wheel_TdistZMPC_cntr_B.b_x >= 5)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.q_f++;
    }

    ColdReset = false;
    do {
      exitg3 = 0;
      if ((!ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.nA > 0) &&
          (ROPOD_4Wheel_TdistZMPC_cntr_B.k <= 200)) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 = ROPOD_4Wheel_Tdist_KWIKfactor_e
          (ROPOD_4Wheel_TdistZMPC_cntr_B.Ac, ROPOD_4Wheel_TdistZMPC_cntr_B.iC,
           ROPOD_4Wheel_TdistZMPC_cntr_B.nA, Linv,
           ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv, ROPOD_4Wheel_TdistZMPC_cntr_B.D,
           ROPOD_4Wheel_TdistZMPC_cntr_B.H);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 < 0.0) {
          if (ColdReset) {
            exitg3 = 2;
          } else {
            ROPOD_4Wheel_T_ResetToColdStart(ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
              ROPOD_4Wheel_TdistZMPC_cntr_B.iC);
            ROPOD_4Wheel_TdistZMPC_cntr_B.nA = 3;
            ColdReset = true;
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
            ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart
              - 1] =
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_b[ROPOD_4Wheel_TdistZMPC_cntr_B.iC[
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp] - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop =
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop + 9 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp) - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.U[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                = 0.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.iSave = 1;
              while (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave <=
                     ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp =
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave - 1) * 9;
                ROPOD_4Wheel_TdistZMPC_cntr_B.U[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                  = ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop) - 1] *
                  ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv
                  [(ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.U
                  [((ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - 1) * 9 +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop) - 1];
                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave++;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.U
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext + 9 *
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1)) - 1] =
                ROPOD_4Wheel_TdistZMPC_cntr_B.U
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
                ROPOD_4Wheel_TdistZMPC_cntr_B.H[(9 *
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext]
              = ROPOD_4Wheel_TdistZMPC_cntr_B.cVal;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop = 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext]
                += ROPOD_4Wheel_TdistZMPC_cntr_B.D
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1) * 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart
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
                ROPOD_4Wheel_TdistZMPC_cntr_B.D
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - 1) * 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
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

              ROPOD_4Wheel_TdistZMPC_cntr_B.i2 = 9 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.i2 > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.i2 = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                - 1] = ROPOD_4Wheel_TdistZMPC_cntr_B.U
                [((ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1) * 9 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                ROPOD_4Wheel_TdistZMPC_cntr_B.Rhs[ROPOD_4Wheel_TdistZMPC_cntr_B.i2
                - 1] +
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.U_tmp
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

            ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext
              - 1] - 1] =
              ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
              - 1];
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 32767;
            }

            if ((ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                 - 1] < ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0) &&
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.nA - 3)) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop =
                ROPOD_4Wheel_TdistZMPC_cntr_B.kNext;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 32767;
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.Xnorm0 =
                ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart
                - 1];
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.kNext++;
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop <= 0) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible = true;
            memcpy(&x[0], &ROPOD_4Wheel_TdistZMPC_cntr_B.Opt[0], 9U * sizeof
                   (real_T));
          } else {
            ROPOD_4Wheel_TdistZMPC_cntr_B.k++;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.k >
                ROPOD_4Wheel_TdistZMPC_cntr_B.q_f) {
              ROPOD_4Wheel_T_ResetToColdStart(ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
                ROPOD_4Wheel_TdistZMPC_cntr_B.iC);
              ROPOD_4Wheel_TdistZMPC_cntr_B.nA = 3;
              ColdReset = true;
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC[
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1] - 1] = 0.0;
              ROPOD_4Wheel_T_DropConstraint_n
                (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
                 &ROPOD_4Wheel_TdistZMPC_cntr_B.nA,
                 ROPOD_4Wheel_TdistZMPC_cntr_B.iC);
            }
          }
        }
      } else {
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA <= 0) {
          memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.lam[0], 0, 21U * sizeof(real_T));
          ROPOD_4Wheel_Td_Unconstrained_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv, f,
            x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Td_Unconstrained_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv, f, x);
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

          ROPOD_4Wheel_TdistZMPC_cn_abs_h(ROPOD_4Wheel_TdistZMPC_cntr_B.Ac_c,
            ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow);
          ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
            ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[0];
          if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[0])) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 2;
            exitg4 = false;
            while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 10))
            {
              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart =
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp;
              if (!rtIsNaN
                  (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                   - 1])) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                  - 1];
                exitg4 = true;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++;
              }
            }
          }

          if (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9) {
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart + 1 < 10) {
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                  > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
              }

              ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++;
            }
          }

          if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop]
                 > ROPOD_4Wheel_TdistZMPC_cntr_B.cVal) || rtIsNaN
                (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal))) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop]
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
            ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop];
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
                ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                  = 0.0;
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 9;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    += ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.Hinv[9 *
                    ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
                    ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                }
              }

              guard2 = true;
            } else {
              ROPOD_4Wheel_TdistZMPC_cntr_B.cMin =
                ROPOD_4Wheel_Tdist_KWIKfactor_e(ROPOD_4Wheel_TdistZMPC_cntr_B.Ac,
                ROPOD_4Wheel_TdistZMPC_cntr_B.iC,
                ROPOD_4Wheel_TdistZMPC_cntr_B.nA, Linv,
                ROPOD_4Wheel_TdistZMPC_cntr_B.RLinv,
                ROPOD_4Wheel_TdistZMPC_cntr_B.D, ROPOD_4Wheel_TdistZMPC_cntr_B.H);
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.cMin <= 0.0) {
                exitg1 = 1;
              } else {
                for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.U[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp
                      + 9 * ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] =
                      -ROPOD_4Wheel_TdistZMPC_cntr_B.H[9 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp];
                  }
                }

                for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    = 0.0;
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp++) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                      += ROPOD_4Wheel_TdistZMPC_cntr_B.Ac[(21 *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext) - 1] *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.U[9 *
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
                      ROPOD_4Wheel_TdistZMPC_cntr_B.D
                      [(ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop - 1) * 9 +
                      ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop
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
              ColdReset = true;
              if (ROPOD_4Wheel_TdistZMPC_cntr_B.nA > 3) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.iSave = 1;
                exitg4 = false;
                while ((!exitg4) && (ROPOD_4Wheel_TdistZMPC_cntr_B.iSave <=
                                     ROPOD_4Wheel_TdistZMPC_cntr_B.nA - 3)) {
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave
                      - 1] >= 1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.iSave++;
                  }
                }
              }

              if (!((ROPOD_4Wheel_TdistZMPC_cntr_B.nA == 3) || ColdReset)) {
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
                  if (ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
                      > 1.0E-12) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cVal =
                      ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC
                      [ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp] - 1] /
                      ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave
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
                  ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
              }

              if (ROPOD_4Wheel_TdistZMPC_cntr_B.cVal <= 0.0) {
                ROPOD_4Wheel_TdistZMPC_cntr_B.cVal = 0.0;
                ColdReset = true;
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
                ColdReset = false;
              }

              if (ROPOD_4Wheel_TdistZMPC_cntr_B.DualFeasible && ColdReset) {
                exitg1 = 1;
              } else {
                if (ColdReset) {
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
                    ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    - 1;
                  ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
                    -=
                    ROPOD_4Wheel_TdistZMPC_cntr_B.r[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    * ROPOD_4Wheel_TdistZMPC_cntr_B.t;
                  if ((ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.iSave
                       - 1] <= 18) &&
                      (ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.iC
                       [ROPOD_4Wheel_TdistZMPC_cntr_B.iSave - 1] - 1] < 0.0)) {
                    ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
                      = 0.0;
                  }

                  ROPOD_4Wheel_TdistZMPC_cntr_B.iSave++;
                }

                ROPOD_4Wheel_TdistZMPC_cntr_B.lam[ROPOD_4Wheel_TdistZMPC_cntr_B.kNext
                  - 1] += ROPOD_4Wheel_TdistZMPC_cntr_B.t;
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.t ==
                    ROPOD_4Wheel_TdistZMPC_cntr_B.cMin) {
                  ROPOD_4Wheel_T_DropConstraint_n
                    (ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop,
                     ROPOD_4Wheel_TdistZMPC_cntr_B.iA,
                     &ROPOD_4Wheel_TdistZMPC_cntr_B.nA,
                     ROPOD_4Wheel_TdistZMPC_cntr_B.iC);
                }

                if (!ColdReset) {
                  for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 9;
                       ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                    x[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart] +=
                      ROPOD_4Wheel_TdistZMPC_cntr_B.t *
                      ROPOD_4Wheel_TdistZMPC_cntr_B.AcRow[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
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
                      ROPOD_4Wheel_TdistZMPC_cntr_B.iC[(int16_T)
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
                        if (ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                            >
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp])
                        {
                          exitg4 = true;
                        } else {
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iSave =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop
                            - 1];
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                            =
                            ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop
                            - 2];
                          ROPOD_4Wheel_TdistZMPC_cntr_B.iC[ROPOD_4Wheel_TdistZMPC_cntr_B.kDrop_tmp]
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
              ROPOD_4Wheel_TdistZMPC_c_abs_hu(ROPOD_4Wheel_TdistZMPC_cntr_B.b_b,
                ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1);
              for (ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart = 0;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart < 21;
                   ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart++) {
                if (ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    > 1.0) {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
                    =
                    ROPOD_4Wheel_TdistZMPC_cntr_B.varargin_1[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart];
                } else {
                  ROPOD_4Wheel_TdistZMPC_cntr_B.cTol[ROPOD_4Wheel_TdistZMPC_cntr_B.ixstart]
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

// Function for MATLAB Function: '<S45>/Force_per_sensor'
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_d(const real_T x[4])
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

  // S-Function (ECAT_Interface): '<S12>/ECAT_Interface'

  // Level2 S-Function Block: '<S12>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  // DigitalClock: '<S1>/Digital Clock1' incorporates:
  //   DigitalClock: '<S270>/Digital Clock'
  //   DigitalClock: '<S74>/Digital Clock'
  //   DigitalClock: '<S75>/Digital Clock'
  //   DigitalClock: '<S76>/Digital Clock'
  //   DigitalClock: '<S77>/Digital Clock'

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
    // MATLABSystem: '<S380>/SourceBlock' incorporates:
    //   Inport: '<S382>/In1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_9639.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k);

    // Outputs for Enabled SubSystem: '<S380>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S382>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p =
        ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k;
    }

    // End of MATLABSystem: '<S380>/SourceBlock'
    // End of Outputs for SubSystem: '<S380>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe1'

    // RelationalOperator: '<S37>/Compare' incorporates:
    //   Constant: '<S37>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p.Data ==
       ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_gv);

    // Switch: '<S13>/Switch' incorporates:
    //   Constant: '<S13>/Constant'
    //   Constant: '<S13>/Constant1'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_m;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_g;
    }

    // End of Switch: '<S13>/Switch'
  }

  // MATLAB Function: '<S110>/MATLAB Function' incorporates:
  //   Constant: '<S110>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_no,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nu, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_h_l);

  // S-Function (Read_Serial_Port): '<S45>/S-Function Builder'

  // Level2 S-Function Block: '<S45>/S-Function Builder' (Read_Serial_Port)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S74>/Switch' incorporates:
  //   Constant: '<S229>/Constant'
  //   Constant: '<S74>/Constant'
  //   RelationalOperator: '<S229>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o2;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o3;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o4;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o5;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o6;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o7;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o8;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ms;
  }

  // End of Switch: '<S74>/Switch'

  // Sum: '<S110>/Sum' incorporates:
  //   UnitDelay: '<S110>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jj =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE;

  // Product: '<S110>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nu *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jj;

  // MATLAB Function: '<S108>/MATLAB Function' incorporates:
  //   Constant: '<S108>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_de,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nu, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_l_g);

  // Sum: '<S108>/Sum' incorporates:
  //   UnitDelay: '<S108>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ez =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i;

  // Product: '<S108>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nu *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ez;

  // MATLAB Function: '<S112>/MATLAB Function' incorporates:
  //   Constant: '<S112>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bx,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m0, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nu);

  // Sum: '<S112>/Sum' incorporates:
  //   UnitDelay: '<S112>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_om =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b;

  // Product: '<S112>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i = ROPOD_4Wheel_TdistZMPC_cntr_B.a_m0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_om;

  // MATLAB Function: '<S114>/MATLAB Function' incorporates:
  //   Constant: '<S114>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_g,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_gm, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m0);

  // Sum: '<S114>/Sum' incorporates:
  //   UnitDelay: '<S114>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l;

  // Product: '<S114>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n = ROPOD_4Wheel_TdistZMPC_cntr_B.a_gm *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g;

  // MATLAB Function: '<S116>/MATLAB Function' incorporates:
  //   Constant: '<S116>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_en,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ck, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_gm);

  // Sum: '<S116>/Sum' incorporates:
  //   UnitDelay: '<S116>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gg =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l0;

  // Product: '<S116>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_m = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ck *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gg;

  // MATLAB Function: '<S118>/MATLAB Function' incorporates:
  //   Constant: '<S118>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dr,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_iy, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ck);

  // Sum: '<S118>/Sum' incorporates:
  //   UnitDelay: '<S118>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lh;

  // Product: '<S118>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l = ROPOD_4Wheel_TdistZMPC_cntr_B.a_iy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d;

  // MATLAB Function: '<S120>/MATLAB Function' incorporates:
  //   Constant: '<S120>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ie,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_iy);

  // Sum: '<S120>/Sum' incorporates:
  //   UnitDelay: '<S120>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lr;

  // Product: '<S120>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne = ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev;

  // MATLAB Function: '<S122>/MATLAB Function' incorporates:
  //   Constant: '<S122>/Constant'
  //   Constant: '<S55>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg);

  // Sum: '<S122>/Sum' incorporates:
  //   UnitDelay: '<S122>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iy =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e;

  // Product: '<S122>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iy;

  // MATLAB Function: '<S45>/speed deflection angle calculation X+'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_m,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_og, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalculat);

  // MATLAB Function: '<S60>/Calibration1' incorporates:
  //   Memory: '<S60>/Memory2'
  //   Memory: '<S60>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_og,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_ft,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ao);
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Subscribe2'
    // MATLABSystem: '<S381>/SourceBlock' incorporates:
    //   Inport: '<S383>/In1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_9640.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2_p);

    // Outputs for Enabled SubSystem: '<S381>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S383>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2_p;
    }

    // End of MATLABSystem: '<S381>/SourceBlock'
    // End of Outputs for SubSystem: '<S381>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe2'
  }

  // MATLAB Function: '<S142>/MATLAB Function' incorporates:
  //   Constant: '<S142>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_e);

  // Switch: '<S75>/Switch' incorporates:
  //   Constant: '<S230>/Constant'
  //   Constant: '<S75>/Constant'
  //   RelationalOperator: '<S230>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_e) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o9;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o10;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o11;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o12;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o13;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o14;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o15;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o16;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p;
  }

  // End of Switch: '<S75>/Switch'

  // Sum: '<S142>/Sum' incorporates:
  //   UnitDelay: '<S142>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_od =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n;

  // Product: '<S142>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_od;

  // MATLAB Function: '<S140>/MATLAB Function' incorporates:
  //   Constant: '<S140>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dx,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d);

  // Sum: '<S140>/Sum' incorporates:
  //   UnitDelay: '<S140>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j;

  // Product: '<S140>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev2;

  // MATLAB Function: '<S144>/MATLAB Function' incorporates:
  //   Constant: '<S144>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e2,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx);

  // Sum: '<S144>/Sum' incorporates:
  //   UnitDelay: '<S144>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g;

  // Product: '<S144>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2;

  // MATLAB Function: '<S146>/MATLAB Function' incorporates:
  //   Constant: '<S146>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_na,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_an, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch);

  // Sum: '<S146>/Sum' incorporates:
  //   UnitDelay: '<S146>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_my =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bw;

  // Product: '<S146>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g = ROPOD_4Wheel_TdistZMPC_cntr_B.a_an *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_my;

  // MATLAB Function: '<S148>/MATLAB Function' incorporates:
  //   Constant: '<S148>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_an);

  // Sum: '<S148>/Sum' incorporates:
  //   UnitDelay: '<S148>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo;

  // Product: '<S148>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g5 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h;

  // MATLAB Function: '<S150>/MATLAB Function' incorporates:
  //   Constant: '<S150>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ix,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix);

  // Sum: '<S150>/Sum' incorporates:
  //   UnitDelay: '<S150>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f;

  // Product: '<S150>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg = ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j;

  // MATLAB Function: '<S152>/MATLAB Function' incorporates:
  //   Constant: '<S152>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg);

  // Sum: '<S152>/Sum' incorporates:
  //   UnitDelay: '<S152>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h;

  // Product: '<S152>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mz;

  // MATLAB Function: '<S154>/MATLAB Function' incorporates:
  //   Constant: '<S154>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ly,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_f, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j);

  // Sum: '<S154>/Sum' incorporates:
  //   UnitDelay: '<S154>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lk =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e0;

  // Product: '<S154>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt = ROPOD_4Wheel_TdistZMPC_cntr_B.a_f *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lk;

  // MATLAB Function: '<S45>/speed deflection angle calculation X-'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g5,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_og, &ROPOD_4Wheel_TdistZMPC_cntr_B.g_i,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_f,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalcul_f);

  // MATLAB Function: '<S63>/Calibration1' incorporates:
  //   Memory: '<S63>/Memory2'
  //   Memory: '<S63>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_og,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_g,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_a);

  // Switch: '<S45>/Switch2' incorporates:
  //   Constant: '<S45>/Constant6'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value;
  }

  // End of Switch: '<S45>/Switch2'

  // Switch: '<S45>/Switch' incorporates:
  //   Constant: '<S45>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j.Data) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value;
  }

  // End of Switch: '<S45>/Switch'

  // Sum: '<S45>/Sum2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab;

  // MATLAB Function: '<S61>/Calibration1' incorporates:
  //   Memory: '<S61>/Memory2'
  //   Memory: '<S61>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_n,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_e,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_k,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l);

  // MATLAB Function: '<S64>/Calibration1' incorporates:
  //   Memory: '<S64>/Memory2'
  //   Memory: '<S64>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_ed,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_g,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab);

  // Switch: '<S45>/Switch3' incorporates:
  //   Constant: '<S45>/Constant6'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch3_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value;
  }

  // End of Switch: '<S45>/Switch3'

  // Switch: '<S45>/Switch1' incorporates:
  //   Constant: '<S45>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j.Data) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value;
  }

  // End of Switch: '<S45>/Switch1'

  // Sum: '<S45>/Sum3'
  ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m;

  // Sum: '<S13>/Add1' incorporates:
  //   Gain: '<S13>/Gain'
  //   Gain: '<S13>/Gain1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh + ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k;

  // MATLAB Function: '<S174>/MATLAB Function' incorporates:
  //   Constant: '<S174>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ieq,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_l);

  // Switch: '<S76>/Switch' incorporates:
  //   Constant: '<S231>/Constant'
  //   Constant: '<S76>/Constant'
  //   RelationalOperator: '<S231>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_g) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o17;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o18;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o19;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o20;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o21;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o22;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o23;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o24;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b;
  }

  // End of Switch: '<S76>/Switch'

  // Sum: '<S174>/Sum' incorporates:
  //   UnitDelay: '<S174>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gx =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d;

  // Product: '<S174>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p = ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gx;

  // MATLAB Function: '<S172>/MATLAB Function' incorporates:
  //   Constant: '<S172>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pb,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_f);

  // Sum: '<S172>/Sum' incorporates:
  //   UnitDelay: '<S172>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ho =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_er;

  // Product: '<S172>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz = ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ho;

  // MATLAB Function: '<S176>/MATLAB Function' incorporates:
  //   Constant: '<S176>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_eno,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr);

  // Sum: '<S176>/Sum' incorporates:
  //   UnitDelay: '<S176>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_e1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ff;

  // Product: '<S176>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b = ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_e1;

  // MATLAB Function: '<S178>/MATLAB Function' incorporates:
  //   Constant: '<S178>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fa,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p);

  // Sum: '<S178>/Sum' incorporates:
  //   UnitDelay: '<S178>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hk =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a;

  // Product: '<S178>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx = ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hk;

  // MATLAB Function: '<S180>/MATLAB Function' incorporates:
  //   Constant: '<S180>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mf,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_p, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf);

  // Sum: '<S180>/Sum' incorporates:
  //   UnitDelay: '<S180>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fe;

  // Product: '<S180>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it = ROPOD_4Wheel_TdistZMPC_cntr_B.a_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_f;

  // MATLAB Function: '<S182>/MATLAB Function' incorporates:
  //   Constant: '<S182>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_go,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_p);

  // Sum: '<S182>/Sum' incorporates:
  //   UnitDelay: '<S182>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lf =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ii;

  // Product: '<S182>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lf;

  // MATLAB Function: '<S184>/MATLAB Function' incorporates:
  //   Constant: '<S184>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ce,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc);

  // Sum: '<S184>/Sum' incorporates:
  //   UnitDelay: '<S184>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jn =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dw;

  // Product: '<S184>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jn;

  // MATLAB Function: '<S186>/MATLAB Function' incorporates:
  //   Constant: '<S186>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_g3,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii);

  // Sum: '<S186>/Sum' incorporates:
  //   UnitDelay: '<S186>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a3;

  // Product: '<S186>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la = ROPOD_4Wheel_TdistZMPC_cntr_B.a_g *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c;

  // MATLAB Function: '<S45>/speed deflection angle calculation Y+'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_og, &ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_b,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalcul_j);

  // MATLAB Function: '<S59>/Calibration1' incorporates:
  //   Memory: '<S59>/Memory2'
  //   Memory: '<S59>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_og,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_b,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_hm,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_f);

  // MATLAB Function: '<S206>/MATLAB Function' incorporates:
  //   Constant: '<S206>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ixy,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_il, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_n);

  // Switch: '<S77>/Switch' incorporates:
  //   Constant: '<S232>/Constant'
  //   Constant: '<S77>/Constant'
  //   RelationalOperator: '<S232>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp >
      ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_b) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o25;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o26;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o27;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o28;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o29;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o30;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o31;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunctionBuilder_o32;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_6 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_7 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c;
  }

  // End of Switch: '<S77>/Switch'

  // Sum: '<S206>/Sum' incorporates:
  //   UnitDelay: '<S206>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cn =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_il;

  // Product: '<S206>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_il
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cn;

  // MATLAB Function: '<S204>/MATLAB Function' incorporates:
  //   Constant: '<S204>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_br,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_il, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_g);

  // Sum: '<S204>/Sum' incorporates:
  //   UnitDelay: '<S204>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a0;

  // Product: '<S204>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p0 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_il
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n;

  // MATLAB Function: '<S208>/MATLAB Function' incorporates:
  //   Constant: '<S208>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hh,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_il);

  // Sum: '<S208>/Sum' incorporates:
  //   UnitDelay: '<S208>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ng =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ej;

  // Product: '<S208>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ng;

  // MATLAB Function: '<S210>/MATLAB Function' incorporates:
  //   Constant: '<S210>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ek,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls);

  // Sum: '<S210>/Sum' incorporates:
  //   UnitDelay: '<S210>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_l0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jm;

  // Product: '<S210>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd = ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_l0;

  // MATLAB Function: '<S212>/MATLAB Function' incorporates:
  //   Constant: '<S212>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_du,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx);

  // Sum: '<S212>/Sum' incorporates:
  //   UnitDelay: '<S212>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gf =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m;

  // Product: '<S212>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm = ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gf;

  // MATLAB Function: '<S214>/MATLAB Function' incorporates:
  //   Constant: '<S214>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e5,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq);

  // Sum: '<S214>/Sum' incorporates:
  //   UnitDelay: '<S214>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p;

  // Product: '<S214>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib = ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg;

  // MATLAB Function: '<S216>/MATLAB Function' incorporates:
  //   Constant: '<S216>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jy,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg);

  // Sum: '<S216>/Sum' incorporates:
  //   UnitDelay: '<S216>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_al;

  // Product: '<S216>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw;

  // MATLAB Function: '<S218>/MATLAB Function' incorporates:
  //   Constant: '<S218>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_oi,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m);

  // Sum: '<S218>/Sum' incorporates:
  //   UnitDelay: '<S218>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_js =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jx;

  // Product: '<S218>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_js;

  // MATLAB Function: '<S45>/speed deflection angle calculation Y-'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p0,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_og, &ROPOD_4Wheel_TdistZMPC_cntr_B.g_i,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalcu_fc);

  // MATLAB Function: '<S65>/Calibration1' incorporates:
  //   Memory: '<S65>/Memory2'
  //   Memory: '<S65>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_og,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c4,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_e,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m);

  // Sum: '<S45>/Sum5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h;

  // DiscreteStateSpace: '<S53>/Internal'
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

  // MATLAB Function: '<S62>/Calibration1' incorporates:
  //   Memory: '<S62>/Memory2'
  //   Memory: '<S62>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_gi,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h);

  // MATLAB Function: '<S66>/Calibration1' incorporates:
  //   Memory: '<S66>/Memory2'
  //   Memory: '<S66>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_a,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_c,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle, &ROPOD_4Wheel_TdistZMPC_cntr_B.i_f,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out);

  // Sum: '<S45>/Sum6'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum6 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;

  // DiscreteStateSpace: '<S54>/Internal'
  {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_a =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_C_o[0])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[0]
      + (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_C_o[1])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_a +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_D_n*
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum6;
  }

  // Sum: '<S13>/Add2' incorporates:
  //   Gain: '<S13>/Gain2'
  //   Gain: '<S13>/Gain3'

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy * ROPOD_4Wheel_TdistZMPC_cntr_B.Internal
    + ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_a;

  // Chart: '<S13>/Chart' incorporates:
  //   Constant: '<S13>/Fd_max'
  //   Constant: '<S13>/Fd_min'

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
      ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min = 0.0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
  } else {
    switch (ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn) {
     case ROPOD_4_IN_Mode1_Operation_mode:
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
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
          }
          break;

         case ROPOD__IN_Interaction_left_side:
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 <
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min - 2.0) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD_4Wheel__IN_No_interaction;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
          } else {
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
                ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min) {
              ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
                ROPOD__IN_Collision_with_object;
              ROPOD_4Wheel_TdistZMPC_cntr_B.state = 2U;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = -20.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
                -ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
            }
          }
          break;

         case ROPOD_IN_Interaction_right_side:
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 >
              -(ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min - 2.0)) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD_4Wheel__IN_No_interaction;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
          } else {
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
                ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min) {
              ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
                ROPOD__IN_Collision_with_object;
              ROPOD_4Wheel_TdistZMPC_cntr_B.state = 2U;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = -20.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
                -ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
                ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
            }
          }
          break;

         default:
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 1U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD__IN_Collision_with_object;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 2U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min = -20.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
              -ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
          } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 >
                     ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min + 2.0) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD__IN_Interaction_left_side;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
          } else {
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 <
                -(ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min + 2.0)) {
              ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
                ROPOD_IN_Interaction_right_side;
              ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
              ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min =
                -ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
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
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd <
            -(ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min + 2.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart =
            ROPOD_IN_Hold_contact_with_cart;
          ROPOD_4Wheel_TdistZMPC_cntr_B.state = 4U;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max =
            -ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min =
            -(ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max + 60.0);
        }
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.state = 4U;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 1.0;
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd >
            -(ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min - 7.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode4_Connect_to_cart =
            ROPOD_4Wheel_IN_Connect_to_cart;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
        }
      }
      break;

     default:
      ROPOD_4Wheel_TdistZMPC_cntr_B.state = 0U;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o = 0.0;
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p.Data == 1) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.is_c3_ROPOD_4Wheel_TdistZMPC_cn =
          ROPOD_4_IN_Mode1_Operation_mode;
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz);

    // MATLAB Function: '<S309>/MATLAB Function' incorporates:
    //   Constant: '<S309>/Constant'
    //   Gain: '<S298>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter14'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_kb,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_n, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_o);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'

  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S33>/S-Function'

  // Level2 S-Function Block: '<S33>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S34>/S-Function'

  // Level2 S-Function Block: '<S34>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S35>/S-Function'

  // Level2 S-Function Block: '<S35>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S24>/Switch2' incorporates:
  //   Constant: '<S24>/Constant2'
  //   Gain: '<S24>/sign convention'
  //   Gain: '<S24>/sign convention1'
  //   Gain: '<S24>/sign convention2'
  //   Gain: '<S24>/sign convention3'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value[0], sizeof(real_T) <<
           3U);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_f[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[3] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention1_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_f[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[4] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_n[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[5] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention2_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_n[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[6] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[7] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention3_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[17];
  }

  // End of Switch: '<S24>/Switch2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2173.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter'

    // MATLABSystem: '<S6>/Get Parameter11'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2176.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter11'

    // MATLABSystem: '<S6>/Get Parameter12'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2177.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter12'

    // MATLABSystem: '<S6>/Get Parameter13'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2178.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter13'

    // MATLABSystem: '<S6>/Get Parameter14'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2179.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter14'

    // MATLABSystem: '<S6>/Get Parameter15'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2180.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter15'

    // MATLABSystem: '<S6>/Get Parameter16'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2181.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter16'

    // MATLABSystem: '<S6>/Get Parameter17'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2182.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter17'

    // MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2174.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter1'

    // MATLABSystem: '<S6>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2183.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter2'

    // MATLABSystem: '<S6>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2184.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter3'

    // MATLABSystem: '<S6>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2185.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter4'

    // MATLABSystem: '<S6>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2186.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter5'

    // MATLABSystem: '<S6>/Get Parameter6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2187.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter6'

    // MATLABSystem: '<S6>/Get Parameter7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2188.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter7'

    // MATLABSystem: '<S6>/Get Parameter8'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2189.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter8'

    // MATLABSystem: '<S6>/Get Parameter9'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2190.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter9'

    // MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2175.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S6>/Get Parameter10'

    // MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2214.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S7>/Get Parameter1'

    // MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2216.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S7>/Get Parameter3'

    // MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2217.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S7>/Get Parameter4'

    // MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S7>/Get Parameter5'
  }

  // Switch: '<S24>/Switch' incorporates:
  //   Constant: '<S24>/Constant'
  //   Sum: '<S24>/Add'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[0];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[2];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[3];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_f[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw2;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_n[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw3;
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[28] -
      ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw4;
  }

  // End of Switch: '<S24>/Switch'

  // MATLAB Function: '<S41>/Gl_matrix' incorporates:
  //   MATLAB Function: '<S11>/Jqwl_matrix'
  //   MATLAB Function: '<S43>/Gl_matrices'
  //   SignalConversion: '<S235>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_og = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut * ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t33_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39_tmp = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t42_tmp = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_k * 0.5;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2237.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S8>/Get Parameter'
  }

  // Product: '<S271>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S271>/sample time'
  //
  //  About '<S271>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S8>/Get Parameter1'
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S384>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1 =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_1899.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S384>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S385>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
      // Inport: '<S385>/In1' incorporates:
      //   MATLABSystem: '<S384>/SourceBlock'

      ROPOD_4Wheel_TdistZMPC_cntr_B.In1 =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2;
    }

    // End of Outputs for SubSystem: '<S384>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'
  }

  // Delay: '<S270>/Enabled Delay'
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay =
      ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE;
  }

  // End of Delay: '<S270>/Enabled Delay'

  // Gain: '<S270>/Gain6' incorporates:
  //   Constant: '<S280>/Constant'
  //   RelationalOperator: '<S280>/Compare'
  //   Sum: '<S270>/Subtract'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i = (uint8_T)
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp -
     ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay >=
     ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_i ? (int32_T)
     ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain_k : 0);

  // Switch: '<S17>/Switch1' incorporates:
  //   Constant: '<S17>/Constant1'
  //   Switch: '<S270>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_hl;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch_Threshold_l) {
    // Switch: '<S270>/Switch' incorporates:
    //   Constant: '<S270>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pg;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Linear.X;
  }

  // End of Switch: '<S17>/Switch1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S269>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_j *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  }

  // Switch: '<S274>/Switch2' incorporates:
  //   RelationalOperator: '<S274>/LowerRelop1'
  //   RelationalOperator: '<S274>/UpperRelop'
  //   Switch: '<S274>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1) {
      // Switch: '<S274>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1;
    }
  }

  // End of Switch: '<S274>/Switch2'

  // Sum: '<S271>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S271>/Delay Input2'
  //
  //  Block description for '<S271>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S271>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S269>/Gain'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain_p *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy;
  }

  // Switch: '<S277>/Switch2' incorporates:
  //   RelationalOperator: '<S277>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 >
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
    // Product: '<S271>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S271>/sample time'
    //
    //  About '<S271>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle = ROPOD_4Wheel_TdistZMPC_cntr_B.Gain
      * ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt;

    // Switch: '<S277>/Switch' incorporates:
    //   RelationalOperator: '<S277>/UpperRelop'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 <
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3;
    }

    // End of Switch: '<S277>/Switch'
  }

  // End of Switch: '<S277>/Switch2'

  // Sum: '<S271>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S271>/Delay Input2'
  //
  //  Block description for '<S271>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S271>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE;

  // Product: '<S272>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S272>/sample time'
  //
  //  About '<S272>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_l;

  // Switch: '<S17>/Switch2' incorporates:
  //   Constant: '<S17>/Constant2'
  //   Switch: '<S270>/Switch1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_f) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_j;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold_j) {
    // Switch: '<S270>/Switch1' incorporates:
    //   Constant: '<S270>/Constant1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_d;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Linear.Y;
  }

  // End of Switch: '<S17>/Switch2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S269>/Gain3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  }

  // Switch: '<S275>/Switch2' incorporates:
  //   RelationalOperator: '<S275>/LowerRelop1'
  //   RelationalOperator: '<S275>/UpperRelop'
  //   Switch: '<S275>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3) {
      // Switch: '<S275>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3;
    }
  }

  // End of Switch: '<S275>/Switch2'

  // Sum: '<S272>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S272>/Delay Input2'
  //
  //  Block description for '<S272>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S272>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S269>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_j *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy;
  }

  // Switch: '<S278>/Switch2' incorporates:
  //   RelationalOperator: '<S278>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle >
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
    // Product: '<S272>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S272>/sample time'
    //
    //  About '<S272>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_l;

    // Switch: '<S278>/Switch' incorporates:
    //   RelationalOperator: '<S278>/UpperRelop'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle <
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;
    }

    // End of Switch: '<S278>/Switch'
  }

  // End of Switch: '<S278>/Switch2'

  // Sum: '<S272>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S272>/Delay Input2'
  //
  //  Block description for '<S272>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S272>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2239.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S8>/Get Parameter2'
  }

  // Product: '<S273>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S273>/sample time'
  //
  //  About '<S273>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_b;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2240.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S8>/Get Parameter3'

    // Gain: '<S269>/Gain5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta;
  }

  // Switch: '<S17>/Switch3' incorporates:
  //   Constant: '<S17>/Constant3'
  //   Switch: '<S270>/Switch2'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch3_Threshold_c) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant3_Value;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_n) {
    // Switch: '<S270>/Switch2' incorporates:
    //   Constant: '<S270>/Constant2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_p;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Angular.Z;
  }

  // End of Switch: '<S17>/Switch3'

  // Switch: '<S276>/Switch2' incorporates:
  //   RelationalOperator: '<S276>/LowerRelop1'
  //   RelationalOperator: '<S276>/UpperRelop'
  //   Switch: '<S276>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5) {
      // Switch: '<S276>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5;
    }
  }

  // End of Switch: '<S276>/Switch2'

  // Sum: '<S273>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S273>/Delay Input2'
  //
  //  Block description for '<S273>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S273>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S269>/Gain4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta;
  }

  // Switch: '<S279>/Switch2' incorporates:
  //   RelationalOperator: '<S279>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m >
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
    // Product: '<S273>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S273>/sample time'
    //
    //  About '<S273>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain4 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_b;

    // Switch: '<S279>/Switch' incorporates:
    //   RelationalOperator: '<S279>/UpperRelop'

    if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m <
          ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
        ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m;
    }

    // End of Switch: '<S279>/Switch'
  }

  // End of Switch: '<S279>/Switch2'

  // Sum: '<S273>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S273>/Delay Input2'
  //
  //  Block description for '<S273>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S273>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k;

  // SignalConversion: '<S41>/TmpSignal ConversionAtProduct3Inport2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m;

  // MATLAB Function: '<S41>/Gl_matrix' incorporates:
  //   SignalConversion: '<S235>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[0] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[4] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[5] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[6] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[7] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[8] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[9] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_og +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[10] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_og -
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt) * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[11] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[12] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd -
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[13] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t39_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[14] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t39_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[15] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[16] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[17] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[18] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[19] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[20] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[21] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[22] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp
    - ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[23] = (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[24] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[25] = (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[26] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) * ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[27] = (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = ROPOD_4Wheel_TdistZMPC_cntr_B.POut *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[28] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[29] = (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[30] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[31] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[32] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[33] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[34] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[35] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[36] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_k - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[37] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) - ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)
    * -ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[38] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) + ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[39] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.DOut +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) - ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) *
    -ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[40] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.DOut
    + ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) + ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[41] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.t33_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[42] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t33_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[43] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j
    + ROPOD_4Wheel_TdistZMPC_cntr_B.t42_tmp) - ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)
    * -ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[44] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42_tmp) + ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;

  // Product: '<S41>/Product3' incorporates:
  //   SignalConversion: '<S41>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S20>/Sum'

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 15;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 30] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m +
      (ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 15] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle +
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3);
  }

  // End of Product: '<S41>/Product3'

  // Product: '<S297>/Product9' incorporates:
  //   Constant: '<S1>/Constant'
  //   Sum: '<S20>/Sum'

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[7 + ROPOD_4Wheel_TdistZMPC_cntr_B.i] -
       ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i])
      * ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ci[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
  }

  // End of Product: '<S297>/Product9'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2931.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S5>/Get Parameter10'
  }

  // Product: '<S298>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S311>/POut' incorporates:
  //   Constant: '<S307>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter11'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2932.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz);

    // Gain: '<S307>/Gain2' incorporates:
    //   Constant: '<S307>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter11'
    //   Product: '<S307>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_e;
  }

  // DiscreteIntegrator: '<S311>/Integrator' incorporates:
  //   Product: '<S311>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_c);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE;

  // End of DiscreteIntegrator: '<S311>/Integrator'

  // Product: '<S311>/DOut' incorporates:
  //   Constant: '<S307>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_a;

  // SampleTimeMath: '<S312>/TSamp' incorporates:
  //   Constant: '<S307>/Constant5'
  //
  //  About '<S312>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt;

  // Math: '<S312>/Reciprocal' incorporates:
  //   Constant: '<S312>/Constant'
  //   Sum: '<S312>/SumDen'
  //
  //  About '<S312>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hg +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S312>/Filter Differentiator TF' incorporates:
  //   Constant: '<S312>/Constant'
  //   Product: '<S312>/Divide'
  //   Sum: '<S312>/SumNum'

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
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hg) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states;

  // Sum: '<S311>/Sum' incorporates:
  //   Constant: '<S307>/Constant5'
  //   DiscreteTransferFcn: '<S312>/Filter Differentiator TF'
  //   Product: '<S312>/DenCoefOut'
  //   Product: '<S312>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoef[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoef[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator);

  // DiscreteIntegrator: '<S313>/Integrator' incorporates:
  //   Constant: '<S308>/Constant2'
  //   Product: '<S313>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t33_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_b *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_c);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut = ROPOD_4Wheel_TdistZMPC_cntr_B.t33_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_f;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter12'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2933.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz);

    // Gain: '<S308>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter12'

    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // MATLABSystem: '<S5>/Get Parameter13'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2934.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz);

    // Gain: '<S308>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter13'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_b *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S308>/Divide1' incorporates:
    //   Constant: '<S308>/Constant1'
    //   Product: '<S308>/Divide'
    //   Sum: '<S308>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_k -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S314>/TSamp' incorporates:
  //   DataTypeConversion: '<S314>/Passthrough for tuning'
  //
  //  About '<S314>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_h;

  // Math: '<S314>/Reciprocal' incorporates:
  //   Constant: '<S314>/Constant'
  //   Sum: '<S314>/SumDen'
  //
  //  About '<S314>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dm +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S314>/Filter Differentiator TF' incorporates:
  //   Constant: '<S314>/Constant'
  //   Product: '<S313>/DOut'
  //   Product: '<S314>/Divide'
  //   Sum: '<S314>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dm) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l;

  // Sum: '<S313>/Sum' incorporates:
  //   Constant: '<S308>/Constant4'
  //   DataTypeConversion: '<S314>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S314>/Filter Differentiator TF'
  //   Product: '<S313>/POut'
  //   Product: '<S314>/DenCoefOut'
  //   Product: '<S314>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_d[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_d[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_k +
     ROPOD_4Wheel_TdistZMPC_cntr_B.POut);

  // Sum: '<S309>/Sum' incorporates:
  //   UnitDelay: '<S309>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_k = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lv;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S318>/MATLAB Function' incorporates:
    //   Constant: '<S318>/Constant'
    //   Gain: '<S299>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ea *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_cc,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_pd, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a);
  }

  // Product: '<S299>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S320>/POut' incorporates:
  //   Constant: '<S316>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kt;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S316>/Gain2' incorporates:
    //   Constant: '<S316>/Constant4'
    //   Product: '<S316>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kt *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_d;
  }

  // DiscreteIntegrator: '<S320>/Integrator' incorporates:
  //   Product: '<S320>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_m != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_l;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t42_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_j *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_b);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t42_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d;

  // End of DiscreteIntegrator: '<S320>/Integrator'

  // Product: '<S320>/DOut' incorporates:
  //   Constant: '<S316>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l5;

  // SampleTimeMath: '<S321>/TSamp' incorporates:
  //   Constant: '<S316>/Constant5'
  //
  //  About '<S321>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_k *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_m;

  // Math: '<S321>/Reciprocal' incorporates:
  //   Constant: '<S321>/Constant'
  //   Sum: '<S321>/SumDen'
  //
  //  About '<S321>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ks +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S321>/Filter Differentiator TF' incorporates:
  //   Constant: '<S321>/Constant'
  //   Product: '<S321>/Divide'
  //   Sum: '<S321>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__h ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__h !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_e;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ks) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f;

  // Sum: '<S320>/Sum' incorporates:
  //   Constant: '<S316>/Constant5'
  //   DiscreteTransferFcn: '<S321>/Filter Differentiator TF'
  //   Product: '<S321>/DenCoefOut'
  //   Product: '<S321>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_m[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_m[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_k +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j);

  // DiscreteIntegrator: '<S322>/Integrator' incorporates:
  //   Constant: '<S317>/Constant2'
  //   Product: '<S322>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t39_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_d *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_d);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j = ROPOD_4Wheel_TdistZMPC_cntr_B.t39_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S317>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_a *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S317>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_o *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S317>/Divide1' incorporates:
    //   Constant: '<S317>/Constant1'
    //   Product: '<S317>/Divide'
    //   Sum: '<S317>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_kp -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i /
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb) * (1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S323>/TSamp' incorporates:
  //   DataTypeConversion: '<S323>/Passthrough for tuning'
  //
  //  About '<S323>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_l;

  // Math: '<S323>/Reciprocal' incorporates:
  //   Constant: '<S323>/Constant'
  //   Sum: '<S323>/SumDen'
  //
  //  About '<S323>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nz +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S323>/Filter Differentiator TF' incorporates:
  //   Constant: '<S323>/Constant'
  //   Product: '<S322>/DOut'
  //   Product: '<S323>/Divide'
  //   Sum: '<S323>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j;

  // Sum: '<S322>/Sum' incorporates:
  //   Constant: '<S317>/Constant4'
  //   DataTypeConversion: '<S323>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S323>/Filter Differentiator TF'
  //   Product: '<S322>/POut'
  //   Product: '<S323>/DenCoefOut'
  //   Product: '<S323>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_b[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_b[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_o +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j);

  // Sum: '<S318>/Sum' incorporates:
  //   UnitDelay: '<S318>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S327>/MATLAB Function' incorporates:
    //   Constant: '<S327>/Constant'
    //   Gain: '<S300>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hc,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_j, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_j);
  }

  // Product: '<S300>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S329>/POut' incorporates:
  //   Constant: '<S325>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_h = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_h;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S325>/Gain2' incorporates:
    //   Constant: '<S325>/Constant4'
    //   Product: '<S325>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_h *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_b;
  }

  // DiscreteIntegrator: '<S329>/Integrator' incorporates:
  //   Product: '<S329>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_b != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_d;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_k0_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_bn *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_p);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_k0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_k0_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i;

  // End of DiscreteIntegrator: '<S329>/Integrator'

  // Product: '<S329>/DOut' incorporates:
  //   Constant: '<S325>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nn;

  // SampleTimeMath: '<S330>/TSamp' incorporates:
  //   Constant: '<S325>/Constant5'
  //
  //  About '<S330>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_a *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_c;

  // Math: '<S330>/Reciprocal' incorporates:
  //   Constant: '<S330>/Constant'
  //   Sum: '<S330>/SumDen'
  //
  //  About '<S330>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e2s +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S330>/Filter Differentiator TF' incorporates:
  //   Constant: '<S330>/Constant'
  //   Product: '<S330>/Divide'
  //   Sum: '<S330>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_a;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e2s) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d;

  // Sum: '<S329>/Sum' incorporates:
  //   Constant: '<S325>/Constant5'
  //   DiscreteTransferFcn: '<S330>/Filter Differentiator TF'
  //   Product: '<S330>/DenCoefOut'
  //   Product: '<S330>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_j[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_j[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_a +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_h +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_k0);

  // DiscreteIntegrator: '<S331>/Integrator' incorporates:
  //   Constant: '<S326>/Constant2'
  //   Product: '<S331>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_h_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_e *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_m);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_h_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_l;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S326>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ip *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S326>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_og *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S326>/Divide1' incorporates:
    //   Constant: '<S326>/Constant1'
    //   Product: '<S326>/Divide'
    //   Sum: '<S326>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_b =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_b -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S332>/TSamp' incorporates:
  //   DataTypeConversion: '<S332>/Passthrough for tuning'
  //
  //  About '<S332>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_o;

  // Math: '<S332>/Reciprocal' incorporates:
  //   Constant: '<S332>/Constant'
  //   Sum: '<S332>/SumDen'
  //
  //  About '<S332>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jf +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S332>/Filter Differentiator TF' incorporates:
  //   Constant: '<S332>/Constant'
  //   Product: '<S331>/DOut'
  //   Product: '<S332>/Divide'
  //   Sum: '<S332>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_b -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jf) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i;

  // Sum: '<S331>/Sum' incorporates:
  //   Constant: '<S326>/Constant4'
  //   DataTypeConversion: '<S332>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S332>/Filter Differentiator TF'
  //   Product: '<S331>/POut'
  //   Product: '<S332>/DenCoefOut'
  //   Product: '<S332>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_e[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_e +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_e[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_c +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_h);

  // Sum: '<S327>/Sum' incorporates:
  //   UnitDelay: '<S327>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S336>/MATLAB Function' incorporates:
    //   Constant: '<S336>/Constant'
    //   Gain: '<S301>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_h *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dz,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_c, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_k);
  }

  // Product: '<S301>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S338>/POut' incorporates:
  //   Constant: '<S334>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_k = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_b;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S334>/Gain2' incorporates:
    //   Constant: '<S334>/Constant4'
    //   Product: '<S334>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_b *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_o;
  }

  // DiscreteIntegrator: '<S338>/Integrator' incorporates:
  //   Product: '<S338>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_l != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_c;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_n *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_a);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j;

  // End of DiscreteIntegrator: '<S338>/Integrator'

  // Product: '<S338>/DOut' incorporates:
  //   Constant: '<S334>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_j5;

  // SampleTimeMath: '<S339>/TSamp' incorporates:
  //   Constant: '<S334>/Constant5'
  //
  //  About '<S339>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_n;

  // Math: '<S339>/Reciprocal' incorporates:
  //   Constant: '<S339>/Constant'
  //   Sum: '<S339>/SumDen'
  //
  //  About '<S339>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f3 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S339>/Filter Differentiator TF' incorporates:
  //   Constant: '<S339>/Constant'
  //   Product: '<S339>/Divide'
  //   Sum: '<S339>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__d ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__d !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_d;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_hp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im;

  // Sum: '<S338>/Sum' incorporates:
  //   Constant: '<S334>/Constant5'
  //   DiscreteTransferFcn: '<S339>/Filter Differentiator TF'
  //   Product: '<S339>/DenCoefOut'
  //   Product: '<S339>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_g[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_hp +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_g[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_n +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_k +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i);

  // DiscreteIntegrator: '<S340>/Integrator' incorporates:
  //   Constant: '<S335>/Constant2'
  //   Product: '<S340>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_k_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_je *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_l);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_k_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S335>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_io *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S335>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_k *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S335>/Divide1' incorporates:
    //   Constant: '<S335>/Constant1'
    //   Product: '<S335>/Divide'
    //   Sum: '<S335>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_c -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i /
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0) * (1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S341>/TSamp' incorporates:
  //   DataTypeConversion: '<S341>/Passthrough for tuning'
  //
  //  About '<S341>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_cd;

  // Math: '<S341>/Reciprocal' incorporates:
  //   Constant: '<S341>/Constant'
  //   Sum: '<S341>/SumDen'
  //
  //  About '<S341>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ba +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S341>/Filter Differentiator TF' incorporates:
  //   Constant: '<S341>/Constant'
  //   Product: '<S340>/DOut'
  //   Product: '<S341>/Divide'
  //   Sum: '<S341>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ba) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k;

  // Sum: '<S340>/Sum' incorporates:
  //   Constant: '<S335>/Constant4'
  //   DataTypeConversion: '<S341>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S341>/Filter Differentiator TF'
  //   Product: '<S340>/POut'
  //   Product: '<S341>/DenCoefOut'
  //   Product: '<S341>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_k[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_a +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_k[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0 + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_k);

  // Sum: '<S336>/Sum' incorporates:
  //   UnitDelay: '<S336>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_d = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ev;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S345>/MATLAB Function' incorporates:
    //   Constant: '<S345>/Constant'
    //   Gain: '<S302>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_jg *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jt,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_o, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c);
  }

  // Product: '<S302>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S347>/POut' incorporates:
  //   Constant: '<S343>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S343>/Gain2' incorporates:
    //   Constant: '<S343>/Constant4'
    //   Product: '<S343>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_pu =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_f;
  }

  // DiscreteIntegrator: '<S347>/Integrator' incorporates:
  //   Product: '<S347>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_j;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_mm_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_k *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_pu);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_mm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_mm_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p;

  // End of DiscreteIntegrator: '<S347>/Integrator'

  // Product: '<S347>/DOut' incorporates:
  //   Constant: '<S343>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_md;

  // SampleTimeMath: '<S348>/TSamp' incorporates:
  //   Constant: '<S343>/Constant5'
  //
  //  About '<S348>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_l *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_lp;

  // Math: '<S348>/Reciprocal' incorporates:
  //   Constant: '<S348>/Constant'
  //   Sum: '<S348>/SumDen'
  //
  //  About '<S348>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fh +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S348>/Filter Differentiator TF' incorporates:
  //   Constant: '<S348>/Constant'
  //   Product: '<S348>/Divide'
  //   Sum: '<S348>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_mb;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fh) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a;

  // Sum: '<S347>/Sum' incorporates:
  //   Constant: '<S343>/Constant5'
  //   DiscreteTransferFcn: '<S348>/Filter Differentiator TF'
  //   Product: '<S348>/DenCoefOut'
  //   Product: '<S348>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_l[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_l[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_l +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_mm);

  // DiscreteIntegrator: '<S349>/Integrator' incorporates:
  //   Constant: '<S344>/Constant2'
  //   Product: '<S349>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_c_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_bnj *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_c0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_c_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_py;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S344>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_d2 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S344>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_g *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S344>/Divide1' incorporates:
    //   Constant: '<S344>/Constant1'
    //   Product: '<S344>/Divide'
    //   Sum: '<S344>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_h =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_of -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S350>/TSamp' incorporates:
  //   DataTypeConversion: '<S350>/Passthrough for tuning'
  //
  //  About '<S350>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_d;

  // Math: '<S350>/Reciprocal' incorporates:
  //   Constant: '<S350>/Constant'
  //   Sum: '<S350>/SumDen'
  //
  //  About '<S350>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gr +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S350>/Filter Differentiator TF' incorporates:
  //   Constant: '<S350>/Constant'
  //   Product: '<S349>/DOut'
  //   Product: '<S350>/Divide'
  //   Sum: '<S350>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_h -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gr) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p;

  // Sum: '<S349>/Sum' incorporates:
  //   Constant: '<S344>/Constant4'
  //   DataTypeConversion: '<S350>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S350>/Filter Differentiator TF'
  //   Product: '<S349>/POut'
  //   Product: '<S350>/DenCoefOut'
  //   Product: '<S350>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_a[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_j +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_a[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_iu +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c);

  // Sum: '<S345>/Sum' incorporates:
  //   UnitDelay: '<S345>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_ac = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kp;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S354>/MATLAB Function' incorporates:
    //   Constant: '<S354>/Constant'
    //   Gain: '<S303>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ap *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ad,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_h, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_l);
  }

  // Product: '<S303>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S356>/POut' incorporates:
  //   Constant: '<S352>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kn;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S352>/Gain2' incorporates:
    //   Constant: '<S352>/Constant4'
    //   Product: '<S352>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kn *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_g;
  }

  // DiscreteIntegrator: '<S356>/Integrator' incorporates:
  //   Product: '<S356>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dj =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_m;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_m *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_f);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dj;

  // End of DiscreteIntegrator: '<S356>/Integrator'

  // Product: '<S356>/DOut' incorporates:
  //   Constant: '<S352>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hf;

  // SampleTimeMath: '<S357>/TSamp' incorporates:
  //   Constant: '<S352>/Constant5'
  //
  //  About '<S357>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_m *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_b;

  // Math: '<S357>/Reciprocal' incorporates:
  //   Constant: '<S357>/Constant'
  //   Sum: '<S357>/SumDen'
  //
  //  About '<S357>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ej +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S357>/Filter Differentiator TF' incorporates:
  //   Constant: '<S357>/Constant'
  //   Product: '<S357>/Divide'
  //   Sum: '<S357>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_mn ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_mn !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_c;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_mn =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ej) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz;

  // Sum: '<S356>/Sum' incorporates:
  //   Constant: '<S352>/Constant5'
  //   DiscreteTransferFcn: '<S357>/Filter Differentiator TF'
  //   Product: '<S357>/DenCoefOut'
  //   Product: '<S357>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eq[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eq[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_m +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix);

  // DiscreteIntegrator: '<S358>/Integrator' incorporates:
  //   Constant: '<S353>/Constant2'
  //   Product: '<S358>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_o *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_a);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_fd;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S353>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_fc *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S353>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S353>/Divide1' incorporates:
    //   Constant: '<S353>/Constant1'
    //   Product: '<S353>/Divide'
    //   Sum: '<S353>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_iu =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_e -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S359>/TSamp' incorporates:
  //   DataTypeConversion: '<S359>/Passthrough for tuning'
  //
  //  About '<S359>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_he;

  // Math: '<S359>/Reciprocal' incorporates:
  //   Constant: '<S359>/Constant'
  //   Sum: '<S359>/SumDen'
  //
  //  About '<S359>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l4 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S359>/Filter Differentiator TF' incorporates:
  //   Constant: '<S359>/Constant'
  //   Product: '<S358>/DOut'
  //   Product: '<S359>/Divide'
  //   Sum: '<S359>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_kz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_iu
    - (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l4) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g;

  // Sum: '<S358>/Sum' incorporates:
  //   Constant: '<S353>/Constant4'
  //   DataTypeConversion: '<S359>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S359>/Filter Differentiator TF'
  //   Product: '<S358>/POut'
  //   Product: '<S359>/DenCoefOut'
  //   Product: '<S359>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_o[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_kz +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_o[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e);

  // Sum: '<S354>/Sum' incorporates:
  //   UnitDelay: '<S354>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_gd = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ez;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S363>/MATLAB Function' incorporates:
    //   Constant: '<S363>/Constant'
    //   Gain: '<S304>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_n *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_oif,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_p, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i);
  }

  // Product: '<S304>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S365>/POut' incorporates:
  //   Constant: '<S361>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_cu;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S361>/Gain2' incorporates:
    //   Constant: '<S361>/Constant4'
    //   Product: '<S361>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_cu *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_o0;
  }

  // DiscreteIntegrator: '<S365>/Integrator' incorporates:
  //   Product: '<S365>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_f != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_lt;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_i *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_m);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n;

  // End of DiscreteIntegrator: '<S365>/Integrator'

  // Product: '<S365>/DOut' incorporates:
  //   Constant: '<S361>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_po;

  // SampleTimeMath: '<S366>/TSamp' incorporates:
  //   Constant: '<S361>/Constant5'
  //
  //  About '<S366>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_f *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_e;

  // Math: '<S366>/Reciprocal' incorporates:
  //   Constant: '<S366>/Constant'
  //   Sum: '<S366>/SumDen'
  //
  //  About '<S366>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lu +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S366>/Filter Differentiator TF' incorporates:
  //   Constant: '<S366>/Constant'
  //   Product: '<S366>/Divide'
  //   Sum: '<S366>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_l;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_au =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lu) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4;

  // Sum: '<S365>/Sum' incorporates:
  //   Constant: '<S361>/Constant5'
  //   DiscreteTransferFcn: '<S366>/Filter Differentiator TF'
  //   Product: '<S366>/DenCoefOut'
  //   Product: '<S366>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ka[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_au +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ka[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_f +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e);

  // DiscreteIntegrator: '<S367>/Integrator' incorporates:
  //   Constant: '<S362>/Constant2'
  //   Product: '<S367>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_ij *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_k);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ik;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S362>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_od *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S362>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S362>/Divide1' incorporates:
    //   Constant: '<S362>/Constant1'
    //   Product: '<S362>/Divide'
    //   Sum: '<S362>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_hy -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S368>/TSamp' incorporates:
  //   DataTypeConversion: '<S368>/Passthrough for tuning'
  //
  //  About '<S368>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_hw;

  // Math: '<S368>/Reciprocal' incorporates:
  //   Constant: '<S368>/Constant'
  //   Sum: '<S368>/SumDen'
  //
  //  About '<S368>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_eu +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S368>/Filter Differentiator TF' incorporates:
  //   Constant: '<S368>/Constant'
  //   Product: '<S367>/DOut'
  //   Product: '<S368>/Divide'
  //   Sum: '<S368>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_eu) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m;

  // Sum: '<S367>/Sum' incorporates:
  //   Constant: '<S362>/Constant4'
  //   DataTypeConversion: '<S368>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S368>/Filter Differentiator TF'
  //   Product: '<S367>/POut'
  //   Product: '<S368>/DenCoefOut'
  //   Product: '<S368>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_f[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f3 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_f[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_a +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n);

  // Sum: '<S363>/Sum' incorporates:
  //   UnitDelay: '<S363>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lu;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S372>/MATLAB Function' incorporates:
    //   Constant: '<S372>/Constant'
    //   Gain: '<S305>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_el *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lw,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a);
  }

  // Product: '<S305>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S374>/POut' incorporates:
  //   Constant: '<S370>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_bc;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S370>/Gain2' incorporates:
    //   Constant: '<S370>/Constant4'
    //   Product: '<S370>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_cs =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_bc *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_p;
  }

  // DiscreteIntegrator: '<S374>/Integrator' incorporates:
  //   Product: '<S374>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_j4;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_g *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_cs);
  ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_a;

  // End of DiscreteIntegrator: '<S374>/Integrator'

  // Product: '<S374>/DOut' incorporates:
  //   Constant: '<S370>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ee;

  // SampleTimeMath: '<S375>/TSamp' incorporates:
  //   Constant: '<S370>/Constant5'
  //
  //  About '<S375>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_f;

  // Math: '<S375>/Reciprocal' incorporates:
  //   Constant: '<S375>/Constant'
  //   Sum: '<S375>/SumDen'
  //
  //  About '<S375>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_cie +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S375>/Filter Differentiator TF' incorporates:
  //   Constant: '<S375>/Constant'
  //   Product: '<S375>/Divide'
  //   Sum: '<S375>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_o;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4 - (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_cie) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5;

  // Sum: '<S374>/Sum' incorporates:
  //   Constant: '<S370>/Constant5'
  //   DiscreteTransferFcn: '<S375>/Filter Differentiator TF'
  //   Product: '<S375>/DenCoefOut'
  //   Product: '<S375>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_i[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_i +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_i[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_e +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d +
     ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz);

  // DiscreteIntegrator: '<S376>/Integrator' incorporates:
  //   Constant: '<S371>/Constant2'
  //   Product: '<S376>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_d_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_bm *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_my);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_d_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i3;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S371>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_k *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S371>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S371>/Divide1' incorporates:
    //   Constant: '<S371>/Constant1'
    //   Product: '<S371>/Divide'
    //   Sum: '<S371>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i0 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_kh -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S377>/TSamp' incorporates:
  //   DataTypeConversion: '<S377>/Passthrough for tuning'
  //
  //  About '<S377>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_dj;

  // Math: '<S377>/Reciprocal' incorporates:
  //   Constant: '<S377>/Constant'
  //   Sum: '<S377>/SumDen'
  //
  //  About '<S377>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ld +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S377>/Filter Differentiator TF' incorporates:
  //   Constant: '<S377>/Constant'
  //   Product: '<S376>/DOut'
  //   Product: '<S377>/Divide'
  //   Sum: '<S377>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i0 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ld) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi;

  // Sum: '<S376>/Sum' incorporates:
  //   Constant: '<S371>/Constant4'
  //   DataTypeConversion: '<S377>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S377>/Filter Differentiator TF'
  //   Product: '<S376>/POut'
  //   Product: '<S377>/DenCoefOut'
  //   Product: '<S377>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_n[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_n[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_bb +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d);

  // Sum: '<S372>/Sum' incorporates:
  //   UnitDelay: '<S372>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f1;

  // MATLAB Function: '<S43>/Gl_matrices' incorporates:
  //   SignalConversion: '<S267>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.g_i * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 * 0.5;
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t8 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[0] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[4] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[5] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[6] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[7] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t38) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[8] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t38) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[9] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_og +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[10] = (ROPOD_4Wheel_TdistZMPC_cntr_B.a_og -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[11] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[12] = (ROPOD_4Wheel_TdistZMPC_cntr_B.Fd -
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[13] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t10) * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[14] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t10) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[15] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[16] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[17] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[18] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[19] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[20] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[21] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[22] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[23] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 0.5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[24] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.a_og * 0.5)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[25] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.a_og * 0.5
     + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[26] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[27] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 0.5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[28] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[29] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 * 0.5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[30] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[31] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[32] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[33] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[34] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[35] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[36] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[37] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g +
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[38] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g
    + ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[39] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp
    + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    -ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[40] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp +
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[41] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2) *
    -ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[42] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[43] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t14 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3) *
    -ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[44] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t14 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 15;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[1 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 15];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[2 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 30];
  }

  // SampleTimeMath: '<S236>/TSamp' incorporates:
  //   Gain: '<S42>/Gain3'
  //   SignalConversion: '<S41>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S236>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_g;

  // Sum: '<S236>/Diff' incorporates:
  //   UnitDelay: '<S236>/UD'
  //
  //  Block description for '<S236>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S236>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d -
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0];

  // SampleTimeMath: '<S236>/TSamp' incorporates:
  //   Gain: '<S42>/Gain3'
  //   SignalConversion: '<S41>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S236>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_g;

  // Sum: '<S236>/Diff' incorporates:
  //   UnitDelay: '<S236>/UD'
  //
  //  Block description for '<S236>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S236>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d -
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1];

  // SampleTimeMath: '<S236>/TSamp' incorporates:
  //   Gain: '<S42>/Gain3'
  //   SignalConversion: '<S41>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S236>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_g;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2903.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n);

    // MATLAB Function: '<S243>/MATLAB Function' incorporates:
    //   Constant: '<S243>/Constant'
    //   Gain: '<S237>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter6'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_df *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lb,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_hk, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i3);
  }

  // MATLAB Function: '<S11>/Jqwl_matrix' incorporates:
  //   SignalConversion: '<S21>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t23 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t25 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 2.0;
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t31 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 * 2.0;
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t50 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[1] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t19 - ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp *=
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[2] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t27 + ROPOD_4Wheel_TdistZMPC_cntr_B.t25) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t30) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t26) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[4] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t19) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[5] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t27 + ROPOD_4Wheel_TdistZMPC_cntr_B.t25) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t30) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t26) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[6] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t8 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[7] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t23 - ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[8] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t34 + ROPOD_4Wheel_TdistZMPC_cntr_B.t35) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t31) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t33) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[9] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t8 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[10] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t23) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[11] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t34 + ROPOD_4Wheel_TdistZMPC_cntr_B.t35) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t31) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t33) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[12] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[13] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t24 - ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[14] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t41 + ROPOD_4Wheel_TdistZMPC_cntr_B.t42) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t40) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[15] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[16] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t24) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[17] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t41 + ROPOD_4Wheel_TdistZMPC_cntr_B.t42) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t40) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[18] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t16 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[19] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i - ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[20] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t39 + ROPOD_4Wheel_TdistZMPC_cntr_B.t49) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t50) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t38) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[21] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t16 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[22] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[23] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t39 + ROPOD_4Wheel_TdistZMPC_cntr_B.t49) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t50) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp)
    * (ROPOD_4Wheel_TdistZMPC_cntr_B.t11 * ROPOD_4Wheel_TdistZMPC_cntr_B.t38) *
    0.125;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 3;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    // Product: '<S11>/Product3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i0 <
         8; ROPOD_4Wheel_TdistZMPC_cntr_B.i0++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[ROPOD_4Wheel_TdistZMPC_cntr_B.i] +=
        ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i0 + ROPOD_4Wheel_TdistZMPC_cntr_B.i] *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i0];
    }

    // End of Product: '<S11>/Product3'

    // Sum: '<S42>/Sum'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[ROPOD_4Wheel_TdistZMPC_cntr_B.i] -=
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2716.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S5>/Get Parameter'
  }

  // Product: '<S237>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i;

  // Product: '<S245>/POut' incorporates:
  //   Constant: '<S241>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_p;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2898.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e);

    // Gain: '<S241>/Gain2' incorporates:
    //   Constant: '<S241>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter3'
    //   Product: '<S241>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_p *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_bs;
  }

  // Logic: '<S16>/Logical Operator'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S245>/Integrator' incorporates:
  //   Product: '<S245>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_om != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_cq;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_p *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_o);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g;

  // End of DiscreteIntegrator: '<S245>/Integrator'

  // Product: '<S245>/DOut' incorporates:
  //   Constant: '<S241>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_og;

  // SampleTimeMath: '<S246>/TSamp' incorporates:
  //   Constant: '<S241>/Constant5'
  //
  //  About '<S246>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_na *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_p;

  // Math: '<S246>/Reciprocal' incorporates:
  //   Constant: '<S246>/Constant'
  //   Sum: '<S246>/SumDen'
  //
  //  About '<S246>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nh +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S246>/Filter Differentiator TF' incorporates:
  //   Constant: '<S246>/Constant'
  //   Product: '<S246>/Divide'
  //   Sum: '<S246>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_lu;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nh) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb;

  // Sum: '<S245>/Sum' incorporates:
  //   Constant: '<S241>/Constant5'
  //   DiscreteTransferFcn: '<S246>/Filter Differentiator TF'
  //   Product: '<S246>/DenCoefOut'
  //   Product: '<S246>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eo[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t6 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eo[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_na +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.t4);

  // DiscreteIntegrator: '<S247>/Integrator' incorporates:
  //   Constant: '<S242>/Constant2'
  //   Product: '<S247>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_e0 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_il);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g0;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2900.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m);

    // Gain: '<S242>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ig *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

    // MATLABSystem: '<S5>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2902.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n);

    // Gain: '<S242>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter5'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_bs *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

    // Product: '<S242>/Divide1' incorporates:
    //   Constant: '<S242>/Constant1'
    //   Product: '<S242>/Divide'
    //   Sum: '<S242>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_m =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_gr -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i /
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt) * (1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S248>/TSamp' incorporates:
  //   DataTypeConversion: '<S248>/Passthrough for tuning'
  //
  //  About '<S248>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_dn;

  // Math: '<S248>/Reciprocal' incorporates:
  //   Constant: '<S248>/Constant'
  //   Sum: '<S248>/SumDen'
  //
  //  About '<S248>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ep +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S248>/Filter Differentiator TF' incorporates:
  //   Constant: '<S248>/Constant'
  //   Product: '<S247>/DOut'
  //   Product: '<S248>/Divide'
  //   Sum: '<S248>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t9 = ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_m -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ep) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz;

  // Sum: '<S247>/Sum' incorporates:
  //   Constant: '<S242>/Constant4'
  //   DataTypeConversion: '<S248>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S248>/Filter Differentiator TF'
  //   Product: '<S247>/POut'
  //   Product: '<S248>/DenCoefOut'
  //   Product: '<S248>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ju[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t9 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ju[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t5 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_f +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t16);

  // Sum: '<S243>/Sum' incorporates:
  //   UnitDelay: '<S243>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t5 = ROPOD_4Wheel_TdistZMPC_cntr_B.t8 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hv;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S252>/MATLAB Function' incorporates:
    //   Constant: '<S252>/Constant'
    //   Gain: '<S238>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_bq *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ar,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_e, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ik);
  }

  // Product: '<S238>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i;

  // Product: '<S254>/POut' incorporates:
  //   Constant: '<S250>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_ol;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S250>/Gain2' incorporates:
    //   Constant: '<S250>/Constant4'
    //   Product: '<S250>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_aq =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_ol *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_km;
  }

  // Logic: '<S16>/Logical Operator1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1 =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S254>/Integrator' incorporates:
  //   Product: '<S254>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1 ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_o;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_f *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_aq);
  ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do;

  // End of DiscreteIntegrator: '<S254>/Integrator'

  // Product: '<S254>/DOut' incorporates:
  //   Constant: '<S250>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bh;

  // SampleTimeMath: '<S255>/TSamp' incorporates:
  //   Constant: '<S250>/Constant5'
  //
  //  About '<S255>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_d *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_nx;

  // Math: '<S255>/Reciprocal' incorporates:
  //   Constant: '<S255>/Constant'
  //   Sum: '<S255>/SumDen'
  //
  //  About '<S255>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S255>/Filter Differentiator TF' incorporates:
  //   Constant: '<S255>/Constant'
  //   Product: '<S255>/Divide'
  //   Sum: '<S255>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__f ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__f !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1)
  {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ir;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy;

  // Sum: '<S254>/Sum' incorporates:
  //   Constant: '<S250>/Constant5'
  //   DiscreteTransferFcn: '<S255>/Filter Differentiator TF'
  //   Product: '<S255>/DenCoefOut'
  //   Product: '<S255>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_iv[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t11 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_iv[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_d +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n);

  // DiscreteIntegrator: '<S256>/Integrator' incorporates:
  //   Constant: '<S251>/Constant2'
  //   Product: '<S256>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_f4 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t10 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_b);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 = ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dw;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S251>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_dt *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

    // Gain: '<S251>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_or *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

    // Product: '<S251>/Divide1' incorporates:
    //   Constant: '<S251>/Constant1'
    //   Product: '<S251>/Divide'
    //   Sum: '<S251>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g1 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_ma -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S257>/TSamp' incorporates:
  //   DataTypeConversion: '<S257>/Passthrough for tuning'
  //
  //  About '<S257>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_bh;

  // Math: '<S257>/Reciprocal' incorporates:
  //   Constant: '<S257>/Constant'
  //   Sum: '<S257>/SumDen'
  //
  //  About '<S257>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lc +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S257>/Filter Differentiator TF' incorporates:
  //   Constant: '<S257>/Constant'
  //   Product: '<S256>/DOut'
  //   Product: '<S257>/Divide'
  //   Sum: '<S257>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g1
    - (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lc) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al;

  // Sum: '<S256>/Sum' incorporates:
  //   Constant: '<S251>/Constant4'
  //   DataTypeConversion: '<S257>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S257>/Filter Differentiator TF'
  //   Product: '<S256>/POut'
  //   Product: '<S257>/DenCoefOut'
  //   Product: '<S257>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_lv[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_lv[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p + (ROPOD_4Wheel_TdistZMPC_cntr_B.t10 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_nr +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14);

  // Sum: '<S252>/Sum' incorporates:
  //   UnitDelay: '<S252>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ka;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter9'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2923.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);

    // MATLAB Function: '<S261>/MATLAB Function' incorporates:
    //   Constant: '<S261>/Constant'
    //   Gain: '<S239>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter9'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_fv *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_g4,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_jl, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_h);

    // MATLABSystem: '<S5>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2919.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_h = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // End of MATLABSystem: '<S5>/Get Parameter1'
  }

  // Product: '<S239>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[2] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_h;

  // Product: '<S263>/POut' incorporates:
  //   Constant: '<S259>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g3;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2920.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);

    // Gain: '<S259>/Gain2' incorporates:
    //   Constant: '<S259>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter2'
    //   Product: '<S259>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_c;
  }

  // Logic: '<S16>/Logical Operator2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2 =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S263>/Integrator' incorporates:
  //   Product: '<S263>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2 ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_i;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_h *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_l);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t17 = ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c;

  // End of DiscreteIntegrator: '<S263>/Integrator'

  // Product: '<S263>/DOut' incorporates:
  //   Constant: '<S259>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lh;

  // SampleTimeMath: '<S264>/TSamp' incorporates:
  //   Constant: '<S259>/Constant5'
  //
  //  About '<S264>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_j *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_cp;

  // Math: '<S264>/Reciprocal' incorporates:
  //   Constant: '<S264>/Constant'
  //   Sum: '<S264>/SumDen'
  //
  //  About '<S264>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_md1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S264>/Filter Differentiator TF' incorporates:
  //   Constant: '<S264>/Constant'
  //   Product: '<S264>/Divide'
  //   Sum: '<S264>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_dv ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_dv !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2)
  {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_p;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_dv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_md1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb;

  // Sum: '<S263>/Sum' incorporates:
  //   Constant: '<S259>/Constant5'
  //   DiscreteTransferFcn: '<S264>/Filter Differentiator TF'
  //   Product: '<S264>/DenCoefOut'
  //   Product: '<S264>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_mf[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t19 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_mf[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_j +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.t17);

  // DiscreteIntegrator: '<S265>/Integrator' incorporates:
  //   Constant: '<S260>/Constant2'
  //   Product: '<S265>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_mv *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t18 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_e);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26 = ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ol;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S5>/Get Parameter7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2921.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);

    // Gain: '<S260>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter7'

    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_dy *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // MATLABSystem: '<S5>/Get Parameter8'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2922.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);

    // Gain: '<S260>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter8'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_lt *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Product: '<S260>/Divide1' incorporates:
    //   Constant: '<S260>/Constant1'
    //   Product: '<S260>/Divide'
    //   Sum: '<S260>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n0 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_dd -
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_i /
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg) * (1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i);
  }

  // SampleTimeMath: '<S266>/TSamp' incorporates:
  //   DataTypeConversion: '<S266>/Passthrough for tuning'
  //
  //  About '<S266>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_bw;

  // Math: '<S266>/Reciprocal' incorporates:
  //   Constant: '<S266>/Constant'
  //   Sum: '<S266>/SumDen'
  //
  //  About '<S266>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ob +
     ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit);

  // DiscreteTransferFcn: '<S266>/Filter Differentiator TF' incorporates:
  //   Constant: '<S266>/Constant'
  //   Product: '<S265>/DOut'
  //   Product: '<S266>/Divide'
  //   Sum: '<S266>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t33 = ROPOD_4Wheel_TdistZMPC_cntr_B.t18 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n0 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ob) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e;

  // Sum: '<S265>/Sum' incorporates:
  //   Constant: '<S260>/Constant4'
  //   DataTypeConversion: '<S266>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S266>/Filter Differentiator TF'
  //   Product: '<S265>/POut'
  //   Product: '<S266>/DenCoefOut'
  //   Product: '<S266>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_p[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t33 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_p[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t18 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t26);

  // Sum: '<S261>/Sum' incorporates:
  //   UnitDelay: '<S261>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 = ROPOD_4Wheel_TdistZMPC_cntr_B.t27 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du;

  // Sum: '<S42>/Sum1' incorporates:
  //   Gain: '<S42>/Gain'
  //   Gain: '<S42>/Gain1'
  //   Product: '<S243>/Product1'
  //   Product: '<S252>/Product1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.FFxy_mass *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_hk * ROPOD_4Wheel_TdistZMPC_cntr_B.t5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.FFxy_mass *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_e * ROPOD_4Wheel_TdistZMPC_cntr_B.t10;

  // MATLAB Function: '<S80>/MATLAB Function' incorporates:
  //   Constant: '<S45>/Constant'
  //   Constant: '<S80>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ll,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t40, &ROPOD_4Wheel_TdistZMPC_cntr_B.t34);

  // Sum: '<S80>/Sum' incorporates:
  //   DiscreteIntegrator: '<S68>/Discrete-Time Integrator'
  //   UnitDelay: '<S80>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lq;

  // Product: '<S80>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g = ROPOD_4Wheel_TdistZMPC_cntr_B.t40 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;

  // MATLAB Function: '<S78>/MATLAB Function' incorporates:
  //   Constant: '<S45>/Constant'
  //   Constant: '<S78>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bq,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t40, &ROPOD_4Wheel_TdistZMPC_cntr_B.t35);

  // Sum: '<S78>/Sum' incorporates:
  //   UnitDelay: '<S78>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0] +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bt;

  // Product: '<S78>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_og = ROPOD_4Wheel_TdistZMPC_cntr_B.t40 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit;

  // Outputs for Enabled SubSystem: '<S40>/ZMPC_x' incorporates:
  //   EnablePort: '<S46>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE) {
      // InitializeConditions for Delay: '<S46>/Delay'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_j =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition;

      // InitializeConditions for Delay: '<S46>/Delay1'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_d =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition;

      // InitializeConditions for Delay: '<S46>/Delay2'
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           102; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition;
      }

      // End of InitializeConditions for Delay: '<S46>/Delay2'

      // InitializeConditions for Delay: '<S46>/Delay3'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_d =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition;

      // InitializeConditions for Delay: '<S46>/Delay4'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_a =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition;

      // InitializeConditions for Delay: '<S46>/Delay6'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_m =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE = true;
    }

    // Delay: '<S46>/Delay2'
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Delay2_p[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l[0], 102U * sizeof
           (real_T));

    // Update for Delay: '<S46>/Delay2' incorporates:
    //   Constant: '<S46>/Constant16'
    //   Constant: '<S46>/Constant26'
    //   Constant: '<S46>/Constant27'
    //   Constant: '<S46>/Constant28'
    //   Constant: '<S46>/Constant30'
    //   Constant: '<S46>/Constant31'
    //   Constant: '<S46>/Constant32'
    //   Delay: '<S46>/Delay'
    //   Delay: '<S46>/Delay1'
    //   Delay: '<S46>/Delay3'
    //   Delay: '<S46>/Delay4'
    //   Delay: '<S46>/Delay6'
    //   MATLAB Function: '<S46>/Zone MPC'
    //   Sum: '<S45>/Sum'
    //   Sum: '<S45>/Sum1'

    ROPOD_4Wheel_TdistZMPC__ZoneMPC(ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g,
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_og, ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g -
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh, ROPOD_4Wheel_TdistZMPC_cntr_B.a_og -
      ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k,
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_max,
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCx_Fd_min,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Fr_max, ROPOD_4Wheel_TdistZMPC_cntr_P.Fr_min,
      ROPOD_4Wheel_TdistZMPC_cntr_P.xH, ROPOD_4Wheel_TdistZMPC_cntr_P.xF,
      ROPOD_4Wheel_TdistZMPC_cntr_P.xA, ROPOD_4Wheel_TdistZMPC_cntr_P.xW,
      ROPOD_4Wheel_TdistZMPC_cntr_P.xrho,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_a,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_d,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_j,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_d,
      ROPOD_4Wheel_TdistZMPC_cntr_B.Delay2_p,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_m,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.t40,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.t41,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.t42,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_ZoneMPC);

    // Update for Delay: '<S46>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i;

    // Update for Delay: '<S46>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t41;

    // Update for Delay: '<S46>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t40;

    // Update for Delay: '<S46>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;

    // Update for Delay: '<S46>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE) {
      // Disable for Outport: '<S46>/Fx'
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S40>/ZMPC_x'

  // MATLAB Function: '<S84>/MATLAB Function' incorporates:
  //   Constant: '<S45>/Constant'
  //   Constant: '<S84>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_a1,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t42,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k);

  // Sum: '<S84>/Sum' incorporates:
  //   DiscreteIntegrator: '<S69>/Discrete-Time Integrator'
  //   UnitDelay: '<S84>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jz;

  // Product: '<S84>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh;

  // MATLAB Function: '<S82>/MATLAB Function' incorporates:
  //   Constant: '<S45>/Constant'
  //   Constant: '<S82>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_kk,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t42, &ROPOD_4Wheel_TdistZMPC_cntr_B.t40);

  // Sum: '<S82>/Sum' incorporates:
  //   UnitDelay: '<S82>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t41 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1]
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ge;

  // Product: '<S82>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_og = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t41;

  // Outputs for Enabled SubSystem: '<S40>/ZMPC_y' incorporates:
  //   EnablePort: '<S47>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE) {
      // InitializeConditions for Delay: '<S47>/Delay'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition_a;

      // InitializeConditions for Delay: '<S47>/Delay1'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition_g;

      // InitializeConditions for Delay: '<S47>/Delay2'
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           102; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition_o;
      }

      // End of InitializeConditions for Delay: '<S47>/Delay2'

      // InitializeConditions for Delay: '<S47>/Delay3'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition_e;

      // InitializeConditions for Delay: '<S47>/Delay4'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition_m;

      // InitializeConditions for Delay: '<S47>/Delay6'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition_e;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE = true;
    }

    // Delay: '<S47>/Delay2'
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Delay2_p[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[0], 102U * sizeof
           (real_T));

    // Update for Delay: '<S47>/Delay2' incorporates:
    //   Constant: '<S47>/Constant16'
    //   Constant: '<S47>/Constant26'
    //   Constant: '<S47>/Constant27'
    //   Constant: '<S47>/Constant28'
    //   Constant: '<S47>/Constant30'
    //   Constant: '<S47>/Constant31'
    //   Constant: '<S47>/Constant32'
    //   Delay: '<S47>/Delay'
    //   Delay: '<S47>/Delay1'
    //   Delay: '<S47>/Delay3'
    //   Delay: '<S47>/Delay4'
    //   Delay: '<S47>/Delay6'
    //   MATLAB Function: '<S47>/Zone MPC'
    //   Sum: '<S45>/Sum8'
    //   Sum: '<S45>/Sum9'

    ROPOD_4Wheel_TdistZMPC__ZoneMPC(ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g,
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_og, ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g -
      ROPOD_4Wheel_TdistZMPC_cntr_B.Internal, ROPOD_4Wheel_TdistZMPC_cntr_B.a_og
      - ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_a,
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max,
      ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Fr_max, ROPOD_4Wheel_TdistZMPC_cntr_P.Fr_min,
      ROPOD_4Wheel_TdistZMPC_cntr_P.yH, ROPOD_4Wheel_TdistZMPC_cntr_P.yF,
      ROPOD_4Wheel_TdistZMPC_cntr_P.yA, ROPOD_4Wheel_TdistZMPC_cntr_P.yW,
      ROPOD_4Wheel_TdistZMPC_cntr_P.yrho,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE,
      ROPOD_4Wheel_TdistZMPC_cntr_B.Delay2_p,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.t42,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.mv, &ROPOD_4Wheel_TdistZMPC_cntr_B.t23,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.t24,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_ZoneMPC_i);

    // Update for Delay: '<S47>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv;

    // Update for Delay: '<S47>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t23;

    // Update for Delay: '<S47>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42;

    // Update for Delay: '<S47>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;

    // Update for Delay: '<S47>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE) {
      // Disable for Outport: '<S47>/Fx'
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0_c;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S40>/ZMPC_y'

  // MATLAB Function: '<S67>/Calibration1' incorporates:
  //   Memory: '<S67>/Memory2'
  //   Memory: '<S67>/Memory3'
  //   Sum: '<S45>/Sum10'
  //   Sum: '<S45>/Sum4'
  //   Sum: '<S45>/Sum7'

  ROPOD_4Wheel_Tdist_Calibration1(((ROPOD_4Wheel_TdistZMPC_cntr_B.a_m +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_f) + ROPOD_4Wheel_TdistZMPC_cntr_B.a_b) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j2,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_b,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_og, &ROPOD_4Wheel_TdistZMPC_cntr_B.t23,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t42);

  // Outputs for Enabled SubSystem: '<S40>/Angle controller' incorporates:
  //   EnablePort: '<S44>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE) {
      // InitializeConditions for DiscreteIntegrator: '<S44>/Discrete-Time Integrator' 
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k =
        ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC;

      // InitializeConditions for DiscreteIntegrator: '<S44>/Discrete-Time Integrator1' 
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_IC;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE = true;
    }

    // Sum: '<S44>/Sum2' incorporates:
    //   Constant: '<S44>/Ref_speed'
    //   Gain: '<S45>/Gain2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Ref_speed_Value -
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_m *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_og;

    // Sum: '<S44>/Sum' incorporates:
    //   DiscreteIntegrator: '<S44>/Discrete-Time Integrator1'
    //   Gain: '<S44>/D'

    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m = ROPOD_4Wheel_TdistZMPC_cntr_P.D_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx -
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE;

    // Sum: '<S44>/Sum1' incorporates:
    //   DiscreteIntegrator: '<S44>/Discrete-Time Integrator'
    //   Gain: '<S44>/P'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = (ROPOD_4Wheel_TdistZMPC_cntr_P.P_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx +
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_m;

    // Update for DiscreteIntegrator: '<S44>/Discrete-Time Integrator' incorporates:
    //   Gain: '<S44>/I'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.I_Gain * ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx *
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainval;

    // Update for DiscreteIntegrator: '<S44>/Discrete-Time Integrator1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_gainval *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_m;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE) {
      // Disable for Outport: '<S44>/u_N'
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = ROPOD_4Wheel_TdistZMPC_cntr_P.u_N_Y0;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S40>/Angle controller'

  // Switch: '<S42>/Switch' incorporates:
  //   Constant: '<S42>/Constant'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_k;
  }

  // End of Switch: '<S42>/Switch'

  // Sum: '<S16>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i;

  // Switch: '<S42>/Switch1' incorporates:
  //   Constant: '<S42>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold_h) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_or;
  }

  // End of Switch: '<S42>/Switch1'

  // Sum: '<S16>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv;

  // Switch: '<S42>/Switch2' incorporates:
  //   Constant: '<S42>/Constant2'
  //   Gain: '<S42>/Gain2'
  //   Product: '<S261>/Product1'
  //   Sum: '<S236>/Diff'
  //   Sum: '<S42>/Sum1'
  //   UnitDelay: '<S236>/UD'
  //
  //  Block description for '<S236>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S236>/UD':
  //
  //   Store in Global RAM

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_i) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_i;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d -
       ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2]) *
      ROPOD_4Wheel_TdistZMPC_cntr_P.FFtheta_intia +
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_jl * ROPOD_4Wheel_TdistZMPC_cntr_B.t18;
  }

  // End of Switch: '<S42>/Switch2'

  // Sum: '<S16>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.g_i +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2215.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.max_current);

    // Gain: '<S43>/Gain3' incorporates:
    //   MATLABSystem: '<S7>/Get Parameter2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_m = 1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal' incorporates:
  //   Constant: '<S1>/Constant'

  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.K[0], 0, sizeof(int16_T) << 6U);
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.K[ROPOD_4Wheel_TdistZMPC_cntr_B.i +
      (ROPOD_4Wheel_TdistZMPC_cntr_B.i << 3)] = 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ci[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
        == 0.0) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.K[ROPOD_4Wheel_TdistZMPC_cntr_B.i +
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i << 3)] = 1000;
    }
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i0 <
         8; ROPOD_4Wheel_TdistZMPC_cntr_B.i0++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.P[ROPOD_4Wheel_TdistZMPC_cntr_B.i +
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 << 3)] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i1 < 8;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i1++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.P[ROPOD_4Wheel_TdistZMPC_cntr_B.i +
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 << 3)] += (real_T)
          (ROPOD_4Wheel_TdistZMPC_cntr_B.K[(ROPOD_4Wheel_TdistZMPC_cntr_B.i << 3)
           + ROPOD_4Wheel_TdistZMPC_cntr_B.i1] *
           ROPOD_4Wheel_TdistZMPC_cntr_B.K[(ROPOD_4Wheel_TdistZMPC_cntr_B.i0 <<
            3) + ROPOD_4Wheel_TdistZMPC_cntr_B.i1]);
      }
    }
  }

  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.f[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[8] = ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_m *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_m * 8.0;
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.Linv[0], 0, 81U * sizeof(real_T));
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Linv[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 9 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i] = 1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.P
      [(ROPOD_4Wheel_TdistZMPC_cntr_B.i << 3) + ROPOD_4Wheel_TdistZMPC_cntr_B.i];
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.Linv[80] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.dv0[8] = -1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.dv0[17] = 0.0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.dv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      -ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_m;
    ROPOD_4Wheel_TdistZMPC_cntr_B.dv0[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 9] =
      -ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_m;

    // MATLAB Function: '<S43>/Gl_matrices'
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i0 <
         3; ROPOD_4Wheel_TdistZMPC_cntr_B.i0++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_tmp =
        ROPOD_4Wheel_TdistZMPC_cntr_B.i0 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i;
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_tmp]
        = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i1 < 15;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i1++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_tmp]
          = ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1 + ROPOD_4Wheel_TdistZMPC_cntr_B.i0] *
          (real_T)b[15 * ROPOD_4Wheel_TdistZMPC_cntr_B.i +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1] +
          ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i + ROPOD_4Wheel_TdistZMPC_cntr_B.i0];
      }
    }
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i]
      = ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[1 + 3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i + 1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[2 + 3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i + 2];
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[24] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[25] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[26] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[2];
  ROPOD_4Wheel_Tdis_mpcqpsolver_p(ROPOD_4Wheel_TdistZMPC_cntr_B.Linv,
    ROPOD_4Wheel_TdistZMPC_cntr_B.f, ROPOD_4Wheel_TdistZMPC_cntr_B.dv0,
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr, ROPOD_4Wheel_TdistZMPC_cntr_B.x);

  // MATLAB Function: '<S19>/MATLAB Function' incorporates:
  //   Constant: '<S19>/Constant'
  //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
  //   SignalConversion: '<S293>/TmpSignal ConversionAt SFunction Inport3'

  ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx = ROPOD_4Wheel_TdistZMPC_cntr_B.x[0] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[1] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_m = (ROPOD_4Wheel_TdistZMPC_cntr_B.x[1] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[0] /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 / (2.0 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1));
  if (sqrt(ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx *
           ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx +
           ROPOD_4Wheel_TdistZMPC_cntr_B.a_m * ROPOD_4Wheel_TdistZMPC_cntr_B.a_m)
      > 30.0) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b5 - 1.0) * fabs(sin
      (ROPOD_4Wheel_Tdis_rt_atan2d_snf(ROPOD_4Wheel_TdistZMPC_cntr_B.a_m,
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx))) + 1.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = 1.0;
  }

  // MATLAB Function: '<S19>/MATLAB Function1' incorporates:
  //   Constant: '<S19>/Constant'
  //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[2],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[3],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b5,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t38, &ROPOD_4Wheel_TdistZMPC_cntr_B.t39);

  // MATLAB Function: '<S19>/MATLAB Function2' incorporates:
  //   Constant: '<S19>/Constant'
  //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[4],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[5],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b5,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t49, &ROPOD_4Wheel_TdistZMPC_cntr_B.t50);

  // MATLAB Function: '<S19>/MATLAB Function3' incorporates:
  //   Constant: '<S19>/Constant'
  //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[6],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[7],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b5,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1);

  // MATLAB Function: '<S289>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S289>/Constant'
  //   Gain: '<S18>/Gain2'

  ROPOD_4Wheel_T_MATLABFunction_m(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_dyx *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ea,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_m2,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_f, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_b);

  // Switch: '<S24>/Switch1' incorporates:
  //   Constant: '<S24>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_m[0];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[29];
  }

  // Sum: '<S18>/Sum' incorporates:
  //   Constant: '<S18>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[0] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

  // Switch: '<S24>/Switch1' incorporates:
  //   Constant: '<S24>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_m[1];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_f[29];
  }

  // Sum: '<S18>/Sum' incorporates:
  //   Constant: '<S18>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[1] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

  // Switch: '<S24>/Switch1' incorporates:
  //   Constant: '<S24>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_m[2];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_n[29];
  }

  // Sum: '<S18>/Sum' incorporates:
  //   Constant: '<S18>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[2] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

  // Switch: '<S24>/Switch1' incorporates:
  //   Constant: '<S24>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_m[3];
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[29];
  }

  // Sum: '<S18>/Sum' incorporates:
  //   Constant: '<S18>/ref'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[3] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

  // Sum: '<S289>/Sum' incorporates:
  //   UnitDelay: '<S289>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_az;

  // MATLAB Function: '<S285>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S285>/Constant'
  //   Gain: '<S18>/Gain3'

  ROPOD_4Wheel_T_MATLABFunction_m(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_k *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ea,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pf,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_og);

  // Sum: '<S285>/Sum' incorporates:
  //   UnitDelay: '<S285>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t25 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m0;

  // MATLAB Function: '<S287>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S287>/Constant'
  //   Gain: '<S18>/Gain4'

  ROPOD_4Wheel_T_MATLABFunction_m(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain_b *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ea,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_d4,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx);

  // Sum: '<S287>/Sum' incorporates:
  //   UnitDelay: '<S287>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t30 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fz;

  // MATLAB Function: '<S291>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S291>/Constant'
  //   Gain: '<S18>/Gain5'

  ROPOD_4Wheel_T_MATLABFunction_m(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ea,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ez,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m);

  // Sum: '<S291>/Sum' incorporates:
  //   UnitDelay: '<S291>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t31 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io;

  // Switch: '<S23>/Switch1' incorporates:
  //   Constant: '<S23>/Movinf around SW axis center'
  //   Gain: '<S30>/Gain1'
  //   Gain: '<S30>/Gain2'
  //   Gain: '<S30>/Gain3'
  //   Logic: '<S18>/Logical Operator'
  //   Switch: '<S18>/Switch1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_P.MovinfaroundSWaxiscenter_Value[0],
           sizeof(real_T) << 3U);
  } else {
    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0)) {
      // Gain: '<S18>/damping' incorporates:
      //   Product: '<S289>/Product1'
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_f = ROPOD_4Wheel_TdistZMPC_cntr_B.g_f *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t24 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping_Gain;

      // Gain: '<S18>/Gain' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain_e =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/Gain1' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c_d =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/damping1' incorporates:
      //   Product: '<S285>/Product1'
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_f = ROPOD_4Wheel_TdistZMPC_cntr_B.g_i *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t25 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping1_Gain;

      // Gain: '<S18>/Gain6' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/Gain7' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain7 =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain7_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/damping2' incorporates:
      //   Product: '<S287>/Product1'
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_f = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t30 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping2_Gain;

      // Gain: '<S18>/Gain8' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain8_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/Gain9' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain9 =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain9_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/damping3' incorporates:
      //   Product: '<S291>/Product1'
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_f = ROPOD_4Wheel_TdistZMPC_cntr_B.g_g *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t31 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping3_Gain;

      // Switch: '<S18>/Switch1' incorporates:
      //   Gain: '<S18>/Gain10'
      //   Gain: '<S18>/Gain11'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain_e;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[1] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c_d;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[3] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain7;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[4] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[5] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain9;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[6] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain10_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[7] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain11_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;
    } else {
      // Switch: '<S18>/Switch1' incorporates:
      //   Constant: '<S18>/Constant1'

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           8; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value;
      }
    }

    // Logic: '<S19>/Logical Operator'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f =
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0));

    // Logic: '<S15>/Logical Operator'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p =
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
       (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0));

    // Switch: '<S297>/Switch1' incorporates:
    //   Constant: '<S297>/Constant1'
    //   Logic: '<S297>/Logical Operator'
    //   Product: '<S309>/Product1'
    //   Product: '<S318>/Product1'
    //   Product: '<S327>/Product1'
    //   Product: '<S336>/Product1'
    //   Product: '<S345>/Product1'
    //   Product: '<S354>/Product1'
    //   Product: '<S363>/Product1'
    //   Product: '<S372>/Product1'

    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0)) {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           8; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
          ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_o;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_n * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_k;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_pd *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_j * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_c * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_d;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_o *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_ac;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_h *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_gd;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_p * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4;
    }

    // End of Switch: '<S297>/Switch1'

    // Switch: '<S19>/Switch1' incorporates:
    //   MATLAB Function: '<S19>/MATLAB Function'
    //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'

    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.x[0] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.x[1] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.t38;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[3] = ROPOD_4Wheel_TdistZMPC_cntr_B.t39;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[4] = ROPOD_4Wheel_TdistZMPC_cntr_B.t49;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[5] = ROPOD_4Wheel_TdistZMPC_cntr_B.t50;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[6] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[7] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1;

    // Sum: '<S1>/Add'
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
         8; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
      // Switch: '<S15>/Switch1' incorporates:
      //   Constant: '<S15>/Constant1'
      //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f =
          ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_p;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f =
          ROPOD_4Wheel_TdistZMPC_cntr_B.x[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
      }

      // End of Switch: '<S15>/Switch1'

      // Switch: '<S19>/Switch1' incorporates:
      //   Constant: '<S19>/Constant1'

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t32 =
          ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t32 =
          ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_h;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
        ((ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          + ROPOD_4Wheel_TdistZMPC_cntr_B.g_f) +
         ROPOD_4Wheel_TdistZMPC_cntr_B.t32) +
        ROPOD_4Wheel_TdistZMPC_cntr_B.Switch2_m[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
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

  // End of Switch: '<S23>/Switch1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = false;
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = true;
    if (!(ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.SampleTime ==
          ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p = false;
    }

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_p) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f = true;
    }

    if (!ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.SampleTime =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.get_parameter
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);

    // DataTypeConversion: '<S25>/Data Type Conversion6' incorporates:
    //   Constant: '<S25>/Constant3'

    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_ENABLE1);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i,
        65536.0);
    }

    // DataTypeConversion: '<S25>/Data Type Conversion4' incorporates:
    //   MATLABSystem: '<S7>/Get Parameter'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t38) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t38)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t38,
        65536.0);
    }

    // S-Function (sfix_bitop): '<S25>/Bitwise Operator1' incorporates:
    //   DataTypeConversion: '<S25>/Data Type Conversion4'
    //   DataTypeConversion: '<S25>/Data Type Conversion6'

    ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator1 = (uint16_T)
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.g_i < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.g_i : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) & (ROPOD_4Wheel_TdistZMPC_cntr_B.t38 <
        0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_TdistZMPC_cntr_B.t38 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t38));

    // DataTypeConversion: '<S25>/Data Type Conversion7' incorporates:
    //   Constant: '<S25>/Constant4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_ENABLE2);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i,
        65536.0);
    }

    // DataTypeConversion: '<S25>/Data Type Conversion5' incorporates:
    //   Gain: '<S25>/shift'
    //   MATLABSystem: '<S7>/Get Parameter'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.shift_Gain *
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t38) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t38)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t38,
        65536.0);
    }

    // S-Function (sfix_bitop): '<S25>/Bitwise Operator2' incorporates:
    //   DataTypeConversion: '<S25>/Data Type Conversion5'
    //   DataTypeConversion: '<S25>/Data Type Conversion7'

    ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator2 = (uint16_T)
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.g_i < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.g_i : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) & (ROPOD_4Wheel_TdistZMPC_cntr_B.t38 <
        0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_TdistZMPC_cntr_B.t38 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t38));

    // Gain: '<S25>/Gain'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain_m *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_m *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // Constant: '<S25>/Constant'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jh;

  // Constant: '<S25>/Constant1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_gx;

  // Constant: '<S25>/Constant10'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant10_Value;

  // Constant: '<S25>/Constant2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_m =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ks;

  // Constant: '<S25>/Constant6'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2_m =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value_o;

  // Constant: '<S25>/Constant7'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant7_Value;

  // Constant: '<S25>/Constant8'
  ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_k =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant8_Value;

  // Constant: '<S25>/Constant9'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command2_f =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant9_Value;

  // Switch: '<S23>/Switch' incorporates:
  //   Constant: '<S23>/Constant13'
  //   Constant: '<S23>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_MODE_VELOCITY;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_MODE_TORQUE;
  }

  // End of Switch: '<S23>/Switch'

  // DataTypeConversion: '<S25>/Data Type Conversion2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = floor(ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
  if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i) || rtIsInf
      (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.g_i,
      65536.0);
  }

  // DataTypeConversion: '<S25>/Data Type Conversion3' incorporates:
  //   Constant: '<S25>/Constant11'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = 0.0 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_USE_TS;
  if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t38)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t38,
      65536.0);
  }

  // Gain: '<S25>/Gain10' incorporates:
  //   DataTypeConversion: '<S25>/Data Type Conversion2'
  //   DataTypeConversion: '<S25>/Data Type Conversion3'
  //   S-Function (sfix_bitop): '<S25>/Bitwise Operator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.command1 = (real_T)(uint16_T)((uint16_T)
    ((uint16_T)(ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator1 |
                ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator2) | (uint16_T)
     (ROPOD_4Wheel_TdistZMPC_cntr_B.g_i < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.g_i : (int32_T)(uint16_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i)) | (uint16_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.t38) * ((real_T)
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain10_Gain_o * 3.0517578125E-5);
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S25>/Gain11'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain11_Gain_c *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain12'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain12_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain13'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain13_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain15'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain15_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain16'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain16_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain17'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain17_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // Gain: '<S25>/Gain8'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command1_b =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain8_Gain_g *
    ROPOD_4Wheel_TdistZMPC_cntr_B.command1;

  // Gain: '<S25>/Gain14'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command1_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain14_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.command1_b;

  // Gain: '<S25>/Gain18'
  ROPOD_4Wheel_TdistZMPC_cntr_B.command1_pn =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Gain18_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.command1_p;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S25>/Gain19'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain19_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_l1 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain20'
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = 1.5 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Taucompfactor *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_k2 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;

    // Gain: '<S25>/Gain5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_pw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain_n *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;

    // Gain: '<S25>/Gain6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain_c *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;

    // Gain: '<S25>/Gain7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain7_Gain_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;

    // Gain: '<S25>/Gain9'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain9_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // Gain: '<S25>/sign_convention'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[1];

  // Gain: '<S25>/sign_convention1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_m =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention1_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[3];

  // Gain: '<S25>/sign_convention2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_g =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention2_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[5];

  // Gain: '<S25>/sign_convention3'
  ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_l =
    ROPOD_4Wheel_TdistZMPC_cntr_P.sign_convention3_Gain *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[7];

  // Update for UnitDelay: '<S80>/Unit Delay' incorporates:
  //   DiscreteIntegrator: '<S68>/Discrete-Time Integrator'
  //   Product: '<S80>/Product4'
  //   Sum: '<S80>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lq =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t34 * ROPOD_4Wheel_TdistZMPC_cntr_B.t2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE;

  // Update for UnitDelay: '<S84>/Unit Delay' incorporates:
  //   DiscreteIntegrator: '<S69>/Discrete-Time Integrator'
  //   Product: '<S84>/Product4'
  //   Sum: '<S84>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e;

  // MATLAB Function: '<S45>/Force_per_sensor' incorporates:
  //   Constant: '<S45>/Constant1'
  //   Constant: '<S45>/Constant2'
  //   Constant: '<S45>/Constant3'
  //   Constant: '<S45>/Constant4'
  //   SignalConversion: '<S52>/TmpSignal ConversionAt SFunction Inport1'
  //   SignalConversion: '<S52>/TmpSignal ConversionAt SFunction Inport2'
  //   SignalConversion: '<S52>/TmpSignal ConversionAt SFunction Inport3'
  //   SignalConversion: '<S52>/TmpSignal ConversionAt SFunction Inport4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_m;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[0] * 1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[1] * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[2] * -0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[3] * -1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[0] * 1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[1] * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[2] * -0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm[3] * -1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[0] * 1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[1] * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[2] * -0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp[3] * -1.5 * 0.164;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5 +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[1] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p0 +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[2] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym[3] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd +
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a;
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

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_n / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0] = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_n / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ap / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1] = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ap / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[2] / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[2] / 2.0);

  // BusAssignment: '<S2>/Bus Assignment' incorporates:
  //   Constant: '<S2>/Constant'
  //   Constant: '<S378>/Constant'
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.X =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f2;

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1;

  // BusAssignment: '<S2>/Bus Assignment' incorporates:
  //   MATLABSystem: '<S2>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.W =
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t38 * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j;

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g = ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0]
    * ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_1;

  // BusAssignment: '<S2>/Bus Assignment' incorporates:
  //   Constant: '<S2>/Constant3'
  //   Constant: '<S2>/Constant4'
  //   Constant: '<S2>/Constant5'
  //   MATLABSystem: '<S2>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.X =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1 + ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.Y =
    -ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Sum1_lh_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_i * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j
    + ROPOD_4Wheel_TdistZMPC_cntr_B.t38 * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1;
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
    // RelationalOperator: '<S38>/Compare' incorporates:
    //   Constant: '<S38>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k !=
       ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant1_const);

    // Outputs for Atomic SubSystem: '<S2>/Publish'
    // MATLABSystem: '<S379>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_1896.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment);

    // End of Outputs for SubSystem: '<S2>/Publish'
  }

  // End of RateTransition: '<S2>/Rate Transition'

  // BusAssignment: '<S396>/Bus Assignment'
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k.Data =
    ROPOD_4Wheel_TdistZMPC_cntr_B.state;

  // RateTransition: '<S396>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish4'
    // MATLABSystem: '<S390>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9627.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k);

    // End of Outputs for SubSystem: '<S9>/Publish4'
  }

  // End of RateTransition: '<S396>/Rate Transition'

  // BusAssignment: '<S393>/Bus Assignment' incorporates:
  //   Constant: '<S399>/Constant'
  //   MATLAB Function: '<S45>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.Y =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp);

  // RateTransition: '<S393>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish'
    // MATLABSystem: '<S386>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9614.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish'
  }

  // End of RateTransition: '<S393>/Rate Transition'

  // BusAssignment: '<S392>/Bus Assignment' incorporates:
  //   Constant: '<S398>/Constant'
  //   MATLAB Function: '<S45>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_j;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.X =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp);

  // RateTransition: '<S392>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish1'
    // MATLABSystem: '<S387>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9624.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish1'
  }

  // End of RateTransition: '<S392>/Rate Transition'

  // BusAssignment: '<S394>/Bus Assignment' incorporates:
  //   Constant: '<S400>/Constant'
  //   MATLAB Function: '<S45>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_i;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.X =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm);

  // RateTransition: '<S394>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish2'
    // MATLABSystem: '<S388>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9625.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish2'
  }

  // End of RateTransition: '<S394>/Rate Transition'

  // BusAssignment: '<S395>/Bus Assignment' incorporates:
  //   Constant: '<S401>/Constant'
  //   MATLAB Function: '<S45>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_d;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.Y =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym);

  // RateTransition: '<S395>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish3'
    // MATLABSystem: '<S389>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9626.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish3'

    // BusAssignment: '<S397>/Bus Assignment'
    ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_h.Data =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k;

    // Outputs for Atomic SubSystem: '<S9>/Publish5'
    // MATLABSystem: '<S391>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9643.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_h);

    // End of Outputs for SubSystem: '<S9>/Publish5'
  }

  // End of RateTransition: '<S395>/Rate Transition'

  // Update for UnitDelay: '<S110>/Unit Delay' incorporates:
  //   Product: '<S110>/Product4'
  //   Sum: '<S110>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_h_l * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jj +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0;

  // Update for UnitDelay: '<S108>/Unit Delay' incorporates:
  //   Product: '<S108>/Product4'
  //   Sum: '<S108>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_l_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ez +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1;

  // Update for UnitDelay: '<S112>/Unit Delay' incorporates:
  //   Product: '<S112>/Product4'
  //   Sum: '<S112>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nu * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_om +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2;

  // Update for UnitDelay: '<S114>/Unit Delay' incorporates:
  //   Product: '<S114>/Product4'
  //   Sum: '<S114>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m0 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3;

  // Update for UnitDelay: '<S116>/Unit Delay' incorporates:
  //   Product: '<S116>/Product4'
  //   Sum: '<S116>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_gm * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gg +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4;

  // Update for UnitDelay: '<S118>/Unit Delay' incorporates:
  //   Product: '<S118>/Product4'
  //   Sum: '<S118>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lh =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ck * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_5;

  // Update for UnitDelay: '<S120>/Unit Delay' incorporates:
  //   Product: '<S120>/Product4'
  //   Sum: '<S120>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lr =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_iy * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_6;

  // Update for UnitDelay: '<S122>/Unit Delay' incorporates:
  //   Product: '<S122>/Product4'
  //   Sum: '<S122>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iy +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_7;

  // Update for Memory: '<S60>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_ft;

  // Update for Memory: '<S60>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ao;

  // Update for UnitDelay: '<S142>/Unit Delay' incorporates:
  //   Product: '<S142>/Product4'
  //   Sum: '<S142>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_e * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_od +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_0;

  // Update for UnitDelay: '<S140>/Unit Delay' incorporates:
  //   Product: '<S140>/Product4'
  //   Sum: '<S140>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev2
    + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_1;

  // Update for UnitDelay: '<S144>/Unit Delay' incorporates:
  //   Product: '<S144>/Product4'
  //   Sum: '<S144>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_2;

  // Update for UnitDelay: '<S146>/Unit Delay' incorporates:
  //   Product: '<S146>/Product4'
  //   Sum: '<S146>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_my +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_3;

  // Update for UnitDelay: '<S148>/Unit Delay' incorporates:
  //   Product: '<S148>/Product4'
  //   Sum: '<S148>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_an * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_4;

  // Update for UnitDelay: '<S150>/Unit Delay' incorporates:
  //   Product: '<S150>/Product4'
  //   Sum: '<S150>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_5;

  // Update for UnitDelay: '<S152>/Unit Delay' incorporates:
  //   Product: '<S152>/Product4'
  //   Sum: '<S152>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mz +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_6;

  // Update for UnitDelay: '<S154>/Unit Delay' incorporates:
  //   Product: '<S154>/Product4'
  //   Sum: '<S154>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lk +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_7;

  // Update for Memory: '<S63>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_h;

  // Update for Memory: '<S63>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_a;

  // Update for Memory: '<S61>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_k;

  // Update for Memory: '<S61>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l;

  // Update for Memory: '<S64>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_g;

  // Update for Memory: '<S64>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_ed =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab;

  // Update for UnitDelay: '<S174>/Unit Delay' incorporates:
  //   Product: '<S174>/Product4'
  //   Sum: '<S174>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_l * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gx +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_0;

  // Update for UnitDelay: '<S172>/Unit Delay' incorporates:
  //   Product: '<S172>/Product4'
  //   Sum: '<S172>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_er =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_f * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ho +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_1;

  // Update for UnitDelay: '<S176>/Unit Delay' incorporates:
  //   Product: '<S176>/Product4'
  //   Sum: '<S176>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ff =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_e1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_2;

  // Update for UnitDelay: '<S178>/Unit Delay' incorporates:
  //   Product: '<S178>/Product4'
  //   Sum: '<S178>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hk +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_3;

  // Update for UnitDelay: '<S180>/Unit Delay' incorporates:
  //   Product: '<S180>/Product4'
  //   Sum: '<S180>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fe =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_f +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_4;

  // Update for UnitDelay: '<S182>/Unit Delay' incorporates:
  //   Product: '<S182>/Product4'
  //   Sum: '<S182>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ii =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_p * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lf +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_5;

  // Update for UnitDelay: '<S184>/Unit Delay' incorporates:
  //   Product: '<S184>/Product4'
  //   Sum: '<S184>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_6;

  // Update for UnitDelay: '<S186>/Unit Delay' incorporates:
  //   Product: '<S186>/Product4'
  //   Sum: '<S186>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_7;

  // Update for Memory: '<S59>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_hm;

  // Update for Memory: '<S59>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_f;

  // Update for UnitDelay: '<S206>/Unit Delay' incorporates:
  //   Product: '<S206>/Product4'
  //   Sum: '<S206>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_il =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_n * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_0;

  // Update for UnitDelay: '<S204>/Unit Delay' incorporates:
  //   Product: '<S204>/Product4'
  //   Sum: '<S204>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_1;

  // Update for UnitDelay: '<S208>/Unit Delay' incorporates:
  //   Product: '<S208>/Product4'
  //   Sum: '<S208>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ej =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_il * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ng +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_2;

  // Update for UnitDelay: '<S210>/Unit Delay' incorporates:
  //   Product: '<S210>/Product4'
  //   Sum: '<S210>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_l0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_3;

  // Update for UnitDelay: '<S212>/Unit Delay' incorporates:
  //   Product: '<S212>/Product4'
  //   Sum: '<S212>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gf +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_4;

  // Update for UnitDelay: '<S214>/Unit Delay' incorporates:
  //   Product: '<S214>/Product4'
  //   Sum: '<S214>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_5;

  // Update for UnitDelay: '<S216>/Unit Delay' incorporates:
  //   Product: '<S216>/Product4'
  //   Sum: '<S216>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_al =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_6;

  // Update for UnitDelay: '<S218>/Unit Delay' incorporates:
  //   Product: '<S218>/Product4'
  //   Sum: '<S218>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jx =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_js +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_7;

  // Update for Memory: '<S65>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_e;

  // Update for Memory: '<S65>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m;

  // Update for DiscreteStateSpace: '<S53>/Internal'
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

  // Update for Memory: '<S62>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk;

  // Update for Memory: '<S62>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_gi =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h;

  // Update for Memory: '<S66>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_f;

  // Update for Memory: '<S66>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out;

  // Update for DiscreteStateSpace: '<S54>/Internal'
  {
    real_T xnew[2];
    xnew[0] = (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A_m[0])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[0]
      + (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A_m[1])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[1];
    xnew[0] += ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_B_j*
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum6;
    xnew[1] = (ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_A_m[2])*
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[0];
    (void) memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[0], xnew,
                  sizeof(real_T)*2);
  }

  // Update for Delay: '<S270>/Enabled Delay'
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Compare_tmp;
  }

  // End of Update for Delay: '<S270>/Enabled Delay'

  // Update for UnitDelay: '<S271>/Delay Input2'
  //
  //  Block description for '<S271>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_p3;

  // Update for UnitDelay: '<S272>/Delay Input2'
  //
  //  Block description for '<S272>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;

  // Update for UnitDelay: '<S273>/Delay Input2'
  //
  //  Block description for '<S273>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit_m;

  // Update for DiscreteIntegrator: '<S311>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S312>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp;

  // Update for DiscreteIntegrator: '<S313>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t33_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.POut;

  // Update for DiscreteTransferFcn: '<S314>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_l;

  // Update for UnitDelay: '<S309>/Unit Delay' incorporates:
  //   Product: '<S309>/Product4'
  //   Sum: '<S309>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_o * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_k +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut;

  // Update for DiscreteIntegrator: '<S320>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t42_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_j;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_m = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S321>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f;

  // Update for DiscreteIntegrator: '<S322>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.POut_j;

  // Update for DiscreteTransferFcn: '<S323>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_m;

  // Update for UnitDelay: '<S318>/Unit Delay' incorporates:
  //   Product: '<S318>/Product4'
  //   Sum: '<S318>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_a * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_g +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_kt;

  // Update for DiscreteIntegrator: '<S329>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_k0_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_k0;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_b = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S330>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_h;

  // Update for DiscreteIntegrator: '<S331>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_h_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_h;

  // Update for DiscreteTransferFcn: '<S332>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_e;

  // Update for UnitDelay: '<S327>/Unit Delay' incorporates:
  //   Product: '<S327>/Product4'
  //   Sum: '<S327>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_j * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_f +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_a;

  // Update for DiscreteIntegrator: '<S338>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_i;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_l = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S339>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_hp;

  // Update for DiscreteIntegrator: '<S340>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_k_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_k;

  // Update for DiscreteTransferFcn: '<S341>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_a;

  // Update for UnitDelay: '<S336>/Unit Delay' incorporates:
  //   Product: '<S336>/Product4'
  //   Sum: '<S336>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ev =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_k * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_d +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_m;

  // Update for DiscreteIntegrator: '<S347>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_mm_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_mm;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S348>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c;

  // Update for DiscreteIntegrator: '<S349>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_py =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_c_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c;

  // Update for DiscreteTransferFcn: '<S350>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_j;

  // Update for UnitDelay: '<S345>/Unit Delay' incorporates:
  //   Product: '<S345>/Product4'
  //   Sum: '<S345>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_ac +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j;

  // Update for DiscreteIntegrator: '<S356>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dj =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S357>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k;

  // Update for DiscreteIntegrator: '<S358>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_fd =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e;

  // Update for DiscreteTransferFcn: '<S359>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_kz;

  // Update for UnitDelay: '<S354>/Unit Delay' incorporates:
  //   Product: '<S354>/Product4'
  //   Sum: '<S354>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ez =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_l * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_gd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr;

  // Update for DiscreteIntegrator: '<S365>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_f = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S366>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_au;

  // Update for DiscreteIntegrator: '<S367>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ik =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n;

  // Update for DiscreteTransferFcn: '<S368>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f3;

  // Update for UnitDelay: '<S363>/Unit Delay' incorporates:
  //   Product: '<S363>/Product4'
  //   Sum: '<S363>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lu =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c;

  // Update for DiscreteIntegrator: '<S374>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S375>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_i;

  // Update for DiscreteIntegrator: '<S376>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_d_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d;

  // Update for DiscreteTransferFcn: '<S377>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

  // Update for UnitDelay: '<S372>/Unit Delay' incorporates:
  //   Product: '<S372>/Product4'
  //   Sum: '<S372>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

  // Update for DiscreteIntegrator: '<S245>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t4;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_om = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l;

  // Update for DiscreteTransferFcn: '<S246>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6;

  // Update for DiscreteIntegrator: '<S247>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd + ROPOD_4Wheel_TdistZMPC_cntr_B.t16;

  // Update for DiscreteTransferFcn: '<S248>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;

  // Update for UnitDelay: '<S243>/Unit Delay' incorporates:
  //   Product: '<S243>/Product4'
  //   Sum: '<S243>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i3 * ROPOD_4Wheel_TdistZMPC_cntr_B.t5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8;

  // Update for DiscreteIntegrator: '<S254>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator1;

  // Update for DiscreteTransferFcn: '<S255>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11;

  // Update for DiscreteIntegrator: '<S256>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t14;

  // Update for DiscreteTransferFcn: '<S257>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

  // Update for UnitDelay: '<S252>/Unit Delay' incorporates:
  //   Product: '<S252>/Product4'
  //   Sum: '<S252>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ka =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ik * ROPOD_4Wheel_TdistZMPC_cntr_B.t10 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

  // Update for DiscreteIntegrator: '<S263>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t17;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2;

  // Update for DiscreteTransferFcn: '<S264>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19;

  // Update for DiscreteIntegrator: '<S265>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ol =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t26;

  // Update for DiscreteTransferFcn: '<S266>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t33;

  // Update for UnitDelay: '<S261>/Unit Delay' incorporates:
  //   Product: '<S261>/Product4'
  //   Sum: '<S261>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_h * ROPOD_4Wheel_TdistZMPC_cntr_B.t18 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;

  // Update for DiscreteIntegrator: '<S68>/Discrete-Time Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE +=
    ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_b *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0];

  // Update for UnitDelay: '<S78>/Unit Delay' incorporates:
  //   Product: '<S78>/Product4'
  //   Sum: '<S78>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bt =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t35 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.deltafalllimit +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[0];

  // Update for DiscreteIntegrator: '<S69>/Discrete-Time Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e +=
    ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_k *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1];

  // Update for UnitDelay: '<S82>/Unit Delay' incorporates:
  //   Product: '<S82>/Product4'
  //   Sum: '<S82>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ge =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40 * ROPOD_4Wheel_TdistZMPC_cntr_B.t41 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1];

  // Update for Memory: '<S67>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t23;

  // Update for Memory: '<S67>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t42;

  // Update for UnitDelay: '<S289>/Unit Delay' incorporates:
  //   Product: '<S289>/Product4'
  //   Sum: '<S289>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_az =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_b * ROPOD_4Wheel_TdistZMPC_cntr_B.t24 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0;

  // Update for UnitDelay: '<S285>/Unit Delay' incorporates:
  //   Product: '<S285>/Product4'
  //   Sum: '<S285>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_og * ROPOD_4Wheel_TdistZMPC_cntr_B.t25 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;

  // Update for UnitDelay: '<S287>/Unit Delay' incorporates:
  //   Product: '<S287>/Product4'
  //   Sum: '<S287>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx * ROPOD_4Wheel_TdistZMPC_cntr_B.t30 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2;

  // Update for UnitDelay: '<S291>/Unit Delay' incorporates:
  //   Product: '<S291>/Product4'
  //   Sum: '<S291>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m * ROPOD_4Wheel_TdistZMPC_cntr_B.t31 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;

  // MATLAB Function: '<S11>/pos_rot_matrix' incorporates:
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.g_i = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t38;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[6] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.t38;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[4] = ROPOD_4Wheel_TdistZMPC_cntr_B.g_i;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[7] = 0.0;

  // Update for UnitDelay: '<S236>/UD'
  //
  //  Block description for '<S236>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_0;

  // MATLAB Function: '<S11>/pos_rot_matrix'
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[2] = 0.0;

  // Update for UnitDelay: '<S236>/UD'
  //
  //  Block description for '<S236>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_idx_1;

  // MATLAB Function: '<S11>/pos_rot_matrix'
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[5] = 0.0;

  // Update for UnitDelay: '<S236>/UD'
  //
  //  Block description for '<S236>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TSamp_d;

  // MATLAB Function: '<S11>/pos_rot_matrix'
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[8] = 1.0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 3;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    // Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
      += ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_d *
      (ROPOD_4Wheel_TdistZMPC_cntr_B.f[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 6] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[2] +
       (ROPOD_4Wheel_TdistZMPC_cntr_B.f[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 3] *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product3[1] +
        ROPOD_4Wheel_TdistZMPC_cntr_B.f[ROPOD_4Wheel_TdistZMPC_cntr_B.i] *
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
            &ROPOD_4Wheel_TdistZMPC_cntr_B.ECAT_Interface_c));
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

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S45>/S-Function Builder (Read_Serial_Port) 
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

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S32>/S-Function (ec_ROPOD_SmartWheel) 
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
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_b;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_l;
          sfcnUPtrs[8] = &ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_m;
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

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S33>/S-Function (ec_ROPOD_SmartWheel) 
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
          sfcnUPtrs[0] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command1_b;
          sfcnUPtrs[1] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command2_m;
          sfcnUPtrs[2] = &ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[2];
          sfcnUPtrs[3] = &ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_m;
          sfcnUPtrs[4] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_p;
          sfcnUPtrs[5] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_pw;
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_o;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_i;
          sfcnUPtrs[8] = &ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_k;
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
            ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_f));
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
          sfcnUPtrs[0] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command1_p;
          sfcnUPtrs[1] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command2_p;
          sfcnUPtrs[2] = &ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[4];
          sfcnUPtrs[3] = &ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_g;
          sfcnUPtrs[4] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_k;
          sfcnUPtrs[5] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_p;
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n;
          sfcnUPtrs[8] = &ROPOD_4Wheel_TdistZMPC_cntr_B.timestamp_p;
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
            ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_n));
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
                       ROPOD_4Wheel_TdistZMPC_cntr_P.SFunction_P1_Size_e);
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

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S35>/S-Function (ec_ROPOD_SmartWheel) 
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
          sfcnUPtrs[0] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command1_pn;
          sfcnUPtrs[1] = &ROPOD_4Wheel_TdistZMPC_cntr_B.command2_f;
          sfcnUPtrs[2] = &ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[6];
          sfcnUPtrs[3] = &ROPOD_4Wheel_TdistZMPC_cntr_B.setpoint2_l;
          sfcnUPtrs[4] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_i;
          sfcnUPtrs[5] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_o;
          sfcnUPtrs[6] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_n;
          sfcnUPtrs[7] = &ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_b;
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
    // Start for MATLABSystem: '<S380>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[i] = tmp_1f[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[18] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_9639.createSubscriber
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv13, ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S380>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe1'

    // Start for S-Function (Read_Serial_Port): '<S45>/S-Function Builder'
    // Level2 S-Function Block: '<S45>/S-Function Builder' (Read_Serial_Port)
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for Atomic SubSystem: '<S3>/Subscribe2'
    // Start for MATLABSystem: '<S381>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 1;
    for (i = 0; i < 35; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[i] = tmp_1e[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[35] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_9640.createSubscriber
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv0, ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S381>/SourceBlock'
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
      (ParameterInitial_pjsf4rz1te2rav);

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
      (ParameterInitial_pjsf4rz1te2rav);

    // End of Start for MATLABSystem: '<S8>/Get Parameter1'

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S384>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_1h[i] = tmp_o[i];
    }

    tmp_1h[8] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_1899.createSubscriber(tmp_1h,
      ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S384>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'

    // Start for Delay: '<S270>/Enabled Delay'
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
      (R_ParameterInitia_n);

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
    // Start for MATLABSystem: '<S379>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_1g[i] = tmp_5[i];
    }

    tmp_1g[16] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_1896.createPublisher(tmp_1g,
      ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S379>/SinkBlock'
    // End of Start for SubSystem: '<S2>/Publish'

    // Start for Atomic SubSystem: '<S9>/Publish4'
    // Start for MATLABSystem: '<S390>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[i] = tmp_4[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[22] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9627.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv9, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S390>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish4'

    // Start for Atomic SubSystem: '<S9>/Publish'
    // Start for MATLABSystem: '<S386>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[i] = tmp_3[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[18] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9614.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv13, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S386>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish'

    // Start for Atomic SubSystem: '<S9>/Publish1'
    // Start for MATLABSystem: '<S387>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_2[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[19] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9624.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S387>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish1'

    // Start for Atomic SubSystem: '<S9>/Publish2'
    // Start for MATLABSystem: '<S388>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[i] = tmp_1[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv13[18] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9625.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv13, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S388>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish2'

    // Start for Atomic SubSystem: '<S9>/Publish3'
    // Start for MATLABSystem: '<S389>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_0[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[19] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9626.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S389>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish3'

    // Start for Atomic SubSystem: '<S9>/Publish5'
    // Start for MATLABSystem: '<S391>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[28] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9643.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S391>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish5'
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__h =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__d =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__m =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_mn =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__i =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__a =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__f =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_dv =
      UNINITIALIZED_ZCSIG;

    // InitializeConditions for UnitDelay: '<S110>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S108>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_e;

    // InitializeConditions for UnitDelay: '<S112>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_l;

    // InitializeConditions for UnitDelay: '<S114>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_h;

    // InitializeConditions for UnitDelay: '<S116>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_j;

    // InitializeConditions for UnitDelay: '<S118>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lh =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S120>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lr =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_i;

    // InitializeConditions for UnitDelay: '<S122>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_f;

    // InitializeConditions for Memory: '<S60>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition;

    // InitializeConditions for Memory: '<S60>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition;

    // InitializeConditions for UnitDelay: '<S142>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_e4;

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lu;

    // InitializeConditions for UnitDelay: '<S144>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_if;

    // InitializeConditions for UnitDelay: '<S146>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_hg;

    // InitializeConditions for UnitDelay: '<S148>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n;

    // InitializeConditions for UnitDelay: '<S150>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S152>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_l3;

    // InitializeConditions for UnitDelay: '<S154>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_j4;

    // InitializeConditions for Memory: '<S63>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_f;

    // InitializeConditions for Memory: '<S63>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_h;

    // InitializeConditions for Memory: '<S61>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_k;

    // InitializeConditions for Memory: '<S61>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_k;

    // InitializeConditions for Memory: '<S64>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_c;

    // InitializeConditions for Memory: '<S64>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_ed =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_e;

    // InitializeConditions for UnitDelay: '<S174>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gu;

    // InitializeConditions for UnitDelay: '<S172>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_er =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_i3;

    // InitializeConditions for UnitDelay: '<S176>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ff =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_hy;

    // InitializeConditions for UnitDelay: '<S178>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S180>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fe =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lj;

    // InitializeConditions for UnitDelay: '<S182>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ii =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lr;

    // InitializeConditions for UnitDelay: '<S184>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jw;

    // InitializeConditions for UnitDelay: '<S186>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_mi;

    // InitializeConditions for Memory: '<S59>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_m;

    // InitializeConditions for Memory: '<S59>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_hg;

    // InitializeConditions for UnitDelay: '<S206>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_il =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n3;

    // InitializeConditions for UnitDelay: '<S204>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gn;

    // InitializeConditions for UnitDelay: '<S208>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ej =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_nr;

    // InitializeConditions for UnitDelay: '<S210>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jm =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lq;

    // InitializeConditions for UnitDelay: '<S212>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_a;

    // InitializeConditions for UnitDelay: '<S214>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S216>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_al =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ah;

    // InitializeConditions for UnitDelay: '<S218>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jx =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n3m;

    // InitializeConditions for Memory: '<S65>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_mc;

    // InitializeConditions for Memory: '<S65>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_i;

    // InitializeConditions for DiscreteStateSpace: '<S53>/Internal'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition;

    // InitializeConditions for Memory: '<S62>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_mt;

    // InitializeConditions for Memory: '<S62>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_gi =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_f;

    // InitializeConditions for Memory: '<S66>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_g;

    // InitializeConditions for Memory: '<S66>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_hh;

    // InitializeConditions for DiscreteStateSpace: '<S54>/Internal'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition_g;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition_g;

    // InitializeConditions for Delay: '<S270>/Enabled Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.EnabledDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S271>/Delay Input2'
    //
    //  Block description for '<S271>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S272>/Delay Input2'
    //
    //  Block description for '<S272>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S273>/Delay Input2'
    //
    //  Block description for '<S273>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition_i;

    // InitializeConditions for DiscreteIntegrator: '<S311>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S312>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_InitialS;

    // InitializeConditions for DiscreteIntegrator: '<S313>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_e;

    // InitializeConditions for DiscreteTransferFcn: '<S314>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_n;

    // InitializeConditions for UnitDelay: '<S309>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lv =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jc;

    // InitializeConditions for DiscreteIntegrator: '<S320>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_l;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_m = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S321>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_e;

    // InitializeConditions for DiscreteIntegrator: '<S322>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_la;

    // InitializeConditions for DiscreteTransferFcn: '<S323>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_m;

    // InitializeConditions for UnitDelay: '<S318>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_c;

    // InitializeConditions for DiscreteIntegrator: '<S329>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_d;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_b = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S330>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_a;

    // InitializeConditions for DiscreteIntegrator: '<S331>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_n;

    // InitializeConditions for DiscreteTransferFcn: '<S332>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_j;

    // InitializeConditions for UnitDelay: '<S327>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n2;

    // InitializeConditions for DiscreteIntegrator: '<S338>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_c;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_l = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S339>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_d;

    // InitializeConditions for DiscreteIntegrator: '<S340>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_f;

    // InitializeConditions for DiscreteTransferFcn: '<S341>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_m3;

    // InitializeConditions for UnitDelay: '<S336>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ev =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_fx;

    // InitializeConditions for DiscreteIntegrator: '<S347>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_j;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S348>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_mb;

    // InitializeConditions for DiscreteIntegrator: '<S349>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_py =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_en;

    // InitializeConditions for DiscreteTransferFcn: '<S350>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ms;

    // InitializeConditions for UnitDelay: '<S345>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kp =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_o;

    // InitializeConditions for DiscreteIntegrator: '<S356>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dj =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_m;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S357>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_c;

    // InitializeConditions for DiscreteIntegrator: '<S358>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_fd =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_mp;

    // InitializeConditions for DiscreteTransferFcn: '<S359>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_nn;

    // InitializeConditions for UnitDelay: '<S354>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ez =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_cu;

    // InitializeConditions for DiscreteIntegrator: '<S365>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_lt;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_f = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S366>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_l;

    // InitializeConditions for DiscreteIntegrator: '<S367>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ik =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_do;

    // InitializeConditions for DiscreteTransferFcn: '<S368>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_i;

    // InitializeConditions for UnitDelay: '<S363>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lu =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_kx;

    // InitializeConditions for DiscreteIntegrator: '<S374>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_j4;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S375>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_o;

    // InitializeConditions for DiscreteIntegrator: '<S376>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_p;

    // InitializeConditions for DiscreteTransferFcn: '<S377>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_dx;

    // InitializeConditions for UnitDelay: '<S372>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_la;

    // InitializeConditions for DiscreteIntegrator: '<S245>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_cq;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_om = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S246>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_lu;

    // InitializeConditions for DiscreteIntegrator: '<S247>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_ct;

    // InitializeConditions for DiscreteTransferFcn: '<S248>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_b;

    // InitializeConditions for UnitDelay: '<S243>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hv =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gs;

    // InitializeConditions for DiscreteIntegrator: '<S254>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_o;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S255>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ir;

    // InitializeConditions for DiscreteIntegrator: '<S256>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_b;

    // InitializeConditions for DiscreteTransferFcn: '<S257>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_al;

    // InitializeConditions for UnitDelay: '<S252>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ka =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_p;

    // InitializeConditions for DiscreteIntegrator: '<S263>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_i;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S264>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_p;

    // InitializeConditions for DiscreteIntegrator: '<S265>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ol =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_k;

    // InitializeConditions for DiscreteTransferFcn: '<S266>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_im;

    // InitializeConditions for UnitDelay: '<S261>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_g3;

    // InitializeConditions for DiscreteIntegrator: '<S68>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_a;

    // InitializeConditions for UnitDelay: '<S80>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lq =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_oe;

    // InitializeConditions for UnitDelay: '<S78>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bt =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ay;

    // InitializeConditions for DiscreteIntegrator: '<S69>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_f;

    // InitializeConditions for UnitDelay: '<S84>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_d;

    // InitializeConditions for UnitDelay: '<S82>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ge =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ck;

    // InitializeConditions for Memory: '<S67>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_l;

    // InitializeConditions for Memory: '<S67>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S289>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_az =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_d2;

    // InitializeConditions for UnitDelay: '<S285>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_dh;

    // InitializeConditions for UnitDelay: '<S287>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_az;

    // InitializeConditions for UnitDelay: '<S291>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_du;

    // InitializeConditions for UnitDelay: '<S236>/UD'
    //
    //  Block description for '<S236>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_fq;

    // InitializeConditions for UnitDelay: '<S236>/UD'
    //
    //  Block description for '<S236>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_fq;

    // InitializeConditions for UnitDelay: '<S236>/UD'
    //
    //  Block description for '<S236>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_p[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_fq;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S380>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S382>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S380>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S381>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S383>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S381>/Enabled Subsystem'
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
    // SystemInitialize for Enabled SubSystem: '<S384>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S385>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1 = ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S384>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'

    // SystemInitialize for Enabled SubSystem: '<S40>/ZMPC_x'
    // InitializeConditions for Delay: '<S46>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition;

    // InitializeConditions for Delay: '<S46>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S46>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition;

    // InitializeConditions for Delay: '<S46>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition;

    // InitializeConditions for Delay: '<S46>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition;

    // SystemInitialize for Outport: '<S46>/Fx'
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0;

    // End of SystemInitialize for SubSystem: '<S40>/ZMPC_x'

    // SystemInitialize for Enabled SubSystem: '<S40>/ZMPC_y'
    // InitializeConditions for Delay: '<S47>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition_a;

    // InitializeConditions for Delay: '<S47>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition_g;

    // SystemInitialize for Enabled SubSystem: '<S40>/ZMPC_x'
    for (i = 0; i < 102; i++) {
      // InitializeConditions for Delay: '<S46>/Delay2'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l[i] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition;

      // InitializeConditions for Delay: '<S47>/Delay2'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[i] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition_o;
    }

    // End of SystemInitialize for SubSystem: '<S40>/ZMPC_x'

    // InitializeConditions for Delay: '<S47>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition_e;

    // InitializeConditions for Delay: '<S47>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition_m;

    // InitializeConditions for Delay: '<S47>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition_e;

    // SystemInitialize for Outport: '<S47>/Fx'
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0_c;

    // End of SystemInitialize for SubSystem: '<S40>/ZMPC_y'

    // SystemInitialize for Enabled SubSystem: '<S40>/Angle controller'
    // InitializeConditions for DiscreteIntegrator: '<S44>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC;

    // InitializeConditions for DiscreteIntegrator: '<S44>/Discrete-Time Integrator1' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_IC;

    // SystemInitialize for Outport: '<S44>/u_N'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = ROPOD_4Wheel_TdistZMPC_cntr_P.u_N_Y0;

    // End of SystemInitialize for SubSystem: '<S40>/Angle controller'
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
  // Terminate for MATLABSystem: '<S380>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S380>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe1'

  // Terminate for S-Function (Read_Serial_Port): '<S45>/S-Function Builder'
  // Level2 S-Function Block: '<S45>/S-Function Builder' (Read_Serial_Port)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for Atomic SubSystem: '<S3>/Subscribe2'
  // Terminate for MATLABSystem: '<S381>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S381>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe2'

  // Terminate for MATLABSystem: '<S5>/Get Parameter14'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S5>/Get Parameter14'

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'
  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S33>/S-Function'
  // Level2 S-Function Block: '<S33>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S34>/S-Function'
  // Level2 S-Function Block: '<S34>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S35>/S-Function'
  // Level2 S-Function Block: '<S35>/S-Function' (ec_ROPOD_SmartWheel)
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
  // Terminate for MATLABSystem: '<S384>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S384>/SourceBlock'
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
  // Terminate for MATLABSystem: '<S379>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S379>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish'

  // Terminate for Atomic SubSystem: '<S9>/Publish4'
  // Terminate for MATLABSystem: '<S390>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S390>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish4'

  // Terminate for Atomic SubSystem: '<S9>/Publish'
  // Terminate for MATLABSystem: '<S386>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S386>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish'

  // Terminate for Atomic SubSystem: '<S9>/Publish1'
  // Terminate for MATLABSystem: '<S387>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S387>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish1'

  // Terminate for Atomic SubSystem: '<S9>/Publish2'
  // Terminate for MATLABSystem: '<S388>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S388>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish2'

  // Terminate for Atomic SubSystem: '<S9>/Publish3'
  // Terminate for MATLABSystem: '<S389>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S389>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish3'

  // Terminate for Atomic SubSystem: '<S9>/Publish5'
  // Terminate for MATLABSystem: '<S391>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S391>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish5'
}

//
// File trailer for generated code.
//
// [EOF]
//
