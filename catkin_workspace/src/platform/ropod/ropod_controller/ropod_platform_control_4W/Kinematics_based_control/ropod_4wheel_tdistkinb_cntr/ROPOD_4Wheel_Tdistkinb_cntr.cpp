//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr'.
//
// Model version                  : 1.263
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Mon Jul 23 15:41:53 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_Tdistkinb_cntr.h"
#include "ROPOD_4Wheel_Tdistkinb_cntr_private.h"
#define ParameterInitia_icsq3sbauzlauko (2.001)
#define ParameterInitialV_icsq3sbauzlau (10.0)
#define ParameterInitialVa_icsq3sbauzla (1.0)
#define ParameterInitialVal_icsq3sbauzl (0.0525)
#define ParameterInitialValu_icsq3sbauz (0.01)
#define ParameterInitialValue_icsq3sba (0.21)
#define ParameterInitialValue_icsq3sbau (0.08)
#define ParameterInitial_icsq3sbauzlauk (3.508)
#define ROPOD_4Wh_ParameterInitialValue (20.0)
#define ROPOD_4Wheel_Td_MessageQueueLen (1)
#define ROPOD_4Wheel__MessageQueueLen_i (5)
#define ROPOD_4_ParameterInitialValue_i (0.0)
#define ROPOD_ParameterInitialValue_ics (100.0)
#define ROPOD__ParameterInitialValue_ic (150.0)
#define ROPO_ParameterInitialValue_icsq (200.0)
#define ROP_ParameterInitialValue_icsq3 (2.0)
#define RO_ParameterInitialValue_icsq3s (0.05)
#define R_ParameterInitia_i            (1.873)
#define R_ParameterInitia_j            (2.21)
#define R_ParameterInitia_o            (1.6)
#define R_ParameterInitialValue_icsq3sb (-0.21)

// Block signals (auto storage)
B_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_B;

// Block states (auto storage)
DW_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_DW;

// Previous zero-crossings (trigger) states
PrevZCX_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX;

// Real-time model
RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_T ROPOD_4Wheel_Tdistkinb_cntr_M_;
RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_T *const ROPOD_4Wheel_Tdistkinb_cntr_M =
  &ROPOD_4Wheel_Tdistkinb_cntr_M_;

// Forward declaration for local functions
static real_T ROPOD_4Wheel_Tdistkinb_cn_xnrm2(int32_T n, const real_T x[27],
  int32_T ix0);
static real_T ROPOD_4Wheel_Tdistkinb__xnrm2_n(int32_T n, const real_T x[9],
  int32_T ix0);
static void ROPOD_4Wheel_Tdistkinb_xaxpy_n2(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_Tdistkinb__xaxpy_n(int32_T n, real_T a, const real_T x
  [27], int32_T ix0, real_T y[3], int32_T iy0);
static void ROPOD_4Wheel_Tdistkinb_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s);
static real_T ROPOD_4Wheel_Tdistkinb_cn_xdotc(int32_T n, const real_T x[27],
  int32_T ix0, const real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_Tdistkinb_cn_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[27], int32_T iy0);
static void ROPOD_4Wheel_Tdistkinb_cntr_svd(const real_T A[27], real_T U[3]);
static void ROPOD_4Wheel_Tdis_Unconstrained(const real_T Hinv[81], const real_T
  f[9], real_T x[9]);
static real_T ROPOD_4Wheel_Tdistkinb_cnt_norm(const real_T x[9]);
static void ROPOD_4Wheel_Tdistkinb_cntr_abs(const real_T x[9], real_T y[9]);
static void ROPOD_4Wheel_Tdistkinb_cn_abs_d(const real_T x[21], real_T y[21]);
static real_T ROPOD_4Wheel_Tdistkinb_xnrm2_ng(int32_T n, const real_T x[81],
  int32_T ix0);
static void ROPOD_4Wheel_Tdistkinb_cn_xgemv(int32_T m, int32_T n, const real_T
  A[81], int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
static void ROPOD_4Wheel_Tdistkinb_cnt_xger(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[9], real_T A[81], int32_T ia0);
static void ROPOD_4Wheel_Tdistkinb_c_xgeqrf(real_T A[81], real_T tau[9]);
static void ROPOD_4Wheel_Tdistkinb_cntr_qr(const real_T A[81], real_T Q[81],
  real_T R[81]);
static real_T ROPOD_4Wheel_Tdistki_KWIKfactor(const real_T Ac[189], const
  int16_T iC[21], int16_T nA, const real_T Linv[81], real_T RLinv[81], real_T D
  [81], real_T H[81]);
static void ROPOD_4Wheel_Tdi_DropConstraint(int16_T kDrop, int16_T iA[21],
  int16_T *nA, int16_T iC[21]);
static void ROPOD_4Wheel_T_ResetToColdStart(int16_T iA[21], int16_T iC[21]);
static void ROPOD_4Wheel_Tdistk_mpcqpsolver(const real_T Linv[81], const real_T
  f[9], const real_T b[18], const real_T Aeq[27], const real_T beq[3], real_T x
  [9]);
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

  (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1])++;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1]) > 9) {// Sample time: [0.01s, 0.0s] 
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] = 0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleHits[1] =
    (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0);
  (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2])++;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2]) > 999) {// Sample time: [1.0s, 0.0s] 
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] = 0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleHits[2] =
    (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0);
}

