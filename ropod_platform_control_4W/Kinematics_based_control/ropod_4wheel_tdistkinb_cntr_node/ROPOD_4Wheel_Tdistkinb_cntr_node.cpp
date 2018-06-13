//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ROPOD_4Wheel_Tdistkinb_cntr_node.cpp
//
// Code generated for Simulink model 'ROPOD_4Wheel_Tdistkinb_cntr_node'.
//
// Model version                  : 1.254
// Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
// C/C++ source code generated on : Wed Jun 13 17:10:27 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ROPOD_4Wheel_Tdistkinb_cntr_node.h"
#include "ROPOD_4Wheel_Tdistkinb_cntr_node_private.h"
#define ParameterInitia_kdrlxgf1whozfcv (10.0)
#define ParameterInitialV_kdrlxgf1whozf (0.0525)
#define ParameterInitialVa_kdrlxgf1whoz (0.01)
#define ParameterInitialVal_kdrlxgf1who (0.08)
#define ParameterInitialValu_kdrlxgf1wh (0.21)
#define ParameterInitialValue_kdrlxgf1 (0.05)
#define ParameterInitialValue_kdrlxgf1w (-0.21)
#define ParameterInitial_kdrlxgf1whozfc (1.0)
#define ROPOD_4Wh_ParameterInitialValue (20.0)
#define ROPOD_4Wheel_Td_MessageQueueLen (1)
#define ROPOD_4Wheel__MessageQueueLen_k (5)
#define ROPOD_4_ParameterInitialValue_k (0.5)
#define ROPOD_ParameterInitialValue_kdr (100.0)
#define ROPOD__ParameterInitialValue_kd (150.0)
#define ROPO_ParameterInitialValue_kdrl (0.25)
#define ROP_ParameterInitialValue_kdrlx (200.0)
#define RO_ParameterInitialValue_kdrlxg (2.0)
#define R_ParameterInitia_b            (2.001)
#define R_ParameterInitia_k            (1.873)
#define R_ParameterInitia_l            (3.508)
#define R_ParameterInitia_m            (2.21)
#define R_ParameterInitia_o            (1.6)
#define R_ParameterInitialValue_kdrlxgf (0.0)

// Block signals (auto storage)
B_ROPOD_4Wheel_Tdistkinb_cntr_node_T ROPOD_4Wheel_Tdistkinb_cntr_node_B;

// Block states (auto storage)
DW_ROPOD_4Wheel_Tdistkinb_cntr_node_T ROPOD_4Wheel_Tdistkinb_cntr_node_DW;

// Previous zero-crossings (trigger) states
PrevZCX_ROPOD_4Wheel_Tdistkinb_cntr_node_T
  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX;

// Real-time model
RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_node_T ROPOD_4Wheel_Tdistkinb_cntr_node_M_;
RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_node_T *const
  ROPOD_4Wheel_Tdistkinb_cntr_node_M = &ROPOD_4Wheel_Tdistkinb_cntr_node_M_;

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

  (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[1])++;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[1]) > 9) {// Sample time: [0.01s, 0.0s] 
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[1] = 0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleHits[1] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[1] == 0);
  (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2])++;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2]) > 999) {// Sample time: [1.0s, 0.0s] 
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] = 0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleHits[2] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0);
}

//
// Output and update for atomic system:
//    '<S51>/MATLAB Function'
//    '<S60>/MATLAB Function'
//    '<S69>/MATLAB Function'
//    '<S89>/MATLAB Function'
//    '<S98>/MATLAB Function'
//    '<S107>/MATLAB Function'
//    '<S116>/MATLAB Function'
//    '<S125>/MATLAB Function'
//    '<S134>/MATLAB Function'
//    '<S143>/MATLAB Function'
//    '<S152>/MATLAB Function'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_n = 3.3121686421112381E-170;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_p = fabs(x[k - 1]);
      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_p >
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_n) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_l =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_n /
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_p;
        y = y * ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_l *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_l + 1.0;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_n =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_p;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_l =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_p /
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_n;
        y += ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_l *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_l;
      }
    }

    y = ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_n * sqrt(y);
  }

  return y;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static real_T ROPOD_4Wheel_Tdistkinb__xnrm2_n(int32_T n, const real_T x[9],
  int32_T ix0)
{
  real_T y;
  int32_T kend;
  int32_T k;
  y = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_g = 3.3121686421112381E-170;
  kend = (ix0 + n) - 1;
  for (k = ix0; k <= kend; k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_g = fabs(x[k - 1]);
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_g >
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_g) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_m =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_g /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_g;
      y = y * ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_m *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_m + 1.0;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_g =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_g;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_m =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk_g /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_g;
      y += ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_m *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.t_m;
    }
  }

  return ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_g * sqrt(y);
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_xrotg(real_T *a, real_T *b, real_T *c,
  real_T *s)
{
  real_T bds;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.roe = *b;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa = fabs(*a);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.absb = fabs(*b);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa >
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.absb) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.roe = *a;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.absb;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ads =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale;
    bds = ROPOD_4Wheel_Tdistkinb_cntr_node_B.absb /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale *= sqrt
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ads *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ads + bds * bds);
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.roe < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale =
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale;
    }

    *c = *a / ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale;
    *s = *b / ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale;
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa >
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.absb) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa = *s;
    } else if (*c != 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa = 1.0 / *c;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa = 1.0;
    }
  }

  *a = ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale;
  *b = ROPOD_4Wheel_Tdistkinb_cntr_node_B.absa;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr_svd(const real_T A[27], real_T U[3])
{
  int32_T q;
  int32_T qq;
  boolean_T apply_transform;
  int32_T qjj;
  int32_T m;
  int32_T kase;
  int32_T d_ii;
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[0], &A[0], 27U * sizeof
         (real_T));
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c[0] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c[2] = 0.0;
  apply_transform = false;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = ROPOD_4Wheel_Tdistkinb_cn_xnrm2(3,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 1);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[0] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] =
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0]) >= 1.0020841800044864E-292)
    {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0];
      for (qjj = 0; qjj + 1 < 4; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    } else {
      for (qjj = 0; qjj + 1 < 4; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[qjj] /=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0];
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[0]++;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] =
      -ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] = 0.0;
  }

  for (q = 1; q + 1 < 10; q++) {
    qjj = 3 * q;
    if (apply_transform) {
      ROPOD_4Wheel_Tdistkinb_cn_xaxpy(3, -(ROPOD_4Wheel_Tdistkinb_cn_xdotc(3,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 1,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, qjj + 1) /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[0]), 1,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, qjj + 1);
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[qjj];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = ROPOD_4Wheel_Tdistkinb__xnrm2_n(8,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e, 2);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0] =
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0]) >= 1.0020841800044864E-292)
    {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0];
      for (qq = 1; qq + 1 < 10; qq++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    } else {
      for (qq = 1; qq + 1 < 10; qq++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] /=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1]++;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0] =
      -ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0];
    for (qq = 1; qq + 1 < 4; qq++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c[qq] = 0.0;
    }

    for (qq = 1; qq + 1 < 10; qq++) {
      ROPOD_4Wheel_Tdistkinb__xaxpy_n(2, ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq],
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 3 * qq + 2,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c, 2);
    }

    for (qq = 1; qq + 1 < 10; qq++) {
      ROPOD_4Wheel_Tdistkinb_xaxpy_n2(2,
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1],
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c, 2,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 3 * qq + 2);
    }
  }

  apply_transform = false;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = ROPOD_4Wheel_Tdistkinb_cn_xnrm2(2,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 5);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm > 0.0) {
    apply_transform = true;
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[4] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] =
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    }

    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1]) >= 1.0020841800044864E-292)
    {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1];
      for (qjj = 4; qjj + 1 < 7; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    } else {
      for (qjj = 4; qjj + 1 < 7; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[qjj] /=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1];
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[4]++;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] =
      -ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] = 0.0;
  }

  for (q = 2; q + 1 < 10; q++) {
    qjj = 3 * q + 1;
    if (apply_transform) {
      ROPOD_4Wheel_Tdistkinb_cn_xaxpy(2, -(ROPOD_4Wheel_Tdistkinb_cn_xdotc(2,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 5,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, qjj + 1) /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[4]), 5,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, qjj + 1);
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[qjj];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = ROPOD_4Wheel_Tdistkinb__xnrm2_n(7,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e, 3);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1] =
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1]) >= 1.0020841800044864E-292)
    {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1];
      for (qq = 2; qq + 1 < 10; qq++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    } else {
      for (qq = 2; qq + 1 < 10; qq++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] /=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2]++;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1] =
      -ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1];
    for (qq = 2; qq + 1 < 4; qq++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c[qq] = 0.0;
    }

    for (qq = 2; qq + 1 < 10; qq++) {
      ROPOD_4Wheel_Tdistkinb__xaxpy_n(1, ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq],
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 3 * qq + 3,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c, 3);
    }

    for (qq = 2; qq + 1 < 10; qq++) {
      ROPOD_4Wheel_Tdistkinb_xaxpy_n2(1,
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2],
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_c, 3,
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c, 3 * qq + 3);
    }
  }

  for (q = 3; q + 1 < 10; q++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[3 * q + 2];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = ROPOD_4Wheel_Tdistkinb__xnrm2_n(6,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e, 4);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm == 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2] = 0.0;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[3] < 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2] =
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2];
    if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2]) >= 1.0020841800044864E-292)
    {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm = 1.0 /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2];
      for (qq = 3; qq + 1 < 10; qq++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    } else {
      for (qq = 3; qq + 1 < 10; qq++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qq] /=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2] =
      -ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2];
  }

  m = 2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[8];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[3] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0];
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0] /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] *=
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1];
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1]);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1] /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A_c[8];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2];
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2]);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2] /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2] /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm;
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[3] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm * 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[3] != 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[3] = (rtNaN);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[3] = 0.0;
  qq = 0;
  if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0] >
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0]) || rtIsNaN
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0])) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[0];
  }

  if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1] >
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1]) || rtIsNaN
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1])) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[1];
  }

  if (!((ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm >
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt) || rtIsNaN
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt))) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
  }

  if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2] >
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest) || rtIsNaN
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2];
  }

  if (!((ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm >
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest) || rtIsNaN
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest))) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
  }

  while ((m + 2 > 0) && (!(qq >= 75))) {
    kase = m + 1;
    do {
      exitg1 = 0;
      q = kase;
      if (kase == 0) {
        exitg1 = 1;
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[kase - 1]);
        if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt <= (fabs
             (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[kase - 1]) + fabs
             (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[kase])) *
            2.2204460492503131E-16) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[kase - 1] = 0.0;
          exitg1 = 1;
        } else if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt <=
                    1.0020841800044864E-292) || ((qq > 20) &&
                    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt <=
                     2.2204460492503131E-16 *
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.nrm))) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[kase - 1] = 0.0;
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
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = 0.0;
          if (d_ii < m + 2) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt = fabs
              (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[d_ii - 1]);
          }

          if (d_ii > kase + 1) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt += fabs
              (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[d_ii - 2]);
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest = fabs
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[d_ii - 1]);
          if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest <=
               2.2204460492503131E-16 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt) ||
              (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest <=
               1.0020841800044864E-292)) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[d_ii - 1] = 0.0;
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
        q = qjj;
      }
    }

    switch (kase) {
     case 1:
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[m];
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[m] = 0.0;
      for (qjj = m; qjj + 1 >= q + 1; qjj--) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cn_xrotg
          (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest,
           &ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt,
           &ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds,
           &ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj] =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
        if (qjj + 1 > q + 1) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 1] *
            -ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 1] *=
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds;
        }
      }
      break;

     case 2:
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q - 1];
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q - 1] = 0.0;
      while (q + 1 <= m + 2) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q];
        ROPOD_4Wheel_Tdistkinb_cn_xrotg
          (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest,
           &ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt,
           &ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds,
           &ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q] =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
          -ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds;
        q++;
      }
      break;

     case 3:
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[0] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[m + 1]);
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[1] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[m]);
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[2] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[m]);
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[3] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q]);
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[4] = fabs
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q]);
      qjj = 1;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[0];
      if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[0])) {
        kase = 2;
        exitg2 = false;
        while ((!exitg2) && (kase < 6)) {
          qjj = kase;
          if (!rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[kase - 1]))
          {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[kase - 1];
            exitg2 = true;
          } else {
            kase++;
          }
        }
      }

      if (qjj < 5) {
        while (qjj + 1 < 6) {
          if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[qjj] >
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1_p[qjj];
          }

          qjj++;
        }
      }

      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[m + 1] /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[m] /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1 =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[m] /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q] /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 =
        ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt) *
         (ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 -
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt) +
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1 *
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1) / 2.0;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1 *=
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1 *=
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1;
      if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 != 0.0) ||
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1 != 0.0)) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.shift = sqrt
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 *
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 +
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1);
        if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 < 0.0) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.shift =
            -ROPOD_4Wheel_Tdistkinb_cntr_node_B.shift;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_node_B.shift =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.emm1 /
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 +
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.shift);
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.shift = 0.0;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds +
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt) *
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds -
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt) +
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.shift;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[q] /
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds;
      for (qjj = q + 1; qjj <= m + 1; qjj++) {
        ROPOD_4Wheel_Tdistkinb_cn_xrotg(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1);
        if (qjj > q + 1) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 2] =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 1] =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds -
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds;
        ROPOD_4Wheel_Tdistkinb_cn_xrotg(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1);
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj - 1] =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 1] *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj] =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj - 1] *
          -ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ztest =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.smm1 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[qjj] *=
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.sqds;
      }

      ROPOD_4Wheel_Tdistkinb_cntr_node_B.e[m] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
      qq++;
      break;

     default:
      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q] < 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q] =
          -ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q];
      }

      qq = q + 1;
      while ((q + 1 < 4) && (ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q] <
                             ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qq])) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[q] =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qq];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[qq] =
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.rt;
        q = qq;
        qq++;
      }

      qq = 0;
      m--;
      break;
    }
  }

  U[0] = ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[0];
  U[1] = ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[1];
  U[2] = ROPOD_4Wheel_Tdistkinb_cntr_node_B.s[2];
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr_abs(const real_T x[9], real_T y[9])
{
  int32_T k;
  for (k = 0; k < 9; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cn_abs_d(const real_T x[21], real_T y[21])
{
  int32_T k;
  for (k = 0; k < 21; k++) {
    y[k] = fabs(x[k]);
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_j = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x[k - 1]);
        if (absxk > ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_j) {
          t = ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_j / absxk;
          y = y * t * t + 1.0;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_j = absxk;
        } else {
          t = absxk / ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_j;
          y += t * t;
        }
      }

      y = ROPOD_4Wheel_Tdistkinb_cntr_node_B.scale_j * sqrt(y);
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.c = 0.0;
      d = (iac + m) - 1;
      for (ia = iac; ia <= d; ia++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.c += A[ia - 1] * x[ix - 1];
        ix++;
      }

      y[iy] += ROPOD_4Wheel_Tdistkinb_cntr_node_B.c;
      iy++;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.temp = y[jy] * alpha1;
        ix = ix0;
        b = m + jA;
        for (ijA = jA; ijA + 1 <= b; ijA++) {
          A[ijA] += A[ix - 1] * ROPOD_4Wheel_Tdistkinb_cntr_node_B.temp;
          ix++;
        }
      }

      jy++;
      jA += 9;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_c_xgeqrf(real_T A[81], real_T tau[9])
{
  int32_T ia;
  int32_T exitg1;
  boolean_T exitg2;
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_b[0], 0, 9U * sizeof(real_T));
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g * 9 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g;
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g + 1 < 9) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp =
        A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i];
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm = ROPOD_4Wheel_Tdistkinb_xnrm2_ng
        (8 - ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g, A,
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i + 2);
      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm = rt_hypotd_snf
          (A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i],
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm);
        if (A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i] >= 0.0) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm =
            -ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm;
        }

        if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm) <
            1.0020841800044864E-292) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt = 0;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g) + 9;
          do {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt++;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i + 1;
            while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d + 1 <=
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l) {
              A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d] *=
                9.9792015476736E+291;
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d++;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm *= 9.9792015476736E+291;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp *= 9.9792015476736E+291;
          } while (!(fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm) >=
                     1.0020841800044864E-292));

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm = rt_hypotd_snf
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp,
             ROPOD_4Wheel_Tdistkinb_xnrm2_ng(8 -
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g, A,
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i + 2));
          if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp >= 0.0) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm =
              -ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm -
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp) /
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp = 1.0 /
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp -
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm);
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g) + 9;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i + 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d + 1 <=
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l) {
            A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d] *=
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l = 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l <=
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm *= 1.0020841800044864E-292;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm;
        } else {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm -
             A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i]) /
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp = 1.0 /
            (A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i] -
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm);
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i -
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g) + 9;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i + 1;
          while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l + 1 <=
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt) {
            A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l] *=
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l++;
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.xnorm;
        }
      }

      tau[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b;
      A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp =
        A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i];
      A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i] = 1.0;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt =
        ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g + 1) * 9 +
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g) + 1;
      if (tau[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g] != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l = 9 -
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d =
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i -
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g) + 8;
        while ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l > 0) &&
               (A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d] == 0.0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l--;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d--;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d = 8 -
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d > 0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.coltop_d =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d - 1) * 9 +
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt;
          ia = ROPOD_4Wheel_Tdistkinb_cntr_node_B.coltop_d;
          do {
            exitg1 = 0;
            if (ia <= (ROPOD_4Wheel_Tdistkinb_cntr_node_B.coltop_d +
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l) - 1) {
              if (A[ia - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ia++;
              }
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l = 0;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d = 0;
      }

      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l > 0) {
        ROPOD_4Wheel_Tdistkinb_cn_xgemv
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l,
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d, A,
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt, A,
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i + 1,
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_b);
        ROPOD_4Wheel_Tdistkinb_cnt_xger
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv_l,
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc_d,
           -tau[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_g],
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i + 1,
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.work_b, A,
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.knt);
      }

      A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i_i] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_atmp;
    } else {
      tau[8] = 0.0;
    }
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
static void ROPOD_4Wheel_Tdistkinb_cntr__qr(const real_T A[81], real_T Q[81],
  real_T R[81])
{
  int32_T exitg1;
  boolean_T exitg2;
  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[0], &A[0], 81U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_c_xgeqrf(ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.tau);
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i = 0;
    while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i + 1 <=
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau + 1) {
      R[ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau] =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[9 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau +
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i];
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau + 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i + 1 < 10) {
      R[ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau] = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.work[ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau]
      = 0.0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau = 8;
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i = 8;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i >= 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i--) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i * 9 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i) + 1;
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i + 1 < 9) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii
        - 1] = 1.0;
      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau]
          != 0.0) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv = 9 -
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc =
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii -
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i) + 7;
        while ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv > 0) &&
               (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc]
                == 0.0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv--;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc--;
        }

        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc = 8 -
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i;
        exitg2 = false;
        while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc > 0)) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.coltop =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc - 1) * 9 +
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.ia =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.coltop;
          do {
            exitg1 = 0;
            if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ia + 9 <=
                (ROPOD_4Wheel_Tdistkinb_cntr_node_B.coltop +
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv) + 8) {
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ia
                  + 8] != 0.0) {
                exitg1 = 1;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ia++;
              }
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv = 0;
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc = 0;
      }

      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv > 0) {
        ROPOD_4Wheel_Tdistkinb_cn_xgemv(ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii + 9,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.work);
        ROPOD_4Wheel_Tdistkinb_cnt_xger(ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc,
          -ROPOD_4Wheel_Tdistkinb_cntr_node_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau],
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.work,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii + 9);
      }

      ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv =
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii -
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i) + 8;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii;
      while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc + 1 <=
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc]
          *=
          -ROPOD_4Wheel_Tdistkinb_cntr_node_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau];
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastc++;
      }
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii
      - 1] = 1.0 -
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.tau[ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv = 1;
    while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv <=
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.d_i) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A
        [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.iaii -
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv) - 1] = 0.0;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.lastv++;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau--;
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau++) {
    memcpy(&Q[ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau * 9],
           &ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_A[ROPOD_4Wheel_Tdistkinb_cntr_node_B.itau
           * 9], 9U * sizeof(real_T));
  }
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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
    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3++) {
      RLinv[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 + 9 * (i - 1)] = 0.0;
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.i = i - 1;
    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.j =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.i;
      RLinv[ROPOD_4Wheel_Tdistkinb_cntr_node_B.j] = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 < 9;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4++) {
        RLinv[ROPOD_4Wheel_Tdistkinb_cntr_node_B.j] = Ac[(iC[i - 1] + 21 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4) - 1] * Linv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3] + RLinv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3];
      }
    }
  }

  ROPOD_4Wheel_Tdistkinb_cntr__qr(RLinv, ROPOD_4Wheel_Tdistkinb_cntr_node_B.QQ,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.RR);
  i = 1;
  do {
    exitg1 = 0;
    if (i <= nA) {
      if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.RR[((i - 1) * 9 + i) - 1]) <
          1.0E-12) {
        Status = -2.0;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      for (i = 0; i < 9; i++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.i = i + 1;
        for (j = 0; j < 9; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.j = j + 1;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.d0 = 0.0;
          for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.d0 += Linv
              [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.i - 1) * 9 +
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3] *
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.QQ
              [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.j - 1) * 9 +
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.TL[i + 9 * j] =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.d0;
        }
      }

      memset(&RLinv[0], 0, 81U * sizeof(real_T));
      i = nA;
      while (i > 0) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 = i - 1;
        RLinv[(i + 9 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3) - 1] = 1.0;
        for (j = i; j <= nA; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.j = j - 1;
          RLinv[(i + 9 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.j) - 1] /=
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.RR[((i - 1) * 9 + i) - 1];
        }

        if (i > 1) {
          for (j = 1; j <= ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3; j++) {
            for (c_k = i; c_k <= nA; c_k++) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.j = c_k - 1;
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 =
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.j * 9;
              RLinv[(j + 9 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.j) - 1] = RLinv
                [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 + j) - 1] -
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.RR
                [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 * 9 + j) - 1] * RLinv
                [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 + i) - 1];
            }
          }
        }

        i = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3;
      }

      for (i = 0; i < 9; i++) {
        for (j = (int16_T)(i + 1); j < 10; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 = j - 1;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.j = i + 9 *
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3;
          H[ROPOD_4Wheel_Tdistkinb_cntr_node_B.j] = 0.0;
          for (c_k = (int16_T)(nA + 1); c_k < 10; c_k++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 = (c_k - 1) * 9;
            H[ROPOD_4Wheel_Tdistkinb_cntr_node_B.j] = H[(j - 1) * 9 + i] -
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.TL
              [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 + j) - 1] *
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.TL[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4
              + i];
          }

          H[(j + 9 * i) - 1] = H[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 * 9 + i];
        }
      }

      for (i = 1; i <= nA; i++) {
        for (j = 0; j < 9; j++) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 = i - 1;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.j = j + 9 *
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3;
          D[ROPOD_4Wheel_Tdistkinb_cntr_node_B.j] = 0.0;
          for (c_k = i; c_k <= nA; c_k++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 = (c_k - 1) * 9;
            D[ROPOD_4Wheel_Tdistkinb_cntr_node_B.j] = RLinv
              [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4 + i) - 1] *
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.TL[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i4
              + j] + D[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i3 * 9 + j];
          }
        }
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return Status;
}

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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

