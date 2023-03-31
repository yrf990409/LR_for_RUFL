//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lr_ils.cpp
//
// Code generation for function 'lr_ils'
//

// Include files
#include "lr_ils.h"
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "lb_x.h"
#include "lb_y.h"
#include "lr_ils_data.h"
#include "lr_ils_mexutil.h"
#include "lr_ils_types.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "tic.h"
#include "toc.h"
#include "ub_ils.h"
#include "ub_xy.h"
#include "update_mu.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"
#include <cstdio>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    7,                                                              // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    38,                                                             // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    39,                                                             // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    40,                                                             // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    43,                                                             // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    49,                                                             // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    51,                                                             // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    93,                                                             // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    102,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    105,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    114,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    115,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    116,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    143,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo me_emlrtRSI{
    20,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    27,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    29,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    43,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pathName
};

static emlrtRSInfo we_emlrtRSI{
    71,      // lineNo
    "power", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

static emlrtRSInfo xe_emlrtRSI{
    13,    // lineNo
    "any", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/any.m" // pathName
};

static emlrtRSInfo ye_emlrtRSI{
    143,        // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

static emlrtRSInfo cf_emlrtRSI{
    38,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    138,                                                            // lineNo
    5,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo b_emlrtMCI{
    122,                                                            // lineNo
    9,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo c_emlrtMCI{
    127,                                                            // lineNo
    13,                                                             // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo d_emlrtMCI{
    131,                                                            // lineNo
    13,                                                             // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo e_emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    36,                                                             // lineNo
    12,                                                             // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    19,          // lineNo
    23,          // colNo
    "plan_lb",   // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    21,          // lineNo
    10,          // colNo
    "temp",      // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtECInfo emlrtECI{
    2,                                                                 // nDims
    23,                                                                // lineNo
    11,                                                                // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtDCInfo emlrtDCI{
    43,          // lineNo
    24,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    1 // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    43,          // lineNo
    24,          // colNo
    "plan_lb",   // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    21,                                                              // lineNo
    37,                                                              // colNo
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    1 // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    21,                                                              // lineNo
    37,                                                              // colNo
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    4 // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    9,                                                               // lineNo
    1,                                                               // colNo
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    1 // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    9,                                                               // lineNo
    1,                                                               // colNo
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    4 // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    10,                                                              // lineNo
    1,                                                               // colNo
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    1 // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    11,                                                              // lineNo
    1,                                                               // colNo
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    1 // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    149,                                                             // lineNo
    1,                                                               // colNo
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    1 // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    58,                                                              // lineNo
    25,                                                              // colNo
    "rec_ils",                                                       // aName
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    0 // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    21,          // lineNo
    13,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    1 // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    21,          // lineNo
    13,          // colNo
    "temp",      // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    34,          // lineNo
    15,          // colNo
    "bar_J",     // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    35,          // lineNo
    17,          // colNo
    "location",  // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    35,          // lineNo
    17,          // colNo
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    1 // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    42,          // lineNo
    15,          // colNo
    "I",         // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    42,          // lineNo
    26,          // colNo
    "bar_J",     // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    96,                                                              // lineNo
    12,                                                              // colNo
    "rec_lb",                                                        // aName
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    0 // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                                                              // iFirst
    -1,                                                              // iLast
    97,                                                              // lineNo
    12,                                                              // colNo
    "rec_ub",                                                        // aName
    "lr_ils",                                                        // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m", // pName
    0 // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    23,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    26,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    12,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    48,          // lineNo
    15,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    49,          // lineNo
    15,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    49,          // lineNo
    17,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    50,          // lineNo
    18,          // colNo
    "mu",        // aName
    "update_mu", // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m", // pName
    0 // checkKind
};

static emlrtRTEInfo p_emlrtRTEI{
    9,                                                              // lineNo
    1,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    10,                                                             // lineNo
    1,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    11,                                                             // lineNo
    1,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    20,                                                             // lineNo
    1,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    149,                                                            // lineNo
    1,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    33,                                                             // lineNo
    1,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    39,                                                             // lineNo
    16,                                                             // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    51,                                                             // lineNo
    25,                                                             // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    49,                                                             // lineNo
    25,                                                             // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    56,                                                             // lineNo
    17,                                                             // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    70,                                                             // lineNo
    9,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    7,                                                                 // lineNo
    1,                                                                 // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    16,                                                                // lineNo
    1,                                                                 // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    20,                                                                // lineNo
    5,                                                                 // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    20,                                                                // lineNo
    13,                                                                // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    21,                                                                // lineNo
    13,                                                                // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    23,                                                                // lineNo
    1,                                                                 // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    43,                                                                // lineNo
    16,                                                                // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    93,                                                             // lineNo
    6,                                                              // colNo
    "lr_ils",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pName
};

static emlrtRSInfo df_emlrtRSI{
    68,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

static emlrtRSInfo ef_emlrtRSI{
    131,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo ff_emlrtRSI{
    127,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo gf_emlrtRSI{
    122,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo hf_emlrtRSI{
    138,                                                            // lineNo
    "lr_ils",                                                       // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo if_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

static emlrtRSInfo jf_emlrtRSI{
    23,          // lineNo
    "update_mu", // fcnName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pathName
};

// Function Declarations
static void disp(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location);

static real_T emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const char_T u[80]);

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            const mxArray *m6, const mxArray *m7,
                            const mxArray *m8, const mxArray *m9,
                            const mxArray *m10, emlrtMCInfo &location);

// Function Definitions
static void disp(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 1, &pArray, "disp",
                        true, &location);
}

static real_T emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const char_T u[80])
{
  static const int32_T iv[2]{1, 80};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 80, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            const mxArray *m6, const mxArray *m7,
                            const mxArray *m8, const mxArray *m9,
                            const mxArray *m10, emlrtMCInfo &location)
{
  const mxArray *pArrays[10];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  pArrays[6] = m7;
  pArrays[7] = m8;
  pArrays[8] = m9;
  pArrays[9] = m10;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 10, &pArrays[0],
                               "feval", true, &location);
}

emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void lr_ils(const emlrtStack *sp, struct0_T *lr_para, struct1_T *lr_case,
            struct3_T *lr_result)
{
  static const int32_T iv[2]{1, 15};
  static const int32_T iv1[2]{1, 10};
  static const int32_T iv2[2]{1, 11};
  static const int32_T iv3[2]{1, 9};
  static const int32_T iv4[2]{1, 7};
  static const char_T b_cv[80]{
      'i', 't', 'e', 'r', ':', '%', '.', '0', 'f',  ',', ' ', 'b', 'e', 's',
      't', '-', 'u', 'b', ':', '%', '.', '2', 'f',  ',', ' ', 'b', 'e', 's',
      't', '-', 'l', 'b', ':', '%', '.', '2', 'f',  ',', ' ', 'g', 'a', 'p',
      ':', '%', '.', '4', 'f', '%', '%', ',', ' ',  't', 'i', 'm', 'e', ':',
      '%', '.', '2', 'f', ',', ' ', 'u', 'b', ':',  '%', '.', '2', 'f', ',',
      ' ', 'l', 'b', ':', '%', '.', '2', 'f', '\\', 'n'};
  static const char_T u[15]{'s', 't', 'o', 'p', ',', ' ', 'i', 't',
                            'e', 'r', 'a', 't', 'i', 'o', 'n'};
  static const char_T c_u[11]{'s', 't', 'o', 'p', ',', ' ',
                              'a', 'l', 'p', 'h', 'a'};
  static const char_T b_u[10]{'s', 't', 'o', 'p', ',', ' ', 't', 'i', 'm', 'e'};
  static const char_T d_u[9]{'s', 't', 'o', 'p', ',', ' ', 'g', 'a', 'p'};
  static const char_T e_u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  coder::array<real_T, 2U> b_temp;
  coder::array<real_T, 2U> fac_use;
  coder::array<real_T, 2U> lb_sqc;
  coder::array<real_T, 2U> sqc;
  coder::array<real_T, 2U> temp;
  coder::array<real_T, 1U> lb_val_x;
  coder::array<int32_T, 1U> r;
  coder::array<boolean_T, 2U> cur_loc;
  coder::array<boolean_T, 2U> lb_loc;
  coder::array<boolean_T, 2U> nb_loc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *y;
  real_T bst_lb;
  real_T bst_ub;
  real_T cnt_step;
  real_T cnt_ub;
  real_T cur_ub;
  real_T d;
  real_T gap;
  int32_T b_loop_ub;
  int32_T cnt_iter;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T iter;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T y_j;
  boolean_T flag_fast;
  boolean_T flag_ils_continue;
  boolean_T flag_modify;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &b_st;
  f_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  LR_ILS 拉格朗日松弛-局部迭代搜索算法
  //  传入 案例参数lr_case 以及算法参数lr_para
  //  传出 lr_result结果
  //  初始化
  st.site = &emlrtRSI;
  coder::tic(st);
  //  记录 recorder
  if (!(lr_para->eta_lr >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_para->eta_lr, &e_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(lr_para->eta_lr));
  if (lr_para->eta_lr != i) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  lr_result->rec_lb.set_size(&p_emlrtRTEI, sp,
                             static_cast<int32_T>(lr_para->eta_lr));
  if (lr_para->eta_lr != i) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  y_j = static_cast<int32_T>(lr_para->eta_lr);
  for (i1 = 0; i1 < y_j; i1++) {
    lr_result->rec_lb[i1] = 0.0;
  }
  //  下界记录 record
  if (static_cast<int32_T>(lr_para->eta_lr) != i) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  lr_result->rec_ub.set_size(&q_emlrtRTEI, sp,
                             static_cast<int32_T>(lr_para->eta_lr));
  if (static_cast<int32_T>(lr_para->eta_lr) != i) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < y_j; i1++) {
    lr_result->rec_ub[i1] = 0.0;
  }
  //  上界记录
  if (static_cast<int32_T>(lr_para->eta_lr) != i) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  lr_result->rec_ils.set_size(&r_emlrtRTEI, sp,
                              static_cast<int32_T>(lr_para->eta_lr));
  if (static_cast<int32_T>(lr_para->eta_lr) != i) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < y_j; i++) {
    lr_result->rec_ils[i] = false;
  }
  //  ILS发挥作用记录
  //  计数器 count
  cnt_step = 0.0;
  //  下界连续不上升计数
  //  上界连续不下降计数
  cnt_ub = 0.0;
  //  最佳上界保持的迭代次数
  cnt_iter = static_cast<int32_T>(lr_para->eta_lr);
  //  算法真正的迭代次数
  //  最佳解 best_solution
  lr_result->bst_loc.set_size(&s_emlrtRTEI, sp, 1, lr_case->bar_J.size(1));
  loop_ub = lr_case->bar_J.size(1);
  for (i = 0; i < loop_ub; i++) {
    lr_result->bst_loc[i] = false;
  }
  //  最佳选址方案 location
  lr_result->bst_sqc.set_size(&t_emlrtRTEI, sp, lr_case->b_I.size(1),
                              lr_result->bst_sqc.size(1));
  if (!(lr_case->max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case->max_try + 1.0, &c_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(lr_case->max_try + 1.0));
  if (lr_case->max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case->max_try + 1.0, &b_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  lr_result->bst_sqc.set_size(&t_emlrtRTEI, sp, lr_result->bst_sqc.size(0),
                              static_cast<int32_T>(lr_case->max_try + 1.0));
  if (lr_case->max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case->max_try + 1.0, &h_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = lr_case->b_I.size(1) * static_cast<int32_T>(lr_case->max_try + 1.0);
  for (i = 0; i < loop_ub; i++) {
    lr_result->bst_sqc[i] = 0.0;
  }
  //  最佳客户序列 sequence
  bst_ub = rtInf;
  //  最佳上界
  bst_lb = rtMinusInf;
  //  最佳下界
  gap = 1.0;
  //  条件判断 flag
  flag_fast = true;
  //  算法快速模式
  flag_modify = false;
  //  快速&慢速切换时强制更正上下界
  flag_ils_continue = false;
  //  ILS是否继承上一次的结果
  //  邻域
  cur_ub = rtInf;
  cur_loc.set_size(&u_emlrtRTEI, sp, 1, lr_case->bar_J.size(1));
  loop_ub = lr_case->bar_J.size(1);
  for (i = 0; i < loop_ub; i++) {
    cur_loc[i] = false;
  }
  //  选址方案
  //  LR-ILS优化
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, lr_para->eta_lr, mxDOUBLE_CLASS,
                                static_cast<int32_T>(lr_para->eta_lr),
                                &emlrtRTEI, (emlrtConstCTX)sp);
  iter = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    i = static_cast<int32_T>(lr_para->eta_lr);
    if (iter <= i - 1) {
      real_T k_step;
      real_T lb;
      real_T ub;
      int32_T b_i;
      int32_T i4;
      int32_T n;
      //  获取下界
      st.site = &b_emlrtRSI;
      lb_x(st, lr_case->data.price, lr_case->data.dmd, lr_case->q,
           lr_case->max_try, lr_case->bar_J, lr_case->b_I, lr_case->mu,
           flag_fast, lb_val_x, lb_sqc);
      //  获取Sub_2的值
      st.site = &c_emlrtRSI;
      lb_y(st, lr_case->data.fix, lr_case->bar_J, lr_case->mu, fac_use, lb_loc);
      //  获取Sub_1的值
      st.site = &d_emlrtRSI;
      lb = coder::sum(st, lb_val_x) + coder::sum(st, fac_use);
      //  获取上界
      nb_loc.set_size(&v_emlrtRTEI, sp, 1, lb_loc.size(1));
      loop_ub = lb_loc.size(0) * lb_loc.size(1) - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        nb_loc[i1] = lb_loc[i1];
      }
      st.site = &e_emlrtRSI;
      ub = ub_xy(st, lr_case->data.price, lr_case->data.dmd, lr_case->data.fix,
                 lr_case->q, lr_case->max_try, lr_case->bar_J, lr_case->b_I,
                 nb_loc, flag_fast, sqc, lb_val_x);
      //  ILS搜索上界
      if (lr_para->ils && (cnt_ub >= lr_para->kappa_ub) &&
          (gap > 2.0 * lr_para->xi)) {
        if (flag_ils_continue) {
          nb_loc.set_size(&x_emlrtRTEI, sp, 1, cur_loc.size(1));
          loop_ub = cur_loc.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            nb_loc[i1] = cur_loc[i1];
          }
          st.site = &f_emlrtRSI;
          gap = ub_ils(st, lr_case, cur_ub, nb_loc, lr_para->theta_sa,
                       lr_para->eta_ils, cur_loc, cur_ub);
        } else {
          nb_loc.set_size(&w_emlrtRTEI, sp, 1, lr_result->bst_loc.size(1));
          loop_ub = lr_result->bst_loc.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            nb_loc[i1] = lr_result->bst_loc[i1];
          }
          st.site = &g_emlrtRSI;
          gap = ub_ils(st, lr_case, bst_ub, nb_loc, lr_para->theta_sa,
                       lr_para->eta_ils, cur_loc, cur_ub);
        }
        if (gap < bst_ub) {
          //  得到更好的上界
          lr_result->bst_loc.set_size(&y_emlrtRTEI, sp, 1, nb_loc.size(1));
          loop_ub = nb_loc.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            lr_result->bst_loc[i1] = nb_loc[i1];
          }
          //  选址方案
          bst_ub = gap;
          //  上界
          if (iter + 1 > lr_result->rec_ils.size(0)) {
            emlrtDynamicBoundsCheckR2012b(iter + 1, 1,
                                          lr_result->rec_ils.size(0),
                                          &d_emlrtBCI, (emlrtConstCTX)sp);
          }
          lr_result->rec_ils[iter] = true;
        } else {
          flag_ils_continue = true;
          //  ILS继承上一次的结果
        }
        cnt_ub = 0.0;
      }
      //  记录最佳上界
      if (ub <= bst_ub) {
        //  得到了更好的上界
        lr_result->bst_loc.set_size(&ab_emlrtRTEI, sp, 1, lb_loc.size(1));
        loop_ub = lb_loc.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          lr_result->bst_loc[i1] = lb_loc[i1];
        }
        //  选址方案
        lr_result->bst_sqc.set_size(&t_emlrtRTEI, sp, sqc.size(0), sqc.size(1));
        loop_ub = sqc.size(0) * sqc.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          lr_result->bst_sqc[i1] = sqc[i1];
        }
        //  客户序列
        bst_ub = ub;
        //  上界
        //  计数器更新
        //  上界连续不下降
        cnt_ub = 0.0;
        //  最佳上界保持次数
        //  局部迭代搜索更新
      } else {
        //  计数器更新
        //  上界连续不下降
        cnt_ub++;
        //  最佳上界保持次数
      }
      //  记录最佳下界
      if (lb >= bst_lb) {
        bst_lb = lb;
        cnt_step = 0.0;
      } else {
        cnt_step++;
        //  否则下界未更新计数+1
      }
      //  更新乘子
      st.site = &h_emlrtRSI;
      // 乘子更新
      //  提取
      sqc.set_size(&bb_emlrtRTEI, &st, lr_case->mu.size(0),
                   lr_case->mu.size(1));
      loop_ub = lr_case->mu.size(0) * lr_case->mu.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        sqc[i1] = lr_case->mu[i1];
      }
      d = lr_para->alpha;
      //  更新系数
      if (cnt_step > lr_para->kappa_lb) {
        //  长时间未更新下界则步长因子打折
        d = lr_para->alpha / lr_para->theta_lr;
        //  步长系数打折
        cnt_step = 0.0;
        //  打折后计数器归零
      }
      temp.set_size(&cb_emlrtRTEI, &st, lr_case->b_I.size(1),
                    lr_case->bar_J.size(1));
      y_j = lr_case->b_I.size(1) * lr_case->bar_J.size(1);
      for (i1 = 0; i1 < y_j; i1++) {
        temp[i1] = 0.0;
      }
      // 记录客户i是否使用了设施j
      //  计算分母
      i1 = lb_sqc.size(0);
      if (lb_sqc.size(0) - 1 >= 0) {
        if (lb_sqc.size(1) < 2) {
          i2 = 0;
          i3 = 0;
        } else {
          i2 = 1;
          i3 = lb_sqc.size(1);
        }
        loop_ub_tmp = i3 - i2;
      }
      for (b_i = 0; b_i < i1; b_i++) {
        if (b_i + 1 > lb_sqc.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, lb_sqc.size(0), &emlrtBCI,
                                        &st);
        }
        //  对于i来说使用了的设施
        i4 = i3 - i2;
        fac_use.set_size(&db_emlrtRTEI, &st, 1, i4);
        for (n = 0; n < loop_ub_tmp; n++) {
          fac_use[n] = lb_sqc[b_i + lb_sqc.size(0) * (i2 + n)];
        }
        nb_loc.set_size(&eb_emlrtRTEI, &st, 1, i4);
        for (i4 = 0; i4 < loop_ub_tmp; i4++) {
          nb_loc[i4] = (lb_sqc[b_i + lb_sqc.size(0) * (i2 + i4)] == 0.0);
        }
        b_st.site = &me_emlrtRSI;
        coder::internal::nullAssignment(b_st, fac_use, nb_loc);
        r.set_size(&fb_emlrtRTEI, &st, fac_use.size(1));
        loop_ub = fac_use.size(1);
        for (i4 = 0; i4 < loop_ub; i4++) {
          if (fac_use[i4] !=
              static_cast<int32_T>(muDoubleScalarFloor(fac_use[i4]))) {
            emlrtIntegerCheckR2012b(fac_use[i4], &i_emlrtDCI, &st);
          }
          n = static_cast<int32_T>(fac_use[i4]);
          if ((n < 1) || (n > temp.size(1))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, temp.size(1), &e_emlrtBCI, &st);
          }
          r[i4] = n;
        }
        if (b_i + 1 > temp.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, temp.size(0), &b_emlrtBCI,
                                        &st);
        }
        loop_ub = r.size(0);
        for (i4 = 0; i4 < loop_ub; i4++) {
          temp[b_i + temp.size(0) * (r[i4] - 1)] = 1.0;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if ((temp.size(1) != lb_loc.size(1)) &&
          ((temp.size(1) != 1) && (lb_loc.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(temp.size(1), lb_loc.size(1), &emlrtECI,
                                    &st);
      }
      if (temp.size(1) == lb_loc.size(1)) {
        b_temp.set_size(&gb_emlrtRTEI, &st, temp.size(0), temp.size(1));
        loop_ub = temp.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_i = temp.size(0);
          for (i4 = 0; i4 < b_i; i4++) {
            b_temp[i4 + b_temp.size(0) * i1] =
                temp[i4 + temp.size(0) * i1] - static_cast<real_T>(lb_loc[i1]);
          }
        }
        temp.set_size(&hb_emlrtRTEI, &st, b_temp.size(0), b_temp.size(1));
        for (i1 = 0; i1 < y_j; i1++) {
          temp[i1] = b_temp[i1];
        }
      } else {
        b_st.site = &jf_emlrtRSI;
        binary_expand_op(b_st, temp, lb_loc);
      }
      //  违背约束
      //  计算迭代步长
      if (lr_para->square) {
        b_st.site = &ne_emlrtRSI;
        c_st.site = &ne_emlrtRSI;
        coder::b_abs(c_st, temp, b_temp);
        c_st.site = &ne_emlrtRSI;
        gap = coder::b_sum(c_st, b_temp);
        c_st.site = &we_emlrtRSI;
        k_step = lr_para->alpha * (bst_ub - lb) / (gap * gap);
      } else {
        b_st.site = &oe_emlrtRSI;
        coder::b_abs(b_st, temp, b_temp);
        b_st.site = &oe_emlrtRSI;
        k_step = lr_para->alpha * (bst_ub - lb) / coder::b_sum(b_st, b_temp);
      }
      //  更新乘子
      i1 = lr_case->bar_J.size(1);
      if (lr_case->bar_J.size(1) - 2 >= 0) {
        i5 = lr_case->b_I.size(1);
        if (lr_case->b_I.size(1) - 1 >= 0) {
          if (lb_sqc.size(1) < 2) {
            i6 = 0;
            i7 = 0;
          } else {
            i6 = 1;
            i7 = lb_sqc.size(1);
          }
          b_loop_ub = i7 - i6;
        }
      }
      for (loop_ub = 0; loop_ub <= i1 - 2; loop_ub++) {
        real_T j;
        if (loop_ub + 2 > lr_case->bar_J.size(1)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 2, 1, lr_case->bar_J.size(1),
                                        &f_emlrtBCI, &st);
        }
        j = lr_case->bar_J[loop_ub + 1];
        //  j 是设施
        gap = lr_case->bar_J[loop_ub + 1];
        if (gap != static_cast<int32_T>(muDoubleScalarFloor(gap))) {
          emlrtIntegerCheckR2012b(gap, &j_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(gap) < 1) ||
            (static_cast<int32_T>(gap) > lb_loc.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gap), 1,
                                        lb_loc.size(1), &g_emlrtBCI, &st);
        }
        y_j = lb_loc[static_cast<int32_T>(gap) - 1];
        for (n = 0; n < i5; n++) {
          boolean_T exitg2;
          boolean_T h_y;
          if (n + 1 > lr_case->b_I.size(1)) {
            emlrtDynamicBoundsCheckR2012b(n + 1, 1, lr_case->b_I.size(1),
                                          &h_emlrtBCI, &st);
          }
          if (lr_case->bar_J.size(1) < 1) {
            emlrtDynamicBoundsCheckR2012b(lr_case->bar_J.size(1), 1,
                                          lr_case->bar_J.size(1), &i_emlrtBCI,
                                          &st);
          }
          gap = lr_case->b_I[n] - lr_case->bar_J[lr_case->bar_J.size(1) - 1];
          //  i 是客户
          b_st.site = &pe_emlrtRSI;
          if (gap != static_cast<int32_T>(muDoubleScalarFloor(gap))) {
            emlrtIntegerCheckR2012b(gap, &emlrtDCI, &b_st);
          }
          if ((static_cast<int32_T>(gap) < 1) ||
              (static_cast<int32_T>(gap) > lb_sqc.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gap), 1,
                                          lb_sqc.size(0), &c_emlrtBCI, &b_st);
          }
          nb_loc.set_size(&ib_emlrtRTEI, &b_st, 1, i7 - i6);
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            nb_loc[i4] = (lb_sqc[(static_cast<int32_T>(gap) +
                                  lb_sqc.size(0) * (i6 + i4)) -
                                 1] == j);
          }
          c_st.site = &xe_emlrtRSI;
          h_y = false;
          d_st.site = &ye_emlrtRSI;
          if (nb_loc.size(1) > 2147483646) {
            e_st.site = &gb_emlrtRSI;
            coder::check_forloop_overflow_error(e_st);
          }
          b_i = 1;
          exitg2 = false;
          while ((!exitg2) && (b_i <= nb_loc.size(1))) {
            if (nb_loc[b_i - 1]) {
              h_y = true;
              exitg2 = true;
            } else {
              b_i++;
            }
          }
          if ((static_cast<int32_T>(gap) < 1) ||
              (static_cast<int32_T>(gap) > sqc.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gap), 1,
                                          sqc.size(0), &l_emlrtBCI, &st);
          }
          if ((static_cast<int32_T>(j) < 1) ||
              (static_cast<int32_T>(j) > sqc.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                          sqc.size(1), &m_emlrtBCI, &st);
          }
          if ((static_cast<int32_T>(gap) < 1) ||
              (static_cast<int32_T>(gap) > sqc.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gap), 1,
                                          sqc.size(0), &n_emlrtBCI, &st);
          }
          if ((static_cast<int32_T>(j) < 1) ||
              (static_cast<int32_T>(j) > sqc.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                          sqc.size(1), &o_emlrtBCI, &st);
          }
          sqc[(static_cast<int32_T>(gap) +
               sqc.size(0) * (static_cast<int32_T>(j) - 1)) -
              1] =
              sqc[(static_cast<int32_T>(gap) +
                   sqc.size(0) * (static_cast<int32_T>(j) - 1)) -
                  1] +
              k_step * (static_cast<real_T>(h_y) - static_cast<real_T>(y_j));
          h_y = ((static_cast<int32_T>(gap) < 1) ||
                 (static_cast<int32_T>(gap) > sqc.size(0)));
          if (h_y) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gap), 1,
                                          sqc.size(0), &p_emlrtBCI, &st);
          }
          if ((static_cast<int32_T>(j) < 1) ||
              (static_cast<int32_T>(j) > sqc.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                          sqc.size(1), &q_emlrtBCI, &st);
          }
          if (sqc[(static_cast<int32_T>(gap) +
                   sqc.size(0) * (static_cast<int32_T>(j) - 1)) -
                  1] < 0.0) {
            if ((static_cast<int32_T>(j) < 1) ||
                (static_cast<int32_T>(j) > sqc.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                            sqc.size(1), &r_emlrtBCI, &st);
            }
            sqc[(static_cast<int32_T>(gap) +
                 sqc.size(0) * (static_cast<int32_T>(j) - 1)) -
                1] = 0.0;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      lr_case->mu.set_size(&jb_emlrtRTEI, sp, sqc.size(0), sqc.size(1));
      loop_ub = sqc.size(0) * sqc.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        lr_case->mu[i1] = sqc[i1];
      }
      lr_para->alpha = d;
      //  迭代记录
      if (iter + 1 > lr_result->rec_lb.size(0)) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, lr_result->rec_lb.size(0),
                                      &j_emlrtBCI, (emlrtConstCTX)sp);
      }
      lr_result->rec_lb[iter] = lb;
      //  下界记录 record
      if (iter + 1 > lr_result->rec_ub.size(0)) {
        emlrtDynamicBoundsCheckR2012b(iter + 1, 1, lr_result->rec_ub.size(0),
                                      &k_emlrtBCI, (emlrtConstCTX)sp);
      }
      lr_result->rec_ub[iter] = bst_ub;
      //  上界记录
      //  打印
      gap = (bst_ub - bst_lb) / bst_ub;
      //  计算gap
      st.site = &i_emlrtRSI;
      k_step = coder::toc(st);
      if (lr_para->print) {
        st.site = &j_emlrtRSI;
        b_st.site = &cf_emlrtRSI;
        b_y = nullptr;
        m = emlrtCreateDoubleScalar(1.0);
        emlrtAssign(&b_y, m);
        c_y = nullptr;
        m = emlrtCreateDoubleScalar(static_cast<real_T>(iter) + 1.0);
        emlrtAssign(&c_y, m);
        g_y = nullptr;
        m = emlrtCreateDoubleScalar(bst_ub);
        emlrtAssign(&g_y, m);
        i_y = nullptr;
        m = emlrtCreateDoubleScalar(bst_lb);
        emlrtAssign(&i_y, m);
        j_y = nullptr;
        m = emlrtCreateDoubleScalar(gap * 100.0);
        emlrtAssign(&j_y, m);
        k_y = nullptr;
        m = emlrtCreateDoubleScalar(k_step);
        emlrtAssign(&k_y, m);
        l_y = nullptr;
        m = emlrtCreateDoubleScalar(ub);
        emlrtAssign(&l_y, m);
        m_y = nullptr;
        m = emlrtCreateDoubleScalar(lb);
        emlrtAssign(&m_y, m);
        n_y = nullptr;
        m = emlrtCreateCharArray(2, &iv4[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &e_u[0]);
        emlrtAssign(&n_y, m);
        c_st.site = &if_emlrtRSI;
        f_st.site = &df_emlrtRSI;
        emlrt_marshallIn(c_st,
                         feval(c_st, n_y, b_y, emlrt_marshallOut(f_st, b_cv),
                               c_y, g_y, i_y, j_y, k_y, l_y, m_y, e_emlrtMCI),
                         "<output of feval>");
      }
      //  快速慢速切换
      if ((gap <= lr_para->dfs_gap) && (!flag_modify)) {
        //  gap小于一定的值 关闭快速模式
        flag_fast = false;
        //  关闭快速模式
        flag_modify = true;
        //  强制修正
        //  快速模式获得的下界不是最优解，因此下界是虚标的，在此处进行修正
        st.site = &k_emlrtRSI;
        b_lb_x(st, lr_case->data.price, lr_case->data.dmd, lr_case->q,
               lr_case->max_try, lr_case->bar_J, lr_case->b_I, lr_case->mu,
               lb_val_x, sqc);
        //  获取Sub_2的值
        st.site = &l_emlrtRSI;
        lb_y(st, lr_case->data.fix, lr_case->bar_J, lr_case->mu, fac_use,
             nb_loc);
        //  获取Sub_1的值
        st.site = &m_emlrtRSI;
        bst_lb = coder::sum(st, lb_val_x) + coder::sum(st, fac_use);
        //  强制修正下界
        gap = (bst_ub - bst_lb) / bst_ub;
        //  修正之后的gap
      }
      //  终止条件
      if (k_step > lr_para->tau_lim) {
        d_y = nullptr;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 10, m, &b_u[0]);
        emlrtAssign(&d_y, m);
        st.site = &gf_emlrtRSI;
        disp(st, d_y, b_emlrtMCI);
        //  时间限制
        cnt_iter = iter + 1;
        exitg1 = 1;
      } else if (d < lr_para->alpha_min) {
        e_y = nullptr;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 11, m, &c_u[0]);
        emlrtAssign(&e_y, m);
        st.site = &ff_emlrtRSI;
        disp(st, e_y, c_emlrtMCI);
        //  迭代值限制
        cnt_iter = iter + 1;
        exitg1 = 1;
      } else if (gap < lr_para->xi) {
        f_y = nullptr;
        m = emlrtCreateCharArray(2, &iv3[0]);
        emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 9, m, &d_u[0]);
        emlrtAssign(&f_y, m);
        st.site = &ef_emlrtRSI;
        disp(st, f_y, d_emlrtMCI);
        //  gap值达标
        cnt_iter = iter + 1;
        exitg1 = 1;
      } else {
        iter++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  if (cnt_iter == i) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &hf_emlrtRSI;
    disp(st, y, emlrtMCI);
    //  迭代次数限制
  }
  //  封装 & 返回
  //  重新计算
  st.site = &n_emlrtRSI;
  lr_result->time = coder::toc(st);
  lr_result->bst_ub = bst_ub;
  lr_result->bst_lb = bst_lb;
  lr_result->iter = cnt_iter;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (lr_ils.cpp)