//
// Output and update for atomic system:
//    '<S53>/MATLAB Function'
//    '<S62>/MATLAB Function'
//    '<S71>/MATLAB Function'
//    '<S91>/MATLAB Function'
//    '<S100>/MATLAB Function'
//    '<S109>/MATLAB Function'
//    '<S118>/MATLAB Function'
//    '<S127>/MATLAB Function'
//    '<S136>/MATLAB Function'
//    '<S145>/MATLAB Function'
//    '<S154>/MATLAB Function'
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistkinb_cn_xnrm2(int32_T n, const real_T x[27],
  int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  if (n == 1) {
    y = fabs(x[ix0 - 1]);
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.scale_l = 3.3121686421112381E-170;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_j = fabs(x[k - 1]);
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_j >
          ROPOD_4Wheel_Tdistkinb_cntr_B.scale_l) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.t_d =
          ROPOD_4Wheel_Tdistkinb_cntr_B.scale_l /
          ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_j;
        y = y * ROPOD_4Wheel_Tdistkinb_cntr_B.t_d *
          ROPOD_4Wheel_Tdistkinb_cntr_B.t_d + 1.0;
        ROPOD_4Wheel_Tdistkinb_cntr_B.scale_l =
          ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_j;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_B.t_d =
          ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_j /
          ROPOD_4Wheel_Tdistkinb_cntr_B.scale_l;
        y += ROPOD_4Wheel_Tdistkinb_cntr_B.t_d *
          ROPOD_4Wheel_Tdistkinb_cntr_B.t_d;
      }
    }

    y = ROPOD_4Wheel_Tdistkinb_cntr_B.scale_l * sqrt(y);
  }

  return y;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistkinb__xnrm2_n(int32_T n, const real_T x[9],
  int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.scale_m = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_n = fabs(x[k - 1]);
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_n >
        ROPOD_4Wheel_Tdistkinb_cntr_B.scale_m) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t_p = ROPOD_4Wheel_Tdistkinb_cntr_B.scale_m /
        ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_n;
      y = y * ROPOD_4Wheel_Tdistkinb_cntr_B.t_p *
        ROPOD_4Wheel_Tdistkinb_cntr_B.t_p + 1.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.scale_m =
        ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_n;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t_p = ROPOD_4Wheel_Tdistkinb_cntr_B.absxk_n /
        ROPOD_4Wheel_Tdistkinb_cntr_B.scale_m;
      y += ROPOD_4Wheel_Tdistkinb_cntr_B.t_p * ROPOD_4Wheel_Tdistkinb_cntr_B.t_p;
    }
  }

  return ROPOD_4Wheel_Tdistkinb_cntr_B.scale_m * sqrt(y);
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_xaxpy_n2(int32_T n, real_T a, const real_T x
  [3], int32_T ix0, real_T y[27], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb__xaxpy_n(int32_T n, real_T a, const real_T x
  [27], int32_T ix0, real_T y[3], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  ROPOD_4Wheel_Tdistkinb_cntr_B.roe = *b;
  ROPOD_4Wheel_Tdistkinb_cntr_B.absa = fabs(*a);
  ROPOD_4Wheel_Tdistkinb_cntr_B.absb = fabs(*b);
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.absa > ROPOD_4Wheel_Tdistkinb_cntr_B.absb) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.roe = *a;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.scale = ROPOD_4Wheel_Tdistkinb_cntr_B.absa +
    ROPOD_4Wheel_Tdistkinb_cntr_B.absb;
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    ROPOD_4Wheel_Tdistkinb_cntr_B.absa = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.ads = ROPOD_4Wheel_Tdistkinb_cntr_B.absa /
      ROPOD_4Wheel_Tdistkinb_cntr_B.scale;
    ROPOD_4Wheel_Tdistkinb_cntr_B.bds = ROPOD_4Wheel_Tdistkinb_cntr_B.absb /
      ROPOD_4Wheel_Tdistkinb_cntr_B.scale;
    ROPOD_4Wheel_Tdistkinb_cntr_B.scale *= sqrt
      (ROPOD_4Wheel_Tdistkinb_cntr_B.ads * ROPOD_4Wheel_Tdistkinb_cntr_B.ads +
       ROPOD_4Wheel_Tdistkinb_cntr_B.bds * ROPOD_4Wheel_Tdistkinb_cntr_B.bds);
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.roe < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.scale = -ROPOD_4Wheel_Tdistkinb_cntr_B.scale;
    }

    *c = *a / ROPOD_4Wheel_Tdistkinb_cntr_B.scale;
    *s = *b / ROPOD_4Wheel_Tdistkinb_cntr_B.scale;
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.absa > ROPOD_4Wheel_Tdistkinb_cntr_B.absb)
    {
      ROPOD_4Wheel_Tdistkinb_cntr_B.absa = *s;
    } else if (*c != 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.absa = 1.0 / *c;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.absa = 1.0;
    }
  }

  *a = ROPOD_4Wheel_Tdistkinb_cntr_B.scale;
  *b = ROPOD_4Wheel_Tdistkinb_cntr_B.absa;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistkinb_cn_xdotc(int32_T n, const real_T x[27],
  int32_T ix0, const real_T y[27], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  for (k = 1; k <= n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_xaxpy(int32_T n, real_T a, int32_T ix0,
  real_T y[27], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr_svd(const real_T A[27], real_T U[3])
{
  boolean_T apply_transform;
  int32_T qjj;
  int32_T m;
  int32_T kase;
  int32_T d_ii;
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[0], &A[0], 27U * sizeof(real_T));
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.e[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_B.work_c[0] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.work_c[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.work_c[2] = 0.0;
  apply_transform = false;
  ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cn_xnrm2(3,
    ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 1);
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[0] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] = -ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] = ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.s[0]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = 1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.s
        [0];
      for (qjj = 0; qjj + 1 < 4; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
      }
    } else {
      for (qjj = 0; qjj + 1 < 4; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[qjj] /=
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[0];
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[0]++;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] = -ROPOD_4Wheel_Tdistkinb_cntr_B.s[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] = 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.q = 1;
  while (ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1 < 10) {
    qjj = 3 * ROPOD_4Wheel_Tdistkinb_cntr_B.q;
    if (apply_transform) {
      ROPOD_4Wheel_Tdistkinb_cn_xaxpy(3, -(ROPOD_4Wheel_Tdistkinb_cn_xdotc(3,
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 1,
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, qjj + 1) /
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[0]), 1,
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, qjj + 1);
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[qjj];
    ROPOD_4Wheel_Tdistkinb_cntr_B.q++;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb__xnrm2_n(8,
    ROPOD_4Wheel_Tdistkinb_cntr_B.e, 2);
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.e[0] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.e[1] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[0] = -ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[0] = ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.e[0];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.e[0]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = 1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.e
        [0];
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 1;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      }
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 1;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] /=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.e[1]++;
    ROPOD_4Wheel_Tdistkinb_cntr_B.e[0] = -ROPOD_4Wheel_Tdistkinb_cntr_B.e[0];
    ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 < 4) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.work_c[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] =
        0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb__xaxpy_n(2,
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq],
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 2,
        ROPOD_4Wheel_Tdistkinb_cntr_B.work_c, 2);
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb_xaxpy_n2(2,
        -ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] /
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[1], ROPOD_4Wheel_Tdistkinb_cntr_B.work_c,
        2, ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 2);
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
    }
  }

  apply_transform = false;
  ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cn_xnrm2(2,
    ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 5);
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[4] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] = -ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] = ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.s[1]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = 1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.s
        [1];
      for (qjj = 4; qjj + 1 < 7; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
      }
    } else {
      for (qjj = 4; qjj + 1 < 7; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[qjj] /=
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[1];
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[4]++;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] = -ROPOD_4Wheel_Tdistkinb_cntr_B.s[1];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] = 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.q = 2;
  while (ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1 < 10) {
    qjj = 3 * ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1;
    if (apply_transform) {
      ROPOD_4Wheel_Tdistkinb_cn_xaxpy(2, -(ROPOD_4Wheel_Tdistkinb_cn_xdotc(2,
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 5,
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, qjj + 1) /
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[4]), 5,
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, qjj + 1);
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[qjj];
    ROPOD_4Wheel_Tdistkinb_cntr_B.q++;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb__xnrm2_n(7,
    ROPOD_4Wheel_Tdistkinb_cntr_B.e, 3);
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.e[1] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.e[2] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[1] = -ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[1] = ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.e[1];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.e[1]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = 1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.e
        [1];
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 2;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      }
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 2;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] /=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.e[2]++;
    ROPOD_4Wheel_Tdistkinb_cntr_B.e[1] = -ROPOD_4Wheel_Tdistkinb_cntr_B.e[1];
    ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 2;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 < 4) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.work_c[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] =
        0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 2;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb__xaxpy_n(1,
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq],
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 3,
        ROPOD_4Wheel_Tdistkinb_cntr_B.work_c, 3);
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 2;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb_xaxpy_n2(1,
        -ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] /
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[2], ROPOD_4Wheel_Tdistkinb_cntr_B.work_c,
        3, ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 3);
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
    }
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.q = 3;
  while (ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1 < 10) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[3 * ROPOD_4Wheel_Tdistkinb_cntr_B.q +
      2];
    ROPOD_4Wheel_Tdistkinb_cntr_B.q++;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb__xnrm2_n(6,
    ROPOD_4Wheel_Tdistkinb_cntr_B.e, 4);
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.e[2] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.e[3] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[2] = -ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[2] = ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.e[2];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.e[2]) >= 1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = 1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.e
        [2];
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 3;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      }
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 3;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] /=
          ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.e[2] = -ROPOD_4Wheel_Tdistkinb_cntr_B.e[2];
  }

  m = 2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.s[2] = ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[8];
  ROPOD_4Wheel_Tdistkinb_cntr_B.s[3] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.e[0];
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.s[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] /
      ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.e[0] /
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] *= ROPOD_4Wheel_Tdistkinb_cntr_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.e[0] = ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
  ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.e[1];
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.s[1]);
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] /
      ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.e[1] /
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[2] = ROPOD_4Wheel_Tdistkinb_cntr_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm * ROPOD_4Wheel_Tdistkinb_cntr_B.b_A_c[8];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.e[1] = ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
  ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.e[2];
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.s[2] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.s[2]);
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.s[2] /
      ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[2] = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.e[2] /
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[3] = ROPOD_4Wheel_Tdistkinb_cntr_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_B.nrm * 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.e[2] = ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
  if (ROPOD_4Wheel_Tdistkinb_cntr_B.s[3] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.s[3] = (rtNaN);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.e[3] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 0;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_B.s[0] > ROPOD_4Wheel_Tdistkinb_cntr_B.e[0]) ||
      rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.e[0])) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.s[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.e[0];
  }

  if ((ROPOD_4Wheel_Tdistkinb_cntr_B.s[1] > ROPOD_4Wheel_Tdistkinb_cntr_B.e[1]) ||
      rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.e[1])) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = ROPOD_4Wheel_Tdistkinb_cntr_B.s[1];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rt = ROPOD_4Wheel_Tdistkinb_cntr_B.e[1];
  }

  if (!((ROPOD_4Wheel_Tdistkinb_cntr_B.nrm > ROPOD_4Wheel_Tdistkinb_cntr_B.rt) ||
        rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.rt))) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
  }

  if ((ROPOD_4Wheel_Tdistkinb_cntr_B.s[2] > ROPOD_4Wheel_Tdistkinb_cntr_B.ztest)
      || rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.ztest)) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.s[2];
  }

  if (!((ROPOD_4Wheel_Tdistkinb_cntr_B.nrm > ROPOD_4Wheel_Tdistkinb_cntr_B.ztest)
        || rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.ztest))) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.nrm = ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
  }

  while ((m + 2 > 0) && (!(ROPOD_4Wheel_Tdistkinb_cntr_B.qq >= 75))) {
    kase = m + 1;
    do {
      exitg1 = 0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.q = kase;
      if (kase == 0) {
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs
          (ROPOD_4Wheel_Tdistkinb_cntr_B.e[kase - 1]);
        if (ROPOD_4Wheel_Tdistkinb_cntr_B.rt <= (fabs
             (ROPOD_4Wheel_Tdistkinb_cntr_B.s[kase - 1]) + fabs
             (ROPOD_4Wheel_Tdistkinb_cntr_B.s[kase])) * 2.2204460492503131E-16)
        {
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[kase - 1] = 0.0;
          exitg1 = 1;
        } else if ((ROPOD_4Wheel_Tdistkinb_cntr_B.rt <= 1.0020841800044864E-292)
                   || ((ROPOD_4Wheel_Tdistkinb_cntr_B.qq > 20) &&
                       (ROPOD_4Wheel_Tdistkinb_cntr_B.rt <=
                        2.2204460492503131E-16 *
                        ROPOD_4Wheel_Tdistkinb_cntr_B.nrm))) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[kase - 1] = 0.0;
          exitg1 = 1;
        } else {
          kase--;
        }
      }
    } while (exitg1 == 0);

    if (m + 1 == kase) {
      kase = 4;
    } else {
      qjj = m + 2;
      d_ii = m + 2;
      exitg2 = false;
      while ((!exitg2) && (d_ii >= kase)) {
        qjj = d_ii;
        if (d_ii == kase) {
          exitg2 = true;
        } else {
          ROPOD_4Wheel_Tdistkinb_cntr_B.rt = 0.0;
          if (d_ii < m + 2) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.rt = fabs
              (ROPOD_4Wheel_Tdistkinb_cntr_B.e[d_ii - 1]);
          }

          if (d_ii > kase + 1) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.rt += fabs
              (ROPOD_4Wheel_Tdistkinb_cntr_B.e[d_ii - 2]);
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = fabs
            (ROPOD_4Wheel_Tdistkinb_cntr_B.s[d_ii - 1]);
          if ((ROPOD_4Wheel_Tdistkinb_cntr_B.ztest <= 2.2204460492503131E-16 *
               ROPOD_4Wheel_Tdistkinb_cntr_B.rt) ||
              (ROPOD_4Wheel_Tdistkinb_cntr_B.ztest <= 1.0020841800044864E-292))
          {
            ROPOD_4Wheel_Tdistkinb_cntr_B.s[d_ii - 1] = 0.0;
            exitg2 = true;
          } else {
            d_ii--;
          }
        }
      }

      if (qjj == kase) {
        kase = 3;
      } else if (m + 2 == qjj) {
        kase = 1;
      } else {
        kase = 2;
        ROPOD_4Wheel_Tdistkinb_cntr_B.q = qjj;
      }
    }

    switch (kase) {
     case 1:
      ROPOD_4Wheel_Tdistkinb_cntr_B.rt = ROPOD_4Wheel_Tdistkinb_cntr_B.e[m];
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[m] = 0.0;
      for (qjj = m; qjj + 1 >= ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1; qjj--) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cn_xrotg(&ROPOD_4Wheel_Tdistkinb_cntr_B.ztest,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.rt, &ROPOD_4Wheel_Tdistkinb_cntr_B.sqds,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj] =
          ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
        if (qjj + 1 > ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.rt = ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj
            - 1] * -ROPOD_4Wheel_Tdistkinb_cntr_B.smm1;
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj - 1] *=
            ROPOD_4Wheel_Tdistkinb_cntr_B.sqds;
        }
      }
      break;

     case 2:
      ROPOD_4Wheel_Tdistkinb_cntr_B.rt =
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q - 1];
      ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q - 1] = 0.0;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1 <= m + 2) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q];
        ROPOD_4Wheel_Tdistkinb_cn_xrotg(&ROPOD_4Wheel_Tdistkinb_cntr_B.ztest,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.rt, &ROPOD_4Wheel_Tdistkinb_cntr_B.sqds,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q] =
          ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
        ROPOD_4Wheel_Tdistkinb_cntr_B.rt = -ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q];
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.sqds;
        ROPOD_4Wheel_Tdistkinb_cntr_B.q++;
      }
      break;

     case 3:
      ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[0] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_B.s[m + 1]);
      ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[1] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_B.s[m]);
      ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[2] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_B.e[m]);
      ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[3] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q]);
      ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[4] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q]);
      qjj = 1;
      ROPOD_4Wheel_Tdistkinb_cntr_B.ztest =
        ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[0];
      if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[0])) {
        kase = 2;
        exitg2 = false;
        while ((!exitg2) && (kase < 6)) {
          qjj = kase;
          if (!rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[kase - 1])) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.ztest =
              ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[kase - 1];
            exitg2 = true;
          } else {
            kase++;
          }
        }
      }

      if (qjj < 5) {
        while (qjj + 1 < 6) {
          if (ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[qjj] >
              ROPOD_4Wheel_Tdistkinb_cntr_B.ztest) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.ztest =
              ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1_p[qjj];
          }

          qjj++;
        }
      }

      ROPOD_4Wheel_Tdistkinb_cntr_B.rt = ROPOD_4Wheel_Tdistkinb_cntr_B.s[m + 1] /
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 = ROPOD_4Wheel_Tdistkinb_cntr_B.s[m] /
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_B.emm1 = ROPOD_4Wheel_Tdistkinb_cntr_B.e[m] /
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_B.sqds =
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q] /
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 = ((ROPOD_4Wheel_Tdistkinb_cntr_B.smm1
        + ROPOD_4Wheel_Tdistkinb_cntr_B.rt) *
        (ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 - ROPOD_4Wheel_Tdistkinb_cntr_B.rt)
        + ROPOD_4Wheel_Tdistkinb_cntr_B.emm1 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.emm1) / 2.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.emm1 *= ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
      ROPOD_4Wheel_Tdistkinb_cntr_B.emm1 *= ROPOD_4Wheel_Tdistkinb_cntr_B.emm1;
      if ((ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 != 0.0) ||
          (ROPOD_4Wheel_Tdistkinb_cntr_B.emm1 != 0.0)) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.shift = sqrt
          (ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 *
           ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 +
           ROPOD_4Wheel_Tdistkinb_cntr_B.emm1);
        if (ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 < 0.0) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.shift =
            -ROPOD_4Wheel_Tdistkinb_cntr_B.shift;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_B.shift = ROPOD_4Wheel_Tdistkinb_cntr_B.emm1
          / (ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 +
             ROPOD_4Wheel_Tdistkinb_cntr_B.shift);
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_B.shift = 0.0;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_B.rt = (ROPOD_4Wheel_Tdistkinb_cntr_B.sqds +
        ROPOD_4Wheel_Tdistkinb_cntr_B.rt) * (ROPOD_4Wheel_Tdistkinb_cntr_B.sqds
        - ROPOD_4Wheel_Tdistkinb_cntr_B.rt) +
        ROPOD_4Wheel_Tdistkinb_cntr_B.shift;
      ROPOD_4Wheel_Tdistkinb_cntr_B.ztest =
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[ROPOD_4Wheel_Tdistkinb_cntr_B.q] /
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest * ROPOD_4Wheel_Tdistkinb_cntr_B.sqds;
      for (qjj = ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1; qjj <= m + 1; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cn_xrotg(&ROPOD_4Wheel_Tdistkinb_cntr_B.rt,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.ztest,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.sqds,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.smm1);
        if (qjj > ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj - 2] =
            ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_B.rt = ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj -
          1] * ROPOD_4Wheel_Tdistkinb_cntr_B.sqds +
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_B.smm1;
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj - 1] =
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_B.sqds -
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_B.smm1;
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.smm1
          * ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.sqds;
        ROPOD_4Wheel_Tdistkinb_cn_xrotg(&ROPOD_4Wheel_Tdistkinb_cntr_B.rt,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.ztest,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.sqds,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj - 1] =
          ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
        ROPOD_4Wheel_Tdistkinb_cntr_B.rt = ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj -
          1] * ROPOD_4Wheel_Tdistkinb_cntr_B.sqds +
          ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj] =
          ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj - 1] *
          -ROPOD_4Wheel_Tdistkinb_cntr_B.smm1 +
          ROPOD_4Wheel_Tdistkinb_cntr_B.sqds *
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_B.ztest = ROPOD_4Wheel_Tdistkinb_cntr_B.smm1
          * ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_B.e[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_B.sqds;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_B.e[m] = ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
      ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      break;

     default:
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q] < 0.0)
      {
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q] =
          -ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q];
      }

      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1;
      while ((ROPOD_4Wheel_Tdistkinb_cntr_B.q + 1 < 4) &&
             (ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q] <
              ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.qq]))
      {
        ROPOD_4Wheel_Tdistkinb_cntr_B.rt =
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q];
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.q] =
          ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.qq];
        ROPOD_4Wheel_Tdistkinb_cntr_B.s[ROPOD_4Wheel_Tdistkinb_cntr_B.qq] =
          ROPOD_4Wheel_Tdistkinb_cntr_B.rt;
        ROPOD_4Wheel_Tdistkinb_cntr_B.q = ROPOD_4Wheel_Tdistkinb_cntr_B.qq;
        ROPOD_4Wheel_Tdistkinb_cntr_B.qq++;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_B.qq = 0;
      m--;
      break;
    }
  }

  U[0] = ROPOD_4Wheel_Tdistkinb_cntr_B.s[0];
  U[1] = ROPOD_4Wheel_Tdistkinb_cntr_B.s[1];
  U[2] = ROPOD_4Wheel_Tdistkinb_cntr_B.s[2];
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdis_Unconstrained(const real_T Hinv[81], const real_T
  f[9], real_T x[9])
{
  int16_T i;
  int32_T i_0;
  real_T tmp;
  int32_T i_1;
  for (i = 0; i < 9; i++) {
    i_0 = i + 1;
    tmp = 0.0;
    for (i_1 = 0; i_1 < 9; i_1++) {
      tmp += -Hinv[(9 * i_1 + i_0) - 1] * f[i_1];
    }

    x[i] = tmp;
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistkinb_cnt_norm(const real_T x[9])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 9; k++) {
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr_abs(const real_T x[9], real_T y[9])
{
  int32_T k;
  for (k = 0; k < 9; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_abs_d(const real_T x[21], real_T y[21])
{
  int32_T k;
  for (k = 0; k < 21; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistkinb_xnrm2_ng(int32_T n, const real_T x[81],
  int32_T ix0)
{
  real_T y;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x[ix0 - 1]);
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.scale_g = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x[k - 1]);
        if (absxk > ROPOD_4Wheel_Tdistkinb_cntr_B.scale_g) {
          t = ROPOD_4Wheel_Tdistkinb_cntr_B.scale_g / absxk;
          y = y * t * t + 1.0;
          ROPOD_4Wheel_Tdistkinb_cntr_B.scale_g = absxk;
        } else {
          t = absxk / ROPOD_4Wheel_Tdistkinb_cntr_B.scale_g;
          y += t * t;
        }
      }

      y = ROPOD_4Wheel_Tdistkinb_cntr_B.scale_g * sqrt(y);
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_xgemv(int32_T m, int32_T n, const real_T
  A[81], int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9])
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
    b = (n - 1) * 9 + ia0;
    for (iac = ia0; iac <= b; iac += 9) {
      ix = ix0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.c = 0.0;
      d = (iac + m) - 1;
      for (ia = iac; ia <= d; ia++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.c += A[ia - 1] * x[ix - 1];
        ix++;
      }

      y[iy] += ROPOD_4Wheel_Tdistkinb_cntr_B.c;
      iy++;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cnt_xger(int32_T m, int32_T n, real_T alpha1,
  int32_T ix0, const real_T y[9], real_T A[81], int32_T ia0)
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
        ROPOD_4Wheel_Tdistkinb_cntr_B.temp = y[jy] * alpha1;
        ix = ix0;
        b = m + jA;
        for (ijA = jA; ijA + 1 <= b; ijA++) {
          A[ijA] += A[ix - 1] * ROPOD_4Wheel_Tdistkinb_cntr_B.temp;
          ix++;
        }
      }

      jy++;
      jA += 9;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_c_xgeqrf(real_T A[81], real_T tau[9])
{
  int32_T exitg1;
  boolean_T exitg2;
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.work_b[0], 0, 9U * sizeof(real_T));
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.i_d = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.i_d <
       9; ROPOD_4Wheel_Tdistkinb_cntr_B.i_d++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.i_i = ROPOD_4Wheel_Tdistkinb_cntr_B.i_d * 9 +
      ROPOD_4Wheel_Tdistkinb_cntr_B.i_d;
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.i_d + 1 < 9) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp = A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i];
      ROPOD_4Wheel_Tdistkinb_cntr_B.b = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm = ROPOD_4Wheel_Tdistkinb_xnrm2_ng(8 -
        ROPOD_4Wheel_Tdistkinb_cntr_B.i_d, A, ROPOD_4Wheel_Tdistkinb_cntr_B.i_i
        + 2);
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm = rt_hypotd_snf
          (A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i],
           ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm);
        if (A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i] >= 0.0) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm =
            -ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm;
        }

        if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm) < 1.0020841800044864E-292)
        {
          ROPOD_4Wheel_Tdistkinb_cntr_B.knt = 0;
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d =
            (ROPOD_4Wheel_Tdistkinb_cntr_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_B.i_d) + 9;
          do {
            ROPOD_4Wheel_Tdistkinb_cntr_B.knt++;
            ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l =
              ROPOD_4Wheel_Tdistkinb_cntr_B.i_i + 1;
            while (ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l + 1 <=
                   ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d) {
              A[ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l] *= 9.9792015476736E+291;
              ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l++;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm *= 9.9792015476736E+291;
            ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp *= 9.9792015476736E+291;
          } while (!(fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm) >=
                     1.0020841800044864E-292));

          ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm = rt_hypotd_snf
            (ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp,
             ROPOD_4Wheel_Tdistkinb_xnrm2_ng(8 -
              ROPOD_4Wheel_Tdistkinb_cntr_B.i_d, A,
              ROPOD_4Wheel_Tdistkinb_cntr_B.i_i + 2));
          if (ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp >= 0.0) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm =
              -ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.b = (ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm
            - ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp) /
            ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm;
          ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp = 1.0 /
            (ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp -
             ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm);
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d =
            (ROPOD_4Wheel_Tdistkinb_cntr_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_B.i_d) + 9;
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l =
            ROPOD_4Wheel_Tdistkinb_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l + 1 <=
                 ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d) {
            A[ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l] *=
              ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp;
            ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d = 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d <=
                 ROPOD_4Wheel_Tdistkinb_cntr_B.knt) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm *= 1.0020841800044864E-292;
            ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp =
            ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm;
        } else {
          ROPOD_4Wheel_Tdistkinb_cntr_B.b = (ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm
            - A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i]) /
            ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm;
          ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp = 1.0 /
            (A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i] -
             ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm);
          ROPOD_4Wheel_Tdistkinb_cntr_B.knt = (ROPOD_4Wheel_Tdistkinb_cntr_B.i_i
            - ROPOD_4Wheel_Tdistkinb_cntr_B.i_d) + 9;
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d =
            ROPOD_4Wheel_Tdistkinb_cntr_B.i_i + 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d + 1 <=
                 ROPOD_4Wheel_Tdistkinb_cntr_B.knt) {
            A[ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d] *=
              ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp;
            ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp =
            ROPOD_4Wheel_Tdistkinb_cntr_B.xnorm;
        }
      }

      tau[ROPOD_4Wheel_Tdistkinb_cntr_B.i_d] = ROPOD_4Wheel_Tdistkinb_cntr_B.b;
      A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i] =
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp;
      ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp = A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i];
      A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i] = 1.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.knt = ((ROPOD_4Wheel_Tdistkinb_cntr_B.i_d +
        1) * 9 + ROPOD_4Wheel_Tdistkinb_cntr_B.i_d) + 1;
      if (tau[ROPOD_4Wheel_Tdistkinb_cntr_B.i_d] != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d = 9 -
          ROPOD_4Wheel_Tdistkinb_cntr_B.i_d;
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l =
          (ROPOD_4Wheel_Tdistkinb_cntr_B.i_i - ROPOD_4Wheel_Tdistkinb_cntr_B.i_d)
          + 8;
        while ((ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d > 0) &&
               (A[ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l] == 0.0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d--;
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l--;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l = 8 -
          ROPOD_4Wheel_Tdistkinb_cntr_B.i_d;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l > 0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.coltop_o =
            (ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l - 1) * 9 +
            ROPOD_4Wheel_Tdistkinb_cntr_B.knt;
          ROPOD_4Wheel_Tdistkinb_cntr_B.ia_b =
            ROPOD_4Wheel_Tdistkinb_cntr_B.coltop_o;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_Tdistkinb_cntr_B.ia_b <=
                (ROPOD_4Wheel_Tdistkinb_cntr_B.coltop_o +
                 ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d) - 1) {
              if (A[ROPOD_4Wheel_Tdistkinb_cntr_B.ia_b - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_B.ia_b++;
              }
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d = 0;
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l = 0;
      }

      if (ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d > 0) {
        ROPOD_4Wheel_Tdistkinb_cn_xgemv(ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d,
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l, A,
          ROPOD_4Wheel_Tdistkinb_cntr_B.knt, A,
          ROPOD_4Wheel_Tdistkinb_cntr_B.i_i + 1,
          ROPOD_4Wheel_Tdistkinb_cntr_B.work_b);
        ROPOD_4Wheel_Tdistkinb_cnt_xger(ROPOD_4Wheel_Tdistkinb_cntr_B.lastv_d,
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastc_l,
          -tau[ROPOD_4Wheel_Tdistkinb_cntr_B.i_d],
          ROPOD_4Wheel_Tdistkinb_cntr_B.i_i + 1,
          ROPOD_4Wheel_Tdistkinb_cntr_B.work_b, A,
          ROPOD_4Wheel_Tdistkinb_cntr_B.knt);
      }

      A[ROPOD_4Wheel_Tdistkinb_cntr_B.i_i] =
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_atmp;
    } else {
      tau[8] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr_qr(const real_T A[81], real_T Q[81],
  real_T R[81])
{
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[0], &A[0], 81U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_c_xgeqrf(ROPOD_4Wheel_Tdistkinb_cntr_B.b_A,
    ROPOD_4Wheel_Tdistkinb_cntr_B.tau);
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.itau = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_B.itau < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_B.itau++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.d_i = 0;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.d_i + 1 <=
           ROPOD_4Wheel_Tdistkinb_cntr_B.itau + 1) {
      R[ROPOD_4Wheel_Tdistkinb_cntr_B.d_i + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.itau] = ROPOD_4Wheel_Tdistkinb_cntr_B.b_A
        [9 * ROPOD_4Wheel_Tdistkinb_cntr_B.itau +
        ROPOD_4Wheel_Tdistkinb_cntr_B.d_i];
      ROPOD_4Wheel_Tdistkinb_cntr_B.d_i++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.d_i = ROPOD_4Wheel_Tdistkinb_cntr_B.itau + 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.d_i + 1 < 10) {
      R[ROPOD_4Wheel_Tdistkinb_cntr_B.d_i + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.itau] = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.d_i++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.work[ROPOD_4Wheel_Tdistkinb_cntr_B.itau] = 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.itau = 8;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.d_i = 8; ROPOD_4Wheel_Tdistkinb_cntr_B.d_i >=
       0; ROPOD_4Wheel_Tdistkinb_cntr_B.d_i--) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.iaii = (ROPOD_4Wheel_Tdistkinb_cntr_B.d_i * 9
      + ROPOD_4Wheel_Tdistkinb_cntr_B.d_i) + 1;
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.d_i + 1 < 9) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_B.iaii - 1] =
        1.0;
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_B.itau]
          != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastv = 9 -
          ROPOD_4Wheel_Tdistkinb_cntr_B.d_i;
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastc =
          (ROPOD_4Wheel_Tdistkinb_cntr_B.iaii -
           ROPOD_4Wheel_Tdistkinb_cntr_B.d_i) + 7;
        while ((ROPOD_4Wheel_Tdistkinb_cntr_B.lastv > 0) &&
               (ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_B.lastc]
                == 0.0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastv--;
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastc--;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_B.lastc = 8 -
          ROPOD_4Wheel_Tdistkinb_cntr_B.d_i;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_B.lastc > 0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.coltop =
            (ROPOD_4Wheel_Tdistkinb_cntr_B.lastc - 1) * 9 +
            ROPOD_4Wheel_Tdistkinb_cntr_B.iaii;
          ROPOD_4Wheel_Tdistkinb_cntr_B.ia =
            ROPOD_4Wheel_Tdistkinb_cntr_B.coltop;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_Tdistkinb_cntr_B.ia + 9 <=
                (ROPOD_4Wheel_Tdistkinb_cntr_B.coltop +
                 ROPOD_4Wheel_Tdistkinb_cntr_B.lastv) + 8) {
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_B.ia
                  + 8] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_B.ia++;
              }
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_B.lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastv = 0;
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastc = 0;
      }

      if (ROPOD_4Wheel_Tdistkinb_cntr_B.lastv > 0) {
        ROPOD_4Wheel_Tdistkinb_cn_xgemv(ROPOD_4Wheel_Tdistkinb_cntr_B.lastv,
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastc, ROPOD_4Wheel_Tdistkinb_cntr_B.b_A,
          ROPOD_4Wheel_Tdistkinb_cntr_B.iaii + 9,
          ROPOD_4Wheel_Tdistkinb_cntr_B.b_A, ROPOD_4Wheel_Tdistkinb_cntr_B.iaii,
          ROPOD_4Wheel_Tdistkinb_cntr_B.work);
        ROPOD_4Wheel_Tdistkinb_cnt_xger(ROPOD_4Wheel_Tdistkinb_cntr_B.lastv,
          ROPOD_4Wheel_Tdistkinb_cntr_B.lastc,
          -ROPOD_4Wheel_Tdistkinb_cntr_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_B.itau],
          ROPOD_4Wheel_Tdistkinb_cntr_B.iaii, ROPOD_4Wheel_Tdistkinb_cntr_B.work,
          ROPOD_4Wheel_Tdistkinb_cntr_B.b_A, ROPOD_4Wheel_Tdistkinb_cntr_B.iaii
          + 9);
      }

      ROPOD_4Wheel_Tdistkinb_cntr_B.lastv = (ROPOD_4Wheel_Tdistkinb_cntr_B.iaii
        - ROPOD_4Wheel_Tdistkinb_cntr_B.d_i) + 8;
      ROPOD_4Wheel_Tdistkinb_cntr_B.lastc = ROPOD_4Wheel_Tdistkinb_cntr_B.iaii;
      while (ROPOD_4Wheel_Tdistkinb_cntr_B.lastc + 1 <=
             ROPOD_4Wheel_Tdistkinb_cntr_B.lastv) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_B.lastc] *=
          -ROPOD_4Wheel_Tdistkinb_cntr_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_B.itau];
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastc++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_B.iaii - 1] =
      1.0 - ROPOD_4Wheel_Tdistkinb_cntr_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_B.itau];
    ROPOD_4Wheel_Tdistkinb_cntr_B.lastv = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_B.lastv <=
           ROPOD_4Wheel_Tdistkinb_cntr_B.d_i) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[(ROPOD_4Wheel_Tdistkinb_cntr_B.iaii -
        ROPOD_4Wheel_Tdistkinb_cntr_B.lastv) - 1] = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_B.lastv++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.itau--;
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_B.itau = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_B.itau < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_B.itau++) {
    memcpy(&Q[ROPOD_4Wheel_Tdistkinb_cntr_B.itau * 9],
           &ROPOD_4Wheel_Tdistkinb_cntr_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_B.itau
           * 9], 9U * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistki_KWIKfactor(const real_T Ac[189], const
  int16_T iC[21], int16_T nA, const real_T Linv[81], real_T RLinv[81], real_T D
  [81], real_T H[81])
{
  real_T Status;
  int16_T i;
  int16_T j;
  int16_T c_k;
  int32_T exitg1;
  Status = 1.0;
  memset(&RLinv[0], 0, 81U * sizeof(real_T));
  for (i = 1; i <= nA; i++) {
    for (ROPOD_4Wheel_Tdistkinb_cntr_B.i3 = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.i3 <
         9; ROPOD_4Wheel_Tdistkinb_cntr_B.i3++) {
      RLinv[ROPOD_4Wheel_Tdistkinb_cntr_B.i3 + 9 * (i - 1)] = 0.0;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.i = i - 1;
    for (ROPOD_4Wheel_Tdistkinb_cntr_B.i3 = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.i3 <
         9; ROPOD_4Wheel_Tdistkinb_cntr_B.i3++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.j = ROPOD_4Wheel_Tdistkinb_cntr_B.i3 + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.i;
      RLinv[ROPOD_4Wheel_Tdistkinb_cntr_B.j] = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_B.i4 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_B.i4 < 9;
           ROPOD_4Wheel_Tdistkinb_cntr_B.i4++) {
        RLinv[ROPOD_4Wheel_Tdistkinb_cntr_B.j] = Ac[(iC[i - 1] + 21 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.i4) - 1] * Linv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.i4 + ROPOD_4Wheel_Tdistkinb_cntr_B.i3] +
          RLinv[9 * ROPOD_4Wheel_Tdistkinb_cntr_B.i +
          ROPOD_4Wheel_Tdistkinb_cntr_B.i3];
      }
    }
  }

  ROPOD_4Wheel_Tdistkinb_cntr_qr(RLinv, ROPOD_4Wheel_Tdistkinb_cntr_B.QQ,
    ROPOD_4Wheel_Tdistkinb_cntr_B.RR);
  i = 1;
  do {
    exitg1 = 0;
    if (i <= nA) {
      if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.RR[((i - 1) * 9 + i) - 1]) <
          1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (i = 0; i < 9; i++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.i = i + 1;
        for (j = 0; j < 9; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.j = j + 1;
          ROPOD_4Wheel_Tdistkinb_cntr_B.d0 = 0.0;
          for (ROPOD_4Wheel_Tdistkinb_cntr_B.i3 = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_B.i3 < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_B.i3++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.d0 += Linv
              [(ROPOD_4Wheel_Tdistkinb_cntr_B.i - 1) * 9 +
              ROPOD_4Wheel_Tdistkinb_cntr_B.i3] *
              ROPOD_4Wheel_Tdistkinb_cntr_B.QQ[(ROPOD_4Wheel_Tdistkinb_cntr_B.j
              - 1) * 9 + ROPOD_4Wheel_Tdistkinb_cntr_B.i3];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.TL[i + 9 * j] =
            ROPOD_4Wheel_Tdistkinb_cntr_B.d0;
        }
      }

      memset(&RLinv[0], 0, 81U * sizeof(real_T));
      i = nA;
      while (i > 0) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.i3 = i - 1;
        RLinv[(i + 9 * ROPOD_4Wheel_Tdistkinb_cntr_B.i3) - 1] = 1.0;
        for (j = i; j <= nA; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.j = j - 1;
          RLinv[(i + 9 * ROPOD_4Wheel_Tdistkinb_cntr_B.j) - 1] /=
            ROPOD_4Wheel_Tdistkinb_cntr_B.RR[((i - 1) * 9 + i) - 1];
        }

        if (i > 1) {
          for (j = 1; j <= ROPOD_4Wheel_Tdistkinb_cntr_B.i3; j++) {
            for (c_k = i; c_k <= nA; c_k++) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.j = c_k - 1;
              ROPOD_4Wheel_Tdistkinb_cntr_B.i4 = ROPOD_4Wheel_Tdistkinb_cntr_B.j
                * 9;
              RLinv[(j + 9 * ROPOD_4Wheel_Tdistkinb_cntr_B.j) - 1] = RLinv
                [(ROPOD_4Wheel_Tdistkinb_cntr_B.i4 + j) - 1] -
                ROPOD_4Wheel_Tdistkinb_cntr_B.RR
                [(ROPOD_4Wheel_Tdistkinb_cntr_B.i3 * 9 + j) - 1] * RLinv
                [(ROPOD_4Wheel_Tdistkinb_cntr_B.i4 + i) - 1];
            }
          }
        }

        i = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_B.i3;
      }

      for (i = 0; i < 9; i++) {
        for (j = (int16_T)(i + 1); j < 10; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.i3 = j - 1;
          ROPOD_4Wheel_Tdistkinb_cntr_B.j = i + 9 *
            ROPOD_4Wheel_Tdistkinb_cntr_B.i3;
          H[ROPOD_4Wheel_Tdistkinb_cntr_B.j] = 0.0;
          for (c_k = (int16_T)(nA + 1); c_k < 10; c_k++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.i4 = (c_k - 1) * 9;
            H[ROPOD_4Wheel_Tdistkinb_cntr_B.j] = H[(j - 1) * 9 + i] -
              ROPOD_4Wheel_Tdistkinb_cntr_B.TL[(ROPOD_4Wheel_Tdistkinb_cntr_B.i4
              + j) - 1] *
              ROPOD_4Wheel_Tdistkinb_cntr_B.TL[ROPOD_4Wheel_Tdistkinb_cntr_B.i4
              + i];
          }

          H[(j + 9 * i) - 1] = H[ROPOD_4Wheel_Tdistkinb_cntr_B.i3 * 9 + i];
        }
      }

      for (i = 1; i <= nA; i++) {
        for (j = 0; j < 9; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.i3 = i - 1;
          ROPOD_4Wheel_Tdistkinb_cntr_B.j = j + 9 *
            ROPOD_4Wheel_Tdistkinb_cntr_B.i3;
          D[ROPOD_4Wheel_Tdistkinb_cntr_B.j] = 0.0;
          for (c_k = i; c_k <= nA; c_k++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.i4 = (c_k - 1) * 9;
            D[ROPOD_4Wheel_Tdistkinb_cntr_B.j] = RLinv
              [(ROPOD_4Wheel_Tdistkinb_cntr_B.i4 + i) - 1] *
              ROPOD_4Wheel_Tdistkinb_cntr_B.TL[ROPOD_4Wheel_Tdistkinb_cntr_B.i4
              + j] + D[ROPOD_4Wheel_Tdistkinb_cntr_B.i3 * 9 + j];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdi_DropConstraint(int16_T kDrop, int16_T iA[21],
  int16_T *nA, int16_T iC[21])
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

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_T_ResetToColdStart(int16_T iA[21], int16_T iC[21])
{
  int32_T i;
  for (i = 0; i < 21; i++) {
    iA[i] = 0;
    iC[i] = 0;
  }

  iA[18] = 1;
  iC[0] = 19;
  iA[19] = 1;
  iC[1] = 20;
  iA[20] = 1;
  iC[2] = 21;
}

// Function for MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistk_mpcqpsolver(const real_T Linv[81], const real_T
  f[9], const real_T b[18], const real_T Aeq[27], const real_T beq[3], real_T x
  [9])
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
  cTolComputed = true;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k_l = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k_l <
       27; ROPOD_4Wheel_Tdistkinb_cntr_B.k_l++) {
    cTolComputed = (cTolComputed && ((!rtIsInf
      (Aeq[ROPOD_4Wheel_Tdistkinb_cntr_B.k_l])) && (!rtIsNaN
      (Aeq[ROPOD_4Wheel_Tdistkinb_cntr_B.k_l]))));
  }

  ROPOD_4Wheel_Tdistkinb_cntr_svd(Aeq, ROPOD_4Wheel_Tdistkinb_cntr_B.dv2);
  if (cTolComputed) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.absxk = ROPOD_4Wheel_Tdistkinb_cntr_B.dv2[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.absxk = (rtNaN);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.absxk = fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.absxk);
  if ((!rtIsInf(ROPOD_4Wheel_Tdistkinb_cntr_B.absxk)) && (!rtIsNaN
       (ROPOD_4Wheel_Tdistkinb_cntr_B.absxk)) &&
      (!(ROPOD_4Wheel_Tdistkinb_cntr_B.absxk <= 2.2250738585072014E-308))) {
    frexp(ROPOD_4Wheel_Tdistkinb_cntr_B.absxk,
          &ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart);
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
    for (ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.k_l = ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart
        + 9 * ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp;
      ROPOD_4Wheel_Tdistkinb_cntr_B.Hinv[ROPOD_4Wheel_Tdistkinb_cntr_B.k_l] =
        0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp < 9;
           ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.Hinv[ROPOD_4Wheel_Tdistkinb_cntr_B.k_l] =
          Linv[9 * ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart +
          ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp] * Linv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp +
          ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp] +
          ROPOD_4Wheel_Tdistkinb_cntr_B.Hinv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp +
          ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
      }
    }

    for (ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp < 18;
         ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp +
        21 * ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] = e[18 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart +
        ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[18 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[19 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart + 1];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[20 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart + 2];
  }

  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_B.b_b[0], &b[0], 18U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_B.b_b[18] = beq[0];
  ROPOD_4Wheel_Tdistkinb_cntr_B.b_b[19] = beq[1];
  ROPOD_4Wheel_Tdistkinb_cntr_B.b_b[20] = beq[2];
  ROPOD_4Wheel_Tdistkinb_cntr_B.k_l = 1;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 21;
       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.iA[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] =
      b_iA[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
    ROPOD_4Wheel_Tdistkinb_cntr_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] =
      0.0;
  }

  memset(&x[0], 0, 9U * sizeof(real_T));
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.r[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_B.absxk = 0.0;
  cTolComputed = false;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 21;
       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] =
      1.0;
    ROPOD_4Wheel_Tdistkinb_cntr_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] = 0;
  }

  nA = 0;
  for (kNext = 0; kNext < 21; kNext++) {
    if (b_iA[kNext] == 1) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = nA + 1;
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 32767;
      }

      nA = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
      ROPOD_4Wheel_Tdistkinb_cntr_B.iC[(int16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart - 1] = (int16_T)(kNext + 1);
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[0], 0, 18U * sizeof(real_T));
    for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] =
        f[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
      ROPOD_4Wheel_Tdistkinb_cntr_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart +
        9] = 0.0;
    }

    DualFeasible = false;
    ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 3 * nA;
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 32767;
    }

    if ((int16_T)ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 50) {
      kNext = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
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
      if ((!DualFeasible) && (nA > 0) && (ROPOD_4Wheel_Tdistkinb_cntr_B.k_l <=
           200)) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0 = ROPOD_4Wheel_Tdistki_KWIKfactor
          (ROPOD_4Wheel_Tdistkinb_cntr_B.Ac, ROPOD_4Wheel_Tdistkinb_cntr_B.iC,
           nA, Linv, ROPOD_4Wheel_Tdistkinb_cntr_B.RLinv,
           ROPOD_4Wheel_Tdistkinb_cntr_B.D, ROPOD_4Wheel_Tdistkinb_cntr_B.H);
        if (ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0 < 0.0) {
          if (ColdReset) {
            exitg3 = 2;
          } else {
            ROPOD_4Wheel_T_ResetToColdStart(ROPOD_4Wheel_Tdistkinb_cntr_B.iA,
              ROPOD_4Wheel_Tdistkinb_cntr_B.iC);
            nA = 3;
            ColdReset = true;
          }
        } else {
          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 9 + kNext;
            if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = kNext - 1;
            ROPOD_4Wheel_Tdistkinb_cntr_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart
              - 1] =
              ROPOD_4Wheel_Tdistkinb_cntr_B.b_b[ROPOD_4Wheel_Tdistkinb_cntr_B.iC[
              ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp] - 1];
            for (kDrop = kNext; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = (kDrop + 9 *
                ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp) - 1;
              ROPOD_4Wheel_Tdistkinb_cntr_B.U[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                = 0.0;
              for (iSave = 1; iSave <= nA; iSave++) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp = (iSave - 1) * 9;
                ROPOD_4Wheel_Tdistkinb_cntr_B.U[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                  = ROPOD_4Wheel_Tdistkinb_cntr_B.RLinv
                  [(ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp + kDrop) - 1] *
                  ROPOD_4Wheel_Tdistkinb_cntr_B.RLinv
                  [(ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp + kNext) - 1] +
                  ROPOD_4Wheel_Tdistkinb_cntr_B.U[((kNext - 1) * 9 + kDrop) - 1];
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.U[(kNext + 9 * (kDrop - 1)) - 1] =
                ROPOD_4Wheel_Tdistkinb_cntr_B.U
                [(ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp * 9 + kDrop) - 1];
            }
          }

          for (kNext = 0; kNext < 9; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = kNext + 1;
            ROPOD_4Wheel_Tdistkinb_cntr_B.cVal = 0.0;
            for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                 ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                 ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.cVal +=
                ROPOD_4Wheel_Tdistkinb_cntr_B.H[(9 *
                ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart +
                ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp) - 1] *
                ROPOD_4Wheel_Tdistkinb_cntr_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
            }

            ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[kNext] =
              ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 9 + kDrop;
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[kNext] +=
                ROPOD_4Wheel_Tdistkinb_cntr_B.D[(kDrop - 1) * 9 + kNext] *
                ROPOD_4Wheel_Tdistkinb_cntr_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart
                - 1];
            }
          }

          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.cVal = 0.0;
            for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                 ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                 ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.cVal +=
                ROPOD_4Wheel_Tdistkinb_cntr_B.D[(kNext - 1) * 9 +
                ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] *
                ROPOD_4Wheel_Tdistkinb_cntr_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
            }

            ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 9 + kNext;
            ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp
              - 1] = ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp =
                ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp =
                ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.i2 = 9 + kDrop;
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.i2 > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.i2 = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp
                - 1] = ROPOD_4Wheel_Tdistkinb_cntr_B.U[((kDrop - 1) * 9 + kNext)
                - 1] *
                ROPOD_4Wheel_Tdistkinb_cntr_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_B.i2
                - 1] +
                ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_B.U_tmp
                - 1];
            }
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0 = -1.0E-12;
          kDrop = 0;
          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 9 + kNext;
            ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_B.iC[kNext
              - 1] - 1] =
              ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp
              - 1];
            ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 32767;
            }

            if ((ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp
                 - 1] < ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0) && (kNext <= nA -
                 3)) {
              kDrop = kNext;
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0 =
                ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart
                - 1];
            }
          }

          if (kDrop <= 0) {
            DualFeasible = true;
            memcpy(&x[0], &ROPOD_4Wheel_Tdistkinb_cntr_B.Opt[0], 9U * sizeof
                   (real_T));
          } else {
            ROPOD_4Wheel_Tdistkinb_cntr_B.k_l++;
            if (ROPOD_4Wheel_Tdistkinb_cntr_B.k_l > q) {
              ROPOD_4Wheel_T_ResetToColdStart(ROPOD_4Wheel_Tdistkinb_cntr_B.iA,
                ROPOD_4Wheel_Tdistkinb_cntr_B.iC);
              nA = 3;
              ColdReset = true;
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_B.iC[
                kDrop - 1] - 1] = 0.0;
              ROPOD_4Wheel_Tdi_DropConstraint(kDrop,
                ROPOD_4Wheel_Tdistkinb_cntr_B.iA, &nA,
                ROPOD_4Wheel_Tdistkinb_cntr_B.iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.lam[0], 0, 21U * sizeof(real_T));
          ROPOD_4Wheel_Tdis_Unconstrained(ROPOD_4Wheel_Tdistkinb_cntr_B.Hinv, f,
            x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Tdis_Unconstrained(ROPOD_4Wheel_Tdistkinb_cntr_B.Hinv, f, x);
    guard1 = true;
  }

  if (guard1) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0 = ROPOD_4Wheel_Tdistkinb_cnt_norm(x);
    exitg2 = false;
    while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_B.k_l <= 200)) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cMin = -1.0E-6;
      kNext = 0;
      for (kDrop = 0; kDrop < 18; kDrop++) {
        if (!cTolComputed) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = kDrop + 1;
          for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.Ac_c[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
              = ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[(21 *
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart +
              ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_abs(ROPOD_4Wheel_Tdistkinb_cntr_B.Ac_c,
            ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow);
          ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 1;
          ROPOD_4Wheel_Tdistkinb_cntr_B.cVal =
            ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[0];
          if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[0])) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 2;
            exitg4 = false;
            while ((!exitg4) && (ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp < 10))
            {
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart =
                ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp;
              if (!rtIsNaN
                  (ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp
                   - 1])) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.cVal =
                  ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp
                  - 1];
                exitg4 = true;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp++;
              }
            }
          }

          if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9) {
            while (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart + 1 < 10) {
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                  > ROPOD_4Wheel_Tdistkinb_cntr_B.cVal) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.cVal =
                  ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++;
            }
          }

          if (!((ROPOD_4Wheel_Tdistkinb_cntr_B.cTol[kDrop] >
                 ROPOD_4Wheel_Tdistkinb_cntr_B.cVal) || rtIsNaN
                (ROPOD_4Wheel_Tdistkinb_cntr_B.cVal))) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.cTol[kDrop] =
              ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
          }
        }

        if (ROPOD_4Wheel_Tdistkinb_cntr_B.iA[kDrop] == 0) {
          ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = kDrop + 1;
          ROPOD_4Wheel_Tdistkinb_cntr_B.cVal = 0.0;
          for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.cVal +=
              ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[(21 *
              ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart +
              ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_B.cVal =
            (ROPOD_4Wheel_Tdistkinb_cntr_B.cVal -
             ROPOD_4Wheel_Tdistkinb_cntr_B.b_b[kDrop]) /
            ROPOD_4Wheel_Tdistkinb_cntr_B.cTol[kDrop];
          if (ROPOD_4Wheel_Tdistkinb_cntr_B.cVal <
              ROPOD_4Wheel_Tdistkinb_cntr_B.cMin) {
            ROPOD_4Wheel_Tdistkinb_cntr_B.cMin =
              ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
            kNext = (int16_T)(kDrop + 1);
          }
        }
      }

      cTolComputed = true;
      if (kNext <= 0) {
        exitg2 = true;
      } else {
        do {
          exitg1 = 0;
          if ((kNext > 0) && (ROPOD_4Wheel_Tdistkinb_cntr_B.k_l <= 200)) {
            guard2 = false;
            if (nA == 0) {
              for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                   ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                  = 0.0;
                for (ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                    += ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[(21 *
                    ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp + kNext) - 1] *
                    ROPOD_4Wheel_Tdistkinb_cntr_B.Hinv[9 *
                    ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp +
                    ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
                }
              }

              guard2 = true;
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_B.cMin =
                ROPOD_4Wheel_Tdistki_KWIKfactor(ROPOD_4Wheel_Tdistkinb_cntr_B.Ac,
                ROPOD_4Wheel_Tdistkinb_cntr_B.iC, nA, Linv,
                ROPOD_4Wheel_Tdistkinb_cntr_B.RLinv,
                ROPOD_4Wheel_Tdistkinb_cntr_B.D, ROPOD_4Wheel_Tdistkinb_cntr_B.H);
              if (ROPOD_4Wheel_Tdistkinb_cntr_B.cMin <= 0.0) {
                exitg1 = 1;
              } else {
                for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                  for (ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp++) {
                    ROPOD_4Wheel_Tdistkinb_cntr_B.U[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp
                      + 9 * ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] =
                      -ROPOD_4Wheel_Tdistkinb_cntr_B.H[9 *
                      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart +
                      ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp];
                  }
                }

                for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                    = 0.0;
                  for (ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp++) {
                    ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                      += ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[(21 *
                      ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp + kNext) - 1] *
                      ROPOD_4Wheel_Tdistkinb_cntr_B.U[9 *
                      ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp +
                      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
                  }
                }

                for (kDrop = 1; kDrop <= nA; kDrop++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.cVal = 0.0;
                  for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cVal +=
                      ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[(21 *
                      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart + kNext) - 1] *
                      ROPOD_4Wheel_Tdistkinb_cntr_B.D[(kDrop - 1) * 9 +
                      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
                  }

                  ROPOD_4Wheel_Tdistkinb_cntr_B.r[kDrop - 1] =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
                }

                guard2 = true;
              }
            }

            if (guard2) {
              kDrop = 0;
              ROPOD_4Wheel_Tdistkinb_cntr_B.cMin = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 3) {
                iSave = 1;
                exitg4 = false;
                while ((!exitg4) && (iSave <= nA - 3)) {
                  if (ROPOD_4Wheel_Tdistkinb_cntr_B.r[iSave - 1] >= 1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    iSave++;
                  }
                }
              }

              if (!((nA == 3) || ColdReset)) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = nA - 3;
                if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < -32768) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = -32768;
                }

                for (iSave = 1; iSave <= (int16_T)
                     ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart; iSave++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = iSave - 1;
                  if (ROPOD_4Wheel_Tdistkinb_cntr_B.r[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp]
                      > 1.0E-12) {
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cVal =
                      ROPOD_4Wheel_Tdistkinb_cntr_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_B.iC
                      [ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp] - 1] /
                      ROPOD_4Wheel_Tdistkinb_cntr_B.r[iSave - 1];
                    if ((kDrop == 0) || (ROPOD_4Wheel_Tdistkinb_cntr_B.cVal <
                                         ROPOD_4Wheel_Tdistkinb_cntr_B.absxk)) {
                      ROPOD_4Wheel_Tdistkinb_cntr_B.absxk =
                        ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
                      kDrop = iSave;
                    }
                  }
                }

                if (kDrop > 0) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.cMin =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.absxk;
                  DualFeasible = false;
                }
              }

              ROPOD_4Wheel_Tdistkinb_cntr_B.cVal = 0.0;
              for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                   ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.cVal +=
                  ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[(21 *
                  ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart + kNext) - 1] *
                  ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
              }

              if (ROPOD_4Wheel_Tdistkinb_cntr_B.cVal <= 0.0) {
                ROPOD_4Wheel_Tdistkinb_cntr_B.cVal = 0.0;
                ColdReset = true;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_B.t = 0.0;
                for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.t +=
                    ROPOD_4Wheel_Tdistkinb_cntr_B.Ac[(21 *
                    ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart + kNext) - 1] *
                    x[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
                }

                ROPOD_4Wheel_Tdistkinb_cntr_B.cVal =
                  (ROPOD_4Wheel_Tdistkinb_cntr_B.b_b[kNext - 1] -
                   ROPOD_4Wheel_Tdistkinb_cntr_B.t) /
                  ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cMin;
                } else if (DualFeasible) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
                } else if ((ROPOD_4Wheel_Tdistkinb_cntr_B.cMin <
                            ROPOD_4Wheel_Tdistkinb_cntr_B.cVal) || rtIsNaN
                           (ROPOD_4Wheel_Tdistkinb_cntr_B.cVal)) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cMin;
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cVal;
                }

                for (iSave = 1; iSave <= nA; iSave++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = iSave - 1;
                  ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                    - 1;
                  ROPOD_4Wheel_Tdistkinb_cntr_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp]
                    -=
                    ROPOD_4Wheel_Tdistkinb_cntr_B.r[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                    * ROPOD_4Wheel_Tdistkinb_cntr_B.t;
                  if ((ROPOD_4Wheel_Tdistkinb_cntr_B.iC[iSave - 1] <= 18) &&
                      (ROPOD_4Wheel_Tdistkinb_cntr_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_B.iC
                       [iSave - 1] - 1] < 0.0)) {
                    ROPOD_4Wheel_Tdistkinb_cntr_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp]
                      = 0.0;
                  }
                }

                ROPOD_4Wheel_Tdistkinb_cntr_B.lam[kNext - 1] +=
                  ROPOD_4Wheel_Tdistkinb_cntr_B.t;
                if (ROPOD_4Wheel_Tdistkinb_cntr_B.t ==
                    ROPOD_4Wheel_Tdistkinb_cntr_B.cMin) {
                  ROPOD_4Wheel_Tdi_DropConstraint(kDrop,
                    ROPOD_4Wheel_Tdistkinb_cntr_B.iA, &nA,
                    ROPOD_4Wheel_Tdistkinb_cntr_B.iC);
                }

                if (!ColdReset) {
                  for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                    x[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart] +=
                      ROPOD_4Wheel_Tdistkinb_cntr_B.t *
                      ROPOD_4Wheel_Tdistkinb_cntr_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
                  }

                  if (ROPOD_4Wheel_Tdistkinb_cntr_B.t ==
                      ROPOD_4Wheel_Tdistkinb_cntr_B.cVal) {
                    if (nA == 9) {
                      exitg1 = 1;
                    } else {
                      ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = nA + 1;
                      if (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart > 32767) {
                        ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 32767;
                      }

                      nA = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
                      ROPOD_4Wheel_Tdistkinb_cntr_B.iC[(int16_T)
                        ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart - 1] = kNext;
                      kDrop = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
                      exitg4 = false;
                      while ((!exitg4) && (kDrop > 1)) {
                        ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = kDrop - 1;
                        ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp = kDrop - 2;
                        if (ROPOD_4Wheel_Tdistkinb_cntr_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                            >
                            ROPOD_4Wheel_Tdistkinb_cntr_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp])
                        {
                          exitg4 = true;
                        } else {
                          iSave = ROPOD_4Wheel_Tdistkinb_cntr_B.iC[kDrop - 1];
                          ROPOD_4Wheel_Tdistkinb_cntr_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                            = ROPOD_4Wheel_Tdistkinb_cntr_B.iC[kDrop - 2];
                          ROPOD_4Wheel_Tdistkinb_cntr_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_B.kDrop_tmp]
                            = iSave;
                          kDrop = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart;
                        }
                      }

                      ROPOD_4Wheel_Tdistkinb_cntr_B.iA[kNext - 1] = 1;
                      kNext = 0;
                      ROPOD_4Wheel_Tdistkinb_cntr_B.k_l++;
                    }
                  } else {
                    ROPOD_4Wheel_Tdistkinb_cntr_B.k_l++;
                  }
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.k_l++;
                }
              }
            }
          } else {
            ROPOD_4Wheel_Tdistkinb_cntr_B.cMin = ROPOD_4Wheel_Tdistkinb_cnt_norm
              (x);
            if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_B.cMin -
                     ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0) > 0.001) {
              ROPOD_4Wheel_Tdistkinb_cntr_B.Xnorm0 =
                ROPOD_4Wheel_Tdistkinb_cntr_B.cMin;
              ROPOD_4Wheel_Tdistkinb_cn_abs_d(ROPOD_4Wheel_Tdistkinb_cntr_B.b_b,
                ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1);
              for (ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart < 21;
                   ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart++) {
                if (ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                    > 1.0) {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                    =
                    ROPOD_4Wheel_Tdistkinb_cntr_B.varargin_1[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart];
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_B.ixstart]
                    = 1.0;
                }
              }

              cTolComputed = false;
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