// Function for MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
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
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d < 27;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d++) {
    cTolComputed = (cTolComputed && ((!rtIsInf
      (Aeq[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d])) && (!rtIsNaN
      (Aeq[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d]))));
  }

  ROPOD_4Wheel_Tdistkinb_cntr_svd(Aeq, ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv2);
  if (cTolComputed) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv2[0];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk = (rtNaN);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk = fabs
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk);
  if ((!rtIsInf(ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk)) && (!rtIsNaN
       (ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk)) &&
      (!(ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk <= 2.2250738585072014E-308)))
  {
    frexp(ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart);
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart + 9 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Hinv[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d]
        = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp < 9;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Hinv[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d]
          = Linv[9 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp] * Linv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp] +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.Hinv[9 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
      }
    }

    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp < 18;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
        + 21 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart] = e[18 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart +
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[18 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[19 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart + 1];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[20 + 21 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart] = Aeq[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart + 2];
  }

  memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b[0], &b[0], 18U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b[18] = beq[0];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b[19] = beq[1];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b[20] = beq[2];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d = 1;
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 21;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.iA[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
      = b_iA[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
      = 0.0;
  }

  memset(&x[0], 0, 9U * sizeof(real_T));
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.r[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk = 0.0;
  cTolComputed = false;
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 21;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
      = 1.0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
      = 0;
  }

  nA = 0;
  for (kNext = 0; kNext < 21; kNext++) {
    if (b_iA[kNext] == 1) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = nA + 1;
      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 32767;
      }

      nA = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[(int16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart - 1] = (int16_T)(kNext + 1);
    }
  }

  guard1 = false;
  if (nA > 0) {
    memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[0], 0, 18U * sizeof(real_T));
    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
        = f[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart
        + 9] = 0.0;
    }

    DualFeasible = false;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 3 * nA;
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 32767;
    }

    if ((int16_T)ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 50) {
      kNext = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
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
      if ((!DualFeasible) && (nA > 0) && (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d
           <= 200)) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0 =
          ROPOD_4Wheel_Tdistki_KWIKfactor(ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC, nA, Linv,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.RLinv,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.D,
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.H);
        if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0 < 0.0) {
          if (ColdReset) {
            exitg3 = 2;
          } else {
            ROPOD_4Wheel_T_ResetToColdStart
              (ROPOD_4Wheel_Tdistkinb_cntr_node_B.iA,
               ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC);
            nA = 3;
            ColdReset = true;
          }
        } else {
          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 9 + kNext;
            if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = kNext - 1;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart
              - 1] =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b[ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC
              [ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp] - 1];
            for (kDrop = kNext; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = (kDrop + 9 *
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp) - 1;
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.U[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                = 0.0;
              for (iSave = 1; iSave <= nA; iSave++) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp = (iSave - 1) * 9;
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.U[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                  = ROPOD_4Wheel_Tdistkinb_cntr_node_B.RLinv
                  [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp + kDrop) - 1] *
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.RLinv
                  [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp + kNext) - 1] +
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.U[((kNext - 1) * 9 + kDrop)
                  - 1];
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.U[(kNext + 9 * (kDrop - 1)) - 1]
                = ROPOD_4Wheel_Tdistkinb_cntr_node_B.U
                [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp * 9 + kDrop) - 1];
            }
          }

          for (kNext = 0; kNext < 9; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = kNext + 1;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal = 0.0;
            for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal +=
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.H[(9 *
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart +
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp) - 1] *
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
            }

            ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[kNext] =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 9 + kDrop;
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[kNext] +=
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.D[(kDrop - 1) * 9 + kNext] *
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart
                - 1];
            }
          }

          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal = 0.0;
            for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal +=
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.D[(kNext - 1) * 9 +
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart] *
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
            }

            ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 9 + kNext;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
              - 1] = ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
            for (kDrop = 1; kDrop <= nA; kDrop++) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp =
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp =
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.i2 = 9 + kDrop;
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i2 > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.i2 = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
                - 1] = ROPOD_4Wheel_Tdistkinb_cntr_node_B.U[((kDrop - 1) * 9 +
                kNext) - 1] *
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.Rhs[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i2
                - 1] +
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_node_B.U_tmp
                - 1];
            }
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0 = -1.0E-12;
          kDrop = 0;
          for (kNext = 1; kNext <= nA; kNext++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 9 + kNext;
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 32767;
            }

            ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC
              [kNext - 1] - 1] =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
              - 1];
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
            if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 32767;
            }

            if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
                 - 1] < ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0) && (kNext <=
                 nA - 3)) {
              kDrop = kNext;
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 32767;
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0 =
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart
                - 1];
            }
          }

          if (kDrop <= 0) {
            DualFeasible = true;
            memcpy(&x[0], &ROPOD_4Wheel_Tdistkinb_cntr_node_B.Opt[0], 9U *
                   sizeof(real_T));
          } else {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d++;
            if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d > q) {
              ROPOD_4Wheel_T_ResetToColdStart
                (ROPOD_4Wheel_Tdistkinb_cntr_node_B.iA,
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC);
              nA = 3;
              ColdReset = true;
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC
                [kDrop - 1] - 1] = 0.0;
              ROPOD_4Wheel_Tdi_DropConstraint(kDrop,
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.iA, &nA,
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC);
            }
          }
        }
      } else {
        if (nA <= 0) {
          memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[0], 0, 21U * sizeof
                 (real_T));
          ROPOD_4Wheel_Tdis_Unconstrained
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Hinv, f, x);
        }

        exitg3 = 1;
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
      guard1 = true;
    }
  } else {
    ROPOD_4Wheel_Tdis_Unconstrained(ROPOD_4Wheel_Tdistkinb_cntr_node_B.Hinv, f,
      x);
    guard1 = true;
  }

  if (guard1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0 = ROPOD_4Wheel_Tdistkinb_cnt_norm
      (x);
    exitg2 = false;
    while ((!exitg2) && (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d <= 200)) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin = -1.0E-6;
      kNext = 0;
      for (kDrop = 0; kDrop < 18; kDrop++) {
        if (!cTolComputed) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = kDrop + 1;
          for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac_c[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
              = ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[(21 *
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart +
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_abs
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac_c,
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow);
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 1;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal =
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[0];
          if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[0])) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 2;
            exitg4 = false;
            while ((!exitg4) && (ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp <
                                 10)) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart =
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp;
              if (!rtIsNaN
                  (ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
                   - 1])) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal =
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
                  - 1];
                exitg4 = true;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp++;
              }
            }
          }

          if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9) {
            while (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart + 1 < 10) {
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                  > ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal =
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++;
            }
          }

          if (!((ROPOD_4Wheel_Tdistkinb_cntr_node_B.cTol[kDrop] >
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal) || rtIsNaN
                (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal))) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cTol[kDrop] =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
          }
        }

        if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.iA[kDrop] == 0) {
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = kDrop + 1;
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal = 0.0;
          for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
               ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
               ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal +=
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[(21 *
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart +
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp) - 1] *
              x[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
          }

          ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal =
            (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal -
             ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b[kDrop]) /
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cTol[kDrop];
          if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal <
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin) {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin =
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
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
          if ((kNext > 0) && (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d <= 200)) {
            guard2 = false;
            if (nA == 0) {
              for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                  = 0.0;
                for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                    += ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[(21 *
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp + kNext) - 1] *
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Hinv[9 *
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp +
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
                }
              }

              guard2 = true;
            } else {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin =
                ROPOD_4Wheel_Tdistki_KWIKfactor
                (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac,
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC, nA, Linv,
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.RLinv,
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.D,
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.H);
              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin <= 0.0) {
                exitg1 = 1;
              } else {
                for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp++) {
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.U[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp
                      + 9 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart] =
                      -ROPOD_4Wheel_Tdistkinb_cntr_node_B.H[9 *
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart +
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp];
                  }
                }

                for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                    = 0.0;
                  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp++) {
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                      += ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[(21 *
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp + kNext) - 1]
                      * ROPOD_4Wheel_Tdistkinb_cntr_node_B.U[9 *
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp +
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
                  }
                }

                for (kDrop = 1; kDrop <= nA; kDrop++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal = 0.0;
                  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal +=
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[(21 *
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart + kNext) - 1] *
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.D[(kDrop - 1) * 9 +
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
                  }

                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.r[kDrop - 1] =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
                }

                guard2 = true;
              }
            }

            if (guard2) {
              kDrop = 0;
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin = 0.0;
              DualFeasible = true;
              ColdReset = true;
              if (nA > 3) {
                iSave = 1;
                exitg4 = false;
                while ((!exitg4) && (iSave <= nA - 3)) {
                  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.r[iSave - 1] >= 1.0E-12)
                  {
                    ColdReset = false;
                    exitg4 = true;
                  } else {
                    iSave++;
                  }
                }
              }

              if (!((nA == 3) || ColdReset)) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = nA - 3;
                if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < -32768) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = -32768;
                }

                for (iSave = 1; iSave <= (int16_T)
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart; iSave++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = iSave - 1;
                  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.r[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp]
                      > 1.0E-12) {
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal =
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC
                      [ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp] - 1] /
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.r[iSave - 1];
                    if ((kDrop == 0) || (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal
                                         <
                                         ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk))
                    {
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk =
                        ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
                      kDrop = iSave;
                    }
                  }
                }

                if (kDrop > 0) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.absxk;
                  DualFeasible = false;
                }
              }

              ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal = 0.0;
              for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal +=
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[(21 *
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart + kNext) - 1] *
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
              }

              if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal <= 0.0) {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal = 0.0;
                ColdReset = true;
              } else {
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.t = 0.0;
                for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t +=
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Ac[(21 *
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart + kNext) - 1] *
                    x[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
                }

                ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal =
                  (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b[kNext - 1] -
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.t) /
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
                ColdReset = false;
              }

              if (DualFeasible && ColdReset) {
                exitg1 = 1;
              } else {
                if (ColdReset) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin;
                } else if (DualFeasible) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
                } else if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin <
                            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal) || rtIsNaN
                           (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal)) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin;
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal;
                }

                for (iSave = 1; iSave <= nA; iSave++) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = iSave - 1;
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                    - 1;
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp]
                    -=
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.r[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                    * ROPOD_4Wheel_Tdistkinb_cntr_node_B.t;
                  if ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[iSave - 1] <= 18) &&
                      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC
                       [iSave - 1] - 1] < 0.0)) {
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp]
                      = 0.0;
                  }
                }

                ROPOD_4Wheel_Tdistkinb_cntr_node_B.lam[kNext - 1] +=
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t;
                if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t ==
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin) {
                  ROPOD_4Wheel_Tdi_DropConstraint(kDrop,
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.iA, &nA,
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC);
                }

                if (!ColdReset) {
                  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 9;
                       ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                    x[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart] +=
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t *
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.AcRow[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
                  }

                  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t ==
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cVal) {
                    if (nA == 9) {
                      exitg1 = 1;
                    } else {
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = nA + 1;
                      if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart > 32767) {
                        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 32767;
                      }

                      nA = (int16_T)ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[(int16_T)
                        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart - 1] = kNext;
                      kDrop = (int16_T)
                        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
                      exitg4 = false;
                      while ((!exitg4) && (kDrop > 1)) {
                        ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = kDrop - 1;
                        ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp = kDrop - 2;
                        if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                            >
                            ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp])
                        {
                          exitg4 = true;
                        } else {
                          iSave = ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[kDrop -
                            1];
                          ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                            = ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[kDrop - 2];
                          ROPOD_4Wheel_Tdistkinb_cntr_node_B.iC[ROPOD_4Wheel_Tdistkinb_cntr_node_B.kDrop_tmp]
                            = iSave;
                          kDrop = (int16_T)
                            ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart;
                        }
                      }

                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.iA[kNext - 1] = 1;
                      kNext = 0;
                      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d++;
                    }
                  } else {
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d++;
                  }
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.k_d++;
                }
              }
            }
          } else {
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin =
              ROPOD_4Wheel_Tdistkinb_cnt_norm(x);
            if (fabs(ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin -
                     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0) > 0.001) {
              ROPOD_4Wheel_Tdistkinb_cntr_node_B.Xnorm0 =
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.cMin;
              ROPOD_4Wheel_Tdistkinb_cn_abs_d
                (ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_b,
                 ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1);
              for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart = 0;
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart < 21;
                   ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart++) {
                if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                    > 1.0) {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
                    =
                    ROPOD_4Wheel_Tdistkinb_cntr_node_B.varargin_1[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart];
                } else {
                  ROPOD_4Wheel_Tdistkinb_cntr_node_B.cTol[ROPOD_4Wheel_Tdistkinb_cntr_node_B.ixstart]
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
void ROPOD_4Wheel_Tdistkinb_cntr_node_step(void)
{
  static const int8_T b[120] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
  };

  boolean_T p;
  boolean_T p_0;
  boolean_T rtb_Compare;
  uint8_T rtb_Gain6;

  // S-Function (ECAT_Interface): '<S5>/ECAT_Interface'

  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  // RelationalOperator: '<S1>/Compare' incorporates:
  //   Constant: '<S1>/Constant'
  //   DigitalClock: '<Root>/Digital Clock'

  rtb_Compare = (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.t[0] <
                 ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tinit);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter14'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ft.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ft.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2935.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz);

    // MATLAB Function: '<S89>/MATLAB Function' incorporates:
    //   Constant: '<S89>/Constant'
    //   Gain: '<S78>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter14'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_i,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_b,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_a);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S27>/S-Function'

  // Level2 S-Function Block: '<S27>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S28>/S-Function'

  // Level2 S-Function Block: '<S28>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S29>/S-Function'

  // Level2 S-Function Block: '<S29>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  // S-Function (ec_ROPOD_SmartWheel): '<S30>/S-Function'

  // Level2 S-Function Block: '<S30>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  // Switch: '<S20>/Switch2' incorporates:
  //   Constant: '<S20>/Constant2'
  //   Gain: '<S20>/sign convention'
  //   Gain: '<S20>/sign convention1'
  //   Gain: '<S20>/sign convention2'
  //   Gain: '<S20>/sign convention3'

  if (rtb_Compare) {
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[0],
           &ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value[0], sizeof(real_T)
           << 3U);
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction[5];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.signconvention_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction[17];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_o[5];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[3] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.signconvention1_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_o[17];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[4] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_b[5];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[5] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.signconvention2_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_b[17];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[6] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_m[5];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[7] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.signconvention3_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_m[17];
  }

  // End of Switch: '<S20>/Switch2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S7>/Get Parameter'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_be.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_be.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2173.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter'

    // MATLABSystem: '<S7>/Get Parameter11'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2176.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter11_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter11'

    // MATLABSystem: '<S7>/Get Parameter12'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fa.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fa.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2177.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter12_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter12'

    // MATLABSystem: '<S7>/Get Parameter13'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_p.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_p.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2178.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter13_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter13'

    // MATLABSystem: '<S7>/Get Parameter14'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l1.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l1.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2179.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter14_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter14'

    // MATLABSystem: '<S7>/Get Parameter15'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pe.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pe.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2180.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter15_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter15'

    // MATLABSystem: '<S7>/Get Parameter16'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2181.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter16_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter16'

    // MATLABSystem: '<S7>/Get Parameter17'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bc.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bc.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2182.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter17_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter17'

    // MATLABSystem: '<S7>/Get Parameter1'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hv.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hv.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2174.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter1'

    // MATLABSystem: '<S7>/Get Parameter2'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_j.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_j.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2183.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter2'

    // MATLABSystem: '<S7>/Get Parameter3'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2184.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter3'

    // MATLABSystem: '<S7>/Get Parameter4'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2185.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter4'

    // MATLABSystem: '<S7>/Get Parameter5'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2186.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter5'

    // MATLABSystem: '<S7>/Get Parameter6'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ep.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ep.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2187.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter6'

    // MATLABSystem: '<S7>/Get Parameter7'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_lm.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_lm.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2188.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter7'

    // MATLABSystem: '<S7>/Get Parameter8'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ew.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ew.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2189.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter8'

    // MATLABSystem: '<S7>/Get Parameter9'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2190.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter9'

    // MATLABSystem: '<S7>/Get Parameter10'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b1.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b1.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2175.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S7>/Get Parameter10'

    // MATLABSystem: '<S8>/Get Parameter1'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_k.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_k.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2214.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S8>/Get Parameter1'

    // MATLABSystem: '<S8>/Get Parameter3'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_m.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_m.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2216.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw2 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S8>/Get Parameter3'

    // MATLABSystem: '<S8>/Get Parameter4'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i4.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i4.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2217.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw3 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S8>/Get Parameter4'

    // MATLABSystem: '<S8>/Get Parameter5'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2218.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw4 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S8>/Get Parameter5'
  }

  // Switch: '<S20>/Switch' incorporates:
  //   Constant: '<S20>/Constant'
  //   Sum: '<S20>/Add'

  if (rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_l[0];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_l[1];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_l[2];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_l[3];
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw1;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_o[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw2;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_b[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw3;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_m[28] -
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.pivot_offs_sw4;
  }

  // End of Switch: '<S20>/Switch'

  // MATLAB Function: '<S41>/Gl_matrix' incorporates:
  //   MATLAB Function: '<S2>/Jqwl_matrix'
  //   MATLAB Function: '<S43>/Gl_matrices'
  //   SignalConversion: '<S44>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter11_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter12_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter13_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter14_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t30_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter15_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_p =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t30_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter16_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_e =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter17_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_o =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l * 0.5;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S9>/Get Parameter'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2237.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_xy =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S9>/Get Parameter'
  }

  // Product: '<S32>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S32>/sample time'
  //
  //  About '<S32>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_xy *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.sampletime_WtEt;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S9>/Get Parameter1'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_f.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_f.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2238.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_xy =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S9>/Get Parameter1'
  }

  // Delay: '<S10>/Enabled Delay' incorporates:
  //   Constant: '<S10>/Constant3'

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant3_Value > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.EnabledDelay =
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.EnabledDelay_DSTATE;
  }

  // End of Delay: '<S10>/Enabled Delay'

  // Gain: '<S10>/Gain6' incorporates:
  //   Constant: '<S31>/Constant'
  //   RelationalOperator: '<S31>/Compare'
  //   Sum: '<S10>/Subtract'

  rtb_Gain6 = (uint8_T)(0.0 - ROPOD_4Wheel_Tdistkinb_cntr_node_B.EnabledDelay >=
                        ROPOD_4Wheel_Tdistkinb_cntr_node_P.CompareToConstant_const
                        ? (int32_T)
                        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain6_Gain_b : 0);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S17>/SourceBlock' incorporates:
    //   Inport: '<S18>/In1'

    p = Sub_ROPOD_4Wheel_Tdistkinb_cntr_node_1899.getLatestMessage
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S17>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S18>/Enable'

    if (p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.In1 =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.b_varargout_2;
    }

    // End of MATLABSystem: '<S17>/SourceBlock'
    // End of Outputs for SubSystem: '<S17>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'
  }

  // Switch: '<S10>/Switch' incorporates:
  //   Constant: '<S10>/Constant'

  if (rtb_Gain6 > ROPOD_4Wheel_Tdistkinb_cntr_node_P.Switch_Threshold) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_g;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.In1.Linear.X;
  }

  // End of Switch: '<S10>/Switch'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_xy;
  }

  // Switch: '<S35>/Switch2' incorporates:
  //   RelationalOperator: '<S35>/LowerRelop1'
  //   RelationalOperator: '<S35>/UpperRelop'
  //   Switch: '<S35>/Switch'

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j >
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_xy) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j <
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1) {
      // Switch: '<S35>/Switch'
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1;
    }
  }

  // End of Switch: '<S35>/Switch2'

  // Sum: '<S32>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S32>/Delay Input2'
  //
  //  Block description for '<S32>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S32>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j -=
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_xy;
  }

  // Switch: '<S38>/Switch2' incorporates:
  //   RelationalOperator: '<S38>/LowerRelop1'

  if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j >
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) {
    // Product: '<S32>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S32>/sample time'
    //
    //  About '<S32>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sampletime_WtEt;

    // Switch: '<S38>/Switch' incorporates:
    //   RelationalOperator: '<S38>/UpperRelop'

    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j <
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j;
    }

    // End of Switch: '<S38>/Switch'
  }

  // End of Switch: '<S38>/Switch2'

  // Sum: '<S32>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S32>/Delay Input2'
  //
  //  Block description for '<S32>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S32>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE;

  // Product: '<S33>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S33>/sample time'
  //
  //  About '<S33>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_xy *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.sampletime_WtEt_j;

  // Switch: '<S10>/Switch1' incorporates:
  //   Constant: '<S10>/Constant1'

  if (rtb_Gain6 > ROPOD_4Wheel_Tdistkinb_cntr_node_P.Switch1_Threshold) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.In1.Linear.Y;
  }

  // End of Switch: '<S10>/Switch1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain3'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain3_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_xy;
  }

  // Switch: '<S36>/Switch2' incorporates:
  //   RelationalOperator: '<S36>/LowerRelop1'
  //   RelationalOperator: '<S36>/UpperRelop'
  //   Switch: '<S36>/Switch'

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b >
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_xy) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_xy;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b <
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3) {
      // Switch: '<S36>/Switch'
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3;
    }
  }

  // End of Switch: '<S36>/Switch2'

  // Sum: '<S33>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S33>/Delay Input2'
  //
  //  Block description for '<S33>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S33>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b -=
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_f;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_xy;
  }

  // Switch: '<S39>/Switch2' incorporates:
  //   RelationalOperator: '<S39>/LowerRelop1'

  if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b >
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) {
    // Product: '<S33>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S33>/sample time'
    //
    //  About '<S33>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sampletime_WtEt_j;

    // Switch: '<S39>/Switch' incorporates:
    //   RelationalOperator: '<S39>/UpperRelop'

    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b <
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b;
    }

    // End of Switch: '<S39>/Switch'
  }

  // End of Switch: '<S39>/Switch2'

  // Sum: '<S33>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S33>/Delay Input2'
  //
  //  Block description for '<S33>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S33>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_f;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S9>/Get Parameter2'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_n.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_n.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2239.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_theta =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S9>/Get Parameter2'
  }

  // Product: '<S34>/delta rise limit' incorporates:
  //   SampleTimeMath: '<S34>/sample time'
  //
  //  About '<S34>/sample time':
  //   y = K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_theta *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.sampletime_WtEt_b;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S9>/Get Parameter3'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2240.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_theta =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S9>/Get Parameter3'

    // Gain: '<S10>/Gain5'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain5 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain5_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_theta;
  }

  // Switch: '<S10>/Switch2' incorporates:
  //   Constant: '<S10>/Constant2'

  if (rtb_Gain6 > ROPOD_4Wheel_Tdistkinb_cntr_node_P.Switch2_Threshold) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_h;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.In1.Angular.Z;
  }

  // End of Switch: '<S10>/Switch2'

  // Switch: '<S37>/Switch2' incorporates:
  //   RelationalOperator: '<S37>/LowerRelop1'
  //   RelationalOperator: '<S37>/UpperRelop'
  //   Switch: '<S37>/Switch'

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o >
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_theta) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_vel_theta;
  } else {
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o <
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain5) {
      // Switch: '<S37>/Switch'
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain5;
    }
  }

  // End of Switch: '<S37>/Switch2'

  // Sum: '<S34>/Difference Inputs1' incorporates:
  //   UnitDelay: '<S34>/Delay Input2'
  //
  //  Block description for '<S34>/Difference Inputs1':
  //
  //   Add in CPU
  //
  //  Block description for '<S34>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o -=
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_k;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S10>/Gain4'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain4 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain4_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_acc_theta;
  }

  // Switch: '<S40>/Switch2' incorporates:
  //   RelationalOperator: '<S40>/LowerRelop1'

  if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o >
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) {
    // Product: '<S34>/delta fall limit' incorporates:
    //   SampleTimeMath: '<S34>/sample time'
    //
    //  About '<S34>/sample time':
    //   y = K where K = ( w * Ts )

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain4 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sampletime_WtEt_b;

    // Switch: '<S40>/Switch' incorporates:
    //   RelationalOperator: '<S40>/UpperRelop'

    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o <
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o;
    }

    // End of Switch: '<S40>/Switch'
  }

  // End of Switch: '<S40>/Switch2'

  // Sum: '<S34>/Difference Inputs2' incorporates:
  //   UnitDelay: '<S34>/Delay Input2'
  //
  //  Block description for '<S34>/Difference Inputs2':
  //
  //   Add in CPU
  //
  //  Block description for '<S34>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_k;

  // SignalConversion: '<S41>/TmpSignal ConversionAtProduct3Inport2'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o;

  // MATLAB Function: '<S41>/Gl_matrix' incorporates:
  //   SignalConversion: '<S44>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[0] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[3] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[4] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[5] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[6] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[7] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[8] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[9] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_b) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[10] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_b) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[11] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[12] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[13] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_e) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[14] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_e) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[15] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[16] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[17] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[18] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[19] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[20] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[21] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[23] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[24] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[25] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[26] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[27] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[28] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[29] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[30] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[31] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[32] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[33] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[34] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[35] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t30_tmp - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[36] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[37] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[38] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[39] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[40] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[41] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_p +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[42] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_p +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[43] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_o) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[44] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41_tmp +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_o) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40;

  // Product: '<S41>/Product3' incorporates:
  //   SignalConversion: '<S41>/TmpSignal ConversionAtProduct3Inport2'
  //   Sum: '<S12>/Sum'

  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 15;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv1[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
      =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
      + 30] * ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o +
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
       + 15] * ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
       * ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j);
  }

  // End of Product: '<S41>/Product3'

  // Product: '<S77>/Product9' incorporates:
  //   Constant: '<Root>/Constant'
  //   Sum: '<S12>/Sum'

  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
      = (ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv1[7 +
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] -
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k])
      * ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_n[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k];
  }

  // End of Product: '<S77>/Product9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter10'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pz.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pz.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2931.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S6>/Get Parameter10'
  }

  // Product: '<S78>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S91>/POut' incorporates:
  //   Constant: '<S87>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter11'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jt.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jt.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2932.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz);

    // Gain: '<S87>/Gain2' incorporates:
    //   Constant: '<S87>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter11'
    //   Product: '<S87>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_c =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_i;
  }

  // DiscreteIntegrator: '<S91>/Integrator' incorporates:
  //   Product: '<S91>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_c);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE;

  // End of DiscreteIntegrator: '<S91>/Integrator'

  // Product: '<S91>/DOut' incorporates:
  //   Constant: '<S87>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_o;

  // SampleTimeMath: '<S92>/TSamp' incorporates:
  //   Constant: '<S87>/Constant5'
  //
  //  About '<S92>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt;

  // Math: '<S92>/Reciprocal' incorporates:
  //   Constant: '<S92>/Constant'
  //   Sum: '<S92>/SumDen'
  //
  //  About '<S92>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_nr +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S92>/Filter Differentiator TF' incorporates:
  //   Constant: '<S92>/Constant'
  //   Product: '<S92>/Divide'
  //   Sum: '<S92>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_ZC
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_ZC
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_InitialS;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_nr) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states;

  // Sum: '<S91>/Sum' incorporates:
  //   Constant: '<S87>/Constant5'
  //   DiscreteTransferFcn: '<S92>/Filter Differentiator TF'
  //   Product: '<S92>/DenCoefOut'
  //   Product: '<S92>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoef[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoef[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator);

  // DiscreteIntegrator: '<S93>/Integrator' incorporates:
  //   Constant: '<S88>/Constant2'
  //   Product: '<S93>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t30_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_i *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_m);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t30_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_l;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter12'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_da.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_da.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2933.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz);

    // Gain: '<S88>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter12'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_f *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // MATLABSystem: '<S6>/Get Parameter13'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e5.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e5.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2934.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz);

    // Gain: '<S88>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter13'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_c *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S88>/Divide1' incorporates:
    //   Constant: '<S88>/Constant1'
    //   Product: '<S88>/Divide'
    //   Sum: '<S88>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1 =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_d -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_m) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S94>/TSamp' incorporates:
  //   DataTypeConversion: '<S94>/Passthrough for tuning'
  //
  //  About '<S94>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_m *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_n;

  // Math: '<S94>/Reciprocal' incorporates:
  //   Constant: '<S94>/Constant'
  //   Sum: '<S94>/SumDen'
  //
  //  About '<S94>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_b +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S94>/Filter Differentiator TF' incorporates:
  //   Constant: '<S94>/Constant'
  //   Product: '<S93>/DOut'
  //   Product: '<S94>/Divide'
  //   Sum: '<S94>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_p =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1 -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_b) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_l;

  // Sum: '<S93>/Sum' incorporates:
  //   Constant: '<S88>/Constant4'
  //   DataTypeConversion: '<S94>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S94>/Filter Differentiator TF'
  //   Product: '<S93>/POut'
  //   Product: '<S94>/DenCoefOut'
  //   Product: '<S94>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_a[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_p +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_a[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_l) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_m +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_k +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut);

  // Sum: '<S89>/Sum' incorporates:
  //   UnitDelay: '<S89>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S98>/MATLAB Function' incorporates:
    //   Constant: '<S98>/Constant'
    //   Gain: '<S79>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_dw *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_f,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_d,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_l);
  }

  // Product: '<S79>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[1] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S100>/POut' incorporates:
  //   Constant: '<S96>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_d;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S96>/Gain2' incorporates:
    //   Constant: '<S96>/Constant4'
    //   Product: '<S96>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_l =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_d *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_l;
  }

  // DiscreteIntegrator: '<S100>/Integrator' incorporates:
  //   Product: '<S100>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_d != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_m;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_a *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_l);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_o =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_f;

  // End of DiscreteIntegrator: '<S100>/Integrator'

  // Product: '<S100>/DOut' incorporates:
  //   Constant: '<S96>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_fb;

  // SampleTimeMath: '<S101>/TSamp' incorporates:
  //   Constant: '<S96>/Constant5'
  //
  //  About '<S101>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_g *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_a;

  // Math: '<S101>/Reciprocal' incorporates:
  //   Constant: '<S101>/Constant'
  //   Sum: '<S101>/SumDen'
  //
  //  About '<S101>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_h +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S101>/Filter Differentiator TF' incorporates:
  //   Constant: '<S101>/Constant'
  //   Product: '<S101>/Divide'
  //   Sum: '<S101>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__g
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__g
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_j;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__g =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_h) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_b;

  // Sum: '<S100>/Sum' incorporates:
  //   Constant: '<S96>/Constant5'
  //   DiscreteTransferFcn: '<S101>/Filter Differentiator TF'
  //   Product: '<S101>/DenCoefOut'
  //   Product: '<S101>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_l[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_b +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_l[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_b) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_g +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_o);

  // DiscreteIntegrator: '<S102>/Integrator' incorporates:
  //   Constant: '<S97>/Constant2'
  //   Product: '<S102>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_m *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_k);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_h;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S97>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_h *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // Gain: '<S97>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_n =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_p *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S97>/Divide1' incorporates:
    //   Constant: '<S97>/Constant1'
    //   Product: '<S97>/Divide'
    //   Sum: '<S97>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_h =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_m -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_n) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S103>/TSamp' incorporates:
  //   DataTypeConversion: '<S103>/Passthrough for tuning'
  //
  //  About '<S103>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_n *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_j;

  // Math: '<S103>/Reciprocal' incorporates:
  //   Constant: '<S103>/Constant'
  //   Sum: '<S103>/SumDen'
  //
  //  About '<S103>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_m +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S103>/Filter Differentiator TF' incorporates:
  //   Constant: '<S103>/Constant'
  //   Product: '<S102>/DOut'
  //   Product: '<S103>/Divide'
  //   Sum: '<S103>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_e =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_h -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_m) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_o;

  // Sum: '<S102>/Sum' incorporates:
  //   Constant: '<S97>/Constant4'
  //   DataTypeConversion: '<S103>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S103>/Filter Differentiator TF'
  //   Product: '<S102>/POut'
  //   Product: '<S103>/DenCoefOut'
  //   Product: '<S103>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_lb[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_e +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_lb[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_o) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_n +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_a +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l);

  // Sum: '<S98>/Sum' incorporates:
  //   UnitDelay: '<S98>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_c;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S107>/MATLAB Function' incorporates:
    //   Constant: '<S107>/Constant'
    //   Gain: '<S80>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_a *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_f4,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_p,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_d);
  }

  // Product: '<S80>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[2] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S109>/POut' incorporates:
  //   Constant: '<S105>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_i =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_h;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S105>/Gain2' incorporates:
    //   Constant: '<S105>/Constant4'
    //   Product: '<S105>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_e =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_h *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_hv;
  }

  // DiscreteIntegrator: '<S109>/Integrator' incorporates:
  //   Product: '<S109>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_n != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_i;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_c_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_d *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_e);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_c =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_c_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_i;

  // End of DiscreteIntegrator: '<S109>/Integrator'

  // Product: '<S109>/DOut' incorporates:
  //   Constant: '<S105>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_bv;

  // SampleTimeMath: '<S110>/TSamp' incorporates:
  //   Constant: '<S105>/Constant5'
  //
  //  About '<S110>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_c *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_g;

  // Math: '<S110>/Reciprocal' incorporates:
  //   Constant: '<S110>/Constant'
  //   Sum: '<S110>/SumDen'
  //
  //  About '<S110>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_k +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S110>/Filter Differentiator TF' incorporates:
  //   Constant: '<S110>/Constant'
  //   Product: '<S110>/Divide'
  //   Sum: '<S110>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__k
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__k
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_o;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__k =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_pz =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_k) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_m;

  // Sum: '<S109>/Sum' incorporates:
  //   Constant: '<S105>/Constant5'
  //   DiscreteTransferFcn: '<S110>/Filter Differentiator TF'
  //   Product: '<S110>/DenCoefOut'
  //   Product: '<S110>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_h[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_pz +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_h[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_m) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_c +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_i +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_c);

  // DiscreteIntegrator: '<S111>/Integrator' incorporates:
  //   Constant: '<S106>/Constant2'
  //   Product: '<S111>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_i_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_p *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_ko);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_i =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_i_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_hs;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S106>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_ft *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // Gain: '<S106>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_g *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S106>/Divide1' incorporates:
    //   Constant: '<S106>/Constant1'
    //   Product: '<S106>/Divide'
    //   Sum: '<S106>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_f =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_l -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_o) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S112>/TSamp' incorporates:
  //   DataTypeConversion: '<S112>/Passthrough for tuning'
  //
  //  About '<S112>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_o *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_c;

  // Math: '<S112>/Reciprocal' incorporates:
  //   Constant: '<S112>/Constant'
  //   Sum: '<S112>/SumDen'
  //
  //  About '<S112>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_d +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S112>/Filter Differentiator TF' incorporates:
  //   Constant: '<S112>/Constant'
  //   Product: '<S111>/DOut'
  //   Product: '<S112>/Divide'
  //   Sum: '<S112>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_c =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_f -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_d) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bh;

  // Sum: '<S111>/Sum' incorporates:
  //   Constant: '<S106>/Constant4'
  //   DataTypeConversion: '<S112>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S112>/Filter Differentiator TF'
  //   Product: '<S111>/POut'
  //   Product: '<S112>/DenCoefOut'
  //   Product: '<S112>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_j[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_c +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_j[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bh) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_o +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_e +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_i);

  // Sum: '<S107>/Sum' incorporates:
  //   UnitDelay: '<S107>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_l =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_d;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S116>/MATLAB Function' incorporates:
    //   Constant: '<S116>/Constant'
    //   Gain: '<S81>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_az *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_n3,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_ay,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_m);
  }

  // Product: '<S81>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[3] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S118>/POut' incorporates:
  //   Constant: '<S114>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_k =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_o;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S114>/Gain2' incorporates:
    //   Constant: '<S114>/Constant4'
    //   Product: '<S114>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_o *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_e;
  }

  // DiscreteIntegrator: '<S118>/Integrator' incorporates:
  //   Product: '<S118>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_e != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_ih;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_oa_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_aj *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_b);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_oa =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_oa_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_m;

  // End of DiscreteIntegrator: '<S118>/Integrator'

  // Product: '<S118>/DOut' incorporates:
  //   Constant: '<S114>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_mc;

  // SampleTimeMath: '<S119>/TSamp' incorporates:
  //   Constant: '<S114>/Constant5'
  //
  //  About '<S119>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_l *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_g1;

  // Math: '<S119>/Reciprocal' incorporates:
  //   Constant: '<S119>/Constant'
  //   Sum: '<S119>/SumDen'
  //
  //  About '<S119>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_kp +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S119>/Filter Differentiator TF' incorporates:
  //   Constant: '<S119>/Constant'
  //   Product: '<S119>/Divide'
  //   Sum: '<S119>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__c
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__c
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_ji;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__c =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_h =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_kp) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_f;

  // Sum: '<S118>/Sum' incorporates:
  //   Constant: '<S114>/Constant5'
  //   DiscreteTransferFcn: '<S119>/Filter Differentiator TF'
  //   Product: '<S119>/DenCoefOut'
  //   Product: '<S119>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_g[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_h +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_g[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_f) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_l +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_k +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_oa);

  // DiscreteIntegrator: '<S120>/Integrator' incorporates:
  //   Constant: '<S115>/Constant2'
  //   Product: '<S120>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_k_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_o *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_j);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_k =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_k_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_b;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S115>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_j *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // Gain: '<S115>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_e *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S115>/Divide1' incorporates:
    //   Constant: '<S115>/Constant1'
    //   Product: '<S115>/Divide'
    //   Sum: '<S115>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_j =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_p -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S121>/TSamp' incorporates:
  //   DataTypeConversion: '<S121>/Passthrough for tuning'
  //
  //  About '<S121>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_cq;

  // Math: '<S121>/Reciprocal' incorporates:
  //   Constant: '<S121>/Constant'
  //   Sum: '<S121>/SumDen'
  //
  //  About '<S121>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_h1 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S121>/Filter Differentiator TF' incorporates:
  //   Constant: '<S121>/Constant'
  //   Product: '<S120>/DOut'
  //   Product: '<S121>/Divide'
  //   Sum: '<S121>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_m =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_j -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_h1) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_k;

  // Sum: '<S120>/Sum' incorporates:
  //   Constant: '<S115>/Constant4'
  //   DataTypeConversion: '<S121>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S121>/Filter Differentiator TF'
  //   Product: '<S120>/POut'
  //   Product: '<S121>/DenCoefOut'
  //   Product: '<S121>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_k[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_m +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_k[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_k) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_m +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_k);

  // Sum: '<S116>/Sum' incorporates:
  //   UnitDelay: '<S116>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_o =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_cy;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S125>/MATLAB Function' incorporates:
    //   Constant: '<S125>/Constant'
    //   Gain: '<S82>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_hs *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_fi,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_j,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_k);
  }

  // Product: '<S82>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[4] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S127>/POut' incorporates:
  //   Constant: '<S123>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_os =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_hz;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S123>/Gain2' incorporates:
    //   Constant: '<S123>/Constant4'
    //   Product: '<S123>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_d =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_c;
  }

  // DiscreteIntegrator: '<S127>/Integrator' incorporates:
  //   Product: '<S127>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_o != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_e =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_j;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_fc_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_d);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_fc =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_fc_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_e;

  // End of DiscreteIntegrator: '<S127>/Integrator'

  // Product: '<S127>/DOut' incorporates:
  //   Constant: '<S123>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ol;

  // SampleTimeMath: '<S128>/TSamp' incorporates:
  //   Constant: '<S123>/Constant5'
  //
  //  About '<S128>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_i *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_ci;

  // Math: '<S128>/Reciprocal' incorporates:
  //   Constant: '<S128>/Constant'
  //   Sum: '<S128>/SumDen'
  //
  //  About '<S128>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_dw +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S128>/Filter Differentiator TF' incorporates:
  //   Constant: '<S128>/Constant'
  //   Product: '<S128>/Divide'
  //   Sum: '<S128>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gp
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gp
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_h;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gp =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_pt =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_dw) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_d;

  // Sum: '<S127>/Sum' incorporates:
  //   Constant: '<S123>/Constant5'
  //   DiscreteTransferFcn: '<S128>/Filter Differentiator TF'
  //   Product: '<S128>/DenCoefOut'
  //   Product: '<S128>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_e[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_pt +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_e[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_d) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_i +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_os +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_fc);

  // DiscreteIntegrator: '<S129>/Integrator' incorporates:
  //   Constant: '<S124>/Constant2'
  //   Product: '<S129>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_os_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_oc *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_o);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_os =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_os_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_g;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S124>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_n *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // Gain: '<S124>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h0 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_k *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S124>/Divide1' incorporates:
    //   Constant: '<S124>/Constant1'
    //   Product: '<S124>/Divide'
    //   Sum: '<S124>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_g =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_b -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h0) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S130>/TSamp' incorporates:
  //   DataTypeConversion: '<S130>/Passthrough for tuning'
  //
  //  About '<S130>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h0 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_ag;

  // Math: '<S130>/Reciprocal' incorporates:
  //   Constant: '<S130>/Constant'
  //   Sum: '<S130>/SumDen'
  //
  //  About '<S130>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_n0 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S130>/Filter Differentiator TF' incorporates:
  //   Constant: '<S130>/Constant'
  //   Product: '<S129>/DOut'
  //   Product: '<S130>/Divide'
  //   Sum: '<S130>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_hi =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_g -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_n0) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_mj;

  // Sum: '<S129>/Sum' incorporates:
  //   Constant: '<S124>/Constant4'
  //   DataTypeConversion: '<S130>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S130>/Filter Differentiator TF'
  //   Product: '<S129>/POut'
  //   Product: '<S130>/DenCoefOut'
  //   Product: '<S130>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_d[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_hi +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_d[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_mj) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_h0 +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_f +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_os);

  // Sum: '<S125>/Sum' incorporates:
  //   UnitDelay: '<S125>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_lp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_o;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S134>/MATLAB Function' incorporates:
    //   Constant: '<S134>/Constant'
    //   Gain: '<S83>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_ff *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_o1,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_a,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_b);
  }

  // Product: '<S83>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[5] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S136>/POut' incorporates:
  //   Constant: '<S132>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_h =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_fb;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S132>/Gain2' incorporates:
    //   Constant: '<S132>/Constant4'
    //   Product: '<S132>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_fb *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_lh;
  }

  // DiscreteIntegrator: '<S136>/Integrator' incorporates:
  //   Product: '<S136>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_l != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_mc =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_nm;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_op_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_l *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_m);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_op =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_op_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_mc;

  // End of DiscreteIntegrator: '<S136>/Integrator'

  // Product: '<S136>/DOut' incorporates:
  //   Constant: '<S132>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_gd;

  // SampleTimeMath: '<S137>/TSamp' incorporates:
  //   Constant: '<S132>/Constant5'
  //
  //  About '<S137>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_d *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_k;

  // Math: '<S137>/Reciprocal' incorporates:
  //   Constant: '<S137>/Constant'
  //   Sum: '<S137>/SumDen'
  //
  //  About '<S137>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_c +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S137>/Filter Differentiator TF' incorporates:
  //   Constant: '<S137>/Constant'
  //   Product: '<S137>/Divide'
  //   Sum: '<S137>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__e
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__e
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_ph;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__e =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_k =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_c) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_e;

  // Sum: '<S136>/Sum' incorporates:
  //   Constant: '<S132>/Constant5'
  //   DiscreteTransferFcn: '<S137>/Filter Differentiator TF'
  //   Product: '<S137>/DenCoefOut'
  //   Product: '<S137>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_m[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_k +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_m[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_e) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_d +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_h +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_op);

  // DiscreteIntegrator: '<S138>/Integrator' incorporates:
  //   Constant: '<S133>/Constant2'
  //   Product: '<S138>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_h_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_l5 *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_js);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_h =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_h_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S133>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_b *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // Gain: '<S133>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_e =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_e1 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S133>/Divide1' incorporates:
    //   Constant: '<S133>/Constant1'
    //   Product: '<S133>/Divide'
    //   Sum: '<S133>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_i =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_e -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_e) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S139>/TSamp' incorporates:
  //   DataTypeConversion: '<S139>/Passthrough for tuning'
  //
  //  About '<S139>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_e *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_gz;

  // Math: '<S139>/Reciprocal' incorporates:
  //   Constant: '<S139>/Constant'
  //   Sum: '<S139>/SumDen'
  //
  //  About '<S139>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_nl +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S139>/Filter Differentiator TF' incorporates:
  //   Constant: '<S139>/Constant'
  //   Product: '<S138>/DOut'
  //   Product: '<S139>/Divide'
  //   Sum: '<S139>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_i -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_nl) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_n;

  // Sum: '<S138>/Sum' incorporates:
  //   Constant: '<S133>/Constant4'
  //   DataTypeConversion: '<S139>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S139>/Filter Differentiator TF'
  //   Product: '<S138>/POut'
  //   Product: '<S139>/DenCoefOut'
  //   Product: '<S139>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_n[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_f +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_n[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_n) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_e +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_l +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_h);

  // Sum: '<S134>/Sum' incorporates:
  //   UnitDelay: '<S134>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_lh =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_cd;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S143>/MATLAB Function' incorporates:
    //   Constant: '<S143>/Constant'
    //   Gain: '<S84>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_eh *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ev,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_l,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_e);
  }

  // Product: '<S84>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[6] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S145>/POut' incorporates:
  //   Constant: '<S141>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_le =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_n;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S141>/Gain2' incorporates:
    //   Constant: '<S141>/Constant4'
    //   Product: '<S141>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_h =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_n *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_b2;
  }

  // DiscreteIntegrator: '<S145>/Integrator' incorporates:
  //   Product: '<S145>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_p != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_iv;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_i_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_j *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_h);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_i =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_i_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_c;

  // End of DiscreteIntegrator: '<S145>/Integrator'

  // Product: '<S145>/DOut' incorporates:
  //   Constant: '<S141>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_j;

  // SampleTimeMath: '<S146>/TSamp' incorporates:
  //   Constant: '<S141>/Constant5'
  //
  //  About '<S146>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_p *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_ky;

  // Math: '<S146>/Reciprocal' incorporates:
  //   Constant: '<S146>/Constant'
  //   Sum: '<S146>/SumDen'
  //
  //  About '<S146>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_b3 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S146>/Filter Differentiator TF' incorporates:
  //   Constant: '<S146>/Constant'
  //   Product: '<S146>/Divide'
  //   Sum: '<S146>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gs
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gs
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_l0 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_gq;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gs =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_fw =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_b3) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_l0;

  // Sum: '<S145>/Sum' incorporates:
  //   Constant: '<S141>/Constant5'
  //   DiscreteTransferFcn: '<S146>/Filter Differentiator TF'
  //   Product: '<S146>/DenCoefOut'
  //   Product: '<S146>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_jl[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_fw +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_jl[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_l0) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_p +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_le +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_i);

  // DiscreteIntegrator: '<S147>/Integrator' incorporates:
  //   Constant: '<S142>/Constant2'
  //   Product: '<S147>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_le_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_jy *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_l);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_le =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_le_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n3;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S142>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_p *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // Gain: '<S142>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_l =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_f *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S142>/Divide1' incorporates:
    //   Constant: '<S142>/Constant1'
    //   Product: '<S142>/Divide'
    //   Sum: '<S142>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_e =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_lf -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_l) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S148>/TSamp' incorporates:
  //   DataTypeConversion: '<S148>/Passthrough for tuning'
  //
  //  About '<S148>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_l *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_l;

  // Math: '<S148>/Reciprocal' incorporates:
  //   Constant: '<S148>/Constant'
  //   Sum: '<S148>/SumDen'
  //
  //  About '<S148>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_hq +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S148>/Filter Differentiator TF' incorporates:
  //   Constant: '<S148>/Constant'
  //   Product: '<S147>/DOut'
  //   Product: '<S148>/Divide'
  //   Sum: '<S148>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_hi2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_e -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_hq) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_eh;

  // Sum: '<S147>/Sum' incorporates:
  //   Constant: '<S142>/Constant4'
  //   DataTypeConversion: '<S148>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S148>/Filter Differentiator TF'
  //   Product: '<S147>/POut'
  //   Product: '<S148>/DenCoefOut'
  //   Product: '<S148>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_kz[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_hi2 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_kz[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_eh) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_l +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_g +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_le);

  // Sum: '<S143>/Sum' incorporates:
  //   UnitDelay: '<S143>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_h =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_j;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S152>/MATLAB Function' incorporates:
    //   Constant: '<S152>/Constant'
    //   Gain: '<S85>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_ap *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_je,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a);
  }

  // Product: '<S85>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product9[7] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain;

  // Product: '<S154>/POut' incorporates:
  //   Constant: '<S150>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_io =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_b;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S150>/Gain2' incorporates:
    //   Constant: '<S150>/Constant4'
    //   Product: '<S150>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_dy =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_b *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_fh;
  }

  // DiscreteIntegrator: '<S154>/Integrator' incorporates:
  //   Product: '<S154>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_f != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_fp =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_eq;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_fu *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_dy);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_fp;

  // End of DiscreteIntegrator: '<S154>/Integrator'

  // Product: '<S154>/DOut' incorporates:
  //   Constant: '<S150>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_au =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_c2;

  // SampleTimeMath: '<S155>/TSamp' incorporates:
  //   Constant: '<S150>/Constant5'
  //
  //  About '<S155>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_j *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_b;

  // Math: '<S155>/Reciprocal' incorporates:
  //   Constant: '<S155>/Constant'
  //   Sum: '<S155>/SumDen'
  //
  //  About '<S155>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_kc +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S155>/Filter Differentiator TF' incorporates:
  //   Constant: '<S155>/Constant'
  //   Product: '<S155>/Divide'
  //   Sum: '<S155>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_e2
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_e2
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_es =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_l;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_e2 =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_ho =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_au -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_kc) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_es;

  // Sum: '<S154>/Sum' incorporates:
  //   Constant: '<S150>/Constant5'
  //   DiscreteTransferFcn: '<S155>/Filter Differentiator TF'
  //   Product: '<S155>/DenCoefOut'
  //   Product: '<S155>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_ju[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_ho +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_ju[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_es) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_j +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_io +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz);

  // DiscreteIntegrator: '<S156>/Integrator' incorporates:
  //   Constant: '<S151>/Constant2'
  //   Product: '<S156>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_io_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_pb *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_d);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_io =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_io_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_gz;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S151>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_pr *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

    // Gain: '<S151>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_p =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_m *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

    // Product: '<S151>/Divide1' incorporates:
    //   Constant: '<S151>/Constant1'
    //   Product: '<S151>/Divide'
    //   Sum: '<S151>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_b =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_h -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_p) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S157>/TSamp' incorporates:
  //   DataTypeConversion: '<S157>/Passthrough for tuning'
  //
  //  About '<S157>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_p *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_f;

  // Math: '<S157>/Reciprocal' incorporates:
  //   Constant: '<S157>/Constant'
  //   Sum: '<S157>/SumDen'
  //
  //  About '<S157>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_mf +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S157>/Filter Differentiator TF' incorporates:
  //   Constant: '<S157>/Constant'
  //   Product: '<S156>/DOut'
  //   Product: '<S157>/Divide'
  //   Sum: '<S157>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_b -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_mf) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_j;

  // Sum: '<S156>/Sum' incorporates:
  //   Constant: '<S151>/Constant4'
  //   DataTypeConversion: '<S157>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S157>/Filter Differentiator TF'
  //   Product: '<S156>/POut'
  //   Product: '<S157>/DenCoefOut'
  //   Product: '<S157>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_a0[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_a0[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_j) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_p +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_p +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_io);

  // Sum: '<S152>/Sum' incorporates:
  //   UnitDelay: '<S152>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_au =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_d5;

  // MATLAB Function: '<S43>/Gl_matrices' incorporates:
  //   SignalConversion: '<S75>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter11_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter12_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter13_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter14_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter15_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t33 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter16_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t34 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter17_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t42 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t34 * 0.5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[0] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[1] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[3] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[4] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[5] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[6] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[7] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[8] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[9] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[10] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[11] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[12] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[13] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[14] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[15] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[16] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[17] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[18] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[19] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[20] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[21] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[23] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[24] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[25] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[26] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[27] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[28] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 * 0.5) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[29] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 * 0.5 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[30] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[31] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[32] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[33] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[34] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[35] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[36] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t34 - 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[37] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[38] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[39] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[40] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[41] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t33) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[42] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t33) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[43] =
    ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t42) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17) *
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[44] =
    ((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41 +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t42) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40;
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 15;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[1 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
      + 15];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[2 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gl[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
      + 30];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter6'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_c.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_c.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2903.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz_n);

    // MATLAB Function: '<S51>/MATLAB Function' incorporates:
    //   Constant: '<S51>/Constant'
    //   Gain: '<S45>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter6'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_ll *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz_n,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_gi,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_lz,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_mi);
  }

  // MATLAB Function: '<S2>/Jqwl_matrix' incorporates:
  //   SignalConversion: '<S13>/TmpSignal ConversionAt SFunction Inport1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 = 1.0 /
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter4_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t33 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t34 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter6_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t42 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter8_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t38 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t39 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t49 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t50 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter10_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[1] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 *=
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter3_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[2] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter11_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[3] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[4] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[5] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter12_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[6] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[7] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter5_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[8] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t34 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t33) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter13_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[9] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[10] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[11] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t34 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t35) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t33) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter14_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[12] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[13] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter7_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[14] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t42) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter15_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[15] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[16] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[17] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t42) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t40) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter16_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[18] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter1_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 * 2.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[19] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter9_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter2_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[20] =
    (((ROPOD_4Wheel_Tdistkinb_cntr_node_B.t39 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t49) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t50) -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t38) * -0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.GetParameter17_o1 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[21] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 -
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18) * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[22] =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f * 0.125;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[23] =
    (((-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t39 +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t49) +
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t50) +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0) *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_f *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t38) * 0.125;
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 3;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    // Product: '<S2>/Product3'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
      = 0.0;
    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 < 8;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
        += ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[3 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 +
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch2_k[ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0];
    }

    // End of Product: '<S2>/Product3'

    // Sum: '<S42>/Sum'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
      -=
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k];
  }

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_mn.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_mn.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2716.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain_i =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S6>/Get Parameter'
  }

  // Product: '<S45>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain_i;

  // Product: '<S53>/POut' incorporates:
  //   Constant: '<S49>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 = ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2
    * ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_kz;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter3'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d0.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d0.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2898.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz_e);

    // Gain: '<S49>/Gain2' incorporates:
    //   Constant: '<S49>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter3'
    //   Product: '<S49>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_j =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_kz *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz_e *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_p0;
  }

  // DiscreteIntegrator: '<S53>/Integrator' incorporates:
  //   Product: '<S53>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_g != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_ig =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_o;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_ar *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_j);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_ig;

  // End of DiscreteIntegrator: '<S53>/Integrator'

  // Product: '<S53>/DOut' incorporates:
  //   Constant: '<S49>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6 = ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_jy;

  // SampleTimeMath: '<S54>/TSamp' incorporates:
  //   Constant: '<S49>/Constant5'
  //
  //  About '<S54>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_b *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_bq;

  // Math: '<S54>/Reciprocal' incorporates:
  //   Constant: '<S54>/Constant'
  //   Sum: '<S54>/SumDen'
  //
  //  About '<S54>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ff +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2);

  // DiscreteTransferFcn: '<S54>/Filter Differentiator TF' incorporates:
  //   Constant: '<S54>/Constant'
  //   Product: '<S54>/Divide'
  //   Sum: '<S54>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gy
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gy
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_er =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_d;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gy =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 = ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6
    - (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 -
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ff) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_er;

  // Sum: '<S53>/Sum' incorporates:
  //   Constant: '<S49>/Constant5'
  //   DiscreteTransferFcn: '<S54>/Filter Differentiator TF'
  //   Product: '<S54>/DenCoefOut'
  //   Product: '<S54>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_f[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_f[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_er) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_b +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4);

  // DiscreteIntegrator: '<S55>/Integrator' incorporates:
  //   Constant: '<S50>/Constant2'
  //   Product: '<S55>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_mf *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_km);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_j;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter4'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ey.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ey.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2900.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m);

    // Gain: '<S50>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_ie *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m;

    // MATLABSystem: '<S6>/Get Parameter5'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g0.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g0.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2902.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz_n);

    // Gain: '<S50>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter5'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_j *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz_n;

    // Product: '<S50>/Divide1' incorporates:
    //   Constant: '<S50>/Constant1'
    //   Product: '<S50>/Divide'
    //   Sum: '<S50>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_o =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_g -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S56>/TSamp' incorporates:
  //   DataTypeConversion: '<S56>/Passthrough for tuning'
  //
  //  About '<S56>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_h;

  // Math: '<S56>/Reciprocal' incorporates:
  //   Constant: '<S56>/Constant'
  //   Sum: '<S56>/SumDen'
  //
  //  About '<S56>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_jj +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S56>/Filter Differentiator TF' incorporates:
  //   Constant: '<S56>/Constant'
  //   Product: '<S55>/DOut'
  //   Product: '<S56>/Divide'
  //   Sum: '<S56>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8 = ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_o -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_jj) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_nl;

  // Sum: '<S55>/Sum' incorporates:
  //   Constant: '<S50>/Constant4'
  //   DataTypeConversion: '<S56>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S56>/Filter Differentiator TF'
  //   Product: '<S55>/POut'
  //   Product: '<S56>/DenCoefOut'
  //   Product: '<S56>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_b[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_b[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_nl) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_kt +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6);

  // Sum: '<S51>/Sum' incorporates:
  //   UnitDelay: '<S51>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 = ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7
    + ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_b;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLAB Function: '<S60>/MATLAB Function' incorporates:
    //   Constant: '<S60>/Constant'
    //   Gain: '<S46>/Gain2'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_i1 *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz_n,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_gf,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_f,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_g);
  }

  // Product: '<S46>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[1] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain_i;

  // Product: '<S62>/POut' incorporates:
  //   Constant: '<S58>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_j;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S58>/Gain2' incorporates:
    //   Constant: '<S58>/Constant4'
    //   Product: '<S58>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_cy =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_j *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz_e *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_g;
  }

  // DiscreteIntegrator: '<S62>/Integrator' incorporates:
  //   Product: '<S62>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_k != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n0 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_e0;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz_e =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_jd *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_cy);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz_e +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n0;

  // End of DiscreteIntegrator: '<S62>/Integrator'

  // Product: '<S62>/DOut' incorporates:
  //   Constant: '<S58>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_a;

  // SampleTimeMath: '<S63>/TSamp' incorporates:
  //   Constant: '<S58>/Constant5'
  //
  //  About '<S63>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_f *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_i;

  // Math: '<S63>/Reciprocal' incorporates:
  //   Constant: '<S63>/Constant'
  //   Sum: '<S63>/SumDen'
  //
  //  About '<S63>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_as +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S63>/Filter Differentiator TF' incorporates:
  //   Constant: '<S63>/Constant'
  //   Product: '<S63>/Divide'
  //   Sum: '<S63>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gf
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gf
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_a =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_ex;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gf =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11 -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_as) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_a;

  // Sum: '<S62>/Sum' incorporates:
  //   Constant: '<S58>/Constant5'
  //   DiscreteTransferFcn: '<S63>/Filter Differentiator TF'
  //   Product: '<S63>/DenCoefOut'
  //   Product: '<S63>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_p[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCoe_p[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_a) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_f +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz_n);

  // DiscreteIntegrator: '<S64>/Integrator' incorporates:
  //   Constant: '<S59>/Constant2'
  //   Product: '<S64>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_om *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_c);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_cj;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S59>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_pc *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m;

    // Gain: '<S59>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a5 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_p3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz_n;

    // Product: '<S59>/Divide1' incorporates:
    //   Constant: '<S59>/Constant1'
    //   Product: '<S59>/Divide'
    //   Sum: '<S59>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_k =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_i -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a5) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S65>/TSamp' incorporates:
  //   DataTypeConversion: '<S65>/Passthrough for tuning'
  //
  //  About '<S65>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a5 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_o;

  // Math: '<S65>/Reciprocal' incorporates:
  //   Constant: '<S65>/Constant'
  //   Sum: '<S65>/SumDen'
  //
  //  About '<S65>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ix +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S65>/Filter Differentiator TF' incorporates:
  //   Constant: '<S65>/Constant'
  //   Product: '<S64>/DOut'
  //   Product: '<S65>/Divide'
  //   Sum: '<S65>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz_n =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_k -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ix) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ml;

  // Sum: '<S64>/Sum' incorporates:
  //   Constant: '<S59>/Constant4'
  //   DataTypeConversion: '<S65>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S65>/Filter Differentiator TF'
  //   Product: '<S64>/POut'
  //   Product: '<S65>/DenCoefOut'
  //   Product: '<S65>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_dt[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz_n +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_dt[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ml) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_a5 +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_aj +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11);

  // Sum: '<S60>/Sum' incorporates:
  //   UnitDelay: '<S60>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_n;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter9'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ch.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ch.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2923.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);

    // MATLAB Function: '<S69>/MATLAB Function' incorporates:
    //   Constant: '<S69>/Constant'
    //   Gain: '<S47>/Gain2'
    //   MATLABSystem: '<S6>/Get Parameter9'

    ROPOD_4Wheel_Tdi_MATLABFunction
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_k *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13,
       ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ck,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_e,
       &ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_n);

    // MATLABSystem: '<S6>/Get Parameter1'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fy.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fy.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2919.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain_h =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // End of MATLABSystem: '<S6>/Get Parameter1'
  }

  // Product: '<S47>/Product5'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[2] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.P_gain_h;

  // Product: '<S71>/POut' incorporates:
  //   Constant: '<S67>/Constant4'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_fa;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter2'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hq.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hq.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2920.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);

    // Gain: '<S67>/Gain2' incorporates:
    //   Constant: '<S67>/Constant4'
    //   MATLABSystem: '<S6>/Get Parameter2'
    //   Product: '<S67>/Product4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_mp =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_fa *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_b4;
  }

  // DiscreteIntegrator: '<S71>/Integrator' incorporates:
  //   Product: '<S71>/IOut'

  if (rtb_Compare ||
      (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_np != 0)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_gj =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_p5;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_le *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain2_mp);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_gj;

  // End of DiscreteIntegrator: '<S71>/Integrator'

  // Product: '<S71>/DOut' incorporates:
  //   Constant: '<S67>/Constant'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_fa;

  // SampleTimeMath: '<S72>/TSamp' incorporates:
  //   Constant: '<S67>/Constant5'
  //
  //  About '<S72>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_cw *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_cz;

  // Math: '<S72>/Reciprocal' incorporates:
  //   Constant: '<S72>/Constant'
  //   Sum: '<S72>/SumDen'
  //
  //  About '<S72>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_mu +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S72>/Filter Differentiator TF' incorporates:
  //   Constant: '<S72>/Constant'
  //   Product: '<S72>/Divide'
  //   Sum: '<S72>/SumNum'

  if ((((ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_kl
         == POS_ZCSIG) != (int32_T)rtb_Compare) &&
       (ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_kl
        != UNINITIALIZED_ZCSIG)) || rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_or;
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_kl =
    rtb_Compare;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_mu) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bm;

  // Sum: '<S71>/Sum' incorporates:
  //   Constant: '<S67>/Constant5'
  //   DiscreteTransferFcn: '<S72>/Filter Differentiator TF'
  //   Product: '<S72>/DenCoefOut'
  //   Product: '<S72>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_nf[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_nf[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bm) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_cw +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15);

  // DiscreteIntegrator: '<S73>/Integrator' incorporates:
  //   Constant: '<S68>/Constant2'
  //   Product: '<S73>/IOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_gainval_ln *
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_jl);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_hn;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S6>/Get Parameter7'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_eq.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_eq.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2921.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);

    // Gain: '<S68>/Gain2' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter7'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_ao *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // MATLABSystem: '<S6>/Get Parameter8'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2922.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);

    // Gain: '<S68>/Gain1' incorporates:
    //   MATLABSystem: '<S6>/Get Parameter8'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_i =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13;

    // Product: '<S68>/Divide1' incorporates:
    //   Constant: '<S68>/Constant1'
    //   Product: '<S68>/Divide'
    //   Sum: '<S68>/Add'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_gs =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_f -
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit /
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_i) * (1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);
  }

  // SampleTimeMath: '<S74>/TSamp' incorporates:
  //   DataTypeConversion: '<S74>/Passthrough for tuning'
  //
  //  About '<S74>/TSamp':
  //   y = u * K where K = ( w * Ts )

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_i *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.TSamp_WtEt_kf;

  // Math: '<S74>/Reciprocal' incorporates:
  //   Constant: '<S74>/Constant'
  //   Sum: '<S74>/SumDen'
  //
  //  About '<S74>/Reciprocal':
  //   Operator: reciprocal

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 = 1.0 /
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ch +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit);

  // DiscreteTransferFcn: '<S74>/Filter Differentiator TF' incorporates:
  //   Constant: '<S74>/Constant'
  //   Product: '<S73>/DOut'
  //   Product: '<S74>/Divide'
  //   Sum: '<S74>/SumNum'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Divide1_gs -
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit -
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_ch) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ou;

  // Sum: '<S73>/Sum' incorporates:
  //   Constant: '<S68>/Constant4'
  //   DataTypeConversion: '<S74>/Passthrough for tuning'
  //   DiscreteTransferFcn: '<S74>/Filter Differentiator TF'
  //   Product: '<S73>/POut'
  //   Product: '<S74>/DenCoefOut'
  //   Product: '<S74>/NOut'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 =
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_pt[0] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22 +
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_NumCo_pt[1] *
     ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ou) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain1_i +
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 *
     ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_kq +
     ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18);

  // Sum: '<S69>/Sum' incorporates:
  //   UnitDelay: '<S69>/Unit Delay'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_de;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter2'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_h.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_h.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2215.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current);

    // Gain: '<S43>/Gain3' incorporates:
    //   MATLABSystem: '<S8>/Get Parameter2'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3_g = 1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;
  }

  // SignalConversion: '<S76>/TmpSignal ConversionAt SFunction Inport2' incorporates:
  //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
  //   Product: '<S51>/Product1'
  //   Product: '<S60>/Product1'
  //   Product: '<S69>/Product1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_lz *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_f *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[2] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_e *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3;

  // MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal' incorporates:
  //   Constant: '<Root>/Constant'

  memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.K[0], 0, sizeof(int16_T) << 6U);
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.K[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k +
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k << 3)] = 1;
    if (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_n[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
        == 0.0) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.K[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
        + (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k << 3)] = 1000;
    }
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 < 8;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.P[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
        + (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 << 3)] = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1 < 8;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.P[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
          + (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 << 3)] += (real_T)
          (ROPOD_4Wheel_Tdistkinb_cntr_node_B.K
           [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.k << 3) +
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1] *
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.K
           [(ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 << 3) +
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1]);
      }
    }
  }

  memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[0], 0, 9U * sizeof(real_T));
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[8] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3_g *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3_g * 8.0;
  memset(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.Linv[0], 0, 81U * sizeof(real_T));
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Linv[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
      + 9 * ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] = 1.0 /
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.P[(ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
      << 3) + ROPOD_4Wheel_Tdistkinb_cntr_node_B.k];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Linv[80] = 1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv0[8] = -1.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv0[17] = 0.0;
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv0[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
      = -ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3_g;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv0[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
      + 9] = -ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gain3_g;

    // MATLAB Function: '<S43>/Gl_matrices'
    for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 = 0;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 < 3;
         ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_tmp =
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0 + 3 *
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.k;
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_tmp]
        = 0.0;
      for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1 = 0;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1 < 15;
           ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_tmp]
          = ROPOD_4Wheel_Tdistkinb_cntr_node_B.Gtl[3 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1 +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0] * (real_T)b[15 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.k +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i1] +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[3 *
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.k +
          ROPOD_4Wheel_Tdistkinb_cntr_node_B.i0];
      }
    }
  }

  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 8;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_m[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_m[1 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k + 1];
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_m[2 + 3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_TmpSignalConversionAtSFun_k[3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.k + 2];
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_m[24] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_m[25] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[1];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_m[26] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[2];
  ROPOD_4Wheel_Tdistk_mpcqpsolver(ROPOD_4Wheel_Tdistkinb_cntr_node_B.Linv,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.f, ROPOD_4Wheel_Tdistkinb_cntr_node_B.dv0,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Gtl_m,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa,
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.x);

  // Switch: '<S19>/Switch1' incorporates:
  //   Constant: '<S19>/Movinf around SW axis center'
  //   Gain: '<S26>/Gain1'
  //   Gain: '<S26>/Gain2'
  //   Gain: '<S26>/Gain3'
  //   MATLAB Function: '<S43>/platform_forces_2_tau_dist_optimal'
  //   Product: '<S107>/Product1'
  //   Product: '<S116>/Product1'
  //   Product: '<S125>/Product1'
  //   Product: '<S134>/Product1'
  //   Product: '<S143>/Product1'
  //   Product: '<S152>/Product1'
  //   Product: '<S89>/Product1'
  //   Product: '<S98>/Product1'
  //   Sum: '<Root>/Add'

  if (rtb_Compare) {
    memcpy(&ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[0],
           &ROPOD_4Wheel_Tdistkinb_cntr_node_P.MovinfaroundSWaxiscenter_Value[0],
           sizeof(real_T) << 3U);
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[0] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_b *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[0]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[1] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_d *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_b +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[1]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[2] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_p *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_l +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[2]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Taucompfactor *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[3] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_ay *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_o +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[3]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Taucompfactor *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[4] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_j *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_lp +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[4]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[5] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_a *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_lh +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[5]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[6] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g_l *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_h +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[6]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[7] =
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.g *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_au +
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.x[7]) *
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.sw_tau_2_curr;
  }

  // End of Switch: '<S19>/Switch1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S8>/Get Parameter'
    p = false;
    p_0 = true;
    if (!(ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bg.SampleTime ==
          ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp)) {
      p_0 = false;
    }

    if (p_0) {
      p = true;
    }

    if (!p) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bg.SampleTime =
        ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    }

    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2213.get_parameter
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);

    // DataTypeConversion: '<S21>/Data Type Conversion6' incorporates:
    //   Constant: '<S21>/Constant3'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.SW_COM1_ENABLE1);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit, 65536.0);
    }

    // DataTypeConversion: '<S21>/Data Type Conversion4' incorporates:
    //   MATLABSystem: '<S8>/Get Parameter'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25)) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25, 65536.0);
    }

    // S-Function (sfix_bitop): '<S21>/Bitwise Operator1' incorporates:
    //   DataTypeConversion: '<S21>/Data Type Conversion4'
    //   DataTypeConversion: '<S21>/Data Type Conversion6'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.BitwiseOperator1 = (uint16_T)
      ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit < 0.0 ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) &
       (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 < 0.0 ? (int32_T)(uint16_T)
        -(int16_T)(uint16_T)-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 : (int32_T)
        (uint16_T)ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25));

    // DataTypeConversion: '<S21>/Data Type Conversion7' incorporates:
    //   Constant: '<S21>/Constant4'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.SW_COM1_ENABLE2);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit, 65536.0);
    }

    // DataTypeConversion: '<S21>/Data Type Conversion5' incorporates:
    //   Gain: '<S21>/shift'
    //   MATLABSystem: '<S8>/Get Parameter'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = floor
      (ROPOD_4Wheel_Tdistkinb_cntr_node_P.shift_Gain *
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13);
    if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25) || rtIsInf
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25)) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = 0.0;
    } else {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = fmod
        (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25, 65536.0);
    }

    // S-Function (sfix_bitop): '<S21>/Bitwise Operator2' incorporates:
    //   DataTypeConversion: '<S21>/Data Type Conversion5'
    //   DataTypeConversion: '<S21>/Data Type Conversion7'

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.BitwiseOperator2 = (uint16_T)
      ((ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit < 0.0 ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)
        -ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit : (int32_T)(uint16_T)
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) &
       (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 < 0.0 ? (int32_T)(uint16_T)
        -(int16_T)(uint16_T)-ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 : (int32_T)
        (uint16_T)ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25));

    // Gain: '<S21>/Gain'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain_Gain_a *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain1_Gain_b *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;
  }

  // Constant: '<S21>/Constant'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_p;

  // Constant: '<S21>/Constant1'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2_p =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_bz;

  // Constant: '<S21>/Constant10'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant10_Value;

  // Constant: '<S21>/Constant2'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp_k =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_n;

  // Constant: '<S21>/Constant6'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2_pi =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant6_Value;

  // Constant: '<S21>/Constant7'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp_n =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant7_Value;

  // Constant: '<S21>/Constant8'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp_a =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant8_Value;

  // Constant: '<S21>/Constant9'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2_i =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant9_Value;

  // Switch: '<S19>/Switch' incorporates:
  //   Constant: '<S19>/Constant13'
  //   Constant: '<S19>/Constant5'

  if (rtb_Compare) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.SW_COM1_MODE_VELOCITY;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.SW_COM1_MODE_TORQUE;
  }

  // End of Switch: '<S19>/Switch'

  // DataTypeConversion: '<S21>/Data Type Conversion2'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = floor
    (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24);
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit) || rtIsInf
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit, 65536.0);
  }

  // DataTypeConversion: '<S21>/Data Type Conversion3' incorporates:
  //   Constant: '<S21>/Constant11'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = 0.0 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.SW_COM1_USE_TS;
  if (rtIsNaN(ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25)) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = 0.0;
  } else {
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = fmod
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25, 65536.0);
  }

  // Gain: '<S21>/Gain10' incorporates:
  //   DataTypeConversion: '<S21>/Data Type Conversion2'
  //   DataTypeConversion: '<S21>/Data Type Conversion3'
  //   S-Function (sfix_bitop): '<S21>/Bitwise Operator'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1 = (real_T)(uint16_T)((uint16_T)
    ((uint16_T)(ROPOD_4Wheel_Tdistkinb_cntr_node_B.BitwiseOperator1 |
                ROPOD_4Wheel_Tdistkinb_cntr_node_B.BitwiseOperator2) | (uint16_T)
     (ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)
      -ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit : (int32_T)(uint16_T)
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit)) | (uint16_T)
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25) * ((real_T)
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain10_Gain * 3.0517578125E-5);
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S21>/Gain11'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain11_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain12'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain12_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain13'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain13_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain15'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n_c =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain15_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain16'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p_i =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain16_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain17'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n_p =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain17_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;
  }

  // Gain: '<S21>/Gain8'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain8_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1;

  // Gain: '<S21>/Gain14'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain14_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_b;

  // Gain: '<S21>/Gain18'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_bn =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain18_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_f;
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[2] == 0) {
    // Gain: '<S21>/Gain19'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p_d =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain19_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain2_Gain_l3 *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain20'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Taucompfactor *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain3'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n_n =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain3_Gain_n *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;

    // Gain: '<S21>/Gain4'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain4_Gain_d *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit;

    // Gain: '<S21>/Gain5'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain5_Gain_e *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit;

    // Gain: '<S21>/Gain6'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p_g =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain6_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit;

    // Gain: '<S21>/Gain7'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain7_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit;

    // Gain: '<S21>/Gain9'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p_l =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Gain9_Gain *
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;
  }

  // Gain: '<S21>/sign_convention'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.sign_convention_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[1];

  // Gain: '<S21>/sign_convention1'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2_g =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.sign_convention1_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[3];

  // Gain: '<S21>/sign_convention2'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2_n =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.sign_convention2_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[5];

  // Gain: '<S21>/sign_convention3'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2_a =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.sign_convention3_Gain *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[7];

  // MATLABSystem: '<S3>/Coordinate Transformation Conversion' incorporates:
  //   Constant: '<S3>/Constant1'
  //   Constant: '<S3>/Constant2'
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
  //   SignalConversion: '<S3>/TmpSignal ConversionAtCoordinate Transformation ConversionInport1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0] = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_n / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant1_Value_n / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[1] = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_a / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant2_Value_a / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[2] / 2.0);

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   Constant: '<S15>/Constant'
  //   Constant: '<S3>/Constant'
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Pose.Pose.Position.X =
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[0];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Pose.Pose.Position.Y =
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[1];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Pose.Pose.Position.Z =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant_Value_f2;

  // MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[1];

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Pose.Pose.Orientation.X =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 -
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;

  // MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t32 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[1];

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   Constant: '<S3>/Constant3'
  //   Constant: '<S3>/Constant4'
  //   Constant: '<S3>/Constant5'
  //   MATLABSystem: '<S3>/Coordinate Transformation Conversion'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Pose.Pose.Orientation.Y =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Pose.Pose.Orientation.Z =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.Sum_oa[0] *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.max_current *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t13 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Pose.Pose.Orientation.W =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t27 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t24;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Twist.Twist.Linear.X =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[0];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Twist.Twist.Linear.Y =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[1];
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Twist.Twist.Linear.Z =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant3_Value_j;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Twist.Twist.Angular.X =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant4_Value_i;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Twist.Twist.Angular.Y =
    ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant5_Value_h;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment.Twist.Twist.Angular.Z =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[2];

  // RateTransition: '<S3>/Rate Transition'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Publish'
    // MATLABSystem: '<S16>/SinkBlock'
    Pub_ROPOD_4Wheel_Tdistkinb_cntr_node_1896.publish
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_B.BusAssignment);

    // End of Outputs for SubSystem: '<S3>/Publish'
  }

  // End of RateTransition: '<S3>/Rate Transition'

  // Update for Delay: '<S10>/Enabled Delay' incorporates:
  //   Constant: '<S10>/Constant3'

  if (ROPOD_4Wheel_Tdistkinb_cntr_node_P.Constant3_Value > 0.0) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.EnabledDelay_DSTATE = 0.0;
  }

  // End of Update for Delay: '<S10>/Enabled Delay'

  // Update for UnitDelay: '<S32>/Delay Input2'
  //
  //  Block description for '<S32>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch_j;

  // Update for UnitDelay: '<S33>/Delay Input2'
  //
  //  Block description for '<S33>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_b;

  // Update for UnitDelay: '<S34>/Delay Input2'
  //
  //  Block description for '<S34>/Delay Input2':
  //
  //   Store in Global RAM

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_k =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit_o;

  // Update for DiscreteIntegrator: '<S91>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S92>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp;

  // Update for DiscreteIntegrator: '<S93>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_l =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t30_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut;

  // Update for DiscreteTransferFcn: '<S94>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_l =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_p;

  // Update for UnitDelay: '<S89>/Unit Delay' incorporates:
  //   Product: '<S89>/Product4'
  //   Sum: '<S89>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_a *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut;

  // Update for DiscreteIntegrator: '<S100>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t41_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_o;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_d = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S101>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_b;

  // Update for DiscreteIntegrator: '<S102>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_h =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t31_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_l;

  // Update for DiscreteTransferFcn: '<S103>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_o =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_e;

  // Update for UnitDelay: '<S98>/Unit Delay' incorporates:
  //   Product: '<S98>/Product4'
  //   Sum: '<S98>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_c =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_l *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_b +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_a2;

  // Update for DiscreteIntegrator: '<S109>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_i =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_c_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_c;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_n = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S110>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_m =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_pz;

  // Update for DiscreteIntegrator: '<S111>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_hs =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_i_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_i;

  // Update for DiscreteTransferFcn: '<S112>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bh =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_c;

  // Update for UnitDelay: '<S107>/Unit Delay' incorporates:
  //   Product: '<S107>/Product4'
  //   Sum: '<S107>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_d =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_d *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_l +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_m;

  // Update for DiscreteIntegrator: '<S118>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_m =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_oa_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_oa;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_e = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S119>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_f =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_h;

  // Update for DiscreteIntegrator: '<S120>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_k_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_k;

  // Update for DiscreteTransferFcn: '<S121>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_k =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_m;

  // Update for UnitDelay: '<S116>/Unit Delay' incorporates:
  //   Product: '<S116>/Product4'
  //   Sum: '<S116>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_cy =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_m *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_o +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_i;

  // Update for DiscreteIntegrator: '<S127>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_e =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_fc_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_fc;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_o = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S128>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_d =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_pt;

  // Update for DiscreteIntegrator: '<S129>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_g =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_os_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_os;

  // Update for DiscreteTransferFcn: '<S130>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_mj =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_hi;

  // Update for UnitDelay: '<S125>/Unit Delay' incorporates:
  //   Product: '<S125>/Product4'
  //   Sum: '<S125>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_o =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_k *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_lp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_bg;

  // Update for DiscreteIntegrator: '<S136>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_mc =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_op_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_op;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_l = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S137>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_e =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_k;

  // Update for DiscreteIntegrator: '<S138>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_h_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_h;

  // Update for DiscreteTransferFcn: '<S139>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_n =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_f;

  // Update for UnitDelay: '<S134>/Unit Delay' incorporates:
  //   Product: '<S134>/Product4'
  //   Sum: '<S134>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_cd =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_b *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_lh +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_d;

  // Update for DiscreteIntegrator: '<S145>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_c =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_i_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.Integrator_i;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_p = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S146>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_l0 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_fw;

  // Update for DiscreteIntegrator: '<S147>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n3 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_le_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_le;

  // Update for DiscreteTransferFcn: '<S148>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_eh =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_hi2;

  // Update for UnitDelay: '<S143>/Unit Delay' incorporates:
  //   Product: '<S143>/Product4'
  //   Sum: '<S143>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_j =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_e *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_h +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_ld;

  // Update for DiscreteIntegrator: '<S154>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_fp =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_f = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S155>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_es =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.FilterDifferentiatorTF_tmp_ho;

  // Update for DiscreteIntegrator: '<S156>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_gz =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_POut_io_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.POut_io;

  // Update for DiscreteTransferFcn: '<S157>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_j =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz;

  // Update for UnitDelay: '<S152>/Unit Delay' incorporates:
  //   Product: '<S152>/Product4'
  //   Sum: '<S152>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_d5 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.DOut_au +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz;

  // Update for DiscreteIntegrator: '<S53>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_ig =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_0 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t4;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_g = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S54>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_er =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t5;

  // Update for DiscreteIntegrator: '<S55>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_j =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_1 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t6;

  // Update for DiscreteTransferFcn: '<S56>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_nl =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8;

  // Update for UnitDelay: '<S51>/Unit Delay' incorporates:
  //   Product: '<S51>/Product4'
  //   Sum: '<S51>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_b =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_mi *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t2 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t7;

  // Update for DiscreteIntegrator: '<S62>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n0 =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.I_freq_hz_e +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LPF_fhz_n;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_k = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S63>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_a =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t10;

  // Update for DiscreteIntegrator: '<S64>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_cj =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t8_tmp +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t11;

  // Update for DiscreteTransferFcn: '<S65>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ml =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_pole_fhz_n;

  // Update for UnitDelay: '<S60>/Unit Delay' incorporates:
  //   Product: '<S60>/Product4'
  //   Sum: '<S60>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_n =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_g *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t9 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.LL_zero_fhz_m;

  // Update for DiscreteIntegrator: '<S71>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_gj =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t23 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t15;
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_np = (int8_T)
    rtb_Compare;

  // Update for DiscreteTransferFcn: '<S72>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bm =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t17;

  // Update for DiscreteIntegrator: '<S73>/Integrator'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_hn =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t26 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t18;

  // Update for DiscreteTransferFcn: '<S74>/Filter Differentiator TF'
  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ou =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t22;

  // Update for UnitDelay: '<S69>/Unit Delay' incorporates:
  //   Product: '<S69>/Product4'
  //   Sum: '<S69>/Sum1'

  ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_de =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.a_n *
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_3 +
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.rtb_Switch_idx_2;

  // MATLAB Function: '<S2>/pos_rot_matrix' incorporates:
  //   DiscreteIntegrator: '<S2>/Discrete-Time Integrator'

  ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit = cos
    (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[0] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25 = sin
    (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[2]);
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[3] =
    -ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[6] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[1] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.t25;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[4] =
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.deltafalllimit;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[7] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[2] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[5] = 0.0;
  ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[8] = 1.0;
  for (ROPOD_4Wheel_Tdistkinb_cntr_node_B.k = 0;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k < 3;
       ROPOD_4Wheel_Tdistkinb_cntr_node_B.k++) {
    // Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
      += ROPOD_4Wheel_Tdistkinb_cntr_node_P.DiscreteTimeIntegrator_gainval *
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
       + 6] * ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[2] +
       (ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k
        + 3] * ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[1] +
        ROPOD_4Wheel_Tdistkinb_cntr_node_B.f[ROPOD_4Wheel_Tdistkinb_cntr_node_B.k]
        * ROPOD_4Wheel_Tdistkinb_cntr_node_B.Product3[0]));
  }

  // End of MATLAB Function: '<S2>/pos_rot_matrix'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.t[0] =
    (++ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.clockTick0) *
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.stepSize0;
  rate_scheduler();
}

