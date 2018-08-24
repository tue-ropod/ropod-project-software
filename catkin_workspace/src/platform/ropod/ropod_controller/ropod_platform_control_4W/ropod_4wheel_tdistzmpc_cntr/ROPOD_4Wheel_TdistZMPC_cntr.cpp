//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_TdistZMPC_cntr.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_TdistZMPC_cntr'.
//
// Model version                  : 1.310
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Fri Aug 24 12:11:56 2018
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
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_d(const real_T x[4]);
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
//    '<S79>/MATLAB Function'
//    '<S81>/MATLAB Function'
//    '<S83>/MATLAB Function'
//    '<S85>/MATLAB Function'
//    '<S109>/MATLAB Function'
//    '<S111>/MATLAB Function'
//    '<S113>/MATLAB Function'
//    '<S115>/MATLAB Function'
//    '<S117>/MATLAB Function'
//    '<S119>/MATLAB Function'
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
//    '<S60>/Calibration1'
//    '<S61>/Calibration1'
//    '<S62>/Calibration1'
//    '<S63>/Calibration1'
//    '<S64>/Calibration1'
//    '<S65>/Calibration1'
//    '<S66>/Calibration1'
//    '<S67>/Calibration1'
//    '<S68>/Calibration1'
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

// Function for MATLAB Function: '<S46>/speed deflection angle calculation X+'
static real_T ROPOD_4Wheel_TdistZMPC_cntr_sum(const real_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

//
// Output and update for atomic system:
//    '<S46>/speed deflection angle calculation X+'
//    '<S46>/speed deflection angle calculation X-'
//    '<S46>/speed deflection angle calculation Y+'
//    '<S46>/speed deflection angle calculation Y-'
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

  // SignalConversion: '<S71>/TmpSignal ConversionAt SFunction Inport1'
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

  // SignalConversion: '<S71>/TmpSignal ConversionAt SFunction Inport1'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cntr_abs(const real_T x[40], real_T y[40])
{
  int32_T k;
  for (k = 0; k < 40; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S47>/Zone MPC'
static void ROPOD_4Wheel_TdistZMPC_cn_abs_o(const real_T x[102], real_T y[102])
{
  int32_T k;
  for (k = 0; k < 102; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S47>/Zone MPC'
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

// Function for MATLAB Function: '<S47>/Zone MPC'
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
//    '<S47>/Zone MPC'
//    '<S48>/Zone MPC'
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
      // SignalConversion: '<S266>/TmpSignal ConversionAt SFunction Inport1'
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
      // SignalConversion: '<S266>/TmpSignal ConversionAt SFunction Inport1'
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
//    '<S276>/MATLAB Function'
//    '<S285>/MATLAB Function'
//    '<S294>/MATLAB Function'
//    '<S342>/MATLAB Function'
//    '<S351>/MATLAB Function'
//    '<S360>/MATLAB Function'
//    '<S369>/MATLAB Function'
//    '<S378>/MATLAB Function'
//    '<S387>/MATLAB Function'
//    '<S396>/MATLAB Function'
//    '<S405>/MATLAB Function'
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
//    '<S318>/MATLAB Function'
//    '<S320>/MATLAB Function'
//    '<S322>/MATLAB Function'
//    '<S324>/MATLAB Function'
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

  // SignalConversion: '<S327>/TmpSignal ConversionAt SFunction Inport3'
  Fyi = rtu_tr / rtu_ropod_kinmodel_param_vec_l;
  Fxi_tmp = rtu_tl / rtu_ropod_kinmodel_param_vec;
  Fxi = Fxi_tmp + Fyi;

  // SignalConversion: '<S327>/TmpSignal ConversionAt SFunction Inport3'
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

// Function for MATLAB Function: '<S46>/Force_per_sensor'
static real_T ROPOD_4Wheel_TdistZMPC_cn_sum_d(const real_T x[4])
{
  return ((x[0] + x[1]) + x[2]) + x[3];
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC__xnrm2_o(int32_T n, const real_T x[27],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (n == 1) {
    y = fabs(x[ix0 - 1]);
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l = 3.3121686421112381E-170;
    ROPOD_4Wheel_TdistZMPC_cntr_B.kend_j = (ix0 + n) - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_h = ix0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_h <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.kend_j) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h = fabs
        (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_h - 1]);
      if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h >
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_bn =
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l /
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h;
        y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_bn *
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_bn + 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l =
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_bn =
          ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_h /
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l;
        y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_bn *
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_bn;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.k_h++;
    }

    y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_l * sqrt(y);
  }

  return y;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_xnrm2_ow(int32_T n, const real_T x[9],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b = 3.3121686421112381E-170;
  ROPOD_4Wheel_TdistZMPC_cntr_B.kend = (ix0 + n) - 1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_m = ix0;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_m <= ROPOD_4Wheel_TdistZMPC_cntr_B.kend)
  {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_n = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_m - 1]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_n >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_b = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b /
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_n;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_b *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_b + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_n;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_b = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_n /
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_b * ROPOD_4Wheel_TdistZMPC_cntr_B.t_b;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.k_m++;
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_b * sqrt(y);
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_xaxpy_oq(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[27], int32_T iy0)
{
  if (!((n < 1) || (a == 0.0))) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_g = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_c = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_o = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_o <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_c] += a *
        x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_g];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_g++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_c++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_o++;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC__xaxpy_o(int32_T n, real_T a, const real_T x
  [27], int32_T ix0, real_T y[3], int32_T iy0)
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_cn_xdotc(int32_T n, const real_T x[27],
  int32_T ix0, const real_T y[27], int32_T iy0)
{
  real_T d;
  d = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.ix_o = ix0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.iy_o = iy0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.k_i = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_i <= n) {
    d += x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_o - 1] *
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_o - 1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_o++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_o++;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_i++;
  }

  return d;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[27], int32_T iy0)
{
  if (!(a == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.ix_a = ix0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iy_i = iy0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.k_l = 0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_l <= n - 1) {
      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy_i] += a *
        y[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_a];
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_a++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy_i++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_l++;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Td_Unconstrained_d(const real_T Hinv[81], const real_T
  f[9], real_T x[9])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_p = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_p <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.i_p++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_a = ROPOD_4Wheel_TdistZMPC_cntr_B.i_p + 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.d1 = 0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i5 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i5 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i5++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.d1 += -Hinv[(9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i5 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_a) -
        1] * f[ROPOD_4Wheel_TdistZMPC_cntr_B.i5];
    }

    x[ROPOD_4Wheel_TdistZMPC_cntr_B.i_p] = ROPOD_4Wheel_TdistZMPC_cntr_B.d1;
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMPC_c_norm_m(const real_T x[9])
{
  real_T y;
  y = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.scale_f = 3.3121686421112381E-170;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_e = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.k_e <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.k_e++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_e]);
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a >
        ROPOD_4Wheel_TdistZMPC_cntr_B.scale_f) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_ju = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_f
        / ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a;
      y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_ju *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_ju + 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_f =
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t_ju = ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_a
        / ROPOD_4Wheel_TdistZMPC_cntr_B.scale_f;
      y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_ju *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t_ju;
    }
  }

  return ROPOD_4Wheel_TdistZMPC_cntr_B.scale_f * sqrt(y);
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_cn_abs_h(const real_T x[9], real_T y[9])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_mj = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_mj < 9;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_mj++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_mj] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_mj]);
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_c_abs_hu(const real_T x[21], real_T y[21])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.k_mv = 0;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_mv < 21;
       ROPOD_4Wheel_TdistZMPC_cntr_B.k_mv++) {
    y[ROPOD_4Wheel_TdistZMPC_cntr_B.k_mv] = fabs
      (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_mv]);
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_TdistZMP_xnrm2_owt(int32_T n, const real_T x[81],
  int32_T ix0)
{
  real_T y;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e = 3.3121686421112381E-170;
      ROPOD_4Wheel_TdistZMPC_cntr_B.kend_p = (ix0 + n) - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.k_a = ix0;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.k_a <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.kend_p) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b = fabs
          (x[ROPOD_4Wheel_TdistZMPC_cntr_B.k_a - 1]);
        if (ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b >
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_j =
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e /
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b;
          y = y * ROPOD_4Wheel_TdistZMPC_cntr_B.t_j *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_j + 1.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b;
        } else {
          ROPOD_4Wheel_TdistZMPC_cntr_B.t_j =
            ROPOD_4Wheel_TdistZMPC_cntr_B.absxk_b /
            ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e;
          y += ROPOD_4Wheel_TdistZMPC_cntr_B.t_j *
            ROPOD_4Wheel_TdistZMPC_cntr_B.t_j;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.k_a++;
      }

      y = ROPOD_4Wheel_TdistZMPC_cntr_B.scale_e * sqrt(y);
    }
  }

  return y;
}

