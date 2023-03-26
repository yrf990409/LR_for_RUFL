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
#include "lr_ils_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo v_emlrtRSI{
    89,             // lineNo
    "greedy_build", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    97,             // lineNo
    "greedy_build", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    104,            // lineNo
    "greedy_build", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    113,         // lineNo
    "findFirst", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    152,                      // lineNo
    "onearg_null_assignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

static emlrtECInfo g_emlrtECI{
    -1,             // nDims
    108,            // lineNo
    9,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo kc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    108,            // lineNo
    14,             // colNo
    "plan",         // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtECInfo h_emlrtECI{
    -1,             // nDims
    101,            // lineNo
    9,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo lc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    101,            // lineNo
    14,             // colNo
    "plan",         // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    105,            // lineNo
    65,             // colNo
    "price",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    93,             // lineNo
    30,             // colNo
    "bar_J",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    74,             // lineNo
    11,             // colNo
    "route",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtRTEInfo l_emlrtRTEI{
    83,             // lineNo
    13,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo pc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    81,             // lineNo
    15,             // colNo
    "mu",           // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    78,             // lineNo
    19,             // colNo
    "dmd",          // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    71,             // lineNo
    13,             // colNo
    "I",            // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo fb_emlrtDCI{
    67,             // lineNo
    25,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo gb_emlrtDCI{
    67,             // lineNo
    25,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtDCInfo hb_emlrtDCI{
    73,             // lineNo
    22,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    73,             // lineNo
    22,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    67,             // lineNo
    1,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    67,             // lineNo
    1,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtDCInfo lb_emlrtDCI{
    73,             // lineNo
    5,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    73,             // lineNo
    5,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    102,            // lineNo
    20,             // colNo
    "trans_cost",   // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    86,             // lineNo
    49,             // colNo
    "price",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    86,             // lineNo
    49,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    86,             // lineNo
    55,             // colNo
    "route",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    86,             // lineNo
    60,             // colNo
    "price",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo ob_emlrtDCI{
    86,             // lineNo
    60,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo wc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    86,             // lineNo
    64,             // colNo
    "fac",          // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    87,             // lineNo
    24,             // colNo
    "mu_k",         // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    87,             // lineNo
    24,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    87,             // lineNo
    28,             // colNo
    "fac",          // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    86,             // lineNo
    21,             // colNo
    "add_fee",      // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    105,            // lineNo
    54,             // colNo
    "price",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo qb_emlrtDCI{
    105,            // lineNo
    54,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    105,            // lineNo
    60,             // colNo
    "route",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    105,            // lineNo
    20,             // colNo
    "trans_cost",   // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo rb_emlrtDCI{
    107,            // lineNo
    46,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo sb_emlrtDCI{
    107,            // lineNo
    46,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    90,             // lineNo
    24,             // colNo
    "fac",          // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    90,             // lineNo
    15,             // colNo
    "route",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    91,             // lineNo
    25,             // colNo
    "q",            // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo tb_emlrtDCI{
    91,             // lineNo
    25,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    91,             // lineNo
    31,             // colNo
    "route",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    93,             // lineNo
    18,             // colNo
    "route",        // aName
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtRTEInfo oc_emlrtRTEI{
    67,     // lineNo
    1,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    73,     // lineNo
    5,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo qc_emlrtRTEI{
    77,     // lineNo
    5,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo rc_emlrtRTEI{
    81,     // lineNo
    5,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo sc_emlrtRTEI{
    84,     // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo tc_emlrtRTEI{
    97,     // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo uc_emlrtRTEI{
    104,    // lineNo
    15,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo vc_emlrtRTEI{
    107,    // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

// Function Definitions
void greedy_build(const emlrtStack *sp, const coder::array<real_T, 2U> &b_I,
                  real_T max_try, const coder::array<real_T, 2U> &bar_J,
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  路线构建的贪心算法
  //  在每个路径的最后增加一个算子
  plan.set_size(&oc_emlrtRTEI, sp, b_I.size(1), plan.size(1));
  if (!(max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(max_try + 1.0, &gb_emlrtDCI, (emlrtConstCTX)sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(max_try + 1.0));
  if (max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(max_try + 1.0, &fb_emlrtDCI, (emlrtConstCTX)sp);
  }
  plan.set_size(&oc_emlrtRTEI, sp, plan.size(0),
                static_cast<int32_T>(max_try + 1.0));
  if (!(max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(max_try + 1.0, &kb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(max_try + 1.0, &jb_emlrtDCI, (emlrtConstCTX)sp);
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
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_I.size(1), &rc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  直接采用构造法生成一个初始路径
    route.set_size(&pc_emlrtRTEI, sp, 1, route.size(1));
    if (!(max_try + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(max_try + 1.0, &ib_emlrtDCI,
                                  (emlrtConstCTX)sp);
    }
    if (max_try + 1.0 != d) {
      emlrtIntegerCheckR2012b(max_try + 1.0, &hb_emlrtDCI, (emlrtConstCTX)sp);
    }
    route.set_size(&pc_emlrtRTEI, sp, route.size(0),
                   static_cast<int32_T>(max_try + 1.0));
    if (!(max_try + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(max_try + 1.0, &mb_emlrtDCI,
                                  (emlrtConstCTX)sp);
    }
    if (max_try + 1.0 != d) {
      emlrtIntegerCheckR2012b(max_try + 1.0, &lb_emlrtDCI, (emlrtConstCTX)sp);
    }
    last = static_cast<int32_T>(max_try + 1.0);
    for (a = 0; a < last; a++) {
      route[a] = 0.0;
    }
    //  路径
    if (static_cast<int32_T>(max_try + 1.0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(max_try + 1.0),
                                    &oc_emlrtBCI, (emlrtConstCTX)sp);
    }
    route[0] = b_I[k];
    //  路径的起点是客户
    prob = 1.0;
    //  初始概率是1
    fee = 0.0;
    //  初始费用是0
    fac.set_size(&qc_emlrtRTEI, sp, 1, bar_J.size(1));
    last = bar_J.size(1);
    for (a = 0; a < last; a++) {
      fac[a] = bar_J[a];
    }
    //  设施的复制
    if (k + 1 > data_dmd.size(0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, data_dmd.size(0), &qc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    //  客户的需求
    jdg_brk = false;
    if (k + 1 > mu.size(0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, mu.size(0), &pc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    last = mu.size(1);
    mu_k.set_size(&rc_emlrtRTEI, sp, 1, mu.size(1));
    for (a = 0; a < last; a++) {
      mu_k[a] = mu[k + mu.size(0) * a];
    }
    //  每次讲增量成本最小的设施放在路线最后（贪心构建）
    emlrtForLoopVectorCheckR2021a(2.0, 1.0, max_try, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(max_try - 1.0),
                                  &l_emlrtRTEI, (emlrtConstCTX)sp);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= static_cast<int32_T>(max_try - 1.0) - 1)) {
      real_T ex;
      int32_T b_k;
      int32_T idx;
      add_fee.set_size(&sc_emlrtRTEI, sp, 1, fac.size(1));
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
              route.size(1), &uc_emlrtBCI, (emlrtConstCTX)sp);
        }
        d1 =
            route[static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0) -
                  1];
        if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
          emlrtIntegerCheckR2012b(d1, &nb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(d1) < 1) ||
            (static_cast<int32_T>(d1) > data_price.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                        data_price.size(0), &tc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (last + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(last + 1, 1, fac.size(1), &wc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        ex = fac[last];
        if (ex != static_cast<int32_T>(muDoubleScalarFloor(ex))) {
          emlrtIntegerCheckR2012b(ex, &ob_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(ex) < 1) ||
            (static_cast<int32_T>(ex) > data_price.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ex), 1,
                                        data_price.size(1), &vc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (last + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(last + 1, 1, fac.size(1), &yc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d2 = fac[last];
        if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
          emlrtIntegerCheckR2012b(d2, &pb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(d2) < 1) ||
            (static_cast<int32_T>(d2) > mu.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, mu.size(1),
                                        &xc_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (last + 1 > add_fee.size(1)) {
          emlrtDynamicBoundsCheckR2012b(last + 1, 1, add_fee.size(1),
                                        &ad_emlrtBCI, (emlrtConstCTX)sp);
        }
        add_fee[last] = prob * data_dmd[k] *
                            data_price[(static_cast<int32_T>(d1) +
                                        data_price.size(0) *
                                            (static_cast<int32_T>(ex) - 1)) -
                                       1] +
                        mu_k[static_cast<int32_T>(d2) - 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      st.site = &v_emlrtRSI;
      b_st.site = &y_emlrtRSI;
      c_st.site = &ab_emlrtRSI;
      d_st.site = &bb_emlrtRSI;
      if (add_fee.size(1) < 1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &g_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
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
            coder::check_forloop_overflow_error(&h_st);
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
            coder::check_forloop_overflow_error(&h_st);
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
        emlrtDynamicBoundsCheckR2012b(idx, 1, fac.size(1), &ed_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &fd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      route[b_i + 1] = fac[idx - 1];
      //  路线更新
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &hd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d1 = route[b_i + 1];
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &tb_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d1) < 1) ||
          (static_cast<int32_T>(d1) > q.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, q.size(0),
                                      &gd_emlrtBCI, (emlrtConstCTX)sp);
      }
      prob *= q[static_cast<int32_T>(d1) - 1];
      //  概率更新
      fee += ex;
      //  费用更新
      if (bar_J.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, bar_J.size(1), &nc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &id_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (route[b_i + 1] == bar_J[0]) {
        jdg_brk = true;
        exitg1 = true;
      } else {
        st.site = &w_emlrtRSI;
        b_st.site = &ib_emlrtRSI;
        if (idx > fac.size(1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI,
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
        fac.set_size(&tc_emlrtRTEI, &b_st, fac.size(0), idx);
        //  否则去除已经添加的设施
        b_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    }
    if (jdg_brk) {
      //  提前退出
      if (k + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, plan.size(0), &lc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, route.size(), 2, &h_emlrtECI,
                                    (emlrtCTX)sp);
      last = route.size(1);
      for (a = 0; a < last; a++) {
        plan[k + plan.size(0) * a] = route[a];
      }
      //  记录路径
      a = trans_cost.size(0);
      if (k + 1 > a) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, a, &sc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      trans_cost[k] = fee;
      //  记录成本
    } else {
      r.set_size(&uc_emlrtRTEI, sp, 1, route.size(1));
      last = route.size(1);
      for (a = 0; a < last; a++) {
        r[a] = (route[a] == 0.0);
      }
      st.site = &x_emlrtRSI;
      coder::internal::nullAssignment(&st, route, r);
      //  去除路径中的多余0
      if (data_price.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, data_price.size(1), &mc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (route.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(route.size(1), 1, route.size(1),
                                      &cd_emlrtBCI, (emlrtConstCTX)sp);
      }
      d1 = route[route.size(1) - 1];
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &qb_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d1) < 1) ||
          (static_cast<int32_T>(d1) > data_price.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                      data_price.size(0), &bd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      a = trans_cost.size(0);
      if (k + 1 > a) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, a, &dd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      trans_cost[k] =
          fee + data_dmd[k] * prob * data_price[static_cast<int32_T>(d1) - 1];
      //  直接计算成本
      d1 = max_try - static_cast<real_T>(route.size(1));
      if (!(d1 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d1, &sb_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &rb_emlrtDCI, (emlrtConstCTX)sp);
      }
      fac.set_size(&vc_emlrtRTEI, sp, 1,
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
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, plan.size(0), &kc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, fac.size(), 2, &g_emlrtECI,
                                    (emlrtCTX)sp);
      last = fac.size(1);
      for (a = 0; a < last; a++) {
        plan[k + plan.size(0) * a] = fac[a];
      }
      //  记录路径
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (lb_x.cpp)