// Model initialize function
void ROPOD_4Wheel_Tdistkinb_cntr_node_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)ROPOD_4Wheel_Tdistkinb_cntr_node_M, 0,
                sizeof(RT_MODEL_ROPOD_4Wheel_Tdistkinb_cntr_node_T));
  rtsiSetSolverName(&ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfo,
                    "FixedStepDiscrete");
  ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfoPtr =
    (&ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfo);

  // Initialize timing info
  {
    int_T *mdlTsMap =
      ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap
      [0]);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleTimes =
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleTimesArray[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.offsetTimes =
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.offsetTimesArray[0]);

    // task periods
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleTimes[0] = (0.001);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleTimes[1] = (0.01);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleTimes[2] = (1.0);

    // task offsets
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.offsetTimes[0] = (0.0);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.offsetTimes[1] = (0.0);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.offsetTimes[2] = (0.0);
  }

  rtmSetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_node_M,
             &ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    mdlSampleHits[2] = 1;
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(ROPOD_4Wheel_Tdistkinb_cntr_node_M, -1);
  ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.stepSize0 = 0.001;
  ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfoPtr =
    (&ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfo);
  ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfo, 0.001);
  rtsiSetSolverMode(&ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  // block I/O
  (void) memset(((void *) &ROPOD_4Wheel_Tdistkinb_cntr_node_B), 0,
                sizeof(B_ROPOD_4Wheel_Tdistkinb_cntr_node_T));

  // states (dwork)
  (void) memset((void *)&ROPOD_4Wheel_Tdistkinb_cntr_node_DW, 0,
                sizeof(DW_ROPOD_4Wheel_Tdistkinb_cntr_node_T));

  // child S-Function registration
  {
    RTWSfcnInfo *sfcnInfo =
      &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.sfcnInfo;
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (ROPOD_4Wheel_Tdistkinb_cntr_node_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_node_M->Sizes.numSampTimes);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_node_M)[0]);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_node_M)[1]);
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.taskTimePtrs[2] =
      &(rtmGetTPtr(ROPOD_4Wheel_Tdistkinb_cntr_node_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,
                   ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(ROPOD_4Wheel_Tdistkinb_cntr_node_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(ROPOD_4Wheel_Tdistkinb_cntr_node_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (ROPOD_4Wheel_Tdistkinb_cntr_node_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (ROPOD_4Wheel_Tdistkinb_cntr_node_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_node_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_node_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_node_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &ROPOD_4Wheel_Tdistkinb_cntr_node_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &ROPOD_4Wheel_Tdistkinb_cntr_node_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->solverInfoPtr);
  }

  ROPOD_4Wheel_Tdistkinb_cntr_node_M->Sizes.numSFcns = (5);

  // register each child
  {
    (void) memset((void *)
                  &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  5*sizeof(SimStruct));
    ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions =
      (&ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[i] =
          (&ROPOD_4Wheel_Tdistkinb_cntr_node_M->
           NonInlinedSFcns.childSFunctions[i]);
      }
    }

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_node/<S5>/ECAT_Interface (ECAT_Interface) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[0];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_node_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods2
                           [0]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods3
                           [0]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods4
                           [0]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int32_T *)
            &ROPOD_4Wheel_Tdistkinb_cntr_node_B.ECAT_Interface_i));
        }
      }

      // path info
      ssSetModelName(rts, "ECAT_Interface");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/ECAT_Interface");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_node_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_node_P.ECAT_Interface_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_node_P.ECAT_Interface_P2_Size);
      }

      // work vectors
      ssSetRWork(rts, (real_T *)
                 &ROPOD_4Wheel_Tdistkinb_cntr_node_DW.ECAT_Interface_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        // RWORK
        ssSetDWorkWidth(rts, 0, 13);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &ROPOD_4Wheel_Tdistkinb_cntr_node_DW.ECAT_Interface_RWORK[0]);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_node/<S27>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[1];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_node_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods2
                           [1]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods3
                           [1]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods4
                           [1]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[0];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p_m;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n_n;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_1/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_node_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_node_P.SFunction_P1_Size);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_node/<S28>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[2];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_node_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods2
                           [2]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods3
                           [2]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods4
                           [2]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_b;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2_pi;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[2];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2_g;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p_m;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n_b;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p_g;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n_m;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_o));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_2/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_node_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_node_P.SFunction_P1_Size_a);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_node/<S29>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[3];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_node_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods2
                           [3]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods3
                           [3]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods4
                           [3]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_f;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2_p;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[4];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2_n;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p_l;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n_o;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_b));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_3/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_node_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_node_P.SFunction_P1_Size_b);
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

    // Level2 S-Function Block: ROPOD_4Wheel_Tdistkinb_cntr_node/<S30>/S-Function (ec_ROPOD_SmartWheel) 
    {
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[4];

      // timing info
      time_T *sfcnPeriod =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      // Set up the mdlInfo pointer
      ssSetRTWSfcnInfo(rts, ROPOD_4Wheel_Tdistkinb_cntr_node_M->sfcnInfo);

      // Allocate memory of model methods 2
      {
        ssSetModelMethods2(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods2
                           [4]);
      }

      // Allocate memory of model methods 3
      {
        ssSetModelMethods3(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods3
                           [4]);
      }

      // Allocate memory of model methods 4
      {
        ssSetModelMethods4(rts,
                           &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.methods4
                           [4]);
      }

      // Allocate memory for states auxilliary information
      {
        ssSetStatesInfo2(rts,
                         &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      // inputs
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);

        // port 0
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command1_bn;
          sfcnUPtrs[1] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.command2_i;
          sfcnUPtrs[2] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.Switch1[6];
          sfcnUPtrs[3] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.setpoint2_a;
          sfcnUPtrs[4] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_p_d;
          sfcnUPtrs[5] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit1_n_c;
          sfcnUPtrs[6] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_p_i;
          sfcnUPtrs[7] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.limit2_n_p;
          sfcnUPtrs[8] = &ROPOD_4Wheel_Tdistkinb_cntr_node_B.timestamp;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 9);
        }
      }

      // outputs
      {
        ssSetPortInfoForOutputs(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);

        // port 0
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 40);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            ROPOD_4Wheel_Tdistkinb_cntr_node_B.SFunction_m));
        }
      }

      // path info
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "ROPOD_4Wheel_Tdistkinb_cntr_node/ROPOD 4SW TORQUE_MODE/Smart_Wheel_4/ec_ROPOD_SmartWheel/S-Function");
      ssSetRTModel(rts,ROPOD_4Wheel_Tdistkinb_cntr_node_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      // parameters
      {
        mxArray **sfcnParams = (mxArray **)
          &ROPOD_4Wheel_Tdistkinb_cntr_node_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       ROPOD_4Wheel_Tdistkinb_cntr_node_P.SFunction_P1_Size_g);
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
      SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Start for MATLABSystem: '<S6>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ft.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ft.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ft.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv2[i] = tmp_17[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv2[30] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2935.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv2);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2935.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2935.set_initial_value
      (ROPOD_ParameterInitialValue_kdr);

    // End of Start for MATLABSystem: '<S6>/Get Parameter14'
    // Start for MATLABSystem: '<S7>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_be.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_be.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_be.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_16[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2173.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2173.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2173.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter'

    // Start for MATLABSystem: '<S7>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_15[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2176.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2176.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2176.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter11'

    // Start for MATLABSystem: '<S7>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fa.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fa.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fa.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_14[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2177.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2177.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2177.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter12'

    // Start for MATLABSystem: '<S7>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_p.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_p.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_13[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2178.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2178.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2178.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter13'

    // Start for MATLABSystem: '<S7>/Get Parameter14'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l1.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l1.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_12[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2179.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2179.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2179.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter14'

    // Start for MATLABSystem: '<S7>/Get Parameter15'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pe.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pe.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pe.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_11[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2180.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2180.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2180.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter15'

    // Start for MATLABSystem: '<S7>/Get Parameter16'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_10[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2181.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2181.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2181.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter16'

    // Start for MATLABSystem: '<S7>/Get Parameter17'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bc.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bc.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bc.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_z[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2182.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2182.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2182.set_initial_value
      (ParameterInitialV_kdrlxgf1whozf);

    // End of Start for MATLABSystem: '<S7>/Get Parameter17'

    // Start for MATLABSystem: '<S7>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hv.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hv.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hv.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_1a[i] = tmp_y[i];
    }

    tmp_1a[19] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2174.initialize(tmp_1a);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2174.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2174.set_initial_value
      (ParameterInitialVa_kdrlxgf1whoz);

    // End of Start for MATLABSystem: '<S7>/Get Parameter1'

    // Start for MATLABSystem: '<S7>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_j.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_j.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_1a[i] = tmp_x[i];
    }

    tmp_1a[19] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2183.initialize(tmp_1a);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2183.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2183.set_initial_value
      (ParameterInitialVal_kdrlxgf1who);

    // End of Start for MATLABSystem: '<S7>/Get Parameter2'

    // Start for MATLABSystem: '<S7>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_w[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2184.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2184.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2184.set_initial_value
      (ParameterInitialValu_kdrlxgf1wh);

    // End of Start for MATLABSystem: '<S7>/Get Parameter3'

    // Start for MATLABSystem: '<S7>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_v[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2185.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2185.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2185.set_initial_value
      (ParameterInitialValu_kdrlxgf1wh);

    // End of Start for MATLABSystem: '<S7>/Get Parameter4'

    // Start for MATLABSystem: '<S7>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_u[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2186.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2186.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2186.set_initial_value
      (ParameterInitialValue_kdrlxgf1w);

    // End of Start for MATLABSystem: '<S7>/Get Parameter5'

    // Start for MATLABSystem: '<S7>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ep.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ep.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ep.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_t[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2187.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2187.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2187.set_initial_value
      (ParameterInitialValu_kdrlxgf1wh);

    // End of Start for MATLABSystem: '<S7>/Get Parameter6'

    // Start for MATLABSystem: '<S7>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_lm.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_lm.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_lm.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_s[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2188.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2188.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2188.set_initial_value
      (ParameterInitialValu_kdrlxgf1wh);

    // End of Start for MATLABSystem: '<S7>/Get Parameter7'

    // Start for MATLABSystem: '<S7>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ew.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ew.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ew.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_r[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2189.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2189.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2189.set_initial_value
      (ParameterInitialValue_kdrlxgf1w);

    // End of Start for MATLABSystem: '<S7>/Get Parameter8'

    // Start for MATLABSystem: '<S7>/Get Parameter9'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nj.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_q[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2190.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2190.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2190.set_initial_value
      (ParameterInitialValue_kdrlxgf1w);

    // End of Start for MATLABSystem: '<S7>/Get Parameter9'

    // Start for MATLABSystem: '<S7>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b1.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b1.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_p[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2175.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2175.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2175.set_initial_value
      (ParameterInitialValue_kdrlxgf1w);

    // End of Start for MATLABSystem: '<S7>/Get Parameter10'

    // Start for MATLABSystem: '<S8>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_k.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_k.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[i] = tmp_o[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2214.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2214.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2214.set_initial_value
      (R_ParameterInitia_m);

    // End of Start for MATLABSystem: '<S8>/Get Parameter1'

    // Start for MATLABSystem: '<S8>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_m.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_m.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[i] = tmp_n[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2216.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2216.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2216.set_initial_value
      (R_ParameterInitia_k);

    // End of Start for MATLABSystem: '<S8>/Get Parameter3'

    // Start for MATLABSystem: '<S8>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i4.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i4.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i4.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[i] = tmp_m[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2217.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2217.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2217.set_initial_value
      (R_ParameterInitia_b);

    // End of Start for MATLABSystem: '<S8>/Get Parameter4'

    // Start for MATLABSystem: '<S8>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[i] = tmp_l[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2218.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2218.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2218.set_initial_value
      (R_ParameterInitia_l);

    // End of Start for MATLABSystem: '<S8>/Get Parameter5'

    // Start for MATLABSystem: '<S9>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv8[i] = tmp_k[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv8[21] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2237.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv8);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2237.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2237.set_initial_value
      (ParameterInitial_kdrlxgf1whozfc);

    // End of Start for MATLABSystem: '<S9>/Get Parameter'

    // Start for MATLABSystem: '<S9>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_f.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_f.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv8[i] = tmp_j[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv8[21] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2238.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv8);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2238.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2238.set_initial_value
      (ParameterInitial_kdrlxgf1whozfc);

    // End of Start for MATLABSystem: '<S9>/Get Parameter1'

    // Start for Delay: '<S10>/Enabled Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.EnabledDelay = 0.0;

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S17>/SourceBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a1.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a1.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_19[i] = tmp_i[i];
    }

    tmp_19[8] = '\x00';
    Sub_ROPOD_4Wheel_Tdistkinb_cntr_node_1899.createSubscriber(tmp_19,
      ROPOD_4Wheel__MessageQueueLen_k);

    // End of Start for MATLABSystem: '<S17>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'

    // Start for MATLABSystem: '<S9>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_n.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_n.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_h[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2239.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2239.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2239.set_initial_value
      (R_ParameterInitia_o);

    // End of Start for MATLABSystem: '<S9>/Get Parameter2'

    // Start for MATLABSystem: '<S9>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[i] = tmp_g[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7[24] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2240.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv7);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2240.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2240.set_initial_value
      (R_ParameterInitia_o);

    // End of Start for MATLABSystem: '<S9>/Get Parameter3'

    // Start for MATLABSystem: '<S6>/Get Parameter10'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pz.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pz.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pz.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[i] = tmp_f[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2931.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2931.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2931.set_initial_value
      (ParameterInitialValue_kdrlxgf1);

    // End of Start for MATLABSystem: '<S6>/Get Parameter10'

    // Start for MATLABSystem: '<S6>/Get Parameter11'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jt.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jt.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jt.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[i] = tmp_e[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4[28] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2932.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv4);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2932.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2932.set_initial_value
      (R_ParameterInitialValue_kdrlxgf);

    // End of Start for MATLABSystem: '<S6>/Get Parameter11'

    // Start for MATLABSystem: '<S6>/Get Parameter12'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_da.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_da.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_da.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv0[i] = tmp_d[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv0[32] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2933.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv0);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2933.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2933.set_initial_value
      (RO_ParameterInitialValue_kdrlxg);

    // End of Start for MATLABSystem: '<S6>/Get Parameter12'

    // Start for MATLABSystem: '<S6>/Get Parameter13'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e5.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e5.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e5.isInitialized = 1;
    for (i = 0; i < 32; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv0[i] = tmp_c[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv0[32] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2934.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv0);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2934.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2934.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter13'

    // Start for MATLABSystem: '<S6>/Get Parameter6'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_c.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_c.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5[i] = tmp_b[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2903.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2903.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2903.set_initial_value
      (ROPOD_ParameterInitialValue_kdr);

    // End of Start for MATLABSystem: '<S6>/Get Parameter6'

    // Start for MATLABSystem: '<S6>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_mn.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_mn.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_mn.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6[i] = tmp_a[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2716.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2716.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2716.set_initial_value
      (ROP_ParameterInitialValue_kdrlx);

    // End of Start for MATLABSystem: '<S6>/Get Parameter'

    // Start for MATLABSystem: '<S6>/Get Parameter3'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d0.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d0.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d0.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6[i] = tmp_9[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2898.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2898.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2898.set_initial_value
      (ROPO_ParameterInitialValue_kdrl);

    // End of Start for MATLABSystem: '<S6>/Get Parameter3'

    // Start for MATLABSystem: '<S6>/Get Parameter4'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ey.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ey.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ey.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3[i] = tmp_8[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2900.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2900.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2900.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter4'

    // Start for MATLABSystem: '<S6>/Get Parameter5'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g0.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g0.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g0.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3[i] = tmp_7[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2902.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2902.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2902.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter5'

    // Start for MATLABSystem: '<S6>/Get Parameter9'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ch.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ch.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ch.isInitialized = 1;
    for (i = 0; i < 29; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3[i] = tmp_6[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3[29] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2923.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv3);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2923.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2923.set_initial_value
      (ROPOD_ParameterInitialValue_kdr);

    // End of Start for MATLABSystem: '<S6>/Get Parameter9'

    // Start for MATLABSystem: '<S6>/Get Parameter1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fy.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fy.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fy.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5[i] = tmp_5[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2919.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2919.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2919.set_initial_value
      (ROPOD__ParameterInitialValue_kd);

    // End of Start for MATLABSystem: '<S6>/Get Parameter1'

    // Start for MATLABSystem: '<S6>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hq.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hq.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hq.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5[i] = tmp_4[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5[27] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2920.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv5);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2920.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2920.set_initial_value
      (ROPOD_4_ParameterInitialValue_k);

    // End of Start for MATLABSystem: '<S6>/Get Parameter2'

    // Start for MATLABSystem: '<S6>/Get Parameter7'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_eq.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_eq.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_eq.isInitialized = 1;
    for (i = 0; i < 31; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv1[i] = tmp_3[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv1[31] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2921.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv1);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2921.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2921.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter7'

    // Start for MATLABSystem: '<S6>/Get Parameter8'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 31; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv1[i] = tmp_2[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv1[31] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2922.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv1);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2922.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2922.set_initial_value
      (ROPOD_4Wh_ParameterInitialValue);

    // End of Start for MATLABSystem: '<S6>/Get Parameter8'

    // Start for MATLABSystem: '<S8>/Get Parameter2'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_h.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_h.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6[i] = tmp_1[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6[25] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2215.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv6);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2215.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2215.set_initial_value
      (ParameterInitia_kdrlxgf1whozfcv);

    // End of Start for MATLABSystem: '<S8>/Get Parameter2'

    // Start for MATLABSystem: '<S8>/Get Parameter'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bg.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bg.SampleTime =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Tsp;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bg.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv9[i] = tmp_0[i];
    }

    ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv9[20] = '\x00';
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2213.initialize
      (ROPOD_4Wheel_Tdistkinb_cntr_node_B.cv9);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2213.initialize_error_codes(0U, 1U,
      2U, 3U);
    ParamGet_ROPOD_4Wheel_Tdistkinb_cntr_node_2213.set_initial_value
      (ParameterInitial_kdrlxgf1whozfc);

    // End of Start for MATLABSystem: '<S8>/Get Parameter'

    // Start for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nv.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nv.isInitialized = 1;

    // Start for Atomic SubSystem: '<S3>/Publish'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hy.isInitialized = 0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hy.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_18[i] = tmp[i];
    }

    tmp_18[16] = '\x00';
    Pub_ROPOD_4Wheel_Tdistkinb_cntr_node_1896.createPublisher(tmp_18,
      ROPOD_4Wheel_Td_MessageQueueLen);

    // End of Start for MATLABSystem: '<S16>/SinkBlock'
    // End of Start for SubSystem: '<S3>/Publish'
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_ZC =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__g =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__k =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__c =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gp =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset__e =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gs =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_e2 =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gy =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_gf =
      UNINITIALIZED_ZCSIG;
    ROPOD_4Wheel_Tdistkinb_cntr_node_PrevZCX.FilterDifferentiatorTF_Reset_kl =
      UNINITIALIZED_ZCSIG;

    // InitializeConditions for Delay: '<S10>/Enabled Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.EnabledDelay_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.EnabledDelay_InitialCondition;

    // InitializeConditions for UnitDelay: '<S32>/Delay Input2'
    //
    //  Block description for '<S32>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.DelayInput2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S33>/Delay Input2'
    //
    //  Block description for '<S33>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.DelayInput2_InitialCondition_o;

    // InitializeConditions for UnitDelay: '<S34>/Delay Input2'
    //
    //  Block description for '<S34>/Delay Input2':
    //
    //   Store in Global RAM

    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DelayInput2_DSTATE_k =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.DelayInput2_InitialCondition_c;

    // InitializeConditions for DiscreteIntegrator: '<S91>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S92>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_InitialS;

    // InitializeConditions for DiscreteIntegrator: '<S93>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_l =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_b;

    // InitializeConditions for DiscreteTransferFcn: '<S94>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_l =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_p;

    // InitializeConditions for UnitDelay: '<S89>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition;

    // InitializeConditions for DiscreteIntegrator: '<S100>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_f =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_m;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_d = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S101>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_j;

    // InitializeConditions for DiscreteIntegrator: '<S102>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_h =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_e;

    // InitializeConditions for DiscreteTransferFcn: '<S103>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_g;

    // InitializeConditions for UnitDelay: '<S98>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_j;

    // InitializeConditions for DiscreteIntegrator: '<S109>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_i =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_i;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_n = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S110>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_o;

    // InitializeConditions for DiscreteIntegrator: '<S111>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_hs =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_n;

    // InitializeConditions for DiscreteTransferFcn: '<S112>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bh =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_e;

    // InitializeConditions for UnitDelay: '<S107>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_d =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_h;

    // InitializeConditions for DiscreteIntegrator: '<S118>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_m =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_ih;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_e = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S119>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_f =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_ji;

    // InitializeConditions for DiscreteIntegrator: '<S120>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_in;

    // InitializeConditions for DiscreteTransferFcn: '<S121>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_k =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_ow;

    // InitializeConditions for UnitDelay: '<S116>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_cy =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_f;

    // InitializeConditions for DiscreteIntegrator: '<S127>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_e =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_j;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_o = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S128>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_d =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_h;

    // InitializeConditions for DiscreteIntegrator: '<S129>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_g =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_l;

    // InitializeConditions for DiscreteTransferFcn: '<S130>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_mj =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_b;

    // InitializeConditions for UnitDelay: '<S125>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_o =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_fm;

    // InitializeConditions for DiscreteIntegrator: '<S136>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_mc =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_nm;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_l = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S137>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_e =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_ph;

    // InitializeConditions for DiscreteIntegrator: '<S138>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_g;

    // InitializeConditions for DiscreteTransferFcn: '<S139>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_n =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_c;

    // InitializeConditions for UnitDelay: '<S134>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_cd =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_b;

    // InitializeConditions for DiscreteIntegrator: '<S145>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_c =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_iv;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_p = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S146>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_l0 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_gq;

    // InitializeConditions for DiscreteIntegrator: '<S147>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n3 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_p;

    // InitializeConditions for DiscreteTransferFcn: '<S148>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_eh =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_f;

    // InitializeConditions for UnitDelay: '<S143>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_j =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_g;

    // InitializeConditions for DiscreteIntegrator: '<S154>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_fp =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_eq;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_f = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S155>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_es =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_l;

    // InitializeConditions for DiscreteIntegrator: '<S156>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_gz =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_m1;

    // InitializeConditions for DiscreteTransferFcn: '<S157>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_j =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_m;

    // InitializeConditions for UnitDelay: '<S152>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_d5 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_bi;

    // InitializeConditions for DiscreteIntegrator: '<S53>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_ig =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_o;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_g = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S54>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_er =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_d;

    // InitializeConditions for DiscreteIntegrator: '<S55>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_j =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_pk;

    // InitializeConditions for DiscreteTransferFcn: '<S56>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_nl =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initia_k;

    // InitializeConditions for UnitDelay: '<S51>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_b =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_bf;

    // InitializeConditions for DiscreteIntegrator: '<S62>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_n0 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_e0;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_k = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S63>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_states_a =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_ex;

    // InitializeConditions for DiscreteIntegrator: '<S64>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_cj =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_nb;

    // InitializeConditions for DiscreteTransferFcn: '<S65>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ml =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_cx;

    // InitializeConditions for UnitDelay: '<S60>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_n =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_a;

    // InitializeConditions for DiscreteIntegrator: '<S71>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_gj =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_p5;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_PrevResetState_np = 0;

    // InitializeConditions for DiscreteTransferFcn: '<S72>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_bm =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_or;

    // InitializeConditions for DiscreteIntegrator: '<S73>/Integrator'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.Integrator_DSTATE_hn =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Integrator_IC_k;

    // InitializeConditions for DiscreteTransferFcn: '<S74>/Filter Differentiator TF' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.FilterDifferentiatorTF_state_ou =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.FilterDifferentiatorTF_Initi_dd;

    // InitializeConditions for UnitDelay: '<S69>/Unit Delay'
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.UnitDelay_DSTATE_de =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.UnitDelay_InitialCondition_ap;

    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[0] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.DiscreteTimeIntegrator_IC;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[1] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.DiscreteTimeIntegrator_IC;
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.DiscreteTimeIntegrator_DSTATE[2] =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.DiscreteTimeIntegrator_IC;

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S17>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1'
    ROPOD_4Wheel_Tdistkinb_cntr_node_B.In1 =
      ROPOD_4Wheel_Tdistkinb_cntr_node_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S17>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'
  }
}

