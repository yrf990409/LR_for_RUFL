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
#include "lb_x_data.h"
#include "lb_x_types.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    28,     // lineNo
    "lb_x", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    50,     // lineNo
    "lb_x", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    89,             // lineNo
    "greedy_build", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    97,             // lineNo
    "greedy_build", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    104,            // lineNo
    "greedy_build", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    17,    // lineNo
    "min", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/min.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    40,         // lineNo
    "minOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    90,        // lineNo
    "minimum", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    173,             // lineNo
    "unaryMinOrMax", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    72,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    64,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    113,         // lineNo
    "findFirst", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    130,                        // lineNo
    "minOrMaxRealVectorKernel", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

static emlrtBCInfo emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    34,      // lineNo
    16,      // colNo
    "price", // aName
    "lb_x",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    34,      // lineNo
    18,      // colNo
    "price", // aName
    "lb_x",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    36,     // lineNo
    17,     // colNo
    "I",    // aName
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    37,     // lineNo
    23,     // colNo
    "plan", // aName
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    40,     // lineNo
    21,     // colNo
    "mu",   // aName
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    54,     // lineNo
    18,     // colNo
    "plan", // aName
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtECInfo emlrtECI{
    -1,     // nDims
    54,     // lineNo
    13,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo g_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    56,     // lineNo
    18,     // colNo
    "plan", // aName
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtECInfo b_emlrtECI{
    -1,     // nDims
    56,     // lineNo
    13,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo h_emlrtBCI{
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

static emlrtBCInfo i_emlrtBCI{
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

static emlrtBCInfo j_emlrtBCI{
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

static emlrtRTEInfo emlrtRTEI{
    83,             // lineNo
    13,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo k_emlrtBCI{
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

static emlrtBCInfo l_emlrtBCI{
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

static emlrtBCInfo m_emlrtBCI{
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

static emlrtBCInfo n_emlrtBCI{
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

static emlrtECInfo c_emlrtECI{
    -1,             // nDims
    101,            // lineNo
    9,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtBCInfo o_emlrtBCI{
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

static emlrtECInfo d_emlrtECI{
    -1,             // nDims
    108,            // lineNo
    9,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo c_emlrtRTEI{
    134,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pName
};

static emlrtDCInfo b_emlrtDCI{
    67,             // lineNo
    25,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    67,             // lineNo
    25,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    73,             // lineNo
    22,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    73,             // lineNo
    22,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    67,             // lineNo
    1,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    67,             // lineNo
    1,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    73,             // lineNo
    5,              // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    38,           // lineNo
    25,           // colNo
    "trans_cost", // aName
    "lb_x",       // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,     // iFirst
    -1,     // iLast
    39,     // lineNo
    23,     // colNo
    "dmd",  // aName
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    51,           // lineNo
    20,           // colNo
    "trans_cost", // aName
    "lb_x",       // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    0                     // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    54,     // lineNo
    43,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    54,     // lineNo
    43,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtBCInfo t_emlrtBCI{
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

static emlrtBCInfo u_emlrtBCI{
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

static emlrtDCInfo k_emlrtDCI{
    86,             // lineNo
    49,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo v_emlrtBCI{
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

static emlrtBCInfo w_emlrtBCI{
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

static emlrtDCInfo l_emlrtDCI{
    86,             // lineNo
    60,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo x_emlrtBCI{
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

static emlrtBCInfo y_emlrtBCI{
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

static emlrtDCInfo m_emlrtDCI{
    87,             // lineNo
    24,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
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

static emlrtBCInfo bb_emlrtBCI{
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

static emlrtBCInfo cb_emlrtBCI{
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

static emlrtDCInfo n_emlrtDCI{
    105,            // lineNo
    54,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo db_emlrtBCI{
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

static emlrtBCInfo eb_emlrtBCI{
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

static emlrtDCInfo o_emlrtDCI{
    107,            // lineNo
    46,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    107,            // lineNo
    46,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    4                     // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
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

static emlrtBCInfo mb_emlrtBCI{
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

static emlrtBCInfo nb_emlrtBCI{
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

static emlrtDCInfo t_emlrtDCI{
    91,             // lineNo
    25,             // colNo
    "greedy_build", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m", // pName
    1                     // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
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

static emlrtBCInfo pb_emlrtBCI{
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

static emlrtRTEInfo g_emlrtRTEI{
    25,     // lineNo
    1,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    67,     // lineNo
    1,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    73,     // lineNo
    5,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    77,     // lineNo
    5,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    81,     // lineNo
    5,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    84,     // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    97,     // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    104,    // lineNo
    15,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    107,    // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    37,     // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    40,     // lineNo
    9,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    54,     // lineNo
    25,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

// Function Definitions
void lb_x(const emlrtStack *sp, const struct0_T *lr_case, boolean_T flag_fast,
          coder::array<real_T, 1U> &trans_cost, coder::array<real_T, 2U> &plan)
{
  coder::array<real_T, 2U> add_fee;
  coder::array<real_T, 2U> fac;
  coder::array<real_T, 2U> mu_k;
  coder::array<real_T, 2U> route;
  coder::array<boolean_T, 2U> b_lr_case;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T c_lr_case;
  real_T d;
  real_T d1;
  real_T d2;
  real_T fee;
  real_T max_try;
  real_T prob;
  real_T tempCost;
  int32_T iv[2];
  int32_T b_i;
  int32_T b_k;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T last;
  int32_T loop_ub;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
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
  max_try = lr_case->max_try;
  trans_cost.set_size(&g_emlrtRTEI, sp, lr_case->b_I.size(1));
  loop_ub = lr_case->b_I.size(1);
  for (i = 0; i < loop_ub; i++) {
    trans_cost[i] = 0.0;
  }
  //  记录每个客户的期望运输成本
  //  贪心路径构建
  st.site = &emlrtRSI;
  //  路线构建的贪心算法
  //  在每个路径的最后增加一个算子
  plan.set_size(&h_emlrtRTEI, &st, lr_case->b_I.size(1), plan.size(1));
  d = lr_case->max_try + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case->max_try + 1.0, &c_emlrtDCI, &st);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
  if (d != d1) {
    emlrtIntegerCheckR2012b(lr_case->max_try + 1.0, &b_emlrtDCI, &st);
  }
  plan.set_size(&h_emlrtRTEI, &st, plan.size(0), static_cast<int32_T>(d));
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case->max_try + 1.0, &g_emlrtDCI, &st);
  }
  if (d != d1) {
    emlrtIntegerCheckR2012b(lr_case->max_try + 1.0, &f_emlrtDCI, &st);
  }
  loop_ub = lr_case->b_I.size(1) * static_cast<int32_T>(lr_case->max_try + 1.0);
  for (i = 0; i < loop_ub; i++) {
    plan[i] = 0.0;
  }
  //  记录每个客户的方案
  //  客户的需求
  //  价格矩阵
  i = lr_case->b_I.size(1);
  for (int32_T k{0}; k < i; k++) {
    boolean_T exitg1;
    boolean_T jdg_brk;
    if (k + 1 > lr_case->b_I.size(1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, lr_case->b_I.size(1), &h_emlrtBCI,
                                    &st);
    }
    //  直接采用构造法生成一个初始路径
    route.set_size(&i_emlrtRTEI, &st, 1, route.size(1));
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &e_emlrtDCI, &st);
    }
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &d_emlrtDCI, &st);
    }
    route.set_size(&i_emlrtRTEI, &st, route.size(0), static_cast<int32_T>(d));
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &h_emlrtDCI, &st);
    }
    loop_ub = static_cast<int32_T>(d);
    for (i1 = 0; i1 < loop_ub; i1++) {
      route[i1] = 0.0;
    }
    //  路径
    if (static_cast<int32_T>(max_try + 1.0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(max_try + 1.0),
                                    &k_emlrtBCI, &st);
    }
    route[0] = lr_case->b_I[k];
    //  路径的起点是客户
    prob = 1.0;
    //  初始概率是1
    fee = 0.0;
    //  初始费用是0
    fac.set_size(&j_emlrtRTEI, &st, 1, lr_case->bar_J.size(1));
    loop_ub = lr_case->bar_J.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      fac[i1] = lr_case->bar_J[i1];
    }
    //  设施的复制
    if (k + 1 > lr_case->data.dmd.size(0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, lr_case->data.dmd.size(0),
                                    &i_emlrtBCI, &st);
    }
    //  客户的需求
    jdg_brk = false;
    if (k + 1 > lr_case->mu.size(0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, lr_case->mu.size(0), &j_emlrtBCI,
                                    &st);
    }
    mu_k.set_size(&k_emlrtRTEI, &st, 1, lr_case->mu.size(1));
    loop_ub = lr_case->mu.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      mu_k[i1] = lr_case->mu[k + lr_case->mu.size(0) * i1];
    }
    //  每次讲增量成本最小的设施放在路线最后（贪心构建）
    emlrtForLoopVectorCheckR2021a(2.0, 1.0, max_try, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(max_try - 1.0),
                                  &emlrtRTEI, &st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= static_cast<int32_T>(max_try - 1.0) - 1)) {
      add_fee.set_size(&l_emlrtRTEI, &st, 1, fac.size(1));
      loop_ub = fac.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        add_fee[i1] = 0.0;
      }
      i1 = fac.size(1);
      for (int32_T j{0}; j < i1; j++) {
        if ((static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0) <
             1) ||
            (static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0) >
             route.size(1))) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0), 1,
              route.size(1), &v_emlrtBCI, &st);
        }
        d2 =
            route[static_cast<int32_T>((static_cast<real_T>(b_i) + 2.0) - 1.0) -
                  1];
        if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
          emlrtIntegerCheckR2012b(d2, &k_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(d2) < 1) ||
            (static_cast<int32_T>(d2) > lr_case->data.price.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                        lr_case->data.price.size(0),
                                        &u_emlrtBCI, &st);
        }
        if (j + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, fac.size(1), &x_emlrtBCI,
                                        &st);
        }
        tempCost = fac[j];
        if (tempCost != static_cast<int32_T>(muDoubleScalarFloor(tempCost))) {
          emlrtIntegerCheckR2012b(tempCost, &l_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(tempCost) < 1) ||
            (static_cast<int32_T>(tempCost) > lr_case->data.price.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(tempCost), 1,
                                        lr_case->data.price.size(1),
                                        &w_emlrtBCI, &st);
        }
        if (j + 1 > fac.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, fac.size(1), &ab_emlrtBCI,
                                        &st);
        }
        c_lr_case = fac[j];
        if (c_lr_case != static_cast<int32_T>(muDoubleScalarFloor(c_lr_case))) {
          emlrtIntegerCheckR2012b(c_lr_case, &m_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(c_lr_case) < 1) ||
            (static_cast<int32_T>(c_lr_case) > lr_case->mu.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_lr_case), 1,
                                        lr_case->mu.size(1), &y_emlrtBCI, &st);
        }
        if (j + 1 > add_fee.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, add_fee.size(1), &bb_emlrtBCI,
                                        &st);
        }
        add_fee[j] =
            prob * lr_case->data.dmd[k] *
                lr_case->data.price[(static_cast<int32_T>(d2) +
                                     lr_case->data.price.size(0) *
                                         (static_cast<int32_T>(tempCost) - 1)) -
                                    1] +
            mu_k[static_cast<int32_T>(c_lr_case) - 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      b_st.site = &c_emlrtRSI;
      c_st.site = &f_emlrtRSI;
      d_st.site = &g_emlrtRSI;
      e_st.site = &h_emlrtRSI;
      if (add_fee.size(1) < 1) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &c_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      f_st.site = &i_emlrtRSI;
      last = add_fee.size(1);
      if (add_fee.size(1) <= 2) {
        if (add_fee.size(1) == 1) {
          tempCost = add_fee[0];
          idx = 1;
        } else if ((add_fee[0] > add_fee[1]) ||
                   (muDoubleScalarIsNaN(add_fee[0]) &&
                    (!muDoubleScalarIsNaN(add_fee[1])))) {
          tempCost = add_fee[1];
          idx = 2;
        } else {
          tempCost = add_fee[0];
          idx = 1;
        }
      } else {
        g_st.site = &k_emlrtRSI;
        if (!muDoubleScalarIsNaN(add_fee[0])) {
          idx = 1;
        } else {
          boolean_T exitg2;
          idx = 0;
          h_st.site = &l_emlrtRSI;
          if (add_fee.size(1) > 2147483646) {
            i_st.site = &m_emlrtRSI;
            coder::check_forloop_overflow_error(&i_st);
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
          tempCost = add_fee[0];
          idx = 1;
        } else {
          g_st.site = &j_emlrtRSI;
          tempCost = add_fee[idx - 1];
          loop_ub = idx + 1;
          h_st.site = &n_emlrtRSI;
          if ((idx + 1 <= add_fee.size(1)) && (add_fee.size(1) > 2147483646)) {
            i_st.site = &m_emlrtRSI;
            coder::check_forloop_overflow_error(&i_st);
          }
          for (b_k = loop_ub; b_k <= last; b_k++) {
            d2 = add_fee[b_k - 1];
            if (tempCost > d2) {
              tempCost = d2;
              idx = b_k;
            }
          }
        }
      }
      //  指向最小的费用
      if ((idx < 1) || (idx > fac.size(1))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, fac.size(1), &lb_emlrtBCI, &st);
      }
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &mb_emlrtBCI,
                                      &st);
      }
      route[b_i + 1] = fac[idx - 1];
      //  路线更新
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &ob_emlrtBCI,
                                      &st);
      }
      d2 = route[b_i + 1];
      if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
        emlrtIntegerCheckR2012b(d2, &t_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(d2) < 1) ||
          (static_cast<int32_T>(d2) > lr_case->q.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                      lr_case->q.size(0), &nb_emlrtBCI, &st);
      }
      prob *= lr_case->q[static_cast<int32_T>(d2) - 1];
      //  概率更新
      fee += tempCost;
      //  费用更新
      if (lr_case->bar_J.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lr_case->bar_J.size(1), &l_emlrtBCI,
                                      &st);
      }
      if ((b_i + 2 < 1) || (b_i + 2 > route.size(1))) {
        emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, route.size(1), &pb_emlrtBCI,
                                      &st);
      }
      if (route[b_i + 1] == lr_case->bar_J[0]) {
        jdg_brk = true;
        exitg1 = true;
      } else {
        b_st.site = &d_emlrtRSI;
        c_st.site = &o_emlrtRSI;
        if (idx > fac.size(1)) {
          emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                        "MATLAB:subsdeldimmismatch",
                                        "MATLAB:subsdeldimmismatch", 0);
        }
        last = fac.size(1) - 1;
        for (b_k = idx; b_k <= last; b_k++) {
          fac[b_k - 1] = fac[b_k];
        }
        if (fac.size(1) - 1 < 1) {
          i1 = 0;
        } else {
          i1 = fac.size(1) - 1;
        }
        fac.set_size(&m_emlrtRTEI, &b_st, fac.size(0), i1);
        //  否则去除已经添加的设施
        b_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
    if (jdg_brk) {
      //  提前退出
      if (k + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, plan.size(0), &n_emlrtBCI, &st);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, route.size(), 2, &c_emlrtECI,
                                    &st);
      loop_ub = route.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[k + plan.size(0) * i1] = route[i1];
      }
      //  记录路径
      if (k + 1 > trans_cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, trans_cost.size(0), &t_emlrtBCI,
                                      &st);
      }
      trans_cost[k] = fee;
      //  记录成本
    } else {
      b_lr_case.set_size(&n_emlrtRTEI, &st, 1, route.size(1));
      loop_ub = route.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_lr_case[i1] = (route[i1] == 0.0);
      }
      b_st.site = &e_emlrtRSI;
      coder::internal::nullAssignment(&b_st, route, b_lr_case);
      //  去除路径中的多余0
      if (lr_case->data.price.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lr_case->data.price.size(1),
                                      &m_emlrtBCI, &st);
      }
      if (route.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(route.size(1), 1, route.size(1),
                                      &db_emlrtBCI, &st);
      }
      d2 = route[route.size(1) - 1];
      if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
        emlrtIntegerCheckR2012b(d2, &n_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(d2) < 1) ||
          (static_cast<int32_T>(d2) > lr_case->data.price.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                      lr_case->data.price.size(0), &cb_emlrtBCI,
                                      &st);
      }
      if (k + 1 > trans_cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, trans_cost.size(0),
                                      &eb_emlrtBCI, &st);
      }
      trans_cost[k] =
          fee + lr_case->data.dmd[k] * prob *
                    lr_case->data.price[static_cast<int32_T>(d2) - 1];
      //  直接计算成本
      d2 = max_try - static_cast<real_T>(route.size(1));
      if (!(d2 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d2, &p_emlrtDCI, &st);
      }
      if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
        emlrtIntegerCheckR2012b(d2, &o_emlrtDCI, &st);
      }
      fac.set_size(&o_emlrtRTEI, &st, 1,
                   (route.size(1) + static_cast<int32_T>(d2)) + 1);
      loop_ub = route.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        fac[i1] = route[i1];
      }
      fac[route.size(1)] = 1.0;
      loop_ub = static_cast<int32_T>(d2);
      for (i1 = 0; i1 < loop_ub; i1++) {
        fac[(i1 + route.size(1)) + 1] = 0.0;
      }
      //  记录路径
      if (k + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, plan.size(0), &o_emlrtBCI, &st);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, fac.size(), 2, &d_emlrtECI, &st);
      loop_ub = fac.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[k + plan.size(0) * i1] = fac[i1];
      }
      //  记录路径
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  //  DFS改进当前解
  if (!flag_fast) {
    //  快速模式不启动dfs
    if (lr_case->data.price.size(0) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, lr_case->data.price.size(0),
                                    &emlrtBCI, (emlrtConstCTX)sp);
    }
    if (lr_case->data.price.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, lr_case->data.price.size(1),
                                    &b_emlrtBCI, (emlrtConstCTX)sp);
    }
    prob = lr_case->data.price[1];
    //  惩罚成本
    i = lr_case->b_I.size(1);
    for (int32_T j{0}; j < i; j++) {
      real_T r_data[2];
      real_T cus_dmd;
      if (j + 1 > lr_case->b_I.size(1)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->b_I.size(1),
                                      &c_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (j + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &d_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = plan.size(1);
      add_fee.set_size(&p_emlrtRTEI, sp, 1, plan.size(1));
      for (i1 = 0; i1 < loop_ub; i1++) {
        add_fee[i1] = plan[j + plan.size(0) * i1];
      }
      //  当前最优路径
      if (j + 1 > trans_cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, trans_cost.size(0), &q_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      fee = trans_cost[j];
      //  当前上界
      if (j + 1 > lr_case->data.dmd.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->data.dmd.size(0),
                                      &r_emlrtBCI, (emlrtConstCTX)sp);
      }
      cus_dmd = lr_case->data.dmd[j];
      //  客户的需求
      if (j + 1 > lr_case->mu.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->mu.size(0),
                                      &e_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = lr_case->mu.size(1);
      fac.set_size(&q_emlrtRTEI, sp, 1, lr_case->mu.size(1));
      for (i1 = 0; i1 < loop_ub; i1++) {
        fac[i1] = lr_case->mu[j + lr_case->mu.size(0) * i1];
      }
      //  拉格朗日乘子
      st.site = &b_emlrtRSI;
      r_data[0] = lr_case->b_I[j];
      //  global x
      //  x = x+1
      if ((max_try - 1.0) + 1.0 >= 1.0) {
        //  没有到达设施数量的上界
        if (lr_case->b_I[j] == 1.0) {
          //  如果结尾是虚拟，那么获得了一个完整路径
          if (trans_cost[j] > 0.0) {
            //  小于上界 则更新
            fee = 0.0;
            add_fee.set_size(&ab_emlrtRTEI, &st, 1, 1);
            add_fee[0] = lr_case->b_I[j];
          }
        } else {
          //  否则不是一个完整路径
          i1 = lr_case->bar_J.size(1);
          if (lr_case->bar_J.size(1) == 0) {
            //  没有设施可以填充了，route最后一个不以虚拟结尾
            //  route必须是虚拟收尾了
            tempCost = lr_case->data.dmd[j] * prob;
            if (tempCost < trans_cost[j]) {
              //  小于上界 则更新
              fee = tempCost;
              add_fee.set_size(&y_emlrtRTEI, &st, 1, 2);
              add_fee[0] = lr_case->b_I[j];
              add_fee[1] = 1.0;
            }

            //  还有设施可以填充
          } else if ((max_try - 1.0) + 1.0 == 1.0) {
            //  已经填满，放不下了，只差一个虚拟设施
            //  route必须是0收尾了
            tempCost = lr_case->data.dmd[j] * prob;
            if (tempCost < trans_cost[j]) {
              //  小于上界 则更新
              fee = tempCost;
              add_fee.set_size(&x_emlrtRTEI, &st, 1, 2);
              add_fee[0] = lr_case->b_I[j];
              add_fee[1] = 1.0;
            }
          } else {
            //  向下继续分支
            for (b_i = 0; b_i < i1; b_i++) {
              //  i : index of facilities
              d = r_data[0];
              if (b_i + 1 > lr_case->bar_J.size(1)) {
                emlrtDynamicBoundsCheckR2012b(
                    b_i + 1, 1, lr_case->bar_J.size(1), &fb_emlrtBCI, &st);
              }
              d1 = lr_case->bar_J[b_i];
              r_data[1] = d1;
              if (r_data[0] !=
                  static_cast<int32_T>(muDoubleScalarFloor(r_data[0]))) {
                emlrtIntegerCheckR2012b(r_data[0], &q_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(r_data[0]) < 1) ||
                  (static_cast<int32_T>(r_data[0]) >
                   lr_case->data.price.size(0))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(r_data[0]),
                                              1, lr_case->data.price.size(0),
                                              &gb_emlrtBCI, &st);
              }
              idx = static_cast<int32_T>(muDoubleScalarFloor(d1));
              if (d1 != idx) {
                emlrtIntegerCheckR2012b(d1, &r_emlrtDCI, &st);
              }
              last = static_cast<int32_T>(d1);
              if ((last < 1) || (last > lr_case->data.price.size(1))) {
                emlrtDynamicBoundsCheckR2012b(
                    last, 1, lr_case->data.price.size(1), &hb_emlrtBCI, &st);
              }
              if (b_i + 1 > lr_case->bar_J.size(1)) {
                emlrtDynamicBoundsCheckR2012b(
                    b_i + 1, 1, lr_case->bar_J.size(1), &jb_emlrtBCI, &st);
              }
              d2 = lr_case->bar_J[b_i];
              if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
                emlrtIntegerCheckR2012b(d2, &s_emlrtDCI, &st);
              }
              if ((static_cast<int32_T>(d2) < 1) ||
                  (static_cast<int32_T>(d2) > lr_case->mu.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                              lr_case->mu.size(1), &ib_emlrtBCI,
                                              &st);
              }
              tempCost =
                  lr_case->data
                          .price[(static_cast<int32_T>(r_data[0]) +
                                  lr_case->data.price.size(0) * (last - 1)) -
                                 1] *
                      cus_dmd +
                  lr_case->mu[j + lr_case->mu.size(0) *
                                      (static_cast<int32_T>(d2) - 1)];
              if (tempCost > fee) {
                //  剪枝
                r_data[0] = d;
                //  直接恢复不再细分
              } else {
                //  递归 继续分支
                mu_k.set_size(&s_emlrtRTEI, &st, 1, lr_case->bar_J.size(1));
                loop_ub = lr_case->bar_J.size(1);
                for (b_k = 0; b_k < loop_ub; b_k++) {
                  mu_k[b_k] = lr_case->bar_J[b_k];
                }
                if (b_i + 1 > lr_case->bar_J.size(1)) {
                  emlrtDynamicBoundsCheckR2012b(
                      b_i + 1, 1, lr_case->bar_J.size(1), &kb_emlrtBCI, &st);
                }
                c_lr_case = lr_case->bar_J[b_i];
                b_lr_case.set_size(&t_emlrtRTEI, &st, 1,
                                   lr_case->bar_J.size(1));
                loop_ub = lr_case->bar_J.size(1);
                for (b_k = 0; b_k < loop_ub; b_k++) {
                  b_lr_case[b_k] = (lr_case->bar_J[b_k] == c_lr_case);
                }
                b_st.site = &t_emlrtRSI;
                coder::internal::nullAssignment(&b_st, mu_k, b_lr_case);
                if (d1 != idx) {
                  emlrtIntegerCheckR2012b(d1, &emlrtDCI, &st);
                }
                if (last > lr_case->q.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(last, 1, lr_case->q.size(0),
                                                &p_emlrtBCI, &st);
                }
                route.set_size(&u_emlrtRTEI, &st, 1, 2);
                for (idx = 0; idx < 2; idx++) {
                  route[idx] = r_data[idx];
                }
                b_st.site = &u_emlrtRSI;
                lb_dfs(&b_st, route, add_fee, &fee, tempCost,
                       lr_case->q[static_cast<int32_T>(d1) - 1], mu_k, cus_dmd,
                       lr_case->data.price, max_try - 1.0, prob, lr_case->q,
                       fac);
                r_data[0] = d;
              }
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&st);
              }
            }
          }
        }
      }
      //  深度优先搜索
      if (j + 1 > trans_cost.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, trans_cost.size(0), &s_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      trans_cost[j] = fee;
      //  更新上界
      if (add_fee.size(1) < max_try + 1.0) {
        if (j + 1 > plan.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &f_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d = (max_try + 1.0) - static_cast<real_T>(add_fee.size(1));
        if (!(d >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d, &j_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &i_emlrtDCI, (emlrtConstCTX)sp);
        }
        fac.set_size(&bb_emlrtRTEI, sp, 1,
                     add_fee.size(1) + static_cast<int32_T>(d));
        loop_ub = add_fee.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          fac[i1] = add_fee[i1];
        }
        loop_ub = static_cast<int32_T>(d);
        for (i1 = 0; i1 < loop_ub; i1++) {
          fac[i1 + add_fee.size(1)] = 0.0;
        }
        iv[0] = 1;
        iv[1] = plan.size(1);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, fac.size(), 2, &emlrtECI,
                                      (emlrtCTX)sp);
        loop_ub = fac.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          plan[j + plan.size(0) * i1] = fac[i1];
        }
      } else {
        if (j + 1 > plan.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &g_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        iv[0] = 1;
        iv[1] = plan.size(1);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, add_fee.size(), 2, &b_emlrtECI,
                                      (emlrtCTX)sp);
        loop_ub = add_fee.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          plan[j + plan.size(0) * i1] = add_fee[i1];
        }
        //  记录方案
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (lb_x.cpp)
