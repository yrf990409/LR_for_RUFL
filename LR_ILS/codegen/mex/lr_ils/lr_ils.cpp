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
#include "lb_dfs.h"
#include "lb_x.h"
#include "lb_y.h"
#include "lr_ils_data.h"
#include "lr_ils_mexutil.h"
#include "lr_ils_types.h"
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
#include <stdio.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    7,        // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    38,       // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    39,       // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    40,       // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    43,       // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    49,       // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    51,       // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    93,       // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    102,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    105,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    114,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    115,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    116,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    143,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    28,     // lineNo
    "lb_x", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    50,     // lineNo
    "lb_x", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pathName
};

static emlrtRSInfo cf_emlrtRSI{
    38,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    138,      // lineNo
    5,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo b_emlrtMCI{
    122,      // lineNo
    9,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo c_emlrtMCI{
    127,      // lineNo
    13,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo d_emlrtMCI{
    131,      // lineNo
    13,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtMCInfo e_emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    36,       // lineNo
    12,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
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

static emlrtBCInfo f_emlrtBCI{
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

static emlrtBCInfo g_emlrtBCI{
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

static emlrtBCInfo h_emlrtBCI{
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

static emlrtBCInfo i_emlrtBCI{
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

static emlrtDCInfo emlrtDCI{
    21,       // lineNo
    37,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    1                       // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    21,       // lineNo
    37,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    4                       // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    9,        // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    1                       // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    9,        // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    4                       // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    10,       // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    1                       // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    11,       // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    1                       // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    149,      // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    1                       // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    149,      // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    4                       // checkKind
};

static emlrtBCInfo j_emlrtBCI{
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

static emlrtBCInfo k_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    96,       // lineNo
    12,       // colNo
    "rec_lb", // aName
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    97,       // lineNo
    12,       // colNo
    "rec_ub", // aName
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    58,        // lineNo
    25,        // colNo
    "rec_ils", // aName
    "lr_ils",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m", // pName
    0                       // checkKind
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

static emlrtRTEInfo p_emlrtRTEI{
    9,        // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    10,       // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    11,       // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    20,       // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    149,      // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    33,       // lineNo
    1,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    28,     // lineNo
    8,      // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    50,     // lineNo
    14,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    40,     // lineNo
    18,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    54,     // lineNo
    25,     // colNo
    "lb_x", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_x.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    39,       // lineNo
    16,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    51,       // lineNo
    25,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    49,       // lineNo
    25,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    56,       // lineNo
    17,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    70,       // lineNo
    9,        // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    93,       // lineNo
    28,       // colNo
    "lr_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pName
};

static emlrtRSInfo df_emlrtRSI{
    138,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo ef_emlrtRSI{
    122,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo ff_emlrtRSI{
    127,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo gf_emlrtRSI{
    131,      // lineNo
    "lr_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lr_ils.m" // pathName
};

static emlrtRSInfo hf_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

// Function Declarations
static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            const mxArray *m6, const mxArray *m7,
                            const mxArray *m8, const mxArray *m9,
                            const mxArray *m10, emlrtMCInfo *location);

// Function Definitions
static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, nullptr, 1, &pArray, "disp", true,
                        location);
}

static real_T emlrt_marshallIn(const emlrtStack *sp,
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

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            const mxArray *m6, const mxArray *m7,
                            const mxArray *m8, const mxArray *m9,
                            const mxArray *m10, emlrtMCInfo *location)
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
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 10, &pArrays[0],
                               "feval", true, location);
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
  static const int32_T iv1[2]{1, 7};
  static const int32_T iv2[2]{1, 10};
  static const int32_T iv3[2]{1, 11};
  static const int32_T iv4[2]{1, 9};
  static const int32_T iv5[2]{1, 80};
  static const char_T f_u[80]{
      'i', 't', 'e', 'r', ':', '%', '.', '0', 'f',  ',', ' ', 'b', 'e', 's',
      't', '-', 'u', 'b', ':', '%', '.', '2', 'f',  ',', ' ', 'b', 'e', 's',
      't', '-', 'l', 'b', ':', '%', '.', '2', 'f',  ',', ' ', 'g', 'a', 'p',
      ':', '%', '.', '4', 'f', '%', '%', ',', ' ',  't', 'i', 'm', 'e', ':',
      '%', '.', '2', 'f', ',', ' ', 'u', 'b', ':',  '%', '.', '2', 'f', ',',
      ' ', 'l', 'b', ':', '%', '.', '2', 'f', '\\', 'n'};
  static const char_T u[15]{'s', 't', 'o', 'p', ',', ' ', 'i', 't',
                            'e', 'r', 'a', 't', 'i', 'o', 'n'};
  static const char_T d_u[11]{'s', 't', 'o', 'p', ',', ' ',
                              'a', 'l', 'p', 'h', 'a'};
  static const char_T c_u[10]{'s', 't', 'o', 'p', ',', ' ', 't', 'i', 'm', 'e'};
  static const char_T e_u[9]{'s', 't', 'o', 'p', ',', ' ', 'g', 'a', 'p'};
  static const char_T b_u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  coder::array<real_T, 2U> b_lr_case;
  coder::array<real_T, 2U> best_r;
  coder::array<real_T, 2U> plan;
  coder::array<real_T, 2U> sqc;
  coder::array<real_T, 1U> lb_val_x;
  coder::array<boolean_T, 2U> cur_loc;
  coder::array<boolean_T, 2U> lb_loc;
  coder::array<boolean_T, 2U> nb_loc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *y;
  real_T lr_case_data[2];
  real_T bst_lb;
  real_T bst_ub;
  real_T cnt_iter;
  real_T cnt_step;
  real_T cnt_ub;
  real_T cur_ub;
  real_T gap;
  real_T nb_ub;
  real_T ub;
  int32_T b_lr_case_size[2];
  int32_T c_lr_case_size[2];
  int32_T lr_case_size[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T iter;
  int32_T loop_ub;
  boolean_T exitg1;
  boolean_T flag_fast;
  boolean_T flag_ils_continue;
  boolean_T flag_modify;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  LR_ILS 拉格朗日松弛-局部迭代搜索算法
  //  传入 案例参数lr_case 以及算法参数lr_para
  //  传出 lr_result结果
  //  初始化
  st.site = &emlrtRSI;
  coder::tic(&st);
  //  记录 recorder
  if (!(lr_para->eta_lr >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_para->eta_lr, &d_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  nb_ub = static_cast<int32_T>(muDoubleScalarFloor(lr_para->eta_lr));
  if (lr_para->eta_lr != nb_ub) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  lr_result->rec_lb.set_size(&p_emlrtRTEI, sp,
                             static_cast<int32_T>(lr_para->eta_lr));
  if (lr_para->eta_lr != nb_ub) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(lr_para->eta_lr);
  for (i = 0; i < loop_ub; i++) {
    lr_result->rec_lb[i] = 0.0;
  }
  //  下界记录 record
  if (lr_para->eta_lr != nb_ub) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  lr_result->rec_ub.set_size(&q_emlrtRTEI, sp,
                             static_cast<int32_T>(lr_para->eta_lr));
  if (lr_para->eta_lr != nb_ub) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(lr_para->eta_lr);
  for (i = 0; i < loop_ub; i++) {
    lr_result->rec_ub[i] = 0.0;
  }
  //  上界记录
  if (lr_para->eta_lr != nb_ub) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  lr_result->rec_ils.set_size(&r_emlrtRTEI, sp,
                              static_cast<int32_T>(lr_para->eta_lr));
  if (lr_para->eta_lr != nb_ub) {
    emlrtIntegerCheckR2012b(lr_para->eta_lr, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = static_cast<int32_T>(lr_para->eta_lr);
  for (i = 0; i < loop_ub; i++) {
    lr_result->rec_ils[i] = false;
  }
  //  ILS发挥作用记录
  //  计数器 count
  cnt_step = 0.0;
  //  下界连续不上升计数
  //  上界连续不下降计数
  cnt_ub = 0.0;
  //  最佳上界保持的迭代次数
  cnt_iter = lr_para->eta_lr;
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
    emlrtNonNegativeCheckR2012b(lr_case->max_try + 1.0, &b_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  nb_ub = static_cast<int32_T>(muDoubleScalarFloor(lr_case->max_try + 1.0));
  if (lr_case->max_try + 1.0 != nb_ub) {
    emlrtIntegerCheckR2012b(lr_case->max_try + 1.0, &emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  lr_result->bst_sqc.set_size(&t_emlrtRTEI, sp, lr_result->bst_sqc.size(0),
                              static_cast<int32_T>(lr_case->max_try + 1.0));
  if (!(lr_case->max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case->max_try + 1.0, &h_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  if (lr_case->max_try + 1.0 != nb_ub) {
    emlrtIntegerCheckR2012b(lr_case->max_try + 1.0, &g_emlrtDCI,
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
  exitg1 = false;
  while ((!exitg1) && (iter <= static_cast<int32_T>(lr_para->eta_lr) - 1)) {
    real_T b_lr_case_data[2];
    real_T max_try_tmp;
    real_T pi;
    real_T t;
    //  获取下界
    st.site = &b_emlrtRSI;
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
    max_try_tmp = lr_case->max_try;
    //  记录每个客户的期望运输成本
    //  贪心路径构建
    lb_val_x.set_size(&v_emlrtRTEI, &st, lr_case->b_I.size(1));
    loop_ub = lr_case->b_I.size(1);
    for (i = 0; i < loop_ub; i++) {
      lb_val_x[i] = 0.0;
    }
    b_st.site = &t_emlrtRSI;
    greedy_build(&b_st, lr_case->b_I, lr_case->max_try, lr_case->bar_J,
                 lr_case->data.price, lr_case->data.dmd, lr_case->mu,
                 lr_case->q, lb_val_x, plan);
    //  DFS改进当前解
    if (!flag_fast) {
      //  快速模式不启动dfs
      if (lr_case->data.price.size(0) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, lr_case->data.price.size(0),
                                      &emlrtBCI, &st);
      }
      if (lr_case->data.price.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lr_case->data.price.size(1),
                                      &b_emlrtBCI, &st);
      }
      pi = lr_case->data.price[1];
      //  惩罚成本
      i = lr_case->b_I.size(1);
      if (lr_case->b_I.size(1) - 1 >= 0) {
        b_loop_ub = lr_case->mu.size(1);
      }
      if (i - 1 >= 0) {
        lr_case_size[0] = 1;
        lr_case_size[1] = 1;
      }
      for (int32_T j{0}; j < i; j++) {
        if (j + 1 > lr_case->b_I.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->b_I.size(1),
                                        &c_emlrtBCI, &st);
        }
        if (j + 1 > plan.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &d_emlrtBCI,
                                        &st);
        }
        //  当前最优路径
        if (j + 1 > lb_val_x.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lb_val_x.size(0), &e_emlrtBCI,
                                        &st);
        }
        //  当前上界
        if (j + 1 > lr_case->data.dmd.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->data.dmd.size(0),
                                        &f_emlrtBCI, &st);
        }
        //  客户的需求
        if (j + 1 > lr_case->mu.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->mu.size(0),
                                        &g_emlrtBCI, &st);
        }
        //  拉格朗日乘子
        if (j + 1 > lb_val_x.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lb_val_x.size(0), &j_emlrtBCI,
                                        &st);
        }
        loop_ub = plan.size(1);
        best_r.set_size(&w_emlrtRTEI, &st, 1, plan.size(1));
        for (int32_T i1{0}; i1 < loop_ub; i1++) {
          best_r[i1] = plan[j + plan.size(0) * i1];
        }
        lr_case_data[0] = lr_case->b_I[j];
        b_lr_case.set_size(&x_emlrtRTEI, &st, 1, lr_case->mu.size(1));
        for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
          b_lr_case[i1] = lr_case->mu[j + lr_case->mu.size(0) * i1];
        }
        if (j + 1 > lb_val_x.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lb_val_x.size(0), &j_emlrtBCI,
                                        &st);
        }
        b_lr_case_data[0] = lr_case_data[0];
        b_lr_case_size[0] = lr_case_size[0];
        b_lr_case_size[1] = lr_case_size[1];
        b_st.site = &u_emlrtRSI;
        lb_dfs(&b_st, b_lr_case_data, b_lr_case_size, best_r, &lb_val_x[j],
               lr_case->bar_J, lr_case->data.dmd[j], lr_case->data.price,
               max_try_tmp - 1.0, pi, lr_case->q, b_lr_case);
        //  深度优先搜索
        //  更新上界
        if (best_r.size(1) < max_try_tmp + 1.0) {
          if (j + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &h_emlrtBCI,
                                          &st);
          }
          nb_ub = (max_try_tmp + 1.0) - static_cast<real_T>(best_r.size(1));
          if (!(nb_ub >= 0.0)) {
            emlrtNonNegativeCheckR2012b(nb_ub, &j_emlrtDCI, &st);
          }
          if (nb_ub != static_cast<int32_T>(muDoubleScalarFloor(nb_ub))) {
            emlrtIntegerCheckR2012b(nb_ub, &i_emlrtDCI, &st);
          }
          b_lr_case.set_size(&y_emlrtRTEI, &st, 1,
                             best_r.size(1) + static_cast<int32_T>(nb_ub));
          loop_ub = best_r.size(1);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            b_lr_case[i1] = best_r[i1];
          }
          loop_ub = static_cast<int32_T>(nb_ub);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            b_lr_case[i1 + best_r.size(1)] = 0.0;
          }
          b_lr_case_size[0] = 1;
          b_lr_case_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_lr_case_size[0], 2, b_lr_case.size(),
                                        2, &emlrtECI, &st);
          loop_ub = b_lr_case.size(1);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            plan[j + plan.size(0) * i1] = b_lr_case[i1];
          }
        } else {
          if (j + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &i_emlrtBCI,
                                          &st);
          }
          b_lr_case_size[0] = 1;
          b_lr_case_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_lr_case_size[0], 2, best_r.size(), 2,
                                        &b_emlrtECI, &st);
          loop_ub = best_r.size(1);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            plan[j + plan.size(0) * i1] = best_r[i1];
          }
          //  记录方案
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
    //  获取Sub_2的值
    st.site = &c_emlrtRSI;
    lb_y(&st, lr_case->data.fix, lr_case->bar_J, lr_case->mu, best_r, lb_loc);
    //  获取Sub_1的值
    st.site = &d_emlrtRSI;
    pi = coder::sum(&st, lb_val_x) + coder::sum(&st, best_r);
    //  获取上界
    nb_loc.set_size(&ab_emlrtRTEI, sp, 1, lb_loc.size(1));
    loop_ub = lb_loc.size(0) * lb_loc.size(1) - 1;
    for (i = 0; i <= loop_ub; i++) {
      nb_loc[i] = lb_loc[i];
    }
    st.site = &e_emlrtRSI;
    ub_xy(&st, lr_case->data.price, lr_case->data.dmd, lr_case->data.fix,
          lr_case->q, lr_case->max_try, lr_case->bar_J, lr_case->b_I, nb_loc,
          flag_fast, &ub, sqc, lb_val_x);
    //  ILS搜索上界
    if (lr_para->ils && (cnt_ub >= lr_para->kappa_ub) &&
        (gap > 2.0 * lr_para->xi)) {
      if (flag_ils_continue) {
        nb_loc.set_size(&cb_emlrtRTEI, sp, 1, cur_loc.size(1));
        loop_ub = cur_loc.size(1);
        for (i = 0; i < loop_ub; i++) {
          nb_loc[i] = cur_loc[i];
        }
        st.site = &f_emlrtRSI;
        ub_ils(&st, lr_case->data.price, lr_case->data.dmd, lr_case->data.fix,
               lr_case->q, lr_case->max_try, lr_case->bar_J, lr_case->b_I,
               cur_ub, nb_loc, lr_para->theta_sa, lr_para->eta_ils, &nb_ub,
               &cur_ub, cur_loc);
      } else {
        nb_loc.set_size(&bb_emlrtRTEI, sp, 1, lr_result->bst_loc.size(1));
        loop_ub = lr_result->bst_loc.size(1);
        for (i = 0; i < loop_ub; i++) {
          nb_loc[i] = lr_result->bst_loc[i];
        }
        st.site = &g_emlrtRSI;
        ub_ils(&st, lr_case->data.price, lr_case->data.dmd, lr_case->data.fix,
               lr_case->q, lr_case->max_try, lr_case->bar_J, lr_case->b_I,
               bst_ub, nb_loc, lr_para->theta_sa, lr_para->eta_ils, &nb_ub,
               &cur_ub, cur_loc);
      }
      if (nb_ub < bst_ub) {
        //  得到更好的上界
        lr_result->bst_loc.set_size(&db_emlrtRTEI, sp, 1, nb_loc.size(1));
        loop_ub = nb_loc.size(1);
        for (i = 0; i < loop_ub; i++) {
          lr_result->bst_loc[i] = nb_loc[i];
        }
        //  选址方案
        bst_ub = nb_ub;
        //  上界
        if ((iter + 1 < 1) || (iter + 1 > lr_result->rec_ils.size(0))) {
          emlrtDynamicBoundsCheckR2012b(iter + 1, 1, lr_result->rec_ils.size(0),
                                        &m_emlrtBCI, (emlrtConstCTX)sp);
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
      lr_result->bst_loc.set_size(&eb_emlrtRTEI, sp, 1, lb_loc.size(1));
      loop_ub = lb_loc.size(1);
      for (i = 0; i < loop_ub; i++) {
        lr_result->bst_loc[i] = lb_loc[i];
      }
      //  选址方案
      lr_result->bst_sqc.set_size(&t_emlrtRTEI, sp, sqc.size(0), sqc.size(1));
      loop_ub = sqc.size(0) * sqc.size(1);
      for (i = 0; i < loop_ub; i++) {
        lr_result->bst_sqc[i] = sqc[i];
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
    if (pi >= bst_lb) {
      bst_lb = pi;
      cnt_step = 0.0;
    } else {
      cnt_step++;
      //  否则下界未更新计数+1
    }
    //  更新乘子
    sqc.set_size(&fb_emlrtRTEI, sp, lr_case->mu.size(0), lr_case->mu.size(1));
    loop_ub = lr_case->mu.size(0) * lr_case->mu.size(1) - 1;
    for (i = 0; i <= loop_ub; i++) {
      sqc[i] = lr_case->mu[i];
    }
    st.site = &h_emlrtRSI;
    update_mu(&st, lr_case->bar_J, lr_case->b_I, sqc, lr_para->alpha,
              lr_para->theta_lr, lr_para->kappa_lb, lr_para->square, pi, bst_ub,
              plan, lb_loc, &cnt_step, lr_case->mu, &lr_para->alpha);
    //  迭代记录
    if ((iter + 1 < 1) || (iter + 1 > lr_result->rec_lb.size(0))) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, lr_result->rec_lb.size(0),
                                    &k_emlrtBCI, (emlrtConstCTX)sp);
    }
    lr_result->rec_lb[iter] = pi;
    //  下界记录 record
    if ((iter + 1 < 1) || (iter + 1 > lr_result->rec_ub.size(0))) {
      emlrtDynamicBoundsCheckR2012b(iter + 1, 1, lr_result->rec_ub.size(0),
                                    &l_emlrtBCI, (emlrtConstCTX)sp);
    }
    lr_result->rec_ub[iter] = bst_ub;
    //  上界记录
    //  打印
    gap = (bst_ub - bst_lb) / bst_ub;
    //  计算gap
    st.site = &i_emlrtRSI;
    t = coder::toc(&st);
    if (lr_para->print) {
      st.site = &j_emlrtRSI;
      b_st.site = &cf_emlrtRSI;
      b_y = nullptr;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      d_y = nullptr;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&d_y, m);
      g_y = nullptr;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&b_st, 80, m, &f_u[0]);
      emlrtAssign(&g_y, m);
      h_y = nullptr;
      m = emlrtCreateDoubleScalar(static_cast<real_T>(iter) + 1.0);
      emlrtAssign(&h_y, m);
      i_y = nullptr;
      m = emlrtCreateDoubleScalar(bst_ub);
      emlrtAssign(&i_y, m);
      j_y = nullptr;
      m = emlrtCreateDoubleScalar(bst_lb);
      emlrtAssign(&j_y, m);
      k_y = nullptr;
      m = emlrtCreateDoubleScalar(gap * 100.0);
      emlrtAssign(&k_y, m);
      l_y = nullptr;
      m = emlrtCreateDoubleScalar(t);
      emlrtAssign(&l_y, m);
      m_y = nullptr;
      m = emlrtCreateDoubleScalar(ub);
      emlrtAssign(&m_y, m);
      n_y = nullptr;
      m = emlrtCreateDoubleScalar(pi);
      emlrtAssign(&n_y, m);
      c_st.site = &hf_emlrtRSI;
      emlrt_marshallIn(&c_st,
                       feval(&c_st, b_y, d_y, g_y, h_y, i_y, j_y, k_y, l_y, m_y,
                             n_y, &e_emlrtMCI),
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
      lb_val_x.set_size(&v_emlrtRTEI, &st, lr_case->b_I.size(1));
      loop_ub = lr_case->b_I.size(1);
      for (i = 0; i < loop_ub; i++) {
        lb_val_x[i] = 0.0;
      }
      b_st.site = &t_emlrtRSI;
      greedy_build(&b_st, lr_case->b_I, lr_case->max_try, lr_case->bar_J,
                   lr_case->data.price, lr_case->data.dmd, lr_case->mu,
                   lr_case->q, lb_val_x, plan);
      //  DFS改进当前解
      //  快速模式不启动dfs
      if (lr_case->data.price.size(0) < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, lr_case->data.price.size(0),
                                      &emlrtBCI, &st);
      }
      if (lr_case->data.price.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lr_case->data.price.size(1),
                                      &b_emlrtBCI, &st);
      }
      pi = lr_case->data.price[1];
      //  惩罚成本
      i = lr_case->b_I.size(1);
      if (lr_case->b_I.size(1) - 1 >= 0) {
        c_loop_ub = lr_case->mu.size(1);
      }
      if (i - 1 >= 0) {
        c_lr_case_size[0] = 1;
        c_lr_case_size[1] = 1;
      }
      for (int32_T j{0}; j < i; j++) {
        if (j + 1 > lr_case->b_I.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->b_I.size(1),
                                        &c_emlrtBCI, &st);
        }
        if (j + 1 > plan.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &d_emlrtBCI,
                                        &st);
        }
        //  当前最优路径
        if (j + 1 > lb_val_x.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lb_val_x.size(0), &e_emlrtBCI,
                                        &st);
        }
        //  当前上界
        if (j + 1 > lr_case->data.dmd.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->data.dmd.size(0),
                                        &f_emlrtBCI, &st);
        }
        //  客户的需求
        if (j + 1 > lr_case->mu.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lr_case->mu.size(0),
                                        &g_emlrtBCI, &st);
        }
        //  拉格朗日乘子
        if (j + 1 > lb_val_x.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lb_val_x.size(0), &j_emlrtBCI,
                                        &st);
        }
        loop_ub = plan.size(1);
        best_r.set_size(&w_emlrtRTEI, &st, 1, plan.size(1));
        for (int32_T i1{0}; i1 < loop_ub; i1++) {
          best_r[i1] = plan[j + plan.size(0) * i1];
        }
        lr_case_data[0] = lr_case->b_I[j];
        b_lr_case.set_size(&x_emlrtRTEI, &st, 1, lr_case->mu.size(1));
        for (int32_T i1{0}; i1 < c_loop_ub; i1++) {
          b_lr_case[i1] = lr_case->mu[j + lr_case->mu.size(0) * i1];
        }
        if (j + 1 > lb_val_x.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, lb_val_x.size(0), &j_emlrtBCI,
                                        &st);
        }
        b_lr_case_data[0] = lr_case_data[0];
        b_lr_case_size[0] = c_lr_case_size[0];
        b_lr_case_size[1] = c_lr_case_size[1];
        b_st.site = &u_emlrtRSI;
        lb_dfs(&b_st, b_lr_case_data, b_lr_case_size, best_r, &lb_val_x[j],
               lr_case->bar_J, lr_case->data.dmd[j], lr_case->data.price,
               max_try_tmp - 1.0, pi, lr_case->q, b_lr_case);
        //  深度优先搜索
        //  更新上界
        if (best_r.size(1) < max_try_tmp + 1.0) {
          if (j + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &h_emlrtBCI,
                                          &st);
          }
          nb_ub = (max_try_tmp + 1.0) - static_cast<real_T>(best_r.size(1));
          if (!(nb_ub >= 0.0)) {
            emlrtNonNegativeCheckR2012b(nb_ub, &j_emlrtDCI, &st);
          }
          if (nb_ub != static_cast<int32_T>(muDoubleScalarFloor(nb_ub))) {
            emlrtIntegerCheckR2012b(nb_ub, &i_emlrtDCI, &st);
          }
          b_lr_case.set_size(&y_emlrtRTEI, &st, 1,
                             best_r.size(1) + static_cast<int32_T>(nb_ub));
          loop_ub = best_r.size(1);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            b_lr_case[i1] = best_r[i1];
          }
          loop_ub = static_cast<int32_T>(nb_ub);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            b_lr_case[i1 + best_r.size(1)] = 0.0;
          }
          b_lr_case_size[0] = 1;
          b_lr_case_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_lr_case_size[0], 2, b_lr_case.size(),
                                        2, &emlrtECI, &st);
          loop_ub = b_lr_case.size(1);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            plan[j + plan.size(0) * i1] = b_lr_case[i1];
          }
        } else {
          if (j + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, plan.size(0), &i_emlrtBCI,
                                          &st);
          }
          b_lr_case_size[0] = 1;
          b_lr_case_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_lr_case_size[0], 2, best_r.size(), 2,
                                        &b_emlrtECI, &st);
          loop_ub = best_r.size(1);
          for (int32_T i1{0}; i1 < loop_ub; i1++) {
            plan[j + plan.size(0) * i1] = best_r[i1];
          }
          //  记录方案
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      //  获取Sub_2的值
      st.site = &l_emlrtRSI;
      lb_y(&st, lr_case->data.fix, lr_case->bar_J, lr_case->mu, best_r, lb_loc);
      //  获取Sub_1的值
      st.site = &m_emlrtRSI;
      bst_lb = coder::sum(&st, lb_val_x) + coder::sum(&st, best_r);
      //  强制修正下界
      gap = (bst_ub - bst_lb) / bst_ub;
      //  修正之后的gap
    }
    //  终止条件
    if (t > lr_para->tau_lim) {
      c_y = nullptr;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 10, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &ef_emlrtRSI;
      disp(&st, c_y, &b_emlrtMCI);
      //  时间限制
      cnt_iter = static_cast<real_T>(iter) + 1.0;
      exitg1 = true;
    } else if (lr_para->alpha < lr_para->alpha_min) {
      e_y = nullptr;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 11, m, &d_u[0]);
      emlrtAssign(&e_y, m);
      st.site = &ff_emlrtRSI;
      disp(&st, e_y, &c_emlrtMCI);
      //  迭代值限制
      cnt_iter = static_cast<real_T>(iter) + 1.0;
      exitg1 = true;
    } else if (gap < lr_para->xi) {
      f_y = nullptr;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 9, m, &e_u[0]);
      emlrtAssign(&f_y, m);
      st.site = &gf_emlrtRSI;
      disp(&st, f_y, &d_emlrtMCI);
      //  gap值达标
      cnt_iter = static_cast<real_T>(iter) + 1.0;
      exitg1 = true;
    } else {
      iter++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  if (cnt_iter == lr_para->eta_lr) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &df_emlrtRSI;
    disp(&st, y, &emlrtMCI);
    //  迭代次数限制
  }
  //  封装 & 返回
  //  重新计算
  st.site = &n_emlrtRSI;
  lr_result->time = coder::toc(&st);
  lr_result->bst_ub = bst_ub;
  lr_result->bst_lb = bst_lb;
  lr_result->iter = cnt_iter;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (lr_ils.cpp)