// Model terminate function
void ROPOD_4Wheel_Tdistkinb_cntr_node_terminate(void)
{
  // Terminate for S-Function (ECAT_Interface): '<S5>/ECAT_Interface'
  // Level2 S-Function Block: '<S5>/ECAT_Interface' (ECAT_Interface)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  // Terminate for MATLABSystem: '<S6>/Get Parameter14'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ft.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ft.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter14'

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S27>/S-Function'
  // Level2 S-Function Block: '<S27>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S28>/S-Function'
  // Level2 S-Function Block: '<S28>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S29>/S-Function'
  // Level2 S-Function Block: '<S29>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  // Terminate for S-Function (ec_ROPOD_SmartWheel): '<S30>/S-Function'
  // Level2 S-Function Block: '<S30>/S-Function' (ec_ROPOD_SmartWheel)
  {
    SimStruct *rts = ROPOD_4Wheel_Tdistkinb_cntr_node_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  // Terminate for MATLABSystem: '<S7>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_be.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_be.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter'

  // Terminate for MATLABSystem: '<S7>/Get Parameter11'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter11'

  // Terminate for MATLABSystem: '<S7>/Get Parameter12'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fa.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fa.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter12'

  // Terminate for MATLABSystem: '<S7>/Get Parameter13'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_p.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_p.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter13'

  // Terminate for MATLABSystem: '<S7>/Get Parameter14'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_l1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter14'

  // Terminate for MATLABSystem: '<S7>/Get Parameter15'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pe.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pe.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter15'

  // Terminate for MATLABSystem: '<S7>/Get Parameter16'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter16'

  // Terminate for MATLABSystem: '<S7>/Get Parameter17'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bc.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bc.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter17'

  // Terminate for MATLABSystem: '<S7>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hv.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hv.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter1'

  // Terminate for MATLABSystem: '<S7>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_j.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_j.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter2'

  // Terminate for MATLABSystem: '<S7>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter3'

  // Terminate for MATLABSystem: '<S7>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jj.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter4'

  // Terminate for MATLABSystem: '<S7>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter5'

  // Terminate for MATLABSystem: '<S7>/Get Parameter6'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ep.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ep.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter6'

  // Terminate for MATLABSystem: '<S7>/Get Parameter7'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_lm.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_lm.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter7'

  // Terminate for MATLABSystem: '<S7>/Get Parameter8'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ew.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ew.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter8'

  // Terminate for MATLABSystem: '<S7>/Get Parameter9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nj.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter9'

  // Terminate for MATLABSystem: '<S7>/Get Parameter10'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S7>/Get Parameter10'

  // Terminate for MATLABSystem: '<S8>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_k.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_k.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter1'

  // Terminate for MATLABSystem: '<S8>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_m.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_m.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter3'

  // Terminate for MATLABSystem: '<S8>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i4.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i4.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter4'

  // Terminate for MATLABSystem: '<S8>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_b.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter5'

  // Terminate for MATLABSystem: '<S9>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S9>/Get Parameter'

  // Terminate for MATLABSystem: '<S9>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_f.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_f.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S9>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Terminate for MATLABSystem: '<S17>/SourceBlock'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a1.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a1.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S17>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe1'

  // Terminate for MATLABSystem: '<S9>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_n.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_n.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S9>/Get Parameter2'

  // Terminate for MATLABSystem: '<S9>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_i.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S9>/Get Parameter3'

  // Terminate for MATLABSystem: '<S6>/Get Parameter10'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pz.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_pz.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter10'

  // Terminate for MATLABSystem: '<S6>/Get Parameter11'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jt.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_jt.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter11'

  // Terminate for MATLABSystem: '<S6>/Get Parameter12'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_da.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_da.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter12'

  // Terminate for MATLABSystem: '<S6>/Get Parameter13'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e5.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_e5.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter13'

  // Terminate for MATLABSystem: '<S6>/Get Parameter6'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_c.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_c.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter6'

  // Terminate for MATLABSystem: '<S6>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_mn.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_mn.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter'

  // Terminate for MATLABSystem: '<S6>/Get Parameter3'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d0.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_d0.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter3'

  // Terminate for MATLABSystem: '<S6>/Get Parameter4'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ey.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ey.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter4'

  // Terminate for MATLABSystem: '<S6>/Get Parameter5'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g0.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_g0.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter5'

  // Terminate for MATLABSystem: '<S6>/Get Parameter9'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ch.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_ch.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter9'

  // Terminate for MATLABSystem: '<S6>/Get Parameter1'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fy.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_fy.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter1'

  // Terminate for MATLABSystem: '<S6>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hq.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hq.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter2'

  // Terminate for MATLABSystem: '<S6>/Get Parameter7'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_eq.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_eq.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter7'

  // Terminate for MATLABSystem: '<S6>/Get Parameter8'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_a.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S6>/Get Parameter8'

  // Terminate for MATLABSystem: '<S8>/Get Parameter2'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_h.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_h.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter2'

  // Terminate for MATLABSystem: '<S8>/Get Parameter'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bg.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_bg.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S8>/Get Parameter'

  // Terminate for MATLABSystem: '<S3>/Coordinate Transformation Conversion'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nv.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_nv.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S3>/Coordinate Transformation Conversion' 

  // Terminate for Atomic SubSystem: '<S3>/Publish'
  // Terminate for MATLABSystem: '<S16>/SinkBlock'
  if (ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hy.isInitialized == 1) {
    ROPOD_4Wheel_Tdistkinb_cntr_node_DW.obj_hy.isInitialized = 2;
  }

  // End of Terminate for MATLABSystem: '<S16>/SinkBlock'
  // End of Terminate for SubSystem: '<S3>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//