// Model step function
void ROPOD_4Wheel_Tdistkinb_cntr_step(void)
{
  static const int8_T b[120] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
  };

  boolean_T p;
  uint8_T rtb_Gain6;
  boolean_T rtb_Compare;
  boolean_T rtb_LowerRelop1_lp;
  boolean_T rtb_LowerRelop1_i;
  boolean_T rtb_LowerRelop1_jr;
  boolean_T rtb_LowerRelop1;

  // S-Function (ECAT_Interface): '<S5>/ECAT_Interface'

  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  // RelationalOperator: '<S1>/Compare' incorporates:
  //   Constant: '<S1>/Constant'
  //   DigitalClock: '<Root>/Digital Clock'

  rtb_Compare = (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.t[0] <
                 ROPOD_4Wheel_Tdistkinb_cntr_P.Tinit);
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter14'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ft.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ft.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2935.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz);

    // MATLAB Function: '<S91>/MATLAB Function' incorporates:
    //   Constant: '<S91>/Constant'
    //   Gain: '<S80>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter14'
    //   MATLABSystem: '<S6>/Get Parameter14'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_i,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_b, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_a);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S28>/S-Function'

  // Level2 S-Function Block: '<S28>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S29>/S-Function'

  // Level2 S-Function Block: '<S29>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S30>/S-Function'

  // Level2 S-Function Block: '<S30>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S31>/S-Function'

  // Level2 S-Function Block: '<S31>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S20>/Switch2' incorporates:
  //   Constant: '<S20>/Constant2'
  //   Gain: '<S20>/sign convention'
  //   Gain: '<S20>/sign convention1'
  //   Gain: '<S20>/sign convention2'
  //   Gain: '<S20>/sign convention3'

  if (rtb_Compare) {
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[0],
           &ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value[0], sizeof(real_T) <<
           3U);
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction[5];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.signconvention_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction[17];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_o[5];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[3] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.signconvention1_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_o[17];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[4] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_b[5];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[5] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.signconvention2_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_b[17];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[6] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_m[5];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[7] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.signconvention3_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_m[17];
  }

  // End of Switch: '<S20>/Switch2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S7>/Get Parameter'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_be.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_be.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2173.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter11'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2176.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter11_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter12'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fa.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fa.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2177.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter12_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter13'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_p.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_p.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2178.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter13_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter14'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l1.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l1.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2179.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter14_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter15'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pe.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pe.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2180.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter15'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter15_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter16'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2181.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter16'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter16_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter17'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bc.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bc.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2182.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter17'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter17_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter1'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hv.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hv.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2174.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter2'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_j.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_j.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2183.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter3'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2184.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter4'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2185.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter5'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2186.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter6'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ep.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ep.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2187.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter7'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_lm.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_lm.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2188.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter8'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ew.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ew.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2189.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter9'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2190.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter9'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter10'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b1.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b1.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2175.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_k.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_k.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2214.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_m.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_m.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2216.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw2 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter4'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i4.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i4.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2217.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw3 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter5'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2218.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw4 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;
  }

  // Switch: '<S20>/Switch' incorporates:
  //   Constant: '<S20>/Constant'
  //   Sum: '<S20>/Add'

  if (rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_l[0];
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_l[1];
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_l[2];
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_l[3];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw1;
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_o[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw2;
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_b[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw3;
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_m[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_B.pivot_offs_sw4;
  }

  // End of Switch: '<S20>/Switch'

  // MATLAB Function: '<S42>/Gl_matrix' incorporates:
  //   MATLAB Function: '<S2>/Jqwl_matrix'
  //   MATLAB Function: '<S44>/Gl_matrices'
  //   SignalConversion: '<S45>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t5 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t7 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t9 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t17 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t17_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_b = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t30 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_oa =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp * ROPOD_4Wheel_Tdistkinb_cntr_B.t9 *
    0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t25_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_c =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp * ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i
    * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pz =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t34_tmp = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_c =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_h =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_l =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_c * 0.5;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S9>/Get Parameter'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2237.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_xy =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // SampleTimeMath: '<S33>/sample time'
    //
    //  About '<S33>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.sampletime_WtEt;

    // Product: '<S33>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S33>/sample time'
    //
    //  About '<S33>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_xy *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sampletime_WtEt;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S9>/Get Parameter1'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_f.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_f.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2238.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_xy =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // DigitalClock: '<S10>/Digital Clock'
    ROPOD_4Wheel_Tdistkinb_cntr_B.DigitalClock =
      ((ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.clockTick2) * 1.0);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S17>/SourceBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_B.SourceBlock_o1 =
      Sub_ROPOD_4Wheel_Tdistkinb_cntr_1899.getLatestMessage
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S17>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S18>/Enable'

    // Delay: '<S10>/Enabled Delay' incorporates:
    //   Inport: '<S18>/In1'
    //   MATLABSystem: '<S17>/SourceBlock'
    //   MATLABSystem: '<S17>/SourceBlock'

    if (ROPOD_4Wheel_Tdistkinb_cntr_B.SourceBlock_o1) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.In1 =
        ROPOD_4Wheel_Tdistkinb_cntr_B.b_varargout_2;
      ROPOD_4Wheel_Tdistkinb_cntr_B.EnabledDelay =
        ROPOD_4Wheel_Tdistkinb_cntr_DW.EnabledDelay_DSTATE;
    }

    // End of Delay: '<S10>/Enabled Delay'
    // End of Outputs for SubSystem: '<S17>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'

    // Gain: '<S10>/Gain6' incorporates:
    //   Constant: '<S32>/Constant'
    //   RelationalOperator: '<S32>/Compare'
    //   Sum: '<S10>/Subtract'

    rtb_Gain6 = (uint8_T)(ROPOD_4Wheel_Tdistkinb_cntr_B.DigitalClock -
                          ROPOD_4Wheel_Tdistkinb_cntr_B.EnabledDelay >=
                          ROPOD_4Wheel_Tdistkinb_cntr_P.CompareToConstant_const ?
                          (int32_T)ROPOD_4Wheel_Tdistkinb_cntr_P.Gain6_Gain_b :
                          0);

    // Switch: '<S10>/Switch' incorporates:
    //   Constant: '<S10>/Constant'

    if (rtb_Gain6 > ROPOD_4Wheel_Tdistkinb_cntr_P.Switch_Threshold) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_g;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j =
        ROPOD_4Wheel_Tdistkinb_cntr_B.In1.Linear.X;
    }

    // End of Switch: '<S10>/Switch'

    // RelationalOperator: '<S36>/LowerRelop1'
    rtb_LowerRelop1 = (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j >
                       ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_xy);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_xy;

    // Gain: '<S10>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain = ROPOD_4Wheel_Tdistkinb_cntr_P.Gain_Gain
      * ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_xy;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // UnitDelay: '<S33>/Delay Input2'
    //
    //  Block description for '<S33>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1 =
      ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE;

    // Switch: '<S36>/Switch2' incorporates:
    //   RelationalOperator: '<S36>/UpperRelop'
    //   Switch: '<S36>/Switch'

    if (rtb_LowerRelop1) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j =
        ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_xy;
    } else {
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j <
          ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1) {
        // Switch: '<S36>/Switch'
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j =
          ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1;
      }
    }

    // End of Switch: '<S36>/Switch2'

    // Sum: '<S33>/Difference Inputs1'
    //
    //  Block description for '<S33>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j - ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1;

    // RelationalOperator: '<S39>/LowerRelop1'
    rtb_LowerRelop1_jr = (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2 >
                          ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e);

    // Switch: '<S39>/Switch2'
    if (!rtb_LowerRelop1_jr) {
      // Product: '<S33>/delta fall limit'
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
        ROPOD_4Wheel_Tdistkinb_cntr_B.Gain *
        ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime;

      // Switch: '<S39>/Switch' incorporates:
      //   RelationalOperator: '<S39>/UpperRelop'

      if (!(ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2 <
            ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e)) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2;
      }

      // End of Switch: '<S39>/Switch'
    }

    // End of Switch: '<S39>/Switch2'

    // Sum: '<S33>/Difference Inputs2'
    //
    //  Block description for '<S33>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e +
      ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1;

    // SampleTimeMath: '<S34>/sample time'
    //
    //  About '<S34>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.sampletime_WtEt_j;

    // Product: '<S34>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S34>/sample time'
    //
    //  About '<S34>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_xy *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sampletime_WtEt_j;

    // Switch: '<S10>/Switch1' incorporates:
    //   Constant: '<S10>/Constant1'

    if (rtb_Gain6 > ROPOD_4Wheel_Tdistkinb_cntr_P.Switch1_Threshold) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f =
        ROPOD_4Wheel_Tdistkinb_cntr_B.In1.Linear.Y;
    }

    // End of Switch: '<S10>/Switch1'

    // RelationalOperator: '<S37>/LowerRelop1'
    rtb_LowerRelop1_i = (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f >
                         ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_xy);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain3'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain3_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_xy;

    // Gain: '<S10>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_xy;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // UnitDelay: '<S34>/Delay Input2'
    //
    //  Block description for '<S34>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k =
      ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE_f;

    // Switch: '<S37>/Switch2' incorporates:
    //   RelationalOperator: '<S37>/UpperRelop'
    //   Switch: '<S37>/Switch'

    if (rtb_LowerRelop1_i) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f =
        ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_xy;
    } else {
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f <
          ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3) {
        // Switch: '<S37>/Switch'
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f =
          ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3;
      }
    }

    // End of Switch: '<S37>/Switch2'

    // Sum: '<S34>/Difference Inputs1'
    //
    //  Block description for '<S34>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_o =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f -
      ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k;

    // RelationalOperator: '<S40>/LowerRelop1'
    rtb_LowerRelop1_jr = (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_o >
                          ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e);

    // Switch: '<S40>/Switch2'
    if (!rtb_LowerRelop1_jr) {
      // Product: '<S34>/delta fall limit'
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
        ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_d;

      // Switch: '<S40>/Switch' incorporates:
      //   RelationalOperator: '<S40>/UpperRelop'

      if (!(ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_o <
            ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e)) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_o;
      }

      // End of Switch: '<S40>/Switch'
    }

    // End of Switch: '<S40>/Switch2'

    // Sum: '<S34>/Difference Inputs2'
    //
    //  Block description for '<S34>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_l =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e +
      ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S9>/Get Parameter2'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_n.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_n.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2239.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_theta =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // SampleTimeMath: '<S35>/sample time'
    //
    //  About '<S35>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_i =
      ROPOD_4Wheel_Tdistkinb_cntr_P.sampletime_WtEt_b;

    // Product: '<S35>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S35>/sample time'
    //
    //  About '<S35>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_theta *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sampletime_WtEt_b;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S9>/Get Parameter3'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2240.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_theta =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Switch: '<S10>/Switch2' incorporates:
    //   Constant: '<S10>/Constant2'

    if (rtb_Gain6 > ROPOD_4Wheel_Tdistkinb_cntr_P.Switch2_Threshold) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_h;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j =
        ROPOD_4Wheel_Tdistkinb_cntr_B.In1.Angular.Z;
    }

    // End of Switch: '<S10>/Switch2'

    // RelationalOperator: '<S38>/LowerRelop1'
    rtb_LowerRelop1_lp = (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j >
                          ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_theta);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain5'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain5 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain5_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_theta;

    // Gain: '<S10>/Gain4'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain4 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain4_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_acc_theta;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // UnitDelay: '<S35>/Delay Input2'
    //
    //  Block description for '<S35>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_h =
      ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE_k;

    // Switch: '<S38>/Switch2' incorporates:
    //   RelationalOperator: '<S38>/UpperRelop'
    //   Switch: '<S38>/Switch'

    if (rtb_LowerRelop1_lp) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j =
        ROPOD_4Wheel_Tdistkinb_cntr_B.max_vel_theta;
    } else {
      if (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j <
          ROPOD_4Wheel_Tdistkinb_cntr_B.Gain5) {
        // Switch: '<S38>/Switch'
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j =
          ROPOD_4Wheel_Tdistkinb_cntr_B.Gain5;
      }
    }

    // End of Switch: '<S38>/Switch2'

    // Sum: '<S35>/Difference Inputs1'
    //
    //  Block description for '<S35>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_l =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j -
      ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_h;

    // RelationalOperator: '<S41>/LowerRelop1'
    rtb_LowerRelop1_lp = (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_l >
                          ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e);

    // Switch: '<S41>/Switch2'
    if (!rtb_LowerRelop1_lp) {
      // Product: '<S35>/delta fall limit'
      ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_i *=
        ROPOD_4Wheel_Tdistkinb_cntr_B.Gain4;

      // Switch: '<S41>/Switch' incorporates:
      //   RelationalOperator: '<S41>/UpperRelop'

      if (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_l <
          ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_i) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_i;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_l;
      }

      // End of Switch: '<S41>/Switch'
    }

    // End of Switch: '<S41>/Switch2'

    // Sum: '<S35>/Difference Inputs2'
    //
    //  Block description for '<S35>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_g =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e +
      ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_h;
  }

  // SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_l;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_g;

  // MATLAB Function: '<S42>/Gl_matrix' incorporates:
  //   SignalConversion: '<S45>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[0] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[3] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[4] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[5] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[6] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[7] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp_g) * ROPOD_4Wheel_Tdistkinb_cntr_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[8] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp_g) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[9] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t7 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_oa) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[10] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t7 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_oa) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[11] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i) * ROPOD_4Wheel_Tdistkinb_cntr_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[12] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i) * ROPOD_4Wheel_Tdistkinb_cntr_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[13] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_h) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[14] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t17 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_h) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[15] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[16] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[17] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[18] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[19] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[20] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[21] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 -
     ROPOD_4Wheel_Tdistkinb_cntr_B.t6) * ROPOD_4Wheel_Tdistkinb_cntr_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[23] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[24] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t9 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[25] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9) * ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[26] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp
    - ROPOD_4Wheel_Tdistkinb_cntr_B.t6) * ROPOD_4Wheel_Tdistkinb_cntr_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[27] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp) * ROPOD_4Wheel_Tdistkinb_cntr_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[28] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp
    - ROPOD_4Wheel_Tdistkinb_cntr_B.t6) * ROPOD_4Wheel_Tdistkinb_cntr_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[29] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp) * ROPOD_4Wheel_Tdistkinb_cntr_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[30] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[31] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[32] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[33] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t30 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[34] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[35] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[36] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_c - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[37] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_B.t17_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_b) - ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    -ROPOD_4Wheel_Tdistkinb_cntr_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[38] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_B.t17_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_b) + ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[39] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_B.t25_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_c) -
     ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    -ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[40] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_B.t25_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_c) +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t6) * ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[41] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pz +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t34_tmp) - ROPOD_4Wheel_Tdistkinb_cntr_B.t6)
    * -ROPOD_4Wheel_Tdistkinb_cntr_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[42] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pz +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t34_tmp) + ROPOD_4Wheel_Tdistkinb_cntr_B.t6)
    * ROPOD_4Wheel_Tdistkinb_cntr_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[43] = ((ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_l
    + ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k) - ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    -ROPOD_4Wheel_Tdistkinb_cntr_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[44] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_l +
      ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k) + ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t40;

  // Product: '<S42>/Product3' incorporates:
  //   SignalConversion: '<S42>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S12>/Sum'

  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 15;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.dv1[ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 30] *
      ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_g +
      (ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 15] *
       ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_l +
       ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_B.k] *
       ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2);
  }

  // End of Product: '<S42>/Product3'

  // Product: '<S79>/Product9' incorporates:
  //   Constant: '<Root>/Constant'
  //   Sum: '<S12>/Sum'

  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.dv1[7 + ROPOD_4Wheel_Tdistkinb_cntr_B.k] -
       ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[ROPOD_4Wheel_Tdistkinb_cntr_B.k])
      * ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_n[ROPOD_4Wheel_Tdistkinb_cntr_B.k];
  }

  // End of Product: '<S79>/Product9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter10'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pz.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pz.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2931.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;
  }

  // Product: '<S80>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S93>/POut' incorporates:
  //   Constant: '<S89>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k = ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i
    * ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter11'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jt.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jt.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2932.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz);

    // Gain: '<S89>/Gain2' incorporates:
    //   Constant: '<S89>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter11'
    //   MATLABSystem: '<S6>/Get Parameter11'
    //   Product: '<S89>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_c =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_i;
  }

  // DiscreteIntegrator: '<S93>/Integrator' incorporates:
  //   Product: '<S93>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_c);
  ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_i = ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1
    + ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE;

  // End of DiscreteIntegrator: '<S93>/Integrator'

  // Product: '<S93>/DOut' incorporates:
  //   Constant: '<S89>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_o;

  // SampleTimeMath: '<S94>/TSamp' incorporates:
  //   Constant: '<S89>/Constant5'
  //
  //  About '<S94>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt;

  // Math: '<S94>/Reciprocal' incorporates:
  //   Constant: '<S94>/Constant'
  //   Sum: '<S94>/SumDen'
  //
  //  About '<S94>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_nr +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S94>/Filter Differentiator TF' incorporates:
  //   Constant: '<S94>/Constant'
  //   Product: '<S94>/Divide'
  //   Sum: '<S94>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_InitialS;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_l =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_nr) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states;

  // Sum: '<S93>/Sum' incorporates:
  //   Constant: '<S89>/Constant5'
  //   DiscreteTransferFcn: '<S94>/Filter Differentiator TF'
  //   Product: '<S94>/DenCoefOut'
  //   Product: '<S94>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoef[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_l +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoef[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k +
     ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_i);

  // DiscreteIntegrator: '<S95>/Integrator' incorporates:
  //   Constant: '<S90>/Constant2'
  //   Product: '<S95>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_h =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_i *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_m);
  ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k = ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_h +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_l;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter12'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_da.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_da.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2933.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz);

    // Gain: '<S90>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter12'
    //   MATLABSystem: '<S6>/Get Parameter12'

    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_f *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Start for MATLABSystem: '<S6>/Get Parameter13'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e5.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e5.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2934.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz);

    // Gain: '<S90>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter13'
    //   MATLABSystem: '<S6>/Get Parameter13'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_c *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S90>/Divide1' incorporates:
    //   Constant: '<S90>/Constant1'
    //   Product: '<S90>/Divide'
    //   Sum: '<S90>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1 =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_d -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_m)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S96>/TSamp' incorporates:
  //   DataTypeConversion: '<S96>/Passthrough for tuning'
  //
  //  About '<S96>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_m *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_n;

  // Math: '<S96>/Reciprocal' incorporates:
  //   Constant: '<S96>/Constant'
  //   Sum: '<S96>/SumDen'
  //
  //  About '<S96>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_b +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S96>/Filter Differentiator TF' incorporates:
  //   Constant: '<S96>/Constant'
  //   Product: '<S95>/DOut'
  //   Product: '<S96>/Divide'
  //   Sum: '<S96>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1 -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_b) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_l;

  // Sum: '<S95>/Sum' incorporates:
  //   Constant: '<S90>/Constant4'
  //   DataTypeConversion: '<S96>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S96>/Filter Differentiator TF'
  //   Product: '<S95>/POut'
  //   Product: '<S96>/DenCoefOut'
  //   Product: '<S96>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_a[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_a[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_l) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_m + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_k +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k);

  // Sum: '<S91>/Sum' incorporates:
  //   UnitDelay: '<S91>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_o =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S100>/MATLAB Function' incorporates:
    //   Constant: '<S100>/Constant'
    //   Gain: '<S81>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_dw *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_f,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_d, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_l);
  }

  // Product: '<S81>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[1] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S102>/POut' incorporates:
  //   Constant: '<S98>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2 = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_d;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S98>/Gain2' incorporates:
    //   Constant: '<S98>/Constant4'
    //   Product: '<S98>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_l =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_d *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_l;
  }

  // DiscreteIntegrator: '<S102>/Integrator' incorporates:
  //   Product: '<S102>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_d
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_m;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_a *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_l);
  ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_d =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_f;

  // End of DiscreteIntegrator: '<S102>/Integrator'

  // Product: '<S102>/DOut' incorporates:
  //   Constant: '<S98>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_fb;

  // SampleTimeMath: '<S103>/TSamp' incorporates:
  //   Constant: '<S98>/Constant5'
  //
  //  About '<S103>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_g *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_a;

  // Math: '<S103>/Reciprocal' incorporates:
  //   Constant: '<S103>/Constant'
  //   Sum: '<S103>/SumDen'
  //
  //  About '<S103>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_h +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S103>/Filter Differentiator TF' incorporates:
  //   Constant: '<S103>/Constant'
  //   Product: '<S103>/Divide'
  //   Sum: '<S103>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_b =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_j;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f - (ROPOD_4Wheel_Tdistkinb_cntr_B.t2
    - ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_h) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_b;

  // Sum: '<S102>/Sum' incorporates:
  //   Constant: '<S98>/Constant5'
  //   DiscreteTransferFcn: '<S103>/Filter Differentiator TF'
  //   Product: '<S103>/DenCoefOut'
  //   Product: '<S103>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_l[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_l[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_b) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_g +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_d);

  // DiscreteIntegrator: '<S104>/Integrator' incorporates:
  //   Constant: '<S99>/Constant2'
  //   Product: '<S104>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t17_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_m *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_k);
  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2 = ROPOD_4Wheel_Tdistkinb_cntr_B.t17_tmp
    + ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_h;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S99>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_h *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Gain: '<S99>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_n =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_p *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S99>/Divide1' incorporates:
    //   Constant: '<S99>/Constant1'
    //   Product: '<S99>/Divide'
    //   Sum: '<S99>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_h =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_m -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_n)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S105>/TSamp' incorporates:
  //   DataTypeConversion: '<S105>/Passthrough for tuning'
  //
  //  About '<S105>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_n *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_j;

  // Math: '<S105>/Reciprocal' incorporates:
  //   Constant: '<S105>/Constant'
  //   Sum: '<S105>/SumDen'
  //
  //  About '<S105>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_m +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S105>/Filter Differentiator TF' incorporates:
  //   Constant: '<S105>/Constant'
  //   Product: '<S104>/DOut'
  //   Product: '<S105>/Divide'
  //   Sum: '<S105>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_h -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_m) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_o;

  // Sum: '<S104>/Sum' incorporates:
  //   Constant: '<S99>/Constant4'
  //   DataTypeConversion: '<S105>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S105>/Filter Differentiator TF'
  //   Product: '<S104>/POut'
  //   Product: '<S105>/DenCoefOut'
  //   Product: '<S105>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_lb[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_lb[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_o) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_n + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_a +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2);

  // Sum: '<S100>/Sum' incorporates:
  //   UnitDelay: '<S100>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_b = ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f
    + ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_c;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S109>/MATLAB Function' incorporates:
    //   Constant: '<S109>/Constant'
    //   Gain: '<S82>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_a *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_f4,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_p, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_d);
  }

  // Product: '<S82>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[2] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S111>/POut' incorporates:
  //   Constant: '<S107>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_h;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S107>/Gain2' incorporates:
    //   Constant: '<S107>/Constant4'
    //   Product: '<S107>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_h *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_hv;
  }

  // DiscreteIntegrator: '<S111>/Integrator' incorporates:
  //   Product: '<S111>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_n
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_i;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.t25_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_d *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_e);
  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_c =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t25_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_i;

  // End of DiscreteIntegrator: '<S111>/Integrator'

  // Product: '<S111>/DOut' incorporates:
  //   Constant: '<S107>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_bv;

  // SampleTimeMath: '<S112>/TSamp' incorporates:
  //   Constant: '<S107>/Constant5'
  //
  //  About '<S112>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_c *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_g;

  // Math: '<S112>/Reciprocal' incorporates:
  //   Constant: '<S112>/Constant'
  //   Sum: '<S112>/SumDen'
  //
  //  About '<S112>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_k +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S112>/Filter Differentiator TF' incorporates:
  //   Constant: '<S112>/Constant'
  //   Product: '<S112>/Divide'
  //   Sum: '<S112>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_o;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pz =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m - (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 -
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_k) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_m;

  // Sum: '<S111>/Sum' incorporates:
  //   Constant: '<S107>/Constant5'
  //   DiscreteTransferFcn: '<S112>/Filter Differentiator TF'
  //   Product: '<S112>/DenCoefOut'
  //   Product: '<S112>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_h[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pz +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_h[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_m) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_c +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_c);

  // DiscreteIntegrator: '<S113>/Integrator' incorporates:
  //   Constant: '<S108>/Constant2'
  //   Product: '<S113>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t34_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_p *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_ko);
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i = ROPOD_4Wheel_Tdistkinb_cntr_B.t34_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_hs;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S108>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_ft *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Gain: '<S108>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_o =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_g *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S108>/Divide1' incorporates:
    //   Constant: '<S108>/Constant1'
    //   Product: '<S108>/Divide'
    //   Sum: '<S108>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_f =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_l -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_o)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S114>/TSamp' incorporates:
  //   DataTypeConversion: '<S114>/Passthrough for tuning'
  //
  //  About '<S114>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_o *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_c;

  // Math: '<S114>/Reciprocal' incorporates:
  //   Constant: '<S114>/Constant'
  //   Sum: '<S114>/SumDen'
  //
  //  About '<S114>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_d +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S114>/Filter Differentiator TF' incorporates:
  //   Constant: '<S114>/Constant'
  //   Product: '<S113>/DOut'
  //   Product: '<S114>/Divide'
  //   Sum: '<S114>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_c =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_f -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_d) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_bh;

  // Sum: '<S113>/Sum' incorporates:
  //   Constant: '<S108>/Constant4'
  //   DataTypeConversion: '<S114>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S114>/Filter Differentiator TF'
  //   Product: '<S113>/POut'
  //   Product: '<S114>/DenCoefOut'
  //   Product: '<S114>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_j[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_c +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_j[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_bh) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_o
    + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
       ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_e +
       ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i);

  // Sum: '<S109>/Sum' incorporates:
  //   UnitDelay: '<S109>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_l = ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_d;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S118>/MATLAB Function' incorporates:
    //   Constant: '<S118>/Constant'
    //   Gain: '<S83>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_az *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_n3,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_ay, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_m);
  }

  // Product: '<S83>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[3] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S120>/POut' incorporates:
  //   Constant: '<S116>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_o;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S116>/Gain2' incorporates:
    //   Constant: '<S116>/Constant4'
    //   Product: '<S116>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_b =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_o *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_e;
  }

  // DiscreteIntegrator: '<S120>/Integrator' incorporates:
  //   Product: '<S120>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_e
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_ih;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp_g =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_aj *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_b);
  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_oa =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp_g +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_m;

  // End of DiscreteIntegrator: '<S120>/Integrator'

  // Product: '<S120>/DOut' incorporates:
  //   Constant: '<S116>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_mc;

  // SampleTimeMath: '<S121>/TSamp' incorporates:
  //   Constant: '<S116>/Constant5'
  //
  //  About '<S121>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_l *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_g1;

  // Math: '<S121>/Reciprocal' incorporates:
  //   Constant: '<S121>/Constant'
  //   Sum: '<S121>/SumDen'
  //
  //  About '<S121>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_kp +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S121>/Filter Differentiator TF' incorporates:
  //   Constant: '<S121>/Constant'
  //   Product: '<S121>/Divide'
  //   Sum: '<S121>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_ji;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_h =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i - (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 -
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_kp) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_f;

  // Sum: '<S120>/Sum' incorporates:
  //   Constant: '<S116>/Constant5'
  //   DiscreteTransferFcn: '<S121>/Filter Differentiator TF'
  //   Product: '<S121>/DenCoefOut'
  //   Product: '<S121>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_g[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_h +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_g[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_f) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_l +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_oa);

  // DiscreteIntegrator: '<S122>/Integrator' incorporates:
  //   Constant: '<S117>/Constant2'
  //   Product: '<S122>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_k_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_o *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_j);
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_k_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_b;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S117>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_j *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Gain: '<S117>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_e *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S117>/Divide1' incorporates:
    //   Constant: '<S117>/Constant1'
    //   Product: '<S117>/Divide'
    //   Sum: '<S117>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_j =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_p -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S123>/TSamp' incorporates:
  //   DataTypeConversion: '<S123>/Passthrough for tuning'
  //
  //  About '<S123>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_cq;

  // Math: '<S123>/Reciprocal' incorporates:
  //   Constant: '<S123>/Constant'
  //   Sum: '<S123>/SumDen'
  //
  //  About '<S123>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_h1 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S123>/Filter Differentiator TF' incorporates:
  //   Constant: '<S123>/Constant'
  //   Product: '<S122>/DOut'
  //   Product: '<S123>/Divide'
  //   Sum: '<S123>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_m =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_j -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_h1) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_k;

  // Sum: '<S122>/Sum' incorporates:
  //   Constant: '<S117>/Constant4'
  //   DataTypeConversion: '<S123>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S123>/Filter Differentiator TF'
  //   Product: '<S122>/POut'
  //   Product: '<S123>/DenCoefOut'
  //   Product: '<S123>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_k[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_m +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_k[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_k) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h
    + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
       ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_m +
       ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k);

  // Sum: '<S118>/Sum' incorporates:
  //   UnitDelay: '<S118>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_o = ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_cy;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S127>/MATLAB Function' incorporates:
    //   Constant: '<S127>/Constant'
    //   Gain: '<S84>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_hs *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_fi,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_j, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_k);
  }

  // Product: '<S84>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[4] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S129>/POut' incorporates:
  //   Constant: '<S125>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_os = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_hz;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S125>/Gain2' incorporates:
    //   Constant: '<S125>/Constant4'
    //   Product: '<S125>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_c;
  }

  // DiscreteIntegrator: '<S129>/Integrator' incorporates:
  //   Product: '<S129>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_o
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_e =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_j;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_fc_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_d);
  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_fc =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_fc_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_e;

  // End of DiscreteIntegrator: '<S129>/Integrator'

  // Product: '<S129>/DOut' incorporates:
  //   Constant: '<S125>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_ol;

  // SampleTimeMath: '<S130>/TSamp' incorporates:
  //   Constant: '<S125>/Constant5'
  //
  //  About '<S130>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_ci;

  // Math: '<S130>/Reciprocal' incorporates:
  //   Constant: '<S130>/Constant'
  //   Sum: '<S130>/SumDen'
  //
  //  About '<S130>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_dw +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S130>/Filter Differentiator TF' incorporates:
  //   Constant: '<S130>/Constant'
  //   Product: '<S130>/Divide'
  //   Sum: '<S130>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gp ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gp !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_h;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gp =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pt =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg - (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 -
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_dw) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_d;

  // Sum: '<S129>/Sum' incorporates:
  //   Constant: '<S125>/Constant5'
  //   DiscreteTransferFcn: '<S130>/Filter Differentiator TF'
  //   Product: '<S130>/DenCoefOut'
  //   Product: '<S130>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_e[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pt +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_e[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_d) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_i +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.POut_os +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_fc);

  // DiscreteIntegrator: '<S131>/Integrator' incorporates:
  //   Constant: '<S126>/Constant2'
  //   Product: '<S131>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_os_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_oc *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_o);
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_os =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_os_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_g;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S126>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_n *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Gain: '<S126>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h0 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_k *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S126>/Divide1' incorporates:
    //   Constant: '<S126>/Constant1'
    //   Product: '<S126>/Divide'
    //   Sum: '<S126>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_g =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_b -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h0)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S132>/TSamp' incorporates:
  //   DataTypeConversion: '<S132>/Passthrough for tuning'
  //
  //  About '<S132>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h0 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_ag;

  // Math: '<S132>/Reciprocal' incorporates:
  //   Constant: '<S132>/Constant'
  //   Sum: '<S132>/SumDen'
  //
  //  About '<S132>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_n0 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S132>/Filter Differentiator TF' incorporates:
  //   Constant: '<S132>/Constant'
  //   Product: '<S131>/DOut'
  //   Product: '<S132>/Divide'
  //   Sum: '<S132>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_hi =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_g -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_n0) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_mj;

  // Sum: '<S131>/Sum' incorporates:
  //   Constant: '<S126>/Constant4'
  //   DataTypeConversion: '<S132>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S132>/Filter Differentiator TF'
  //   Product: '<S131>/POut'
  //   Product: '<S132>/DenCoefOut'
  //   Product: '<S132>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_d[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_hi +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_d[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_mj) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_h0 + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_f +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_os);

  // Sum: '<S127>/Sum' incorporates:
  //   UnitDelay: '<S127>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_lp = ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg
    + ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_o;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S136>/MATLAB Function' incorporates:
    //   Constant: '<S136>/Constant'
    //   Gain: '<S85>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_ff *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_o1,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_a, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_b);
  }

  // Product: '<S85>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[5] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S138>/POut' incorporates:
  //   Constant: '<S134>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_h = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_fb;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S134>/Gain2' incorporates:
    //   Constant: '<S134>/Constant4'
    //   Product: '<S134>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_fb *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_lh;
  }

  // DiscreteIntegrator: '<S138>/Integrator' incorporates:
  //   Product: '<S138>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_l
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mc =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_nm;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_op_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_l *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_m);
  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_op =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_op_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mc;

  // End of DiscreteIntegrator: '<S138>/Integrator'

  // Product: '<S138>/DOut' incorporates:
  //   Constant: '<S134>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_gd;

  // SampleTimeMath: '<S139>/TSamp' incorporates:
  //   Constant: '<S134>/Constant5'
  //
  //  About '<S139>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_d *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_k;

  // Math: '<S139>/Reciprocal' incorporates:
  //   Constant: '<S139>/Constant'
  //   Sum: '<S139>/SumDen'
  //
  //  About '<S139>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_c +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S139>/Filter Differentiator TF' incorporates:
  //   Constant: '<S139>/Constant'
  //   Product: '<S139>/Divide'
  //   Sum: '<S139>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__e ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__e !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_ph;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__e =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_k =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d - (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 -
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_c) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_e;

  // Sum: '<S138>/Sum' incorporates:
  //   Constant: '<S134>/Constant5'
  //   DiscreteTransferFcn: '<S139>/Filter Differentiator TF'
  //   Product: '<S139>/DenCoefOut'
  //   Product: '<S139>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_m[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_k +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_m[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_e) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_d +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.POut_h +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_op);

  // DiscreteIntegrator: '<S140>/Integrator' incorporates:
  //   Constant: '<S135>/Constant2'
  //   Product: '<S140>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_h_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_l5 *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_js);
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_h =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_h_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_n;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S135>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_b *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Gain: '<S135>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_e =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_e1 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S135>/Divide1' incorporates:
    //   Constant: '<S135>/Constant1'
    //   Product: '<S135>/Divide'
    //   Sum: '<S135>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_i =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_e -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_e)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S141>/TSamp' incorporates:
  //   DataTypeConversion: '<S141>/Passthrough for tuning'
  //
  //  About '<S141>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_e *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_gz;

  // Math: '<S141>/Reciprocal' incorporates:
  //   Constant: '<S141>/Constant'
  //   Sum: '<S141>/SumDen'
  //
  //  About '<S141>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_nl +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S141>/Filter Differentiator TF' incorporates:
  //   Constant: '<S141>/Constant'
  //   Product: '<S140>/DOut'
  //   Product: '<S141>/Divide'
  //   Sum: '<S141>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_f =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_i -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_nl) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_n;

  // Sum: '<S140>/Sum' incorporates:
  //   Constant: '<S135>/Constant4'
  //   DataTypeConversion: '<S141>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S141>/Filter Differentiator TF'
  //   Product: '<S140>/POut'
  //   Product: '<S141>/DenCoefOut'
  //   Product: '<S141>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_n[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_f +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_n[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_n) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_e
    + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
       ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_l +
       ROPOD_4Wheel_Tdistkinb_cntr_B.POut_h);

  // Sum: '<S136>/Sum' incorporates:
  //   UnitDelay: '<S136>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_lh = ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_cd;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S145>/MATLAB Function' incorporates:
    //   Constant: '<S145>/Constant'
    //   Gain: '<S86>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_eh *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_ev,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_l, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_e);
  }

  // Product: '<S86>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[6] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S147>/POut' incorporates:
  //   Constant: '<S143>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_le = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_n;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S143>/Gain2' incorporates:
    //   Constant: '<S143>/Constant4'
    //   Product: '<S143>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_h =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_n *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_b2;
  }

  // DiscreteIntegrator: '<S147>/Integrator' incorporates:
  //   Product: '<S147>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_p
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_iv;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_i_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_j *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_h);
  ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_i_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c;

  // End of DiscreteIntegrator: '<S147>/Integrator'

  // Product: '<S147>/DOut' incorporates:
  //   Constant: '<S143>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_j;

  // SampleTimeMath: '<S148>/TSamp' incorporates:
  //   Constant: '<S143>/Constant5'
  //
  //  About '<S148>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_p *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_ky;

  // Math: '<S148>/Reciprocal' incorporates:
  //   Constant: '<S148>/Constant'
  //   Sum: '<S148>/SumDen'
  //
  //  About '<S148>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_b3 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S148>/Filter Differentiator TF' incorporates:
  //   Constant: '<S148>/Constant'
  //   Product: '<S148>/Divide'
  //   Sum: '<S148>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gs ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gs !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_l0 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_gq;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gs =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_fw =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld - (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 -
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_b3) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_l0;

  // Sum: '<S147>/Sum' incorporates:
  //   Constant: '<S143>/Constant5'
  //   DiscreteTransferFcn: '<S148>/Filter Differentiator TF'
  //   Product: '<S148>/DenCoefOut'
  //   Product: '<S148>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_jl[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_fw +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_jl[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_l0) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_p +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.POut_le +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_i);

  // DiscreteIntegrator: '<S149>/Integrator' incorporates:
  //   Constant: '<S144>/Constant2'
  //   Product: '<S149>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_le_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_jy *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_l);
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_le =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_le_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_n3;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S144>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_p *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Gain: '<S144>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_l =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_f *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S144>/Divide1' incorporates:
    //   Constant: '<S144>/Constant1'
    //   Product: '<S144>/Divide'
    //   Sum: '<S144>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_e =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_lf -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_l)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S150>/TSamp' incorporates:
  //   DataTypeConversion: '<S150>/Passthrough for tuning'
  //
  //  About '<S150>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_l *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_l;

  // Math: '<S150>/Reciprocal' incorporates:
  //   Constant: '<S150>/Constant'
  //   Sum: '<S150>/SumDen'
  //
  //  About '<S150>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_hq +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S150>/Filter Differentiator TF' incorporates:
  //   Constant: '<S150>/Constant'
  //   Product: '<S149>/DOut'
  //   Product: '<S150>/Divide'
  //   Sum: '<S150>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_hi2 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_e -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_hq) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_eh;

  // Sum: '<S149>/Sum' incorporates:
  //   Constant: '<S144>/Constant4'
  //   DataTypeConversion: '<S150>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S150>/Filter Differentiator TF'
  //   Product: '<S149>/POut'
  //   Product: '<S150>/DenCoefOut'
  //   Product: '<S150>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_kz[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_hi2 +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_kz[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_eh) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_l + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_g +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_le);

  // Sum: '<S145>/Sum' incorporates:
  //   UnitDelay: '<S145>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_h = ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_j;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S154>/MATLAB Function' incorporates:
    //   Constant: '<S154>/Constant'
    //   Gain: '<S87>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_ap *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_je,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g, &ROPOD_4Wheel_Tdistkinb_cntr_B.a);
  }

  // Product: '<S87>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product9[7] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain;

  // Product: '<S156>/POut' incorporates:
  //   Constant: '<S152>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_io = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_b;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S152>/Gain2' incorporates:
    //   Constant: '<S152>/Constant4'
    //   Product: '<S152>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_dy =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_b *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_fh;
  }

  // DiscreteIntegrator: '<S156>/Integrator' incorporates:
  //   Product: '<S156>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_f
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_fp =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_eq;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_fu *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_dy);
  ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz =
    ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_fp;

  // End of DiscreteIntegrator: '<S156>/Integrator'

  // Product: '<S156>/DOut' incorporates:
  //   Constant: '<S152>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_au = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_c2;

  // SampleTimeMath: '<S157>/TSamp' incorporates:
  //   Constant: '<S152>/Constant5'
  //
  //  About '<S157>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_j *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_b;

  // Math: '<S157>/Reciprocal' incorporates:
  //   Constant: '<S157>/Constant'
  //   Sum: '<S157>/SumDen'
  //
  //  About '<S157>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_kc +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S157>/Filter Differentiator TF' incorporates:
  //   Constant: '<S157>/Constant'
  //   Product: '<S157>/Divide'
  //   Sum: '<S157>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_e2 ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_e2 !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_es =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_l;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_e2 =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_ho =
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_au - (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 -
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_kc) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_es;

  // Sum: '<S156>/Sum' incorporates:
  //   Constant: '<S152>/Constant5'
  //   DiscreteTransferFcn: '<S157>/Filter Differentiator TF'
  //   Product: '<S157>/DenCoefOut'
  //   Product: '<S157>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_ju[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_ho +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_ju[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_es) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_j +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.POut_io +
     ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz);

  // DiscreteIntegrator: '<S158>/Integrator' incorporates:
  //   Constant: '<S153>/Constant2'
  //   Product: '<S158>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_io_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_pb *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_d);
  ROPOD_4Wheel_Tdistkinb_cntr_B.POut_io =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_io_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_gz;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S153>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_pr *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

    // Gain: '<S153>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_p =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_m *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

    // Product: '<S153>/Divide1' incorporates:
    //   Constant: '<S153>/Constant1'
    //   Product: '<S153>/Divide'
    //   Sum: '<S153>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_b =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_h -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_p)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S159>/TSamp' incorporates:
  //   DataTypeConversion: '<S159>/Passthrough for tuning'
  //
  //  About '<S159>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_p *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_f;

  // Math: '<S159>/Reciprocal' incorporates:
  //   Constant: '<S159>/Constant'
  //   Sum: '<S159>/SumDen'
  //
  //  About '<S159>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_mf +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S159>/Filter Differentiator TF' incorporates:
  //   Constant: '<S159>/Constant'
  //   Product: '<S158>/DOut'
  //   Product: '<S159>/Divide'
  //   Sum: '<S159>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_b -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_mf) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_j;

  // Sum: '<S158>/Sum' incorporates:
  //   Constant: '<S153>/Constant4'
  //   DataTypeConversion: '<S159>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S159>/Filter Differentiator TF'
  //   Product: '<S158>/POut'
  //   Product: '<S159>/DenCoefOut'
  //   Product: '<S159>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_a0[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_a0[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_j) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_p + (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_p +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_io);

  // Sum: '<S154>/Sum' incorporates:
  //   UnitDelay: '<S154>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_au =
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_d5;

  // MATLAB Function: '<S44>/Gl_matrices' incorporates:
  //   SignalConversion: '<S77>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t11 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t31 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter11_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t6 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter12_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t8 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t9 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t24 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter13_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t14 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t4 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t27 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter14_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp *
    0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t32 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter15_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t26 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t33 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t18 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t35 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter16_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t34 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t41 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp *
    0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t40 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter17_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t42 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t38 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t34 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[0] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[3] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[4] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[5] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[6] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[7] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t31) * ROPOD_4Wheel_Tdistkinb_cntr_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[8] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.t31) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[9] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t7 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[10] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t7 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8) * ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[11] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t22) * ROPOD_4Wheel_Tdistkinb_cntr_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[12] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_Tdistkinb_cntr_B.t22) * ROPOD_4Wheel_Tdistkinb_cntr_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[13] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t41) * ROPOD_4Wheel_Tdistkinb_cntr_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[14] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t17 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.t41) * ROPOD_4Wheel_Tdistkinb_cntr_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[15] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[16] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[17] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[18] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[19] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[20] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[21] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 -
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t5 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[23] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t5 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[24] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t9 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t7 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[25] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t7 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t9) * ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[26] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp -
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[27] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp) * ROPOD_4Wheel_Tdistkinb_cntr_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[28] = (ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp
    - ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t17 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[29] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.t17 * 0.5
     + ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[30] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[31] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[32] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[33] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[34] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t4 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[35] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t18 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[36] = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t34 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[37] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t30) -
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    -ROPOD_4Wheel_Tdistkinb_cntr_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[38] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t30) +
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[39] = ((ROPOD_4Wheel_Tdistkinb_cntr_B.t10 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t14) -
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9) *
    -ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[40] = ((-ROPOD_4Wheel_Tdistkinb_cntr_B.t10 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t14) +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9) * ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[41] = ((ROPOD_4Wheel_Tdistkinb_cntr_B.t26 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t33) -
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp) * -ROPOD_4Wheel_Tdistkinb_cntr_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[42] = ((-ROPOD_4Wheel_Tdistkinb_cntr_B.t26 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t33) +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp) * ROPOD_4Wheel_Tdistkinb_cntr_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[43] = ((ROPOD_4Wheel_Tdistkinb_cntr_B.t42 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t38) -
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp) * -ROPOD_4Wheel_Tdistkinb_cntr_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[44] = ((-ROPOD_4Wheel_Tdistkinb_cntr_B.t42 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t38) +
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp) * ROPOD_4Wheel_Tdistkinb_cntr_B.t40;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 15;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[3 * ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_B.k];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[1 + 3 * ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 15];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[2 + 3 * ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 30];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // SampleTimeMath: '<S46>/TSamp'
    //
    //  About '<S46>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2 *
      ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_o;
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_l *
      ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_o;
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_g *
      ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_o;

    // Sum: '<S46>/Diff' incorporates:
    //   UnitDelay: '<S46>/UD'
    //
    //  Block description for '<S46>/Diff':
    //
    //   Add in CPU
    //
    //  Block description for '<S46>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_0 -
      ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[0];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_1 -
      ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[1];
    ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_2 -
      ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[2];

    // Gain: '<S43>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain_h =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FFxy_mass *
      ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[0];

    // Gain: '<S43>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FFxy_mass *
      ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[1];

    // Gain: '<S43>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_m2 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FFtheta_intia *
      ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[2];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter6'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_c.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_c.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2903.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz_n);

    // MATLAB Function: '<S53>/MATLAB Function' incorporates:
    //   Constant: '<S53>/Constant'
    //   Gain: '<S47>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter6'
    //   MATLABSystem: '<S6>/Get Parameter6'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_cc *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_fp,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_c, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_jp);
  }

  // MATLAB Function: '<S2>/Jqwl_matrix' incorporates:
  //   SignalConversion: '<S13>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t8 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t14 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t11 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t26 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t27 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t31 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t33 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t34 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t35 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t32 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t40 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t41 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t42 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t38 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t39 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t48 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t49 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t50 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t4 + ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t5 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[1] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 -
     ROPOD_4Wheel_Tdistkinb_cntr_B.t5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 *=
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[2] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_B.t27 + ROPOD_4Wheel_Tdistkinb_cntr_B.t30) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t31) -
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t26) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter11_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[3] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t4 - ROPOD_4Wheel_Tdistkinb_cntr_B.t6) *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[4] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[5] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_B.t27 + ROPOD_4Wheel_Tdistkinb_cntr_B.t30) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t31) +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t26) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter12_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[6] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t8 + ROPOD_4Wheel_Tdistkinb_cntr_B.t10) *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t5 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[7] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t24 - ROPOD_4Wheel_Tdistkinb_cntr_B.t5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[8] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_B.t34 + ROPOD_4Wheel_Tdistkinb_cntr_B.t35) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t32) -
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t33) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter13_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[9] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t8 - ROPOD_4Wheel_Tdistkinb_cntr_B.t10) *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[10] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 + ROPOD_4Wheel_Tdistkinb_cntr_B.t24) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[11] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_B.t34 + ROPOD_4Wheel_Tdistkinb_cntr_B.t35) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t32) +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t33) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter14_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[12] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t5 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[13] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t11 - ROPOD_4Wheel_Tdistkinb_cntr_B.t5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[14] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_B.t41 + ROPOD_4Wheel_Tdistkinb_cntr_B.t42) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t38) -
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t40) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter15_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[15] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_B.t14) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[16] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 + ROPOD_4Wheel_Tdistkinb_cntr_B.t11) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[17] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_B.t41 + ROPOD_4Wheel_Tdistkinb_cntr_B.t42) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t38) +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t40) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter16_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[18] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t5 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[19] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t22 - ROPOD_4Wheel_Tdistkinb_cntr_B.t5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[20] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_B.t48 + ROPOD_4Wheel_Tdistkinb_cntr_B.t49) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t50) -
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t39) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.GetParameter17_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[21] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 -
     ROPOD_4Wheel_Tdistkinb_cntr_B.t18) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t5 + ROPOD_4Wheel_Tdistkinb_cntr_B.t22) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[23] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_B.t48 + ROPOD_4Wheel_Tdistkinb_cntr_B.t49) +
      ROPOD_4Wheel_Tdistkinb_cntr_B.t50) +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_g *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t39) * 0.125;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 3;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    // Product: '<S2>/Product3'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[ROPOD_4Wheel_Tdistkinb_cntr_B.k] = 0.0;
    for (ROPOD_4Wheel_Tdistkinb_cntr_B.i0 = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.i0 <
         8; ROPOD_4Wheel_Tdistkinb_cntr_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[ROPOD_4Wheel_Tdistkinb_cntr_B.k] +=
        ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
        ROPOD_4Wheel_Tdistkinb_cntr_B.i0 + ROPOD_4Wheel_Tdistkinb_cntr_B.k] *
        ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_k[ROPOD_4Wheel_Tdistkinb_cntr_B.i0];
    }

    // End of Product: '<S2>/Product3'

    // Sum: '<S43>/Sum'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[ROPOD_4Wheel_Tdistkinb_cntr_B.k] -=
      ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[ROPOD_4Wheel_Tdistkinb_cntr_B.k];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_mn.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_mn.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2716.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain_i =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;
  }

  // Product: '<S47>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain_i;

  // Product: '<S55>/POut' incorporates:
  //   Constant: '<S51>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_hd;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter3'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d0.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d0.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2898.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz_e);

    // Gain: '<S51>/Gain2' incorporates:
    //   Constant: '<S51>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter3'
    //   MATLABSystem: '<S6>/Get Parameter3'
    //   Product: '<S51>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_k =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_hd *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_nx;
  }

  // DiscreteIntegrator: '<S55>/Integrator' incorporates:
  //   Product: '<S55>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_fn != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mx =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_mp;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_k);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mx;

  // End of DiscreteIntegrator: '<S55>/Integrator'

  // Product: '<S55>/DOut' incorporates:
  //   Constant: '<S51>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t7 = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_e0;

  // SampleTimeMath: '<S56>/TSamp' incorporates:
  //   Constant: '<S51>/Constant5'
  //
  //  About '<S56>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_jy *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_je;

  // Math: '<S56>/Reciprocal' incorporates:
  //   Constant: '<S56>/Constant'
  //   Sum: '<S56>/SumDen'
  //
  //  About '<S56>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_lp +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t2);

  // DiscreteTransferFcn: '<S56>/Filter Differentiator TF' incorporates:
  //   Constant: '<S56>/Constant'
  //   Product: '<S56>/Divide'
  //   Sum: '<S56>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__l ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__l !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ku =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_a;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__l =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t5 = ROPOD_4Wheel_Tdistkinb_cntr_B.t7 -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_lp) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ku;

  // Sum: '<S55>/Sum' incorporates:
  //   Constant: '<S51>/Constant5'
  //   DiscreteTransferFcn: '<S56>/Filter Differentiator TF'
  //   Product: '<S56>/DenCoefOut'
  //   Product: '<S56>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_jq[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_jq[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ku) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_jy +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 + ROPOD_4Wheel_Tdistkinb_cntr_B.t4);

  // DiscreteIntegrator: '<S57>/Integrator' incorporates:
  //   Constant: '<S52>/Constant2'
  //   Product: '<S57>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_k *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_n);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t7 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_j;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter4'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ey.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ey.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2900.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m);

    // Gain: '<S52>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter4'
    //   MATLABSystem: '<S6>/Get Parameter4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_g *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m;

    // Start for MATLABSystem: '<S6>/Get Parameter5'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g0.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g0.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2902.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz_n);

    // Gain: '<S52>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter5'
    //   MATLABSystem: '<S6>/Get Parameter5'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_g =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_e4 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz_n;

    // Product: '<S52>/Divide1' incorporates:
    //   Constant: '<S52>/Constant1'
    //   Product: '<S52>/Divide'
    //   Sum: '<S52>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_ht =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_j -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_g)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S58>/TSamp' incorporates:
  //   DataTypeConversion: '<S58>/Passthrough for tuning'
  //
  //  About '<S58>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_g *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_bz;

  // Math: '<S58>/Reciprocal' incorporates:
  //   Constant: '<S58>/Constant'
  //   Sum: '<S58>/SumDen'
  //
  //  About '<S58>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.t8 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_a +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S58>/Filter Differentiator TF' incorporates:
  //   Constant: '<S58>/Constant'
  //   Product: '<S57>/DOut'
  //   Product: '<S58>/Divide'
  //   Sum: '<S58>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t9 = ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_ht -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_a) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8 *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_j5;

  // Sum: '<S57>/Sum' incorporates:
  //   Constant: '<S52>/Constant4'
  //   DataTypeConversion: '<S58>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S58>/Filter Differentiator TF'
  //   Product: '<S57>/POut'
  //   Product: '<S58>/DenCoefOut'
  //   Product: '<S58>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t8 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_o[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t9 +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_o[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_j5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_g +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_dt +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t7);

  // Sum: '<S53>/Sum' incorporates:
  //   UnitDelay: '<S53>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_B.t8 +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_g;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S62>/MATLAB Function' incorporates:
    //   Constant: '<S62>/Constant'
    //   Gain: '<S48>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_ju *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz_n,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_l1,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_n, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_j);
  }

  // Product: '<S48>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[1] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain_i;

  // Product: '<S64>/POut' incorporates:
  //   Constant: '<S60>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_oj;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S60>/Gain2' incorporates:
    //   Constant: '<S60>/Constant4'
    //   Product: '<S60>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_l4 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_oj *
      ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz_e *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_fk;
  }

  // DiscreteIntegrator: '<S64>/Integrator' incorporates:
  //   Product: '<S64>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_oj != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c5 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_o;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz_e =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_kx *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_l4);
  ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c5;

  // End of DiscreteIntegrator: '<S64>/Integrator'

  // Product: '<S64>/DOut' incorporates:
  //   Constant: '<S60>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t14 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_oh;

  // SampleTimeMath: '<S65>/TSamp' incorporates:
  //   Constant: '<S60>/Constant5'
  //
  //  About '<S65>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_b *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_go;

  // Math: '<S65>/Reciprocal' incorporates:
  //   Constant: '<S65>/Constant'
  //   Sum: '<S65>/SumDen'
  //
  //  About '<S65>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.t10 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_p +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S65>/Filter Differentiator TF' incorporates:
  //   Constant: '<S65>/Constant'
  //   Product: '<S65>/Divide'
  //   Sum: '<S65>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_l5 ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_l5 !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_fc =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_b2;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_l5 =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t11 = ROPOD_4Wheel_Tdistkinb_cntr_B.t14 -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_p) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10 *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_fc;

  // Sum: '<S64>/Sum' incorporates:
  //   Constant: '<S60>/Constant5'
  //   DiscreteTransferFcn: '<S65>/Filter Differentiator TF'
  //   Product: '<S65>/DenCoefOut'
  //   Product: '<S65>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t10 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_k0[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t11 +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_k0[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_fc) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_b +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 + ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz_n);

  // DiscreteIntegrator: '<S66>/Integrator' incorporates:
  //   Constant: '<S61>/Constant2'
  //   Product: '<S66>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_c *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t10 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_c);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t14 = ROPOD_4Wheel_Tdistkinb_cntr_B.t30 +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_p;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S61>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_o *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m;

    // Gain: '<S61>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_j =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_pa *
      ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz_n;

    // Product: '<S61>/Divide1' incorporates:
    //   Constant: '<S61>/Constant1'
    //   Product: '<S61>/Divide'
    //   Sum: '<S61>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_p =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_a -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_j)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S67>/TSamp' incorporates:
  //   DataTypeConversion: '<S67>/Passthrough for tuning'
  //
  //  About '<S67>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_j *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_p;

  // Math: '<S67>/Reciprocal' incorporates:
  //   Constant: '<S67>/Constant'
  //   Sum: '<S67>/SumDen'
  //
  //  About '<S67>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_kq +
     ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

  // DiscreteTransferFcn: '<S67>/Filter Differentiator TF' incorporates:
  //   Constant: '<S67>/Constant'
  //   Product: '<S66>/DOut'
  //   Product: '<S67>/Divide'
  //   Sum: '<S67>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10 * ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_p
    - (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
       ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_kq) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_dl;

  // Sum: '<S66>/Sum' incorporates:
  //   Constant: '<S61>/Constant4'
  //   DataTypeConversion: '<S67>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S67>/Filter Differentiator TF'
  //   Product: '<S66>/POut'
  //   Product: '<S67>/DenCoefOut'
  //   Product: '<S67>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_hk[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz_n +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCo_hk[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_dl) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_j + (ROPOD_4Wheel_Tdistkinb_cntr_B.t10 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_c +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t14);

  // Sum: '<S62>/Sum' incorporates:
  //   UnitDelay: '<S62>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_gb;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter9'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ch.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ch.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2923.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLAB Function: '<S71>/MATLAB Function' incorporates:
    //   Constant: '<S71>/Constant'
    //   Gain: '<S49>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter9'
    //   MATLABSystem: '<S6>/Get Parameter9'

    ROPOD_4Wheel_Tdi_MATLABFunction(ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_op *
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i,
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_or,
      &ROPOD_4Wheel_Tdistkinb_cntr_B.g_bl, &ROPOD_4Wheel_Tdistkinb_cntr_B.a_c);

    // Start for MATLABSystem: '<S6>/Get Parameter1'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fy.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fy.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2919.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain_h =
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;
  }

  // Product: '<S49>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[2] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.P_gain_h;

  // Product: '<S73>/POut' incorporates:
  //   Constant: '<S69>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_bw;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter2'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hq.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hq.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2920.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // Gain: '<S69>/Gain2' incorporates:
    //   Constant: '<S69>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter2'
    //   MATLABSystem: '<S6>/Get Parameter2'
    //   Product: '<S69>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_mj =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_bw *
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_fo;
  }

  // DiscreteIntegrator: '<S73>/Integrator' incorporates:
  //   Product: '<S73>/IOut'

  if (rtb_Compare || (ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_m
                      != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_c;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_gs *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_mj);
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_d;

  // End of DiscreteIntegrator: '<S73>/Integrator'

  // Product: '<S73>/DOut' incorporates:
  //   Constant: '<S69>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = ROPOD_4Wheel_Tdistkinb_cntr_B.t6 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_gl;

  // SampleTimeMath: '<S74>/TSamp' incorporates:
  //   Constant: '<S69>/Constant5'
  //
  //  About '<S74>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_ba *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_gy;

  // Math: '<S74>/Reciprocal' incorporates:
  //   Constant: '<S74>/Constant'
  //   Sum: '<S74>/SumDen'
  //
  //  About '<S74>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.t17 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_gy +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t6);

  // DiscreteTransferFcn: '<S74>/Filter Differentiator TF' incorporates:
  //   Constant: '<S74>/Constant'
  //   Product: '<S74>/Divide'
  //   Sum: '<S74>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gv ==
         POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gv !=
        UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ei =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_bt;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gv =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t18 = ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i -
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 -
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_gy) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ei;

  // Sum: '<S73>/Sum' incorporates:
  //   Constant: '<S69>/Constant5'
  //   DiscreteTransferFcn: '<S74>/Filter Differentiator TF'
  //   Product: '<S74>/DenCoefOut'
  //   Product: '<S74>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t17 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_i[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t18 +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_i[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ei) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_ba +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3);

  // DiscreteIntegrator: '<S75>/Integrator' incorporates:
  //   Constant: '<S70>/Constant2'
  //   Product: '<S75>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_gainval_cd *
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t17 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_i);
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_o;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S6>/Get Parameter7'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_eq.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_eq.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2921.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // Gain: '<S70>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter7'
    //   MATLABSystem: '<S6>/Get Parameter7'

    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_bw *
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Start for MATLABSystem: '<S6>/Get Parameter8'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2922.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // Gain: '<S70>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter8'
    //   MATLABSystem: '<S6>/Get Parameter8'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_a =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_f1 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i;

    // Product: '<S70>/Divide1' incorporates:
    //   Constant: '<S70>/Constant1'
    //   Product: '<S70>/Divide'
    //   Sum: '<S70>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_fc =
      (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_c -
       ROPOD_4Wheel_Tdistkinb_cntr_B.t6 / ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_a)
      * (1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.t6);
  }

  // SampleTimeMath: '<S76>/TSamp' incorporates:
  //   DataTypeConversion: '<S76>/Passthrough for tuning'
  //
  //  About '<S76>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_a *
    ROPOD_4Wheel_Tdistkinb_cntr_P.TSamp_WtEt_oh;

  // Math: '<S76>/Reciprocal' incorporates:
  //   Constant: '<S76>/Constant'
  //   Sum: '<S76>/SumDen'
  //
  //  About '<S76>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_B.t22 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_e5 +
     ROPOD_4Wheel_Tdistkinb_cntr_B.t6);

  // DiscreteTransferFcn: '<S76>/Filter Differentiator TF' incorporates:
  //   Constant: '<S76>/Constant'
  //   Product: '<S75>/DOut'
  //   Product: '<S76>/Divide'
  //   Sum: '<S76>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t26 = ROPOD_4Wheel_Tdistkinb_cntr_B.t17 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Divide1_fc - (ROPOD_4Wheel_Tdistkinb_cntr_B.t6
    - ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_e5) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_p;

  // Sum: '<S75>/Sum' incorporates:
  //   Constant: '<S70>/Constant4'
  //   DataTypeConversion: '<S76>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S76>/Filter Differentiator TF'
  //   Product: '<S75>/POut'
  //   Product: '<S76>/DenCoefOut'
  //   Product: '<S76>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t22 =
    (ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_b[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_B.t26 +
     ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_NumCoe_b[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_p) *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t22 * ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_a +
    (ROPOD_4Wheel_Tdistkinb_cntr_B.t17 *
     ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_ci +
     ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2);

  // Sum: '<S71>/Sum' incorporates:
  //   UnitDelay: '<S71>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t17 = ROPOD_4Wheel_Tdistkinb_cntr_B.t22 +
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_f;

  // Sum: '<S43>/Sum1' incorporates:
  //   Product: '<S53>/Product1'
  //   Product: '<S62>/Product1'
  //   Product: '<S71>/Product1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0] = ROPOD_4Wheel_Tdistkinb_cntr_B.g_c *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t2 + ROPOD_4Wheel_Tdistkinb_cntr_B.Gain_h;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[1] = ROPOD_4Wheel_Tdistkinb_cntr_B.g_n *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10 + ROPOD_4Wheel_Tdistkinb_cntr_B.Gain1_i;
  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[2] = ROPOD_4Wheel_Tdistkinb_cntr_B.g_bl *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17 + ROPOD_4Wheel_Tdistkinb_cntr_B.Gain2_m2;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S8>/Get Parameter2'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_h.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_h.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2215.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.max_current);

    // Gain: '<S44>/Gain3' incorporates:
    //   MATLABSystem: '<S8>/Get Parameter2'
    //   MATLABSystem: '<S8>/Get Parameter2'

    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3_g = 1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;
  }

  // MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal' incorporates:
  //   Constant: '<Root>/Constant'

  memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.K[0], 0, sizeof(int16_T) << 6U);
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.K[ROPOD_4Wheel_Tdistkinb_cntr_B.k +
      (ROPOD_4Wheel_Tdistkinb_cntr_B.k << 3)] = 1;
    if (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_n[ROPOD_4Wheel_Tdistkinb_cntr_B.k]
        == 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.K[ROPOD_4Wheel_Tdistkinb_cntr_B.k +
        (ROPOD_4Wheel_Tdistkinb_cntr_B.k << 3)] = 1000;
    }
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    for (ROPOD_4Wheel_Tdistkinb_cntr_B.i0 = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.i0 <
         8; ROPOD_4Wheel_Tdistkinb_cntr_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.P[ROPOD_4Wheel_Tdistkinb_cntr_B.k +
        (ROPOD_4Wheel_Tdistkinb_cntr_B.i0 << 3)] = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_B.i1 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_B.i1 < 8;
           ROPOD_4Wheel_Tdistkinb_cntr_B.i1++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.P[ROPOD_4Wheel_Tdistkinb_cntr_B.k +
          (ROPOD_4Wheel_Tdistkinb_cntr_B.i0 << 3)] += (real_T)
          (ROPOD_4Wheel_Tdistkinb_cntr_B.K[(ROPOD_4Wheel_Tdistkinb_cntr_B.k << 3)
           + ROPOD_4Wheel_Tdistkinb_cntr_B.i1] *
           ROPOD_4Wheel_Tdistkinb_cntr_B.K[(ROPOD_4Wheel_Tdistkinb_cntr_B.i0 <<
            3) + ROPOD_4Wheel_Tdistkinb_cntr_B.i1]);
      }
    }
  }

  memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.f[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[8] = ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3_g *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3_g * 8.0;
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_B.Linv[0], 0, 81U * sizeof(real_T));
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.Linv[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 9 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.k] = 1.0 / ROPOD_4Wheel_Tdistkinb_cntr_B.P
      [(ROPOD_4Wheel_Tdistkinb_cntr_B.k << 3) + ROPOD_4Wheel_Tdistkinb_cntr_B.k];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.Linv[80] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.dv0[8] = -1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.dv0[17] = 0.0;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.dv0[ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      -ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3_g;
    ROPOD_4Wheel_Tdistkinb_cntr_B.dv0[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 9] =
      -ROPOD_4Wheel_Tdistkinb_cntr_B.Gain3_g;

    // MATLAB Function: '<S44>/Gl_matrices'
    for (ROPOD_4Wheel_Tdistkinb_cntr_B.i0 = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.i0 <
         3; ROPOD_4Wheel_Tdistkinb_cntr_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_tmp =
        ROPOD_4Wheel_Tdistkinb_cntr_B.i0 + 3 * ROPOD_4Wheel_Tdistkinb_cntr_B.k;
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_tmp]
        = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_B.i1 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_B.i1 < 15;
           ROPOD_4Wheel_Tdistkinb_cntr_B.i1++) {
        ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_tmp]
          = ROPOD_4Wheel_Tdistkinb_cntr_B.Gtl[3 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.i1 + ROPOD_4Wheel_Tdistkinb_cntr_B.i0] *
          (real_T)b[15 * ROPOD_4Wheel_Tdistkinb_cntr_B.k +
          ROPOD_4Wheel_Tdistkinb_cntr_B.i1] +
          ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
          ROPOD_4Wheel_Tdistkinb_cntr_B.k + ROPOD_4Wheel_Tdistkinb_cntr_B.i0];
      }
    }
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_m[3 * ROPOD_4Wheel_Tdistkinb_cntr_B.k]
      = ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.k];
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_m[1 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.k + 1];
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_m[2 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.k + 2];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_m[24] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0];
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_m[25] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[1];
  ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_m[26] =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[2];
  ROPOD_4Wheel_Tdistk_mpcqpsolver(ROPOD_4Wheel_Tdistkinb_cntr_B.Linv,
    ROPOD_4Wheel_Tdistkinb_cntr_B.f, ROPOD_4Wheel_Tdistkinb_cntr_B.dv0,
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Gtl_m,
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp, ROPOD_4Wheel_Tdistkinb_cntr_B.x);

  // Switch: '<S19>/Switch1' incorporates:
  //   Constant: '<S19>/Movinf around SW axis center'
  //   Gain: '<S26>/Gain1'
  //   Gain: '<S26>/Gain2'
  //   Gain: '<S26>/Gain3'
  //   MATLAB Function: '<S44>/platform_forces_2_tau_dist_optimal'
  //   Product: '<S100>/Product1'
  //   Product: '<S109>/Product1'
  //   Product: '<S118>/Product1'
  //   Product: '<S127>/Product1'
  //   Product: '<S136>/Product1'
  //   Product: '<S145>/Product1'
  //   Product: '<S154>/Product1'
  //   Product: '<S91>/Product1'
  //   Sum: '<Root>/Add'

  if (rtb_Compare) {
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[0],
           &ROPOD_4Wheel_Tdistkinb_cntr_P.MovinfaroundSWaxiscenter_Value[0],
           sizeof(real_T) << 3U);
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[0] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.g_b *
       ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_o +
       ROPOD_4Wheel_Tdistkinb_cntr_B.x[0]) *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[1] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.g_d * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_b
       + ROPOD_4Wheel_Tdistkinb_cntr_B.x[1]) *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[2] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.g_p * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_l
       + ROPOD_4Wheel_Tdistkinb_cntr_B.x[2]) *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Taucompfactor *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[3] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.g_ay * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_o
       + ROPOD_4Wheel_Tdistkinb_cntr_B.x[3]) *
      ROPOD_4Wheel_Tdistkinb_cntr_P.Taucompfactor *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[4] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.g_j * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_lp
       + ROPOD_4Wheel_Tdistkinb_cntr_B.x[4]) *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[5] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.g_a * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_lh
       + ROPOD_4Wheel_Tdistkinb_cntr_B.x[5]) *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[6] =
      (ROPOD_4Wheel_Tdistkinb_cntr_B.g_l * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_h
       + ROPOD_4Wheel_Tdistkinb_cntr_B.x[6]) *
      ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[7] = (ROPOD_4Wheel_Tdistkinb_cntr_B.g *
      ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_au + ROPOD_4Wheel_Tdistkinb_cntr_B.x[7])
      * ROPOD_4Wheel_Tdistkinb_cntr_P.sw_tau_2_curr;
  }

  // End of Switch: '<S19>/Switch1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Start for MATLABSystem: '<S8>/Get Parameter'
    rtb_LowerRelop1_jr = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bg.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_LowerRelop1_jr = true;
    }

    if (!rtb_LowerRelop1_jr) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bg.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2213.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);

    // DataTypeConversion: '<S21>/Data Type Conversion6' incorporates:
    //   Constant: '<S21>/Constant3'

    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_P.SW_COM1_ENABLE1);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.t6) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_B.t6)) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = fmod(ROPOD_4Wheel_Tdistkinb_cntr_B.t6,
        65536.0);
    }

    // DataTypeConversion: '<S21>/Data Type Conversion4' incorporates:
    //   MATLABSystem: '<S8>/Get Parameter'
    //   MATLABSystem: '<S8>/Get Parameter'

    ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.t31) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_B.t31)) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = fmod(ROPOD_4Wheel_Tdistkinb_cntr_B.t31,
        65536.0);
    }

    // S-Function (sfix_bitop): '<S21>/Bitwise Operator1' incorporates:
    //   DataTypeConversion: '<S21>/Data Type Conversion4'
    //   DataTypeConversion: '<S21>/Data Type Conversion6'

    ROPOD_4Wheel_Tdistkinb_cntr_B.BitwiseOperator1 = (uint16_T)
      ((ROPOD_4Wheel_Tdistkinb_cntr_B.t6 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_Tdistkinb_cntr_B.t6 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_B.t6) & (ROPOD_4Wheel_Tdistkinb_cntr_B.t31 <
        0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_B.t31 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_B.t31));

    // DataTypeConversion: '<S21>/Data Type Conversion7' incorporates:
    //   Constant: '<S21>/Constant4'

    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_P.SW_COM1_ENABLE2);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.t6) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_B.t6)) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = fmod(ROPOD_4Wheel_Tdistkinb_cntr_B.t6,
        65536.0);
    }

    // DataTypeConversion: '<S21>/Data Type Conversion5' incorporates:
    //   Gain: '<S21>/shift'
    //   MATLABSystem: '<S8>/Get Parameter'
    //   MATLABSystem: '<S8>/Get Parameter'

    ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_P.shift_Gain *
       ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.t31) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_B.t31)) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = fmod(ROPOD_4Wheel_Tdistkinb_cntr_B.t31,
        65536.0);
    }

    // S-Function (sfix_bitop): '<S21>/Bitwise Operator2' incorporates:
    //   DataTypeConversion: '<S21>/Data Type Conversion5'
    //   DataTypeConversion: '<S21>/Data Type Conversion7'

    ROPOD_4Wheel_Tdistkinb_cntr_B.BitwiseOperator2 = (uint16_T)
      ((ROPOD_4Wheel_Tdistkinb_cntr_B.t6 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
        (uint16_T)-ROPOD_4Wheel_Tdistkinb_cntr_B.t6 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_B.t6) & (ROPOD_4Wheel_Tdistkinb_cntr_B.t31 <
        0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_B.t31 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_B.t31));

    // Gain: '<S21>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain_Gain_a *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain1_Gain_b *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;
  }

  // Constant: '<S21>/Constant'
  ROPOD_4Wheel_Tdistkinb_cntr_B.command2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_pl;

  // Constant: '<S21>/Constant1'
  ROPOD_4Wheel_Tdistkinb_cntr_B.command2_p =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_bz;

  // Constant: '<S21>/Constant10'
  ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant10_Value;

  // Constant: '<S21>/Constant2'
  ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp_k =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_nc;

  // Constant: '<S21>/Constant6'
  ROPOD_4Wheel_Tdistkinb_cntr_B.command2_pi =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant6_Value;

  // Constant: '<S21>/Constant7'
  ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp_n =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant7_Value;

  // Constant: '<S21>/Constant8'
  ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp_a =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant8_Value;

  // Constant: '<S21>/Constant9'
  ROPOD_4Wheel_Tdistkinb_cntr_B.command2_i =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant9_Value;

  // Switch: '<S19>/Switch' incorporates:
  //   Constant: '<S19>/Constant13'
  //   Constant: '<S19>/Constant5'

  if (rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.SW_COM1_MODE_VELOCITY;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.SW_COM1_MODE_TORQUE;
  }

  // End of Switch: '<S19>/Switch'

  // DataTypeConversion: '<S21>/Data Type Conversion2'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = floor(ROPOD_4Wheel_Tdistkinb_cntr_B.t24);
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.t6) || rtIsInf
      (ROPOD_4Wheel_Tdistkinb_cntr_B.t6)) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = fmod(ROPOD_4Wheel_Tdistkinb_cntr_B.t6,
      65536.0);
  }

  // DataTypeConversion: '<S21>/Data Type Conversion3' incorporates:
  //   Constant: '<S21>/Constant11'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = 0.0 *
    ROPOD_4Wheel_Tdistkinb_cntr_P.SW_COM1_USE_TS;
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_B.t31)) {
    ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = fmod(ROPOD_4Wheel_Tdistkinb_cntr_B.t31,
      65536.0);
  }

  // Gain: '<S21>/Gain10' incorporates:
  //   DataTypeConversion: '<S21>/Data Type Conversion2'
  //   DataTypeConversion: '<S21>/Data Type Conversion3'
  //   S-Function (sfix_bitop): '<S21>/Bitwise Operator'

  ROPOD_4Wheel_Tdistkinb_cntr_B.command1 = (real_T)(uint16_T)((uint16_T)
    ((uint16_T)(ROPOD_4Wheel_Tdistkinb_cntr_B.BitwiseOperator1 |
                ROPOD_4Wheel_Tdistkinb_cntr_B.BitwiseOperator2) | (uint16_T)
     (ROPOD_4Wheel_Tdistkinb_cntr_B.t6 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
      (uint16_T)-ROPOD_4Wheel_Tdistkinb_cntr_B.t6 : (int32_T)(uint16_T)
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6)) | (uint16_T)
    ROPOD_4Wheel_Tdistkinb_cntr_B.t31) * ((real_T)
    ROPOD_4Wheel_Tdistkinb_cntr_P.Gain10_Gain * 3.0517578125E-5);
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S21>/Gain11'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n_o =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain11_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain12'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain12_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain13'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain13_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain15'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n_c =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain15_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain16'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p_i =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain16_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain17'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n_p =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain17_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;
  }

  // Gain: '<S21>/Gain8'
  ROPOD_4Wheel_Tdistkinb_cntr_B.command1_b =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Gain8_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_B.command1;

  // Gain: '<S21>/Gain14'
  ROPOD_4Wheel_Tdistkinb_cntr_B.command1_f =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Gain14_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_B.command1_b;

  // Gain: '<S21>/Gain18'
  ROPOD_4Wheel_Tdistkinb_cntr_B.command1_bn =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Gain18_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_B.command1_f;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S21>/Gain19'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain19_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain2_Gain_l3 *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain20'
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Taucompfactor *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain3'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n_n =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain3_Gain_n *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;

    // Gain: '<S21>/Gain4'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain4_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6;

    // Gain: '<S21>/Gain5'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n_b =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain5_Gain_e *
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6;

    // Gain: '<S21>/Gain6'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p_g =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain6_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6;

    // Gain: '<S21>/Gain7'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain7_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.t6;

    // Gain: '<S21>/Gain9'
    ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p_l =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Gain9_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;
  }

  // Gain: '<S21>/sign_convention'
  ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2 =
    ROPOD_4Wheel_Tdistkinb_cntr_P.sign_convention_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[1];

  // Gain: '<S21>/sign_convention1'
  ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2_g =
    ROPOD_4Wheel_Tdistkinb_cntr_P.sign_convention1_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[3];

  // Gain: '<S21>/sign_convention2'
  ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2_n =
    ROPOD_4Wheel_Tdistkinb_cntr_P.sign_convention2_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[5];

  // Gain: '<S21>/sign_convention3'
  ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2_a =
    ROPOD_4Wheel_Tdistkinb_cntr_P.sign_convention3_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[7];

  // MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0] = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_n / 2.0);

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t32 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant1_Value_n / 2.0);

  // MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant2'

  ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[1] = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_a / 2.0);

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant2'
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
  //   SignalConversion: '<S3>/TmpSignal ConversionAtCoordinate Transformation ConversionInport1'

  ROPOD_4Wheel_Tdistkinb_cntr_B.max_current = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_P.Constant2_Value_a / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t24 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_B.t27 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   Constant: '<S15>/Constant'
  //   Constant: '<S3>/Constant'
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'

  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value;
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Pose.Pose.Position.X =
    ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[0];
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Pose.Pose.Position.Y =
    ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[1];
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Pose.Pose.Position.Z =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant_Value_f2;

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_B.t32 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.max_current;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[1];

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Pose.Pose.Orientation.W =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 * ROPOD_4Wheel_Tdistkinb_cntr_B.t24 -
    ROPOD_4Wheel_Tdistkinb_cntr_B.t31 * ROPOD_4Wheel_Tdistkinb_cntr_B.t27;

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i = ROPOD_4Wheel_Tdistkinb_cntr_B.t32 *
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[1];

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   Constant: '<S3>/Constant3'
  //   Constant: '<S3>/Constant4'
  //   Constant: '<S3>/Constant5'
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Pose.Pose.Orientation.X =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.max_current *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t24 + ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i
    * ROPOD_4Wheel_Tdistkinb_cntr_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Pose.Pose.Orientation.Y =
    -ROPOD_4Wheel_Tdistkinb_cntr_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_B.max_current *
    ROPOD_4Wheel_Tdistkinb_cntr_B.t27 + ROPOD_4Wheel_Tdistkinb_cntr_B.Product1_i
    * ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Pose.Pose.Orientation.Z =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t6 * ROPOD_4Wheel_Tdistkinb_cntr_B.t27 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t31 * ROPOD_4Wheel_Tdistkinb_cntr_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Twist.Twist.Linear.X =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[0];
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Twist.Twist.Linear.Y =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[1];
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Twist.Twist.Linear.Z =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant3_Value;
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Twist.Twist.Angular.X =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant4_Value_i;
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Twist.Twist.Angular.Y =
    ROPOD_4Wheel_Tdistkinb_cntr_P.Constant5_Value_h;
  ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment.Twist.Twist.Angular.Z =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[2];

  // RateTransition: '<S3>/Rate Transition'
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Publish'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    Pub_ROPOD_4Wheel_Tdistkinb_cntr_1896.publish
      (&ROPOD_4Wheel_Tdistkinb_cntr_B.BusAssignment);

    // End of Outputs for SubSystem: '<S3>/Publish'

    // Update for Delay: '<S10>/Enabled Delay'
    if (ROPOD_4Wheel_Tdistkinb_cntr_B.SourceBlock_o1) {
      ROPOD_4Wheel_Tdistkinb_cntr_DW.EnabledDelay_DSTATE =
        ROPOD_4Wheel_Tdistkinb_cntr_B.DigitalClock;
    }

    // End of Update for Delay: '<S10>/Enabled Delay'

    // Update for UnitDelay: '<S33>/Delay Input2'
    //
    //  Block description for '<S33>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2;

    // Update for UnitDelay: '<S34>/Delay Input2'
    //
    //  Block description for '<S34>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_l;

    // Update for UnitDelay: '<S35>/Delay Input2'
    //
    //  Block description for '<S35>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_B.DifferenceInputs2_g;

    // Update for UnitDelay: '<S46>/UD'
    //
    //  Block description for '<S46>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_1;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_TSamp_idx_2;
  }

  // End of RateTransition: '<S3>/Rate Transition'

  // Update for DiscreteIntegrator: '<S93>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_i;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState = (int8_T)rtb_Compare;

  // Update for DiscreteTransferFcn: '<S94>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_l;

  // Update for DiscreteIntegrator: '<S95>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_l =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_h + ROPOD_4Wheel_Tdistkinb_cntr_B.Yk1_k;

  // Update for DiscreteTransferFcn: '<S96>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_l =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_e;

  // Update for UnitDelay: '<S91>/Unit Delay' incorporates:
  //   Product: '<S91>/Product4'
  //   Sum: '<S91>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_a * ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_o
    + ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2_j;

  // Update for DiscreteIntegrator: '<S102>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_f =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime_d;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_d = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S103>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_b =
    ROPOD_4Wheel_Tdistkinb_cntr_B.sampletime;

  // Update for DiscreteIntegrator: '<S104>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_h =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t17_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch2;

  // Update for DiscreteTransferFcn: '<S105>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_o =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch_j;

  // Update for UnitDelay: '<S100>/Unit Delay' incorporates:
  //   Product: '<S100>/Product4'
  //   Sum: '<S100>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_c =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_l * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_b +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1_f;

  // Update for DiscreteIntegrator: '<S111>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_i =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t25_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_c;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_n = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S112>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_m =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pz;

  // Update for DiscreteIntegrator: '<S113>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_hs =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t34_tmp + ROPOD_4Wheel_Tdistkinb_cntr_B.POut_i;

  // Update for DiscreteTransferFcn: '<S114>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_bh =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_c;

  // Update for UnitDelay: '<S109>/Unit Delay' incorporates:
  //   Product: '<S109>/Product4'
  //   Sum: '<S109>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_d =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_d * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_l +
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_m;

  // Update for DiscreteIntegrator: '<S120>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_m =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t15_tmp_g +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_oa;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_e = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S121>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_f =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_h;

  // Update for DiscreteIntegrator: '<S122>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_b =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_k_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_k;

  // Update for DiscreteTransferFcn: '<S123>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_k =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_m;

  // Update for UnitDelay: '<S118>/Unit Delay' incorporates:
  //   Product: '<S118>/Product4'
  //   Sum: '<S118>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_cy =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_m * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_o +
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_i;

  // Update for DiscreteIntegrator: '<S129>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_e =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_fc_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_fc;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_o = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S130>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_d =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_pt;

  // Update for DiscreteIntegrator: '<S131>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_os_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_os;

  // Update for DiscreteTransferFcn: '<S132>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_mj =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_hi;

  // Update for UnitDelay: '<S127>/Unit Delay' incorporates:
  //   Product: '<S127>/Product4'
  //   Sum: '<S127>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_o =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_k * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_lp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_bg;

  // Update for DiscreteIntegrator: '<S138>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mc =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_op_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_op;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_l = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S139>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_e =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_k;

  // Update for DiscreteIntegrator: '<S140>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_n =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_h_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_h;

  // Update for DiscreteTransferFcn: '<S141>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_n =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_f;

  // Update for UnitDelay: '<S136>/Unit Delay' incorporates:
  //   Product: '<S136>/Product4'
  //   Sum: '<S136>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_cd =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_b * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_lh +
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_d;

  // Update for DiscreteIntegrator: '<S147>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c =
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_i_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.Integrator_i;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_p = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S148>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_l0 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_fw;

  // Update for DiscreteIntegrator: '<S149>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_n3 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_le_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_le;

  // Update for DiscreteTransferFcn: '<S150>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_eh =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_hi2;

  // Update for UnitDelay: '<S145>/Unit Delay' incorporates:
  //   Product: '<S145>/Product4'
  //   Sum: '<S145>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_j =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_e * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_h +
    ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_ld;

  // Update for DiscreteIntegrator: '<S156>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_fp =
    ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz +
    ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_f = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S157>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_es =
    ROPOD_4Wheel_Tdistkinb_cntr_B.FilterDifferentiatorTF_tmp_ho;

  // Update for DiscreteIntegrator: '<S158>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_gz =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_POut_io_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.POut_io;

  // Update for DiscreteTransferFcn: '<S159>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_j =
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz;

  // Update for UnitDelay: '<S154>/Unit Delay' incorporates:
  //   Product: '<S154>/Product4'
  //   Sum: '<S154>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_d5 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a * ROPOD_4Wheel_Tdistkinb_cntr_B.DOut_au +
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz;

  // Update for DiscreteIntegrator: '<S55>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mx =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_0 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t4;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_fn = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S56>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ku =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t5;

  // Update for DiscreteIntegrator: '<S57>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_j =
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t7;

  // Update for DiscreteTransferFcn: '<S58>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_j5 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t9;

  // Update for UnitDelay: '<S53>/Unit Delay' incorporates:
  //   Product: '<S53>/Product4'
  //   Sum: '<S53>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_g =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_jp * ROPOD_4Wheel_Tdistkinb_cntr_B.t2 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8;

  // Update for DiscreteIntegrator: '<S64>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c5 =
    ROPOD_4Wheel_Tdistkinb_cntr_B.I_freq_hz_e +
    ROPOD_4Wheel_Tdistkinb_cntr_B.LPF_fhz_n;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_oj = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S65>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_fc =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t11;

  // Update for DiscreteIntegrator: '<S66>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_p =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t30 + ROPOD_4Wheel_Tdistkinb_cntr_B.t14;

  // Update for DiscreteTransferFcn: '<S67>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_dl =
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_pole_fhz_n;

  // Update for UnitDelay: '<S62>/Unit Delay' incorporates:
  //   Product: '<S62>/Product4'
  //   Sum: '<S62>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_gb =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_j * ROPOD_4Wheel_Tdistkinb_cntr_B.t10 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.LL_zero_fhz_m;

  // Update for DiscreteIntegrator: '<S73>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_d =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t8_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_m = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S74>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ei =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t18;

  // Update for DiscreteIntegrator: '<S75>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_o =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t10_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_B.rtb_Switch_idx_2;

  // Update for DiscreteTransferFcn: '<S76>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_p =
    ROPOD_4Wheel_Tdistkinb_cntr_B.t26;

  // Update for UnitDelay: '<S71>/Unit Delay' incorporates:
  //   Product: '<S71>/Product4'
  //   Sum: '<S71>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_f =
    ROPOD_4Wheel_Tdistkinb_cntr_B.a_c * ROPOD_4Wheel_Tdistkinb_cntr_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_B.t22;

  // MATLAB Function: '<S2>/pos_rot_matrix' incorporates:
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'

  ROPOD_4Wheel_Tdistkinb_cntr_B.t6 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[0] = ROPOD_4Wheel_Tdistkinb_cntr_B.t6;
  ROPOD_4Wheel_Tdistkinb_cntr_B.t31 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[3] = -ROPOD_4Wheel_Tdistkinb_cntr_B.t31;
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[6] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[1] = ROPOD_4Wheel_Tdistkinb_cntr_B.t31;
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[4] = ROPOD_4Wheel_Tdistkinb_cntr_B.t6;
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[7] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[5] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_B.f[8] = 1.0;
  for (ROPOD_4Wheel_Tdistkinb_cntr_B.k = 0; ROPOD_4Wheel_Tdistkinb_cntr_B.k < 3;
       ROPOD_4Wheel_Tdistkinb_cntr_B.k++) {
    // Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[ROPOD_4Wheel_Tdistkinb_cntr_B.k]
      += ROPOD_4Wheel_Tdistkinb_cntr_P.DiscreteTimeIntegrator_gainval *
      (ROPOD_4Wheel_Tdistkinb_cntr_B.f[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 6] *
       ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[2] +
       (ROPOD_4Wheel_Tdistkinb_cntr_B.f[ROPOD_4Wheel_Tdistkinb_cntr_B.k + 3] *
        ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[1] +
        ROPOD_4Wheel_Tdistkinb_cntr_B.f[ROPOD_4Wheel_Tdistkinb_cntr_B.k] *
        ROPOD_4Wheel_Tdistkinb_cntr_B.Diff[0]));
  }

  // End of MATLAB Function: '<S2>/pos_rot_matrix'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.t[0] =
    (++ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.clockTick0) *
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.stepSize0;
  if (ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.TaskCounters.TID[2] == 0) {
    // Update absolute timer for sample time: [1.0s, 0.0s]
    // The "clockTick2" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 1.0, which is the step size
    //  of the task. Size of "clockTick2" ensures timer will not overflow during the
    //  application lifespan selected.

    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.clockTick2++;
  }

  rate_scheduler();
}

