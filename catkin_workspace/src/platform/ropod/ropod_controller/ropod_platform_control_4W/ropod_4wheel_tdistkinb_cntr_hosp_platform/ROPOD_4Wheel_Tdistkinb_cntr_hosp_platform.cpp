//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform'.
//
// Model version                  : 1.279
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Tue Sep 18 17:46:33 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform.h"
#include "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_private.h"
#define ParameterInitia_hifyy5qsjpeg2x0 (0.0525)
#define ParameterInitialV_hifyy5qsjpeg2 (0.08)
#define ParameterInitialVa_hifyy5qsjpeg (0.21)
#define ParameterInitialVal_hifyy5qsjpe (-0.21)
#define ParameterInitialValu_hifyy5qsjp (50.0)
#define ParameterInitialValue_hifyy5qs (0.0)
#define ParameterInitialValue_hifyy5qsj (0.05)
#define ParameterInitial_hifyy5qsjpeg2x (0.01)
#define ROPOD_4Wh_ParameterInitialValue (20.0)
#define ROPOD_4Wheel_Td_MessageQueueLen (1)
#define ROPOD_4Wheel__MessageQueueLen_h (5)
#define ROPOD_4_ParameterInitialValue_h (0.3)
#define ROPOD_ParameterInitialValue_hif (100.0)
#define ROPOD__ParameterInitialValue_hi (150.0)
#define ROPO_ParameterInitialValue_hify (0.25)
#define ROP_ParameterInitialValue_hifyy (200.0)
#define RO_ParameterInitialValue_hifyy5 (10.0)
#define R_ParameterInitia_a            (1.0)
#define R_ParameterInitia_g            (2.663)
#define R_ParameterInitia_k            (5.877)
#define R_ParameterInitia_l            (1.6)
#define R_ParameterInitia_m            (3.875)
#define R_ParameterInitia_o            (5.306)
#define R_ParameterInitialValue_hifyy5q (2.0)

// Block signals (auto storage)
B_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B;

// Block states (auto storage)
DW_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW;

// Previous zero-crossings (trigger) states
PrevZCX_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX;

// Real-time model
RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M_;
RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T *const
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M =
  &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M_;

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
static void ROPOD_4Wheel_Tdistkinb_cntr__qr(const real_T A[81], real_T Q[81],
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

  (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1])++;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1]) >
      9) {                             // Sample time: [0.01s, 0.0s]
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] = 0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleHits[1] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
     0);
  (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2])++;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2]) >
      999) {                           // Sample time: [1.0s, 0.0s]
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] = 0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleHits[2] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
     0);
}

