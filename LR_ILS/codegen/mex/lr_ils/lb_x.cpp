//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_x.cpp
//
// Code generation for function 'lb_x'
//

// Include files
#include "lb_x.h"
#include "eml_int_forloop_overflow_check.h"
#include "lb_dfs.h"
#include "lr_ils_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"

// Variable Definitions
static emlrtRSInfo t_emlrtRSI{
    28,                                                           // lineNo
    "lb_x",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    50,                                                           // lineNo
    "lb_x",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    89,                                                           // lineNo
    "greedy_build",                                               // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    97,                                                           // lineNo
    "greedy_build",                                               // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    104,                                                          // lineNo
    "greedy_build",                                               // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    113,         // lineNo
    "findFirst", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    152,                      // lineNo
    "onearg_null_assignment", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtBCInfo s_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    34,                                                            // lineNo
    16,                                                            // colNo
    "price",                                                       // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    34,                                                            // lineNo
    18,                                                            // colNo
    "price",                                                       // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    37,                                                            // lineNo
    23,                                                            // colNo
    "plan",                                                        // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    38,                                                            // lineNo
    25,                                                            // colNo
    "trans_cost",                                                  // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    39,                                                            // lineNo
    23,                                                            // colNo
    "dmd",                                                         // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    40,                                                            // lineNo
    21,                                                            // colNo
    "mu",                                                          // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    54,                                                            // lineNo
    18,                                                            // colNo
    "plan",                                                        // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtECInfo b_emlrtECI{
    -1,                                                           // nDims
    54,                                                           // lineNo
    13,                                                           // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    56,                                                            // lineNo
    18,                                                            // colNo
    "plan",                                                        // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtECInfo c_emlrtECI{
    -1,                                                           // nDims
    56,                                                           // lineNo
    13,                                                           // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    36,                                                            // lineNo
    9,                                                             // colNo
    "I",                                                           // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    51,                                                            // lineNo
    20,                                                            // colNo
    "trans_cost",                                                  // aName
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    54,                                                            // lineNo
    43,                                                            // colNo
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtDCInfo l_emlrtDCI{
    54,                                                            // lineNo
    43,                                                            // colNo
    "lb_x",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    4                                                              // checkKind
};

static emlrtECInfo h_emlrtECI{
    -1,                                                           // nDims
    108,                                                          // lineNo
    9,                                                            // colNo
    "greedy_build",                                               // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo yc_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    108,                                                           // lineNo
    14,                                                            // colNo
    "plan",                                                        // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtECInfo i_emlrtECI{
    -1,                                                           // nDims
    101,                                                          // lineNo
    9,                                                            // colNo
    "greedy_build",                                               // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo ad_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    101,                                                           // lineNo
    14,                                                            // colNo
    "plan",                                                        // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    105,                                                           // lineNo
    65,                                                            // colNo
    "price",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    93,                                                            // lineNo
    30,                                                            // colNo
    "bar_J",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    74,                                                            // lineNo
    11,                                                            // colNo
    "route",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtRTEInfo m_emlrtRTEI{
    83,                                                           // lineNo
    13,                                                           // colNo
    "greedy_build",                                               // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo ed_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    81,                                                            // lineNo
    15,                                                            // colNo
    "mu",                                                          // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    78,                                                            // lineNo
    19,                                                            // colNo
    "dmd",                                                         // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    71,                                                            // lineNo
    13,                                                            // colNo
    "I",                                                           // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo gb_emlrtDCI{
    67,                                                            // lineNo
    25,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtDCInfo hb_emlrtDCI{
    67,                                                            // lineNo
    25,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    4                                                              // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    73,                                                            // lineNo
    22,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    67,                                                            // lineNo
    1,                                                             // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    73,                                                            // lineNo
    5,                                                             // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    102,                                                           // lineNo
    20,                                                            // colNo
    "trans_cost",                                                  // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    86,                                                            // lineNo
    49,                                                            // colNo
    "price",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo lb_emlrtDCI{
    86,                                                            // lineNo
    49,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    86,                                                            // lineNo
    55,                                                            // colNo
    "route",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    86,                                                            // lineNo
    60,                                                            // colNo
    "price",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    86,                                                            // lineNo
    60,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    86,                                                            // lineNo
    64,                                                            // colNo
    "fac",                                                         // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo md_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    87,                                                            // lineNo
    24,                                                            // colNo
    "mu_k",                                                        // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    87,                                                            // lineNo
    24,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo nd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    87,                                                            // lineNo
    28,                                                            // colNo
    "fac",                                                         // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo od_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    86,                                                            // lineNo
    21,                                                            // colNo
    "add_fee",                                                     // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    105,                                                           // lineNo
    54,                                                            // colNo
    "price",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo ob_emlrtDCI{
    105,                                                           // lineNo
    54,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    105,                                                           // lineNo
    60,                                                            // colNo
    "route",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    105,                                                           // lineNo
    20,                                                            // colNo
    "trans_cost",                                                  // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    107,                                                           // lineNo
    46,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtDCInfo qb_emlrtDCI{
    107,                                                           // lineNo
    46,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    4                                                              // checkKind
};

static emlrtBCInfo sd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    90,                                                            // lineNo
    24,                                                            // colNo
    "fac",                                                         // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    90,                                                            // lineNo
    15,                                                            // colNo
    "route",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo ud_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    91,                                                            // lineNo
    25,                                                            // colNo
    "q",                                                           // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtDCInfo rb_emlrtDCI{
    91,                                                            // lineNo
    25,                                                            // colNo
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    1                                                              // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    91,                                                            // lineNo
    31,                                                            // colNo
    "route",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,                                                            // iFirst
    -1,                                                            // iLast
    93,                                                            // lineNo
    18,                                                            // colNo
    "route",                                                       // aName
    "greedy_build",                                                // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m", // pName
    0                                                              // checkKind
};

static emlrtRTEInfo kb_emlrtRTEI{
    28,                                                           // lineNo
    8,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    37,                                                           // lineNo
    9,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    40,                                                           // lineNo
    9,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    54,                                                           // lineNo
    25,                                                           // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo vc_emlrtRTEI{
    67,                                                           // lineNo
    1,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    73,                                                           // lineNo
    5,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo xc_emlrtRTEI{
    77,                                                           // lineNo
    5,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo yc_emlrtRTEI{
    81,                                                           // lineNo
    5,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    84,                                                           // lineNo
    9,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo bd_emlrtRTEI{
    97,                                                           // lineNo
    9,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo cd_emlrtRTEI{
    104,                                                          // lineNo
    15,                                                           // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo dd_emlrtRTEI{
    107,                                                          // lineNo
    9,                                                            // colNo
    "lb_x",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lb_x.m" // pName
};

// Function Declarations
static void greedy_build(const emlrtStack &sp,
                         const coder::array<real_T, 2U> &b_I, real_T max_try,
                         const coder::array<real_T, 2U> &bar_J,
                         const coder::array<real_T, 2U> &data_price,
                         const coder::array<real_T, 1U> &data_dmd,
                         const coder::array<real_T, 2U> &mu,
                         const coder::array<real_T, 1U> &q,
                         coder::array<real_T, 1U> &trans_cost,
                         coder::array<real_T, 2U> &plan);

// Function Definitions
static void greedy_build(const emlrtStack &sp,
                         const coder::array<real_T, 2U> &b_I, real_T max_try,
                         const coder::array<real_T, 2U> &bar_J,
                         const coder::array<real_T, 2U> &data_price,
                         const coder::array<real_T, 1U> &data_dmd,
                         const coder::array<real_T, 2U> &mu,
                         const coder::array<real_T, 1U> &q,
                         coder::array<real_T, 1U> &trans_cost,
                         coder::array<real_T, 2U> &plan)
{
  coder::array<real_T, 2U> add_fee;
  coder::array<real_T, 2U> fac;
  coder::array<real_T, 2U> mu_k;
  coder::array<real_T, 2U> route;
  coder::array<boolean_T, 2U> r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T d;
  int32_T iv[2];
  int32_T i;
  int32_T last;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  路线构建的贪心算法
  //  在每个路径的最后增加一个算子
  plan.set_size(&vc_emlrtRTEI, &sp, b_I.size(1), plan.size(1));
  if (!(max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(max_try + 1.0, &hb_emlrtDCI,
                                (emlrtConstCTX)&sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(max_try + 1.0));
  if (max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(max_try + 1.0, &gb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  plan.set_size(&vc_emlrtRTEI, &sp, plan.size(0),
                static_cast<int32_T>(max_try + 1.0));
  if (max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(max_try + 1.0, &jb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  last = b_I.size(1) * static_cast<int32_T>(max_try + 1.0);
  for (i = 0; i < last; i++) {
    plan[i] = 0.0;
  }
  //  记录每个客户的方案
  //  客户的需求
  //  价格矩阵
  i = b_I.size(1);
  for (int32_T k{0}; k < i; k++) {
    real_T d1;
    real_T fee;
    real_T prob;
    int32_T a;
    int32_T b_i;
    boolean_T exitg1;
    boolean_T jdg_brk;
    if (k + 1 > b_I.size(1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_I.size(1), &gd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    //  直接采用构造法生成一个初始路径
    route.set_size(&wc_emlrtRTEI, &sp, 1, route.size(1));
    if (max_try + 1.0 != d) {
      emlrtIntegerCheckR2012b(max_try + 1.0, &ib_emlrtDCI, (emlrtConstCTX)&sp);
    }
    route.set_size(&wc_emlrtRTEI, &sp, route.size(0),
                   static_cast<int32_T>(max_try + 1.0));
    if (max_try + 1.0 != d) {
      emlrtIntegerCheckR2012b(max_try + 1.0, &kb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    last = static_cast<int32_T>(max_try + 1.0);
    for (a = 0; a < last; a++) {
      route[a] = 0.0;
    }
    //  路径
    if (static_cast<int32_T>(max_try + 1.0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(max_try + 1.0),
                                    &dd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    route[0] = b_I[k];
    //  路径的起点是客户
    prob = 1.0;
    //  初始概率是1
    fee = 0.0;
    //  初始费用是0
    last = bar_J.size(1);
    fac.set_size(&xc_emlrtRTEI, &sp, 1, bar_J.size(1));
    for (a = 0; a < last; a++) {
      fac[a] = bar_J[a];
    }
    //  设施的复制
    if (k + 1 > data_dmd.size(0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, data_dmd.size(0), &fd_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    //  客户的需求
    jdg_brk = false;
    if (k + 1 > mu.size(0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, mu.size(0), &ed_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    last = mu.size(1);
    mu_k.set_size(&yc_emlrtRTEI, &sp, 1, mu.size(1));
    for (a = 0; a < last; a++) {
      mu_k[a] = mu[k + mu.size(0) * a];
    }
    //  每次讲增量成本最小的设施放在路线最后（贪心构建）
    emlrtForLoopVectorCheckR2021a(2.0, 1.0, max_try, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(max_try - 1.0),
                                  &m_emlrtRTEI, (emlrtConstCTX)&sp);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= static_cast<int32_T>(max_try - 1.0) - 1)) {
      real_T ex;
      int32_T b_k;
      int32_T idx;
      add_fee.set_size(&ad_emlrtRTEI, &sp, 1, fac.size(1));
      last = fac.size(1);
      for (a = 0; a < last; a++) {
        add_fee[a] = 0.0;
      }
      a = fac.size(1);
      for (last = 0; last < a; last++) {
        real_T d2;
        if ((static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0) <
             1) ||
            (static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0) >
             route.size(1))) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0), 1,
              route.size(1), &jd_emlrtBCI, (emlrtConstCTX)&sp);
        }
        d1 =
            route[static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0) -
                  1];
        if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
          emlrtIntegerCheckR2012b(d1, &lb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d1) < 1) ||
            (static_cast<int32_T>(d1) > data_price.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                        data_price.size(0), &id_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (last + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(last + 1, 1, fac.size(1), &ld_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        ex = fac[last];
        d2 = static_cast<int32_T>(muDoubleScalarFloor(ex));
        if (ex != d2) {
          emlrtIntegerCheckR2012b(ex, &mb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(ex) < 1) ||
            (static_cast<int32_T>(ex) > data_price.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ex), 1,
                                        data_price.size(1), &kd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (last + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(last + 1, 1, fac.size(1), &nd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (ex != d2) {
          emlrtIntegerCheckR2012b(ex, &nb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(ex) < 1) ||
            (static_cast<int32_T>(ex) > mu.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ex), 1, mu.size(1),
                                        &md_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (last + 1 > add_fee.size(1)) {
          emlrtDynamicBoundsCheckR2012b(last + 1, 1, add_fee.size(1),
                                        &od_emlrtBCI, (emlrtConstCTX)&sp);
        }
        add_fee[last] = prob * data_dmd[k] *
                            data_price[(static_cast<int32_T>(d1) +
                                        data_price.size(0) *
                                            (static_cast<int32_T>(ex) - 1)) -
                                       1] +
                        mu_k[static_cast<int32_T>(ex) - 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      st.site = &v_emlrtRSI;
      b_st.site = &y_emlrtRSI;
      c_st.site = &ab_emlrtRSI;
      d_st.site = &bb_emlrtRSI;
      if (add_fee.size(1) < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &h_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      e_st.site = &cb_emlrtRSI;
      last = add_fee.size(1);
      if (add_fee.size(1) <= 2) {
        if (add_fee.size(1) == 1) {
          ex = add_fee[0];
          idx = 1;
        } else if ((add_fee[0] > add_fee[1]) ||
                   (muDoubleScalarIsNaN(add_fee[0]) &&
                    (!muDoubleScalarIsNaN(add_fee[1])))) {
          ex = add_fee[1];
          idx = 2;
        } else {
          ex = add_fee[0];
          idx = 1;
        }
      } else {
        f_st.site = &eb_emlrtRSI;
        if (!muDoubleScalarIsNaN(add_fee[0])) {
          idx = 1;
        } else {
          boolean_T exitg2;
          idx = 0;
          g_st.site = &fb_emlrtRSI;
          if (add_fee.size(1) > 2147483646) {
            h_st.site = &gb_emlrtRSI;
            coder::check_forloop_overflow_error(h_st);
          }
          b_k = 2;
          exitg2 = false;
          while ((!exitg2) && (b_k <= last)) {
            if (!muDoubleScalarIsNaN(add_fee[b_k - 1])) {
              idx = b_k;
              exitg2 = true;
            } else {
              b_k++;
            }
          }
        }
        if (idx == 0) {
          ex = add_fee[0];
          idx = 1;
        } else {
          f_st.site = &db_emlrtRSI;
          ex = add_fee[idx - 1];
          a = idx + 1;
          g_st.site = &hb_emlrtRSI;
          if ((idx + 1 <= add_fee.size(1)) && (add_fee.size(1) > 2147483646)) {
            h_st.site = &gb_emlrtRSI;
            coder::check_forloop_overflow_error(h_st);
          }
          for (b_k = a; b_k <= last; b_k++) {
            d1 = add_fee[b_k - 1];
            if (ex > d1) {
              ex = d1;
              idx = b_k;
            }
          }
        }
      }
      //  指向最小的费用
      if ((idx < 1) || (idx > fac.size(1))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, fac.size(1), &sd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &td_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      route[b_i + 1] = fac[idx - 1];
      //  路线更新
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &vd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      d1 = route[b_i + 1];
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &rb_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d1) < 1) ||
          (static_cast<int32_T>(d1) > q.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, q.size(0),
                                      &ud_emlrtBCI, (emlrtConstCTX)&sp);
      }
      prob *= q[static_cast<int32_T>(d1) - 1];
      //  概率更新
      fee += ex;
      //  费用更新
      if (bar_J.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, bar_J.size(1), &cd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &wd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (d1 == bar_J[0]) {
        jdg_brk = true;
        exitg1 = true;
      } else {
        st.site = &w_emlrtRSI;
        b_st.site = &ib_emlrtRSI;
        if (idx > fac.size(1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
                                        "MATLAB:subsdeldimmismatch",
                                        "MATLAB:subsdeldimmismatch", 0);
        }
        b_st.site = &jb_emlrtRSI;
        last = fac.size(1) - 1;
        c_st.site = &kb_emlrtRSI;
        for (b_k = idx; b_k <= last; b_k++) {
          fac[b_k - 1] = fac[b_k];
        }
        if (fac.size(1) - 1 < 1) {
          idx = 0;
        } else {
          idx = fac.size(1) - 1;
        }
        fac.set_size(&bd_emlrtRTEI, &b_st, fac.size(0), idx);
        //  否则去除已经添加的设施
        b_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
    }
    if (jdg_brk) {
      //  提前退出
      if (k + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, plan.size(0), &ad_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, route.size(), 2, &i_emlrtECI,
                                    (emlrtCTX)&sp);
      last = route.size(1);
      for (a = 0; a < last; a++) {
        plan[k + plan.size(0) * a] = route[a];
      }
      //  记录路径
      a = trans_cost.size(0);
      if (k + 1 > a) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, a, &hd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      trans_cost[k] = fee;
      //  记录成本
    } else {
      r.set_size(&cd_emlrtRTEI, &sp, 1, route.size(1));
      last = route.size(1);
      for (a = 0; a < last; a++) {
        r[a] = (route[a] == 0.0);
      }
      st.site = &x_emlrtRSI;
      coder::internal::nullAssignment(st, route, r);
      //  去除路径中的多余0
      if (data_price.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, data_price.size(1), &bd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (route.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(route.size(1), 1, route.size(1),
                                      &qd_emlrtBCI, (emlrtConstCTX)&sp);
      }
      d1 = route[route.size(1) - 1];
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &ob_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d1) < 1) ||
          (static_cast<int32_T>(d1) > data_price.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                      data_price.size(0), &pd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      a = trans_cost.size(0);
      if (k + 1 > a) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, a, &rd_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      trans_cost[k] =
          fee + data_dmd[k] * prob * data_price[static_cast<int32_T>(d1) - 1];
      //  直接计算成本
      d1 = max_try - static_cast<real_T>(route.size(1));
      if (!(d1 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d1, &qb_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &pb_emlrtDCI, (emlrtConstCTX)&sp);
      }
      fac.set_size(&dd_emlrtRTEI, &sp, 1,
                   (route.size(1) + static_cast<int32_T>(d1)) + 1);
      last = route.size(1);
      for (a = 0; a < last; a++) {
        fac[a] = route[a];
      }
      fac[route.size(1)] = 1.0;
      last = static_cast<int32_T>(d1);
      for (a = 0; a < last; a++) {
        fac[(a + route.size(1)) + 1] = 0.0;
      }
      //  记录路径
      if (k + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, plan.size(0), &yc_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, fac.size(), 2, &h_emlrtECI,
                                    (emlrtCTX)&sp);
      last = fac.size(1);
      for (a = 0; a < last; a++) {
        plan[k + plan.size(0) * a] = fac[a];
      }
      //  记录路径
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_lb_x(const emlrtStack &sp,
            const coder::array<real_T, 2U> &lr_case_data_price,
            const coder::array<real_T, 1U> &lr_case_data_dmd,
            const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
            const coder::array<real_T, 2U> &lr_case_bar_J,
            const coder::array<real_T, 2U> &lr_case_I,
            const coder::array<real_T, 2U> &lr_case_mu,
            coder::array<real_T, 1U> &trans_cost,
            coder::array<real_T, 2U> &plan)
{
  coder::array<real_T, 2U> best_r;
  coder::array<real_T, 2U> cus_mu;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T cus_data[100];
  real_T pi;
  real_T ub;
  int32_T b_cus_size[2];
  int32_T cus_size[2];
  int32_T b_lb_x_numThreads;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T j;
  int32_T loop_ub;
  boolean_T emlrtHadParallelError{false};
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // lb_dfs_x 深度搜索获取每个客户的尝试路径
  //  输入 lr_case 字段
  //  I         客户索引 向量
  //  bar_J     设施索引 向量
  //  data      数据 结构体 字段 price价格矩阵 dmd客户需求 fix固定成本
  //  q         每个设施失效概率 向量
  //  mu        拉格朗日乘子 矩阵
  //  max_try   客户最大尝试次数 整数
  //  dfs_falg  是否使用DFS 逻辑值
  //  输出
  //  trans_cost    期望运输成本   浮点数矩阵
  //  plan          计划          整数矩阵
  //  初始化
  //  提取
  //  记录每个客户的期望运输成本
  //  贪心路径构建
  trans_cost.set_size(&kb_emlrtRTEI, &sp, lr_case_I.size(1));
  loop_ub = lr_case_I.size(1);
  for (i = 0; i < loop_ub; i++) {
    trans_cost[i] = 0.0;
  }
  st.site = &t_emlrtRSI;
  greedy_build(st, lr_case_I, lr_case_max_try, lr_case_bar_J,
               lr_case_data_price, lr_case_data_dmd, lr_case_mu, lr_case_q,
               trans_cost, plan);
  //  DFS改进当前解
  //  快速模式不启动dfs
  if (lr_case_data_price.size(0) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, lr_case_data_price.size(0), &s_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (lr_case_data_price.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, lr_case_data_price.size(1), &t_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  pi = lr_case_data_price[1];
  //  惩罚成本
  loop_ub = lr_case_I.size(1) - 1;
  emlrtEnterParallelRegion((emlrtCTX)&sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  b_lb_x_numThreads =
      emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(b_lb_x_numThreads) private(                   \
    cus_mu, best_r, ub, cus_data, cus_size, c_st, b_loop_ub, i1, b_cus_size)   \
    firstprivate(b_st, emlrtHadParallelError)
  {
    try {

      b_st.prev = &sp;
      b_st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
      b_st.site = nullptr;
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (j = 0; j <= loop_ub; j++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {

        cus_size[0] = 1;
        cus_size[1] = 1;
        if (j + 1 > lr_case_I.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case_I.size(1),
                                        &bb_emlrtBCI, &b_st);
        }
        cus_data[0] = lr_case_I[j];
        if (j + 1 > plan.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &u_emlrtBCI,
                                        &b_st);
        }
        b_loop_ub = plan.size(1);
        best_r.set_size(&lb_emlrtRTEI, &b_st, 1, plan.size(1));
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          best_r[i1] = plan[j + plan.size(0) * i1];
        }
        //  当前最优路径
        if (j + 1 > trans_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, trans_cost.size(0),
                                        &v_emlrtBCI, &b_st);
        }
        //  当前上界
        if (j + 1 > lr_case_data_dmd.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case_data_dmd.size(0),
                                        &w_emlrtBCI, &b_st);
        }
        //  客户的需求
        if (j + 1 > lr_case_mu.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case_mu.size(0),
                                        &x_emlrtBCI, &b_st);
        }
        b_loop_ub = lr_case_mu.size(1);
        cus_mu.set_size(&mb_emlrtRTEI, &b_st, 1, lr_case_mu.size(1));
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          cus_mu[i1] = lr_case_mu[j + lr_case_mu.size(0) * i1];
        }
        //  拉格朗日乘子
        ub = trans_cost[j];
        b_cus_size[0] = cus_size[0];
        b_cus_size[1] = cus_size[1];
        c_st.site = &u_emlrtRSI;
        lb_dfs(c_st, cus_data, b_cus_size, best_r, ub, lr_case_bar_J,
               lr_case_data_dmd[j], lr_case_data_price, lr_case_max_try - 1.0,
               pi, lr_case_q, cus_mu);
        //  深度优先搜索
        if (j + 1 > trans_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, trans_cost.size(0),
                                        &cb_emlrtBCI, &b_st);
        }
        trans_cost[j] = ub;
        //  更新上界
        if (best_r.size(1) < lr_case_max_try + 1.0) {
          if (j + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &y_emlrtBCI,
                                          &b_st);
          }
          ub = (lr_case_max_try + 1.0) - static_cast<real_T>(best_r.size(1));
          if (!(ub >= 0.0)) {
            emlrtNonNegativeCheckR2012b(ub, &l_emlrtDCI, &b_st);
          }
          if (ub != static_cast<int32_T>(muDoubleScalarFloor(ub))) {
            emlrtIntegerCheckR2012b(ub, &k_emlrtDCI, &b_st);
          }
          cus_mu.set_size(&nb_emlrtRTEI, &b_st, 1,
                          best_r.size(1) + static_cast<int32_T>(ub));
          b_loop_ub = best_r.size(1);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            cus_mu[i1] = best_r[i1];
          }
          b_loop_ub = static_cast<int32_T>(ub);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            cus_mu[i1 + best_r.size(1)] = 0.0;
          }
          b_cus_size[0] = 1;
          b_cus_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_cus_size[0], 2, cus_mu.size(), 2,
                                        &b_emlrtECI, &b_st);
          b_loop_ub = cus_mu.size(1);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            plan[j + plan.size(0) * i1] = cus_mu[i1];
          }
        } else {
          if (j + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &ab_emlrtBCI,
                                          &b_st);
          }
          b_cus_size[0] = 1;
          b_cus_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_cus_size[0], 2, best_r.size(), 2,
                                        &c_emlrtECI, &b_st);
          b_loop_ub = best_r.size(1);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            plan[j + plan.size(0) * i1] = best_r[i1];
          }
          //  记录方案
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&b_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&b_st, 2);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)&sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void lb_x(const emlrtStack &sp,
          const coder::array<real_T, 2U> &lr_case_data_price,
          const coder::array<real_T, 1U> &lr_case_data_dmd,
          const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
          const coder::array<real_T, 2U> &lr_case_bar_J,
          const coder::array<real_T, 2U> &lr_case_I,
          const coder::array<real_T, 2U> &lr_case_mu, boolean_T flag_fast,
          coder::array<real_T, 1U> &trans_cost, coder::array<real_T, 2U> &plan)
{
  coder::array<real_T, 2U> best_r;
  coder::array<real_T, 2U> cus_mu;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T cus_data[100];
  real_T pi;
  real_T ub;
  int32_T b_cus_size[2];
  int32_T cus_size[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T j;
  int32_T lb_x_numThreads;
  int32_T loop_ub;
  boolean_T emlrtHadParallelError{false};
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // lb_dfs_x 深度搜索获取每个客户的尝试路径
  //  输入 lr_case 字段
  //  I         客户索引 向量
  //  bar_J     设施索引 向量
  //  data      数据 结构体 字段 price价格矩阵 dmd客户需求 fix固定成本
  //  q         每个设施失效概率 向量
  //  mu        拉格朗日乘子 矩阵
  //  max_try   客户最大尝试次数 整数
  //  dfs_falg  是否使用DFS 逻辑值
  //  输出
  //  trans_cost    期望运输成本   浮点数矩阵
  //  plan          计划          整数矩阵
  //  初始化
  //  提取
  //  记录每个客户的期望运输成本
  //  贪心路径构建
  trans_cost.set_size(&kb_emlrtRTEI, &sp, lr_case_I.size(1));
  loop_ub = lr_case_I.size(1);
  for (i = 0; i < loop_ub; i++) {
    trans_cost[i] = 0.0;
  }
  st.site = &t_emlrtRSI;
  greedy_build(st, lr_case_I, lr_case_max_try, lr_case_bar_J,
               lr_case_data_price, lr_case_data_dmd, lr_case_mu, lr_case_q,
               trans_cost, plan);
  //  DFS改进当前解
  if (!flag_fast) {
    //  快速模式不启动dfs
    if (lr_case_data_price.size(0) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, lr_case_data_price.size(0),
                                    &s_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (lr_case_data_price.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, lr_case_data_price.size(1),
                                    &t_emlrtBCI, (emlrtConstCTX)&sp);
    }
    pi = lr_case_data_price[1];
    //  惩罚成本
    loop_ub = lr_case_I.size(1) - 1;
    emlrtEnterParallelRegion((emlrtCTX)&sp,
                             static_cast<boolean_T>(omp_in_parallel()));
    lb_x_numThreads =
        emlrtAllocRegionTLSs(sp.tls, static_cast<boolean_T>(omp_in_parallel()),
                             omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(lb_x_numThreads) private(                     \
    cus_mu, best_r, ub, cus_data, cus_size, c_st, b_loop_ub, i1, b_cus_size)   \
    firstprivate(b_st, emlrtHadParallelError)
    {
      try {

        b_st.prev = &sp;
        b_st.tls = emlrtAllocTLS((emlrtCTX)&sp, omp_get_thread_num());
        b_st.site = nullptr;
        c_st.prev = &b_st;
        c_st.tls = b_st.tls;
      } catch (...) {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (j = 0; j <= loop_ub; j++) {
        if (emlrtHadParallelError) {
          continue;
        }
        try {

          cus_size[0] = 1;
          cus_size[1] = 1;
          if (j + 1 > lr_case_I.size(1)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case_I.size(1),
                                          &bb_emlrtBCI, &b_st);
          }
          cus_data[0] = lr_case_I[j];
          if (j + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &u_emlrtBCI,
                                          &b_st);
          }
          b_loop_ub = plan.size(1);
          best_r.set_size(&lb_emlrtRTEI, &b_st, 1, plan.size(1));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            best_r[i1] = plan[j + plan.size(0) * i1];
          }
          //  当前最优路径
          if (j + 1 > trans_cost.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, trans_cost.size(0),
                                          &v_emlrtBCI, &b_st);
          }
          //  当前上界
          if (j + 1 > lr_case_data_dmd.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case_data_dmd.size(0),
                                          &w_emlrtBCI, &b_st);
          }
          //  客户的需求
          if (j + 1 > lr_case_mu.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case_mu.size(0),
                                          &x_emlrtBCI, &b_st);
          }
          b_loop_ub = lr_case_mu.size(1);
          cus_mu.set_size(&mb_emlrtRTEI, &b_st, 1, lr_case_mu.size(1));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            cus_mu[i1] = lr_case_mu[j + lr_case_mu.size(0) * i1];
          }
          //  拉格朗日乘子
          ub = trans_cost[j];
          b_cus_size[0] = cus_size[0];
          b_cus_size[1] = cus_size[1];
          c_st.site = &u_emlrtRSI;
          lb_dfs(c_st, cus_data, b_cus_size, best_r, ub, lr_case_bar_J,
                 lr_case_data_dmd[j], lr_case_data_price, lr_case_max_try - 1.0,
                 pi, lr_case_q, cus_mu);
          //  深度优先搜索
          if (j + 1 > trans_cost.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, trans_cost.size(0),
                                          &cb_emlrtBCI, &b_st);
          }
          trans_cost[j] = ub;
          //  更新上界
          if (best_r.size(1) < lr_case_max_try + 1.0) {
            if (j + 1 > plan.size(0)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &y_emlrtBCI,
                                            &b_st);
            }
            ub = (lr_case_max_try + 1.0) - static_cast<real_T>(best_r.size(1));
            if (!(ub >= 0.0)) {
              emlrtNonNegativeCheckR2012b(ub, &l_emlrtDCI, &b_st);
            }
            if (ub != static_cast<int32_T>(muDoubleScalarFloor(ub))) {
              emlrtIntegerCheckR2012b(ub, &k_emlrtDCI, &b_st);
            }
            cus_mu.set_size(&nb_emlrtRTEI, &b_st, 1,
                            best_r.size(1) + static_cast<int32_T>(ub));
            b_loop_ub = best_r.size(1);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              cus_mu[i1] = best_r[i1];
            }
            b_loop_ub = static_cast<int32_T>(ub);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              cus_mu[i1 + best_r.size(1)] = 0.0;
            }
            b_cus_size[0] = 1;
            b_cus_size[1] = plan.size(1);
            emlrtSubAssignSizeCheckR2012b(&b_cus_size[0], 2, cus_mu.size(), 2,
                                          &b_emlrtECI, &b_st);
            b_loop_ub = cus_mu.size(1);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              plan[j + plan.size(0) * i1] = cus_mu[i1];
            }
          } else {
            if (j + 1 > plan.size(0)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0),
                                            &ab_emlrtBCI, &b_st);
            }
            b_cus_size[0] = 1;
            b_cus_size[1] = plan.size(1);
            emlrtSubAssignSizeCheckR2012b(&b_cus_size[0], 2, best_r.size(), 2,
                                          &c_emlrtECI, &b_st);
            b_loop_ub = best_r.size(1);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              plan[j + plan.size(0) * i1] = best_r[i1];
            }
            //  记录方案
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        } catch (...) {
          emlrtHadParallelError = true;
        }
      }
      if (!emlrtHadParallelError) {
        emlrtHeapReferenceStackLeaveScope(&b_st, 2);
      }
    }
    emlrtExitParallelRegion((emlrtCTX)&sp,
                            static_cast<boolean_T>(omp_in_parallel()));
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (lb_x.cpp)