static real_T ROPOD_4Wheel_Tdis_rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz = fabs(u0);
  y = fabs(u1);
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz < y) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz /= y;
    y *= sqrt(ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz *
              ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz + 1.0);
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz > y) {
    y /= ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz;
    y = sqrt(y * y + 1.0) * ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz;
  } else {
    if (!rtIsNaN(y)) {
      y = ROPOD_4Wheel_TdistZMPC_cntr_B.a_jz * 1.4142135623730951;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_c = (n - 1) * 9 + ia0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.iac = ia0;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.iac <=
           ROPOD_4Wheel_TdistZMPC_cntr_B.b_c) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c = ix0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.c_d = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.d = (ROPOD_4Wheel_TdistZMPC_cntr_B.iac + m)
        - 1;
      ROPOD_4Wheel_TdistZMPC_cntr_B.ia_p = ROPOD_4Wheel_TdistZMPC_cntr_B.iac;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_p <=
             ROPOD_4Wheel_TdistZMPC_cntr_B.d) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.c_d +=
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_p - 1] *
          x[ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c - 1];
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix_c++;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ia_p++;
      }

      y[ROPOD_4Wheel_TdistZMPC_cntr_B.iy] += ROPOD_4Wheel_TdistZMPC_cntr_B.c_d;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iy++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.iac += 9;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_c_xger_i(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[9], real_T A[81], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.jA = ia0 - 1;
    ROPOD_4Wheel_TdistZMPC_cntr_B.jy = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_B.j_c = 1;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_c <= n) {
      if (y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.temp = y[ROPOD_4Wheel_TdistZMPC_cntr_B.jy]
          * alpha1;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ix = ix0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_m = m + ROPOD_4Wheel_TdistZMPC_cntr_B.jA;
        ROPOD_4Wheel_TdistZMPC_cntr_B.ijA = ROPOD_4Wheel_TdistZMPC_cntr_B.jA;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.ijA + 1 <=
               ROPOD_4Wheel_TdistZMPC_cntr_B.b_m) {
          A[ROPOD_4Wheel_TdistZMPC_cntr_B.ijA] +=
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.ix - 1] *
            ROPOD_4Wheel_TdistZMPC_cntr_B.temp;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ix++;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ijA++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.jy++;
      ROPOD_4Wheel_TdistZMPC_cntr_B.jA += 9;
      ROPOD_4Wheel_TdistZMPC_cntr_B.j_c++;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_TdistZMPC_xgeqrf_c(real_T A[81], real_T tau[9])
{
  int32_T exitg1;
  boolean_T exitg2;
  memset(&ROPOD_4Wheel_TdistZMPC_cntr_B.work_b[0], 0, 9U * sizeof(real_T));
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n <
       9; ROPOD_4Wheel_TdistZMPC_cntr_B.i_n++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_i = ROPOD_4Wheel_TdistZMPC_cntr_B.i_n * 9 +
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_n + 1 < 9) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i];
      ROPOD_4Wheel_TdistZMPC_cntr_B.b = 0.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm = ROPOD_4Wheel_TdistZMP_xnrm2_owt(8 -
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_n, A, ROPOD_4Wheel_TdistZMPC_cntr_B.i_i
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
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i -
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_n) + 9;
          do {
            ROPOD_4Wheel_TdistZMPC_cntr_B.knt++;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o + 1 <=
                   ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i) {
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
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_n, A,
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
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i -
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_n) + 9;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o + 1 <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i) {
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o] *=
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.knt) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm *= 1.0020841800044864E-292;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i++;
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
            - ROPOD_4Wheel_TdistZMPC_cntr_B.i_n) + 9;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i =
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i + 1 <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.knt) {
            A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i] *=
              ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
            ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i++;
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp =
            ROPOD_4Wheel_TdistZMPC_cntr_B.xnorm;
        }
      }

      tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] = ROPOD_4Wheel_TdistZMPC_cntr_B.b;
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp;
      ROPOD_4Wheel_TdistZMPC_cntr_B.b_atmp = A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i];
      A[ROPOD_4Wheel_TdistZMPC_cntr_B.i_i] = 1.0;
      ROPOD_4Wheel_TdistZMPC_cntr_B.knt = ((ROPOD_4Wheel_TdistZMPC_cntr_B.i_n +
        1) * 9 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_n) + 1;
      if (tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n] != 0.0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i = 9 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o =
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_i - ROPOD_4Wheel_TdistZMPC_cntr_B.i_n)
          + 8;
        while ((ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i > 0) &&
               (A[ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o] == 0.0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i--;
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o--;
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o = 8 -
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_n;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o > 0)) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_n =
            (ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o - 1) * 9 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.knt;
          ROPOD_4Wheel_TdistZMPC_cntr_B.ia_m =
            ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_n;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.ia_m <=
                (ROPOD_4Wheel_TdistZMPC_cntr_B.coltop_n +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i) - 1) {
              if (A[ROPOD_4Wheel_TdistZMPC_cntr_B.ia_m - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_TdistZMPC_cntr_B.ia_m++;
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
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i = 0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o = 0;
      }

      if (ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i > 0) {
        ROPOD_4Wheel_TdistZMPC__xgemv_k(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.knt, A,
          ROPOD_4Wheel_TdistZMPC_cntr_B.i_i + 1,
          ROPOD_4Wheel_TdistZMPC_cntr_B.work_b);
        ROPOD_4Wheel_TdistZMPC_c_xger_i(ROPOD_4Wheel_TdistZMPC_cntr_B.lastv_i,
          ROPOD_4Wheel_TdistZMPC_cntr_B.lastc_o,
          -tau[ROPOD_4Wheel_TdistZMPC_cntr_B.i_n],
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdist_KWIKfactor_e(const real_T Ac[189], const
  int16_T iC[21], int16_T nA, const real_T Linv[81], real_T RLinv[81], real_T D
  [81], real_T H[81])
{
  real_T Status;
  int32_T exitg1;
  Status = 1.0;
  memset(&RLinv[0], 0, 81U * sizeof(real_T));
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = 1;
  while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c <= nA) {
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i3 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i3++) {
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.i3 + 9 *
        (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c - 1)] = 0.0;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_o = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c - 1;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i3 <
         9; ROPOD_4Wheel_TdistZMPC_cntr_B.i3++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.i3 + 9 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_o;
      RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i4 < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i4++) {
        RLinv[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = Ac
          [(iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_c - 1] + 21 *
            ROPOD_4Wheel_TdistZMPC_cntr_B.i4) - 1] * Linv[9 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i4 + ROPOD_4Wheel_TdistZMPC_cntr_B.i3] +
          RLinv[9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i_o +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3];
      }
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_c++;
  }

  ROPOD_4Wheel_TdistZMPC_cnt_qr_m(RLinv, ROPOD_4Wheel_TdistZMPC_cntr_B.QQ,
    ROPOD_4Wheel_TdistZMPC_cntr_B.RR);
  ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = 1;
  do {
    exitg1 = 0;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c <= nA) {
      if (fabs(ROPOD_4Wheel_TdistZMPC_cntr_B.RR
               [((ROPOD_4Wheel_TdistZMPC_cntr_B.i_c - 1) * 9 +
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i_c) - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c++;
      }
    } else {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i_o = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c +
          1;
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_f < 9;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_f++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_f +
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.d0 = 0.0;
          for (ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = 0;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i3 < 9;
               ROPOD_4Wheel_TdistZMPC_cntr_B.i3++) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.d0 += Linv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i_o - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i3] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.QQ[(ROPOD_4Wheel_TdistZMPC_cntr_B.j
              - 1) * 9 + ROPOD_4Wheel_TdistZMPC_cntr_B.i3];
          }

          ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i_c + 9
            * ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] =
            ROPOD_4Wheel_TdistZMPC_cntr_B.d0;
        }
      }

      memset(&RLinv[0], 0, 81U * sizeof(real_T));
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = nA;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c > 0) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c - 1;
        RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_c + 9 *
               ROPOD_4Wheel_TdistZMPC_cntr_B.i3) - 1] = 1.0;
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c;
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_f <= nA) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_f -
            1;
          RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.i_c + 9 *
                 ROPOD_4Wheel_TdistZMPC_cntr_B.j) - 1] /=
            ROPOD_4Wheel_TdistZMPC_cntr_B.RR[((ROPOD_4Wheel_TdistZMPC_cntr_B.i_c
            - 1) * 9 + ROPOD_4Wheel_TdistZMPC_cntr_B.i_c) - 1];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_f++;
        }

        if (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c > 1) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = 1;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_f <=
                 ROPOD_4Wheel_TdistZMPC_cntr_B.i3) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k =
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_c;
            while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <= nA) {
              ROPOD_4Wheel_TdistZMPC_cntr_B.j =
                ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1;
              ROPOD_4Wheel_TdistZMPC_cntr_B.i4 = ROPOD_4Wheel_TdistZMPC_cntr_B.j
                * 9;
              RLinv[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_f + 9 *
                     ROPOD_4Wheel_TdistZMPC_cntr_B.j) - 1] = RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i4 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_f) - 1] -
                ROPOD_4Wheel_TdistZMPC_cntr_B.RR
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i3 * 9 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.j_f) - 1] * RLinv
                [(ROPOD_4Wheel_TdistZMPC_cntr_B.i4 +
                  ROPOD_4Wheel_TdistZMPC_cntr_B.i_c) - 1];
              ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
            }

            ROPOD_4Wheel_TdistZMPC_cntr_B.j_f++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = (int16_T)
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3;
      }

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c < 9;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i_c++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = (int16_T)
          (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c + 1);
        while (ROPOD_4Wheel_TdistZMPC_cntr_B.j_f <= 9) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = ROPOD_4Wheel_TdistZMPC_cntr_B.j_f -
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c +
            9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i3;
          H[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k = (int16_T)(nA + 1);
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <= 9) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i4 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1) * 9;
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = H
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.j_f - 1) * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.i_c] -
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[(ROPOD_4Wheel_TdistZMPC_cntr_B.i4
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_f) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i4
              + ROPOD_4Wheel_TdistZMPC_cntr_B.i_c];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
          }

          H[(ROPOD_4Wheel_TdistZMPC_cntr_B.j_f + 9 *
             ROPOD_4Wheel_TdistZMPC_cntr_B.i_c) - 1] =
            H[ROPOD_4Wheel_TdistZMPC_cntr_B.i3 * 9 +
            ROPOD_4Wheel_TdistZMPC_cntr_B.i_c];
          ROPOD_4Wheel_TdistZMPC_cntr_B.j_f++;
        }
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.i_c = 1;
      while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_c <= nA) {
        for (ROPOD_4Wheel_TdistZMPC_cntr_B.j_f = 0;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_f < 9;
             ROPOD_4Wheel_TdistZMPC_cntr_B.j_f++) {
          ROPOD_4Wheel_TdistZMPC_cntr_B.i3 = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c -
            1;
          ROPOD_4Wheel_TdistZMPC_cntr_B.j = ROPOD_4Wheel_TdistZMPC_cntr_B.j_f +
            9 * ROPOD_4Wheel_TdistZMPC_cntr_B.i3;
          D[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = 0.0;
          ROPOD_4Wheel_TdistZMPC_cntr_B.c_k = ROPOD_4Wheel_TdistZMPC_cntr_B.i_c;
          while (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k <= nA) {
            ROPOD_4Wheel_TdistZMPC_cntr_B.i4 =
              (ROPOD_4Wheel_TdistZMPC_cntr_B.c_k - 1) * 9;
            D[ROPOD_4Wheel_TdistZMPC_cntr_B.j] = RLinv
              [(ROPOD_4Wheel_TdistZMPC_cntr_B.i4 +
                ROPOD_4Wheel_TdistZMPC_cntr_B.i_c) - 1] *
              ROPOD_4Wheel_TdistZMPC_cntr_B.TL[ROPOD_4Wheel_TdistZMPC_cntr_B.i4
              + ROPOD_4Wheel_TdistZMPC_cntr_B.j_f] +
              D[ROPOD_4Wheel_TdistZMPC_cntr_B.i3 * 9 +
              ROPOD_4Wheel_TdistZMPC_cntr_B.j_f];
            ROPOD_4Wheel_TdistZMPC_cntr_B.c_k++;
          }
        }

        ROPOD_4Wheel_TdistZMPC_cntr_B.i_c++;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_T_DropConstraint_n(int16_T kDrop, int16_T iA[21],
  int16_T *nA, int16_T iC[21])
{
  iA[iC[kDrop - 1] - 1] = 0;
  if (kDrop < *nA) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = *nA - 1;
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.i6 < -32768) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = -32768;
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.i_e1 = kDrop;
    while (ROPOD_4Wheel_TdistZMPC_cntr_B.i_e1 <= (int16_T)
           ROPOD_4Wheel_TdistZMPC_cntr_B.i6) {
      iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_e1 - 1] =
        iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_e1];
      ROPOD_4Wheel_TdistZMPC_cntr_B.i_e1++;
    }
  }

  iC[*nA - 1] = 0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = *nA - 1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.i6 < -32768) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.i6 = -32768;
  }

  *nA = (int16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.i6;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_T_ResetToColdStart(int16_T iA[21], int16_T iC[21])
{
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i_l = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i_l <
       21; ROPOD_4Wheel_TdistZMPC_cntr_B.i_l++) {
    iA[ROPOD_4Wheel_TdistZMPC_cntr_B.i_l] = 0;
    iC[ROPOD_4Wheel_TdistZMPC_cntr_B.i_l] = 0;
  }

  iA[18] = 1;
  iC[0] = 19;
  iA[19] = 1;
  iC[1] = 20;
  iA[20] = 1;
  iC[2] = 21;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
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

    ROPOD_4Wheel_TdistZMPC_cntr_B.q_o = (uint16_T)
      (ROPOD_4Wheel_TdistZMPC_cntr_B.kNext / 10U);
    ROPOD_4Wheel_TdistZMPC_cntr_B.b_x = (uint16_T)((uint32_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.kNext - ROPOD_4Wheel_TdistZMPC_cntr_B.q_o *
      10);
    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.b_x > 0) &&
        (ROPOD_4Wheel_TdistZMPC_cntr_B.b_x >= 5)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.q_o++;
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
                ROPOD_4Wheel_TdistZMPC_cntr_B.q_o) {
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

// Model step function
void ROPOD_4Wheel_TdistZMPC_cntr_step(void)
{
  static const int8_T b[120] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
  };

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S2>/Constant1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0] = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_n / 2.0);

  // Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S2>/Constant1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_n / 2.0);

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S2>/Constant2'

  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1] = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_a / 2.0);

  // Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S2>/Constant2'
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
  //   SignalConversion: '<S2>/TmpSignal ConversionAtCoordinate Transformation ConversionInport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_a / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.c = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[2] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0;

  // Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1];

  // MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 * ROPOD_4Wheel_TdistZMPC_cntr_B.c +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_dy =
    -ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter'
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

    // MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter11'
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

    // MATLABSystem: '<S6>/Get Parameter11'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter12'
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

    // MATLABSystem: '<S6>/Get Parameter12'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter13'
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

    // MATLABSystem: '<S6>/Get Parameter13'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter14'
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

    // MATLABSystem: '<S6>/Get Parameter14'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter15'
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

    // MATLABSystem: '<S6>/Get Parameter15'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter16'
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

    // MATLABSystem: '<S6>/Get Parameter16'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter17'
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

    // MATLABSystem: '<S6>/Get Parameter17'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter1'
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

    // MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter2'
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

    // MATLABSystem: '<S6>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter3'
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

    // MATLABSystem: '<S6>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter4'
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

    // MATLABSystem: '<S6>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter5'
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

    // MATLABSystem: '<S6>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter6'
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

    // MATLABSystem: '<S6>/Get Parameter6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter7'
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

    // MATLABSystem: '<S6>/Get Parameter7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter8'
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

    // MATLABSystem: '<S6>/Get Parameter8'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter9'
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

    // MATLABSystem: '<S6>/Get Parameter9'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S6>/Get Parameter10'
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

    // MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  // DigitalClock: '<S1>/Digital Clock1' incorporates:
  //   DigitalClock: '<S303>/Digital Clock'
  //   DigitalClock: '<S75>/Digital Clock'
  //   DigitalClock: '<S76>/Digital Clock'
  //   DigitalClock: '<S77>/Digital Clock'
  //   DigitalClock: '<S78>/Digital Clock'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o =
    ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.t[0];

  // RelationalOperator: '<S10>/Compare' incorporates:
  //   Constant: '<S10>/Constant'
  //   DigitalClock: '<S1>/Digital Clock1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Compare =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o <
     ROPOD_4Wheel_TdistZMPC_cntr_P.Tinit);
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S7>/Get Parameter1'
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

    // MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw1 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S7>/Get Parameter3'
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

    // MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw2 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S7>/Get Parameter4'
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

    // MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw3 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S7>/Get Parameter5'
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

    // MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.pivot_offs_sw4 =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'

  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S33>/S-Function'

  // Level2 S-Function Block: '<S33>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S34>/S-Function'

  // Level2 S-Function Block: '<S34>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S35>/S-Function'

  // Level2 S-Function Block: '<S35>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S24>/Switch' incorporates:
  //   Constant: '<S24>/Constant'
  //   Constant: '<S24>/Constant2'
  //   Gain: '<S24>/sign convention'
  //   Gain: '<S24>/sign convention1'
  //   Gain: '<S24>/sign convention2'
  //   Gain: '<S24>/sign convention3'
  //   Sum: '<S24>/Add'
  //   Switch: '<S24>/Switch2'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[0];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[2];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_n[3];
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value[0], sizeof(real_T) <<
           3U);
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_f[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention1_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_f[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_n[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention2_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_n[17];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.signconvention3_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.SFunction_m[17];
  }

  // End of Switch: '<S24>/Switch'

  // MATLAB Function: '<S11>/Jqwl_matrix' incorporates:
  //   MATLAB Function: '<S42>/Gl_matrix'
  //   MATLAB Function: '<S44>/Gl_matrices'
  //   SignalConversion: '<S21>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t3 = ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t7 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t9 = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t15 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t22 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t28 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t29 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t33 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t34 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t36 =
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t42 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t43 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t47 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t48 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t50 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[1] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t19 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[2] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t27 + ROPOD_4Wheel_TdistZMPC_cntr_B.t28) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t29) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t26) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[3] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t6) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[4] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t19) * ROPOD_4Wheel_TdistZMPC_cntr_B.t13 *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[5] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t27 + ROPOD_4Wheel_TdistZMPC_cntr_B.t28) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t29) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t26) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[6] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t8 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[7] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[8] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t34 + ROPOD_4Wheel_TdistZMPC_cntr_B.t35) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t36) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t33) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[9] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t8 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[10] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[11] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t34 + ROPOD_4Wheel_TdistZMPC_cntr_B.t35) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t36) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t33) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[12] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[13] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[14] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t41 + ROPOD_4Wheel_TdistZMPC_cntr_B.t42) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t43) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t40) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[15] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[16] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[17] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t41 + ROPOD_4Wheel_TdistZMPC_cntr_B.t42) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t43) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t40) *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[18] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t16 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15 * 2.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[19] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t22 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[20] =
    (((ROPOD_4Wheel_TdistZMPC_cntr_B.t48 + ROPOD_4Wheel_TdistZMPC_cntr_B.t49) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t50) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t47) *
    -0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t13 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[21] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * (ROPOD_4Wheel_TdistZMPC_cntr_B.t16 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[22] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t22) * ROPOD_4Wheel_TdistZMPC_cntr_B.t13 *
    0.125;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[23] =
    (((-ROPOD_4Wheel_TdistZMPC_cntr_B.t48 + ROPOD_4Wheel_TdistZMPC_cntr_B.t49) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t50) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4) *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t13 * ROPOD_4Wheel_TdistZMPC_cntr_B.t47) *
    0.125;

  // Product: '<S11>/Product3'
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 3;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
      = 0.0;
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i0 <
         8; ROPOD_4Wheel_TdistZMPC_cntr_B.i0++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
        += ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[3 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.i0 + ROPOD_4Wheel_TdistZMPC_cntr_B.i] *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i0];
    }
  }

  // End of Product: '<S11>/Product3'

  // BusAssignment: '<S2>/Bus Assignment' incorporates:
  //   Constant: '<S2>/Constant'
  //   Constant: '<S2>/Constant3'
  //   Constant: '<S2>/Constant4'
  //   Constant: '<S2>/Constant5'
  //   Constant: '<S411>/Constant'
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
  //   MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  //   MATLABSystem: '<S2>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.X =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Position.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.W =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c -
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.X =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_dy;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Pose.Pose.Orientation.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Linear.X =
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Linear.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Linear.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant3_Value_j;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Angular.X =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Angular.Y =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment.Twist.Twist.Angular.Z =
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[2];

  // RateTransition: '<S2>/Rate Transition' incorporates:
  //   Inport: '<S415>/In1'
  //   MATLABSystem: '<S413>/SourceBlock'
  //   MATLABSystem: '<S413>/SourceBlock'

  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S2>/Publish'
    // Start for MATLABSystem: '<S412>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_1896.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment);

    // End of Outputs for SubSystem: '<S2>/Publish'

    // Outputs for Atomic SubSystem: '<S3>/Subscribe1'
    // Start for MATLABSystem: '<S413>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_9639.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k);

    // Outputs for Enabled SubSystem: '<S413>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S415>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p =
        ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k;
    }

    // End of Outputs for SubSystem: '<S413>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe1'

    // RelationalOperator: '<S37>/Compare' incorporates:
    //   Constant: '<S37>/Constant'
    //   Inport: '<S415>/In1'
    //   MATLABSystem: '<S413>/SourceBlock'
    //   MATLABSystem: '<S413>/SourceBlock'

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

  // End of RateTransition: '<S2>/Rate Transition'

  // MATLAB Function: '<S111>/MATLAB Function' incorporates:
  //   Constant: '<S111>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_no,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t13);

  // S-Function (Read_Serial_Port): '<S46>/S-Function Builder'

  // Level2 S-Function Block: '<S46>/S-Function Builder' (Read_Serial_Port)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S75>/Switch' incorporates:
  //   Constant: '<S262>/Constant'
  //   Constant: '<S75>/Constant'
  //   RelationalOperator: '<S262>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o >
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

  // End of Switch: '<S75>/Switch'

  // Sum: '<S111>/Sum' incorporates:
  //   UnitDelay: '<S111>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE;

  // Product: '<S111>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3;

  // MATLAB Function: '<S109>/MATLAB Function' incorporates:
  //   Constant: '<S109>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_de,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2);

  // Sum: '<S109>/Sum' incorporates:
  //   UnitDelay: '<S109>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t28 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i;

  // Product: '<S109>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t28;

  // MATLAB Function: '<S113>/MATLAB Function' incorporates:
  //   Constant: '<S113>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bx,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t29,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0);

  // Sum: '<S113>/Sum' incorporates:
  //   UnitDelay: '<S113>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t36 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b;

  // Product: '<S113>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i = ROPOD_4Wheel_TdistZMPC_cntr_B.t29 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t36;

  // MATLAB Function: '<S115>/MATLAB Function' incorporates:
  //   Constant: '<S115>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_g,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t43, &ROPOD_4Wheel_TdistZMPC_cntr_B.t29);

  // Sum: '<S115>/Sum' incorporates:
  //   UnitDelay: '<S115>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t47 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l;

  // Product: '<S115>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n = ROPOD_4Wheel_TdistZMPC_cntr_B.t43 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t47;

  // MATLAB Function: '<S117>/MATLAB Function' incorporates:
  //   Constant: '<S117>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_en,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t48, &ROPOD_4Wheel_TdistZMPC_cntr_B.t43);

  // Sum: '<S117>/Sum' incorporates:
  //   UnitDelay: '<S117>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t49 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l0;

  // Product: '<S117>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t34 = ROPOD_4Wheel_TdistZMPC_cntr_B.t48 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t49;

  // MATLAB Function: '<S119>/MATLAB Function' incorporates:
  //   Constant: '<S119>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dr,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t50, &ROPOD_4Wheel_TdistZMPC_cntr_B.t48);

  // Sum: '<S119>/Sum' incorporates:
  //   UnitDelay: '<S119>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lh;

  // Product: '<S119>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l = ROPOD_4Wheel_TdistZMPC_cntr_B.t50 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d;

  // MATLAB Function: '<S121>/MATLAB Function' incorporates:
  //   Constant: '<S121>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ie,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg, &ROPOD_4Wheel_TdistZMPC_cntr_B.t50);

  // Sum: '<S121>/Sum' incorporates:
  //   UnitDelay: '<S121>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lr;

  // Product: '<S121>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne = ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev;

  // MATLAB Function: '<S123>/MATLAB Function' incorporates:
  //   Constant: '<S123>/Constant'
  //   Constant: '<S56>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pu,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg);

  // Sum: '<S123>/Sum' incorporates:
  //   UnitDelay: '<S123>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iy =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e;

  // Product: '<S123>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iy;

  // MATLAB Function: '<S46>/speed deflection angle calculation X+'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.t2,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n, ROPOD_4Wheel_TdistZMPC_cntr_B.t34,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e, &ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalculat);

  // MATLAB Function: '<S61>/Calibration1' incorporates:
  //   Memory: '<S61>/Memory2'
  //   Memory: '<S61>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_ft,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ao);
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Subscribe2'
    // Start for MATLABSystem: '<S414>/SourceBlock' incorporates:
    //   Inport: '<S416>/In1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_9640.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2_h);

    // Outputs for Enabled SubSystem: '<S414>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S416>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2_h;
    }

    // End of Start for MATLABSystem: '<S414>/SourceBlock'
    // End of Outputs for SubSystem: '<S414>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe2'
  }

  // MATLAB Function: '<S151>/MATLAB Function' incorporates:
  //   Constant: '<S151>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_p1,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_e);

  // Switch: '<S76>/Switch' incorporates:
  //   Constant: '<S263>/Constant'
  //   Constant: '<S76>/Constant'
  //   RelationalOperator: '<S263>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o >
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

  // End of Switch: '<S76>/Switch'

  // Sum: '<S151>/Sum' incorporates:
  //   UnitDelay: '<S151>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_od =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n;

  // Product: '<S151>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_od;

  // MATLAB Function: '<S149>/MATLAB Function' incorporates:
  //   Constant: '<S149>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dx,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d);

  // Sum: '<S149>/Sum' incorporates:
  //   UnitDelay: '<S149>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j;

  // Product: '<S149>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev2;

  // MATLAB Function: '<S153>/MATLAB Function' incorporates:
  //   Constant: '<S153>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e2,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx);

  // Sum: '<S153>/Sum' incorporates:
  //   UnitDelay: '<S153>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g;

  // Product: '<S153>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2;

  // MATLAB Function: '<S155>/MATLAB Function' incorporates:
  //   Constant: '<S155>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_na,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_an, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch);

  // Sum: '<S155>/Sum' incorporates:
  //   UnitDelay: '<S155>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_my =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bw;

  // Product: '<S155>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g = ROPOD_4Wheel_TdistZMPC_cntr_B.a_an *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_my;

  // MATLAB Function: '<S157>/MATLAB Function' incorporates:
  //   Constant: '<S157>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fn,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_an);

  // Sum: '<S157>/Sum' incorporates:
  //   UnitDelay: '<S157>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo;

  // Product: '<S157>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h;

  // MATLAB Function: '<S159>/MATLAB Function' incorporates:
  //   Constant: '<S159>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ix,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix);

  // Sum: '<S159>/Sum' incorporates:
  //   UnitDelay: '<S159>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f;

  // Product: '<S159>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg = ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j;

  // MATLAB Function: '<S161>/MATLAB Function' incorporates:
  //   Constant: '<S161>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_h,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg);

  // Sum: '<S161>/Sum' incorporates:
  //   UnitDelay: '<S161>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h;

  // Product: '<S161>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mz;

  // MATLAB Function: '<S163>/MATLAB Function' incorporates:
  //   Constant: '<S163>/Constant'
  //   Constant: '<S57>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lv,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ly,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_f, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j);

  // Sum: '<S163>/Sum' incorporates:
  //   UnitDelay: '<S163>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lk =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e0;

  // Product: '<S163>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt = ROPOD_4Wheel_TdistZMPC_cntr_B.a_f *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lk;

  // MATLAB Function: '<S46>/speed deflection angle calculation X-'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g, ROPOD_4Wheel_TdistZMPC_cntr_B.t16,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt, &ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t4, &ROPOD_4Wheel_TdistZMPC_cntr_B.g_f,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalcul_f);

  // MATLAB Function: '<S64>/Calibration1' incorporates:
  //   Memory: '<S64>/Memory2'
  //   Memory: '<S64>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_g,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_a);

  // Switch: '<S46>/Switch2' incorporates:
  //   Constant: '<S46>/Constant6'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value;
  }

  // End of Switch: '<S46>/Switch2'

  // Switch: '<S46>/Switch' incorporates:
  //   Constant: '<S46>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j.Data) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_e;
  }

  // End of Switch: '<S46>/Switch'

  // Sum: '<S46>/Sum2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab;

  // MATLAB Function: '<S62>/Calibration1' incorporates:
  //   Memory: '<S62>/Memory2'
  //   Memory: '<S62>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_n,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_e,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_k,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l);

  // MATLAB Function: '<S65>/Calibration1' incorporates:
  //   Memory: '<S65>/Memory2'
  //   Memory: '<S65>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.t4,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_ed,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_g,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab);

  // Switch: '<S46>/Switch3' incorporates:
  //   Constant: '<S46>/Constant6'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Switch >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch3_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant6_Value;
  }

  // End of Switch: '<S46>/Switch3'

  // Switch: '<S46>/Switch1' incorporates:
  //   Constant: '<S46>/Constant5'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j.Data) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_e;
  }

  // End of Switch: '<S46>/Switch1'

  // Sum: '<S46>/Sum3'
  ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m;

  // Sum: '<S13>/Add1' incorporates:
  //   Gain: '<S13>/Gain'
  //   Gain: '<S13>/Gain1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh + ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k;

  // MATLAB Function: '<S191>/MATLAB Function' incorporates:
  //   Constant: '<S191>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ieq,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_l);

  // Switch: '<S77>/Switch' incorporates:
  //   Constant: '<S264>/Constant'
  //   Constant: '<S77>/Constant'
  //   RelationalOperator: '<S264>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o >
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

  // End of Switch: '<S77>/Switch'

  // Sum: '<S191>/Sum' incorporates:
  //   UnitDelay: '<S191>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gx =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d;

  // Product: '<S191>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p = ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gx;

  // MATLAB Function: '<S189>/MATLAB Function' incorporates:
  //   Constant: '<S189>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pb,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_f);

  // Sum: '<S189>/Sum' incorporates:
  //   UnitDelay: '<S189>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ho =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_er;

  // Product: '<S189>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz = ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ho;

  // MATLAB Function: '<S193>/MATLAB Function' incorporates:
  //   Constant: '<S193>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_eno,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr);

  // Sum: '<S193>/Sum' incorporates:
  //   UnitDelay: '<S193>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_e1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ff;

  // Product: '<S193>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_e1;

  // MATLAB Function: '<S195>/MATLAB Function' incorporates:
  //   Constant: '<S195>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fa,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p);

  // Sum: '<S195>/Sum' incorporates:
  //   UnitDelay: '<S195>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hk =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a;

  // Product: '<S195>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx = ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hk;

  // MATLAB Function: '<S197>/MATLAB Function' incorporates:
  //   Constant: '<S197>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_mf,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_p, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf);

  // Sum: '<S197>/Sum' incorporates:
  //   UnitDelay: '<S197>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fe;

  // Product: '<S197>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it = ROPOD_4Wheel_TdistZMPC_cntr_B.a_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_f;

  // MATLAB Function: '<S199>/MATLAB Function' incorporates:
  //   Constant: '<S199>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_go,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_p);

  // Sum: '<S199>/Sum' incorporates:
  //   UnitDelay: '<S199>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lf =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ii;

  // Product: '<S199>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky = ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lf;

  // MATLAB Function: '<S201>/MATLAB Function' incorporates:
  //   Constant: '<S201>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ce,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc);

  // Sum: '<S201>/Sum' incorporates:
  //   UnitDelay: '<S201>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jn =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dw;

  // Product: '<S201>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jn;

  // MATLAB Function: '<S203>/MATLAB Function' incorporates:
  //   Constant: '<S203>/Constant'
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c4,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_g3,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii);

  // Sum: '<S203>/Sum' incorporates:
  //   UnitDelay: '<S203>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a3;

  // Product: '<S203>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la = ROPOD_4Wheel_TdistZMPC_cntr_B.a_g *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c;

  // MATLAB Function: '<S46>/speed deflection angle calculation Y+'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz, ROPOD_4Wheel_TdistZMPC_cntr_B.t19,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la, &ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_b,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalcul_j);

  // MATLAB Function: '<S60>/Calibration1' incorporates:
  //   Memory: '<S60>/Memory2'
  //   Memory: '<S60>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_b,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_hm,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_f);

  // MATLAB Function: '<S231>/MATLAB Function' incorporates:
  //   Constant: '<S231>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ixy,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_il, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_n);

  // Switch: '<S78>/Switch' incorporates:
  //   Constant: '<S265>/Constant'
  //   Constant: '<S78>/Constant'
  //   RelationalOperator: '<S265>/Compare'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o >
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

  // End of Switch: '<S78>/Switch'

  // Sum: '<S231>/Sum' incorporates:
  //   UnitDelay: '<S231>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cn =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_0 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_il;

  // Product: '<S231>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_il
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cn;

  // MATLAB Function: '<S229>/MATLAB Function' incorporates:
  //   Constant: '<S229>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_br,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_il, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_g);

  // Sum: '<S229>/Sum' incorporates:
  //   UnitDelay: '<S229>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a0;

  // Product: '<S229>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = ROPOD_4Wheel_TdistZMPC_cntr_B.a_il *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n;

  // MATLAB Function: '<S233>/MATLAB Function' incorporates:
  //   Constant: '<S233>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hh,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_il);

  // Sum: '<S233>/Sum' incorporates:
  //   UnitDelay: '<S233>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ng =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ej;

  // Product: '<S233>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d = ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ng;

  // MATLAB Function: '<S235>/MATLAB Function' incorporates:
  //   Constant: '<S235>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ek,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls);

  // Sum: '<S235>/Sum' incorporates:
  //   UnitDelay: '<S235>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_l0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jm;

  // Product: '<S235>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd = ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_l0;

  // MATLAB Function: '<S237>/MATLAB Function' incorporates:
  //   Constant: '<S237>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_du,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx);

  // Sum: '<S237>/Sum' incorporates:
  //   UnitDelay: '<S237>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gf =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_4 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m;

  // Product: '<S237>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm = ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gf;

  // MATLAB Function: '<S239>/MATLAB Function' incorporates:
  //   Constant: '<S239>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e5,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq);

  // Sum: '<S239>/Sum' incorporates:
  //   UnitDelay: '<S239>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p;

  // Product: '<S239>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib = ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg
    * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg;

  // MATLAB Function: '<S241>/MATLAB Function' incorporates:
  //   Constant: '<S241>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jy,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg);

  // Sum: '<S241>/Sum' incorporates:
  //   UnitDelay: '<S241>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_6 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_al;

  // Product: '<S241>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw;

  // MATLAB Function: '<S243>/MATLAB Function' incorporates:
  //   Constant: '<S243>/Constant'
  //   Constant: '<S59>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_iz,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_oi,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m);

  // Sum: '<S243>/Sum' incorporates:
  //   UnitDelay: '<S243>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_js =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_7 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jx;

  // Product: '<S243>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_js;

  // MATLAB Function: '<S46>/speed deflection angle calculation Y-'
  speeddeflectionanglecalculation(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5,
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27, ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms,
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a, &ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t4, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_speeddeflectionanglecalcu_fc);

  // MATLAB Function: '<S66>/Calibration1' incorporates:
  //   Memory: '<S66>/Memory2'
  //   Memory: '<S66>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c4,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.i_e,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m);

  // Sum: '<S46>/Sum5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk -
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h;

  // DiscreteStateSpace: '<S54>/Internal'
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

  // MATLAB Function: '<S63>/Calibration1' incorporates:
  //   Memory: '<S63>/Memory2'
  //   Memory: '<S63>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_gi,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t35,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h);

  // MATLAB Function: '<S67>/Calibration1' incorporates:
  //   Memory: '<S67>/Memory2'
  //   Memory: '<S67>/Memory3'

  ROPOD_4Wheel_Tdist_Calibration1(ROPOD_4Wheel_TdistZMPC_cntr_B.t4,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_a,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_c,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle, &ROPOD_4Wheel_TdistZMPC_cntr_B.i_f,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.data_out);

  // Sum: '<S46>/Sum6'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum6 = ROPOD_4Wheel_TdistZMPC_cntr_B.t35 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;

  // DiscreteStateSpace: '<S55>/Internal'
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

  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cy *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Internal + ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
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
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.t35 <
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
          if (ROPOD_4Wheel_TdistZMPC_cntr_B.t35 >
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
          } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.t35 >
                     ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_min + 2.0) {
            ROPOD_4Wheel_TdistZMPC_cntr_DW.is_Mode1_Operation_mode =
              ROPOD__IN_Interaction_left_side;
            ROPOD_4Wheel_TdistZMPC_cntr_B.state = 3U;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y = 1.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_min = 0.0;
            ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPCy_Fd_max =
              ROPOD_4Wheel_TdistZMPC_cntr_P.Fd_max;
          } else {
            if (ROPOD_4Wheel_TdistZMPC_cntr_B.t35 <
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

  // BusAssignment: '<S429>/Bus Assignment'
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k.Data =
    ROPOD_4Wheel_TdistZMPC_cntr_B.state;

  // RateTransition: '<S429>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish4'
    // Start for MATLABSystem: '<S423>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9627.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_k);

    // End of Outputs for SubSystem: '<S9>/Publish4'
  }

  // End of RateTransition: '<S429>/Rate Transition'

  // MATLAB Function: '<S46>/Force_per_sensor' incorporates:
  //   Constant: '<S46>/Constant1'
  //   Constant: '<S46>/Constant2'
  //   Constant: '<S46>/Constant3'
  //   Constant: '<S46>/Constant4'
  //   SignalConversion: '<S53>/TmpSignal ConversionAt SFunction Inport1'
  //   SignalConversion: '<S53>/TmpSignal ConversionAt SFunction Inport2'
  //   SignalConversion: '<S53>/TmpSignal ConversionAt SFunction Inport3'
  //   SignalConversion: '<S53>/TmpSignal ConversionAt SFunction Inport4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp[0] = ROPOD_4Wheel_TdistZMPC_cntr_P.k_cx
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t34;
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
    ROPOD_4Wheel_TdistZMPC_cntr_P.b_cx * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
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
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t19 + ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
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
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t27 + ROPOD_4Wheel_TdistZMPC_cntr_P.b_cy *
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
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[0] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[1] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[2] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[3] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[4] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm);
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[5] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm);
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[6] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym);
  ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[7] =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym);

  // BusAssignment: '<S426>/Bus Assignment' incorporates:
  //   Constant: '<S432>/Constant'
  //   MATLAB Function: '<S46>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_o;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.Y =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Yp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Yp);

  // RateTransition: '<S426>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish'
    // Start for MATLABSystem: '<S419>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9614.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish'
  }

  // End of RateTransition: '<S426>/Rate Transition'

  // BusAssignment: '<S425>/Bus Assignment' incorporates:
  //   Constant: '<S431>/Constant'
  //   MATLAB Function: '<S46>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_j;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.X =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xp);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xp);

  // RateTransition: '<S425>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish1'
    // Start for MATLABSystem: '<S420>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9624.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish1'
  }

  // End of RateTransition: '<S425>/Rate Transition'

  // BusAssignment: '<S427>/Bus Assignment' incorporates:
  //   Constant: '<S433>/Constant'
  //   MATLAB Function: '<S46>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_i;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.X =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Xm);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Xm);

  // RateTransition: '<S427>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish2'
    // Start for MATLABSystem: '<S421>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9625.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish2'
  }

  // End of RateTransition: '<S427>/Rate Transition'

  // BusAssignment: '<S428>/Bus Assignment' incorporates:
  //   Constant: '<S434>/Constant'
  //   MATLAB Function: '<S46>/Force_per_sensor'

  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_d;
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Force.Y =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Force_Ym);
  ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p.Wrench.Torque.Z =
    ROPOD_4Wheel_TdistZMPC_cn_sum_d(ROPOD_4Wheel_TdistZMPC_cntr_B.Torque_Ym);

  // RateTransition: '<S428>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S9>/Publish3'
    // Start for MATLABSystem: '<S422>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9626.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_p);

    // End of Outputs for SubSystem: '<S9>/Publish3'

    // RelationalOperator: '<S38>/Compare' incorporates:
    //   Constant: '<S38>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k !=
       ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant1_const);

    // BusAssignment: '<S430>/Bus Assignment'
    ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_h.Data =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k;

    // Outputs for Atomic SubSystem: '<S9>/Publish5'
    // Start for MATLABSystem: '<S424>/SinkBlock'
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9643.publish
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.BusAssignment_h);

    // End of Outputs for SubSystem: '<S9>/Publish5'
  }

  // End of RateTransition: '<S428>/Rate Transition'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter14'
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

    // MATLAB Function: '<S342>/MATLAB Function' incorporates:
    //   Constant: '<S342>/Constant'
    //   Gain: '<S331>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter14'
    //   MATLABSystem: '<S5>/Get Parameter14'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_kb,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_n, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_o);
  }

  // MATLAB Function: '<S42>/Gl_matrix' incorporates:
  //   SignalConversion: '<S268>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t41 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t42 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t41 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg * 0.5;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S8>/Get Parameter'
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

    // MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  // Product: '<S304>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S304>/sample time'
  //
  //  About '<S304>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S8>/Get Parameter1'
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

    // MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S417>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1 =
      Sub_ROPOD_4Wheel_TdistZMPC_cntr_1899.getLatestMessage
      (&ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S417>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S418>/Enable'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
      // Inport: '<S418>/In1' incorporates:
      //   MATLABSystem: '<S417>/SourceBlock'
      //   MATLABSystem: '<S417>/SourceBlock'

      ROPOD_4Wheel_TdistZMPC_cntr_B.In1 =
        ROPOD_4Wheel_TdistZMPC_cntr_B.b_varargout_2;
    }

    // End of Outputs for SubSystem: '<S417>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'
  }

  // Delay: '<S303>/Enabled Delay'
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay =
      ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE;
  }

  // End of Delay: '<S303>/Enabled Delay'

  // Gain: '<S303>/Gain6' incorporates:
  //   Constant: '<S313>/Constant'
  //   RelationalOperator: '<S313>/Compare'
  //   Sum: '<S303>/Subtract'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i = (uint8_T)
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o -
     ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay >=
     ROPOD_4Wheel_TdistZMPC_cntr_P.CompareToConstant_const_i ? (int32_T)
     ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain_k : 0);

  // Switch: '<S17>/Switch1' incorporates:
  //   Constant: '<S17>/Constant1'
  //   Switch: '<S303>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_hl;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch_Threshold_l) {
    // Switch: '<S303>/Switch' incorporates:
    //   Constant: '<S303>/Constant'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pg;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Linear.X;
  }

  // End of Switch: '<S17>/Switch1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S302>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_j *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  }

  // Switch: '<S307>/Switch2' incorporates:
  //   RelationalOperator: '<S307>/LowerRelop1'
  //   RelationalOperator: '<S307>/UpperRelop'
  //   Switch: '<S307>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1) {
      // Switch: '<S307>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1;
    }
  }

  // End of Switch: '<S307>/Switch2'

  // Sum: '<S304>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S304>/Delay Input2'
  //
  //  Block description for '<S304>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S304>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S302>/Gain'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain_Gain_p *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy;
  }

  // Switch: '<S310>/Switch2' incorporates:
  //   RelationalOperator: '<S310>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j >
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e)) {
    // Product: '<S304>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S304>/sample time'
    //
    //  About '<S304>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt;

    // Switch: '<S310>/Switch' incorporates:
    //   RelationalOperator: '<S310>/UpperRelop'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j;
    }

    // End of Switch: '<S310>/Switch'
  }

  // End of Switch: '<S310>/Switch2'

  // Sum: '<S304>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S304>/Delay Input2'
  //
  //  Block description for '<S304>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S304>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE;

  // Product: '<S305>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S305>/sample time'
  //
  //  About '<S305>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_l;

  // Switch: '<S17>/Switch2' incorporates:
  //   Constant: '<S17>/Constant2'
  //   Switch: '<S303>/Switch1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_f) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_j;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold_j) {
    // Switch: '<S303>/Switch1' incorporates:
    //   Constant: '<S303>/Constant1'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_d;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Linear.Y;
  }

  // End of Switch: '<S17>/Switch2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S302>/Gain3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  }

  // Switch: '<S308>/Switch2' incorporates:
  //   RelationalOperator: '<S308>/LowerRelop1'
  //   RelationalOperator: '<S308>/UpperRelop'
  //   Switch: '<S308>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3) {
      // Switch: '<S308>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3;
    }
  }

  // End of Switch: '<S308>/Switch2'

  // Sum: '<S305>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S305>/Delay Input2'
  //
  //  Block description for '<S305>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S305>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S302>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_j *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_xy;
  }

  // Switch: '<S311>/Switch2' incorporates:
  //   RelationalOperator: '<S311>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i >
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e)) {
    // Product: '<S305>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S305>/sample time'
    //
    //  About '<S305>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_l;

    // Switch: '<S311>/Switch' incorporates:
    //   RelationalOperator: '<S311>/UpperRelop'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i;
    }

    // End of Switch: '<S311>/Switch'
  }

  // End of Switch: '<S311>/Switch2'

  // Sum: '<S305>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S305>/Delay Input2'
  //
  //  Block description for '<S305>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S305>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S8>/Get Parameter2'
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

    // MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  // Product: '<S306>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S306>/sample time'
  //
  //  About '<S306>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta *
    ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_b;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S8>/Get Parameter3'
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

    // MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta =
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Gain: '<S302>/Gain5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta;
  }

  // Switch: '<S17>/Switch3' incorporates:
  //   Constant: '<S17>/Constant3'
  //   Switch: '<S303>/Switch2'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch3_Threshold_c) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant3_Value;
  } else if (ROPOD_4Wheel_TdistZMPC_cntr_B.Gain6_i >
             ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_n) {
    // Switch: '<S303>/Switch2' incorporates:
    //   Constant: '<S303>/Constant2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_p;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.In1.Angular.Z;
  }

  // End of Switch: '<S17>/Switch3'

  // Switch: '<S309>/Switch2' incorporates:
  //   RelationalOperator: '<S309>/LowerRelop1'
  //   RelationalOperator: '<S309>/UpperRelop'
  //   Switch: '<S309>/Switch'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n >
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_vel_theta;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n <
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5) {
      // Switch: '<S309>/Switch'
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain5;
    }
  }

  // End of Switch: '<S309>/Switch2'

  // Sum: '<S306>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S306>/Delay Input2'
  //
  //  Block description for '<S306>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S306>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n -=
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S302>/Gain4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_acc_theta;
  }

  // Switch: '<S312>/Switch2' incorporates:
  //   RelationalOperator: '<S312>/LowerRelop1'

  if (!(ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n >
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e)) {
    // Product: '<S306>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S306>/sample time'
    //
    //  About '<S306>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_TdistZMPC_cntr_B.t34 = ROPOD_4Wheel_TdistZMPC_cntr_B.Gain4 *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sampletime_WtEt_b;

    // Switch: '<S312>/Switch' incorporates:
    //   RelationalOperator: '<S312>/UpperRelop'

    if (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n <
        ROPOD_4Wheel_TdistZMPC_cntr_B.t34) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.t34;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n;
    }

    // End of Switch: '<S312>/Switch'
  }

  // End of Switch: '<S312>/Switch2'

  // Sum: '<S306>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S306>/Delay Input2'
  //
  //  Block description for '<S306>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S306>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k;

  // MATLAB Function: '<S42>/Gl_matrix' incorporates:
  //   SignalConversion: '<S268>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[0] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[4] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[5] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[6] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[7] = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1
    + ROPOD_4Wheel_TdistZMPC_cntr_B.Fd) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[8] = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1
    - ROPOD_4Wheel_TdistZMPC_cntr_B.Fd) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[9] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[10] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp
    - ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[11] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[12] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[13] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t15 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[14] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t15 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[15] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[16] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[17] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[18] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[19] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[20] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[21] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[22] = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0
    - ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[23] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[24] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[25] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[26] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t9 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[27] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[28] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp
    - ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[29] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[30] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[31] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[32] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[33] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t41 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[34] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[35] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[36] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[37] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4)
    * -ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[38] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[39] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) - ROPOD_4Wheel_TdistZMPC_cntr_B.t4)
    * -ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[40] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k +
      ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp) + ROPOD_4Wheel_TdistZMPC_cntr_B.t4)
    * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[41] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h +
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[42] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h +
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[43] =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih +
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt) -
     ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[44] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih +
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt) +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t4) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;

  // Product: '<S42>/Product3' incorporates:
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S20>/Sum'

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 15;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 30] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n +
      (ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 15] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i +
       ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[ROPOD_4Wheel_TdistZMPC_cntr_B.i] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j);
  }

  // End of Product: '<S42>/Product3'

  // Product: '<S330>/Product9' incorporates:
  //   Constant: '<S1>/Constant'
  //   Sum: '<S20>/Sum'

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      (ROPOD_4Wheel_TdistZMPC_cntr_B.dv1[7 + ROPOD_4Wheel_TdistZMPC_cntr_B.i] -
       ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i]) *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ci[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
  }

  // End of Product: '<S330>/Product9'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter10'
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

    // MATLABSystem: '<S5>/Get Parameter10'
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  // Product: '<S331>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S344>/POut' incorporates:
  //   Constant: '<S340>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_e;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter11'
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

    // Gain: '<S340>/Gain2' incorporates:
    //   Constant: '<S340>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter11'
    //   MATLABSystem: '<S5>/Get Parameter11'
    //   Product: '<S340>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_e *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_e;
  }

  // DiscreteIntegrator: '<S344>/Integrator' incorporates:
  //   Product: '<S344>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_l_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_c);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_l_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE;

  // End of DiscreteIntegrator: '<S344>/Integrator'

  // Product: '<S344>/DOut' incorporates:
  //   Constant: '<S340>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_a;

  // SampleTimeMath: '<S345>/TSamp' incorporates:
  //   Constant: '<S340>/Constant5'
  //
  //  About '<S345>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt;

  // Math: '<S345>/Reciprocal' incorporates:
  //   Constant: '<S345>/Constant'
  //   Sum: '<S345>/SumDen'
  //
  //  About '<S345>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hg +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S345>/Filter Differentiator TF' incorporates:
  //   Constant: '<S345>/Constant'
  //   Product: '<S345>/Divide'
  //   Sum: '<S345>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_InitialS;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hg) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states;

  // Sum: '<S344>/Sum' incorporates:
  //   Constant: '<S340>/Constant5'
  //   DiscreteTransferFcn: '<S345>/Filter Differentiator TF'
  //   Product: '<S345>/DenCoefOut'
  //   Product: '<S345>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoef[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoef[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_h +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l);

  // DiscreteIntegrator: '<S346>/Integrator' incorporates:
  //   Constant: '<S341>/Constant2'
  //   Product: '<S346>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_k_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_b *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_c);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_k_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_f;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter12'
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

    // Gain: '<S341>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter12'
    //   MATLABSystem: '<S5>/Get Parameter12'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Start for MATLABSystem: '<S5>/Get Parameter13'
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

    // Gain: '<S341>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter13'
    //   MATLABSystem: '<S5>/Get Parameter13'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_b *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S341>/Divide1' incorporates:
    //   Constant: '<S341>/Constant1'
    //   Product: '<S341>/Divide'
    //   Sum: '<S341>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_k -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S347>/TSamp' incorporates:
  //   DataTypeConversion: '<S347>/Passthrough for tuning'
  //
  //  About '<S347>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_h;

  // Math: '<S347>/Reciprocal' incorporates:
  //   Constant: '<S347>/Constant'
  //   Sum: '<S347>/SumDen'
  //
  //  About '<S347>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dm +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S347>/Filter Differentiator TF' incorporates:
  //   Constant: '<S347>/Constant'
  //   Product: '<S346>/DOut'
  //   Product: '<S347>/Divide'
  //   Sum: '<S347>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dm) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l;

  // Sum: '<S346>/Sum' incorporates:
  //   Constant: '<S341>/Constant4'
  //   DataTypeConversion: '<S347>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S347>/Filter Differentiator TF'
  //   Product: '<S346>/POut'
  //   Product: '<S347>/DenCoefOut'
  //   Product: '<S347>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_d[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_d[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_k +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k);

  // Sum: '<S342>/Sum' incorporates:
  //   UnitDelay: '<S342>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lv;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S351>/MATLAB Function' incorporates:
    //   Constant: '<S351>/Constant'
    //   Gain: '<S332>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ea *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_cc,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_pd, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_a);
  }

  // Product: '<S332>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S353>/POut' incorporates:
  //   Constant: '<S349>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kt;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S349>/Gain2' incorporates:
    //   Constant: '<S349>/Constant4'
    //   Product: '<S349>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kt *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_d;
  }

  // DiscreteIntegrator: '<S353>/Integrator' incorporates:
  //   Product: '<S353>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_m != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_l;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_jg_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_j *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_b);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_jg_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d;

  // End of DiscreteIntegrator: '<S353>/Integrator'

  // Product: '<S353>/DOut' incorporates:
  //   Constant: '<S349>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l5;

  // SampleTimeMath: '<S354>/TSamp' incorporates:
  //   Constant: '<S349>/Constant5'
  //
  //  About '<S354>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_k *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_m;

  // Math: '<S354>/Reciprocal' incorporates:
  //   Constant: '<S354>/Constant'
  //   Sum: '<S354>/SumDen'
  //
  //  About '<S354>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ks +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S354>/Filter Differentiator TF' incorporates:
  //   Constant: '<S354>/Constant'
  //   Product: '<S354>/Divide'
  //   Sum: '<S354>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__h ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__h !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_e;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih = ROPOD_4Wheel_TdistZMPC_cntr_B.Fd -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ks) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f;

  // Sum: '<S353>/Sum' incorporates:
  //   Constant: '<S349>/Constant5'
  //   DiscreteTransferFcn: '<S354>/Filter Differentiator TF'
  //   Product: '<S354>/DenCoefOut'
  //   Product: '<S354>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_m[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_m[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_k +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg);

  // DiscreteIntegrator: '<S355>/Integrator' incorporates:
  //   Constant: '<S350>/Constant2'
  //   Product: '<S355>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_kt_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_d *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_d);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_kt_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S350>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_a *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S350>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_o *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S350>/Divide1' incorporates:
    //   Constant: '<S350>/Constant1'
    //   Product: '<S350>/Divide'
    //   Sum: '<S350>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_kp -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S356>/TSamp' incorporates:
  //   DataTypeConversion: '<S356>/Passthrough for tuning'
  //
  //  About '<S356>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_l;

  // Math: '<S356>/Reciprocal' incorporates:
  //   Constant: '<S356>/Constant'
  //   Sum: '<S356>/SumDen'
  //
  //  About '<S356>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nz +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S356>/Filter Differentiator TF' incorporates:
  //   Constant: '<S356>/Constant'
  //   Product: '<S355>/DOut'
  //   Product: '<S356>/Divide'
  //   Sum: '<S356>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j;

  // Sum: '<S355>/Sum' incorporates:
  //   Constant: '<S350>/Constant4'
  //   DataTypeConversion: '<S356>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S356>/Filter Differentiator TF'
  //   Product: '<S355>/POut'
  //   Product: '<S356>/DenCoefOut'
  //   Product: '<S356>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Fd =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_b[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_b[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Fd * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hb +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_o +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt);

  // Sum: '<S351>/Sum' incorporates:
  //   UnitDelay: '<S351>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz = ROPOD_4Wheel_TdistZMPC_cntr_B.Fd +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S360>/MATLAB Function' incorporates:
    //   Constant: '<S360>/Constant'
    //   Gain: '<S333>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hc,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_j, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_j);
  }

  // Product: '<S333>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S362>/POut' incorporates:
  //   Constant: '<S358>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_h;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S358>/Gain2' incorporates:
    //   Constant: '<S358>/Constant4'
    //   Product: '<S358>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_h *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_b;
  }

  // DiscreteIntegrator: '<S362>/Integrator' incorporates:
  //   Product: '<S362>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_b != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_d;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_nx_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_bn *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_p);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_nx_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i;

  // End of DiscreteIntegrator: '<S362>/Integrator'

  // Product: '<S362>/DOut' incorporates:
  //   Constant: '<S358>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nn;

  // SampleTimeMath: '<S363>/TSamp' incorporates:
  //   Constant: '<S358>/Constant5'
  //
  //  About '<S363>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_a *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_c;

  // Math: '<S363>/Reciprocal' incorporates:
  //   Constant: '<S363>/Constant'
  //   Sum: '<S363>/SumDen'
  //
  //  About '<S363>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e2s +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S363>/Filter Differentiator TF' incorporates:
  //   Constant: '<S363>/Constant'
  //   Product: '<S363>/Divide'
  //   Sum: '<S363>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_a;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_e2s) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d;

  // Sum: '<S362>/Sum' incorporates:
  //   Constant: '<S358>/Constant5'
  //   DiscreteTransferFcn: '<S363>/Filter Differentiator TF'
  //   Product: '<S363>/DenCoefOut'
  //   Product: '<S363>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_j[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_j[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_a +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx);

  // DiscreteIntegrator: '<S364>/Integrator' incorporates:
  //   Constant: '<S359>/Constant2'
  //   Product: '<S364>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_ky_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_e *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_m);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_ky_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_l;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S359>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ip *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S359>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_og *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S359>/Divide1' incorporates:
    //   Constant: '<S359>/Constant1'
    //   Product: '<S359>/Divide'
    //   Sum: '<S359>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_b =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_b -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S365>/TSamp' incorporates:
  //   DataTypeConversion: '<S365>/Passthrough for tuning'
  //
  //  About '<S365>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_o;

  // Math: '<S365>/Reciprocal' incorporates:
  //   Constant: '<S365>/Constant'
  //   Sum: '<S365>/SumDen'
  //
  //  About '<S365>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jf +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S365>/Filter Differentiator TF' incorporates:
  //   Constant: '<S365>/Constant'
  //   Product: '<S364>/DOut'
  //   Product: '<S365>/Divide'
  //   Sum: '<S365>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_b -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jf) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i;

  // Sum: '<S364>/Sum' incorporates:
  //   Constant: '<S359>/Constant4'
  //   DataTypeConversion: '<S365>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S365>/Filter Differentiator TF'
  //   Product: '<S364>/POut'
  //   Product: '<S365>/DenCoefOut'
  //   Product: '<S365>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_e[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_e[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_c +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky);

  // Sum: '<S360>/Sum' incorporates:
  //   UnitDelay: '<S360>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S369>/MATLAB Function' incorporates:
    //   Constant: '<S369>/Constant'
    //   Gain: '<S334>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_h *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_dz,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_c, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_k);
  }

  // Product: '<S334>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S371>/POut' incorporates:
  //   Constant: '<S367>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_b;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S367>/Gain2' incorporates:
    //   Constant: '<S367>/Constant4'
    //   Product: '<S367>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_b *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_o;
  }

  // DiscreteIntegrator: '<S371>/Integrator' incorporates:
  //   Product: '<S371>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_l != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_c;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_d_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_n *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_a);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_d_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j;

  // End of DiscreteIntegrator: '<S371>/Integrator'

  // Product: '<S371>/DOut' incorporates:
  //   Constant: '<S367>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_j5;

  // SampleTimeMath: '<S372>/TSamp' incorporates:
  //   Constant: '<S367>/Constant5'
  //
  //  About '<S372>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_n;

  // Math: '<S372>/Reciprocal' incorporates:
  //   Constant: '<S372>/Constant'
  //   Sum: '<S372>/SumDen'
  //
  //  About '<S372>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f3 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S372>/Filter Differentiator TF' incorporates:
  //   Constant: '<S372>/Constant'
  //   Product: '<S372>/Divide'
  //   Sum: '<S372>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__d ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__d !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_d;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_f3) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im;

  // Sum: '<S371>/Sum' incorporates:
  //   Constant: '<S367>/Constant5'
  //   DiscreteTransferFcn: '<S372>/Filter Differentiator TF'
  //   Product: '<S372>/DenCoefOut'
  //   Product: '<S372>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_g[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_g[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_n +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d);

  // DiscreteIntegrator: '<S373>/Integrator' incorporates:
  //   Constant: '<S368>/Constant2'
  //   Product: '<S373>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_dm_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_je *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_l);
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_dm_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S368>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_io *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S368>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_k *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S368>/Divide1' incorporates:
    //   Constant: '<S368>/Constant1'
    //   Product: '<S368>/Divide'
    //   Sum: '<S368>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_c -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S374>/TSamp' incorporates:
  //   DataTypeConversion: '<S374>/Passthrough for tuning'
  //
  //  About '<S374>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_cd;

  // Math: '<S374>/Reciprocal' incorporates:
  //   Constant: '<S374>/Constant'
  //   Sum: '<S374>/SumDen'
  //
  //  About '<S374>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ba +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S374>/Filter Differentiator TF' incorporates:
  //   Constant: '<S374>/Constant'
  //   Product: '<S373>/DOut'
  //   Product: '<S374>/Divide'
  //   Sum: '<S374>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ba) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k;

  // Sum: '<S373>/Sum' incorporates:
  //   Constant: '<S368>/Constant4'
  //   DataTypeConversion: '<S374>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S374>/Filter Differentiator TF'
  //   Product: '<S373>/POut'
  //   Product: '<S374>/DenCoefOut'
  //   Product: '<S374>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_k[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_k[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_h0 + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm);

  // Sum: '<S369>/Sum' incorporates:
  //   UnitDelay: '<S369>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ev;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S378>/MATLAB Function' incorporates:
    //   Constant: '<S378>/Constant'
    //   Gain: '<S335>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_jg *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_jt,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_o, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_c);
  }

  // Product: '<S335>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S380>/POut' incorporates:
  //   Constant: '<S376>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S376>/Gain2' incorporates:
    //   Constant: '<S376>/Constant4'
    //   Product: '<S376>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_pu =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_f;
  }

  // DiscreteIntegrator: '<S380>/Integrator' incorporates:
  //   Product: '<S380>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_j;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_cal_angle_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_k *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_pu);
  ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_cal_angle_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p;

  // End of DiscreteIntegrator: '<S380>/Integrator'

  // Product: '<S380>/DOut' incorporates:
  //   Constant: '<S376>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_md;

  // SampleTimeMath: '<S381>/TSamp' incorporates:
  //   Constant: '<S376>/Constant5'
  //
  //  About '<S381>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_l *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_lp;

  // Math: '<S381>/Reciprocal' incorporates:
  //   Constant: '<S381>/Constant'
  //   Sum: '<S381>/SumDen'
  //
  //  About '<S381>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_fh +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S381>/Filter Differentiator TF' incorporates:
  //   Constant: '<S381>/Constant'
  //   Product: '<S381>/Divide'
  //   Sum: '<S381>/SumNum'

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
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a;

  // Sum: '<S380>/Sum' incorporates:
  //   Constant: '<S376>/Constant5'
  //   DiscreteTransferFcn: '<S381>/Filter Differentiator TF'
  //   Product: '<S381>/DenCoefOut'
  //   Product: '<S381>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_l[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_l[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_l +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c +
     ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle);

  // DiscreteIntegrator: '<S382>/Integrator' incorporates:
  //   Constant: '<S377>/Constant2'
  //   Product: '<S382>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_c_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_bnj *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_c0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_c_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_py;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S377>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_d2 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S377>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_g *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S377>/Divide1' incorporates:
    //   Constant: '<S377>/Constant1'
    //   Product: '<S377>/Divide'
    //   Sum: '<S377>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_h =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_of -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S383>/TSamp' incorporates:
  //   DataTypeConversion: '<S383>/Passthrough for tuning'
  //
  //  About '<S383>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_d;

  // Math: '<S383>/Reciprocal' incorporates:
  //   Constant: '<S383>/Constant'
  //   Sum: '<S383>/SumDen'
  //
  //  About '<S383>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gr +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S383>/Filter Differentiator TF' incorporates:
  //   Constant: '<S383>/Constant'
  //   Product: '<S382>/DOut'
  //   Product: '<S383>/Divide'
  //   Sum: '<S383>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_h -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_gr) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p;

  // Sum: '<S382>/Sum' incorporates:
  //   Constant: '<S377>/Constant4'
  //   DataTypeConversion: '<S383>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S383>/Filter Differentiator TF'
  //   Product: '<S382>/POut'
  //   Product: '<S383>/DenCoefOut'
  //   Product: '<S383>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_a[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_j +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_a[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_n
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_iu +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c);

  // Sum: '<S378>/Sum' incorporates:
  //   UnitDelay: '<S378>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_ac = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kp;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S387>/MATLAB Function' incorporates:
    //   Constant: '<S387>/Constant'
    //   Gain: '<S336>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ap *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ad,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_h, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_l);
  }

  // Product: '<S336>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S389>/POut' incorporates:
  //   Constant: '<S385>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kn;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S385>/Gain2' incorporates:
    //   Constant: '<S385>/Constant4'
    //   Product: '<S385>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_kn *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_g;
  }

  // DiscreteIntegrator: '<S389>/Integrator' incorporates:
  //   Product: '<S389>/IOut'

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

  // End of DiscreteIntegrator: '<S389>/Integrator'

  // Product: '<S389>/DOut' incorporates:
  //   Constant: '<S385>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_hf;

  // SampleTimeMath: '<S390>/TSamp' incorporates:
  //   Constant: '<S385>/Constant5'
  //
  //  About '<S390>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_m *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_b;

  // Math: '<S390>/Reciprocal' incorporates:
  //   Constant: '<S390>/Constant'
  //   Sum: '<S390>/SumDen'
  //
  //  About '<S390>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ej +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S390>/Filter Differentiator TF' incorporates:
  //   Constant: '<S390>/Constant'
  //   Product: '<S390>/Divide'
  //   Sum: '<S390>/SumNum'

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
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz;

  // Sum: '<S389>/Sum' incorporates:
  //   Constant: '<S385>/Constant5'
  //   DiscreteTransferFcn: '<S390>/Filter Differentiator TF'
  //   Product: '<S390>/DenCoefOut'
  //   Product: '<S390>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eq[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eq[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_m +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix);

  // DiscreteIntegrator: '<S391>/Integrator' incorporates:
  //   Constant: '<S386>/Constant2'
  //   Product: '<S391>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_o *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_a0);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_fd;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S386>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_fc *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S386>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S386>/Divide1' incorporates:
    //   Constant: '<S386>/Constant1'
    //   Product: '<S386>/Divide'
    //   Sum: '<S386>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_iu =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_e -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S392>/TSamp' incorporates:
  //   DataTypeConversion: '<S392>/Passthrough for tuning'
  //
  //  About '<S392>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_he;

  // Math: '<S392>/Reciprocal' incorporates:
  //   Constant: '<S392>/Constant'
  //   Sum: '<S392>/SumDen'
  //
  //  About '<S392>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l4 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S392>/Filter Differentiator TF' incorporates:
  //   Constant: '<S392>/Constant'
  //   Product: '<S391>/DOut'
  //   Product: '<S392>/Divide'
  //   Sum: '<S392>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_kz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_iu
    - (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_l4) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g;

  // Sum: '<S391>/Sum' incorporates:
  //   Constant: '<S386>/Constant4'
  //   DataTypeConversion: '<S392>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S392>/Filter Differentiator TF'
  //   Product: '<S391>/POut'
  //   Product: '<S392>/DenCoefOut'
  //   Product: '<S392>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_o[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_kz +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_o[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_g + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e);

  // Sum: '<S387>/Sum' incorporates:
  //   UnitDelay: '<S387>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_gd = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr
    + ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ez;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S396>/MATLAB Function' incorporates:
    //   Constant: '<S396>/Constant'
    //   Gain: '<S337>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_n *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_oif,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_p, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i);
  }

  // Product: '<S337>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S398>/POut' incorporates:
  //   Constant: '<S394>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_cu;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S394>/Gain2' incorporates:
    //   Constant: '<S394>/Constant4'
    //   Product: '<S394>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_cu *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_o0;
  }

  // DiscreteIntegrator: '<S398>/Integrator' incorporates:
  //   Product: '<S398>/IOut'

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

  // End of DiscreteIntegrator: '<S398>/Integrator'

  // Product: '<S398>/DOut' incorporates:
  //   Constant: '<S394>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_po;

  // SampleTimeMath: '<S399>/TSamp' incorporates:
  //   Constant: '<S394>/Constant5'
  //
  //  About '<S399>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_f *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_e;

  // Math: '<S399>/Reciprocal' incorporates:
  //   Constant: '<S399>/Constant'
  //   Sum: '<S399>/SumDen'
  //
  //  About '<S399>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lu +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S399>/Filter Differentiator TF' incorporates:
  //   Constant: '<S399>/Constant'
  //   Product: '<S399>/Divide'
  //   Sum: '<S399>/SumNum'

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
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4;

  // Sum: '<S398>/Sum' incorporates:
  //   Constant: '<S394>/Constant5'
  //   DiscreteTransferFcn: '<S399>/Filter Differentiator TF'
  //   Product: '<S399>/DenCoefOut'
  //   Product: '<S399>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ka[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_au +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ka[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_f +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e);

  // DiscreteIntegrator: '<S400>/Integrator' incorporates:
  //   Constant: '<S395>/Constant2'
  //   Product: '<S400>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_ij *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_k);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ik;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S395>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_od *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S395>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S395>/Divide1' incorporates:
    //   Constant: '<S395>/Constant1'
    //   Product: '<S395>/Divide'
    //   Sum: '<S395>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_hy -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S401>/TSamp' incorporates:
  //   DataTypeConversion: '<S401>/Passthrough for tuning'
  //
  //  About '<S401>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_hw;

  // Math: '<S401>/Reciprocal' incorporates:
  //   Constant: '<S401>/Constant'
  //   Sum: '<S401>/SumDen'
  //
  //  About '<S401>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_eu +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S401>/Filter Differentiator TF' incorporates:
  //   Constant: '<S401>/Constant'
  //   Product: '<S400>/DOut'
  //   Product: '<S401>/Divide'
  //   Sum: '<S401>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_eu) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m;

  // Sum: '<S400>/Sum' incorporates:
  //   Constant: '<S395>/Constant4'
  //   DataTypeConversion: '<S401>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S401>/Filter Differentiator TF'
  //   Product: '<S400>/POut'
  //   Product: '<S401>/DenCoefOut'
  //   Product: '<S401>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_f[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f3 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_f[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_m
    + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_a +
       ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n);

  // Sum: '<S396>/Sum' incorporates:
  //   UnitDelay: '<S396>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n = ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lu;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S405>/MATLAB Function' incorporates:
    //   Constant: '<S405>/Constant'
    //   Gain: '<S338>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_el *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lw,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a);
  }

  // Product: '<S338>/Product5'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7] *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain;

  // Product: '<S407>/POut' incorporates:
  //   Constant: '<S403>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_bc;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S403>/Gain2' incorporates:
    //   Constant: '<S403>/Constant4'
    //   Product: '<S403>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_cs =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_bc *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_p;
  }

  // DiscreteIntegrator: '<S407>/Integrator' incorporates:
  //   Product: '<S407>/IOut'

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

  // End of DiscreteIntegrator: '<S407>/Integrator'

  // Product: '<S407>/DOut' incorporates:
  //   Constant: '<S403>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4 = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ee;

  // SampleTimeMath: '<S408>/TSamp' incorporates:
  //   Constant: '<S403>/Constant5'
  //
  //  About '<S408>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_em *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_f;

  // Math: '<S408>/Reciprocal' incorporates:
  //   Constant: '<S408>/Constant'
  //   Sum: '<S408>/SumDen'
  //
  //  About '<S408>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_cie +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2);

  // DiscreteTransferFcn: '<S408>/Filter Differentiator TF' incorporates:
  //   Constant: '<S408>/Constant'
  //   Product: '<S408>/Divide'
  //   Sum: '<S408>/SumNum'

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
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5;

  // Sum: '<S407>/Sum' incorporates:
  //   Constant: '<S403>/Constant5'
  //   DiscreteTransferFcn: '<S408>/Filter Differentiator TF'
  //   Product: '<S408>/DenCoefOut'
  //   Product: '<S408>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_i[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_i +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_i[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_em +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d +
     ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz);

  // DiscreteIntegrator: '<S409>/Integrator' incorporates:
  //   Constant: '<S404>/Constant2'
  //   Product: '<S409>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_d_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_bm *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_my);
  ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_d_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i3;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S404>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_k *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

    // Gain: '<S404>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_l *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

    // Product: '<S404>/Divide1' incorporates:
    //   Constant: '<S404>/Constant1'
    //   Product: '<S404>/Divide'
    //   Sum: '<S404>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i0 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_kh -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S410>/TSamp' incorporates:
  //   DataTypeConversion: '<S410>/Passthrough for tuning'
  //
  //  About '<S410>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_dj;

  // Math: '<S410>/Reciprocal' incorporates:
  //   Constant: '<S410>/Constant'
  //   Sum: '<S410>/SumDen'
  //
  //  About '<S410>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ld +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S410>/Filter Differentiator TF' incorporates:
  //   Constant: '<S410>/Constant'
  //   Product: '<S409>/DOut'
  //   Product: '<S410>/Divide'
  //   Sum: '<S410>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_i0 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ld) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi;

  // Sum: '<S409>/Sum' incorporates:
  //   Constant: '<S404>/Constant4'
  //   DataTypeConversion: '<S410>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S410>/Filter Differentiator TF'
  //   Product: '<S409>/POut'
  //   Product: '<S410>/DenCoefOut'
  //   Product: '<S410>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_n[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_n[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_j + (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_bb +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d);

  // Sum: '<S405>/Sum' incorporates:
  //   UnitDelay: '<S405>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f1;

  // MATLAB Function: '<S44>/Gl_matrices' incorporates:
  //   SignalConversion: '<S300>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t4 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t23 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t9 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t34 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.c * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t38 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t39 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp *
    0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t41 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t42 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t38 * 0.5;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[0] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[1] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[4] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[5] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[6] = -ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[7] = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[8] = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[9] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t23) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[10] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t23) * ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[11] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[12] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[13] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t15 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[14] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t15 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.t39) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[15] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[16] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[17] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[18] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[19] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[20] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[21] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[22] = (ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0
    - ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 *
    0.5) * ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[23] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 *
     0.5 + ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[24] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp *
     0.5) * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[25] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp *
     0.5 + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[26] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t9 -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[27] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t7 * 0.5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[28] = (ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp
    - ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t15 * 0.5) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[29] =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t2 * ROPOD_4Wheel_TdistZMPC_cntr_B.t15 * 0.5
     + ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[30] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[31] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[32] = 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[33] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[34] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[35] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[36] = ROPOD_4Wheel_TdistZMPC_cntr_B.t2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t38 - 1.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[37] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t11;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[38] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g
    + ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0) * ROPOD_4Wheel_TdistZMPC_cntr_B.t16;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[39] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp
    + ROPOD_4Wheel_TdistZMPC_cntr_B.t3) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    -ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[40] =
    ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t3)
     + ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter5_o1 *
     ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[41] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t6 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t34) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t27;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[42] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t6 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t34) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9) * ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[43] = ((ROPOD_4Wheel_TdistZMPC_cntr_B.t41 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t42) -
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp) * -ROPOD_4Wheel_TdistZMPC_cntr_B.t35;
  ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[44] = ((-ROPOD_4Wheel_TdistZMPC_cntr_B.t41 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t42) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp) * ROPOD_4Wheel_TdistZMPC_cntr_B.t40;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 15;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[1 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 15];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[2 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.Gl[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 30];
  }

  // SampleTimeMath: '<S269>/TSamp' incorporates:
  //   Gain: '<S43>/Gain3'
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S269>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.c = ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_g;

  // Sum: '<S269>/Diff' incorporates:
  //   UnitDelay: '<S269>/UD'
  //
  //  Block description for '<S269>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S269>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = ROPOD_4Wheel_TdistZMPC_cntr_B.c -
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0];
  ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0 = ROPOD_4Wheel_TdistZMPC_cntr_B.c;

  // SampleTimeMath: '<S269>/TSamp' incorporates:
  //   Gain: '<S43>/Gain3'
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S269>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.c = ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_g;

  // Sum: '<S269>/Diff' incorporates:
  //   UnitDelay: '<S269>/UD'
  //
  //  Block description for '<S269>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S269>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.c - ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1];
  ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1 = ROPOD_4Wheel_TdistZMPC_cntr_B.c;

  // SampleTimeMath: '<S269>/TSamp' incorporates:
  //   Gain: '<S43>/Gain3'
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //
  //  About '<S269>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.c = ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_p *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_g;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter6'
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

    // MATLAB Function: '<S276>/MATLAB Function' incorporates:
    //   Constant: '<S276>/Constant'
    //   Gain: '<S270>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter6'
    //   MATLABSystem: '<S5>/Get Parameter6'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_df *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lb,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_hk, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_i3);

    // Start for MATLABSystem: '<S5>/Get Parameter'
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

    // MATLABSystem: '<S5>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  // Product: '<S270>/Product5' incorporates:
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S43>/Sum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j -
     ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0]) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i;

  // Product: '<S278>/POut' incorporates:
  //   Constant: '<S274>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_p;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter3'
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

    // Gain: '<S274>/Gain2' incorporates:
    //   Constant: '<S274>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter3'
    //   MATLABSystem: '<S5>/Get Parameter3'
    //   Product: '<S274>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_p *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_bs;
  }

  // Logic: '<S16>/Logical Operator'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S278>/Integrator' incorporates:
  //   Product: '<S278>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_om != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_cq;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_p *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_o);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t6 = ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g;

  // End of DiscreteIntegrator: '<S278>/Integrator'

  // Product: '<S278>/DOut' incorporates:
  //   Constant: '<S274>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t3 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_og;

  // SampleTimeMath: '<S279>/TSamp' incorporates:
  //   Constant: '<S274>/Constant5'
  //
  //  About '<S279>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_na *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_p;

  // Math: '<S279>/Reciprocal' incorporates:
  //   Constant: '<S279>/Constant'
  //   Sum: '<S279>/SumDen'
  //
  //  About '<S279>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t7 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nh +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S279>/Filter Differentiator TF' incorporates:
  //   Constant: '<S279>/Constant'
  //   Product: '<S279>/Divide'
  //   Sum: '<S279>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_lu;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t8 = ROPOD_4Wheel_TdistZMPC_cntr_B.t3 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_nh) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb;

  // Sum: '<S278>/Sum' incorporates:
  //   Constant: '<S274>/Constant5'
  //   DiscreteTransferFcn: '<S279>/Filter Differentiator TF'
  //   Product: '<S279>/DenCoefOut'
  //   Product: '<S279>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t7 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eo[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t8 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_eo[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_na +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.t6);

  // DiscreteIntegrator: '<S280>/Integrator' incorporates:
  //   Constant: '<S275>/Constant2'
  //   Product: '<S280>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_e0 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_il);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t9 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g0;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter4'
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

    // Gain: '<S275>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter4'
    //   MATLABSystem: '<S5>/Get Parameter4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_ig *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

    // Start for MATLABSystem: '<S5>/Get Parameter5'
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

    // Gain: '<S275>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter5'
    //   MATLABSystem: '<S5>/Get Parameter5'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_bs *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

    // Product: '<S275>/Divide1' incorporates:
    //   Constant: '<S275>/Constant1'
    //   Product: '<S275>/Divide'
    //   Sum: '<S275>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_m =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_gr -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S281>/TSamp' incorporates:
  //   DataTypeConversion: '<S281>/Passthrough for tuning'
  //
  //  About '<S281>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_dn;

  // Math: '<S281>/Reciprocal' incorporates:
  //   Constant: '<S281>/Constant'
  //   Sum: '<S281>/SumDen'
  //
  //  About '<S281>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ep +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S281>/Filter Differentiator TF' incorporates:
  //   Constant: '<S281>/Constant'
  //   Product: '<S280>/DOut'
  //   Product: '<S281>/Divide'
  //   Sum: '<S281>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t11 = ROPOD_4Wheel_TdistZMPC_cntr_B.t7 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_m -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ep) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz;

  // Sum: '<S280>/Sum' incorporates:
  //   Constant: '<S275>/Constant4'
  //   DataTypeConversion: '<S281>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S281>/Filter Differentiator TF'
  //   Product: '<S280>/POut'
  //   Product: '<S281>/DenCoefOut'
  //   Product: '<S281>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t10 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ju[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t11 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_ju[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_jt +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t7 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_f +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t9);

  // Sum: '<S276>/Sum' incorporates:
  //   UnitDelay: '<S276>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t7 = ROPOD_4Wheel_TdistZMPC_cntr_B.t10 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hv;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S285>/MATLAB Function' incorporates:
    //   Constant: '<S285>/Constant'
    //   Gain: '<S271>/Gain2'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_bq *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ar,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_e, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_ik);
  }

  // Product: '<S271>/Product5' incorporates:
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S43>/Sum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i -
     ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1]) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_i;

  // Product: '<S287>/POut' incorporates:
  //   Constant: '<S283>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_ol;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S283>/Gain2' incorporates:
    //   Constant: '<S283>/Constant4'
    //   Product: '<S283>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_aq =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_ol *
      ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_km;
  }

  // Logic: '<S16>/Logical Operator1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S287>/Integrator' incorporates:
  //   Product: '<S287>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_o;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_f *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_aq);
  ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do;

  // End of DiscreteIntegrator: '<S287>/Integrator'

  // Product: '<S287>/DOut' incorporates:
  //   Constant: '<S283>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t3 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bh;

  // SampleTimeMath: '<S288>/TSamp' incorporates:
  //   Constant: '<S283>/Constant5'
  //
  //  About '<S288>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_d *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_nx;

  // Math: '<S288>/Reciprocal' incorporates:
  //   Constant: '<S288>/Constant'
  //   Sum: '<S288>/SumDen'
  //
  //  About '<S288>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S288>/Filter Differentiator TF' incorporates:
  //   Constant: '<S288>/Constant'
  //   Product: '<S288>/Divide'
  //   Sum: '<S288>/SumNum'

  if ((((ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__f ==
         POS_ZCSIG) != (int32_T)ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) &&
       (ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__f !=
        UNINITIALIZED_ZCSIG)) || ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ir;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_PrevZCX.FilterDifferentiatorTF_Reset__f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l;
  ROPOD_4Wheel_TdistZMPC_cntr_B.t15 = ROPOD_4Wheel_TdistZMPC_cntr_B.t3 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_c1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy;

  // Sum: '<S287>/Sum' incorporates:
  //   Constant: '<S283>/Constant5'
  //   DiscreteTransferFcn: '<S288>/Filter Differentiator TF'
  //   Product: '<S288>/DenCoefOut'
  //   Product: '<S288>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_iv[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t15 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_iv[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_d +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n);

  // DiscreteIntegrator: '<S289>/Integrator' incorporates:
  //   Constant: '<S284>/Constant2'
  //   Product: '<S289>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_f4 *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t14 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_b);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t16 = ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dw;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S284>/Gain2'
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_dt *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

    // Gain: '<S284>/Gain1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_or *
      ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

    // Product: '<S284>/Divide1' incorporates:
    //   Constant: '<S284>/Constant1'
    //   Product: '<S284>/Divide'
    //   Sum: '<S284>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g1 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_ma -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S290>/TSamp' incorporates:
  //   DataTypeConversion: '<S290>/Passthrough for tuning'
  //
  //  About '<S290>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_bh;

  // Math: '<S290>/Reciprocal' incorporates:
  //   Constant: '<S290>/Constant'
  //   Sum: '<S290>/SumDen'
  //
  //  About '<S290>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lc +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S290>/Filter Differentiator TF' incorporates:
  //   Constant: '<S290>/Constant'
  //   Product: '<S289>/DOut'
  //   Product: '<S290>/Divide'
  //   Sum: '<S290>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t14 * ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_g1
    - (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
       ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lc) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al;

  // Sum: '<S289>/Sum' incorporates:
  //   Constant: '<S284>/Constant4'
  //   DataTypeConversion: '<S290>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S290>/Filter Differentiator TF'
  //   Product: '<S289>/POut'
  //   Product: '<S290>/DenCoefOut'
  //   Product: '<S290>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_lv[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_lv[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_p + (ROPOD_4Wheel_TdistZMPC_cntr_B.t14 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_nr +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t16);

  // Sum: '<S285>/Sum' incorporates:
  //   UnitDelay: '<S285>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t14 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ka;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter9'
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

    // MATLAB Function: '<S294>/MATLAB Function' incorporates:
    //   Constant: '<S294>/Constant'
    //   Gain: '<S272>/Gain2'
    //   MATLABSystem: '<S5>/Get Parameter9'
    //   MATLABSystem: '<S5>/Get Parameter9'

    ROPOD_4Wheel_T_MATLABFunction_d(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_fv *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g,
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_g4,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.g_jl, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_h);

    // Start for MATLABSystem: '<S5>/Get Parameter1'
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

    // MATLABSystem: '<S5>/Get Parameter1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_h = ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
  }

  // Product: '<S272>/Product5' incorporates:
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S43>/Sum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n -
     ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[2]) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.P_gain_h;

  // Product: '<S296>/POut' incorporates:
  //   Constant: '<S292>/Constant4'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g3;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter2'
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

    // Gain: '<S292>/Gain2' incorporates:
    //   Constant: '<S292>/Constant4'
    //   MATLABSystem: '<S5>/Get Parameter2'
    //   MATLABSystem: '<S5>/Get Parameter2'
    //   Product: '<S292>/Product4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_g3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g *
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_c;
  }

  // Logic: '<S16>/Logical Operator2'
  ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2 =
    ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0) ||
     ROPOD_4Wheel_TdistZMPC_cntr_B.Compare);

  // DiscreteIntegrator: '<S296>/Integrator' incorporates:
  //   Product: '<S296>/IOut'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2 ||
      (ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e != 0)) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_i;
  }

  ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_h *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
     ROPOD_4Wheel_TdistZMPC_cntr_B.Gain2_l);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t18 = ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c;

  // End of DiscreteIntegrator: '<S296>/Integrator'

  // Product: '<S296>/DOut' incorporates:
  //   Constant: '<S292>/Constant'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t3 = ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lh;

  // SampleTimeMath: '<S297>/TSamp' incorporates:
  //   Constant: '<S292>/Constant5'
  //
  //  About '<S297>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_j *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_cp;

  // Math: '<S297>/Reciprocal' incorporates:
  //   Constant: '<S297>/Constant'
  //   Sum: '<S297>/SumDen'
  //
  //  About '<S297>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_md1 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S297>/Filter Differentiator TF' incorporates:
  //   Constant: '<S297>/Constant'
  //   Product: '<S297>/Divide'
  //   Sum: '<S297>/SumNum'

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
  ROPOD_4Wheel_TdistZMPC_cntr_B.t22 = ROPOD_4Wheel_TdistZMPC_cntr_B.t3 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_md1) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb;

  // Sum: '<S296>/Sum' incorporates:
  //   Constant: '<S292>/Constant5'
  //   DiscreteTransferFcn: '<S297>/Filter Differentiator TF'
  //   Product: '<S297>/DenCoefOut'
  //   Product: '<S297>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_mf[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t22 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCo_mf[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant5_Value_j +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t2 + ROPOD_4Wheel_TdistZMPC_cntr_B.t18);

  // DiscreteIntegrator: '<S298>/Integrator' incorporates:
  //   Constant: '<S293>/Constant2'
  //   Product: '<S298>/IOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp =
    ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_gainval_mv *
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_e);
  ROPOD_4Wheel_TdistZMPC_cntr_B.t26 = ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ol;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S5>/Get Parameter7'
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

    // Gain: '<S293>/Gain2' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter7'
    //   MATLABSystem: '<S5>/Get Parameter7'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_dy *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Start for MATLABSystem: '<S5>/Get Parameter8'
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

    // Gain: '<S293>/Gain1' incorporates:
    //   MATLABSystem: '<S5>/Get Parameter8'
    //   MATLABSystem: '<S5>/Get Parameter8'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain_lt *
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

    // Product: '<S293>/Divide1' incorporates:
    //   Constant: '<S293>/Constant1'
    //   Product: '<S293>/Divide'
    //   Sum: '<S293>/Add'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n0 =
      (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_dd -
       ROPOD_4Wheel_TdistZMPC_cntr_B.t4 / ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg)
      * (1.0 / ROPOD_4Wheel_TdistZMPC_cntr_B.t4);
  }

  // SampleTimeMath: '<S299>/TSamp' incorporates:
  //   DataTypeConversion: '<S299>/Passthrough for tuning'
  //
  //  About '<S299>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg *
    ROPOD_4Wheel_TdistZMPC_cntr_P.TSamp_WtEt_bw;

  // Math: '<S299>/Reciprocal' incorporates:
  //   Constant: '<S299>/Constant'
  //   Sum: '<S299>/SumDen'
  //
  //  About '<S299>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 = 1.0 /
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ob +
     ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e);

  // DiscreteTransferFcn: '<S299>/Filter Differentiator TF' incorporates:
  //   Constant: '<S299>/Constant'
  //   Product: '<S298>/DOut'
  //   Product: '<S299>/Divide'
  //   Sum: '<S299>/SumNum'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t33 = ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Divide1_n0 -
    (ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e -
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ob) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27 *
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e;

  // Sum: '<S298>/Sum' incorporates:
  //   Constant: '<S293>/Constant4'
  //   DataTypeConversion: '<S299>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S299>/Filter Differentiator TF'
  //   Product: '<S298>/POut'
  //   Product: '<S299>/DenCoefOut'
  //   Product: '<S299>/NOut'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t27 =
    (ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_p[0] *
     ROPOD_4Wheel_TdistZMPC_cntr_B.t33 +
     ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_NumCoe_p[1] *
     ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e) *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27 * ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_hg +
    (ROPOD_4Wheel_TdistZMPC_cntr_B.t19 *
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant4_Value_i5 +
     ROPOD_4Wheel_TdistZMPC_cntr_B.t26);

  // Sum: '<S294>/Sum' incorporates:
  //   UnitDelay: '<S294>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t19 = ROPOD_4Wheel_TdistZMPC_cntr_B.t27 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du;

  // Sum: '<S43>/Sum1' incorporates:
  //   Gain: '<S43>/Gain'
  //   Gain: '<S43>/Gain1'
  //   Product: '<S276>/Product1'
  //   Product: '<S285>/Product1'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t32 = ROPOD_4Wheel_TdistZMPC_cntr_P.FFxy_mass *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32 + ROPOD_4Wheel_TdistZMPC_cntr_B.g_hk *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7;
  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d =
    ROPOD_4Wheel_TdistZMPC_cntr_P.FFxy_mass *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_e * ROPOD_4Wheel_TdistZMPC_cntr_B.t14;

  // MATLAB Function: '<S81>/MATLAB Function' incorporates:
  //   Constant: '<S46>/Constant'
  //   Constant: '<S81>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ll,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t40, &ROPOD_4Wheel_TdistZMPC_cntr_B.t34);

  // Sum: '<S81>/Sum' incorporates:
  //   DiscreteIntegrator: '<S69>/Discrete-Time Integrator'
  //   UnitDelay: '<S81>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t2 =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lq;

  // Product: '<S81>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t3 = ROPOD_4Wheel_TdistZMPC_cntr_B.t40 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t2;

  // MATLAB Function: '<S79>/MATLAB Function' incorporates:
  //   Constant: '<S46>/Constant'
  //   Constant: '<S79>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_bq,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t40, &ROPOD_4Wheel_TdistZMPC_cntr_B.t35);

  // Sum: '<S79>/Sum' incorporates:
  //   UnitDelay: '<S79>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0] +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bt;

  // Product: '<S79>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g = ROPOD_4Wheel_TdistZMPC_cntr_B.t40 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e;

  // Outputs for Enabled SubSystem: '<S41>/ZMPC_x' incorporates:
  //   EnablePort: '<S47>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE) {
      // InitializeConditions for Delay: '<S47>/Delay'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_j =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition;

      // InitializeConditions for Delay: '<S47>/Delay1'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_d =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition;

      // InitializeConditions for Delay: '<S47>/Delay2'
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           102; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition;
      }

      // End of InitializeConditions for Delay: '<S47>/Delay2'

      // InitializeConditions for Delay: '<S47>/Delay3'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_d =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition;

      // InitializeConditions for Delay: '<S47>/Delay4'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_a =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition;

      // InitializeConditions for Delay: '<S47>/Delay6'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_m =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE = true;
    }

    // Delay: '<S47>/Delay2'
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Delay2_p[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l[0], 102U * sizeof
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
    //   Sum: '<S46>/Sum'
    //   Sum: '<S46>/Sum1'

    ROPOD_4Wheel_TdistZMPC__ZoneMPC(ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g, ROPOD_4Wheel_TdistZMPC_cntr_B.t3 -
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh, ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g
      - ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k,
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
      &ROPOD_4Wheel_TdistZMPC_cntr_B.t4, &ROPOD_4Wheel_TdistZMPC_cntr_B.t40,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i, &ROPOD_4Wheel_TdistZMPC_cntr_B.t41,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.t42,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_ZoneMPC);

    // Update for Delay: '<S47>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i;

    // Update for Delay: '<S47>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t41;

    // Update for Delay: '<S47>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t40;

    // Update for Delay: '<S47>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4;

    // Update for Delay: '<S47>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE) {
      // Disable for Outport: '<S47>/Fx'
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_x_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S41>/ZMPC_x'

  // MATLAB Function: '<S85>/MATLAB Function' incorporates:
  //   Constant: '<S46>/Constant'
  //   Constant: '<S85>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_a1,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t42,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k);

  // Sum: '<S85>/Sum' incorporates:
  //   DiscreteIntegrator: '<S70>/Discrete-Time Integrator'
  //   UnitDelay: '<S85>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh =
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jz;

  // Product: '<S85>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.t3 = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh;

  // MATLAB Function: '<S83>/MATLAB Function' incorporates:
  //   Constant: '<S46>/Constant'
  //   Constant: '<S83>/Constant'

  ROPOD_4Wheel_Tdi_MATLABFunction
    (ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_lbr,
     ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_kk,
     &ROPOD_4Wheel_TdistZMPC_cntr_B.t42, &ROPOD_4Wheel_TdistZMPC_cntr_B.t40);

  // Sum: '<S83>/Sum' incorporates:
  //   UnitDelay: '<S83>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t41 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1] +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ge;

  // Product: '<S83>/Product1'
  ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g = ROPOD_4Wheel_TdistZMPC_cntr_B.t42 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t41;

  // Outputs for Enabled SubSystem: '<S41>/ZMPC_y' incorporates:
  //   EnablePort: '<S48>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE) {
      // InitializeConditions for Delay: '<S48>/Delay'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition_a;

      // InitializeConditions for Delay: '<S48>/Delay1'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition_g;

      // InitializeConditions for Delay: '<S48>/Delay2'
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           102; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition_o;
      }

      // End of InitializeConditions for Delay: '<S48>/Delay2'

      // InitializeConditions for Delay: '<S48>/Delay3'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition_e;

      // InitializeConditions for Delay: '<S48>/Delay4'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition_m;

      // InitializeConditions for Delay: '<S48>/Delay6'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition_e;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE = true;
    }

    // Delay: '<S48>/Delay2'
    memcpy(&ROPOD_4Wheel_TdistZMPC_cntr_B.Delay2_p[0],
           &ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[0], 102U * sizeof
           (real_T));

    // Update for Delay: '<S48>/Delay2' incorporates:
    //   Constant: '<S48>/Constant16'
    //   Constant: '<S48>/Constant26'
    //   Constant: '<S48>/Constant27'
    //   Constant: '<S48>/Constant28'
    //   Constant: '<S48>/Constant30'
    //   Constant: '<S48>/Constant31'
    //   Constant: '<S48>/Constant32'
    //   Delay: '<S48>/Delay'
    //   Delay: '<S48>/Delay1'
    //   Delay: '<S48>/Delay3'
    //   Delay: '<S48>/Delay4'
    //   Delay: '<S48>/Delay6'
    //   MATLAB Function: '<S48>/Zone MPC'
    //   Sum: '<S46>/Sum8'
    //   Sum: '<S46>/Sum9'

    ROPOD_4Wheel_TdistZMPC__ZoneMPC(ROPOD_4Wheel_TdistZMPC_cntr_B.t3,
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g, ROPOD_4Wheel_TdistZMPC_cntr_B.t3 -
      ROPOD_4Wheel_TdistZMPC_cntr_B.Internal,
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g -
      ROPOD_4Wheel_TdistZMPC_cntr_B.Internal_a,
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
      &ROPOD_4Wheel_TdistZMPC_cntr_B.t4, &ROPOD_4Wheel_TdistZMPC_cntr_B.t42,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.mv, &ROPOD_4Wheel_TdistZMPC_cntr_B.t23,
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.t24,
      &ROPOD_4Wheel_TdistZMPC_cntr_B.sf_ZoneMPC_i);

    // Update for Delay: '<S48>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv;

    // Update for Delay: '<S48>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t23;

    // Update for Delay: '<S48>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t42;

    // Update for Delay: '<S48>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4;

    // Update for Delay: '<S48>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.t24;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE) {
      // Disable for Outport: '<S48>/Fx'
      ROPOD_4Wheel_TdistZMPC_cntr_B.mv = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0_c;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.ZMPC_y_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S41>/ZMPC_y'

  // MATLAB Function: '<S68>/Calibration1' incorporates:
  //   Memory: '<S68>/Memory2'
  //   Memory: '<S68>/Memory3'
  //   Sum: '<S46>/Sum10'
  //   Sum: '<S46>/Sum4'
  //   Sum: '<S46>/Sum7'

  ROPOD_4Wheel_Tdist_Calibration1(((ROPOD_4Wheel_TdistZMPC_cntr_B.a_m +
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_f) + ROPOD_4Wheel_TdistZMPC_cntr_B.a_b) +
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j2,
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_b,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t3, &ROPOD_4Wheel_TdistZMPC_cntr_B.t23,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t42);

  // Outputs for Enabled SubSystem: '<S41>/Angle controller' incorporates:
  //   EnablePort: '<S45>/Enable'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o > 0.0) {
    if (!ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE) {
      // InitializeConditions for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' 
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k =
        ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC;

      // InitializeConditions for DiscreteIntegrator: '<S45>/Discrete-Time Integrator1' 
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE =
        ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_IC;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE = true;
    }

    // Sum: '<S45>/Sum2' incorporates:
    //   Constant: '<S45>/Ref_speed'
    //   Gain: '<S46>/Gain2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Ref_speed_Value -
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain2_Gain_m *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t3;

    // Sum: '<S45>/Sum' incorporates:
    //   DiscreteIntegrator: '<S45>/Discrete-Time Integrator1'
    //   Gain: '<S45>/D'

    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m = ROPOD_4Wheel_TdistZMPC_cntr_P.D_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx -
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE;

    // Sum: '<S45>/Sum1' incorporates:
    //   DiscreteIntegrator: '<S45>/Discrete-Time Integrator'
    //   Gain: '<S45>/P'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = (ROPOD_4Wheel_TdistZMPC_cntr_P.P_Gain *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx +
      ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k) +
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_m;

    // Update for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' incorporates:
    //   Gain: '<S45>/I'

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.I_Gain * ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx *
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainval;

    // Update for DiscreteIntegrator: '<S45>/Discrete-Time Integrator1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE +=
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_gainval *
      ROPOD_4Wheel_TdistZMPC_cntr_B.a_m;
  } else {
    if (ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE) {
      // Disable for Outport: '<S45>/u_N'
      ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = ROPOD_4Wheel_TdistZMPC_cntr_P.u_N_Y0;
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Anglecontroller_MODE = false;
    }
  }

  // End of Outputs for SubSystem: '<S41>/Angle controller'

  // Switch: '<S43>/Switch' incorporates:
  //   Constant: '<S43>/Constant'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch_Threshold) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t32 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_k;
  }

  // End of Switch: '<S43>/Switch'

  // Sum: '<S16>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.t32 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i;

  // Switch: '<S43>/Switch1' incorporates:
  //   Constant: '<S43>/Constant1'

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch1_Threshold_h) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_or;
  }

  // End of Switch: '<S43>/Switch1'

  // Sum: '<S16>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d +
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv;

  // Switch: '<S43>/Switch2' incorporates:
  //   Constant: '<S43>/Constant2'
  //   Gain: '<S43>/Gain2'
  //   Product: '<S294>/Product1'
  //   Sum: '<S269>/Diff'
  //   Sum: '<S43>/Sum1'
  //   UnitDelay: '<S269>/UD'
  //
  //  Block description for '<S269>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S269>/UD':
  //
  //   Store in Global RAM

  if (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o >
      ROPOD_4Wheel_TdistZMPC_cntr_P.Switch2_Threshold_i) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_i;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = (ROPOD_4Wheel_TdistZMPC_cntr_B.c -
      ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2]) *
      ROPOD_4Wheel_TdistZMPC_cntr_P.FFtheta_intia +
      ROPOD_4Wheel_TdistZMPC_cntr_B.g_jl * ROPOD_4Wheel_TdistZMPC_cntr_B.t19;
  }

  // End of Switch: '<S43>/Switch2'

  // Sum: '<S16>/Sum'
  ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jnr[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.t4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1;
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S7>/Get Parameter2'
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

    // Gain: '<S44>/Gain3' incorporates:
    //   MATLABSystem: '<S7>/Get Parameter2'
    //   MATLABSystem: '<S7>/Get Parameter2'

    ROPOD_4Wheel_TdistZMPC_cntr_B.Gain3_m = 1.0 /
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;
  }

  // MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal' incorporates:
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

    // MATLAB Function: '<S44>/Gl_matrices'
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i0 = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i0 <
         3; ROPOD_4Wheel_TdistZMPC_cntr_B.i0++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_tmp =
        ROPOD_4Wheel_TdistZMPC_cntr_B.i0 + 3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i;
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_tmp]
        = 0.0;
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i1 = 0;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i1 < 15;
           ROPOD_4Wheel_TdistZMPC_cntr_B.i1++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_tmp]
          = ROPOD_4Wheel_TdistZMPC_cntr_B.Gtl[3 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1 + ROPOD_4Wheel_TdistZMPC_cntr_B.i0] *
          (real_T)b[15 * ROPOD_4Wheel_TdistZMPC_cntr_B.i +
          ROPOD_4Wheel_TdistZMPC_cntr_B.i1] +
          ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[3 *
          ROPOD_4Wheel_TdistZMPC_cntr_B.i + ROPOD_4Wheel_TdistZMPC_cntr_B.i0];
      }
    }
  }

  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 8;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[3 * ROPOD_4Wheel_TdistZMPC_cntr_B.i]
      = ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[1 + 3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i + 1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Gtl_m[2 + 3 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_TmpSignalConversionAtSFu__k[3 *
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
  //   MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
  //   SignalConversion: '<S326>/TmpSignal ConversionAt SFunction Inport3'

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
  //   MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'

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
  //   MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[4],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[5],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b5,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.tr_out_a);

  // MATLAB Function: '<S19>/MATLAB Function3' incorporates:
  //   Constant: '<S19>/Constant'
  //   MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'

  ROPOD_4Wheel_Td_MATLABFunction1(ROPOD_4Wheel_TdistZMPC_cntr_B.x[6],
    ROPOD_4Wheel_TdistZMPC_cntr_B.x[7],
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter12_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter1_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_B.GetParameter2_o1,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_b5,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out, &ROPOD_4Wheel_TdistZMPC_cntr_B.tr_out);

  // MATLAB Function: '<S322>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S322>/Constant'
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

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_l =
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

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d =
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

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_dy =
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

  ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_lx =
    ROPOD_4Wheel_TdistZMPC_cntr_P.ref_Value[3] -
    ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;

  // Sum: '<S322>/Sum' incorporates:
  //   UnitDelay: '<S322>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t24 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_l +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_az;

  // MATLAB Function: '<S318>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S318>/Constant'
  //   Gain: '<S18>/Gain3'

  ROPOD_4Wheel_T_MATLABFunction_m(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_k *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ea,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_pf,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.t4, &ROPOD_4Wheel_TdistZMPC_cntr_B.t3);

  // Sum: '<S318>/Sum' incorporates:
  //   UnitDelay: '<S318>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t25 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m0;

  // MATLAB Function: '<S320>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S320>/Constant'
  //   Gain: '<S18>/Gain4'

  ROPOD_4Wheel_T_MATLABFunction_m(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain_b *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ea,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_d4,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx);

  // Sum: '<S320>/Sum' incorporates:
  //   UnitDelay: '<S320>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t30 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_dy +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fz;

  // MATLAB Function: '<S324>/MATLAB Function' incorporates:
  //   Constant: '<S18>/Constant2'
  //   Constant: '<S324>/Constant'
  //   Gain: '<S18>/Gain5'

  ROPOD_4Wheel_T_MATLABFunction_m(ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain_h *
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant2_Value_ea,
    ROPOD_4Wheel_TdistZMPC_cntr_P.Constant_Value_ez,
    &ROPOD_4Wheel_TdistZMPC_cntr_B.g_g, &ROPOD_4Wheel_TdistZMPC_cntr_B.a_m);

  // Sum: '<S324>/Sum' incorporates:
  //   UnitDelay: '<S324>/Unit Delay'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t31 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_lx +
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
      //   Product: '<S322>/Product1'
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

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c_g =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain1_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/damping1' incorporates:
      //   Product: '<S318>/Product1'
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_f = ROPOD_4Wheel_TdistZMPC_cntr_B.t4 *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t25 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping1_Gain;

      // Gain: '<S18>/Gain6' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/Gain7' incorporates:
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Gain7 =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain7_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;

      // Gain: '<S18>/damping2' incorporates:
      //   Product: '<S320>/Product1'
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
      //   Product: '<S324>/Product1'
      //   Switch: '<S18>/Switch1'

      ROPOD_4Wheel_TdistZMPC_cntr_B.g_f = ROPOD_4Wheel_TdistZMPC_cntr_B.g_g *
        ROPOD_4Wheel_TdistZMPC_cntr_B.t31 *
        ROPOD_4Wheel_TdistZMPC_cntr_P.damping3_Gain;

      // Switch: '<S18>/Switch1' incorporates:
      //   Gain: '<S18>/Gain10'
      //   Gain: '<S18>/Gain11'

      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain_e;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[1] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain1_c_g;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.t4;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[3] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain7;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[4] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[5] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.Gain9;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[6] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain10_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;
      ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[7] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Gain11_Gain *
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_f;
    } else {
      // Switch: '<S18>/Switch1' incorporates:
      //   Constant: '<S18>/Constant1'

      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           8; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i] =
          ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value;
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

    // Switch: '<S330>/Switch1' incorporates:
    //   Constant: '<S330>/Constant1'
    //   Logic: '<S330>/Logical Operator'
    //   Product: '<S342>/Product1'
    //   Product: '<S351>/Product1'
    //   Product: '<S360>/Product1'
    //   Product: '<S369>/Product1'
    //   Product: '<S378>/Product1'
    //   Product: '<S387>/Product1'
    //   Product: '<S396>/Product1'
    //   Product: '<S405>/Product1'

    if ((ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_x != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_y != 0.0) ||
        (ROPOD_4Wheel_TdistZMPC_cntr_B.ZMPC_o != 0.0)) {
      for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
           8; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          = ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_o;
      }
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[0] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_n *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g;
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[1] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_pd *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz;
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[2] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_j *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5;
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[3] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_c *
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a;
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[4] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_o *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_ac;
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[5] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_h *
        ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_gd;
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[6] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_p * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n;
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[7] =
        ROPOD_4Wheel_TdistZMPC_cntr_B.g * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4;
    }

    // End of Switch: '<S330>/Switch1'

    // Switch: '<S19>/Switch1' incorporates:
    //   MATLAB Function: '<S19>/MATLAB Function'
    //   MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'

    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.x[0] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.x[1] *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t32;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.t38;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[3] = ROPOD_4Wheel_TdistZMPC_cntr_B.t39;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[4] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[5] =
      ROPOD_4Wheel_TdistZMPC_cntr_B.tr_out_a;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[6] = ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out;
    ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[7] = ROPOD_4Wheel_TdistZMPC_cntr_B.tr_out;

    // Sum: '<S1>/Add'
    for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i <
         8; ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
      // Switch: '<S15>/Switch1' incorporates:
      //   Constant: '<S15>/Constant1'
      //   MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'

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
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
          ROPOD_4Wheel_TdistZMPC_cntr_B.x_p[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
      } else {
        ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g =
          ROPOD_4Wheel_TdistZMPC_cntr_P.Constant1_Value_h;
      }

      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
        =
        ((ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
          + ROPOD_4Wheel_TdistZMPC_cntr_B.g_f) +
         ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g) +
        ROPOD_4Wheel_TdistZMPC_cntr_B.Product9[ROPOD_4Wheel_TdistZMPC_cntr_B.i];
    }

    // End of Sum: '<S1>/Add'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[0];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[1];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Taucompfactor *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[2] *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[3] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Taucompfactor *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[3] *
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[4] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[4];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[5] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[5];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[6] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[6];
    ROPOD_4Wheel_TdistZMPC_cntr_B.Switch1[7] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtSFu_lk[7];
  }

  // End of Switch: '<S23>/Switch1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S7>/Get Parameter'
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

    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_ENABLE1);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t4) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t4)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t4,
        65536.0);
    }

    // DataTypeConversion: '<S25>/Data Type Conversion4' incorporates:
    //   MATLABSystem: '<S7>/Get Parameter'
    //   MATLABSystem: '<S7>/Get Parameter'

    ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = fmod
        (ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l, 65536.0);
    }

    // S-Function (sfix_bitop): '<S25>/Bitwise Operator1' incorporates:
    //   DataTypeConversion: '<S25>/Data Type Conversion4'
    //   DataTypeConversion: '<S25>/Data Type Conversion6'

    ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator1 = (uint16_T)
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.t4 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.t4 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t4) &
       (ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l < 0.0 ? (int32_T)(uint16_T)
        -(int16_T)(uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l : (int32_T)
        (uint16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l));

    // DataTypeConversion: '<S25>/Data Type Conversion7' incorporates:
    //   Constant: '<S25>/Constant4'

    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_ENABLE2);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t4) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.t4)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t4,
        65536.0);
    }

    // DataTypeConversion: '<S25>/Data Type Conversion5' incorporates:
    //   Gain: '<S25>/shift'
    //   MATLABSystem: '<S7>/Get Parameter'
    //   MATLABSystem: '<S7>/Get Parameter'

    ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = floor
      (ROPOD_4Wheel_TdistZMPC_cntr_P.shift_Gain *
       ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
    if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l) || rtIsInf
        (ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l)) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = 0.0;
    } else {
      ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = fmod
        (ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l, 65536.0);
    }

    // S-Function (sfix_bitop): '<S25>/Bitwise Operator2' incorporates:
    //   DataTypeConversion: '<S25>/Data Type Conversion5'
    //   DataTypeConversion: '<S25>/Data Type Conversion7'

    ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator2 = (uint16_T)
      ((ROPOD_4Wheel_TdistZMPC_cntr_B.t4 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.t4 : (int32_T)(uint16_T)
        ROPOD_4Wheel_TdistZMPC_cntr_B.t4) &
       (ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l < 0.0 ? (int32_T)(uint16_T)
        -(int16_T)(uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l : (int32_T)
        (uint16_T)ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l));

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
  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = floor(ROPOD_4Wheel_TdistZMPC_cntr_B.g_p_g);
  if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.t4) || rtIsInf
      (ROPOD_4Wheel_TdistZMPC_cntr_B.t4)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = fmod(ROPOD_4Wheel_TdistZMPC_cntr_B.t4,
      65536.0);
  }

  // DataTypeConversion: '<S25>/Data Type Conversion3' incorporates:
  //   Constant: '<S25>/Constant11'

  ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = 0.0 *
    ROPOD_4Wheel_TdistZMPC_cntr_P.SW_COM1_USE_TS;
  if (rtIsNaN(ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l)) {
    ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = 0.0;
  } else {
    ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = fmod
      (ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l, 65536.0);
  }

  // Gain: '<S25>/Gain10' incorporates:
  //   DataTypeConversion: '<S25>/Data Type Conversion2'
  //   DataTypeConversion: '<S25>/Data Type Conversion3'
  //   S-Function (sfix_bitop): '<S25>/Bitwise Operator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.command1 = (real_T)(uint16_T)((uint16_T)
    ((uint16_T)(ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator1 |
                ROPOD_4Wheel_TdistZMPC_cntr_B.BitwiseOperator2) | (uint16_T)
     (ROPOD_4Wheel_TdistZMPC_cntr_B.t4 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-ROPOD_4Wheel_TdistZMPC_cntr_B.t4 : (int32_T)(uint16_T)
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4)) | (uint16_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l) * ((real_T)
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
    ROPOD_4Wheel_TdistZMPC_cntr_B.t4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Taucompfactor *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain3'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain3_Gain_k2 *
      ROPOD_4Wheel_TdistZMPC_cntr_B.max_current;

    // Gain: '<S25>/Gain4'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_p_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain4_Gain_i *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4;

    // Gain: '<S25>/Gain5'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit1_n_pw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain5_Gain_n *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4;

    // Gain: '<S25>/Gain6'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_p_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain6_Gain_c *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4;

    // Gain: '<S25>/Gain7'
    ROPOD_4Wheel_TdistZMPC_cntr_B.limit2_n_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Gain7_Gain_f *
      ROPOD_4Wheel_TdistZMPC_cntr_B.t4;

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

  // Update for UnitDelay: '<S81>/Unit Delay' incorporates:
  //   DiscreteIntegrator: '<S69>/Discrete-Time Integrator'
  //   Product: '<S81>/Product4'
  //   Sum: '<S81>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lq =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t34 * ROPOD_4Wheel_TdistZMPC_cntr_B.t2 +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i;

  // Update for UnitDelay: '<S85>/Unit Delay' incorporates:
  //   DiscreteIntegrator: '<S70>/Discrete-Time Integrator'
  //   Product: '<S85>/Product4'
  //   Sum: '<S85>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.distance_k *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_fh +
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e;

  // MATLAB Function: '<S11>/pos_rot_matrix' incorporates:
  //   DiscreteIntegrator: '<S11>/Discrete-Time Integrator'

  ROPOD_4Wheel_TdistZMPC_cntr_B.t4 = cos
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[0] = ROPOD_4Wheel_TdistZMPC_cntr_B.t4;
  ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l = sin
    (ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[3] = -ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[6] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[1] = ROPOD_4Wheel_TdistZMPC_cntr_B.tl_out_l;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[4] = ROPOD_4Wheel_TdistZMPC_cntr_B.t4;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[7] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[2] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[5] = 0.0;
  ROPOD_4Wheel_TdistZMPC_cntr_B.f[8] = 1.0;
  for (ROPOD_4Wheel_TdistZMPC_cntr_B.i = 0; ROPOD_4Wheel_TdistZMPC_cntr_B.i < 3;
       ROPOD_4Wheel_TdistZMPC_cntr_B.i++) {
    // Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[ROPOD_4Wheel_TdistZMPC_cntr_B.i]
      += ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_d *
      (ROPOD_4Wheel_TdistZMPC_cntr_B.f[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 6] *
       ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[2] +
       (ROPOD_4Wheel_TdistZMPC_cntr_B.f[ROPOD_4Wheel_TdistZMPC_cntr_B.i + 3] *
        ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1] +
        ROPOD_4Wheel_TdistZMPC_cntr_B.f[ROPOD_4Wheel_TdistZMPC_cntr_B.i] *
        ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0]));
  }

  // End of MATLAB Function: '<S11>/pos_rot_matrix'

  // Update for UnitDelay: '<S111>/Unit Delay' incorporates:
  //   Product: '<S111>/Product4'
  //   Sum: '<S111>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t13 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_3 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_0;

  // Update for UnitDelay: '<S109>/Unit Delay' incorporates:
  //   Product: '<S109>/Product4'
  //   Sum: '<S109>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_2 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t28 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_1;

  // Update for UnitDelay: '<S113>/Unit Delay' incorporates:
  //   Product: '<S113>/Product4'
  //   Sum: '<S113>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_0 *
    ROPOD_4Wheel_TdistZMPC_cntr_B.t36 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_2;

  // Update for UnitDelay: '<S115>/Unit Delay' incorporates:
  //   Product: '<S115>/Product4'
  //   Sum: '<S115>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t29 * ROPOD_4Wheel_TdistZMPC_cntr_B.t47 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_3;

  // Update for UnitDelay: '<S117>/Unit Delay' incorporates:
  //   Product: '<S117>/Product4'
  //   Sum: '<S117>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t43 * ROPOD_4Wheel_TdistZMPC_cntr_B.t49 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_4;

  // Update for UnitDelay: '<S119>/Unit Delay' incorporates:
  //   Product: '<S119>/Product4'
  //   Sum: '<S119>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lh =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t48 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_d +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_5;

  // Update for UnitDelay: '<S121>/Unit Delay' incorporates:
  //   Product: '<S121>/Product4'
  //   Sum: '<S121>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lr =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t50 * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_6;

  // Update for UnitDelay: '<S123>/Unit Delay' incorporates:
  //   Product: '<S123>/Product4'
  //   Sum: '<S123>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_eg * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iy +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_ov_idx_7;

  // Update for Memory: '<S61>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_ft;

  // Update for Memory: '<S61>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ao;

  // Update for UnitDelay: '<S151>/Unit Delay' incorporates:
  //   Product: '<S151>/Product4'
  //   Sum: '<S151>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_e * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_od +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_0;

  // Update for UnitDelay: '<S149>/Unit Delay' incorporates:
  //   Product: '<S149>/Product4'
  //   Sum: '<S149>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_k_d * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ev2
    + ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_1;

  // Update for UnitDelay: '<S153>/Unit Delay' incorporates:
  //   Product: '<S153>/Product4'
  //   Sum: '<S153>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nx * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_g2 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_2;

  // Update for UnitDelay: '<S155>/Unit Delay' incorporates:
  //   Product: '<S155>/Product4'
  //   Sum: '<S155>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ch * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_my +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_3;

  // Update for UnitDelay: '<S157>/Unit Delay' incorporates:
  //   Product: '<S157>/Product4'
  //   Sum: '<S157>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_an * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_h +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_4;

  // Update for UnitDelay: '<S159>/Unit Delay' incorporates:
  //   Product: '<S159>/Product4'
  //   Sum: '<S159>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ix * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_j +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_5;

  // Update for UnitDelay: '<S161>/Unit Delay' incorporates:
  //   Product: '<S161>/Product4'
  //   Sum: '<S161>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_jg * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_mz +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_6;

  // Update for UnitDelay: '<S163>/Unit Delay' incorporates:
  //   Product: '<S163>/Product4'
  //   Sum: '<S163>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_o_j * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lk +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_b_idx_7;

  // Update for Memory: '<S64>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_h;

  // Update for Memory: '<S64>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_a;

  // Update for Memory: '<S62>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_k;

  // Update for Memory: '<S62>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_l;

  // Update for Memory: '<S65>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_g;

  // Update for Memory: '<S65>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_ed =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_ab;

  // Update for UnitDelay: '<S191>/Unit Delay' incorporates:
  //   Product: '<S191>/Product4'
  //   Sum: '<S191>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i_l * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gx +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_0;

  // Update for UnitDelay: '<S189>/Unit Delay' incorporates:
  //   Product: '<S189>/Product4'
  //   Sum: '<S189>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_er =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_f * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ho +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_1;

  // Update for UnitDelay: '<S193>/Unit Delay' incorporates:
  //   Product: '<S193>/Product4'
  //   Sum: '<S193>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ff =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_kr * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_e1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_2;

  // Update for UnitDelay: '<S195>/Unit Delay' incorporates:
  //   Product: '<S195>/Product4'
  //   Sum: '<S195>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_a_p * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_hk +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_3;

  // Update for UnitDelay: '<S197>/Unit Delay' incorporates:
  //   Product: '<S197>/Product4'
  //   Sum: '<S197>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fe =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_mf * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_f +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_4;

  // Update for UnitDelay: '<S199>/Unit Delay' incorporates:
  //   Product: '<S199>/Product4'
  //   Sum: '<S199>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ii =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_p * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_lf +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_5;

  // Update for UnitDelay: '<S201>/Unit Delay' incorporates:
  //   Product: '<S201>/Product4'
  //   Sum: '<S201>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_nc * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_jn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_6;

  // Update for UnitDelay: '<S203>/Unit Delay' incorporates:
  //   Product: '<S203>/Product4'
  //   Sum: '<S203>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ii * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_c +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_oo_idx_7;

  // Update for Memory: '<S60>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_hm;

  // Update for Memory: '<S60>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_f;

  // Update for UnitDelay: '<S231>/Unit Delay' incorporates:
  //   Product: '<S231>/Product4'
  //   Sum: '<S231>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_il =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_n * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cn +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_0;

  // Update for UnitDelay: '<S229>/Unit Delay' incorporates:
  //   Product: '<S229>/Product4'
  //   Sum: '<S229>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_g * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_1;

  // Update for UnitDelay: '<S233>/Unit Delay' incorporates:
  //   Product: '<S233>/Product4'
  //   Sum: '<S233>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ej =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_il * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_ng +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_2;

  // Update for UnitDelay: '<S235>/Unit Delay' incorporates:
  //   Product: '<S235>/Product4'
  //   Sum: '<S235>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jm =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ls * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_l0 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_3;

  // Update for UnitDelay: '<S237>/Unit Delay' incorporates:
  //   Product: '<S237>/Product4'
  //   Sum: '<S237>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_cx * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_gf +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_4;

  // Update for UnitDelay: '<S239>/Unit Delay' incorporates:
  //   Product: '<S239>/Product4'
  //   Sum: '<S239>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_eq * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_cg +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_5;

  // Update for UnitDelay: '<S241>/Unit Delay' incorporates:
  //   Product: '<S241>/Product4'
  //   Sum: '<S241>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_al =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_lg * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_iw +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_6;

  // Update for UnitDelay: '<S243>/Unit Delay' incorporates:
  //   Product: '<S243>/Product4'
  //   Sum: '<S243>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jx =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c_m * ROPOD_4Wheel_TdistZMPC_cntr_B.Sum_js +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_hk_idx_7;

  // Update for Memory: '<S66>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_e;

  // Update for Memory: '<S66>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_m;

  // Update for DiscreteStateSpace: '<S54>/Internal'
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

  // Update for Memory: '<S63>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle_pk;

  // Update for Memory: '<S63>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_gi =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out_h;

  // Update for Memory: '<S67>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.i_f;

  // Update for Memory: '<S67>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.data_out;

  // Update for DiscreteStateSpace: '<S55>/Internal'
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

  // Update for Delay: '<S303>/Enabled Delay'
  if (ROPOD_4Wheel_TdistZMPC_cntr_B.SourceBlock_o1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_o;
  }

  // End of Update for Delay: '<S303>/Enabled Delay'

  // Update for UnitDelay: '<S304>/Delay Input2'
  //
  //  Block description for '<S304>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_j;

  // Update for UnitDelay: '<S305>/Delay Input2'
  //
  //  Block description for '<S305>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_i;

  // Update for UnitDelay: '<S306>/Delay Input2'
  //
  //  Block description for '<S306>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n;

  // Update for DiscreteIntegrator: '<S344>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_l_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_l;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S345>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ne;

  // Update for DiscreteIntegrator: '<S346>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_k_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_k;

  // Update for DiscreteTransferFcn: '<S347>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_h;

  // Update for UnitDelay: '<S342>/Unit Delay' incorporates:
  //   Product: '<S342>/Product4'
  //   Sum: '<S342>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_o * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_g
    + ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_o;

  // Update for DiscreteIntegrator: '<S353>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_jg_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jg;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_m = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S354>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ih;

  // Update for DiscreteIntegrator: '<S355>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_kt_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_kt;

  // Update for DiscreteTransferFcn: '<S356>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_p;

  // Update for UnitDelay: '<S351>/Unit Delay' incorporates:
  //   Product: '<S351>/Product4'
  //   Sum: '<S351>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_a *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_pz + ROPOD_4Wheel_TdistZMPC_cntr_B.Fd;

  // Update for DiscreteIntegrator: '<S362>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_nx_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_nx;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_b = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S363>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_it;

  // Update for DiscreteIntegrator: '<S364>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_l =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_ky_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ky;

  // Update for DiscreteTransferFcn: '<S365>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_la;

  // Update for UnitDelay: '<S360>/Unit Delay' incorporates:
  //   Product: '<S360>/Product4'
  //   Sum: '<S360>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_j *
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_b5 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_n5;

  // Update for DiscreteIntegrator: '<S371>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_d_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_d;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_l = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S372>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_jd;

  // Update for DiscreteIntegrator: '<S373>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Product1_dm_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_dm;

  // Update for DiscreteTransferFcn: '<S374>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ms;

  // Update for UnitDelay: '<S369>/Unit Delay' incorporates:
  //   Product: '<S369>/Product4'
  //   Sum: '<S369>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ev =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_k * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_a
    + ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_ib;

  // Update for DiscreteIntegrator: '<S380>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_cal_angle_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.cal_angle;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S381>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_c;

  // Update for DiscreteIntegrator: '<S382>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_py =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_c_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_c;

  // Update for DiscreteTransferFcn: '<S383>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_j;

  // Update for UnitDelay: '<S378>/Unit Delay' incorporates:
  //   Product: '<S378>/Product4'
  //   Sum: '<S378>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kp =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_c * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_ac +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_j;

  // Update for DiscreteIntegrator: '<S389>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dj =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_ix;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S390>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_k;

  // Update for DiscreteIntegrator: '<S391>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_fd =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_e;

  // Update for DiscreteTransferFcn: '<S392>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_kz;

  // Update for UnitDelay: '<S387>/Unit Delay' incorporates:
  //   Product: '<S387>/Product4'
  //   Sum: '<S387>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ez =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_l * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_gd +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_fr;

  // Update for DiscreteIntegrator: '<S398>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n =
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.Integrator_e;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_f = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S399>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_au;

  // Update for DiscreteIntegrator: '<S400>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ik =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_n_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_n;

  // Update for DiscreteTransferFcn: '<S401>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_f3;

  // Update for UnitDelay: '<S396>/Unit Delay' incorporates:
  //   Product: '<S396>/Product4'
  //   Sum: '<S396>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lu =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_n +
    ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c;

  // Update for DiscreteIntegrator: '<S407>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_a =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare;

  // Update for DiscreteTransferFcn: '<S408>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.FilterDifferentiatorTF_tmp_i;

  // Update for DiscreteIntegrator: '<S409>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i3 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_POut_d_tmp +
    ROPOD_4Wheel_TdistZMPC_cntr_B.POut_d;

  // Update for DiscreteTransferFcn: '<S410>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz;

  // Update for UnitDelay: '<S405>/Unit Delay' incorporates:
  //   Product: '<S405>/Product4'
  //   Sum: '<S405>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f1 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a * ROPOD_4Wheel_TdistZMPC_cntr_B.DOut_c4 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz;

  // Update for UnitDelay: '<S269>/UD'
  //
  //  Block description for '<S269>/UD':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_0;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1] =
    ROPOD_4Wheel_TdistZMPC_cntr_B.c_idx_1;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2] = ROPOD_4Wheel_TdistZMPC_cntr_B.c;

  // Update for DiscreteIntegrator: '<S278>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t7_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t6;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_om = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_k;

  // Update for DiscreteTransferFcn: '<S279>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t8;

  // Update for DiscreteIntegrator: '<S280>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t9;

  // Update for DiscreteTransferFcn: '<S281>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t11;

  // Update for UnitDelay: '<S276>/Unit Delay' incorporates:
  //   Product: '<S276>/Product4'
  //   Sum: '<S276>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hv =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_i3 * ROPOD_4Wheel_TdistZMPC_cntr_B.t7 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t10;

  // Update for DiscreteIntegrator: '<S287>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do =
    ROPOD_4Wheel_TdistZMPC_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LPF_fhz_n;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.Compare_l;

  // Update for DiscreteTransferFcn: '<S288>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t15;

  // Update for DiscreteIntegrator: '<S289>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dw =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t17_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t16;

  // Update for DiscreteTransferFcn: '<S290>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al =
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_pole_fhz_n;

  // Update for UnitDelay: '<S285>/Unit Delay' incorporates:
  //   Product: '<S285>/Product4'
  //   Sum: '<S285>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ka =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_ik * ROPOD_4Wheel_TdistZMPC_cntr_B.t14 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.LL_zero_fhz_m;

  // Update for DiscreteIntegrator: '<S296>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t18_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t18;
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e = (int8_T)
    ROPOD_4Wheel_TdistZMPC_cntr_B.LogicalOperator2;

  // Update for DiscreteTransferFcn: '<S297>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t22;

  // Update for DiscreteIntegrator: '<S298>/Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ol =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t26_tmp + ROPOD_4Wheel_TdistZMPC_cntr_B.t26;

  // Update for DiscreteTransferFcn: '<S299>/Filter Differentiator TF'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t33;

  // Update for UnitDelay: '<S294>/Unit Delay' incorporates:
  //   Product: '<S294>/Product4'
  //   Sum: '<S294>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_h * ROPOD_4Wheel_TdistZMPC_cntr_B.t19 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.t27;

  // Update for DiscreteIntegrator: '<S69>/Discrete-Time Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i +=
    ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_b *
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0];

  // Update for UnitDelay: '<S79>/Unit Delay' incorporates:
  //   Product: '<S79>/Product4'
  //   Sum: '<S79>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bt =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t35 * ROPOD_4Wheel_TdistZMPC_cntr_B.Product1_e
    + ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[0];

  // Update for DiscreteIntegrator: '<S70>/Discrete-Time Integrator'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e +=
    ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_gainva_k *
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1];

  // Update for UnitDelay: '<S83>/Unit Delay' incorporates:
  //   Product: '<S83>/Product4'
  //   Sum: '<S83>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ge =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t40 * ROPOD_4Wheel_TdistZMPC_cntr_B.t41 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.TmpSignalConversionAtCoordi[1];

  // Update for Memory: '<S68>/Memory2'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j2 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t23;

  // Update for Memory: '<S68>/Memory3'
  ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_b =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t42;

  // Update for UnitDelay: '<S322>/Unit Delay' incorporates:
  //   Product: '<S322>/Product4'
  //   Sum: '<S322>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_az =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_b * ROPOD_4Wheel_TdistZMPC_cntr_B.t24 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_l;

  // Update for UnitDelay: '<S318>/Unit Delay' incorporates:
  //   Product: '<S318>/Product4'
  //   Sum: '<S318>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m0 =
    ROPOD_4Wheel_TdistZMPC_cntr_B.t3 * ROPOD_4Wheel_TdistZMPC_cntr_B.t25 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformationC_d;

  // Update for UnitDelay: '<S320>/Unit Delay' incorporates:
  //   Product: '<S320>/Product4'
  //   Sum: '<S320>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fz =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_hx * ROPOD_4Wheel_TdistZMPC_cntr_B.t30 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_dy;

  // Update for UnitDelay: '<S324>/Unit Delay' incorporates:
  //   Product: '<S324>/Product4'
  //   Sum: '<S324>/Sum1'

  ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io =
    ROPOD_4Wheel_TdistZMPC_cntr_B.a_m * ROPOD_4Wheel_TdistZMPC_cntr_B.t31 +
    ROPOD_4Wheel_TdistZMPC_cntr_B.rtb_CoordinateTransformation_lx;

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

  ROPOD_4Wheel_TdistZMPC_cntr_M->Sizes.numSFcns = (5);

  // register each child
  {
    (void) memset((void *)
                  &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  5*sizeof(SimStruct));
    ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions =
      (&ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[i] =
          (&ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S32>/S-Function (ec_ROPOD_SmartWheel) 
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

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.UPtrs0;
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
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.outputPortUnits
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
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn0.params;
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

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.UPtrs0;
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
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.outputPortUnits
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
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn1.params;
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
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn2.params;
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

    // Level2 S-Function Block: ROPOD_4Wheel_TdistZMPC_cntr/<S46>/S-Function Builder (Read_Serial_Port) 
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

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 32);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_TdistZMPC_cntr_M->NonInlinedSFcns.Sfcn4.outputPortUnits
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
  }

  {
    int32_T i;
    static const char_T tmp[20] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w', 'h',
      'e', 'e', 'l', 's', '/', 'e', 'n', 'a', 'b', 'l', 'e' };

    static const char_T tmp_0[25] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'm', 'a', 'x', '_', 'c', 'u', 'r', 'r', 'e',
      'n', 't' };

    static const char_T tmp_1[31] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_2[31] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_3[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'I',
      '_', 'f', 'h', 'z' };

    static const char_T tmp_4[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'K',
      'g', 'a', 'i', 'n' };

    static const char_T tmp_5[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_6[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'L', '_',
      'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_7[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'L', '_',
      'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_8[25] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'I', '_', 'f',
      'h', 'z' };

    static const char_T tmp_9[25] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'K', 'g', 'a',
      'i', 'n' };

    static const char_T tmp_a[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'P', 'F',
      '_', 'f', 'h', 'z' };

    static const char_T tmp_b[32] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_c[32] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_d[28] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'I', '_', 'f', 'h', 'z' };

    static const char_T tmp_e[28] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'K', 'g', 'a', 'i', 'n' };

    static const char_T tmp_f[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_g[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_h[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_i[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 'x', 'y' };

    static const char_T tmp_j[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 'x', 'y' };

    static const char_T tmp_k[30] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_l[28] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'l',
      'o', 'a', 'd', '_', 'a', 't', 't', 'a', 'c', 'h', 'e', 'd', '_', 'A', 'p',
      'p', 'l', 'i', 'e', 'd' };

    static const char_T tmp_m[19] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'r', 'i', 'g', 'h', 't' };

    static const char_T tmp_n[18] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'b', 'a', 'c', 'k' };

    static const char_T tmp_o[19] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'f', 'r', 'o', 'n', 't' };

    static const char_T tmp_p[18] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'w',
      'r', 'e', 'n', 'c', 'h', '_', 'l', 'e', 'f', 't' };

    static const char_T tmp_q[22] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'L',
      'L', 'C', 'm', 'o', 'd', 'e', '_', 'A', 'p', 'p', 'l', 'i', 'e', 'd' };

    static const char_T tmp_r[24] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'S',
      'e', 't', '_', 'l', 'o', 'a', 'd', '_', 'a', 't', 't', 'a', 'c', 'h', 'e',
      'd' };

    static const char_T tmp_s[18] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'S',
      'e', 't', '_', 'L', 'L', 'C', 'm', 'o', 'd', 'e' };

    static const char_T tmp_t[16] = { '/', 'o', 'd', 'o', 'm', '_', 'i', 'n',
      'c', 'o', 'm', 'p', 'l', 'e', 't', 'e' };

    static const char_T tmp_u[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '4' };

    static const char_T tmp_v[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '3' };

    static const char_T tmp_w[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '2' };

    static const char_T tmp_x[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '1' };

    static const char_T tmp_y[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_z[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_10[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_11[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_12[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_13[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_14[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_15[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_16[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'd', '_', 'w' };

    static const char_T tmp_17[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 's', '_', 'w' };

    static const char_T tmp_18[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '4' };

    static const char_T tmp_19[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '4' };

    static const char_T tmp_1a[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '3' };

    static const char_T tmp_1b[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '3' };

    static const char_T tmp_1c[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '2' };

    static const char_T tmp_1d[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '2' };

    static const char_T tmp_1e[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '1' };

    static const char_T tmp_1f[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '1' };

    char_T tmp_1g[9];
    char_T tmp_1h[17];

    // Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized = 1;

    // Start for MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_1f[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2173.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_1e[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2176.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_1d[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2177.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_1c[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2178.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_1b[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2179.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_1a[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2180.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_19[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2181.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_18[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2182.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[i] = tmp_17[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[19] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2174.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv11);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[i] = tmp_16[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[19] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2183.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv11);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_15[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2184.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_14[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2185.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_13[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2186.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_12[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2187.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_11[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2188.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_10[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2189.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_z[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2190.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_y[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2175.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_x[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2214.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_w[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2216.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_v[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2217.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_u[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2218.set_initial_value
      (R_ParameterInitia_h);

    // End of Start for MATLABSystem: '<S7>/Get Parameter5'
    // Start for Atomic SubSystem: '<S2>/Publish'
    // Start for MATLABSystem: '<S412>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_1h[i] = tmp_t[i];
    }

    tmp_1h[16] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_1896.createPublisher(tmp_1h,
      ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S412>/SinkBlock'
    // End of Start for SubSystem: '<S2>/Publish'

    // Start for Atomic SubSystem: '<S3>/Subscribe1'
    // Start for MATLABSystem: '<S413>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_s[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[18] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_9639.createSubscriber
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12, ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S413>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe1'

    // Start for S-Function (Read_Serial_Port): '<S46>/S-Function Builder'
    // Level2 S-Function Block: '<S46>/S-Function Builder' (Read_Serial_Port)
    {
      SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for Atomic SubSystem: '<S3>/Subscribe2'
    // Start for MATLABSystem: '<S414>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_r[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_9640.createSubscriber
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7, ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S414>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe2'

    // Start for Atomic SubSystem: '<S9>/Publish4'
    // Start for MATLABSystem: '<S423>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[i] = tmp_q[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv8[22] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9627.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv8, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S423>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish4'

    // Start for Atomic SubSystem: '<S9>/Publish'
    // Start for MATLABSystem: '<S419>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_p[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[18] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9614.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S419>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish'

    // Start for Atomic SubSystem: '<S9>/Publish1'
    // Start for MATLABSystem: '<S420>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[i] = tmp_o[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[19] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9624.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv11, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S420>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish1'

    // Start for Atomic SubSystem: '<S9>/Publish2'
    // Start for MATLABSystem: '<S421>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[i] = tmp_n[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv12[18] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9625.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv12, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S421>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish2'

    // Start for Atomic SubSystem: '<S9>/Publish3'
    // Start for MATLABSystem: '<S422>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[i] = tmp_m[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv11[19] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9626.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv11, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S422>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish3'

    // Start for Atomic SubSystem: '<S9>/Publish5'
    // Start for MATLABSystem: '<S424>/SinkBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_l[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[28] = '\x00';
    Pub_ROPOD_4Wheel_TdistZMPC_cntr_9643.createPublisher
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4, ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S424>/SinkBlock'
    // End of Start for SubSystem: '<S9>/Publish5'

    // Start for MATLABSystem: '<S5>/Get Parameter14'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv2[i] = tmp_k[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv2[30] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2935.set_initial_value
      (ROPOD_ParameterInitialValue_pjs);

    // End of Start for MATLABSystem: '<S5>/Get Parameter14'

    // Start for MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[i] = tmp_j[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[21] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2237.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv9);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[i] = tmp_i[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv9[21] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv9);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2238.set_initial_value
      (ParameterInitial_pjsf4rz1te2rav);

    // End of Start for MATLABSystem: '<S8>/Get Parameter1'

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S417>/SourceBlock'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_1g[i] = tmp_h[i];
    }

    tmp_1g[8] = '\x00';
    Sub_ROPOD_4Wheel_TdistZMPC_cntr_1899.createSubscriber(tmp_1g,
      ROPOD_4Wheel__MessageQueueLen_p);

    // End of Start for MATLABSystem: '<S417>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'

    // Start for Delay: '<S303>/Enabled Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_B.EnabledDelay = 0.0;

    // Start for MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized = 0;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.SampleTime =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Tsp;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_g[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2239.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[i] = tmp_f[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2240.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv7);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_e[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2931.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[i] = tmp_d[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2932.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv4);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[i] = tmp_c[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[32] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2933.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv0);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[i] = tmp_b[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv0[32] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2934.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv0);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_a[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2903.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[i] = tmp_9[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2716.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv6);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[i] = tmp_8[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2898.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv6);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[i] = tmp_7[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2900.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv3);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[i] = tmp_6[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2902.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv3);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[i] = tmp_5[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2923.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv3);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_4[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2919.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[i] = tmp_3[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2920.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv5);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[i] = tmp_2[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[31] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2921.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv1);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[i] = tmp_1[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv1[31] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2922.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv1);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[i] = tmp_0[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2215.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv6);
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
      ROPOD_4Wheel_TdistZMPC_cntr_B.cv10[i] = tmp[i];
    }

    ROPOD_4Wheel_TdistZMPC_cntr_B.cv10[20] = '\x00';
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.initialize
      (ROPOD_4Wheel_TdistZMPC_cntr_B.cv10);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_TdistZMPC_cntr_2213.set_initial_value
      (ParameterInitial_pjsf4rz1te2rav);

    // End of Start for MATLABSystem: '<S7>/Get Parameter'
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

    // InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_f;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_f;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_f;

    // InitializeConditions for UnitDelay: '<S111>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S109>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_e;

    // InitializeConditions for UnitDelay: '<S113>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_l;

    // InitializeConditions for UnitDelay: '<S115>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_h;

    // InitializeConditions for UnitDelay: '<S117>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_l0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_j;

    // InitializeConditions for UnitDelay: '<S119>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lh =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S121>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lr =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_i;

    // InitializeConditions for UnitDelay: '<S123>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_f;

    // InitializeConditions for Memory: '<S61>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition;

    // InitializeConditions for Memory: '<S61>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition;

    // InitializeConditions for UnitDelay: '<S151>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_e4;

    // InitializeConditions for UnitDelay: '<S149>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lu;

    // InitializeConditions for UnitDelay: '<S153>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_if;

    // InitializeConditions for UnitDelay: '<S155>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_hg;

    // InitializeConditions for UnitDelay: '<S157>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jo =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n;

    // InitializeConditions for UnitDelay: '<S159>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S161>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_l3;

    // InitializeConditions for UnitDelay: '<S163>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_e0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_j4;

    // InitializeConditions for Memory: '<S64>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_f;

    // InitializeConditions for Memory: '<S64>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_h;

    // InitializeConditions for Memory: '<S62>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_k;

    // InitializeConditions for Memory: '<S62>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_k;

    // InitializeConditions for Memory: '<S65>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_c;

    // InitializeConditions for Memory: '<S65>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_ed =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_e;

    // InitializeConditions for UnitDelay: '<S191>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gu;

    // InitializeConditions for UnitDelay: '<S189>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_er =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_i3;

    // InitializeConditions for UnitDelay: '<S193>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ff =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_hy;

    // InitializeConditions for UnitDelay: '<S195>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S197>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fe =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lj;

    // InitializeConditions for UnitDelay: '<S199>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ii =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lr;

    // InitializeConditions for UnitDelay: '<S201>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_dw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jw;

    // InitializeConditions for UnitDelay: '<S203>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_mi;

    // InitializeConditions for Memory: '<S60>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_m;

    // InitializeConditions for Memory: '<S60>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_hg;

    // InitializeConditions for UnitDelay: '<S231>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_il =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n3;

    // InitializeConditions for UnitDelay: '<S229>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_a0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gn;

    // InitializeConditions for UnitDelay: '<S233>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ej =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_nr;

    // InitializeConditions for UnitDelay: '<S235>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jm =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_lq;

    // InitializeConditions for UnitDelay: '<S237>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_a;

    // InitializeConditions for UnitDelay: '<S239>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S241>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_al =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ah;

    // InitializeConditions for UnitDelay: '<S243>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jx =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n3m;

    // InitializeConditions for Memory: '<S66>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_c4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_mc;

    // InitializeConditions for Memory: '<S66>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_i;

    // InitializeConditions for DiscreteStateSpace: '<S54>/Internal'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition;

    // InitializeConditions for Memory: '<S63>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_mt;

    // InitializeConditions for Memory: '<S63>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_gi =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_f;

    // InitializeConditions for Memory: '<S67>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_g;

    // InitializeConditions for Memory: '<S67>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_hh;

    // InitializeConditions for DiscreteStateSpace: '<S55>/Internal'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition_g;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Internal_DSTATE_o[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Internal_InitialCondition_g;

    // InitializeConditions for Delay: '<S303>/Enabled Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.EnabledDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S304>/Delay Input2'
    //
    //  Block description for '<S304>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S305>/Delay Input2'
    //
    //  Block description for '<S305>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S306>/Delay Input2'
    //
    //  Block description for '<S306>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.DelayInput2_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DelayInput2_InitialCondition_i;

    // InitializeConditions for DiscreteIntegrator: '<S344>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S345>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_InitialS;

    // InitializeConditions for DiscreteIntegrator: '<S346>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_e;

    // InitializeConditions for DiscreteTransferFcn: '<S347>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_n;

    // InitializeConditions for UnitDelay: '<S342>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lv =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_jc;

    // InitializeConditions for DiscreteIntegrator: '<S353>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_l;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_m = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S354>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_e;

    // InitializeConditions for DiscreteIntegrator: '<S355>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_la;

    // InitializeConditions for DiscreteTransferFcn: '<S356>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_m;

    // InitializeConditions for UnitDelay: '<S351>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_c;

    // InitializeConditions for DiscreteIntegrator: '<S362>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_d;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_b = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S363>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_a;

    // InitializeConditions for DiscreteIntegrator: '<S364>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_l =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_n;

    // InitializeConditions for DiscreteTransferFcn: '<S365>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_j;

    // InitializeConditions for UnitDelay: '<S360>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_n2;

    // InitializeConditions for DiscreteIntegrator: '<S371>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_c;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_l = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S372>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_im =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_d;

    // InitializeConditions for DiscreteIntegrator: '<S373>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_o =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_f;

    // InitializeConditions for DiscreteTransferFcn: '<S374>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_m3;

    // InitializeConditions for UnitDelay: '<S369>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ev =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_fx;

    // InitializeConditions for DiscreteIntegrator: '<S380>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_j;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_c = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S381>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_mb;

    // InitializeConditions for DiscreteIntegrator: '<S382>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_py =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_en;

    // InitializeConditions for DiscreteTransferFcn: '<S383>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ms;

    // InitializeConditions for UnitDelay: '<S378>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_kp =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_o;

    // InitializeConditions for DiscreteIntegrator: '<S389>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dj =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_m;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_o = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S390>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_iz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_c;

    // InitializeConditions for DiscreteIntegrator: '<S391>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_fd =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_mp;

    // InitializeConditions for DiscreteTransferFcn: '<S392>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_nn;

    // InitializeConditions for UnitDelay: '<S387>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ez =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_cu;

    // InitializeConditions for DiscreteIntegrator: '<S398>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_n =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_lt;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_f = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S399>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_a4 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_l;

    // InitializeConditions for DiscreteIntegrator: '<S400>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ik =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_do;

    // InitializeConditions for DiscreteTransferFcn: '<S401>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_i;

    // InitializeConditions for UnitDelay: '<S396>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lu =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_kx;

    // InitializeConditions for DiscreteIntegrator: '<S407>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_j4;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_d = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S408>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_l5 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_o;

    // InitializeConditions for DiscreteIntegrator: '<S409>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_i3 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_p;

    // InitializeConditions for DiscreteTransferFcn: '<S410>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_pi =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_dx;

    // InitializeConditions for UnitDelay: '<S405>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_f1 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_la;

    // InitializeConditions for UnitDelay: '<S269>/UD'
    //
    //  Block description for '<S269>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[0] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[1] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UD_DSTATE[2] =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S278>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_cq;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_om = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S279>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_kb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_lu;

    // InitializeConditions for DiscreteIntegrator: '<S280>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_g0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_ct;

    // InitializeConditions for DiscreteTransferFcn: '<S281>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_dz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_b;

    // InitializeConditions for UnitDelay: '<S276>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_hv =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_gs;

    // InitializeConditions for DiscreteIntegrator: '<S287>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_do =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_o;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_k = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S288>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_jy =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_ir;

    // InitializeConditions for DiscreteIntegrator: '<S289>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_dw =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_b;

    // InitializeConditions for DiscreteTransferFcn: '<S290>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_al =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_al;

    // InitializeConditions for UnitDelay: '<S285>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ka =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_p;

    // InitializeConditions for DiscreteIntegrator: '<S296>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_i;
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_PrevResetState_e = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S297>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_state_mb =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initia_p;

    // InitializeConditions for DiscreteIntegrator: '<S298>/Integrator'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Integrator_DSTATE_ol =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Integrator_IC_k;

    // InitializeConditions for DiscreteTransferFcn: '<S299>/Filter Differentiator TF' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.FilterDifferentiatorTF_Initi_im;

    // InitializeConditions for UnitDelay: '<S294>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_du =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_g3;

    // InitializeConditions for DiscreteIntegrator: '<S69>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_i =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_a;

    // InitializeConditions for UnitDelay: '<S81>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_lq =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_oe;

    // InitializeConditions for UnitDelay: '<S79>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_bt =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ay;

    // InitializeConditions for DiscreteIntegrator: '<S70>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_e =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC_f1;

    // InitializeConditions for UnitDelay: '<S85>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_jz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_d;

    // InitializeConditions for UnitDelay: '<S83>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_ge =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_ck;

    // InitializeConditions for Memory: '<S68>/Memory2'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory2_PreviousInput_j2 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory2_InitialCondition_l;

    // InitializeConditions for Memory: '<S68>/Memory3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Memory3_PreviousInput_b =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Memory3_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S322>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_az =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_d2;

    // InitializeConditions for UnitDelay: '<S318>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_m0 =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_dh;

    // InitializeConditions for UnitDelay: '<S320>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_fz =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_az;

    // InitializeConditions for UnitDelay: '<S324>/Unit Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.UnitDelay_DSTATE_io =
      ROPOD_4Wheel_TdistZMPC_cntr_P.UnitDelay_InitialCondition_du;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S413>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S415>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1_p =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S413>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S414>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S416>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S414>/Enabled Subsystem'
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
    // SystemInitialize for Enabled SubSystem: '<S417>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S418>/Out1'
    ROPOD_4Wheel_TdistZMPC_cntr_B.In1 = ROPOD_4Wheel_TdistZMPC_cntr_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S417>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'

    // SystemInitialize for Enabled SubSystem: '<S41>/ZMPC_x'
    // InitializeConditions for Delay: '<S47>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE_j =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition;

    // InitializeConditions for Delay: '<S47>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S47>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE_d =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition;

    // InitializeConditions for Delay: '<S47>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE_a =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition;

    // InitializeConditions for Delay: '<S47>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE_m =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition;

    // SystemInitialize for Outport: '<S47>/Fx'
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv_i = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0;

    // End of SystemInitialize for SubSystem: '<S41>/ZMPC_x'

    // SystemInitialize for Enabled SubSystem: '<S41>/ZMPC_y'
    // InitializeConditions for Delay: '<S48>/Delay'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay_InitialCondition_a;

    // InitializeConditions for Delay: '<S48>/Delay1'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay1_InitialCondition_g;

    // SystemInitialize for Enabled SubSystem: '<S41>/ZMPC_x'
    for (i = 0; i < 102; i++) {
      // InitializeConditions for Delay: '<S47>/Delay2'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE_l[i] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition;

      // InitializeConditions for Delay: '<S48>/Delay2'
      ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay2_DSTATE[i] =
        ROPOD_4Wheel_TdistZMPC_cntr_P.Delay2_InitialCondition_o;
    }

    // End of SystemInitialize for SubSystem: '<S41>/ZMPC_x'

    // InitializeConditions for Delay: '<S48>/Delay3'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay3_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay3_InitialCondition_e;

    // InitializeConditions for Delay: '<S48>/Delay4'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay4_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay4_InitialCondition_m;

    // InitializeConditions for Delay: '<S48>/Delay6'
    ROPOD_4Wheel_TdistZMPC_cntr_DW.Delay6_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.Delay6_InitialCondition_e;

    // SystemInitialize for Outport: '<S48>/Fx'
    ROPOD_4Wheel_TdistZMPC_cntr_B.mv = ROPOD_4Wheel_TdistZMPC_cntr_P.Fx_Y0_c;

    // End of SystemInitialize for SubSystem: '<S41>/ZMPC_y'

    // SystemInitialize for Enabled SubSystem: '<S41>/Angle controller'
    // InitializeConditions for DiscreteIntegrator: '<S45>/Discrete-Time Integrator' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator_DSTATE_k =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator_IC;

    // InitializeConditions for DiscreteIntegrator: '<S45>/Discrete-Time Integrator1' 
    ROPOD_4Wheel_TdistZMPC_cntr_DW.DiscreteTimeIntegrator1_DSTATE =
      ROPOD_4Wheel_TdistZMPC_cntr_P.DiscreteTimeIntegrator1_IC;

    // SystemInitialize for Outport: '<S45>/u_N'
    ROPOD_4Wheel_TdistZMPC_cntr_B.Sum1 = ROPOD_4Wheel_TdistZMPC_cntr_P.u_N_Y0;

    // End of SystemInitialize for SubSystem: '<S41>/Angle controller'
  }
}

// Model terminate function
void ROPOD_4Wheel_TdistZMPC_cntr_terminate(void)
{
  // Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nv.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/Coordinate Transformation Conversion'

  // Start for MATLABSystem: '<S6>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_be.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter'

  // Start for MATLABSystem: '<S6>/Get Parameter11'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter11'

  // Start for MATLABSystem: '<S6>/Get Parameter12'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fa.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter12'

  // Start for MATLABSystem: '<S6>/Get Parameter13'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_p.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter13'

  // Start for MATLABSystem: '<S6>/Get Parameter14'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_l1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter14'

  // Start for MATLABSystem: '<S6>/Get Parameter15'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pe.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter15'

  // Start for MATLABSystem: '<S6>/Get Parameter16'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter16'

  // Start for MATLABSystem: '<S6>/Get Parameter17'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bc.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter17'

  // Start for MATLABSystem: '<S6>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hv.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter1'

  // Start for MATLABSystem: '<S6>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_j.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter2'

  // Start for MATLABSystem: '<S6>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter3'

  // Start for MATLABSystem: '<S6>/Get Parameter4'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter4'

  // Start for MATLABSystem: '<S6>/Get Parameter5'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter5'

  // Start for MATLABSystem: '<S6>/Get Parameter6'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ep.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter6'

  // Start for MATLABSystem: '<S6>/Get Parameter7'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lm.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter7'

  // Start for MATLABSystem: '<S6>/Get Parameter8'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ew.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter8'

  // Start for MATLABSystem: '<S6>/Get Parameter9'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_nj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter9'

  // Start for MATLABSystem: '<S6>/Get Parameter10'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter10'

  // Start for MATLABSystem: '<S7>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter1'

  // Start for MATLABSystem: '<S7>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_m.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter3'

  // Start for MATLABSystem: '<S7>/Get Parameter4'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i4.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter4'

  // Start for MATLABSystem: '<S7>/Get Parameter5'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_b.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter5'

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'
  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S33>/S-Function'
  // Level2 S-Function Block: '<S33>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S34>/S-Function'
  // Level2 S-Function Block: '<S34>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S35>/S-Function'
  // Level2 S-Function Block: '<S35>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  // Terminate for Atomic SubSystem: '<S2>/Publish'
  // Start for MATLABSystem: '<S412>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hy.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S412>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish'

  // Terminate for Atomic SubSystem: '<S3>/Subscribe1'
  // Start for MATLABSystem: '<S413>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c5.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S413>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe1'

  // Terminate for S-Function (Read_Serial_Port): '<S46>/S-Function Builder'
  // Level2 S-Function Block: '<S46>/S-Function Builder' (Read_Serial_Port)
  {
    SimStruct *rts = ROPOD_4Wheel_TdistZMPC_cntr_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  // Terminate for Atomic SubSystem: '<S3>/Subscribe2'
  // Start for MATLABSystem: '<S414>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S414>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe2'

  // Terminate for Atomic SubSystem: '<S9>/Publish4'
  // Start for MATLABSystem: '<S423>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_k1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S423>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish4'

  // Terminate for Atomic SubSystem: '<S9>/Publish'
  // Start for MATLABSystem: '<S419>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ht.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S419>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish'

  // Terminate for Atomic SubSystem: '<S9>/Publish1'
  // Start for MATLABSystem: '<S420>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_lmr.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S420>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish1'

  // Terminate for Atomic SubSystem: '<S9>/Publish2'
  // Start for MATLABSystem: '<S421>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fk.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S421>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish2'

  // Terminate for Atomic SubSystem: '<S9>/Publish3'
  // Start for MATLABSystem: '<S422>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ia.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S422>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish3'

  // Terminate for Atomic SubSystem: '<S9>/Publish5'
  // Start for MATLABSystem: '<S424>/SinkBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ps.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S424>/SinkBlock'
  // End of Terminate for SubSystem: '<S9>/Publish5'

  // Start for MATLABSystem: '<S5>/Get Parameter14'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ft.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter14'

  // Start for MATLABSystem: '<S8>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter'

  // Start for MATLABSystem: '<S8>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_f.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Start for MATLABSystem: '<S417>/SourceBlock'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S417>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe1'

  // Start for MATLABSystem: '<S8>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter2'

  // Start for MATLABSystem: '<S8>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_i.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter3'

  // Start for MATLABSystem: '<S5>/Get Parameter10'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_pz.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter10'

  // Start for MATLABSystem: '<S5>/Get Parameter11'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_jt.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter11'

  // Start for MATLABSystem: '<S5>/Get Parameter12'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_da.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter12'

  // Start for MATLABSystem: '<S5>/Get Parameter13'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_e5.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter13'

  // Start for MATLABSystem: '<S5>/Get Parameter6'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_c.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter6'

  // Start for MATLABSystem: '<S5>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_mn.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter'

  // Start for MATLABSystem: '<S5>/Get Parameter3'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_d0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter3'

  // Start for MATLABSystem: '<S5>/Get Parameter4'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ey.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter4'

  // Start for MATLABSystem: '<S5>/Get Parameter5'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_g0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter5'

  // Start for MATLABSystem: '<S5>/Get Parameter9'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_ch.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter9'

  // Start for MATLABSystem: '<S5>/Get Parameter1'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_fy.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter1'

  // Start for MATLABSystem: '<S5>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_hq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter2'

  // Start for MATLABSystem: '<S5>/Get Parameter7'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_eq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter7'

  // Start for MATLABSystem: '<S5>/Get Parameter8'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_a.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/Get Parameter8'

  // Start for MATLABSystem: '<S7>/Get Parameter2'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_h.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter2'

  // Start for MATLABSystem: '<S7>/Get Parameter'
  if (ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.isInitialized == 1) {
    ROPOD_4Wheel_TdistZMPC_cntr_DW.obj_bg.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter'
}

//
// File trailer for generated code.
//
// [EOF]
//