//
// Output and update for atomic system:
//    '<S54>/MATLAB Function'
//    '<S64>/MATLAB Function'
//    '<S74>/MATLAB Function'
//    '<S95>/MATLAB Function'
//    '<S105>/MATLAB Function'
//    '<S115>/MATLAB Function'
//    '<S125>/MATLAB Function'
//    '<S135>/MATLAB Function'
//    '<S145>/MATLAB Function'
//    '<S155>/MATLAB Function'
//    '<S165>/MATLAB Function'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_p =
      3.3121686421112381E-170;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_l = fabs(x[k - 1]);
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_l >
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_p) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_j =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_p /
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_l;
        y = y * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_j *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_j + 1.0;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_p =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_l;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_j =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_l /
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_p;
        y += ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_j *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_j;
      }
    }

    y = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_p * sqrt(y);
  }

  return y;
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistkinb__xnrm2_n(int32_T n, const real_T x[9],
  int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_g = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_m = fabs(x[k - 1]);
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_m >
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_g) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_n =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_g /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_m;
      y = y * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_n *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_n + 1.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_g =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_m;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_n =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk_m /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_g;
      y += ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_n *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t_n;
    }
  }

  return ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_g * sqrt(y);
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.roe = *b;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa = fabs(*a);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absb = fabs(*b);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absb) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.roe = *a;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absb;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ads =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.bds =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absb /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale *= sqrt
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ads *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ads +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.bds *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.bds);
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.roe < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale;
    }

    *c = *a / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale;
    *s = *b / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale;
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa >
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absb) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa = *s;
    } else if (*c != 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa = 1.0 / *c;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa = 1.0;
    }
  }

  *a = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale;
  *b = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absa;
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr_svd(const real_T A[27], real_T U[3])
{
  boolean_T apply_transform;
  int32_T qjj;
  int32_T m;
  int32_T kase;
  int32_T d_ii;
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[0], &A[0], 27U *
         sizeof(real_T));
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0], 0, 9U * sizeof
         (real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c[0] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c[2] = 0.0;
  apply_transform = false;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
    ROPOD_4Wheel_Tdistkinb_cn_xnrm2(3,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 1);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[0] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0]) >=
        1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0];
      for (qjj = 0; qjj + 1 < 4; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
      }
    } else {
      for (qjj = 0; qjj + 1 < 4; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[qjj] /=
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0];
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[0]++;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] =
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] = 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q = 1;
  while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1 < 10) {
    qjj = 3 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q;
    if (apply_transform) {
      ROPOD_4Wheel_Tdistkinb_cn_xaxpy(3, -(ROPOD_4Wheel_Tdistkinb_cn_xdotc(3,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 1,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, qjj + 1) /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[0]), 1,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, qjj + 1);
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
      = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[qjj];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q++;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
    ROPOD_4Wheel_Tdistkinb__xnrm2_n(8,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e, 2);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0] =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0]) >=
        1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 1;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
          *= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      }
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 1;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
          /= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1]++;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0] =
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 < 4) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
        = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb__xaxpy_n(2,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq],
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 2,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c, 2);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb_xaxpy_n2(2,
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
        / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1],
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c, 2,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 2);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
    }
  }

  apply_transform = false;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
    ROPOD_4Wheel_Tdistkinb_cn_xnrm2(2,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 5);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[4] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1]) >=
        1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1];
      for (qjj = 4; qjj + 1 < 7; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
      }
    } else {
      for (qjj = 4; qjj + 1 < 7; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[qjj] /=
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1];
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[4]++;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] =
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] = 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q = 2;
  while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1 < 10) {
    qjj = 3 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1;
    if (apply_transform) {
      ROPOD_4Wheel_Tdistkinb_cn_xaxpy(2, -(ROPOD_4Wheel_Tdistkinb_cn_xdotc(2,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 5,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, qjj + 1) /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[4]), 5,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, qjj + 1);
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
      = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[qjj];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q++;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
    ROPOD_4Wheel_Tdistkinb__xnrm2_n(7,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e, 3);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1] =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1]) >=
        1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 2;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
          *= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      }
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 2;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
          /= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2]++;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1] =
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 2;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 < 4) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
        = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 2;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb__xaxpy_n(1,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq],
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 3,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c, 3);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 2;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 < 10) {
      ROPOD_4Wheel_Tdistkinb_xaxpy_n2(1,
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
        / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2],
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_c, 3,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c, 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 3);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
    }
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q = 3;
  while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1 < 10) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
      = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 2];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q++;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
    ROPOD_4Wheel_Tdistkinb__xnrm2_n(6,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e, 4);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[3] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2] =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2]) >=
        1.0020841800044864E-292) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 3;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
          *= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      }
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 3;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq + 1 <= 9) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
          /= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2] =
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2];
  }

  m = 2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[8];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[3] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0];
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0] /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] *=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1];
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1]);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1] /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A_c[8];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2];
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2]);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2] /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2] /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[3] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm * 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[3] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[3] = (rtNaN);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[3] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 0;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0] >
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0]) || rtIsNaN
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0])) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[0];
  }

  if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1] >
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1]) || rtIsNaN
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1])) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[1];
  }

  if (!((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm >
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt) || rtIsNaN
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt))) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
  }

  if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2] >
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest) || rtIsNaN
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2];
  }

  if (!((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm >
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest) || rtIsNaN
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest))) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
  }

  while ((m + 2 > 0) && (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq >= 75)))
  {
    kase = m + 1;
    do {
      exitg1 = 0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q = kase;
      if (kase == 0) {
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[kase - 1]);
        if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt <= (fabs
             (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[kase - 1]) + fabs
             (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[kase])) *
            2.2204460492503131E-16) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[kase - 1] = 0.0;
          exitg1 = 1;
        } else if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt <=
                    1.0020841800044864E-292) ||
                   ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq > 20) &&
                    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt <=
                     2.2204460492503131E-16 *
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.nrm))) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[kase - 1] = 0.0;
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
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = 0.0;
          if (d_ii < m + 2) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt = fabs
              (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[d_ii - 1]);
          }

          if (d_ii > kase + 1) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt += fabs
              (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[d_ii - 2]);
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest = fabs
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[d_ii - 1]);
          if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest <=
               2.2204460492503131E-16 *
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt) ||
              (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest <=
               1.0020841800044864E-292)) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[d_ii - 1] = 0.0;
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
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q = qjj;
      }
    }

    switch (kase) {
     case 1:
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[m];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[m] = 0.0;
      for (qjj = m; qjj + 1 >= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1;
           qjj--) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cn_xrotg
          (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj] =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
        if (qjj + 1 > ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 1] *
            -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 1] *=
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds;
        }
      }
      break;

     case 2:
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q
        - 1];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q
        - 1] = 0.0;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1 <= m + 2) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q];
        ROPOD_4Wheel_Tdistkinb_cn_xrotg
          (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
          = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
          -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
          *= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q++;
      }
      break;

     case 3:
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[0] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[m + 1]);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[1] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[m]);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[2] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[m]);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[3] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]);
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[4] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]);
      qjj = 1;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[0];
      if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[0]))
      {
        kase = 2;
        exitg2 = false;
        while ((!exitg2) && (kase < 6)) {
          qjj = kase;
          if (!rtIsNaN
              (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[kase - 1]))
          {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[kase - 1];
            exitg2 = true;
          } else {
            kase++;
          }
        }
      }

      if (qjj < 5) {
        while (qjj + 1 < 6) {
          if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[qjj] >
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1_p[qjj];
          }

          qjj++;
        }
      }

      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[m + 1] /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[m] /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1 =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[m] /
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
        / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 =
        ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt) *
         (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 -
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt) +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1 *
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1) / 2.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1 *=
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1 *=
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1;
      if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 != 0.0) ||
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1 != 0.0)) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.shift = sqrt
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 *
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 +
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1);
        if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 < 0.0) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.shift =
            -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.shift;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.shift =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.emm1 /
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 +
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.shift);
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.shift = 0.0;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt) *
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds -
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.shift;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
        / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds;
      for (qjj = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1; qjj <= m + 1;
           qjj++) {
        ROPOD_4Wheel_Tdistkinb_cn_xrotg
          (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1);
        if (qjj > ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 2] =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 1] =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds -
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds;
        ROPOD_4Wheel_Tdistkinb_cn_xrotg
          (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds,
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj - 1] =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj] =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj - 1] *
          -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sqds;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.e[m] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      break;

     default:
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
          < 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
          =
          -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q];
      }

      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1;
      while ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q + 1 < 4) &&
             (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
              <
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]))
      {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q]
          =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq]
          = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rt;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.q =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq++;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.qq = 0;
      m--;
      break;
    }
  }

  U[0] = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[0];
  U[1] = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[1];
  U[2] = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.s[2];
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr_abs(const real_T x[9], real_T y[9])
{
  int32_T k;
  for (k = 0; k < 9; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_abs_d(const real_T x[21], real_T y[21])
{
  int32_T k;
  for (k = 0; k < 21; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_d =
        3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x[k - 1]);
        if (absxk > ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_d) {
          t = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_d / absxk;
          y = y * t * t + 1.0;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_d = absxk;
        } else {
          t = absxk / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_d;
          y += t * t;
        }
      }

      y = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.scale_d * sqrt(y);
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.c = 0.0;
      d = (iac + m) - 1;
      for (ia = iac; ia <= d; ia++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.c += A[ia - 1] * x[ix - 1];
        ix++;
      }

      y[iy] += ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.c;
      iy++;
    }
  }
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.temp = y[jy] * alpha1;
        ix = ix0;
        b = m + jA;
        for (ijA = jA; ijA + 1 <= b; ijA++) {
          A[ijA] += A[ix - 1] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.temp;
          ix++;
        }
      }

      jy++;
      jA += 9;
    }
  }
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_c_xgeqrf(real_T A[81], real_T tau[9])
{
  int32_T exitg1;
  boolean_T exitg2;
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_b[0], 0, 9U * sizeof
         (real_T));
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l * 9 +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l;
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l + 1 < 9) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp =
        A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm =
        ROPOD_4Wheel_Tdistkinb_xnrm2_ng(8 -
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l, A,
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i + 2);
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm = rt_hypotd_snf
          (A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i],
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm);
        if (A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i] >= 0.0) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm =
            -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm;
        }

        if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm) <
            1.0020841800044864E-292) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt = 0;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l) + 9;
          do {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt++;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i + 1;
            while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d + 1 <=
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d) {
              A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d] *=
                9.9792015476736E+291;
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d++;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm *=
              9.9792015476736E+291;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp *=
              9.9792015476736E+291;
          } while (!(fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm) >=
                     1.0020841800044864E-292));

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm = rt_hypotd_snf
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp,
             ROPOD_4Wheel_Tdistkinb_xnrm2_ng(8 -
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l, A,
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i + 2));
          if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp >= 0.0) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm =
              -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm -
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp) /
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp = 1.0 /
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp -
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm);
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l) + 9;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i + 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d + 1 <=
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d) {
            A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d] *=
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d = 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d <=
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm *=
              1.0020841800044864E-292;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm;
        } else {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm -
             A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i]) /
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp = 1.0 /
            (A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i] -
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm);
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l) + 9;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i + 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d + 1 <=
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt) {
            A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d] *=
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.xnorm;
        }
      }

      tau[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b;
      A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp =
        A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i];
      A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i] = 1.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt =
        ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l + 1) * 9 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l) + 1;
      if (tau[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l] != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d = 9 -
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d =
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i -
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l) + 8;
        while ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d > 0) &&
               (A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d] == 0.0))
        {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d--;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d--;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d = 8 -
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d
                             > 0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.coltop_l =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d - 1) * 9 +
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia_o =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.coltop_l;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia_o <=
                (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.coltop_l +
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d) - 1) {
              if (A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia_o - 1] != 0.0)
              {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia_o++;
              }
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d = 0;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d = 0;
      }

      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d > 0) {
        ROPOD_4Wheel_Tdistkinb_cn_xgemv
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d, A,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt, A,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i + 1,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_b);
        ROPOD_4Wheel_Tdistkinb_cnt_xger
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv_d,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc_d,
           -tau[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_l],
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i + 1,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work_b, A,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.knt);
      }

      A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i_i] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_atmp;
    } else {
      tau[8] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr__qr(const real_T A[81], real_T Q[81],
  real_T R[81])
{
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[0], &A[0], 81U *
         sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_c_xgeqrf
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A,
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.tau);
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i = 0;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i + 1 <=
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau + 1) {
      R[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau] =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[9 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau + 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i + 1 < 10) {
      R[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau] = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau]
      = 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau = 8;
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i = 8;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i >= 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i--) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i * 9 +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i) + 1;
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i + 1 < 9) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii
        - 1] = 1.0;
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau]
          != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv = 9 -
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc =
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii -
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i) + 7;
        while ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv > 0) &&
               (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc]
                == 0.0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv--;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc--;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc = 8 -
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc >
                             0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.coltop =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc - 1) * 9 +
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.coltop;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia + 9 <=
                (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.coltop +
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv) + 8) {
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia
                  + 8] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ia++;
              }
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv = 0;
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc = 0;
      }

      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv > 0) {
        ROPOD_4Wheel_Tdistkinb_cn_xgemv
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii + 9,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work);
        ROPOD_4Wheel_Tdistkinb_cnt_xger
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc,
           -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau],
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.work,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii + 9);
      }

      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv =
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii -
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i) + 8;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii;
      while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc + 1 <=
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc]
          *=
          -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau];
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastc++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii
      - 1] = 1.0 -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv <=
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d_i) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A
        [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iaii -
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv) - 1] = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lastv++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau--;
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau++) {
    memcpy(&Q[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau * 9],
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.itau
           * 9], 9U * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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
    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3++) {
      RLinv[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 + 9 * (i - 1)] = 0.0;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i = i - 1;
    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i;
      RLinv[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j] = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 < 9;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4++) {
        RLinv[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j] = Ac[(iC[i - 1] +
          21 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4) - 1] * Linv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3] + RLinv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3];
      }
    }
  }

  ROPOD_4Wheel_Tdistkinb_cntr__qr(RLinv,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.QQ,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RR);
  i = 1;
  do {
    exitg1 = 0;
    if (i <= nA) {
      if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RR[((i - 1) * 9 + i)
               - 1]) < 1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (i = 0; i < 9; i++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i = i + 1;
        for (j = 0; j < 9; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j = j + 1;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d0 = 0.0;
          for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d0 += Linv
              [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i - 1) * 9 +
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3] *
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.QQ
              [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j - 1) * 9 +
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.TL[i + 9 * j] =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.d0;
        }
      }

      memset(&RLinv[0], 0, 81U * sizeof(real_T));
      i = nA;
      while (i > 0) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 = i - 1;
        RLinv[(i + 9 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3) - 1] =
          1.0;
        for (j = i; j <= nA; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j = j - 1;
          RLinv[(i + 9 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j) - 1] /=
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RR[((i - 1) * 9 + i) - 1];
        }

        if (i > 1) {
          for (j = 1; j <= ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3; j++)
          {
            for (c_k = i; c_k <= nA; c_k++) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j = c_k - 1;
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 =
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j * 9;
              RLinv[(j + 9 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j) - 1]
                = RLinv[(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 + j) - 1]
                - ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RR
                [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 * 9 + j) - 1] *
                RLinv[(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 + i) - 1];
            }
          }
        }

        i = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3;
      }

      for (i = 0; i < 9; i++) {
        for (j = (int16_T)(i + 1); j < 10; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 = j - 1;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j = i + 9 *
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3;
          H[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j] = 0.0;
          for (c_k = (int16_T)(nA + 1); c_k < 10; c_k++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 = (c_k - 1) * 9;
            H[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j] = H[(j - 1) * 9 + i]
              - ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.TL
              [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 + j) - 1] *
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.TL[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4
              + i];
          }

          H[(j + 9 * i) - 1] = H[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 *
            9 + i];
        }
      }

      for (i = 1; i <= nA; i++) {
        for (j = 0; j < 9; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 = i - 1;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j = j + 9 *
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3;
          D[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j] = 0.0;
          for (c_k = i; c_k <= nA; c_k++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 = (c_k - 1) * 9;
            D[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.j] = RLinv
              [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4 + i) - 1] *
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.TL[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i4
              + j] + D[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i3 * 9 + j];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
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
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g < 27;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g++) {
    cTolComputed = (cTolComputed && ((!rtIsInf
      (Aeq[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g])) && (!rtIsNaN
      (Aeq[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g]))));
  }

  ROPOD_4Wheel_Tdistkinb_cntr_svd(Aeq,
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv2);
  if (cTolComputed) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv2[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk = (rtNaN);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk = fabs
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk);
  if ((!rtIsInf(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk)) && (!rtIsNaN
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk)) &&
      (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk <=
         2.2250738585072014E-308))) {
    frexp(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart);
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Hinv[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g]
        = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp < 9;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Hinv[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g]
          = Linv[9 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp] * Linv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp] +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Hinv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
      }
    }

    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp < 18;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
        + 21 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart] = e[18 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[18 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[19 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart + 1];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[20 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart + 2];
  }

  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b[0], &b[0], 18U *
         sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b[18] = beq[0];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b[19] = beq[1];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b[20] = beq[2];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g = 1;
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 21;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iA[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
      = b_iA[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
      = 0.0;
  }

  memset(&x[0], 0, 9U * sizeof(real_T));
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.r[0], 0, 9U * sizeof
         (real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk = 0.0;
  cTolComputed = false;
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 21;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
      = 1.0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
      = 0;
  }

  nA = 0;
  for (kNext = 0; kNext < 21; kNext++) {
    if (b_iA[kNext] == 1) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = nA + 1;
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 32767;
      }

      nA = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[(int16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart - 1] = (int16_T)
        (kNext + 1);
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[0], 0, 18U * sizeof
           (real_T));
    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
        = f[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart
        + 9] = 0.0;
    }

    DualFeasible = false;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 3 * nA;
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 32767;
    }

    if ((int16_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 50) {
      kNext = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
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
      if ((!DualFeasible) && (nA > 0) &&
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g <= 200)) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0 =
          ROPOD_4Wheel_Tdistki_KWIKfactor
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC, nA, Linv,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RLinv,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.D,
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.H);
        if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0 < 0.0) {
          if (ColdReset) {
            exitg3 = 2;
          } else {
            ROPOD_4Wheel_T_ResetToColdStart
              (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iA,
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC);
            nA = 3;
            ColdReset = true;
          }
        } else {
          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 9 + kNext;
            if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = kNext - 1;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart
              - 1] =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC
              [ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp] - 1];
            for (kDrop = kNext; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = (kDrop + 9 *
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp) - 1;
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                = 0.0;
              for (iSave = 1; iSave <= nA; iSave++) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp = (iSave - 1) *
                  9;
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                  = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RLinv
                  [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp + kDrop) -
                  1] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RLinv
                  [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp + kNext) -
                  1] + ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U[((kNext - 1)
                  * 9 + kDrop) - 1];
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U[(kNext + 9 * (kDrop
                - 1)) - 1] = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U
                [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp * 9 +
                  kDrop) - 1];
            }
          }

          for (kNext = 0; kNext < 9; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = kNext + 1;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal = 0.0;
            for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal +=
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.H[(9 *
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart +
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp) - 1] *
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
            }

            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[kNext] =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 9 + kDrop;
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[kNext] +=
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.D[(kDrop - 1) * 9 +
                kNext] *
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart
                - 1];
            }
          }

          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal = 0.0;
            for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal +=
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.D[(kNext - 1) * 9 +
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart] *
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
            }

            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 9 + kNext;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
              - 1] = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp =
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp =
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i2 = 9 + kDrop;
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i2 > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i2 = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
                - 1] = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U[((kDrop - 1)
                * 9 + kNext) - 1] *
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i2
                - 1] +
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U_tmp
                - 1];
            }
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0 = -1.0E-12;
          kDrop = 0;
          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 9 + kNext;
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC
              [kNext - 1] - 1] =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
              - 1];
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 32767;
            }

            if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
                 - 1] < ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0) &&
                (kNext <= nA - 3)) {
              kDrop = kNext;
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0 =
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart
                - 1];
            }
          }

          if (kDrop <= 0) {
            DualFeasible = true;
            memcpy(&x[0], &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Opt[0],
                   9U * sizeof(real_T));
          } else {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g++;
            if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g > q) {
              ROPOD_4Wheel_T_ResetToColdStart
                (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iA,
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC);
              nA = 3;
              ColdReset = true;
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC
                [kDrop - 1] - 1] = 0.0;
              ROPOD_4Wheel_Tdi_DropConstraint(kDrop,
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iA, &nA,
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[0], 0, 21U *
                 sizeof(real_T));
          ROPOD_4Wheel_Tdis_Unconstrained
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Hinv, f, x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Tdis_Unconstrained
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Hinv, f, x);
    guard1 = true;
  }

  if (guard1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0 =
      ROPOD_4Wheel_Tdistkinb_cnt_norm(x);
    exitg2 = false;
    while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g <= 200))
    {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin = -1.0E-6;
      kNext = 0;
      for (kDrop = 0; kDrop < 18; kDrop++) {
        if (!cTolComputed) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = kDrop + 1;
          for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac_c[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
              = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[(21 *
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart +
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_abs
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac_c,
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow);
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 1;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal =
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[0];
          if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[0])) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 2;
            exitg4 = false;
            while ((!exitg4) &&
                   (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp < 10))
            {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart =
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp;
              if (!rtIsNaN
                  (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
                   - 1])) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal =
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
                  - 1];
                exitg4 = true;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp++;
              }
            }
          }

          if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9) {
            while (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart + 1 < 10)
            {
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                  > ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal =
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++;
            }
          }

          if (!((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cTol[kDrop] >
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal) || rtIsNaN
                (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal))) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cTol[kDrop] =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
          }
        }

        if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iA[kDrop] == 0) {
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = kDrop + 1;
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal = 0.0;
          for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal +=
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[(21 *
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart +
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal =
            (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal -
             ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b[kDrop]) /
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cTol[kDrop];
          if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal <
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin) {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin =
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
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
          if ((kNext > 0) && (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g <=
                              200)) {
            guard2 = false;
            if (nA == 0) {
              for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                  = 0.0;
                for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                    += ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[(21 *
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp +
                    kNext) - 1] *
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Hinv[9 *
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp +
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
                }
              }

              guard2 = true;
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin =
                ROPOD_4Wheel_Tdistki_KWIKfactor
                (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac,
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC, nA, Linv,
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.RLinv,
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.D,
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.H);
              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin <= 0.0) {
                exitg1 = 1;
              } else {
                for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp++)
                  {
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp
                      + 9 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                      = -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.H[9 *
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart +
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp];
                  }
                }

                for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                    = 0.0;
                  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp++)
                  {
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                      += ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[(21 *
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp +
                      kNext) - 1] *
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.U[9 *
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp +
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
                  }
                }

                for (kDrop = 1; kDrop <= nA; kDrop++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal = 0.0;
                  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal +=
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[(21 *
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart +
                      kNext) - 1] *
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.D[(kDrop - 1) *
                      9 + ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
                  }

                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.r[kDrop - 1] =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
                }

                guard2 = true;
              }
            }

            if (guard2) {
              kDrop = 0;
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 3) {
                iSave = 1;
                exitg4 = false;
                while ((!exitg4) && (iSave <= nA - 3)) {
                  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.r[iSave - 1] >=
                      1.0E-12) {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    iSave++;
                  }
                }
              }

              if (!((nA == 3) || ColdReset)) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = nA - 3;
                if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < -32768)
                {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = -32768;
                }

                for (iSave = 1; iSave <= (int16_T)
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart; iSave
                     ++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp = iSave
                    - 1;
                  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.r[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp]
                      > 1.0E-12) {
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal =
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC
                      [ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp] -
                      1] / ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.r[iSave -
                      1];
                    if ((kDrop == 0) ||
                        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal <
                         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk)) {
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk =
                        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
                      kDrop = iSave;
                    }
                  }
                }

                if (kDrop > 0) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.absxk;
                  DualFeasible = false;
                }
              }

              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal = 0.0;
              for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal +=
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[(21 *
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart + kNext) -
                  1] *
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
              }

              if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal <= 0.0) {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal = 0.0;
                ColdReset = true;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t = 0.0;
                for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t +=
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Ac[(21 *
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart + kNext)
                    - 1] * x[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
                }

                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal =
                  (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b[kNext - 1] -
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t) /
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin;
                } else if (DualFeasible) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
                } else if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin <
                            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal) ||
                           rtIsNaN
                           (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal)) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin;
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal;
                }

                for (iSave = 1; iSave <= nA; iSave++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = iSave -
                    1;
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                    - 1;
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp]
                    -=
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.r[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t;
                  if ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[iSave - 1]
                       <= 18) &&
                      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC
                       [iSave - 1] - 1] < 0.0)) {
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp]
                      = 0.0;
                  }
                }

                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.lam[kNext - 1] +=
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t;
                if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t ==
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin) {
                  ROPOD_4Wheel_Tdi_DropConstraint(kDrop,
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iA, &nA,
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC);
                }

                if (!ColdReset) {
                  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                    x[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart] +=
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t *
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
                  }

                  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t ==
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cVal) {
                    if (nA == 9) {
                      exitg1 = 1;
                    } else {
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = nA +
                        1;
                      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart >
                          32767) {
                        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart =
                          32767;
                      }

                      nA = (int16_T)
                        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[(int16_T)
                        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart - 1]
                        = kNext;
                      kDrop = (int16_T)
                        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
                      exitg4 = false;
                      while ((!exitg4) && (kDrop > 1)) {
                        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart =
                          kDrop - 1;
                        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp =
                          kDrop - 2;
                        if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                            >
                            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp])
                        {
                          exitg4 = true;
                        } else {
                          iSave =
                            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[kDrop
                            - 1];
                          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                            =
                            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[kDrop
                            - 2];
                          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.kDrop_tmp]
                            = iSave;
                          kDrop = (int16_T)
                            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart;
                        }
                      }

                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.iA[kNext - 1] =
                        1;
                      kNext = 0;
                      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g++;
                    }
                  } else {
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g++;
                  }
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k_g++;
                }
              }
            }
          } else {
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin =
              ROPOD_4Wheel_Tdistkinb_cnt_norm(x);
            if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin -
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0) > 0.001)
            {
              ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Xnorm0 =
                ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cMin;
              ROPOD_4Wheel_Tdistkinb_cn_abs_d
                (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_b,
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1);
              for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart < 21;
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart++) {
                if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                    > 1.0) {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
                    =
                    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.varargin_1[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart];
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ixstart]
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
void ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_step(void)
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
  boolean_T rtb_LowerRelop1;
  boolean_T rtb_NotEqual_l2;
  int8_T t2;

  // S-Function (ECAT_Interface): '<S5>/ECAT_Interface'

  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  // RelationalOperator: '<S1>/Compare' incorporates:
  //   Constant: '<S1>/Constant'
  //   DigitalClock: '<Root>/Digital Clock'

  rtb_Compare = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.t[0] <
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tinit);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter14'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ft.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ft.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2935.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz);

    // MATLAB Function: '<S95>/MATLAB Function' incorporates:
    //   Constant: '<S95>/Constant'
    //   Gain: '<S84>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter14'
    //   MATLABSystem: '<S6>/Get Parameter14'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_i,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_b,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_a);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S29>/S-Function'

  // Level2 S-Function Block: '<S29>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S30>/S-Function'

  // Level2 S-Function Block: '<S30>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S31>/S-Function'

  // Level2 S-Function Block: '<S31>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'

  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S20>/Switch2' incorporates:
  //   Constant: '<S20>/Constant2'
  //   Gain: '<S20>/sign convention'
  //   Gain: '<S20>/sign convention1'
  //   Gain: '<S20>/sign convention2'
  //   Gain: '<S20>/sign convention3'

  if (rtb_Compare) {
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[0],
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value[0],
           sizeof(real_T) << 3U);
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction[5];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.signconvention_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction[17];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_o[5];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[3] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.signconvention1_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_o[17];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[4] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_b[5];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[5] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.signconvention2_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_b[17];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[6] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_m[5];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[7] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.signconvention3_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_m[17];
  }

  // End of Switch: '<S20>/Switch2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S7>/Get Parameter'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_be.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_be.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2173.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter11'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2176.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter11_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter12'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fa.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fa.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2177.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter12_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter13'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_p.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_p.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2178.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter13_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter14'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l1.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l1.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2179.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter14_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter15'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pe.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pe.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2180.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter15'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter15_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter16'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2181.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter16'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter16_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter17'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bc.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bc.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2182.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter17'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter17_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter1'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hv.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hv.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2174.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter2'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_j.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_j.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2183.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter3'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2184.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter4'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2185.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter5'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2186.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S7>/Get Parameter6'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ep.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ep.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2187.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // MATLABSystem: '<S7>/Get Parameter7'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_lm.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_lm.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2188.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // End of MATLABSystem: '<S7>/Get Parameter7'

    // Start for MATLABSystem: '<S7>/Get Parameter8'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ew.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ew.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2189.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // MATLABSystem: '<S7>/Get Parameter9'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2190.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // End of MATLABSystem: '<S7>/Get Parameter9'

    // Start for MATLABSystem: '<S7>/Get Parameter10'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b1.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b1.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2175.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S7>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_k.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_k.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2214.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2216.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter4'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i4.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i4.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2217.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S8>/Get Parameter5'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2218.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S8>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw4 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;
  }

  // Switch: '<S20>/Switch' incorporates:
  //   Constant: '<S20>/Constant'
  //   Sum: '<S20>/Add'

  if (rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_l[0];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_l[1];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_l[2];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_l[3];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw1;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_o[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw2;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_b[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw3;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_m[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.pivot_offs_sw4;
  }

  // End of Switch: '<S20>/Switch'

  // MATLAB Function: '<S43>/Gl_matrix' incorporates:
  //   MATLAB Function: '<S2>/Jqwl_matrix'
  //   MATLAB Function: '<S45>/Gl_matrices'
  //   SignalConversion: '<S46>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t14_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter11_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t14_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter12_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter13_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_a =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter14_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter15_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_et =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter16_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_l =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_d =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter17_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_l * 0.5;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S9>/Get Parameter'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2237.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_xy =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // SampleTimeMath: '<S34>/sample time'
    //
    //  About '<S34>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sampletime_WtEt;

    // Product: '<S34>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S34>/sample time'
    //
    //  About '<S34>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_xy *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sampletime_WtEt;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S9>/Get Parameter1'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_f.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_f.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2238.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_xy =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // DigitalClock: '<S10>/Digital Clock'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DigitalClock =
      ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.clockTick2) * 1.0);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S17>/SourceBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SourceBlock_o1 =
      Sub_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_1899.getLatestMessage
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S17>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S18>/Enable'

    // Delay: '<S10>/Enabled Delay' incorporates:
    //   Inport: '<S18>/In1'
    //   MATLABSystem: '<S17>/SourceBlock'
    //   MATLABSystem: '<S17>/SourceBlock'

    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SourceBlock_o1) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.In1 =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.b_varargout_2;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.EnabledDelay =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.EnabledDelay_DSTATE;
    }

    // End of Delay: '<S10>/Enabled Delay'
    // End of Outputs for SubSystem: '<S17>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'

    // Gain: '<S10>/Gain6' incorporates:
    //   Constant: '<S33>/Constant'
    //   RelationalOperator: '<S33>/Compare'
    //   Sum: '<S10>/Subtract'

    rtb_Gain6 = (uint8_T)
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DigitalClock -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.EnabledDelay >=
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.CompareToConstant_const ?
       (int32_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain6_Gain_b : 0);

    // Switch: '<S10>/Switch' incorporates:
    //   Constant: '<S10>/Constant'

    if (rtb_Gain6 > ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Switch_Threshold)
    {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_g;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.In1.Linear.X;
    }

    // End of Switch: '<S10>/Switch'

    // RelationalOperator: '<S37>/LowerRelop1'
    rtb_LowerRelop1 = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j >
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_xy);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S10>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_xy;

    // Gain: '<S10>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_xy;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // UnitDelay: '<S34>/Delay Input2'
    //
    //  Block description for '<S34>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE;

    // Switch: '<S37>/Switch2' incorporates:
    //   RelationalOperator: '<S37>/UpperRelop'
    //   Switch: '<S37>/Switch'

    if (rtb_LowerRelop1) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_xy;
    } else {
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j <
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1) {
        // Switch: '<S37>/Switch'
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1;
      }
    }

    // End of Switch: '<S37>/Switch2'

    // Sum: '<S34>/Difference Inputs1'
    //
    //  Block description for '<S34>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1;

    // RelationalOperator: '<S40>/LowerRelop1'
    rtb_NotEqual_l2 = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2 >
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e);

    // Switch: '<S40>/Switch2'
    if (!rtb_NotEqual_l2) {
      // Product: '<S34>/delta fall limit'
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime;

      // Switch: '<S40>/Switch' incorporates:
      //   RelationalOperator: '<S40>/UpperRelop'

      if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2 <
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e)) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2;
      }

      // End of Switch: '<S40>/Switch'
    }

    // End of Switch: '<S40>/Switch2'

    // Sum: '<S34>/Difference Inputs2'
    //
    //  Block description for '<S34>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1;

    // SampleTimeMath: '<S35>/sample time'
    //
    //  About '<S35>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sampletime_WtEt_j;

    // Product: '<S35>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S35>/sample time'
    //
    //  About '<S35>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_xy *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sampletime_WtEt_j;

    // Switch: '<S10>/Switch1' incorporates:
    //   Constant: '<S10>/Constant1'

    if (rtb_Gain6 >
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Switch1_Threshold) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.In1.Linear.Y;
    }

    // End of Switch: '<S10>/Switch1'

    // RelationalOperator: '<S38>/LowerRelop1'
    rtb_LowerRelop1_i = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f >
                         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_xy);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S10>/Gain3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain3_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_xy;

    // Gain: '<S10>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_xy;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // UnitDelay: '<S35>/Delay Input2'
    //
    //  Block description for '<S35>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_k =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE_f;

    // Switch: '<S38>/Switch2' incorporates:
    //   RelationalOperator: '<S38>/UpperRelop'
    //   Switch: '<S38>/Switch'

    if (rtb_LowerRelop1_i) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_xy;
    } else {
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f <
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3) {
        // Switch: '<S38>/Switch'
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3;
      }
    }

    // End of Switch: '<S38>/Switch2'

    // Sum: '<S35>/Difference Inputs1'
    //
    //  Block description for '<S35>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_k;

    // RelationalOperator: '<S41>/LowerRelop1'
    rtb_NotEqual_l2 = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o >
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e);

    // Switch: '<S41>/Switch2'
    if (!rtb_NotEqual_l2) {
      // Product: '<S35>/delta fall limit'
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d;

      // Switch: '<S41>/Switch' incorporates:
      //   RelationalOperator: '<S41>/UpperRelop'

      if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o <
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e)) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o;
      }

      // End of Switch: '<S41>/Switch'
    }

    // End of Switch: '<S41>/Switch2'

    // Sum: '<S35>/Difference Inputs2'
    //
    //  Block description for '<S35>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_l =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_k;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S9>/Get Parameter2'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_n.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_n.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2239.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_theta =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // SampleTimeMath: '<S36>/sample time'
    //
    //  About '<S36>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sampletime_WtEt_b;

    // Product: '<S36>/delta rise limit' incorporates:
    //   SampleTimeMath: '<S36>/sample time'
    //
    //  About '<S36>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_theta *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sampletime_WtEt_b;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S9>/Get Parameter3'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2240.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S9>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_theta =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // Switch: '<S10>/Switch2' incorporates:
    //   Constant: '<S10>/Constant2'

    if (rtb_Gain6 >
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Switch2_Threshold) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_h;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.In1.Angular.Z;
    }

    // End of Switch: '<S10>/Switch2'

    // RelationalOperator: '<S39>/LowerRelop1'
    rtb_LowerRelop1_lp = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j >
                          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_theta);
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S10>/Gain5'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain5 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain5_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_theta;

    // Gain: '<S10>/Gain4'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain4 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain4_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_acc_theta;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // UnitDelay: '<S36>/Delay Input2'
    //
    //  Block description for '<S36>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_h =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE_k;

    // Switch: '<S39>/Switch2' incorporates:
    //   RelationalOperator: '<S39>/UpperRelop'
    //   Switch: '<S39>/Switch'

    if (rtb_LowerRelop1_lp) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_vel_theta;
    } else {
      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j <
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain5) {
        // Switch: '<S39>/Switch'
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain5;
      }
    }

    // End of Switch: '<S39>/Switch2'

    // Sum: '<S36>/Difference Inputs1'
    //
    //  Block description for '<S36>/Difference Inputs1':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_l =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_h;

    // RelationalOperator: '<S42>/LowerRelop1'
    rtb_LowerRelop1_lp = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_l >
                          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e);

    // Switch: '<S42>/Switch2'
    if (!rtb_LowerRelop1_lp) {
      // Product: '<S36>/delta fall limit'
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i *=
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain4;

      // Switch: '<S42>/Switch' incorporates:
      //   RelationalOperator: '<S42>/UpperRelop'

      if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_l <
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_l;
      }

      // End of Switch: '<S42>/Switch'
    }

    // End of Switch: '<S42>/Switch2'

    // Sum: '<S36>/Difference Inputs2'
    //
    //  Block description for '<S36>/Difference Inputs2':
    //
    //   Add in CPU

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_g =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_h;
  }

  // SignalConversion: '<S43>/TmpSignal ConversionAtProduct3Inport2'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_l;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_g;

  // MATLAB Function: '<S43>/Gl_matrix' incorporates:
  //   SignalConversion: '<S46>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[0] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[3] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[4] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[5] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[6] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[7] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[8] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[9] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_n) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[10] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_n) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[11] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[12] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[13] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_d) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[14] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_d) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[15] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[16] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[17] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[18] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[19] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[20] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[21] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[23] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[24] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[25] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[26] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[27] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[28] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[29] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[30] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[31] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[32] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[33] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t14_tmp - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[34] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[35] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30_tmp - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[36] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_l - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[37] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e) -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[38] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e) +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[39] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_a +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30) -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[40] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_a
      + ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30) +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[41] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_et +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34_tmp) -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[42] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_et +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34_tmp) +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[43] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_h)
     - ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[44] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_h)
     + ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40;

  // Product: '<S43>/Product3' incorporates:
  //   SignalConversion: '<S43>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S12>/Sum'

  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 15;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv1[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
      + 30] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_g +
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
       + 15] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_l +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
       * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2);
  }

  // End of Product: '<S43>/Product3'

  // Product: '<S83>/Product9' incorporates:
  //   Constant: '<Root>/Constant'
  //   Sum: '<S12>/Sum'

  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
      = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv1[7 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] -
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k])
      * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_n[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k];
  }

  // End of Product: '<S83>/Product9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter10'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pz.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pz.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2931.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;
  }

  // Product: '<S84>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S97>/POut' incorporates:
  //   Constant: '<S93>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value;

  // SampleTimeMath: '<S99>/TSamp' incorporates:
  //   Constant: '<S93>/Constant5'
  //
  //  About '<S99>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt;

  // Math: '<S99>/Reciprocal' incorporates:
  //   Constant: '<S99>/Constant'
  //   Sum: '<S99>/SumDen'
  //
  //  About '<S99>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_nr +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S99>/Filter Differentiator TF' incorporates:
  //   Constant: '<S93>/Constant'
  //   Constant: '<S99>/Constant'
  //   Product: '<S97>/DOut'
  //   Product: '<S99>/Divide'
  //   Sum: '<S99>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_ZC
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_ZC
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_InitialS;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_ZC
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_o -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_nr) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states;

  // Product: '<S99>/NOut' incorporates:
  //   Constant: '<S93>/Constant5'
  //   DiscreteTransferFcn: '<S99>/Filter Differentiator TF'
  //   Product: '<S99>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoef
     [0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_h +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoef
     [1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value;

  // Sum: '<S97>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i;

  // Gain: '<S98>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;

  // DeadZone: '<S98>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S98>/DeadZone'

  // RelationalOperator: '<S98>/NotEqual'
  rtb_LowerRelop1 = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e !=
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // Signum: '<S98>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = (rtNaN);
  }

  // End of Signum: '<S98>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter11'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jt.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jt.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2932.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz);

    // Gain: '<S93>/Gain2' incorporates:
    //   Constant: '<S93>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter11'
    //   MATLABSystem: '<S6>/Get Parameter11'
    //   Product: '<S93>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_c =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_i;
  }

  // Product: '<S97>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_c;

  // Signum: '<S98>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    // DataTypeConversion: '<S98>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    // DataTypeConversion: '<S98>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    // DataTypeConversion: '<S98>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S98>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S98>/SignPreIntegrator'

  // DataTypeConversion: '<S98>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S98>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S98>/DataTypeConv1'

  // Switch: '<S97>/Switch' incorporates:
  //   Constant: '<S97>/Constant'
  //   DataTypeConversion: '<S98>/DataTypeConv2'
  //   Logic: '<S98>/AND'
  //   RelationalOperator: '<S98>/Equal'

  if (rtb_LowerRelop1 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_j;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  }

  // End of Switch: '<S97>/Switch'

  // DiscreteIntegrator: '<S97>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState !=
       0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_l =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE;

  // End of DiscreteIntegrator: '<S97>/Integrator'

  // Sum: '<S97>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_l) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i;

  // Saturate: '<S97>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S97>/Saturate'

  // Product: '<S100>/POut' incorporates:
  //   Constant: '<S94>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_k;

  // DiscreteIntegrator: '<S100>/Integrator' incorporates:
  //   Constant: '<S94>/Constant2'
  //   Product: '<S100>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_k =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_i *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_m);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_k +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_l;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter12'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_da.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_da.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2933.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz);

    // Gain: '<S94>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter12'
    //   MATLABSystem: '<S6>/Get Parameter12'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_f *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Start for MATLABSystem: '<S6>/Get Parameter13'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e5.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e5.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2934.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz);

    // Gain: '<S94>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter13'
    //   MATLABSystem: '<S6>/Get Parameter13'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_m =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_c *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S94>/Divide1' incorporates:
    //   Constant: '<S94>/Constant1'
    //   Product: '<S94>/Divide'
    //   Sum: '<S94>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1 =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_d -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_m) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S100>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1;

  // SampleTimeMath: '<S101>/TSamp' incorporates:
  //   DataTypeConversion: '<S101>/Passthrough for tuning'
  //
  //  About '<S101>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_m *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_n;

  // Math: '<S101>/Reciprocal' incorporates:
  //   Constant: '<S101>/Constant'
  //   Sum: '<S101>/SumDen'
  //
  //  About '<S101>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_b +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S101>/Filter Differentiator TF' incorporates:
  //   Constant: '<S101>/Constant'
  //   Product: '<S101>/Divide'
  //   Sum: '<S101>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_b) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_l;

  // Sum: '<S100>/Sum' incorporates:
  //   DataTypeConversion: '<S101>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S101>/Filter Differentiator TF'
  //   Product: '<S101>/DenCoefOut'
  //   Product: '<S101>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_a[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_a[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_l)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_m +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j);

  // Sum: '<S95>/Sum' incorporates:
  //   UnitDelay: '<S95>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S105>/MATLAB Function' incorporates:
    //   Constant: '<S105>/Constant'
    //   Gain: '<S85>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_a *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_m,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_n,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_k);
  }

  // Product: '<S85>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[1] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S107>/POut' incorporates:
  //   Constant: '<S103>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_c;

  // SampleTimeMath: '<S109>/TSamp' incorporates:
  //   Constant: '<S103>/Constant5'
  //
  //  About '<S109>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_j *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_a;

  // Math: '<S109>/Reciprocal' incorporates:
  //   Constant: '<S109>/Constant'
  //   Sum: '<S109>/SumDen'
  //
  //  About '<S109>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gk +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S109>/Filter Differentiator TF' incorporates:
  //   Constant: '<S103>/Constant'
  //   Constant: '<S109>/Constant'
  //   Product: '<S107>/DOut'
  //   Product: '<S109>/Divide'
  //   Sum: '<S109>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__i
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__i
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_f
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_f;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__i
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_c -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gk) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_f;

  // Product: '<S109>/NOut' incorporates:
  //   Constant: '<S103>/Constant5'
  //   DiscreteTransferFcn: '<S109>/Filter Differentiator TF'
  //   Product: '<S109>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_c[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_c[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_f)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_j;

  // Sum: '<S107>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_b) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d;

  // Gain: '<S108>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_m *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S108>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S108>/DeadZone'

  // RelationalOperator: '<S108>/NotEqual'
  rtb_NotEqual_l2 = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime !=
                     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S108>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S108>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S103>/Gain2' incorporates:
    //   Constant: '<S103>/Constant4'
    //   Product: '<S103>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_f =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_c *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_i2;
  }

  // Product: '<S107>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_f;

  // Signum: '<S108>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S108>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S108>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S108>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S108>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S108>/SignPreIntegrator'

  // DataTypeConversion: '<S108>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S108>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S108>/DataTypeConv1'

  // Switch: '<S107>/Switch' incorporates:
  //   Constant: '<S107>/Constant'
  //   DataTypeConversion: '<S108>/DataTypeConv2'
  //   Logic: '<S108>/AND'
  //   RelationalOperator: '<S108>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_k;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S107>/Switch'

  // DiscreteIntegrator: '<S107>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_b
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_b =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_bi;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t14_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_a *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t14_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_b;

  // End of DiscreteIntegrator: '<S107>/Integrator'

  // Sum: '<S107>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d;

  // Saturate: '<S107>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S107>/Saturate'

  // Product: '<S110>/POut' incorporates:
  //   Constant: '<S104>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_d;

  // DiscreteIntegrator: '<S110>/Integrator' incorporates:
  //   Constant: '<S104>/Constant2'
  //   Product: '<S110>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_c);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_f;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S104>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_h *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Gain: '<S104>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_g =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_i *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S104>/Divide1' incorporates:
    //   Constant: '<S104>/Constant1'
    //   Product: '<S104>/Divide'
    //   Sum: '<S104>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_h =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_i -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_g) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S110>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_h;

  // SampleTimeMath: '<S111>/TSamp' incorporates:
  //   DataTypeConversion: '<S111>/Passthrough for tuning'
  //
  //  About '<S111>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_g *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_c;

  // Math: '<S111>/Reciprocal' incorporates:
  //   Constant: '<S111>/Constant'
  //   Sum: '<S111>/SumDen'
  //
  //  About '<S111>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_lu +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S111>/Filter Differentiator TF' incorporates:
  //   Constant: '<S111>/Constant'
  //   Product: '<S111>/Divide'
  //   Sum: '<S111>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_lu) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_o;

  // Sum: '<S110>/Sum' incorporates:
  //   DataTypeConversion: '<S111>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S111>/Filter Differentiator TF'
  //   Product: '<S111>/DenCoefOut'
  //   Product: '<S111>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_i[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_i[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_o)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_g +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f);

  // Sum: '<S105>/Sum' incorporates:
  //   UnitDelay: '<S105>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_d;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S115>/MATLAB Function' incorporates:
    //   Constant: '<S115>/Constant'
    //   Gain: '<S86>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_m *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_eq,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_l,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_c);
  }

  // Product: '<S86>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[2] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S117>/POut' incorporates:
  //   Constant: '<S113>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_a;

  // SampleTimeMath: '<S119>/TSamp' incorporates:
  //   Constant: '<S113>/Constant5'
  //
  //  About '<S119>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_l *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_j;

  // Math: '<S119>/Reciprocal' incorporates:
  //   Constant: '<S119>/Constant'
  //   Sum: '<S119>/SumDen'
  //
  //  About '<S119>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ed +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S119>/Filter Differentiator TF' incorporates:
  //   Constant: '<S113>/Constant'
  //   Constant: '<S119>/Constant'
  //   Product: '<S117>/DOut'
  //   Product: '<S119>/Divide'
  //   Sum: '<S119>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__c
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__c
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_k
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_db;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__c
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_a =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_oz -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ed) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_k;

  // Product: '<S119>/NOut' incorporates:
  //   Constant: '<S113>/Constant5'
  //   DiscreteTransferFcn: '<S119>/Filter Differentiator TF'
  //   Product: '<S119>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_c1[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_a +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_c1[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_k)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_l;

  // Sum: '<S117>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_o) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h;

  // Gain: '<S118>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_n *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S118>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S118>/DeadZone'

  // RelationalOperator: '<S118>/NotEqual'
  rtb_NotEqual_l2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S118>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S118>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S113>/Gain2' incorporates:
    //   Constant: '<S113>/Constant4'
    //   Product: '<S113>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_n =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_a *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_e;
  }

  // Product: '<S117>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_n;

  // Signum: '<S118>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S118>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S118>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S118>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S118>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S118>/SignPreIntegrator'

  // DataTypeConversion: '<S118>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S118>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S118>/DataTypeConv1'

  // Switch: '<S117>/Switch' incorporates:
  //   Constant: '<S117>/Constant'
  //   DataTypeConversion: '<S118>/DataTypeConv2'
  //   Logic: '<S118>/AND'
  //   RelationalOperator: '<S118>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gw;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S117>/Switch'

  // DiscreteIntegrator: '<S117>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_d
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_o =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_a;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_c *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_et =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_o;

  // End of DiscreteIntegrator: '<S117>/Integrator'

  // Sum: '<S117>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_et) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h;

  // Saturate: '<S117>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S117>/Saturate'

  // Product: '<S120>/POut' incorporates:
  //   Constant: '<S114>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_e;

  // DiscreteIntegrator: '<S120>/Integrator' incorporates:
  //   Constant: '<S114>/Constant2'
  //   Product: '<S120>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_m *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_n);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_l =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_fl;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S114>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_l *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Gain: '<S114>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_b *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S114>/Divide1' incorporates:
    //   Constant: '<S114>/Constant1'
    //   Product: '<S114>/Divide'
    //   Sum: '<S114>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_i =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_ix -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_i) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S120>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_i;

  // SampleTimeMath: '<S121>/TSamp' incorporates:
  //   DataTypeConversion: '<S121>/Passthrough for tuning'
  //
  //  About '<S121>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_i;

  // Math: '<S121>/Reciprocal' incorporates:
  //   Constant: '<S121>/Constant'
  //   Sum: '<S121>/SumDen'
  //
  //  About '<S121>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_c2 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S121>/Filter Differentiator TF' incorporates:
  //   Constant: '<S121>/Constant'
  //   Product: '<S121>/Divide'
  //   Sum: '<S121>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_c2) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_g;

  // Sum: '<S120>/Sum' incorporates:
  //   DataTypeConversion: '<S121>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S121>/Filter Differentiator TF'
  //   Product: '<S121>/DenCoefOut'
  //   Product: '<S121>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_l[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_h +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_l[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_g)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_i +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_l);

  // Sum: '<S115>/Sum' incorporates:
  //   UnitDelay: '<S115>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_e;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S125>/MATLAB Function' incorporates:
    //   Constant: '<S125>/Constant'
    //   Gain: '<S87>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_g *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_co,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_p,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_f5);
  }

  // Product: '<S87>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[3] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S127>/POut' incorporates:
  //   Constant: '<S123>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_ed;

  // SampleTimeMath: '<S129>/TSamp' incorporates:
  //   Constant: '<S123>/Constant5'
  //
  //  About '<S129>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_d *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_f;

  // Math: '<S129>/Reciprocal' incorporates:
  //   Constant: '<S129>/Constant'
  //   Sum: '<S129>/SumDen'
  //
  //  About '<S129>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_fq +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S129>/Filter Differentiator TF' incorporates:
  //   Constant: '<S123>/Constant'
  //   Constant: '<S129>/Constant'
  //   Product: '<S127>/DOut'
  //   Product: '<S129>/Divide'
  //   Sum: '<S129>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__k
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__k
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_gl
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_a;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__k
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_f -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_fq) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_gl;

  // Product: '<S129>/NOut' incorporates:
  //   Constant: '<S123>/Constant5'
  //   DiscreteTransferFcn: '<S129>/Filter Differentiator TF'
  //   Product: '<S129>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_p[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_n +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_p[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_gl)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_d;

  // Sum: '<S127>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_k) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj;

  // Gain: '<S128>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_k *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S128>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S128>/DeadZone'

  // RelationalOperator: '<S128>/NotEqual'
  rtb_NotEqual_l2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S128>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S128>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S123>/Gain2' incorporates:
    //   Constant: '<S123>/Constant4'
    //   Product: '<S123>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_h =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_ed *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_j;
  }

  // Product: '<S127>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_h;

  // Signum: '<S128>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S128>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S128>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S128>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S128>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S128>/SignPreIntegrator'

  // DataTypeConversion: '<S128>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S128>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S128>/DataTypeConv1'

  // Switch: '<S127>/Switch' incorporates:
  //   Constant: '<S127>/Constant'
  //   DataTypeConversion: '<S128>/DataTypeConv2'
  //   Logic: '<S128>/AND'
  //   RelationalOperator: '<S128>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_oi;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S127>/Switch'

  // DiscreteIntegrator: '<S127>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_f
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_h;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_k *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_d =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_k;

  // End of DiscreteIntegrator: '<S127>/Integrator'

  // Sum: '<S127>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_d) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj;

  // Saturate: '<S127>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S127>/Saturate'

  // Product: '<S130>/POut' incorporates:
  //   Constant: '<S124>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_dr;

  // DiscreteIntegrator: '<S130>/Integrator' incorporates:
  //   Constant: '<S124>/Constant2'
  //   Product: '<S130>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_e_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_b *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_d);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_e_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_bo;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S124>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_gn *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Gain: '<S124>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_f =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_k *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S124>/Divide1' incorporates:
    //   Constant: '<S124>/Constant1'
    //   Product: '<S124>/Divide'
    //   Sum: '<S124>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_o =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_j -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_f) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S130>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_j =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_o;

  // SampleTimeMath: '<S131>/TSamp' incorporates:
  //   DataTypeConversion: '<S131>/Passthrough for tuning'
  //
  //  About '<S131>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_f *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_fj;

  // Math: '<S131>/Reciprocal' incorporates:
  //   Constant: '<S131>/Constant'
  //   Sum: '<S131>/SumDen'
  //
  //  About '<S131>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_d +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S131>/Filter Differentiator TF' incorporates:
  //   Constant: '<S131>/Constant'
  //   Product: '<S131>/Divide'
  //   Sum: '<S131>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_at =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_j -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_d) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_h;

  // Sum: '<S130>/Sum' incorporates:
  //   DataTypeConversion: '<S131>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S131>/Filter Differentiator TF'
  //   Product: '<S131>/DenCoefOut'
  //   Product: '<S131>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_l3[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_at +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_l3[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_h)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_f +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_e);

  // Sum: '<S125>/Sum' incorporates:
  //   UnitDelay: '<S125>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_j =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_h;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S135>/MATLAB Function' incorporates:
    //   Constant: '<S135>/Constant'
    //   Gain: '<S88>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_mi *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_cs,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_m,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_i);
  }

  // Product: '<S88>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[4] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S137>/POut' incorporates:
  //   Constant: '<S133>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_dg;

  // SampleTimeMath: '<S139>/TSamp' incorporates:
  //   Constant: '<S133>/Constant5'
  //
  //  About '<S139>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_n *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_g;

  // Math: '<S139>/Reciprocal' incorporates:
  //   Constant: '<S139>/Constant'
  //   Sum: '<S139>/SumDen'
  //
  //  About '<S139>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_p +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S139>/Filter Differentiator TF' incorporates:
  //   Constant: '<S133>/Constant'
  //   Constant: '<S139>/Constant'
  //   Product: '<S137>/DOut'
  //   Product: '<S139>/Divide'
  //   Sum: '<S139>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__l
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__l
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_i
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_l;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__l
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_l2 -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_p) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_i;

  // Product: '<S139>/NOut' incorporates:
  //   Constant: '<S133>/Constant5'
  //   DiscreteTransferFcn: '<S139>/Filter Differentiator TF'
  //   Product: '<S139>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_d[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_d[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_i)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_n;

  // Sum: '<S137>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_h) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j;

  // Gain: '<S138>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_h *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S138>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S138>/DeadZone'

  // RelationalOperator: '<S138>/NotEqual'
  rtb_NotEqual_l2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S138>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S138>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S133>/Gain2' incorporates:
    //   Constant: '<S133>/Constant4'
    //   Product: '<S133>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_dg *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_b;
  }

  // Product: '<S137>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_e;

  // Signum: '<S138>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S138>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S138>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S138>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S138>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S138>/SignPreIntegrator'

  // DataTypeConversion: '<S138>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S138>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S138>/DataTypeConv1'

  // Switch: '<S137>/Switch' incorporates:
  //   Constant: '<S137>/Constant'
  //   DataTypeConversion: '<S138>/DataTypeConv2'
  //   Logic: '<S138>/AND'
  //   RelationalOperator: '<S138>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_op;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S137>/Switch'

  // DiscreteIntegrator: '<S137>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_dm
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_k;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_f_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_bp *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_f =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_f_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_h;

  // End of DiscreteIntegrator: '<S137>/Integrator'

  // Sum: '<S137>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_f) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j;

  // Saturate: '<S137>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S137>/Saturate'

  // Product: '<S140>/POut' incorporates:
  //   Constant: '<S134>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_aw;

  // DiscreteIntegrator: '<S140>/Integrator' incorporates:
  //   Constant: '<S134>/Constant2'
  //   Product: '<S140>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_k1_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_j *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_k);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_k1 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_k1_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_j;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S134>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_be *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Gain: '<S134>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_j =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S134>/Divide1' incorporates:
    //   Constant: '<S134>/Constant1'
    //   Product: '<S134>/Divide'
    //   Sum: '<S134>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_g =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_ji -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_j) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S140>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_hv =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_g;

  // SampleTimeMath: '<S141>/TSamp' incorporates:
  //   DataTypeConversion: '<S141>/Passthrough for tuning'
  //
  //  About '<S141>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_j *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_it;

  // Math: '<S141>/Reciprocal' incorporates:
  //   Constant: '<S141>/Constant'
  //   Sum: '<S141>/SumDen'
  //
  //  About '<S141>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ev +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S141>/Filter Differentiator TF' incorporates:
  //   Constant: '<S141>/Constant'
  //   Product: '<S141>/Divide'
  //   Sum: '<S141>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_l =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_hv -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ev) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_b;

  // Sum: '<S140>/Sum' incorporates:
  //   DataTypeConversion: '<S141>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S141>/Filter Differentiator TF'
  //   Product: '<S141>/DenCoefOut'
  //   Product: '<S141>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_j[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_l +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_j[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_b)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_j +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_k1);

  // Sum: '<S135>/Sum' incorporates:
  //   UnitDelay: '<S135>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_hv =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_k;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S145>/MATLAB Function' incorporates:
    //   Constant: '<S145>/Constant'
    //   Gain: '<S89>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_p *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_bl,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_g,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_fe);
  }

  // Product: '<S89>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[5] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S147>/POut' incorporates:
  //   Constant: '<S143>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_h;

  // SampleTimeMath: '<S149>/TSamp' incorporates:
  //   Constant: '<S143>/Constant5'
  //
  //  About '<S149>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_e *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_p;

  // Math: '<S149>/Reciprocal' incorporates:
  //   Constant: '<S149>/Constant'
  //   Sum: '<S149>/SumDen'
  //
  //  About '<S149>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_cs4 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S149>/Filter Differentiator TF' incorporates:
  //   Constant: '<S143>/Constant'
  //   Constant: '<S149>/Constant'
  //   Product: '<S147>/DOut'
  //   Product: '<S149>/Divide'
  //   Sum: '<S149>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__j
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__j
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fs
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_fq;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__j
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_k =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_h -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_cs4) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fs;

  // Product: '<S149>/NOut' incorporates:
  //   Constant: '<S143>/Constant5'
  //   DiscreteTransferFcn: '<S149>/Filter Differentiator TF'
  //   Product: '<S149>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_e[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_k +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_e[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fs)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_e;

  // Sum: '<S147>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ji) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f;

  // Gain: '<S148>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_l *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S148>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S148>/DeadZone'

  // RelationalOperator: '<S148>/NotEqual'
  rtb_NotEqual_l2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S148>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S148>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S143>/Gain2' incorporates:
    //   Constant: '<S143>/Constant4'
    //   Product: '<S143>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_m =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_h *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_ie;
  }

  // Product: '<S147>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_m;

  // Signum: '<S148>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S148>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S148>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S148>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S148>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S148>/SignPreIntegrator'

  // DataTypeConversion: '<S148>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S148>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S148>/DataTypeConv1'

  // Switch: '<S147>/Switch' incorporates:
  //   Constant: '<S147>/Constant'
  //   DataTypeConversion: '<S148>/DataTypeConv2'
  //   Logic: '<S148>/AND'
  //   RelationalOperator: '<S148>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_bu;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S147>/Switch'

  // DiscreteIntegrator: '<S147>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_n
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ji =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_l;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_m0_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_n *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m0 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_m0_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ji;

  // End of DiscreteIntegrator: '<S147>/Integrator'

  // Sum: '<S147>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m0) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f;

  // Saturate: '<S147>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S147>/Saturate'

  // Product: '<S150>/POut' incorporates:
  //   Constant: '<S144>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_f;

  // DiscreteIntegrator: '<S150>/Integrator' incorporates:
  //   Constant: '<S144>/Constant2'
  //   Product: '<S150>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_o_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_p);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_o =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_o_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_e;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S144>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_pp *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Gain: '<S144>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_l =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_be *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S144>/Divide1' incorporates:
    //   Constant: '<S144>/Constant1'
    //   Product: '<S144>/Divide'
    //   Sum: '<S144>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_p =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_p -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_l) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S150>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m1 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_p;

  // SampleTimeMath: '<S151>/TSamp' incorporates:
  //   DataTypeConversion: '<S151>/Passthrough for tuning'
  //
  //  About '<S151>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_l *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_o;

  // Math: '<S151>/Reciprocal' incorporates:
  //   Constant: '<S151>/Constant'
  //   Sum: '<S151>/SumDen'
  //
  //  About '<S151>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_d0 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S151>/Filter Differentiator TF' incorporates:
  //   Constant: '<S151>/Constant'
  //   Product: '<S151>/Divide'
  //   Sum: '<S151>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m1 -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_d0) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fw;

  // Sum: '<S150>/Sum' incorporates:
  //   DataTypeConversion: '<S151>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S151>/Filter Differentiator TF'
  //   Product: '<S151>/DenCoefOut'
  //   Product: '<S151>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_dm[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_m +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_dm[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fw)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_l +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_o);

  // Sum: '<S145>/Sum' incorporates:
  //   UnitDelay: '<S145>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m1 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_o;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S155>/MATLAB Function' incorporates:
    //   Constant: '<S155>/Constant'
    //   Gain: '<S90>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_c *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_h5,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_k,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_f);
  }

  // Product: '<S90>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[6] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S157>/POut' incorporates:
  //   Constant: '<S153>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_h3;

  // SampleTimeMath: '<S159>/TSamp' incorporates:
  //   Constant: '<S153>/Constant5'
  //
  //  About '<S159>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_p *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_l;

  // Math: '<S159>/Reciprocal' incorporates:
  //   Constant: '<S159>/Constant'
  //   Sum: '<S159>/SumDen'
  //
  //  About '<S159>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_go +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S159>/Filter Differentiator TF' incorporates:
  //   Constant: '<S153>/Constant'
  //   Constant: '<S159>/Constant'
  //   Product: '<S157>/DOut'
  //   Product: '<S159>/Divide'
  //   Sum: '<S159>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__f
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__f
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_e
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_hh;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__f
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_o =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_a -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_go) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_e;

  // Product: '<S159>/NOut' incorporates:
  //   Constant: '<S153>/Constant5'
  //   DiscreteTransferFcn: '<S159>/Filter Differentiator TF'
  //   Product: '<S159>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_n[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_o +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_n[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_e)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_p;

  // Sum: '<S157>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_m) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b;

  // Gain: '<S158>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_e *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S158>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S158>/DeadZone'

  // RelationalOperator: '<S158>/NotEqual'
  rtb_NotEqual_l2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S158>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S158>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S153>/Gain2' incorporates:
    //   Constant: '<S153>/Constant4'
    //   Product: '<S153>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_h3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_n;
  }

  // Product: '<S157>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_i;

  // Signum: '<S158>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S158>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S158>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S158>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S158>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S158>/SignPreIntegrator'

  // DataTypeConversion: '<S158>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S158>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S158>/DataTypeConv1'

  // Switch: '<S157>/Switch' incorporates:
  //   Constant: '<S157>/Constant'
  //   DataTypeConversion: '<S158>/DataTypeConv2'
  //   Logic: '<S158>/AND'
  //   RelationalOperator: '<S158>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gf;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S157>/Switch'

  // DiscreteIntegrator: '<S157>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_p
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_m =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_ed;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_g_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_l *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_g_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_m;

  // End of DiscreteIntegrator: '<S157>/Integrator'

  // Sum: '<S157>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_g) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b;

  // Saturate: '<S157>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S157>/Saturate'

  // Product: '<S160>/POut' incorporates:
  //   Constant: '<S154>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_o;

  // DiscreteIntegrator: '<S160>/Integrator' incorporates:
  //   Constant: '<S154>/Constant2'
  //   Product: '<S160>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_b_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_jz *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_nj);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_b =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_b_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_bd;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S154>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_a1 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Gain: '<S154>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_d =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_n *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S154>/Divide1' incorporates:
    //   Constant: '<S154>/Constant1'
    //   Product: '<S154>/Divide'
    //   Sum: '<S154>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_j =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_a -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_d) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S160>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_j;

  // SampleTimeMath: '<S161>/TSamp' incorporates:
  //   DataTypeConversion: '<S161>/Passthrough for tuning'
  //
  //  About '<S161>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_d *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_aa;

  // Math: '<S161>/Reciprocal' incorporates:
  //   Constant: '<S161>/Constant'
  //   Sum: '<S161>/SumDen'
  //
  //  About '<S161>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_kx +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S161>/Filter Differentiator TF' incorporates:
  //   Constant: '<S161>/Constant'
  //   Product: '<S161>/Divide'
  //   Sum: '<S161>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_kx =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_i -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_kx) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_e2;

  // Sum: '<S160>/Sum' incorporates:
  //   DataTypeConversion: '<S161>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S161>/Filter Differentiator TF'
  //   Product: '<S161>/DenCoefOut'
  //   Product: '<S161>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_ea[
     0] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_kx +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_ea[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_e2)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_d +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_b);

  // Sum: '<S155>/Sum' incorporates:
  //   UnitDelay: '<S155>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_i;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S165>/MATLAB Function' incorporates:
    //   Constant: '<S165>/Constant'
    //   Gain: '<S91>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_gl *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ov,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a);
  }

  // Product: '<S91>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product9[7] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain;

  // Product: '<S167>/POut' incorporates:
  //   Constant: '<S163>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_n;

  // SampleTimeMath: '<S169>/TSamp' incorporates:
  //   Constant: '<S163>/Constant5'
  //
  //  About '<S169>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_m *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_b;

  // Math: '<S169>/Reciprocal' incorporates:
  //   Constant: '<S169>/Constant'
  //   Sum: '<S169>/SumDen'
  //
  //  About '<S169>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ck +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S169>/Filter Differentiator TF' incorporates:
  //   Constant: '<S163>/Constant'
  //   Constant: '<S169>/Constant'
  //   Product: '<S167>/DOut'
  //   Product: '<S169>/Divide'
  //   Sum: '<S169>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__h
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__h
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ir
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_b;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__h
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_jl -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ck) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ir;

  // Product: '<S169>/NOut' incorporates:
  //   Constant: '<S163>/Constant5'
  //   DiscreteTransferFcn: '<S169>/Filter Differentiator TF'
  //   Product: '<S169>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_ps[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_ps[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ir)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_m;

  // Sum: '<S167>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by;

  // Gain: '<S168>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_pe =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_c *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S168>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  }

  // End of DeadZone: '<S168>/DeadZone'

  // RelationalOperator: '<S168>/NotEqual'
  rtb_NotEqual_l2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_pe !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S168>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S168>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S163>/Gain2' incorporates:
    //   Constant: '<S163>/Constant4'
    //   Product: '<S163>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_hk =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_n *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_iel;
  }

  // Product: '<S167>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_hk;

  // Signum: '<S168>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S168>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S168>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S168>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S168>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S168>/SignPreIntegrator'

  // DataTypeConversion: '<S168>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S168>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S168>/DataTypeConv1'

  // Switch: '<S167>/Switch' incorporates:
  //   Constant: '<S167>/Constant'
  //   DataTypeConversion: '<S168>/DataTypeConv2'
  //   Logic: '<S168>/AND'
  //   RelationalOperator: '<S168>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gh;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S167>/Switch'

  // DiscreteIntegrator: '<S167>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_k
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_h1;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_no;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_pe =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c;

  // End of DiscreteIntegrator: '<S167>/Integrator'

  // Sum: '<S167>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_pe) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by;

  // Saturate: '<S167>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_hw_tau;
    }
  }

  // End of Saturate: '<S167>/Saturate'

  // Product: '<S170>/POut' incorporates:
  //   Constant: '<S164>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_b;

  // DiscreteIntegrator: '<S170>/Integrator' incorporates:
  //   Constant: '<S164>/Constant2'
  //   Product: '<S170>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_h_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_cs *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_pf);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_h_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ft;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S164>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_c1 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

    // Gain: '<S164>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jd =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_a *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz;

    // Product: '<S164>/Divide1' incorporates:
    //   Constant: '<S164>/Constant1'
    //   Product: '<S164>/Divide'
    //   Sum: '<S164>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_g2 =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_e -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jd) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S170>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_g2;

  // SampleTimeMath: '<S171>/TSamp' incorporates:
  //   DataTypeConversion: '<S171>/Passthrough for tuning'
  //
  //  About '<S171>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jd *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_g3;

  // Math: '<S171>/Reciprocal' incorporates:
  //   Constant: '<S171>/Constant'
  //   Sum: '<S171>/SumDen'
  //
  //  About '<S171>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ov1 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S171>/Filter Differentiator TF' incorporates:
  //   Constant: '<S171>/Constant'
  //   Product: '<S171>/Divide'
  //   Sum: '<S171>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ov1) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_d;

  // Sum: '<S170>/Sum' incorporates:
  //   DataTypeConversion: '<S171>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S171>/Filter Differentiator TF'
  //   Product: '<S171>/DenCoefOut'
  //   Product: '<S171>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_k[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_k[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_d)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jd +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_h);

  // Sum: '<S165>/Sum' incorporates:
  //   UnitDelay: '<S165>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_c;

  // MATLAB Function: '<S45>/Gl_matrices' incorporates:
  //   SignalConversion: '<S81>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter11_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter12_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter13_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter14_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter15_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t33 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter16_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t41 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter17_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t42 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t38 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[0] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[3] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[4] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[5] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[6] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[7] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[8] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[9] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[10] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[11] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[12] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[13] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t41) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[14] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t41) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[15] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[16] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[17] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[18] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[19] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[20] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[21] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[23] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[24] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[25] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[26] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[27] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[28] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[29] =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[30] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[31] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[32] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[33] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[34] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[35] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[36] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[37] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22) -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[38] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22) +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[39] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6 +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8) -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[40] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6 +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8) +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[41] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26 +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t33) -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[42] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26 +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t33) +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[43] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t42 +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t38) -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp) *
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[44] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t42 +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t38) +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40;
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 15;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[1 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
      + 15];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[2 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
      + 30];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // SampleTimeMath: '<S47>/TSamp'
    //
    //  About '<S47>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_om;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_l *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_om;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_g *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_om;

    // Sum: '<S47>/Diff' incorporates:
    //   UnitDelay: '<S47>/UD'
    //
    //  Block description for '<S47>/Diff':
    //
    //   Add in CPU
    //
    //  Block description for '<S47>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_0 -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[0];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_1 -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[1];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_2 -
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[2];

    // Gain: '<S44>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain_h =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FFxy_mass *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[0];

    // Gain: '<S44>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_iu =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FFxy_mass *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[1];

    // Gain: '<S44>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_m2 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FFtheta_intia *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[2];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter6'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_c.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_c.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2903.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n);

    // MATLAB Function: '<S54>/MATLAB Function' incorporates:
    //   Constant: '<S54>/Constant'
    //   Gain: '<S48>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter6'
    //   MATLABSystem: '<S6>/Get Parameter6'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_cc *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_fp,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_c,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_jp);
  }

  // MATLAB Function: '<S2>/Jqwl_matrix' incorporates:
  //   SignalConversion: '<S13>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t33 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t41 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t42 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t38 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t39 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t48 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t49 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t50 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[0]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[1]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[2]
    = (((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31) -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter11_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[3]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[4]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[5]
    = (((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31) +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter12_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[6]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[7]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[8]
    = (((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32) -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t33) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter13_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[9]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[10]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[11]
    = (((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t35) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t32) +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t33) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter14_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[12]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[13]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[14]
    = (((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t41 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t42) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t38) -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter15_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[15]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[16]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[17]
    = (((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t41 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t42) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t38) +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t40) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter16_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[18]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[19]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[20]
    = (((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t48 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t49) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t50) -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t39) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.GetParameter17_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[21]
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[22]
    = (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g *
    0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k[23]
    = (((-ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t48 +
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t49) +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t50) +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_g
     * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t39) * 0.125;
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 3;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    // Product: '<S2>/Product3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
      = 0.0;
    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 < 8;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
        +=
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k
        [3 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 +
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_k[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0];
    }

    // End of Product: '<S2>/Product3'

    // Sum: '<S44>/Sum'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
      -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_mn.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_mn.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2716.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;
  }

  // Product: '<S48>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain_i;

  // Product: '<S56>/POut' incorporates:
  //   Constant: '<S52>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_hd;

  // SampleTimeMath: '<S58>/TSamp' incorporates:
  //   Constant: '<S52>/Constant5'
  //
  //  About '<S58>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_jy *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_je;

  // Math: '<S58>/Reciprocal' incorporates:
  //   Constant: '<S58>/Constant'
  //   Sum: '<S58>/SumDen'
  //
  //  About '<S58>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_lp +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // DiscreteTransferFcn: '<S58>/Filter Differentiator TF' incorporates:
  //   Constant: '<S52>/Constant'
  //   Constant: '<S58>/Constant'
  //   Product: '<S56>/DOut'
  //   Product: '<S58>/Divide'
  //   Sum: '<S58>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l3
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l3
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ku
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_ae;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l3
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_e0 -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_lp) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ku;

  // Product: '<S58>/NOut' incorporates:
  //   Constant: '<S52>/Constant5'
  //   DiscreteTransferFcn: '<S58>/Filter Differentiator TF'
  //   Product: '<S58>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_jq[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_jq[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ku)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_jy;

  // Sum: '<S56>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_mx) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;

  // Gain: '<S57>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_hq *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // DeadZone: '<S57>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
  }

  // End of DeadZone: '<S57>/DeadZone'

  // RelationalOperator: '<S57>/NotEqual'
  rtb_LowerRelop1 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);

  // Signum: '<S57>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 = (rtNaN);
  }

  // End of Signum: '<S57>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter3'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d0.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d0.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2898.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e);

    // Gain: '<S52>/Gain2' incorporates:
    //   Constant: '<S52>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter3'
    //   MATLABSystem: '<S6>/Get Parameter3'
    //   Product: '<S52>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_k =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_hd *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_nx;
  }

  // Product: '<S56>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_k;

  // Signum: '<S57>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 < 0.0) {
    // DataTypeConversion: '<S57>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 > 0.0) {
    // DataTypeConversion: '<S57>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 == 0.0) {
    // DataTypeConversion: '<S57>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S57>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S57>/SignPreIntegrator'

  // DataTypeConversion: '<S57>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S57>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S57>/DataTypeConv1'

  // Switch: '<S56>/Switch' incorporates:
  //   Constant: '<S56>/Constant'
  //   DataTypeConversion: '<S57>/DataTypeConv2'
  //   Logic: '<S57>/AND'
  //   RelationalOperator: '<S57>/Equal'

  if (rtb_LowerRelop1 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_ah;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2;
  }

  // End of Switch: '<S56>/Switch'

  // DiscreteIntegrator: '<S56>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_fn
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_mx =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_m;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_gb;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_mx;

  // End of DiscreteIntegrator: '<S56>/Integrator'

  // Sum: '<S56>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;

  // Saturate: '<S56>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
    }
  }

  // End of Saturate: '<S56>/Saturate'

  // Product: '<S59>/POut' incorporates:
  //   Constant: '<S53>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_dt;

  // DiscreteIntegrator: '<S59>/Integrator' incorporates:
  //   Constant: '<S53>/Constant2'
  //   Product: '<S59>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_k3 *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_ny);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_jf;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter4'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ey.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ey.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2900.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz_m);

    // Gain: '<S53>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter4'
    //   MATLABSystem: '<S6>/Get Parameter4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_gy *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz_m;

    // Start for MATLABSystem: '<S6>/Get Parameter5'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g0.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g0.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2902.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n);

    // Gain: '<S53>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter5'
    //   MATLABSystem: '<S6>/Get Parameter5'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_ga =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_e *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n;

    // Product: '<S53>/Divide1' incorporates:
    //   Constant: '<S53>/Constant1'
    //   Product: '<S53>/Divide'
    //   Sum: '<S53>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_ht =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_j0 -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_ga) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S59>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_ht;

  // SampleTimeMath: '<S60>/TSamp' incorporates:
  //   DataTypeConversion: '<S60>/Passthrough for tuning'
  //
  //  About '<S60>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_ga *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_bz;

  // Math: '<S60>/Reciprocal' incorporates:
  //   Constant: '<S60>/Constant'
  //   Sum: '<S60>/SumDen'
  //
  //  About '<S60>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_az +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2);

  // DiscreteTransferFcn: '<S60>/Filter Differentiator TF' incorporates:
  //   Constant: '<S60>/Constant'
  //   Product: '<S60>/Divide'
  //   Sum: '<S60>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_az) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_j;

  // Sum: '<S59>/Sum' incorporates:
  //   DataTypeConversion: '<S60>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S60>/Filter Differentiator TF'
  //   Product: '<S60>/DenCoefOut'
  //   Product: '<S60>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_o[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_o[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_j)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_ga +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8);

  // Sum: '<S54>/Sum' incorporates:
  //   UnitDelay: '<S54>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_g;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // MATLAB Function: '<S64>/MATLAB Function' incorporates:
    //   Constant: '<S64>/Constant'
    //   Gain: '<S49>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_ju *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_l1,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_ne,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_j);
  }

  // Product: '<S49>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[1] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain_i;

  // Product: '<S66>/POut' incorporates:
  //   Constant: '<S62>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_oj;

  // SampleTimeMath: '<S68>/TSamp' incorporates:
  //   Constant: '<S62>/Constant5'
  //
  //  About '<S68>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_b *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_go;

  // Math: '<S68>/Reciprocal' incorporates:
  //   Constant: '<S68>/Constant'
  //   Sum: '<S68>/SumDen'
  //
  //  About '<S68>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_pi +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n);

  // DiscreteTransferFcn: '<S68>/Filter Differentiator TF' incorporates:
  //   Constant: '<S62>/Constant'
  //   Constant: '<S68>/Constant'
  //   Product: '<S66>/DOut'
  //   Product: '<S68>/Divide'
  //   Sum: '<S68>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l5
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l5
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fc
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_b2;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l5
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_oh -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_pi) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fc;

  // Product: '<S68>/NOut' incorporates:
  //   Constant: '<S62>/Constant5'
  //   DiscreteTransferFcn: '<S68>/Filter Differentiator TF'
  //   Product: '<S68>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_k0[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_k0[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fc)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_b;

  // Sum: '<S66>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c5) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;

  // Gain: '<S67>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_d *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n;

  // DeadZone: '<S67>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
  }

  // End of DeadZone: '<S67>/DeadZone'

  // RelationalOperator: '<S67>/NotEqual'
  rtb_NotEqual_l2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n);

  // Signum: '<S67>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n = (rtNaN);
  }

  // End of Signum: '<S67>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S62>/Gain2' incorporates:
    //   Constant: '<S62>/Constant4'
    //   Product: '<S62>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_l =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_oj *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_fk;
  }

  // Product: '<S66>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_l;

  // Signum: '<S67>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    // DataTypeConversion: '<S67>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    // DataTypeConversion: '<S67>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    // DataTypeConversion: '<S67>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S67>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S67>/SignPreIntegrator'

  // DataTypeConversion: '<S67>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S67>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S67>/DataTypeConv1'

  // Switch: '<S66>/Switch' incorporates:
  //   Constant: '<S66>/Constant'
  //   DataTypeConversion: '<S67>/DataTypeConv2'
  //   Logic: '<S67>/AND'
  //   RelationalOperator: '<S67>/Equal'

  if (rtb_NotEqual_l2 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_nd;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  }

  // End of Switch: '<S66>/Switch'

  // DiscreteIntegrator: '<S66>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_o
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c5 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_oh;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_kx;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c5;

  // End of DiscreteIntegrator: '<S66>/Integrator'

  // Sum: '<S66>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;

  // Saturate: '<S66>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_force;
    }
  }

  // End of Saturate: '<S66>/Saturate'

  // Product: '<S69>/POut' incorporates:
  //   Constant: '<S63>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_ce;

  // DiscreteIntegrator: '<S69>/Integrator' incorporates:
  //   Constant: '<S63>/Constant2'
  //   Product: '<S69>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_ci *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_c5);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_p;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S63>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_o *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz_m;

    // Gain: '<S63>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jx =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_p *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n;

    // Product: '<S63>/Divide1' incorporates:
    //   Constant: '<S63>/Constant1'
    //   Product: '<S63>/Divide'
    //   Sum: '<S63>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_pu =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_at -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jx) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S69>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_pu;

  // SampleTimeMath: '<S70>/TSamp' incorporates:
  //   DataTypeConversion: '<S70>/Passthrough for tuning'
  //
  //  About '<S70>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jx *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_pv;

  // Math: '<S70>/Reciprocal' incorporates:
  //   Constant: '<S70>/Constant'
  //   Sum: '<S70>/SumDen'
  //
  //  About '<S70>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_kq +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n);

  // DiscreteTransferFcn: '<S70>/Filter Differentiator TF' incorporates:
  //   Constant: '<S70>/Constant'
  //   Product: '<S70>/Divide'
  //   Sum: '<S70>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_kq) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_dl;

  // Sum: '<S69>/Sum' incorporates:
  //   DataTypeConversion: '<S70>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S70>/Filter Differentiator TF'
  //   Product: '<S70>/DenCoefOut'
  //   Product: '<S70>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_h[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz_m +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_h[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_dl)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_jx +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15);

  // Sum: '<S64>/Sum' incorporates:
  //   UnitDelay: '<S64>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_gb;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter9'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ch.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ch.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2923.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLAB Function: '<S74>/MATLAB Function' incorporates:
    //   Constant: '<S74>/Constant'
    //   Gain: '<S50>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter9'
    //   MATLABSystem: '<S6>/Get Parameter9'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_op *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i,
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_or,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_bl,
       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_cg);

    // Start for MATLABSystem: '<S6>/Get Parameter1'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fy.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fy.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2919.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain_h =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;
  }

  // Product: '<S50>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[2] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P_gain_h;

  // Product: '<S76>/POut' incorporates:
  //   Constant: '<S72>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_bw;

  // SampleTimeMath: '<S78>/TSamp' incorporates:
  //   Constant: '<S72>/Constant5'
  //
  //  About '<S78>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_ba *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_gy;

  // Math: '<S78>/Reciprocal' incorporates:
  //   Constant: '<S78>/Constant'
  //   Sum: '<S78>/SumDen'
  //
  //  About '<S78>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gy +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17);

  // DiscreteTransferFcn: '<S78>/Filter Differentiator TF' incorporates:
  //   Constant: '<S72>/Constant'
  //   Constant: '<S78>/Constant'
  //   Product: '<S76>/DOut'
  //   Product: '<S78>/Divide'
  //   Sum: '<S78>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__g
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__g
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ei
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_bt;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__g
    = rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gl -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_gy) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ei;

  // Product: '<S78>/NOut' incorporates:
  //   Constant: '<S72>/Constant5'
  //   DiscreteTransferFcn: '<S78>/Filter Differentiator TF'
  //   Product: '<S78>/DenCoefOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_it[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCo_it[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ei)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_ba;

  // Sum: '<S76>/Sum Fdbk'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_d) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18;

  // Gain: '<S77>/ZeroGain'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ZeroGain_Gain_f *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;

  // DeadZone: '<S77>/DeadZone'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 -=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 >=
             -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 -=
      -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau;
  }

  // End of DeadZone: '<S77>/DeadZone'

  // RelationalOperator: '<S77>/NotEqual'
  rtb_LowerRelop1 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 !=
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17);

  // Signum: '<S77>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 < 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 = (rtNaN);
  }

  // End of Signum: '<S77>/SignDeltaU'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter2'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hq.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hq.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2920.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // Gain: '<S72>/Gain2' incorporates:
    //   Constant: '<S72>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter2'
    //   MATLABSystem: '<S6>/Get Parameter2'
    //   Product: '<S72>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_mj =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_bw *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_fo;
  }

  // Product: '<S76>/IOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_mj;

  // Signum: '<S77>/SignPreIntegrator'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 < 0.0) {
    // DataTypeConversion: '<S77>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = -1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 > 0.0) {
    // DataTypeConversion: '<S77>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 1.0;
  } else if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 == 0.0) {
    // DataTypeConversion: '<S77>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    // DataTypeConversion: '<S77>/DataTypeConv2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = (rtNaN);
  }

  // End of Signum: '<S77>/SignPreIntegrator'

  // DataTypeConversion: '<S77>/DataTypeConv2'
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 256.0);
  }

  // DataTypeConversion: '<S77>/DataTypeConv1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 < 128.0) {
    t2 = (int8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17;
  } else {
    t2 = MAX_int8_T;
  }

  // End of DataTypeConversion: '<S77>/DataTypeConv1'

  // Switch: '<S76>/Switch' incorporates:
  //   Constant: '<S76>/Constant'
  //   DataTypeConversion: '<S77>/DataTypeConv2'
  //   Logic: '<S77>/AND'
  //   RelationalOperator: '<S77>/Equal'

  if (rtb_LowerRelop1 && ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
        ? (int32_T)(int8_T)-(int8_T)(uint8_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(int8_T)
        (uint8_T)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) == t2)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_om;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;
  }

  // End of Switch: '<S76>/Switch'

  // DiscreteIntegrator: '<S76>/Integrator'
  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_m
       != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_c;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_gs *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_d;

  // End of DiscreteIntegrator: '<S76>/Integrator'

  // Sum: '<S76>/Sum'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0) +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18;

  // Saturate: '<S76>/Saturate'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n >
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n <
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n =
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.max_ropod_sw_tau;
    }
  }

  // End of Saturate: '<S76>/Saturate'

  // Product: '<S79>/POut' incorporates:
  //   Constant: '<S73>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_ci;

  // DiscreteIntegrator: '<S79>/Integrator' incorporates:
  //   Constant: '<S73>/Constant2'
  //   Product: '<S79>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_gainval_cd *
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_i);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_os;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S6>/Get Parameter7'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_eq.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_eq.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2921.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // Gain: '<S73>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter7'
    //   MATLABSystem: '<S6>/Get Parameter7'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_bw *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Start for MATLABSystem: '<S6>/Get Parameter8'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2922.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // Gain: '<S73>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter8'
    //   MATLABSystem: '<S6>/Get Parameter8'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_a =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_f *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i;

    // Product: '<S73>/Divide1' incorporates:
    //   Constant: '<S73>/Constant1'
    //   Product: '<S73>/Divide'
    //   Sum: '<S73>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_f =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_c -
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 /
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_a) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24);
  }

  // Product: '<S79>/DOut'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Divide1_f;

  // SampleTimeMath: '<S80>/TSamp' incorporates:
  //   DataTypeConversion: '<S80>/Passthrough for tuning'
  //
  //  About '<S80>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_a *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.TSamp_WtEt_oh;

  // Math: '<S80>/Reciprocal' incorporates:
  //   Constant: '<S80>/Constant'
  //   Sum: '<S80>/SumDen'
  //
  //  About '<S80>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_e5 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17);

  // DiscreteTransferFcn: '<S80>/Filter Differentiator TF' incorporates:
  //   Constant: '<S80>/Constant'
  //   Product: '<S80>/Divide'
  //   Sum: '<S80>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i -
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 -
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_e5) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_p;

  // Sum: '<S79>/Sum' incorporates:
  //   DataTypeConversion: '<S80>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S80>/Filter Differentiator TF'
  //   Product: '<S80>/DenCoefOut'
  //   Product: '<S80>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 =
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_b[
     0] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_NumCoe_b[
     1] *
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_p)
    * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_a +
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 +
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26);

  // Sum: '<S74>/Sum' incorporates:
  //   UnitDelay: '<S74>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_f;

  // Sum: '<S44>/Sum1' incorporates:
  //   Product: '<S54>/Product1'
  //   Product: '<S64>/Product1'
  //   Product: '<S74>/Product1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_c *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain_h;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_ne *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain1_iu;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_bl *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain2_m2;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S8>/Get Parameter2'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_h.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_h.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2215.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current);

    // Gain: '<S45>/Gain3' incorporates:
    //   MATLABSystem: '<S8>/Get Parameter2'
    //   MATLABSystem: '<S8>/Get Parameter2'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3_g = 1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;
  }

  // MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal' incorporates:
  //   Constant: '<Root>/Constant'

  memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.K[0], 0, sizeof(int16_T) <<
         6U);
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.K[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
      + (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k << 3)] = 1;
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_n[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
        == 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.K[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
        + (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k << 3)] = 1000;
    }
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 < 8;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
        + (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 << 3)] = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1 < 8;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
          + (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 << 3)] += (real_T)
          (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.K
           [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k << 3) +
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1] *
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.K
           [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 << 3) +
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1]);
      }
    }
  }

  memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[0], 0, 9U * sizeof
         (real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[8] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3_g *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3_g * 8.0;
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Linv[0], 0, 81U * sizeof
         (real_T));
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Linv[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
      + 9 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] = 1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.P
      [(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k << 3) +
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Linv[80] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv0[8] = -1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv0[17] = 0.0;
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv0[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
      = -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3_g;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv0[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
      + 9] = -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gain3_g;

    // MATLAB Function: '<S45>/Gl_matrices'
    for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 < 3;
         ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_tmp =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0 + 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k;
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k
        [ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_tmp] = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1 < 15;
           ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k
          [ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_tmp] =
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Gtl[3 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1 +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0] * (real_T)b[15 *
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i1] +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k
          [3 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.i0];
      }
    }
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_m[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k
      [3 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_m[1 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k
      [3 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k + 1];
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_m[2 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TmpSignalConversionAtSFun_k
      [3 * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k + 2];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_m[24] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_m[25] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[1];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_m[26] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[2];
  ROPOD_4Wheel_Tdistk_mpcqpsolver
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Linv,
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f,
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.dv0,
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Gtl_m,
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp,
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x);

  // Switch: '<S19>/Switch1' incorporates:
  //   Constant: '<S19>/Movinf around SW axis center'
  //   Gain: '<S27>/Gain3'
  //   MATLAB Function: '<S45>/platform_forces_2_tau_dist_optimal'
  //   Product: '<S105>/Product1'
  //   Product: '<S115>/Product1'
  //   Product: '<S125>/Product1'
  //   Product: '<S135>/Product1'
  //   Product: '<S145>/Product1'
  //   Product: '<S155>/Product1'
  //   Product: '<S165>/Product1'
  //   Product: '<S95>/Product1'
  //   Sum: '<Root>/Add'

  if (rtb_Compare) {
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[0],
           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.MovinfaroundSWaxiscenter_Value
           [0], sizeof(real_T) << 3U);
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[0] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_b *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[0]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[1] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_n *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[1]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[2] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_l *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[2]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[3] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_p *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_j +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[3]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[4] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_m *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_hv +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[4]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[5] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_g *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m1 +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[5]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[6] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g_k *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_i +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[6]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[7] =
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.g *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz +
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.x[7]) *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sw_tau_2_curr;
  }

  // End of Switch: '<S19>/Switch1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S8>/Get Parameter'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bg.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bg.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2213.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // DataTypeConversion: '<S22>/Data Type Conversion6' incorporates:
    //   Constant: '<S22>/Constant3'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SW_COM1_ENABLE1);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 65536.0);
    }

    // DataTypeConversion: '<S22>/Data Type Conversion4' incorporates:
    //   MATLABSystem: '<S8>/Get Parameter'
    //   MATLABSystem: '<S8>/Get Parameter'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31)) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31, 65536.0);
    }

    // S-Function (sfix_bitop): '<S22>/Bitwise Operator1' incorporates:
    //   DataTypeConversion: '<S22>/Data Type Conversion4'
    //   DataTypeConversion: '<S22>/Data Type Conversion6'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BitwiseOperator1 = (uint16_T)
      ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0 ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) &
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 < 0.0 ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31));

    // DataTypeConversion: '<S22>/Data Type Conversion7' incorporates:
    //   Constant: '<S22>/Constant4'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SW_COM1_ENABLE2);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 65536.0);
    }

    // DataTypeConversion: '<S22>/Data Type Conversion5' incorporates:
    //   Gain: '<S22>/shift'
    //   MATLABSystem: '<S8>/Get Parameter'
    //   MATLABSystem: '<S8>/Get Parameter'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.shift_Gain *
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31)) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31, 65536.0);
    }

    // S-Function (sfix_bitop): '<S22>/Bitwise Operator2' incorporates:
    //   DataTypeConversion: '<S22>/Data Type Conversion5'
    //   DataTypeConversion: '<S22>/Data Type Conversion7'

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BitwiseOperator2 = (uint16_T)
      ((ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0 ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) &
       (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 < 0.0 ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31));

    // Gain: '<S22>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain_Gain_a *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain1_Gain_bw *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;
  }

  // Constant: '<S22>/Constant'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_pl;

  // Constant: '<S22>/Constant1'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2_p =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_b;

  // Constant: '<S22>/Constant10'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant10_Value;

  // Constant: '<S22>/Constant2'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp_k =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_nc;

  // Constant: '<S22>/Constant6'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2_pi =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant6_Value;

  // Constant: '<S22>/Constant7'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant7_Value;

  // Constant: '<S22>/Constant8'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp_a =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant8_Value;

  // Constant: '<S22>/Constant9'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant9_Value;

  // Switch: '<S19>/Switch' incorporates:
  //   Constant: '<S19>/Constant13'
  //   Constant: '<S19>/Constant5'

  if (rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SW_COM1_MODE_VELOCITY;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SW_COM1_MODE_TORQUE;
  }

  // End of Switch: '<S19>/Switch'

  // DataTypeConversion: '<S22>/Data Type Conversion2'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = floor
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n);
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25) || rtIsInf
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25, 65536.0);
  }

  // DataTypeConversion: '<S22>/Data Type Conversion3' incorporates:
  //   Constant: '<S22>/Constant11'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = 0.0 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SW_COM1_USE_TS;
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31)) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31, 65536.0);
  }

  // Gain: '<S22>/Gain10' incorporates:
  //   DataTypeConversion: '<S22>/Data Type Conversion2'
  //   DataTypeConversion: '<S22>/Data Type Conversion3'
  //   S-Function (sfix_bitop): '<S22>/Bitwise Operator'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1 = (real_T)(uint16_T)
    ((uint16_T)((uint16_T)
                (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BitwiseOperator1 |
                 ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BitwiseOperator2) |
                (uint16_T)(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 < 0.0
       ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
       -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 : (int32_T)(uint16_T)
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25)) | (uint16_T)
     ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31) * ((real_T)
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain10_Gain * 3.0517578125E-5);
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S22>/Gain11'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n_o =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain11_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain12'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain12_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain13'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain13_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain15'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n_c =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain15_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain16'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain16_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain17'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n_p =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain17_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;
  }

  // Gain: '<S22>/Gain8'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_b =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain8_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1;

  // Gain: '<S22>/Gain14'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_f =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain14_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_b;

  // Gain: '<S22>/Gain18'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_bn =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain18_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_f;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Gain: '<S22>/Gain19'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p_d =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain19_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p_m =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain2_Gain_l3 *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n_n =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain3_Gain_n *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain4'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p_m =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain4_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain5'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n_b =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain5_Gain_e *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain6'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p_g =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain6_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain7'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n_m =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain7_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;

    // Gain: '<S22>/Gain9'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p_l =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Gain9_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;
  }

  // Gain: '<S22>/sign_convention'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sign_convention_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[1];

  // Gain: '<S22>/sign_convention1'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sign_convention1_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[3];

  // Gain: '<S22>/sign_convention2'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2_n =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sign_convention2_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[5];

  // Gain: '<S22>/sign_convention3'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2_a =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.sign_convention3_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[7];

  // MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0] = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_n / 2.0);

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant1_Value_n / 2.0);

  // MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant2'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[1] = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_a / 2.0);

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant2'
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
  //   SignalConversion: '<S3>/TmpSignal ConversionAtCoordinate Transformation ConversionInport1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant2_Value_a / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE
     [2] / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE
     [2] / 2.0);

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   Constant: '<S15>/Constant'
  //   Constant: '<S3>/Constant'
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Pose.Pose.Position.X
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE[0];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Pose.Pose.Position.Y
    =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE[1];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Pose.Pose.Position.Z
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant_Value_f2;

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[1];

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Pose.Pose.Orientation.W
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n -
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *=
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[1];

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   Constant: '<S3>/Constant3'
  //   Constant: '<S3>/Constant4'
  //   Constant: '<S3>/Constant5'
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Pose.Pose.Orientation.X
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Pose.Pose.Orientation.Y
    = -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_pp[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.max_current *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Pose.Pose.Orientation.Z
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t27 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz_n;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Twist.Twist.Linear.X
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[0];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Twist.Twist.Linear.Y
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[1];
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Twist.Twist.Linear.Z
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant3_Value;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Twist.Twist.Angular.X
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant4_Value_i;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Twist.Twist.Angular.Y
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Constant5_Value_h;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment.Twist.Twist.Angular.Z
    = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[2];

  // RateTransition: '<S3>/Rate Transition'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // Outputs for Atomic SubSystem: '<S3>/Publish'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    Pub_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_1896.publish
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.BusAssignment);

    // End of Outputs for SubSystem: '<S3>/Publish'
  }

  // End of RateTransition: '<S3>/Rate Transition'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Start for MATLABSystem: '<S8>/Get Parameter6'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m5.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m5.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4048.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // End of Start for MATLABSystem: '<S8>/Get Parameter6'

    // Start for MATLABSystem: '<S8>/Get Parameter7'
    rtb_NotEqual_l2 = false;
    p = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nk.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp)) {
      p = false;
    }

    if (p) {
      rtb_NotEqual_l2 = true;
    }

    if (!rtb_NotEqual_l2) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nk.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4050.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Product1_i);

    // End of Start for MATLABSystem: '<S8>/Get Parameter7'
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[1] ==
      0) {
    // Update for Delay: '<S10>/Enabled Delay'
    if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SourceBlock_o1) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.EnabledDelay_DSTATE =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DigitalClock;
    }

    // End of Update for Delay: '<S10>/Enabled Delay'

    // Update for UnitDelay: '<S34>/Delay Input2'
    //
    //  Block description for '<S34>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2;

    // Update for UnitDelay: '<S35>/Delay Input2'
    //
    //  Block description for '<S35>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_l;

    // Update for UnitDelay: '<S36>/Delay Input2'
    //
    //  Block description for '<S36>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DifferenceInputs2_g;

    // Update for UnitDelay: '<S47>/UD'
    //
    //  Block description for '<S47>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_1;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_TSamp_idx_2;
  }

  // Update for DiscreteTransferFcn: '<S99>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_h;

  // Update for DiscreteIntegrator: '<S97>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_l;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S100>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_l =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1_k +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_j;

  // Update for DiscreteTransferFcn: '<S101>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_l =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_e;

  // Update for UnitDelay: '<S95>/Unit Delay' incorporates:
  //   Product: '<S95>/Product4'
  //   Sum: '<S95>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_a *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch2_o +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_i;

  // Update for DiscreteTransferFcn: '<S109>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_f =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Yk1;

  // Update for DiscreteIntegrator: '<S107>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_b =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t14_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_b =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S110>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_f =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1_f;

  // Update for DiscreteTransferFcn: '<S111>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_o =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch_j;

  // Update for UnitDelay: '<S105>/Unit Delay' incorporates:
  //   Product: '<S105>/Product4'
  //   Sum: '<S105>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_d =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_k *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_e +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.sampletime_d;

  // Update for DiscreteTransferFcn: '<S119>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_k =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_a;

  // Update for DiscreteIntegrator: '<S117>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_o =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_et;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_d =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S120>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_fl =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t34_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_l;

  // Update for DiscreteTransferFcn: '<S121>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_h;

  // Update for UnitDelay: '<S115>/Unit Delay' incorporates:
  //   Product: '<S115>/Product4'
  //   Sum: '<S115>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_c *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_h +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_h;

  // Update for DiscreteTransferFcn: '<S129>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_gl =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_n;

  // Update for DiscreteIntegrator: '<S127>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_k =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_d;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_f =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S130>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_bo =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_e_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_e;

  // Update for DiscreteTransferFcn: '<S131>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_at;

  // Update for UnitDelay: '<S125>/Unit Delay' incorporates:
  //   Product: '<S125>/Product4'
  //   Sum: '<S125>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_f5 *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_j +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_oj;

  // Update for DiscreteTransferFcn: '<S139>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_i;

  // Update for DiscreteIntegrator: '<S137>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_h =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_f_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_f;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_dm =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S140>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_j =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_k1_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_k1;

  // Update for DiscreteTransferFcn: '<S141>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_b =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_l;

  // Update for UnitDelay: '<S135>/Unit Delay' incorporates:
  //   Product: '<S135>/Product4'
  //   Sum: '<S135>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_k =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_i *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_hv +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_j;

  // Update for DiscreteTransferFcn: '<S149>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fs =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_k;

  // Update for DiscreteIntegrator: '<S147>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ji =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_m0_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_n =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S150>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_o_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_o;

  // Update for DiscreteTransferFcn: '<S151>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fw =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_m;

  // Update for UnitDelay: '<S145>/Unit Delay' incorporates:
  //   Product: '<S145>/Product4'
  //   Sum: '<S145>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_o =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_fe *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_m1 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_f;

  // Update for DiscreteTransferFcn: '<S159>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_e =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_o;

  // Update for DiscreteIntegrator: '<S157>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_m =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_DOut_g_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_g;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_p =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S160>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_bd =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_b_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_b;

  // Update for DiscreteTransferFcn: '<S161>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_e2 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_tmp_kx;

  // Update for UnitDelay: '<S155>/Unit Delay' incorporates:
  //   Product: '<S155>/Product4'
  //   Sum: '<S155>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_i =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_f *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.DOut_i +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_b;

  // Update for DiscreteTransferFcn: '<S169>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ir =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz;

  // Update for DiscreteIntegrator: '<S167>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_pe;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_k =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S170>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ft =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_h_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Integrator_h;

  // Update for DiscreteTransferFcn: '<S171>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_d =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz;

  // Update for UnitDelay: '<S165>/Unit Delay' incorporates:
  //   Product: '<S165>/Product4'
  //   Sum: '<S165>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_c =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_pole_fhz +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Sum_by;

  // Update for DiscreteTransferFcn: '<S58>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ku =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t4;

  // Update for DiscreteIntegrator: '<S56>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_mx =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t6;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_fn =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S59>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_jf =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_2 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t8;

  // Update for DiscreteTransferFcn: '<S60>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_j =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t9;

  // Update for UnitDelay: '<S54>/Unit Delay' incorporates:
  //   Product: '<S54>/Product4'
  //   Sum: '<S54>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_g =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_jp *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t2 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t5;

  // Update for DiscreteTransferFcn: '<S68>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fc =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10;

  // Update for DiscreteIntegrator: '<S66>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c5 =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.I_freq_hz_e +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.FilterDifferentiatorTF_m;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_o =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S69>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_p =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t22 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t15;

  // Update for DiscreteTransferFcn: '<S70>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_dl =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LL_zero_fhz_m;

  // Update for UnitDelay: '<S64>/Unit Delay' incorporates:
  //   Product: '<S64>/Product4'
  //   Sum: '<S64>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_gb =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_j *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.LPF_fhz_n +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t11;

  // Update for DiscreteTransferFcn: '<S78>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ei =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_3;

  // Update for DiscreteIntegrator: '<S76>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_d =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t10_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_m =
    (int8_T)rtb_Compare;

  // Update for DiscreteIntegrator: '<S79>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_os =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t30 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t26;

  // Update for DiscreteTransferFcn: '<S80>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_p =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t24;

  // Update for UnitDelay: '<S74>/Unit Delay' incorporates:
  //   Product: '<S74>/Product4'
  //   Sum: '<S74>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_f =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.a_cg *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t17 +
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t18;

  // MATLAB Function: '<S2>/pos_rot_matrix' incorporates:
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE
     [2]);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE
     [2]);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[3] =
    -ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[6] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t31;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[4] =
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.t25;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[7] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[5] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[8] = 1.0;
  for (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k < 3;
       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k++) {
    // Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
      +=
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DiscreteTimeIntegrator_gainval
      * (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
         + 6] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[2] +
         (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k
          + 3] * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[1] +
          ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.f[ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.k]
          * ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Diff[0]));
  }

  // End of MATLAB Function: '<S2>/pos_rot_matrix'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.t[0] =
    (++ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.clockTick0) *
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.stepSize0;
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.TaskCounters.TID[2] ==
      0) {
    // Update absolute timer for sample time: [1.0s, 0.0s]
    // The "clockTick2" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 1.0, which is the step size
    //  of the task. Size of "clockTick2" ensures timer will not overflow during the
    //  application lifespan selected.

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.clockTick2++;
  }

  rate_scheduler();
}