// Model initialize function
void ROPOD_4Wheel_Tdistkinb_cntr_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)ROPOD_4Wheel_Tdistkinb_cntr_M, 0,
                sizeof(RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_T));
  rtsiSetSolverName(&ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfo,
                    "FixedStepDiscrete");
  ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfoPtr =
    (&ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap =
      ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleTimes =
      (&ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleTimesArray[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.offsetTimes =
      (&ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.offsetTimesArray[0]);

    // task periods
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleTimes[0] = (0.001);
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleTimes[1] = (0.01);
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleTimes[2] = (1.0);

    // task offsets
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.offsetTimes[0] = (0.0);
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.offsetTimes[1] = (0.0);
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_M,
             &ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ROPOD_4Wheel_Tdistkinb_cntr_M, -1);
  ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.stepSize0 = 0.001;
  ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfoPtr =
    (&ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfo);
  ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfo, 0.001);
  rtsiSetSolverMode(&ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  // block I/O
  (void) memset(((void *) &ROPOD_4Wheel_Tdistkinb_cntr_B), 0,
                sizeof(B_ROPOD_4Wheel_Tdistkinb_cntr_T));

  // states (dwork)
  (void) memset((void *)&ROPOD_4Wheel_Tdistkinb_cntr_DW, 0,
                sizeof(DW_ROPOD_4Wheel_Tdistkinb_cntr_T));

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo =
      &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.sfcnInfo;
    ROPOD_4Wheel_Tdistkinb_cntr_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (ROPOD_4Wheel_Tdistkinb_cntr_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_M->Sizes.numSampTimes);
    ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_M)[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_M)[1]);
    ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.taskTimePtrs[2] =
      &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,
                   ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ROPOD_4Wheel_Tdistkinb_cntr_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ROPOD_4Wheel_Tdistkinb_cntr_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (ROPOD_4Wheel_Tdistkinb_cntr_M));
    rtssSetStepSizePtr(sfcnInfo, &ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (ROPOD_4Wheel_Tdistkinb_cntr_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ROPOD_4Wheel_Tdistkinb_cntr_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &ROPOD_4Wheel_Tdistkinb_cntr_M->solverInfoPtr);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_M->Sizes.numSFcns = (5);

  // register each child
  {
    (void) memset((void *)
                  &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  5*sizeof(SimStruct));
    ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions =
      (&ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[i] =
          (&ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr/<S5>/ECAT_Interface (ECAT_Interface) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods2
                           [0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods3
                           [0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods4
                           [0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &ROPOD_4Wheel_Tdistkinb_cntr_B.ECAT_Interface_i));
        }
      }

      // path info
      ssSetModelName(rts, "ECAT_Interface");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/ECAT_Interface");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_P.ECAT_Interface_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_P.ECAT_Interface_P2_Size);
      }

      // work vectors
      ssSetRWork(rts, (real_T *)
                 &ROPOD_4Wheel_Tdistkinb_cntr_DW.ECAT_Interface_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // RWORK
        ssSetDWorkWidth(rts, 0, 13);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &ROPOD_4Wheel_Tdistkinb_cntr_DW.ECAT_Interface_RWORK
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr/<S28>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[1];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods2
                           [1]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods3
                           [1]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods4
                           [1]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command1;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command2;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[0];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p_m;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n_n;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_P.SFunction_P1_Size);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr/<S29>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[2];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods2
                           [2]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods3
                           [2]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods4
                           [2]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command1_b;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command2_pi;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[2];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2_g;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p_m;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n_b;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p_g;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n_m;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_o));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_P.SFunction_P1_Size_a);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr/<S30>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[3];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods2
                           [3]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods3
                           [3]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods4
                           [3]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command1_f;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command2_p;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[4];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2_n;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p_l;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n_o;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_b));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_P.SFunction_P1_Size_b);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr/<S31>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[4];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods2
                           [4]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods3
                           [4]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.methods4
                           [4]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command1_bn;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_B.command2_i;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_B.Switch1[6];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_B.setpoint2_a;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_p_d;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit1_n_c;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_p_i;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_B.limit2_n_p;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_B.timestamp;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_B.SFunction_m));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_P.SFunction_P1_Size_g);
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
    static const char_T tmp[16] = { '/', 'o', 'd', 'o', 'm', '_', 'i', 'n', 'c',
      'o', 'm', 'p', 'l', 'e', 't', 'e' };

    static const char_T tmp_0[20] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'e', 'n', 'a', 'b', 'l', 'e' };

    static const char_T tmp_1[25] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'm', 'a', 'x', '_', 'c', 'u', 'r', 'r', 'e',
      'n', 't' };

    static const char_T tmp_2[31] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_3[31] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_4[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'I',
      '_', 'f', 'h', 'z' };

    static const char_T tmp_5[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'K',
      'g', 'a', 'i', 'n' };

    static const char_T tmp_6[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n', 't', 'r', '/', 'L',
      'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_7[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'L', '_',
      'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_8[29] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'L', '_',
      'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_9[25] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'I', '_', 'f',
      'h', 'z' };

    static const char_T tmp_a[25] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'K', 'g', 'a',
      'i', 'n' };

    static const char_T tmp_b[27] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r', '/', 'L', 'P', 'F',
      '_', 'f', 'h', 'z' };

    static const char_T tmp_c[32] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_d[32] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_e[28] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'I', '_', 'f', 'h', 'z' };

    static const char_T tmp_f[28] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'K', 'g', 'a', 'i', 'n' };

    static const char_T tmp_g[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_h[24] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 't', 'h', 'e', 't',
      'a' };

    static const char_T tmp_i[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_j[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_', 'x', 'y' };

    static const char_T tmp_k[21] = { '/', 'b', 'a', 's', 'e', '_', 'c', 'o',
      'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_', 'x', 'y' };

    static const char_T tmp_l[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '4' };

    static const char_T tmp_m[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '3' };

    static const char_T tmp_n[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '2' };

    static const char_T tmp_o[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w',
      'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't', '_', 'o', 'f', 'f',
      's', '_', 's', 'w', '1' };

    static const char_T tmp_p[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_q[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '4' };

    static const char_T tmp_r[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_s[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '3' };

    static const char_T tmp_t[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_u[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '2' };

    static const char_T tmp_v[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_w[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o', 's', '_', 'S', 'W',
      '1' };

    static const char_T tmp_x[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'd', '_', 'w' };

    static const char_T tmp_y[19] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 's', '_', 'w' };

    static const char_T tmp_z[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '4' };

    static const char_T tmp_10[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '4' };

    static const char_T tmp_11[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '3' };

    static const char_T tmp_12[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '3' };

    static const char_T tmp_13[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '2' };

    static const char_T tmp_14[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '2' };

    static const char_T tmp_15[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'R', '_', 'S', 'W',
      '1' };

    static const char_T tmp_16[24] = { '/', 'b', 'a', 's', 'e', '_', 'k', 'i',
      'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w', 'L', '_', 'S', 'W',
      '1' };

    static const char_T tmp_17[30] = { '/', 'p', 'l', 'a', 't', 'f', 'o', 'r',
      'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c', 'n', 't', 'r', '/',
      'L', 'P', 'F', '_', 'f', 'h', 'z' };

    char_T tmp_18[17];
    char_T tmp_19[9];
    char_T tmp_1a[20];
    int32_T i;

    // Start for S-Function (ECAT_Interface): '<S5>/ECAT_Interface'
    // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for MATLABSystem: '<S6>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ft.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ft.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ft.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv2[i] = tmp_17[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv2[30] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2935.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv2);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2935.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2935.set_initial_value
      (ROPOD_ParameterInitialValue_ics);

    // End of Start for MATLABSystem: '<S6>/Get Parameter14'
    // Start for MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_be.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_be.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_be.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_16[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2173.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2173.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2173.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter'

    // Start for MATLABSystem: '<S7>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_15[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2176.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2176.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2176.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter11'

    // Start for MATLABSystem: '<S7>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fa.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fa.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fa.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_14[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2177.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2177.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2177.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter12'

    // Start for MATLABSystem: '<S7>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_p.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_p.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_13[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2178.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2178.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2178.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter13'

    // Start for MATLABSystem: '<S7>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l1.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l1.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_12[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2179.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2179.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2179.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter14'

    // Start for MATLABSystem: '<S7>/Get Parameter15'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pe.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pe.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pe.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_11[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2180.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2180.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2180.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter15'

    // Start for MATLABSystem: '<S7>/Get Parameter16'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_10[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2181.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2181.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2181.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter16'

    // Start for MATLABSystem: '<S7>/Get Parameter17'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bc.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bc.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bc.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_z[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2182.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2182.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2182.set_initial_value
      (ParameterInitialVal_icsq3sbauzl);

    // End of Start for MATLABSystem: '<S7>/Get Parameter17'

    // Start for MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hv.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hv.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hv.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_1a[i] = tmp_y[i];
    }

    tmp_1a[19] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2174.initialize(tmp_1a);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2174.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2174.set_initial_value
      (ParameterInitialValu_icsq3sbauz);

    // End of Start for MATLABSystem: '<S7>/Get Parameter1'

    // Start for MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_j.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_j.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_1a[i] = tmp_x[i];
    }

    tmp_1a[19] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2183.initialize(tmp_1a);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2183.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2183.set_initial_value
      (ParameterInitialValue_icsq3sbau);

    // End of Start for MATLABSystem: '<S7>/Get Parameter2'

    // Start for MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_w[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2184.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2184.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2184.set_initial_value
      (ParameterInitialValue_icsq3sba);

    // End of Start for MATLABSystem: '<S7>/Get Parameter3'

    // Start for MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_v[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2185.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2185.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2185.set_initial_value
      (ParameterInitialValue_icsq3sba);

    // End of Start for MATLABSystem: '<S7>/Get Parameter4'

    // Start for MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_u[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2186.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2186.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2186.set_initial_value
      (R_ParameterInitialValue_icsq3sb);

    // End of Start for MATLABSystem: '<S7>/Get Parameter5'

    // Start for MATLABSystem: '<S7>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ep.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ep.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ep.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_t[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2187.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2187.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2187.set_initial_value
      (ParameterInitialValue_icsq3sba);

    // End of Start for MATLABSystem: '<S7>/Get Parameter6'

    // Start for MATLABSystem: '<S7>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_lm.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_lm.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_lm.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_s[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2188.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2188.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2188.set_initial_value
      (ParameterInitialValue_icsq3sba);

    // End of Start for MATLABSystem: '<S7>/Get Parameter7'

    // Start for MATLABSystem: '<S7>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ew.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ew.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ew.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_r[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2189.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2189.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2189.set_initial_value
      (R_ParameterInitialValue_icsq3sb);

    // End of Start for MATLABSystem: '<S7>/Get Parameter8'

    // Start for MATLABSystem: '<S7>/Get Parameter9'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_q[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2190.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2190.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2190.set_initial_value
      (R_ParameterInitialValue_icsq3sb);

    // End of Start for MATLABSystem: '<S7>/Get Parameter9'

    // Start for MATLABSystem: '<S7>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b1.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b1.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_p[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2175.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2175.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2175.set_initial_value
      (R_ParameterInitialValue_icsq3sb);

    // End of Start for MATLABSystem: '<S7>/Get Parameter10'

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_k.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_k.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[i] = tmp_o[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2214.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2214.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2214.set_initial_value
      (R_ParameterInitia_j);

    // End of Start for MATLABSystem: '<S8>/Get Parameter1'

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_m.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_m.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[i] = tmp_n[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2216.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2216.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2216.set_initial_value
      (R_ParameterInitia_i);

    // End of Start for MATLABSystem: '<S8>/Get Parameter3'

    // Start for MATLABSystem: '<S8>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i4.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i4.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i4.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[i] = tmp_m[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2217.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2217.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2217.set_initial_value
      (ParameterInitia_icsq3sbauzlauko);

    // End of Start for MATLABSystem: '<S8>/Get Parameter4'

    // Start for MATLABSystem: '<S8>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[i] = tmp_l[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2218.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2218.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2218.set_initial_value
      (ParameterInitial_icsq3sbauzlauk);

    // End of Start for MATLABSystem: '<S8>/Get Parameter5'

    // Start for MATLABSystem: '<S9>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv8[i] = tmp_k[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv8[21] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2237.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2237.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2237.set_initial_value
      (ParameterInitialVa_icsq3sbauzla);

    // End of Start for MATLABSystem: '<S9>/Get Parameter'

    // Start for MATLABSystem: '<S9>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_f.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_f.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv8[i] = tmp_j[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv8[21] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2238.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv8);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2238.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2238.set_initial_value
      (ParameterInitialVa_icsq3sbauzla);

    // End of Start for MATLABSystem: '<S9>/Get Parameter1'

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S17>/SourceBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a1.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_19[i] = tmp_i[i];
    }

    tmp_19[8] = '\x00';
    Sub_ROPOD_4Wheel_Tdistkinb_cntr_1899.createSubscriber(tmp_19,
      ROPOD_4Wheel__MessageQueueLen_i);

    // End of Start for MATLABSystem: '<S17>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'

    // Start for Delay: '<S10>/Enabled Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_B.EnabledDelay = 0.0;

    // Start for MATLABSystem: '<S9>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_n.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_n.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_h[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2239.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2239.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2239.set_initial_value
      (R_ParameterInitia_o);

    // End of Start for MATLABSystem: '<S9>/Get Parameter2'

    // Start for MATLABSystem: '<S9>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[i] = tmp_g[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2240.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2240.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2240.set_initial_value
      (R_ParameterInitia_o);

    // End of Start for MATLABSystem: '<S9>/Get Parameter3'

    // Start for MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pz.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pz.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pz.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[i] = tmp_f[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2931.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2931.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2931.set_initial_value
      (RO_ParameterInitialValue_icsq3s);

    // End of Start for MATLABSystem: '<S6>/Get Parameter10'

    // Start for MATLABSystem: '<S6>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jt.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jt.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jt.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[i] = tmp_e[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2932.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2932.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2932.set_initial_value
      (ROPOD_4_ParameterInitialValue_i);

    // End of Start for MATLABSystem: '<S6>/Get Parameter11'

    // Start for MATLABSystem: '<S6>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_da.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_da.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_da.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv0[i] = tmp_d[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv0[32] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2933.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv0);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2933.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2933.set_initial_value
      (ROP_ParameterInitialValue_icsq3);

    // End of Start for MATLABSystem: '<S6>/Get Parameter12'

    // Start for MATLABSystem: '<S6>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e5.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e5.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e5.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv0[i] = tmp_c[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv0[32] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2934.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv0);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2934.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2934.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter13'

    // Start for MATLABSystem: '<S6>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_c.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_c.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv5[i] = tmp_b[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2903.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2903.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2903.set_initial_value
      (ROPOD_ParameterInitialValue_ics);

    // End of Start for MATLABSystem: '<S6>/Get Parameter6'

    // Start for MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_mn.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_mn.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_mn.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv6[i] = tmp_a[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2716.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2716.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2716.set_initial_value
      (ROPO_ParameterInitialValue_icsq);

    // End of Start for MATLABSystem: '<S6>/Get Parameter'

    // Start for MATLABSystem: '<S6>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d0.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d0.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d0.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv6[i] = tmp_9[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2898.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2898.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2898.set_initial_value
      (ROPOD_4_ParameterInitialValue_i);

    // End of Start for MATLABSystem: '<S6>/Get Parameter3'

    // Start for MATLABSystem: '<S6>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ey.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ey.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ey.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv3[i] = tmp_8[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2900.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2900.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2900.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter4'

    // Start for MATLABSystem: '<S6>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g0.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g0.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g0.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv3[i] = tmp_7[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2902.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2902.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2902.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter5'

    // Start for MATLABSystem: '<S6>/Get Parameter9'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ch.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ch.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ch.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv3[i] = tmp_6[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2923.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2923.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2923.set_initial_value
      (ROPOD_ParameterInitialValue_ics);

    // End of Start for MATLABSystem: '<S6>/Get Parameter9'

    // Start for MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fy.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fy.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fy.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv5[i] = tmp_5[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2919.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2919.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2919.set_initial_value
      (ROPOD__ParameterInitialValue_ic);

    // End of Start for MATLABSystem: '<S6>/Get Parameter1'

    // Start for MATLABSystem: '<S6>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hq.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hq.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hq.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv5[i] = tmp_4[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2920.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2920.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2920.set_initial_value
      (ROPOD_4_ParameterInitialValue_i);

    // End of Start for MATLABSystem: '<S6>/Get Parameter2'

    // Start for MATLABSystem: '<S6>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_eq.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_eq.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_eq.isInitialized = 1;
    for (i = 0; i < 31; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv1[i] = tmp_3[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv1[31] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2921.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv1);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2921.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2921.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter7'

    // Start for MATLABSystem: '<S6>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 31; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv1[i] = tmp_2[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv1[31] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2922.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv1);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2922.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2922.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter8'

    // Start for MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_h.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_h.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv6[i] = tmp_1[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2215.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2215.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2215.set_initial_value
      (ParameterInitialV_icsq3sbauzlau);

    // End of Start for MATLABSystem: '<S8>/Get Parameter2'

    // Start for MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bg.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bg.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bg.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_B.cv9[i] = tmp_0[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_B.cv9[20] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2213.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_B.cv9);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2213.initialize_error_codes(0U, 1U, 2U,
      3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_2213.set_initial_value
      (ParameterInitialVa_icsq3sbauzla);

    // End of Start for MATLABSystem: '<S8>/Get Parameter'

    // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nv.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nv.isInitialized = 1;

    // Start for Atomic SubSystem: '<S3>/Publish'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hy.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hy.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_18[i] = tmp[i];
    }

    tmp_18[16] = '\x00';
    Pub_ROPOD_4Wheel_Tdistkinb_cntr_1896.createPublisher(tmp_18,
      ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S16>/SinkBlock'
    // End of Start for SubSystem: '<S3>/Publish'
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__g =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__k =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__c =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gp =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__e =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gs =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_e2 =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset__l =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_l5 =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_PrevZCX.FilterDifferentiatorTF_Reset_gv =
      UNINITIALIZED_ZCSIG;

    // InitializeConditions for Delay: '<S10>/Enabled Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_P.EnabledDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S33>/Delay Input2'
    //
    //  Block description for '<S33>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DelayInput2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S34>/Delay Input2'
    //
    //  Block description for '<S34>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DelayInput2_InitialCondition_o;

    // InitializeConditions for UnitDelay: '<S35>/Delay Input2'
    //
    //  Block description for '<S35>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.DelayInput2_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DelayInput2_InitialCondition_c;

    // InitializeConditions for DiscreteIntegrator: '<S93>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S94>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_InitialS;

    // InitializeConditions for DiscreteIntegrator: '<S95>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_l =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_b;

    // InitializeConditions for DiscreteTransferFcn: '<S96>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_l =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_p;

    // InitializeConditions for UnitDelay: '<S91>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition;

    // InitializeConditions for DiscreteIntegrator: '<S102>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_m;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_d = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S103>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_b =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_j;

    // InitializeConditions for DiscreteIntegrator: '<S104>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_e;

    // InitializeConditions for DiscreteTransferFcn: '<S105>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_o =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_g;

    // InitializeConditions for UnitDelay: '<S100>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_j;

    // InitializeConditions for DiscreteIntegrator: '<S111>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_i;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_n = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S112>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_o;

    // InitializeConditions for DiscreteIntegrator: '<S113>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_hs =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_n;

    // InitializeConditions for DiscreteTransferFcn: '<S114>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_bh =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_e;

    // InitializeConditions for UnitDelay: '<S109>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_h;

    // InitializeConditions for DiscreteIntegrator: '<S120>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_m =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_ih;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_e = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S121>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_ji;

    // InitializeConditions for DiscreteIntegrator: '<S122>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_b =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_in;

    // InitializeConditions for DiscreteTransferFcn: '<S123>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_k =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_ow;

    // InitializeConditions for UnitDelay: '<S118>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_cy =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_f;

    // InitializeConditions for DiscreteIntegrator: '<S129>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_e =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_j;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_o = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S130>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_h;

    // InitializeConditions for DiscreteIntegrator: '<S131>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_l;

    // InitializeConditions for DiscreteTransferFcn: '<S132>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_mj =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_b;

    // InitializeConditions for UnitDelay: '<S127>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_o =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_fm;

    // InitializeConditions for DiscreteIntegrator: '<S138>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mc =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_nm;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_l = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S139>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_ph;

    // InitializeConditions for DiscreteIntegrator: '<S140>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_n =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_g;

    // InitializeConditions for DiscreteTransferFcn: '<S141>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_n =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_c;

    // InitializeConditions for UnitDelay: '<S136>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_cd =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_b;

    // InitializeConditions for DiscreteIntegrator: '<S147>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_iv;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_p = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S148>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_l0 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_gq;

    // InitializeConditions for DiscreteIntegrator: '<S149>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_n3 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_p;

    // InitializeConditions for DiscreteTransferFcn: '<S150>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_eh =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_f;

    // InitializeConditions for UnitDelay: '<S145>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_j =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_g;

    // InitializeConditions for DiscreteIntegrator: '<S156>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_fp =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_eq;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_f = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S157>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_es =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_l;

    // InitializeConditions for DiscreteIntegrator: '<S158>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_gz =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_m1;

    // InitializeConditions for DiscreteTransferFcn: '<S159>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_j =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_m;

    // InitializeConditions for UnitDelay: '<S154>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_d5 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_bi;

    // InitializeConditions for DiscreteIntegrator: '<S55>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_mx =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_mp;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_fn = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S56>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ku =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_a;

    // InitializeConditions for DiscreteIntegrator: '<S57>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_gw;

    // InitializeConditions for DiscreteTransferFcn: '<S58>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_j5 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_cm;

    // InitializeConditions for UnitDelay: '<S53>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_g =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_p;

    // InitializeConditions for DiscreteIntegrator: '<S64>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_c5 =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_o;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_oj = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S65>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_fc =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_b2;

    // InitializeConditions for DiscreteIntegrator: '<S66>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_f;

    // InitializeConditions for DiscreteTransferFcn: '<S67>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_dl =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initia_k;

    // InitializeConditions for UnitDelay: '<S62>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_gb =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_e;

    // InitializeConditions for DiscreteIntegrator: '<S73>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_c;
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_PrevResetState_m = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S74>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_state_ei =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_bt;

    // InitializeConditions for DiscreteIntegrator: '<S75>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.Integrator_DSTATE_o =
      ROPOD_4Wheel_Tdistkinb_cntr_P.Integrator_IC_l2;

    // InitializeConditions for DiscreteTransferFcn: '<S76>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.FilterDifferentiatorTF_states_p =
      ROPOD_4Wheel_Tdistkinb_cntr_P.FilterDifferentiatorTF_Initi_ox;

    // InitializeConditions for UnitDelay: '<S71>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_DW.UnitDelay_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_P.UnitDelay_InitialCondition_i;

    // InitializeConditions for UnitDelay: '<S46>/UD'
    //
    //  Block description for '<S46>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DiscreteTimeIntegrator_IC;

    // InitializeConditions for UnitDelay: '<S46>/UD'
    //
    //  Block description for '<S46>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DiscreteTimeIntegrator_IC;

    // InitializeConditions for UnitDelay: '<S46>/UD'
    //
    //  Block description for '<S46>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_DW.UD_DSTATE[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    ROPOD_4Wheel_Tdistkinb_cntr_DW.DiscreteTimeIntegrator_DSTATE[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_P.DiscreteTimeIntegrator_IC;

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S17>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1'
    ROPOD_4Wheel_Tdistkinb_cntr_B.In1 = ROPOD_4Wheel_Tdistkinb_cntr_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S17>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'
  }
}

// Model terminate function
void ROPOD_4Wheel_Tdistkinb_cntr_terminate(void)
{
  // Terminate for S-Function (ECAT_Interface): '<S5>/ECAT_Interface'
  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Start for MATLABSystem: '<S6>/Get Parameter14'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ft.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ft.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter14'

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S28>/S-Function'
  // Level2 S-Function Block: '<S28>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S29>/S-Function'
  // Level2 S-Function Block: '<S29>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S30>/S-Function'
  // Level2 S-Function Block: '<S30>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S31>/S-Function'
  // Level2 S-Function Block: '<S31>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  // Start for MATLABSystem: '<S7>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_be.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_be.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter'

  // Start for MATLABSystem: '<S7>/Get Parameter11'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter11'

  // Start for MATLABSystem: '<S7>/Get Parameter12'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fa.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fa.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter12'

  // Start for MATLABSystem: '<S7>/Get Parameter13'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_p.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_p.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter13'

  // Start for MATLABSystem: '<S7>/Get Parameter14'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_l1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter14'

  // Start for MATLABSystem: '<S7>/Get Parameter15'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pe.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pe.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter15'

  // Start for MATLABSystem: '<S7>/Get Parameter16'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter16'

  // Start for MATLABSystem: '<S7>/Get Parameter17'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bc.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bc.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter17'

  // Start for MATLABSystem: '<S7>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hv.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hv.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter1'

  // Start for MATLABSystem: '<S7>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_j.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_j.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter2'

  // Start for MATLABSystem: '<S7>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter3'

  // Start for MATLABSystem: '<S7>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter4'

  // Start for MATLABSystem: '<S7>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter5'

  // Start for MATLABSystem: '<S7>/Get Parameter6'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ep.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ep.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter6'

  // Start for MATLABSystem: '<S7>/Get Parameter7'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_lm.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_lm.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter7'

  // Start for MATLABSystem: '<S7>/Get Parameter8'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ew.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ew.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter8'

  // Start for MATLABSystem: '<S7>/Get Parameter9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter9'

  // Start for MATLABSystem: '<S7>/Get Parameter10'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter10'

  // Start for MATLABSystem: '<S8>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_k.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_k.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter1'

  // Start for MATLABSystem: '<S8>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_m.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_m.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter3'

  // Start for MATLABSystem: '<S8>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i4.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i4.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter4'

  // Start for MATLABSystem: '<S8>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_b.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter5'

  // Start for MATLABSystem: '<S9>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter'

  // Start for MATLABSystem: '<S9>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_f.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_f.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Start for MATLABSystem: '<S17>/SourceBlock'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S17>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe1'

  // Start for MATLABSystem: '<S9>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_n.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter2'

  // Start for MATLABSystem: '<S9>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_i.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter3'

  // Start for MATLABSystem: '<S6>/Get Parameter10'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pz.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_pz.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter10'

  // Start for MATLABSystem: '<S6>/Get Parameter11'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jt.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_jt.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter11'

  // Start for MATLABSystem: '<S6>/Get Parameter12'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_da.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_da.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter12'

  // Start for MATLABSystem: '<S6>/Get Parameter13'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e5.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_e5.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter13'

  // Start for MATLABSystem: '<S6>/Get Parameter6'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_c.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_c.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter6'

  // Start for MATLABSystem: '<S6>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_mn.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_mn.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter'

  // Start for MATLABSystem: '<S6>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d0.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_d0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter3'

  // Start for MATLABSystem: '<S6>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ey.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ey.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter4'

  // Start for MATLABSystem: '<S6>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g0.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_g0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter5'

  // Start for MATLABSystem: '<S6>/Get Parameter9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ch.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_ch.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter9'

  // Start for MATLABSystem: '<S6>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fy.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_fy.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter1'

  // Start for MATLABSystem: '<S6>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hq.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter2'

  // Start for MATLABSystem: '<S6>/Get Parameter7'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_eq.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_eq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter7'

  // Start for MATLABSystem: '<S6>/Get Parameter8'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_a.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter8'

  // Start for MATLABSystem: '<S8>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_h.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_h.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter2'

  // Start for MATLABSystem: '<S8>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bg.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_bg.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter'

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nv.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_nv.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  // Terminate for Atomic SubSystem: '<S3>/Publish'
  // Start for MATLABSystem: '<S16>/SinkBlock'
  if (ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hy.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_DW.obj_hy.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S16>/SinkBlock'
  // End of Terminate for SubSystem: '<S3>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