// Model initialize function
void ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M, 0,
                sizeof(RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T));
  rtsiSetSolverName(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfo,
                    "FixedStepDiscrete");
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfoPtr =
    (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleTimes =
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleTimesArray[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.offsetTimes =
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.offsetTimesArray[0]);

    // task periods
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleTimes[0] = (0.001);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleTimes[1] = (0.01);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleTimes[2] = (1.0);

    // task offsets
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.offsetTimes[0] = (0.0);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.offsetTimes[1] = (0.0);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M,
             &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleHits =
      (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M, -1);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.stepSize0 = 0.001;
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfoPtr =
    (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfo);
  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfo,
                       0.001);
  rtsiSetSolverMode(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  // block I/O
  (void) memset(((void *) &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B), 0,
                sizeof(B_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T));

  // states (dwork)
  (void) memset((void *)&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW, 0,
                sizeof(DW_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_T));

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo =
      &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.sfcnInfo;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Sizes.numSampTimes);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.taskTimePtrs[0]
      = &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M)[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.taskTimePtrs[1]
      = &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M)[1]);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.taskTimePtrs[2]
      = &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,
                   ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo,
                      &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->solverInfoPtr);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->Sizes.numSFcns = (5);

  // register each child
  {
    (void) memset((void *)
                  &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  5*sizeof(SimStruct));
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions =
      (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.childSFunctionPtrs
       [0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[i] =
          (&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.childSFunctions
           [i]);
      }
    }

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/<S5>/ECAT_Interface (ECAT_Interface) 
    {
      SimStruct *rts =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts,
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods2
                           [0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods3
                           [0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods4
                           [0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.ECAT_Interface_i));
        }
      }

      // path info
      ssSetModelName(rts, "ECAT_Interface");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/ECAT_Interface");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ECAT_Interface_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.ECAT_Interface_P2_Size);
      }

      // work vectors
      ssSetRWork(rts, (real_T *)
                 &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.ECAT_Interface_RWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // RWORK
        ssSetDWorkWidth(rts, 0, 13);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.ECAT_Interface_RWORK
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/<S29>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[1];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts,
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods2
                           [1]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods3
                           [1]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods4
                           [1]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[0];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p_m;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n_n;
          sfcnUPtrs[8] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SFunction_P1_Size);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/<S30>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[2];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts,
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods2
                           [2]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods3
                           [2]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods4
                           [2]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_b;
          sfcnUPtrs[1] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2_pi;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[2];
          sfcnUPtrs[3] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2_g;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p_m;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n_b;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p_g;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n_m;
          sfcnUPtrs[8] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_o));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SFunction_P1_Size_a);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/<S31>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[3];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts,
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods2
                           [3]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods3
                           [3]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods4
                           [3]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_f;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2_p;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[4];
          sfcnUPtrs[3] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2_n;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p_l;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n_o;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n;
          sfcnUPtrs[8] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_b));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SFunction_P1_Size_b);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/<S32>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[4];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts,
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods2
                           [4]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods3
                           [4]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.methods4
                           [4]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command1_bn;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.command2_i;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.Switch1[6];
          sfcnUPtrs[3] =
            &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.setpoint2_a;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_p_d;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit1_n_c;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_p_i;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.limit2_n_p;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.timestamp;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.SFunction_m));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.SFunction_P1_Size_g);
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
    static const char_T tmp[28] = { '/', 's', 'm', 'a', 'r', 't', '_', 'w', 'h',
      'e', 'e', 'l', 's', '/', 'd', 'd', 'e', 'l', 't', 'a', '_', 'L', 'P', 'F',
      '_', 'f', 'h', 'z' };

    static const char_T tmp_0[63] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 's', 'm', 'a',
      'r', 't', '_', 'w', 'h', 'e', 'e', 'l', 's', '/', 'd', 'v', 'a', 'r', 'p',
      'h', 'i', '_', 'L', 'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_1[16] = { '/', 'o', 'd', 'o', 'm', '_', 'i', 'n',
      'c', 'o', 'm', 'p', 'l', 'e', 't', 'e' };

    static const char_T tmp_2[54] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 's', 'm', 'a',
      'r', 't', '_', 'w', 'h', 'e', 'e', 'l', 's', '/', 'e', 'n', 'a', 'b', 'l',
      'e' };

    static const char_T tmp_3[59] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 's', 'm', 'a',
      'r', 't', '_', 'w', 'h', 'e', 'e', 'l', 's', '/', 'm', 'a', 'x', '_', 'c',
      'u', 'r', 'r', 'e', 'n', 't' };

    static const char_T tmp_4[65] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n',
      't', 'r', '/', 'L', 'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_5[65] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n',
      't', 'r', '/', 'L', 'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_6[61] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n',
      't', 'r', '/', 'I', '_', 'f', 'h', 'z' };

    static const char_T tmp_7[61] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n',
      't', 'r', '/', 'K', 'g', 'a', 'i', 'n' };

    static const char_T tmp_8[63] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 't', 'h', 'e', 't', 'a', '_', 'c', 'n',
      't', 'r', '/', 'L', 'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_9[63] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r',
      '/', 'L', 'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_a[63] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r',
      '/', 'L', 'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_b[59] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r',
      '/', 'I', '_', 'f', 'h', 'z' };

    static const char_T tmp_c[59] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r',
      '/', 'K', 'g', 'a', 'i', 'n' };

    static const char_T tmp_d[61] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'x', 'd', 'y', '_', 'c', 'n', 't', 'r',
      '/', 'L', 'P', 'F', '_', 'f', 'h', 'z' };

    static const char_T tmp_e[66] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c',
      'n', 't', 'r', '/', 'L', 'L', '_', 'w', 'p', '_', 'f', 'h', 'z' };

    static const char_T tmp_f[66] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c',
      'n', 't', 'r', '/', 'L', 'L', '_', 'w', 'z', '_', 'f', 'h', 'z' };

    static const char_T tmp_g[62] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c',
      'n', 't', 'r', '/', 'I', '_', 'f', 'h', 'z' };

    static const char_T tmp_h[62] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c',
      'n', 't', 'r', '/', 'K', 'g', 'a', 'i', 'n' };

    static const char_T tmp_i[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'c', 'o', 'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_',
      't', 'h', 'e', 't', 'a' };

    static const char_T tmp_j[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'c', 'o', 'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_',
      't', 'h', 'e', 't', 'a' };

    static const char_T tmp_k[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_l[55] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'c', 'o', 'n', 'f', '/', 'm', 'a', 'x', '_', 'v', 'e', 'l', '_',
      'x', 'y' };

    static const char_T tmp_m[55] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'c', 'o', 'n', 'f', '/', 'm', 'a', 'x', '_', 'a', 'c', 'c', '_',
      'x', 'y' };

    static const char_T tmp_n[62] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 's', 'm', 'a',
      'r', 't', '_', 'w', 'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't',
      '_', 'o', 'f', 'f', 's', '_', 's', 'w', '4' };

    static const char_T tmp_o[62] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 's', 'm', 'a',
      'r', 't', '_', 'w', 'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't',
      '_', 'o', 'f', 'f', 's', '_', 's', 'w', '3' };

    static const char_T tmp_p[62] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 's', 'm', 'a',
      'r', 't', '_', 'w', 'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't',
      '_', 'o', 'f', 'f', 's', '_', 's', 'w', '2' };

    static const char_T tmp_q[62] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 's', 'm', 'a',
      'r', 't', '_', 'w', 'h', 'e', 'e', 'l', 's', '/', 'p', 'i', 'v', 'o', 't',
      '_', 'o', 'f', 'f', 's', '_', 's', 'w', '1' };

    static const char_T tmp_r[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o',
      's', '_', 'S', 'W', '4' };

    static const char_T tmp_s[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o',
      's', '_', 'S', 'W', '4' };

    static const char_T tmp_t[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o',
      's', '_', 'S', 'W', '3' };

    static const char_T tmp_u[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o',
      's', '_', 'S', 'W', '3' };

    static const char_T tmp_v[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o',
      's', '_', 'S', 'W', '2' };

    static const char_T tmp_w[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o',
      's', '_', 'S', 'W', '2' };

    static const char_T tmp_x[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'y', 'p', 'o',
      's', '_', 'S', 'W', '1' };

    static const char_T tmp_y[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'x', 'p', 'o',
      's', '_', 'S', 'W', '1' };

    static const char_T tmp_z[53] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'd', '_', 'w'
    };

    static const char_T tmp_10[53] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 's', '_', 'w'
    };

    static const char_T tmp_11[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'R', '_', 'S', 'W', '4' };

    static const char_T tmp_12[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'L', '_', 'S', 'W', '4' };

    static const char_T tmp_13[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'R', '_', 'S', 'W', '3' };

    static const char_T tmp_14[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'L', '_', 'S', 'W', '3' };

    static const char_T tmp_15[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'R', '_', 'S', 'W', '2' };

    static const char_T tmp_16[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'L', '_', 'S', 'W', '2' };

    static const char_T tmp_17[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'R', '_', 'S', 'W', '1' };

    static const char_T tmp_18[58] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'b', 'a', 's',
      'e', '_', 'k', 'i', 'n', '_', 'm', 'o', 'd', 'e', 'l', '/', 'r', '_', 'w',
      'L', '_', 'S', 'W', '1' };

    static const char_T tmp_19[64] = { '/', 'r', 'o', 'p', 'o', 'd', '/', 'r',
      'o', 'p', 'o', 'd', '_', '4', 'w', 'h', 'e', 'e', 'l', '_', 'k', 'i', 'n',
      'b', '_', 'c', 'n', 't', 'r', '_', 'n', 'o', 'd', 'e', '/', 'p', 'l', 'a',
      't', 'f', 'o', 'r', 'm', '_', 'd', 'v', 'a', 'r', 'p', 'h', 'i', '_', 'c',
      'n', 't', 'r', '/', 'L', 'P', 'F', '_', 'f', 'h', 'z' };

    char_T tmp_1a[29];
    char_T tmp_1b[17];
    char_T tmp_1c[9];
    int32_T i;

    // Start for S-Function (ECAT_Interface): '<S5>/ECAT_Interface'
    // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
    {
      SimStruct *rts =
        ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for MATLABSystem: '<S6>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ft.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ft.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ft.isInitialized = 1;
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv2[0], &tmp_19[0],
           sizeof(char_T) << 6U);
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv2[64] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2935.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv2);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2935.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2935.set_initial_value
      (ParameterInitialValu_hifyy5qsjp);

    // Start for MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_be.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_be.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_be.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_18[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2173.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2173.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2173.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter'

    // Start for MATLABSystem: '<S7>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_17[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2176.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2176.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2176.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter11'

    // Start for MATLABSystem: '<S7>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fa.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fa.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fa.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_16[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2177.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2177.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2177.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter12'

    // Start for MATLABSystem: '<S7>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_p.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_p.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_15[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2178.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2178.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2178.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter13'

    // Start for MATLABSystem: '<S7>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l1.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l1.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_14[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2179.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2179.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2179.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter14'

    // Start for MATLABSystem: '<S7>/Get Parameter15'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pe.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pe.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pe.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_13[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2180.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2180.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2180.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter15'

    // Start for MATLABSystem: '<S7>/Get Parameter16'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_12[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2181.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2181.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2181.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter16'

    // Start for MATLABSystem: '<S7>/Get Parameter17'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bc.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bc.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bc.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_11[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2182.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2182.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2182.set_initial_value
      (ParameterInitia_hifyy5qsjpeg2x0);

    // End of Start for MATLABSystem: '<S7>/Get Parameter17'

    // Start for MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hv.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hv.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hv.isInitialized = 1;
    for (i = 0; i < 53; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv10[i] = tmp_10[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv10[53] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2174.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv10);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2174.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2174.set_initial_value
      (ParameterInitial_hifyy5qsjpeg2x);

    // End of Start for MATLABSystem: '<S7>/Get Parameter1'

    // Start for MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_j.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_j.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 53; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv10[i] = tmp_z[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv10[53] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2183.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv10);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2183.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2183.set_initial_value
      (ParameterInitialV_hifyy5qsjpeg2);

    // End of Start for MATLABSystem: '<S7>/Get Parameter2'

    // Start for MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_y[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2184.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2184.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2184.set_initial_value
      (ParameterInitialVa_hifyy5qsjpeg);

    // End of Start for MATLABSystem: '<S7>/Get Parameter3'

    // Start for MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jj.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_x[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2185.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2185.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2185.set_initial_value
      (ParameterInitialVa_hifyy5qsjpeg);

    // End of Start for MATLABSystem: '<S7>/Get Parameter4'

    // Start for MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_w[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2186.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2186.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2186.set_initial_value
      (ParameterInitialVal_hifyy5qsjpe);

    // End of Start for MATLABSystem: '<S7>/Get Parameter5'

    // Start for MATLABSystem: '<S7>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ep.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ep.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ep.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_v[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2187.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2187.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2187.set_initial_value
      (ParameterInitialVa_hifyy5qsjpeg);

    // End of Start for MATLABSystem: '<S7>/Get Parameter6'

    // Start for MATLABSystem: '<S7>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_lm.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_lm.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_lm.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_u[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2188.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2188.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2188.set_initial_value
      (ParameterInitialVal_hifyy5qsjpe);

    // End of Start for MATLABSystem: '<S7>/Get Parameter7'

    // Start for MATLABSystem: '<S7>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ew.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ew.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ew.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_t[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2189.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2189.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2189.set_initial_value
      (ParameterInitialVal_hifyy5qsjpe);

    // End of Start for MATLABSystem: '<S7>/Get Parameter8'

    // Start for MATLABSystem: '<S7>/Get Parameter9'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nj.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_s[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2190.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2190.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2190.set_initial_value
      (ParameterInitialVa_hifyy5qsjpeg);

    // End of Start for MATLABSystem: '<S7>/Get Parameter9'

    // Start for MATLABSystem: '<S7>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b1.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b1.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_r[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2175.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2175.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2175.set_initial_value
      (ParameterInitialVal_hifyy5qsjpe);

    // End of Start for MATLABSystem: '<S7>/Get Parameter10'

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_k.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_k.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 62; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[i] = tmp_q[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[62] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2214.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2214.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2214.set_initial_value
      (R_ParameterInitia_g);

    // End of Start for MATLABSystem: '<S8>/Get Parameter1'

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 62; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[i] = tmp_p[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[62] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2216.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2216.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2216.set_initial_value
      (R_ParameterInitia_o);

    // End of Start for MATLABSystem: '<S8>/Get Parameter3'

    // Start for MATLABSystem: '<S8>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i4.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i4.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i4.isInitialized = 1;
    for (i = 0; i < 62; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[i] = tmp_o[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[62] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2217.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2217.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2217.set_initial_value
      (R_ParameterInitia_k);

    // End of Start for MATLABSystem: '<S8>/Get Parameter4'

    // Start for MATLABSystem: '<S8>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 62; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[i] = tmp_n[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[62] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2218.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2218.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2218.set_initial_value
      (R_ParameterInitia_m);

    // End of Start for MATLABSystem: '<S8>/Get Parameter5'

    // Start for MATLABSystem: '<S9>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj.isInitialized = 1;
    for (i = 0; i < 55; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv8[i] = tmp_m[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv8[55] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2237.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv8);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2237.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2237.set_initial_value
      (R_ParameterInitia_a);

    // End of Start for MATLABSystem: '<S9>/Get Parameter'

    // Start for MATLABSystem: '<S9>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_f.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_f.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 55; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv8[i] = tmp_l[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv8[55] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2238.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv8);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2238.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2238.set_initial_value
      (R_ParameterInitia_a);

    // End of Start for MATLABSystem: '<S9>/Get Parameter1'

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S17>/SourceBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a1.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_1c[i] = tmp_k[i];
    }

    tmp_1c[8] = '\x00';
    Sub_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_1899.createSubscriber(tmp_1c,
      ROPOD_4Wheel__MessageQueueLen_h);

    // End of Start for MATLABSystem: '<S17>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'

    // Start for Delay: '<S10>/Enabled Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.EnabledDelay = 0.0;

    // Start for MATLABSystem: '<S9>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_n.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_n.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_j[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2239.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2239.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2239.set_initial_value
      (R_ParameterInitia_l);

    // End of Start for MATLABSystem: '<S9>/Get Parameter2'

    // Start for MATLABSystem: '<S9>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 58; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[i] = tmp_i[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7[58] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2240.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2240.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2240.set_initial_value
      (R_ParameterInitia_l);

    // End of Start for MATLABSystem: '<S9>/Get Parameter3'

    // Start for MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pz.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pz.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pz.isInitialized = 1;
    for (i = 0; i < 62; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[i] = tmp_h[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[62] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2931.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2931.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2931.set_initial_value
      (ParameterInitialValue_hifyy5qsj);

    // End of Start for MATLABSystem: '<S6>/Get Parameter10'

    // Start for MATLABSystem: '<S6>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jt.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jt.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jt.isInitialized = 1;
    for (i = 0; i < 62; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[i] = tmp_g[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4[62] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2932.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2932.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2932.set_initial_value
      (ParameterInitialValue_hifyy5qs);

    // End of Start for MATLABSystem: '<S6>/Get Parameter11'

    // Start for MATLABSystem: '<S6>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_da.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_da.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_da.isInitialized = 1;
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv0[0], &tmp_f[0], 66U *
           sizeof(char_T));
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv0[66] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2933.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv0);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2933.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2933.set_initial_value
      (R_ParameterInitialValue_hifyy5q);

    // Start for MATLABSystem: '<S6>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e5.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e5.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e5.isInitialized = 1;
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv0[0], &tmp_e[0], 66U *
           sizeof(char_T));
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv0[66] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2934.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv0);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2934.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2934.set_initial_value
      (RO_ParameterInitialValue_hifyy5);

    // Start for MATLABSystem: '<S6>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_c.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_c.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 61; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5[i] = tmp_d[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5[61] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2903.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2903.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2903.set_initial_value
      (ROPOD_ParameterInitialValue_hif);

    // End of Start for MATLABSystem: '<S6>/Get Parameter6'

    // Start for MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_mn.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_mn.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_mn.isInitialized = 1;
    for (i = 0; i < 59; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6[i] = tmp_c[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6[59] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2716.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2716.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2716.set_initial_value
      (ROP_ParameterInitialValue_hifyy);

    // End of Start for MATLABSystem: '<S6>/Get Parameter'

    // Start for MATLABSystem: '<S6>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d0.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d0.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d0.isInitialized = 1;
    for (i = 0; i < 59; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6[i] = tmp_b[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6[59] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2898.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2898.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2898.set_initial_value
      (ROPO_ParameterInitialValue_hify);

    // End of Start for MATLABSystem: '<S6>/Get Parameter3'

    // Start for MATLABSystem: '<S6>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ey.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ey.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ey.isInitialized = 1;
    for (i = 0; i < 63; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[i] = tmp_a[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[63] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2900.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2900.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2900.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter4'

    // Start for MATLABSystem: '<S6>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g0.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g0.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g0.isInitialized = 1;
    for (i = 0; i < 63; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[i] = tmp_9[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[63] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2902.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2902.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2902.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter5'

    // Start for MATLABSystem: '<S6>/Get Parameter9'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ch.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ch.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ch.isInitialized = 1;
    for (i = 0; i < 63; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[i] = tmp_8[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[63] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2923.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2923.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2923.set_initial_value
      (ROPOD_ParameterInitialValue_hif);

    // End of Start for MATLABSystem: '<S6>/Get Parameter9'

    // Start for MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fy.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fy.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fy.isInitialized = 1;
    for (i = 0; i < 61; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5[i] = tmp_7[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5[61] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2919.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2919.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2919.set_initial_value
      (ROPOD__ParameterInitialValue_hi);

    // End of Start for MATLABSystem: '<S6>/Get Parameter1'

    // Start for MATLABSystem: '<S6>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hq.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hq.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hq.isInitialized = 1;
    for (i = 0; i < 61; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5[i] = tmp_6[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5[61] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2920.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2920.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2920.set_initial_value
      (ROPOD_4_ParameterInitialValue_h);

    // End of Start for MATLABSystem: '<S6>/Get Parameter2'

    // Start for MATLABSystem: '<S6>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_eq.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_eq.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_eq.isInitialized = 1;
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv1[0], &tmp_5[0], 65U *
           sizeof(char_T));
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv1[65] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2921.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv1);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2921.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2921.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // Start for MATLABSystem: '<S6>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a.isInitialized = 1;
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv1[0], &tmp_4[0], 65U *
           sizeof(char_T));
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv1[65] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2922.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv1);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2922.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2922.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // Start for MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_h.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_h.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 59; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6[i] = tmp_3[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6[59] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2215.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2215.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2215.set_initial_value
      (RO_ParameterInitialValue_hifyy5);

    // End of Start for MATLABSystem: '<S8>/Get Parameter2'

    // Start for MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bg.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bg.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bg.isInitialized = 1;
    for (i = 0; i < 54; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv9[i] = tmp_2[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv9[54] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2213.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv9);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2213.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_2213.set_initial_value
      (R_ParameterInitia_a);

    // End of Start for MATLABSystem: '<S8>/Get Parameter'

    // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nv.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nv.isInitialized = 1;

    // Start for Atomic SubSystem: '<S3>/Publish'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hy.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hy.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_1b[i] = tmp_1[i];
    }

    tmp_1b[16] = '\x00';
    Pub_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_1896.createPublisher(tmp_1b,
      ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S16>/SinkBlock'
    // End of Start for SubSystem: '<S3>/Publish'

    // Start for MATLABSystem: '<S8>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m5.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m5.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m5.isInitialized = 1;
    for (i = 0; i < 63; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[i] = tmp_0[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3[63] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4048.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4048.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4048.set_initial_value
      (ParameterInitialValu_hifyy5qsjp);

    // End of Start for MATLABSystem: '<S8>/Get Parameter6'

    // Start for MATLABSystem: '<S8>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nk.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nk.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nk.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      tmp_1a[i] = tmp[i];
    }

    tmp_1a[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4050.initialize(tmp_1a);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4050.initialize_error_codes
      (0U, 1U, 2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_4050.set_initial_value
      (ParameterInitialValu_hifyy5qsjp);

    // End of Start for MATLABSystem: '<S8>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_ZC
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__i
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__c
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__k
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__l
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__j
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__f
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__h
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l3
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset_l5
      = UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_PrevZCX.FilterDifferentiatorTF_Reset__g
      = UNINITIALIZED_ZCSIG;

    // InitializeConditions for Delay: '<S10>/Enabled Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.EnabledDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S34>/Delay Input2'
    //
    //  Block description for '<S34>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DelayInput2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S35>/Delay Input2'
    //
    //  Block description for '<S35>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DelayInput2_InitialCondition_o;

    // InitializeConditions for UnitDelay: '<S36>/Delay Input2'
    //
    //  Block description for '<S36>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DelayInput2_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DelayInput2_InitialCondition_c;

    // InitializeConditions for DiscreteTransferFcn: '<S99>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_InitialS;

    // InitializeConditions for DiscreteIntegrator: '<S97>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState = 0;

    // InitializeConditions for DiscreteIntegrator: '<S100>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_l =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_b;

    // InitializeConditions for DiscreteTransferFcn: '<S101>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_l
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_p;

    // InitializeConditions for UnitDelay: '<S95>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition;

    // InitializeConditions for DiscreteTransferFcn: '<S109>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_f
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_f;

    // InitializeConditions for DiscreteIntegrator: '<S107>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_b =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_bi;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_b = 0;

    // InitializeConditions for DiscreteIntegrator: '<S110>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_o;

    // InitializeConditions for DiscreteTransferFcn: '<S111>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_o
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_d;

    // InitializeConditions for UnitDelay: '<S105>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_d =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_i;

    // InitializeConditions for DiscreteTransferFcn: '<S119>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_k
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_db;

    // InitializeConditions for DiscreteIntegrator: '<S117>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_o =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_a;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_d = 0;

    // InitializeConditions for DiscreteIntegrator: '<S120>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_fl =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_e;

    // InitializeConditions for DiscreteTransferFcn: '<S121>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_g
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_pj;

    // InitializeConditions for UnitDelay: '<S115>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_k;

    // InitializeConditions for DiscreteTransferFcn: '<S129>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_gl
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_a;

    // InitializeConditions for DiscreteIntegrator: '<S127>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_h;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_f = 0;

    // InitializeConditions for DiscreteIntegrator: '<S130>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_bo =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_be;

    // InitializeConditions for DiscreteTransferFcn: '<S131>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_h
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_j;

    // InitializeConditions for UnitDelay: '<S125>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_h =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_n;

    // InitializeConditions for DiscreteTransferFcn: '<S139>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_i
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_l;

    // InitializeConditions for DiscreteIntegrator: '<S137>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_k;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_dm =
      0;

    // InitializeConditions for DiscreteIntegrator: '<S140>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_kh;

    // InitializeConditions for DiscreteTransferFcn: '<S141>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_b
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_h;

    // InitializeConditions for UnitDelay: '<S135>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_m;

    // InitializeConditions for DiscreteTransferFcn: '<S149>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fs
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_fq;

    // InitializeConditions for DiscreteIntegrator: '<S147>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ji =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_l;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_n = 0;

    // InitializeConditions for DiscreteIntegrator: '<S150>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_e =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_lm;

    // InitializeConditions for DiscreteTransferFcn: '<S151>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fw
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_i;

    // InitializeConditions for UnitDelay: '<S145>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_o =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_a;

    // InitializeConditions for DiscreteTransferFcn: '<S159>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_e
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_hh;

    // InitializeConditions for DiscreteIntegrator: '<S157>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_m =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_ed;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_p = 0;

    // InitializeConditions for DiscreteIntegrator: '<S160>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_bd =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_l1;

    // InitializeConditions for DiscreteTransferFcn: '<S161>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_e2
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_lr;

    // InitializeConditions for UnitDelay: '<S155>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_i =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_e;

    // InitializeConditions for DiscreteTransferFcn: '<S169>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ir
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_b;

    // InitializeConditions for DiscreteIntegrator: '<S167>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_h1;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_k = 0;

    // InitializeConditions for DiscreteIntegrator: '<S170>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_ft =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_es;

    // InitializeConditions for DiscreteTransferFcn: '<S171>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_d
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_hz;

    // InitializeConditions for UnitDelay: '<S165>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_p;

    // InitializeConditions for DiscreteTransferFcn: '<S58>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ku
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_ae;

    // InitializeConditions for DiscreteIntegrator: '<S56>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_mx =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_m;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_fn =
      0;

    // InitializeConditions for DiscreteIntegrator: '<S59>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_jf =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_g;

    // InitializeConditions for DiscreteTransferFcn: '<S60>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_j
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_c;

    // InitializeConditions for UnitDelay: '<S54>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_g =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_pg;

    // InitializeConditions for DiscreteTransferFcn: '<S68>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_fc
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_b2;

    // InitializeConditions for DiscreteIntegrator: '<S66>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_c5 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_oh;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_o = 0;

    // InitializeConditions for DiscreteIntegrator: '<S69>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_p =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_f;

    // InitializeConditions for DiscreteTransferFcn: '<S70>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_dl
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_k;

    // InitializeConditions for UnitDelay: '<S64>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_gb =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_ew;

    // InitializeConditions for DiscreteTransferFcn: '<S78>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_state_ei
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initi_bt;

    // InitializeConditions for DiscreteIntegrator: '<S76>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_d =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_c;
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_PrevResetState_m = 0;

    // InitializeConditions for DiscreteIntegrator: '<S79>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.Integrator_DSTATE_os =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Integrator_IC_l2;

    // InitializeConditions for DiscreteTransferFcn: '<S80>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.FilterDifferentiatorTF_states_p
      =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.FilterDifferentiatorTF_Initia_o;

    // InitializeConditions for UnitDelay: '<S74>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UnitDelay_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.UnitDelay_InitialCondition_if;

    // InitializeConditions for UnitDelay: '<S47>/UD'
    //
    //  Block description for '<S47>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE[0]
      = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DiscreteTimeIntegrator_IC;

    // InitializeConditions for UnitDelay: '<S47>/UD'
    //
    //  Block description for '<S47>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE[1]
      = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DiscreteTimeIntegrator_IC;

    // InitializeConditions for UnitDelay: '<S47>/UD'
    //
    //  Block description for '<S47>/UD':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.UD_DSTATE[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DiscreteDerivative_ICPrevScaled;

    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.DiscreteTimeIntegrator_DSTATE[2]
      = ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.DiscreteTimeIntegrator_IC;

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S17>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1'
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_B.In1 =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S17>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'
  }
}

// Model terminate function
void ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_terminate(void)
{
  // Terminate for S-Function (ECAT_Interface): '<S5>/ECAT_Interface'
  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Start for MATLABSystem: '<S6>/Get Parameter14'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ft.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ft.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter14'

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S29>/S-Function'
  // Level2 S-Function Block: '<S29>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S30>/S-Function'
  // Level2 S-Function Block: '<S30>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S31>/S-Function'
  // Level2 S-Function Block: '<S31>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S32>/S-Function'
  // Level2 S-Function Block: '<S32>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts =
      ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  // Start for MATLABSystem: '<S7>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_be.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_be.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter'

  // Start for MATLABSystem: '<S7>/Get Parameter11'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter11'

  // Start for MATLABSystem: '<S7>/Get Parameter12'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fa.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fa.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter12'

  // Start for MATLABSystem: '<S7>/Get Parameter13'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_p.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_p.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter13'

  // Start for MATLABSystem: '<S7>/Get Parameter14'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_l1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter14'

  // Start for MATLABSystem: '<S7>/Get Parameter15'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pe.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pe.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter15'

  // Start for MATLABSystem: '<S7>/Get Parameter16'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter16'

  // Start for MATLABSystem: '<S7>/Get Parameter17'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bc.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bc.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter17'

  // Start for MATLABSystem: '<S7>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hv.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hv.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter1'

  // Start for MATLABSystem: '<S7>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_j.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_j.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter2'

  // Start for MATLABSystem: '<S7>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter3'

  // Start for MATLABSystem: '<S7>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter4'

  // Start for MATLABSystem: '<S7>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter5'

  // Start for MATLABSystem: '<S7>/Get Parameter6'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ep.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ep.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter6'

  // Terminate for MATLABSystem: '<S7>/Get Parameter7'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_lm.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_lm.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter7'

  // Start for MATLABSystem: '<S7>/Get Parameter8'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ew.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ew.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter8'

  // Terminate for MATLABSystem: '<S7>/Get Parameter9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nj.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter9'

  // Start for MATLABSystem: '<S7>/Get Parameter10'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S7>/Get Parameter10'

  // Start for MATLABSystem: '<S8>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_k.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_k.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter1'

  // Start for MATLABSystem: '<S8>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter3'

  // Start for MATLABSystem: '<S8>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i4.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i4.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter4'

  // Start for MATLABSystem: '<S8>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_b.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter5'

  // Start for MATLABSystem: '<S9>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter'

  // Start for MATLABSystem: '<S9>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_f.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_f.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Start for MATLABSystem: '<S17>/SourceBlock'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a1.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S17>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe1'

  // Start for MATLABSystem: '<S9>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_n.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter2'

  // Start for MATLABSystem: '<S9>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_i.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/Get Parameter3'

  // Start for MATLABSystem: '<S6>/Get Parameter10'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pz.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_pz.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter10'

  // Start for MATLABSystem: '<S6>/Get Parameter11'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jt.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_jt.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter11'

  // Start for MATLABSystem: '<S6>/Get Parameter12'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_da.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_da.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter12'

  // Start for MATLABSystem: '<S6>/Get Parameter13'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e5.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_e5.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter13'

  // Start for MATLABSystem: '<S6>/Get Parameter6'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_c.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_c.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter6'

  // Start for MATLABSystem: '<S6>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_mn.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_mn.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter'

  // Start for MATLABSystem: '<S6>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d0.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_d0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter3'

  // Start for MATLABSystem: '<S6>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ey.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ey.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter4'

  // Start for MATLABSystem: '<S6>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g0.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_g0.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter5'

  // Start for MATLABSystem: '<S6>/Get Parameter9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ch.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_ch.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter9'

  // Start for MATLABSystem: '<S6>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fy.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_fy.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter1'

  // Start for MATLABSystem: '<S6>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hq.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter2'

  // Start for MATLABSystem: '<S6>/Get Parameter7'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_eq.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_eq.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter7'

  // Start for MATLABSystem: '<S6>/Get Parameter8'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_a.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/Get Parameter8'

  // Start for MATLABSystem: '<S8>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_h.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_h.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter2'

  // Start for MATLABSystem: '<S8>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bg.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_bg.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter'

  // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nv.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nv.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  // Terminate for Atomic SubSystem: '<S3>/Publish'
  // Start for MATLABSystem: '<S16>/SinkBlock'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hy.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_hy.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S16>/SinkBlock'
  // End of Terminate for SubSystem: '<S3>/Publish'

  // Start for MATLABSystem: '<S8>/Get Parameter6'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m5.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_m5.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter6'

  // Start for MATLABSystem: '<S8>/Get Parameter7'
  if (ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nk.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_hosp_platform_DW.obj_nk.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S8>/Get Parameter7'
}

//
// File trailer for generated code.
//
// [EOF]
//
