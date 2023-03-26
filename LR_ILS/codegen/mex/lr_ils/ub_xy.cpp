//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ub_xy.cpp
//
// Code generation for function 'ub_xy'
//

// Include files
#include "ub_xy.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "lb_dfs.h"
#include "lr_ils_data.h"
#include "nullAssignment.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"

// Variable Definitions
static emlrtRSInfo fc_emlrtRSI{
    22,      // lineNo
    "ub_xy", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo gc_emlrtRSI{
    31,      // lineNo
    "ub_xy", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo hc_emlrtRSI{
    36,      // lineNo
    "ub_xy", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo ic_emlrtRSI{
    51,      // lineNo
    "ub_xy", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    60,      // lineNo
    "ub_xy", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    64,      // lineNo
    "ub_xy", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo qc_emlrtRSI{
    95,             // lineNo
    "mod_dijkstra", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo rc_emlrtRSI{
    97,             // lineNo
    "mod_dijkstra", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    110,            // lineNo
    "mod_dijkstra", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    133,        // lineNo
    "get_plan", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    150,      // lineNo
    "ub_dfs", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    160,      // lineNo
    "ub_dfs", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtRSInfo wc_emlrtRSI{
    172,      // lineNo
    "ub_dfs", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pathName
};

static emlrtECInfo c_emlrtECI{
    -1,      // nDims
    56,      // lineNo
    9,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtBCInfo u_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    56,      // lineNo
    14,      // colNo
    "plan",  // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtECInfo d_emlrtECI{
    -1,      // nDims
    54,      // lineNo
    9,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtBCInfo v_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    54,      // lineNo
    14,      // colNo
    "plan",  // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    52,              // lineNo
    27,              // colNo
    "pind_with_cus", // aName
    "ub_xy",         // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    50,      // lineNo
    26,      // colNo
    "plan",  // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtECInfo e_emlrtECI{
    -1,      // nDims
    45,      // lineNo
    9,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtBCInfo y_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    45,      // lineNo
    14,      // colNo
    "plan",  // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtECInfo f_emlrtECI{
    -1,      // nDims
    43,      // lineNo
    9,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtBCInfo ab_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    43,      // lineNo
    14,      // colNo
    "plan",  // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    32,              // lineNo
    32,              // colNo
    "price_cus_fac", // aName
    "ub_xy",         // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    30,      // lineNo
    19,      // colNo
    "dmd",   // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    27,      // lineNo
    13,      // colNo
    "I",     // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    25,      // lineNo
    39,      // colNo
    "price", // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    25,      // lineNo
    23,      // colNo
    "price", // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    20,         // lineNo
    10,         // colNo
    "location", // aName
    "ub_xy",    // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo l_emlrtDCI{
    19,      // lineNo
    25,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo m_emlrtDCI{
    19,      // lineNo
    25,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    4                      // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    18,         // lineNo
    21,         // colNo
    "data.fix", // aName
    "ub_xy",    // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    19,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    19,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    4                      // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    21,      // lineNo
    11,      // colNo
    "q",     // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,      // iFirst
    -1,      // iLast
    24,      // lineNo
    23,      // colNo
    "price", // aName
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    52,        // lineNo
    12,        // colNo
    "located", // aName
    "ub_xy",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    52,      // lineNo
    12,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo q_emlrtDCI{
    54,      // lineNo
    37,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    54,      // lineNo
    37,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    4                      // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    33,          // lineNo
    29,          // colNo
    "price_cus", // aName
    "ub_xy",     // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    39,           // lineNo
    16,           // colNo
    "trans_cost", // aName
    "ub_xy",      // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    43,      // lineNo
    37,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    43,      // lineNo
    37,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    4                      // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    109,            // lineNo
    21,             // colNo
    "weight",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    119,                // lineNo
    18,                 // colNo
    "plan_without_cus", // aName
    "get_plan",         // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo u_emlrtDCI{
    78,             // lineNo
    16,             // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo v_emlrtDCI{
    117,        // lineNo
    29,         // colNo
    "get_plan", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo w_emlrtDCI{
    117,        // lineNo
    29,         // colNo
    "get_plan", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    4                      // checkKind
};

static emlrtDCInfo x_emlrtDCI{
    78,             // lineNo
    1,              // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    87,             // lineNo
    27,             // colNo
    "prob",         // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    87,             // lineNo
    52,             // colNo
    "price",        // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    87,             // lineNo
    59,             // colNo
    "price",        // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo y_emlrtDCI{
    87,             // lineNo
    59,             // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    87,             // lineNo
    66,             // colNo
    "unmark",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    89,             // lineNo
    26,             // colNo
    "weight",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo ab_emlrtDCI{
    89,             // lineNo
    26,             // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    89,             // lineNo
    33,             // colNo
    "unmark",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    90,             // lineNo
    20,             // colNo
    "weight",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo bb_emlrtDCI{
    90,             // lineNo
    20,             // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    90,             // lineNo
    27,             // colNo
    "unmark",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    91,              // lineNo
    27,              // colNo
    "preceding_ind", // aName
    "mod_dijkstra",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    91,             // lineNo
    27,             // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    91,             // lineNo
    34,             // colNo
    "unmark",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    95,             // lineNo
    37,             // colNo
    "weight",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    95,             // lineNo
    37,             // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo eb_emlrtDCI{
    110,            // lineNo
    1,              // colNo
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    123,         // lineNo
    18,          // colNo
    "preceding", // aName
    "get_plan",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    127,         // lineNo
    41,          // colNo
    "preceding", // aName
    "get_plan",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    127,                // lineNo
    22,                 // colNo
    "plan_without_cus", // aName
    "get_plan",         // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    128,         // lineNo
    21,          // colNo
    "preceding", // aName
    "get_plan",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    96,             // lineNo
    20,             // colNo
    "unmark",       // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    98,             // lineNo
    24,             // colNo
    "prob",         // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    98,              // lineNo
    38,              // colNo
    "preceding_ind", // aName
    "mod_dijkstra",  // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    98,             // lineNo
    54,             // colNo
    "q_loc",        // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    98,             // lineNo
    10,             // colNo
    "prob",         // aName
    "mod_dijkstra", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo ud_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    139,          // lineNo
    17,           // colNo
    "data.price", // aName
    "ub_dfs",     // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    139,          // lineNo
    19,           // colNo
    "data.price", // aName
    "ub_dfs",     // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    145,      // lineNo
    19,       // colNo
    "plan",   // aName
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    147,          // lineNo
    21,           // colNo
    "trans_cost", // aName
    "ub_dfs",     // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    148,      // lineNo
    19,       // colNo
    "dmd",    // aName
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    162,      // lineNo
    10,       // colNo
    "plan",   // aName
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    164,      // lineNo
    14,       // colNo
    "plan",   // aName
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtECInfo i_emlrtECI{
    -1,       // nDims
    164,      // lineNo
    9,        // colNo
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtBCInfo ce_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    166,      // lineNo
    14,       // colNo
    "plan",   // aName
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtECInfo j_emlrtECI{
    -1,       // nDims
    166,      // lineNo
    9,        // colNo
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtBCInfo de_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    171,        // lineNo
    21,         // colNo
    "data.fix", // aName
    "ub_dfs",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    144,      // lineNo
    5,        // colNo
    "I",      // aName
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    161,          // lineNo
    16,           // colNo
    "trans_cost", // aName
    "ub_dfs",     // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    0                      // checkKind
};

static emlrtDCInfo yb_emlrtDCI{
    164,      // lineNo
    39,       // colNo
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    1                      // checkKind
};

static emlrtDCInfo ac_emlrtDCI{
    164,      // lineNo
    39,       // colNo
    "ub_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m", // pName
    4                      // checkKind
};

static emlrtRTEInfo jb_emlrtRTEI{
    17,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    1,       // lineNo
    36,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    18,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    19,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    21,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    22,      // lineNo
    16,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    24,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    25,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    51,      // lineNo
    5,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo sb_emlrtRTEI{
    51,      // lineNo
    19,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo tb_emlrtRTEI{
    52,      // lineNo
    5,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo ub_emlrtRTEI{
    54,      // lineNo
    21,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo vb_emlrtRTEI{
    32,      // lineNo
    18,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo wb_emlrtRTEI{
    31,      // lineNo
    5,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo xb_emlrtRTEI{
    33,      // lineNo
    17,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo yb_emlrtRTEI{
    33,      // lineNo
    5,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    40,      // lineNo
    5,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    43,      // lineNo
    21,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    77,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    78,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    79,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    80,      // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    95,      // lineNo
    30,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    97,      // lineNo
    12,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo kc_emlrtRTEI{
    110,     // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    133,     // lineNo
    18,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    9,       // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo id_emlrtRTEI{
    140,     // lineNo
    1,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo jd_emlrtRTEI{
    136,     // lineNo
    38,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo kd_emlrtRTEI{
    171,     // lineNo
    12,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo ld_emlrtRTEI{
    145,     // lineNo
    5,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo md_emlrtRTEI{
    150,     // lineNo
    16,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo nd_emlrtRTEI{
    150,     // lineNo
    5,       // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

static emlrtRTEInfo od_emlrtRTEI{
    164,     // lineNo
    21,      // colNo
    "ub_xy", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_xy.m" // pName
};

// Function Declarations
static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator);

static void mod_dijkstra(const emlrtStack *sp,
                         const coder::array<real_T, 2U> &price,
                         const coder::array<real_T, 1U> &q_loc, real_T dmd_cus,
                         real_T max_try,
                         coder::array<real_T, 2U> &pind_without_cus,
                         real_T *trans_cost);

static real_T ub_dfs(const emlrtStack *sp, const coder::array<real_T, 2U> &b_I,
                     const coder::array<real_T, 2U> &bar_J,
                     const coder::array<boolean_T, 2U> &location,
                     coder::array<real_T, 2U> &plan,
                     coder::array<real_T, 1U> &trans_cost,
                     const coder::array<real_T, 2U> &data_price,
                     const coder::array<real_T, 1U> &data_dmd,
                     const coder::array<real_T, 1U> &data_fix,
                     const coder::array<real_T, 1U> &q, real_T max_try);

// Function Definitions
static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(nullptr, (emlrtConstCTX)sp);
  } else {
    uint32_T tempAbsQuotient;
    uint32_T u;
    if (numerator < 0) {
      tempAbsQuotient = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      tempAbsQuotient = static_cast<uint32_T>(numerator);
    }
    if (denominator < 0) {
      u = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      u = static_cast<uint32_T>(denominator);
    }
    tempAbsQuotient /= u;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int32_T>(tempAbsQuotient);
    } else {
      quotient = static_cast<int32_T>(tempAbsQuotient);
    }
  }
  return quotient;
}

static void mod_dijkstra(const emlrtStack *sp,
                         const coder::array<real_T, 2U> &price,
                         const coder::array<real_T, 1U> &q_loc, real_T dmd_cus,
                         real_T max_try,
                         coder::array<real_T, 2U> &pind_without_cus,
                         real_T *trans_cost)
{
  coder::array<real_T, 2U> prob;
  coder::array<real_T, 2U> unmark;
  coder::array<real_T, 2U> varargin_1;
  coder::array<real_T, 2U> weight;
  coder::array<uint32_T, 2U> preceding_ind;
  coder::array<boolean_T, 2U> r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T count;
  real_T d;
  real_T fee;
  int32_T i;
  int32_T j;
  int32_T loop_ub;
  int32_T start;
  uint32_T b_count;
  boolean_T exitg1;
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
  // MOD_DIJKSTRA 修正的Dijkstra算法
  //  输入一个i行j列的距离矩阵(从i到j)，返回从最后一个点到第一个点最短成本的路径
  //  传入的距离矩阵最后一行表示客户，第一行是虚拟设施
  start = price.size(0);
  //  初始起点
  fee = 0.0;
  //  当前产生的费用
  preceding_ind.set_size(&ec_emlrtRTEI, sp, 1, q_loc.size(0));
  loop_ub = q_loc.size(0);
  for (i = 0; i < loop_ub; i++) {
    preceding_ind[i] = 0U;
  }
  //  前向记录
  prob.set_size(&fc_emlrtRTEI, sp, 1, prob.size(1));
  if (static_cast<real_T>(q_loc.size(0)) + 1.0 != q_loc.size(0) + 1) {
    emlrtIntegerCheckR2012b(static_cast<real_T>(q_loc.size(0)) + 1.0,
                            &u_emlrtDCI, (emlrtConstCTX)sp);
  }
  prob.set_size(&fc_emlrtRTEI, sp, prob.size(0), q_loc.size(0) + 1);
  if (static_cast<real_T>(q_loc.size(0)) + 1.0 != q_loc.size(0) + 1) {
    emlrtIntegerCheckR2012b(static_cast<real_T>(q_loc.size(0)) + 1.0,
                            &x_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = q_loc.size(0) + 1;
  for (i = 0; i < loop_ub; i++) {
    prob[i] = 1.0;
  }
  //  概率记录
  if (q_loc.size(0) < 1) {
    unmark.set_size(&gc_emlrtRTEI, sp, 1, 0);
  } else {
    unmark.set_size(&gc_emlrtRTEI, sp, 1, q_loc.size(0));
    loop_ub = q_loc.size(0) - 1;
    for (i = 0; i <= loop_ub; i++) {
      unmark[i] = static_cast<real_T>(i) + 1.0;
    }
  }
  //  未标记的点
  weight.set_size(&hc_emlrtRTEI, sp, 1, q_loc.size(0));
  loop_ub = q_loc.size(0);
  for (i = 0; i < loop_ub; i++) {
    weight[i] = rtInf;
  }
  //  点的权重
  count = 0.0;
  exitg1 = false;
  while ((!exitg1) && (count < max_try)) {
    //  更新未扫描的节点
    i = unmark.size(1);
    for (j = 0; j < i; j++) {
      real_T temp;
      //  上一个点产生的费用 加上 到这个点需要的费用
      if ((start < 1) || (start > prob.size(1))) {
        emlrtDynamicBoundsCheckR2012b(start, 1, prob.size(1), &pb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (start > price.size(0)) {
        emlrtDynamicBoundsCheckR2012b(start, 1, price.size(0), &qb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j + 1 > unmark.size(1)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, unmark.size(1), &sb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d = unmark[j];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &y_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > price.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, price.size(1),
                                      &rb_emlrtBCI, (emlrtConstCTX)sp);
      }
      temp = fee +
             prob[start - 1] * dmd_cus *
                 price[(start + price.size(0) * (static_cast<int32_T>(d) - 1)) -
                       1];
      if (j + 1 > unmark.size(1)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, unmark.size(1), &ub_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d = unmark[j];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &ab_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > weight.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                      weight.size(1), &tb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (temp < weight[static_cast<int32_T>(d) - 1]) {
        //  得到新的权重
        if (j + 1 > unmark.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, unmark.size(1), &wb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d = unmark[j];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > weight.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                        weight.size(1), &vb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        weight[static_cast<int32_T>(d) - 1] = temp;
        if (j + 1 > unmark.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, unmark.size(1), &yb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d = unmark[j];
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > preceding_ind.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                        preceding_ind.size(1), &xb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        preceding_ind[static_cast<int32_T>(d) - 1] =
            static_cast<uint32_T>(start);
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    st.site = &qc_emlrtRSI;
    varargin_1.set_size(&ic_emlrtRTEI, &st, 1, unmark.size(1));
    loop_ub = unmark.size(1);
    for (i = 0; i < loop_ub; i++) {
      if (unmark[i] != static_cast<int32_T>(muDoubleScalarFloor(unmark[i]))) {
        emlrtIntegerCheckR2012b(unmark[i], &db_emlrtDCI, &st);
      }
      j = static_cast<int32_T>(unmark[i]);
      if ((j < 1) || (j > weight.size(1))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, weight.size(1), &ac_emlrtBCI, &st);
      }
      varargin_1[i] = weight[j - 1];
    }
    b_st.site = &y_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    d_st.site = &bb_emlrtRSI;
    if (unmark.size(1) < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &g_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &cb_emlrtRSI;
    start = unmark.size(1);
    if (unmark.size(1) <= 2) {
      if (unmark.size(1) == 1) {
        fee = weight[static_cast<int32_T>(unmark[0]) - 1];
        j = 1;
      } else {
        fee = weight[static_cast<int32_T>(unmark[0]) - 1];
        d = weight[static_cast<int32_T>(unmark[1]) - 1];
        if (fee > d) {
          fee = d;
          j = 2;
        } else {
          j = 1;
        }
      }
    } else {
      f_st.site = &eb_emlrtRSI;
      f_st.site = &db_emlrtRSI;
      fee = weight[static_cast<int32_T>(unmark[0]) - 1];
      j = 1;
      g_st.site = &hb_emlrtRSI;
      if (unmark.size(1) > 2147483646) {
        h_st.site = &gb_emlrtRSI;
        coder::check_forloop_overflow_error(&h_st);
      }
      for (loop_ub = 2; loop_ub <= start; loop_ub++) {
        d = varargin_1[loop_ub - 1];
        if (fee > d) {
          fee = d;
          j = loop_ub;
        }
      }
    }
    //  在所有未标记的权重中选取最小
    if (j > unmark.size(1)) {
      emlrtDynamicBoundsCheckR2012b(j, 1, unmark.size(1), &fc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    start = static_cast<int32_T>(static_cast<uint32_T>(unmark[j - 1]));
    //  更新起点
    r.set_size(&jc_emlrtRTEI, sp, 1, unmark.size(1));
    loop_ub = unmark.size(1);
    for (i = 0; i < loop_ub; i++) {
      r[i] = (static_cast<int32_T>(unmark[i]) == start);
    }
    st.site = &rc_emlrtRSI;
    coder::internal::nullAssignment(&st, unmark, r);
    //  更新标记
    if ((start < 1) || (start > preceding_ind.size(1))) {
      emlrtDynamicBoundsCheckR2012b(start, 1, preceding_ind.size(1),
                                    &hc_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = static_cast<int32_T>(preceding_ind[start - 1]);
    if ((i < 1) || (i > prob.size(1))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, prob.size(1), &gc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (start > q_loc.size(0)) {
      emlrtDynamicBoundsCheckR2012b(start, 1, q_loc.size(0), &ic_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (start > prob.size(1)) {
      emlrtDynamicBoundsCheckR2012b(start, 1, prob.size(1), &jc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    prob[start - 1] = prob[i - 1] * q_loc[start - 1];
    //  更新概率
    if ((start == 1) || (unmark.size(1) == 0)) {
      exitg1 = true;
    } else {
      count++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  if (weight.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, weight.size(1), &nb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  *trans_cost = weight[0];
  st.site = &sc_emlrtRSI;
  //  返回一个不带客户的路线方案
  //  给定DIJKSTRA算法的跟踪索引，返回一个路径
  pind_without_cus.set_size(&kc_emlrtRTEI, &st, 1, pind_without_cus.size(1));
  if (!(max_try >= 0.0)) {
    emlrtNonNegativeCheckR2012b(max_try, &w_emlrtDCI, &st);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(max_try));
  if (max_try != d) {
    emlrtIntegerCheckR2012b(max_try, &v_emlrtDCI, &st);
  }
  pind_without_cus.set_size(&kc_emlrtRTEI, &st, pind_without_cus.size(0),
                            static_cast<int32_T>(max_try));
  if (max_try != d) {
    emlrtIntegerCheckR2012b(max_try, &eb_emlrtDCI, &st);
  }
  loop_ub = static_cast<int32_T>(max_try);
  for (i = 0; i < loop_ub; i++) {
    pind_without_cus[i] = 0.0;
  }
  start = 1;
  if (static_cast<int32_T>(max_try) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(max_try),
                                  &ob_emlrtBCI, &st);
  }
  pind_without_cus[0] = 1.0;
  b_count = 2U;
  int32_T exitg2;
  do {
    exitg2 = 0;
    if ((start < 1) || (start > preceding_ind.size(1))) {
      emlrtDynamicBoundsCheckR2012b(start, 1, preceding_ind.size(1),
                                    &bc_emlrtBCI, &st);
    }
    i = static_cast<int32_T>(preceding_ind[start - 1]);
    if (i == price.size(0)) {
      exitg2 = 1;
    } else {
      if (start > preceding_ind.size(1)) {
        emlrtDynamicBoundsCheckR2012b(start, 1, preceding_ind.size(1),
                                      &cc_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(b_count) < 1) ||
          (static_cast<int32_T>(b_count) > pind_without_cus.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_count), 1,
                                      pind_without_cus.size(1), &dc_emlrtBCI,
                                      &st);
      }
      pind_without_cus[static_cast<int32_T>(b_count) - 1] =
          preceding_ind[start - 1];
      if (start > preceding_ind.size(1)) {
        emlrtDynamicBoundsCheckR2012b(start, 1, preceding_ind.size(1),
                                      &ec_emlrtBCI, &st);
      }
      start = i;
      b_count++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
  } while (exitg2 == 0);
  if (pind_without_cus.size(1) < 1) {
    i = 0;
    j = 1;
    start = -1;
  } else {
    i = pind_without_cus.size(1) - 1;
    j = -1;
    start = 0;
  }
  b_st.site = &sc_emlrtRSI;
  loop_ub = div_s32(&b_st, start - i, j);
  prob.set_size(&kc_emlrtRTEI, &st, 1, loop_ub + 1);
  for (start = 0; start <= loop_ub; start++) {
    prob[start] = pind_without_cus[i + j * start];
  }
  pind_without_cus.set_size(&kc_emlrtRTEI, &st, 1, prob.size(1));
  loop_ub = prob.size(1);
  for (i = 0; i < loop_ub; i++) {
    pind_without_cus[i] = prob[i];
  }
  //  逆转
  r.set_size(&lc_emlrtRTEI, &st, 1, pind_without_cus.size(1));
  loop_ub = pind_without_cus.size(1);
  for (i = 0; i < loop_ub; i++) {
    r[i] = (pind_without_cus[i] == 0.0);
  }
  b_st.site = &tc_emlrtRSI;
  coder::internal::nullAssignment(&b_st, pind_without_cus, r);
  //  除0
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static real_T ub_dfs(const emlrtStack *sp, const coder::array<real_T, 2U> &b_I,
                     const coder::array<real_T, 2U> &bar_J,
                     const coder::array<boolean_T, 2U> &location,
                     coder::array<real_T, 2U> &plan,
                     coder::array<real_T, 1U> &trans_cost,
                     const coder::array<real_T, 2U> &data_price,
                     const coder::array<real_T, 1U> &data_dmd,
                     const coder::array<real_T, 1U> &data_fix,
                     const coder::array<real_T, 1U> &q, real_T max_try)
{
  coder::array<real_T, 2U> best_r;
  coder::array<real_T, 2U> cus_mu;
  coder::array<real_T, 2U> fac;
  coder::array<real_T, 1U> b_data_fix;
  coder::array<int32_T, 2U> ii;
  coder::array<int32_T, 2U> r;
  coder::array<int32_T, 2U> r1;
  coder::array<boolean_T, 2U> b_location;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T cus_data[100];
  real_T lr_ub;
  real_T pi;
  real_T ub;
  int32_T b_cus_size[2];
  int32_T cus_size[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T end;
  int32_T i;
  int32_T j;
  int32_T loop_ub;
  int32_T ub_dfs_numThreads;
  boolean_T emlrtHadParallelError{false};
  b_st.prev = sp;
  b_st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // UB_DFS 上界DFS搜索
  if (data_price.size(0) < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, data_price.size(0), &ud_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (data_price.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, data_price.size(1), &vd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  pi = data_price[1];
  //  惩罚成本
  cus_mu.set_size(&id_emlrtRTEI, sp, 1, bar_J.size(1));
  loop_ub = bar_J.size(1);
  for (end = 0; end < loop_ub; end++) {
    cus_mu[end] = 0.0;
  }
  //  上界没有乘子
  loop_ub = b_I.size(1) - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  ub_dfs_numThreads =
      emlrtAllocRegionTLSs(sp->tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(ub_dfs_numThreads) private(                   \
    ii, b_location, fac, best_r, ub, cus_data, cus_size, d_st, b_i, b_loop_ub, \
    b_cus_size) firstprivate(st, c_st, emlrtHadParallelError)
  {
    try {

      st.prev = sp;
      st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      st.site = nullptr;
      c_st.prev = &st;
      c_st.tls = st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
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
        if (j + 1 > b_I.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_I.size(1), &ee_emlrtBCI,
                                        &st);
        }
        cus_data[0] = b_I[j];
        b_i = plan.size(0);
        if (j + 1 > b_i) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_i, &wd_emlrtBCI, &st);
        }
        b_loop_ub = plan.size(1);
        best_r.set_size(&ld_emlrtRTEI, &st, 1, b_loop_ub);
        for (b_i = 0; b_i < b_loop_ub; b_i++) {
          best_r[b_i] = plan[j + plan.size(0) * b_i];
        }
        //  当前最优路径
        b_i = trans_cost.size(0);
        if (j + 1 > b_i) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_i, &xd_emlrtBCI, &st);
        }
        //  当前上界
        if (j + 1 > data_dmd.size(0)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, data_dmd.size(0),
                                        &yd_emlrtBCI, &st);
        }
        //  客户的需求
        c_st.site = &uc_emlrtRSI;
        b_location.set_size(&md_emlrtRTEI, &c_st, 1, location.size(1));
        b_loop_ub = location.size(1);
        for (b_i = 0; b_i < b_loop_ub; b_i++) {
          b_location[b_i] = location[b_i];
        }
        d_st.site = &lc_emlrtRSI;
        coder::eml_find(&d_st, b_location, ii);
        fac.set_size(&nd_emlrtRTEI, &c_st, 1, ii.size(1));
        b_loop_ub = ii.size(1);
        for (b_i = 0; b_i < b_loop_ub; b_i++) {
          fac[b_i] = ii[b_i];
        }
        //  已经建设的设施
        ub = trans_cost[j];
        b_cus_size[0] = cus_size[0];
        b_cus_size[1] = cus_size[1];
        c_st.site = &vc_emlrtRSI;
        lb_dfs(&c_st, cus_data, b_cus_size, best_r, &ub, fac, data_dmd[j],
               data_price, max_try - 1.0, pi, q, cus_mu);
        //  深度优先搜索
        b_i = trans_cost.size(0);
        if (j + 1 > b_i) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_i, &fe_emlrtBCI, &st);
        }
        trans_cost[j] = ub;
        //  更新上界
        b_i = plan.size(0);
        if (j + 1 > b_i) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_i, &ae_emlrtBCI, &st);
        }
        b_loop_ub = plan.size(1);
        for (b_i = 0; b_i < b_loop_ub; b_i++) {
          plan[j + plan.size(0) * b_i] = 0.0;
        }
        if (best_r.size(1) < max_try + 1.0) {
          b_i = plan.size(0);
          if (j + 1 > b_i) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_i, &be_emlrtBCI, &st);
          }
          ub = (max_try + 1.0) - static_cast<real_T>(best_r.size(1));
          if (!(ub >= 0.0)) {
            emlrtNonNegativeCheckR2012b(ub, &ac_emlrtDCI, &st);
          }
          if (ub != static_cast<int32_T>(muDoubleScalarFloor(ub))) {
            emlrtIntegerCheckR2012b(ub, &yb_emlrtDCI, &st);
          }
          fac.set_size(&od_emlrtRTEI, &st, 1,
                       best_r.size(1) + static_cast<int32_T>(ub));
          b_loop_ub = best_r.size(1);
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            fac[b_i] = best_r[b_i];
          }
          b_loop_ub = static_cast<int32_T>(ub);
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            fac[b_i + best_r.size(1)] = 0.0;
          }
          b_cus_size[0] = 1;
          b_cus_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_cus_size[0], 2, fac.size(), 2,
                                        &i_emlrtECI, &st);
          b_loop_ub = fac.size(1);
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            plan[j + plan.size(0) * b_i] = fac[b_i];
          }
        } else {
          b_i = plan.size(0);
          if (j + 1 > b_i) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_i, &ce_emlrtBCI, &st);
          }
          b_cus_size[0] = 1;
          b_cus_size[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&b_cus_size[0], 2, best_r.size(), 2,
                                        &j_emlrtECI, &st);
          b_loop_ub = best_r.size(1);
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            plan[j + plan.size(0) * b_i] = best_r[b_i];
          }
          //  记录方案
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 4);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  end = location.size(1) - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (location[i]) {
      loop_ub++;
    }
  }
  r.set_size(&jd_emlrtRTEI, sp, 1, loop_ub);
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (location[i]) {
      r[loop_ub] = i + 1;
      loop_ub++;
    }
  }
  loop_ub = r.size(1);
  for (end = 0; end < loop_ub; end++) {
    if (r[end] > data_fix.size(0)) {
      emlrtDynamicBoundsCheckR2012b(r[end], 1, data_fix.size(0), &de_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  //  计算固定成本
  end = location.size(1) - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (location[i]) {
      loop_ub++;
    }
  }
  r1.set_size(&jd_emlrtRTEI, sp, 1, loop_ub);
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (location[i]) {
      r1[loop_ub] = i + 1;
      loop_ub++;
    }
  }
  b_data_fix.set_size(&kd_emlrtRTEI, sp, r1.size(1));
  loop_ub = r1.size(1);
  for (end = 0; end < loop_ub; end++) {
    b_data_fix[end] = data_fix[r1[end] - 1];
  }
  b_st.site = &wc_emlrtRSI;
  lr_ub = coder::sum(&b_st, trans_cost) + coder::sum(&b_st, b_data_fix);
  //  上界
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return lr_ub;
}

void b_ub_xy(const emlrtStack *sp,
             const coder::array<real_T, 2U> &lr_case_data_price,
             const coder::array<real_T, 1U> &lr_case_data_dmd,
             const coder::array<real_T, 1U> &lr_case_data_fix,
             const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
             const coder::array<real_T, 2U> &lr_case_bar_J,
             const coder::array<real_T, 2U> &lr_case_I,
             coder::array<boolean_T, 2U> &location, real_T *obj,
             coder::array<real_T, 2U> &plan)
{
  coder::array<real_T, 2U> b_I;
  coder::array<real_T, 2U> b_price_cus;
  coder::array<real_T, 2U> b_temp;
  coder::array<real_T, 2U> pind_without_cus;
  coder::array<real_T, 2U> price_cus;
  coder::array<real_T, 2U> price_cus_fac;
  coder::array<real_T, 2U> price_located;
  coder::array<real_T, 2U> temp;
  coder::array<real_T, 1U> fix_cost;
  coder::array<real_T, 1U> q_loc;
  coder::array<real_T, 1U> trans_cost;
  coder::array<int32_T, 2U> ii;
  coder::array<int32_T, 2U> r;
  coder::array<int32_T, 2U> r1;
  coder::array<int32_T, 2U> r2;
  coder::array<boolean_T, 2U> b_location;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T d;
  real_T trans_cost_cus;
  int32_T input_sizes[2];
  int32_T iv[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T b_ub_xy_numThreads;
  int32_T c_i;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  int32_T result;
  int32_T sizes_idx_0_tmp;
  int32_T trueCount;
  int8_T sizes_idx_0;
  boolean_T emlrtHadParallelError{false};
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // UB_YX求解模型的上界
  //  OBJ 返回原问题的最优目标函数
  //  plan 返回最优路径方案
  //  trans_cost 返回各路径的运输成本
  //  初始化
  //  提取
  b_I.set_size(&mc_emlrtRTEI, sp, 1, lr_case_I.size(1));
  loop_ub = lr_case_I.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_I[i] = lr_case_I[i];
  }
  trans_cost.set_size(&jb_emlrtRTEI, sp, lr_case_I.size(1));
  loop_ub = lr_case_I.size(1);
  for (i = 0; i < loop_ub; i++) {
    trans_cost[i] = 0.0;
  }
  //  记录每个客户的期望运输成本
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  ii.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      ii[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  fix_cost.set_size(&lb_emlrtRTEI, sp, ii.size(1));
  loop_ub = ii.size(1);
  for (i = 0; i < loop_ub; i++) {
    if (ii[i] > lr_case_data_fix.size(0)) {
      emlrtDynamicBoundsCheckR2012b(ii[i], 1, lr_case_data_fix.size(0),
                                    &hb_emlrtBCI, (emlrtConstCTX)sp);
    }
    fix_cost[i] = lr_case_data_fix[ii[i] - 1];
  }
  //  计算固定成本
  plan.set_size(&mb_emlrtRTEI, sp, lr_case_I.size(1), plan.size(1));
  if (!(lr_case_max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case_max_try + 1.0, &m_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(lr_case_max_try + 1.0));
  if (lr_case_max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case_max_try + 1.0, &l_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  plan.set_size(&mb_emlrtRTEI, sp, plan.size(0),
                static_cast<int32_T>(lr_case_max_try + 1.0));
  if (!(lr_case_max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case_max_try + 1.0, &o_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  if (lr_case_max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case_max_try + 1.0, &n_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = lr_case_I.size(1) * static_cast<int32_T>(lr_case_max_try + 1.0);
  for (i = 0; i < loop_ub; i++) {
    plan[i] = 0.0;
  }
  //  记录每个客户的方案
  if (location.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, location.size(1), &gb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  location[0] = true;
  //  虚拟设施指定是已经建设的
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  r.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      r[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  q_loc.set_size(&nb_emlrtRTEI, sp, r.size(1));
  loop_ub = r.size(1);
  for (i = 0; i < loop_ub; i++) {
    if (r[i] > lr_case_q.size(0)) {
      emlrtDynamicBoundsCheckR2012b(r[i], 1, lr_case_q.size(0), &ib_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    q_loc[i] = lr_case_q[r[i] - 1];
  }
  //  已建设施的损坏概率
  st.site = &fc_emlrtRSI;
  b_location.set_size(&ob_emlrtRTEI, &st, 1, location.size(1));
  loop_ub = location.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_location[i] = location[i];
  }
  b_st.site = &lc_emlrtRSI;
  coder::eml_find(&b_st, b_location, ii);
  //  已经建设的设施的索引
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  r1.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      r1[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  price_located.set_size(&pb_emlrtRTEI, sp, r1.size(1),
                         lr_case_data_price.size(1));
  loop_ub = lr_case_data_price.size(1);
  for (i = 0; i < loop_ub; i++) {
    trueCount = r1.size(1);
    for (i1 = 0; i1 < trueCount; i1++) {
      if (r1[i1] > lr_case_data_price.size(0)) {
        emlrtDynamicBoundsCheckR2012b(r1[i1], 1, lr_case_data_price.size(0),
                                      &jb_emlrtBCI, (emlrtConstCTX)sp);
      }
      price_located[i1 + price_located.size(0) * i] =
          lr_case_data_price[(r1[i1] + lr_case_data_price.size(0) * i) - 1];
    }
  }
  //  建设的节点之间的价格
  if (static_cast<uint32_T>(lr_case_bar_J.size(1)) + 1U >
      static_cast<uint32_T>(lr_case_data_price.size(0))) {
    i = 0;
    i1 = 0;
  } else {
    if ((static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                              1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                              1U) > lr_case_data_price.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                               1U),
          1, lr_case_data_price.size(0), &fb_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = lr_case_bar_J.size(1);
    if (lr_case_data_price.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(lr_case_data_price.size(0), 1,
                                    lr_case_data_price.size(0), &eb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = lr_case_data_price.size(0);
  }
  loop_ub = i1 - i;
  price_cus_fac.set_size(&qb_emlrtRTEI, sp, loop_ub,
                         lr_case_data_price.size(1));
  trueCount = lr_case_data_price.size(1);
  for (i1 = 0; i1 < trueCount; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      price_cus_fac[i2 + price_cus_fac.size(0) * i1] =
          lr_case_data_price[(i + i2) + lr_case_data_price.size(0) * i1];
    }
  }
  //  顾客和建设的节点之间的距离
  trueCount = lr_case_I.size(1) - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  b_ub_xy_numThreads =
      emlrtAllocRegionTLSs(sp->tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(b_ub_xy_numThreads) private(                  \
    price_cus, r2, b_price_cus, pind_without_cus, temp, trans_cost_cus, f_st,  \
    result, b_loop_ub, empty_non_axis_sizes, c_loop_ub, sizes_idx_0, i3,       \
    sizes_idx_0_tmp, i4, input_sizes)                                          \
    firstprivate(c_st, d_st, e_st, emlrtHadParallelError)
  {
    try {

      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = nullptr;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &d_st;
      e_st.tls = d_st.tls;
      f_st.prev = &e_st;
      f_st.tls = e_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (c_i = 0; c_i <= trueCount; c_i++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {

        if (c_i + 1 > b_I.size(1)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, b_I.size(1), &db_emlrtBCI,
                                        &c_st);
        }
        //  初始化客户相关变量
        if (c_i + 1 > lr_case_data_dmd.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, lr_case_data_dmd.size(0),
                                        &cb_emlrtBCI, &c_st);
        }
        //  节点需求
        d_st.site = &gc_emlrtRSI;
        if (c_i + 1 > price_cus_fac.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, price_cus_fac.size(0),
                                        &bb_emlrtBCI, &d_st);
        }
        e_st.site = &oc_emlrtRSI;
        if ((price_located.size(0) != 0) && (price_located.size(1) != 0)) {
          result = price_located.size(1);
        } else if (price_cus_fac.size(1) != 0) {
          result = price_cus_fac.size(1);
        } else {
          result = price_located.size(1);
        }
        f_st.site = &pc_emlrtRSI;
        if ((price_located.size(1) != result) &&
            ((price_located.size(0) != 0) && (price_located.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        b_loop_ub = price_cus_fac.size(1);
        if ((price_cus_fac.size(1) != result) && (price_cus_fac.size(1) != 0)) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        empty_non_axis_sizes = (result == 0);
        if (empty_non_axis_sizes ||
            ((price_located.size(0) != 0) && (price_located.size(1) != 0))) {
          c_loop_ub = price_located.size(0);
        } else {
          c_loop_ub = 0;
        }
        if (empty_non_axis_sizes || (price_cus_fac.size(1) != 0)) {
          sizes_idx_0 = 1;
        } else {
          sizes_idx_0 = 0;
        }
        temp.set_size(&vb_emlrtRTEI, &e_st, 1, price_cus_fac.size(1));
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          temp[i3] = price_cus_fac[c_i + price_cus_fac.size(0) * i3];
        }
        sizes_idx_0_tmp = sizes_idx_0;
        b_price_cus.set_size(&wb_emlrtRTEI, &e_st, c_loop_ub + sizes_idx_0,
                             result);
        for (i3 = 0; i3 < result; i3++) {
          for (i4 = 0; i4 < c_loop_ub; i4++) {
            b_price_cus[i4 + b_price_cus.size(0) * i3] =
                price_located[i4 + c_loop_ub * i3];
          }
        }
        for (i3 = 0; i3 < result; i3++) {
          for (i4 = 0; i4 < sizes_idx_0_tmp; i4++) {
            b_price_cus[c_loop_ub + b_price_cus.size(0) * i3] =
                temp[sizes_idx_0 * i3];
          }
        }
        //  价格矩阵去掉多余行
        result = location.size(1) - 1;
        sizes_idx_0_tmp = 0;
        for (b_loop_ub = 0; b_loop_ub <= result; b_loop_ub++) {
          if (location[b_loop_ub]) {
            sizes_idx_0_tmp++;
          }
        }
        r2.set_size(&kb_emlrtRTEI, &c_st, 1, sizes_idx_0_tmp);
        sizes_idx_0_tmp = 0;
        for (b_loop_ub = 0; b_loop_ub <= result; b_loop_ub++) {
          if (location[b_loop_ub]) {
            r2[sizes_idx_0_tmp] = b_loop_ub + 1;
            sizes_idx_0_tmp++;
          }
        }
        sizes_idx_0_tmp = b_price_cus.size(0);
        b_loop_ub = r2.size(1);
        price_cus.set_size(&xb_emlrtRTEI, &c_st, b_price_cus.size(0),
                           r2.size(1));
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          for (i4 = 0; i4 < sizes_idx_0_tmp; i4++) {
            if ((r2[i3] < 1) || (r2[i3] > b_price_cus.size(1))) {
              emlrtDynamicBoundsCheckR2012b(r2[i3], 1, b_price_cus.size(1),
                                            &lb_emlrtBCI, &c_st);
            }
            price_cus[i4 + price_cus.size(0) * i3] =
                b_price_cus[i4 + b_price_cus.size(0) * (r2[i3] - 1)];
          }
        }
        b_price_cus.set_size(&yb_emlrtRTEI, &c_st, price_cus.size(0),
                             price_cus.size(1));
        b_loop_ub = price_cus.size(0) * price_cus.size(1);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          b_price_cus[i3] = price_cus[i3];
        }
        //  价格矩阵去掉多余列
        //  dijkstra
        d_st.site = &hc_emlrtRSI;
        mod_dijkstra(&d_st, b_price_cus, q_loc, lr_case_data_dmd[c_i],
                     lr_case_max_try, pind_without_cus, &trans_cost_cus);
        //  记录
        if (c_i + 1 > trans_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, trans_cost.size(0),
                                        &mb_emlrtBCI, &c_st);
        }
        trans_cost[c_i] = trans_cost_cus;
        b_loop_ub = pind_without_cus.size(1);
        temp.set_size(&ac_emlrtRTEI, &c_st, 1, pind_without_cus.size(1) + 1);
        temp[0] = b_I[c_i];
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          temp[i3 + 1] = pind_without_cus[i3];
        }
        if (temp.size(1) < lr_case_max_try + 1.0) {
          if (c_i + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, plan.size(0),
                                          &ab_emlrtBCI, &c_st);
          }
          trans_cost_cus =
              (lr_case_max_try + 1.0) - static_cast<real_T>(temp.size(1));
          if (!(trans_cost_cus >= 0.0)) {
            emlrtNonNegativeCheckR2012b(trans_cost_cus, &t_emlrtDCI, &c_st);
          }
          if (trans_cost_cus !=
              static_cast<int32_T>(muDoubleScalarFloor(trans_cost_cus))) {
            emlrtIntegerCheckR2012b(trans_cost_cus, &s_emlrtDCI, &c_st);
          }
          pind_without_cus.set_size(&bc_emlrtRTEI, &c_st, 1,
                                    temp.size(1) +
                                        static_cast<int32_T>(trans_cost_cus));
          b_loop_ub = temp.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            pind_without_cus[i3] = temp[i3];
          }
          b_loop_ub = static_cast<int32_T>(trans_cost_cus);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            pind_without_cus[i3 + temp.size(1)] = 0.0;
          }
          input_sizes[0] = 1;
          input_sizes[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2,
                                        pind_without_cus.size(), 2, &f_emlrtECI,
                                        &c_st);
          b_loop_ub = pind_without_cus.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            plan[c_i + plan.size(0) * i3] = pind_without_cus[i3];
          }
        } else {
          if (c_i + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, plan.size(0), &y_emlrtBCI,
                                          &c_st);
          }
          input_sizes[0] = 1;
          input_sizes[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, temp.size(), 2,
                                        &e_emlrtECI, &c_st);
          b_loop_ub = temp.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            plan[c_i + plan.size(0) * i3] = temp[i3];
          }
          //  记录方案
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&c_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&c_st, 5);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  i = plan.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > plan.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &x_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = plan.size(1);
    b_I.set_size(&rb_emlrtRTEI, sp, 1, plan.size(1));
    b_location.set_size(&sb_emlrtRTEI, sp, 1, plan.size(1));
    for (i1 = 0; i1 < loop_ub; i1++) {
      d = plan[b_i + plan.size(0) * i1];
      b_I[i1] = d;
      b_location[i1] = (d == 0.0);
    }
    st.site = &ic_emlrtRSI;
    coder::internal::nullAssignment(&st, b_I, b_location);
    if (b_I.size(1) < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = 1;
      i2 = b_I.size(1);
    }
    if (b_I.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b_I.size(1), &w_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = i2 - i1;
    b_temp.set_size(&tb_emlrtRTEI, sp, 1, loop_ub + 1);
    b_temp[0] = b_I[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      d = b_I[i1 + i2];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &p_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > ii.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, ii.size(1),
                                      &kb_emlrtBCI, (emlrtConstCTX)sp);
      }
      b_temp[i2 + 1] = ii[static_cast<int32_T>(d) - 1];
    }
    if (b_temp.size(1) < lr_case_max_try + 1.0) {
      if (b_i + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d = (lr_case_max_try + 1.0) - static_cast<real_T>(b_temp.size(1));
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &r_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtConstCTX)sp);
      }
      b_I.set_size(&ub_emlrtRTEI, sp, 1,
                   b_temp.size(1) + static_cast<int32_T>(d));
      loop_ub = b_temp.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_I[i1] = b_temp[i1];
      }
      loop_ub = static_cast<int32_T>(d);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_I[i1 + b_temp.size(1)] = 0.0;
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_I.size(), 2, &d_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = b_I.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[b_i + plan.size(0) * i1] = b_I[i1];
      }
    } else {
      if (b_i + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &u_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_temp.size(), 2, &c_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = b_temp.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[b_i + plan.size(0) * i1] = b_temp[i1];
      }
      //  记录方案
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  st.site = &jc_emlrtRSI;
  *obj = coder::sum(&st, trans_cost) + coder::sum(&st, fix_cost);
  //  目标函数值
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_ub_xy(const emlrtStack *sp,
             const coder::array<real_T, 2U> &lr_case_data_price,
             const coder::array<real_T, 1U> &lr_case_data_dmd,
             const coder::array<real_T, 1U> &lr_case_data_fix,
             const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
             const coder::array<real_T, 2U> &lr_case_bar_J,
             const coder::array<real_T, 2U> &lr_case_I,
             coder::array<boolean_T, 2U> &location, real_T *obj,
             coder::array<real_T, 2U> &plan)
{
  coder::array<real_T, 2U> b_price_cus;
  coder::array<real_T, 2U> b_temp;
  coder::array<real_T, 2U> pind_with_cus;
  coder::array<real_T, 2U> pind_without_cus;
  coder::array<real_T, 2U> price_cus;
  coder::array<real_T, 2U> price_cus_fac;
  coder::array<real_T, 2U> price_located;
  coder::array<real_T, 2U> temp;
  coder::array<real_T, 1U> fix_cost;
  coder::array<real_T, 1U> q_loc;
  coder::array<real_T, 1U> trans_cost;
  coder::array<int32_T, 2U> ii;
  coder::array<int32_T, 2U> r;
  coder::array<int32_T, 2U> r1;
  coder::array<int32_T, 2U> r2;
  coder::array<boolean_T, 2U> b_location;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T d;
  real_T trans_cost_cus;
  int32_T input_sizes[2];
  int32_T iv[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_i;
  int32_T c_loop_ub;
  int32_T c_ub_xy_numThreads;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  int32_T result;
  int32_T sizes_idx_0_tmp;
  int32_T trueCount;
  int8_T sizes_idx_0;
  boolean_T emlrtHadParallelError{false};
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // UB_YX求解模型的上界
  //  OBJ 返回原问题的最优目标函数
  //  plan 返回最优路径方案
  //  trans_cost 返回各路径的运输成本
  //  初始化
  //  提取
  trans_cost.set_size(&jb_emlrtRTEI, sp, lr_case_I.size(1));
  loop_ub = lr_case_I.size(1);
  for (i = 0; i < loop_ub; i++) {
    trans_cost[i] = 0.0;
  }
  //  记录每个客户的期望运输成本
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  ii.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      ii[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  fix_cost.set_size(&lb_emlrtRTEI, sp, ii.size(1));
  loop_ub = ii.size(1);
  for (i = 0; i < loop_ub; i++) {
    if (ii[i] > lr_case_data_fix.size(0)) {
      emlrtDynamicBoundsCheckR2012b(ii[i], 1, lr_case_data_fix.size(0),
                                    &hb_emlrtBCI, (emlrtConstCTX)sp);
    }
    fix_cost[i] = lr_case_data_fix[ii[i] - 1];
  }
  //  计算固定成本
  plan.set_size(&mb_emlrtRTEI, sp, lr_case_I.size(1), plan.size(1));
  if (!(lr_case_max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case_max_try + 1.0, &m_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(lr_case_max_try + 1.0));
  if (lr_case_max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case_max_try + 1.0, &l_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  plan.set_size(&mb_emlrtRTEI, sp, plan.size(0),
                static_cast<int32_T>(lr_case_max_try + 1.0));
  if (!(lr_case_max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case_max_try + 1.0, &o_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  if (lr_case_max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case_max_try + 1.0, &n_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = lr_case_I.size(1) * static_cast<int32_T>(lr_case_max_try + 1.0);
  for (i = 0; i < loop_ub; i++) {
    plan[i] = 0.0;
  }
  //  记录每个客户的方案
  if (location.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, location.size(1), &gb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  location[0] = true;
  //  虚拟设施指定是已经建设的
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  r.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      r[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  q_loc.set_size(&nb_emlrtRTEI, sp, r.size(1));
  loop_ub = r.size(1);
  for (i = 0; i < loop_ub; i++) {
    if (r[i] > lr_case_q.size(0)) {
      emlrtDynamicBoundsCheckR2012b(r[i], 1, lr_case_q.size(0), &ib_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    q_loc[i] = lr_case_q[r[i] - 1];
  }
  //  已建设施的损坏概率
  st.site = &fc_emlrtRSI;
  b_location.set_size(&ob_emlrtRTEI, &st, 1, location.size(1));
  loop_ub = location.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_location[i] = location[i];
  }
  b_st.site = &lc_emlrtRSI;
  coder::eml_find(&b_st, b_location, ii);
  //  已经建设的设施的索引
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  r1.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      r1[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  price_located.set_size(&pb_emlrtRTEI, sp, r1.size(1),
                         lr_case_data_price.size(1));
  loop_ub = lr_case_data_price.size(1);
  for (i = 0; i < loop_ub; i++) {
    trueCount = r1.size(1);
    for (i1 = 0; i1 < trueCount; i1++) {
      if (r1[i1] > lr_case_data_price.size(0)) {
        emlrtDynamicBoundsCheckR2012b(r1[i1], 1, lr_case_data_price.size(0),
                                      &jb_emlrtBCI, (emlrtConstCTX)sp);
      }
      price_located[i1 + price_located.size(0) * i] =
          lr_case_data_price[(r1[i1] + lr_case_data_price.size(0) * i) - 1];
    }
  }
  //  建设的节点之间的价格
  if (static_cast<uint32_T>(lr_case_bar_J.size(1)) + 1U >
      static_cast<uint32_T>(lr_case_data_price.size(0))) {
    i = 0;
    i1 = 0;
  } else {
    if ((static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                              1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                              1U) > lr_case_data_price.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                               1U),
          1, lr_case_data_price.size(0), &fb_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = lr_case_bar_J.size(1);
    if (lr_case_data_price.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(lr_case_data_price.size(0), 1,
                                    lr_case_data_price.size(0), &eb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = lr_case_data_price.size(0);
  }
  loop_ub = i1 - i;
  price_cus_fac.set_size(&qb_emlrtRTEI, sp, loop_ub,
                         lr_case_data_price.size(1));
  trueCount = lr_case_data_price.size(1);
  for (i1 = 0; i1 < trueCount; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      price_cus_fac[i2 + price_cus_fac.size(0) * i1] =
          lr_case_data_price[(i + i2) + lr_case_data_price.size(0) * i1];
    }
  }
  //  顾客和建设的节点之间的距离
  trueCount = lr_case_I.size(1) - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  c_ub_xy_numThreads =
      emlrtAllocRegionTLSs(sp->tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(c_ub_xy_numThreads) private(                  \
    price_cus, r2, b_price_cus, pind_without_cus, temp, trans_cost_cus, f_st,  \
    result, b_loop_ub, empty_non_axis_sizes, c_loop_ub, sizes_idx_0, i3,       \
    sizes_idx_0_tmp, i4, input_sizes)                                          \
    firstprivate(c_st, d_st, e_st, emlrtHadParallelError)
  {
    try {

      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = nullptr;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &d_st;
      e_st.tls = d_st.tls;
      f_st.prev = &e_st;
      f_st.tls = e_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (c_i = 0; c_i <= trueCount; c_i++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {

        if (c_i + 1 > lr_case_I.size(1)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, lr_case_I.size(1),
                                        &db_emlrtBCI, &c_st);
        }
        //  初始化客户相关变量
        if (c_i + 1 > lr_case_data_dmd.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, lr_case_data_dmd.size(0),
                                        &cb_emlrtBCI, &c_st);
        }
        //  节点需求
        d_st.site = &gc_emlrtRSI;
        if (c_i + 1 > price_cus_fac.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, price_cus_fac.size(0),
                                        &bb_emlrtBCI, &d_st);
        }
        e_st.site = &oc_emlrtRSI;
        if ((price_located.size(0) != 0) && (price_located.size(1) != 0)) {
          result = price_located.size(1);
        } else if (price_cus_fac.size(1) != 0) {
          result = price_cus_fac.size(1);
        } else {
          result = price_located.size(1);
        }
        f_st.site = &pc_emlrtRSI;
        if ((price_located.size(1) != result) &&
            ((price_located.size(0) != 0) && (price_located.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        b_loop_ub = price_cus_fac.size(1);
        if ((price_cus_fac.size(1) != result) && (price_cus_fac.size(1) != 0)) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        empty_non_axis_sizes = (result == 0);
        if (empty_non_axis_sizes ||
            ((price_located.size(0) != 0) && (price_located.size(1) != 0))) {
          c_loop_ub = price_located.size(0);
        } else {
          c_loop_ub = 0;
        }
        if (empty_non_axis_sizes || (price_cus_fac.size(1) != 0)) {
          sizes_idx_0 = 1;
        } else {
          sizes_idx_0 = 0;
        }
        pind_without_cus.set_size(&vb_emlrtRTEI, &e_st, 1,
                                  price_cus_fac.size(1));
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          pind_without_cus[i3] =
              price_cus_fac[c_i + price_cus_fac.size(0) * i3];
        }
        sizes_idx_0_tmp = sizes_idx_0;
        b_price_cus.set_size(&wb_emlrtRTEI, &e_st, c_loop_ub + sizes_idx_0,
                             result);
        for (i3 = 0; i3 < result; i3++) {
          for (i4 = 0; i4 < c_loop_ub; i4++) {
            b_price_cus[i4 + b_price_cus.size(0) * i3] =
                price_located[i4 + c_loop_ub * i3];
          }
        }
        for (i3 = 0; i3 < result; i3++) {
          for (i4 = 0; i4 < sizes_idx_0_tmp; i4++) {
            b_price_cus[c_loop_ub + b_price_cus.size(0) * i3] =
                pind_without_cus[sizes_idx_0 * i3];
          }
        }
        //  价格矩阵去掉多余行
        result = location.size(1) - 1;
        sizes_idx_0_tmp = 0;
        for (b_loop_ub = 0; b_loop_ub <= result; b_loop_ub++) {
          if (location[b_loop_ub]) {
            sizes_idx_0_tmp++;
          }
        }
        r2.set_size(&kb_emlrtRTEI, &c_st, 1, sizes_idx_0_tmp);
        sizes_idx_0_tmp = 0;
        for (b_loop_ub = 0; b_loop_ub <= result; b_loop_ub++) {
          if (location[b_loop_ub]) {
            r2[sizes_idx_0_tmp] = b_loop_ub + 1;
            sizes_idx_0_tmp++;
          }
        }
        sizes_idx_0_tmp = b_price_cus.size(0);
        b_loop_ub = r2.size(1);
        price_cus.set_size(&xb_emlrtRTEI, &c_st, b_price_cus.size(0),
                           r2.size(1));
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          for (i4 = 0; i4 < sizes_idx_0_tmp; i4++) {
            if ((r2[i3] < 1) || (r2[i3] > b_price_cus.size(1))) {
              emlrtDynamicBoundsCheckR2012b(r2[i3], 1, b_price_cus.size(1),
                                            &lb_emlrtBCI, &c_st);
            }
            price_cus[i4 + price_cus.size(0) * i3] =
                b_price_cus[i4 + b_price_cus.size(0) * (r2[i3] - 1)];
          }
        }
        b_price_cus.set_size(&yb_emlrtRTEI, &c_st, price_cus.size(0),
                             price_cus.size(1));
        b_loop_ub = price_cus.size(0) * price_cus.size(1);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          b_price_cus[i3] = price_cus[i3];
        }
        //  价格矩阵去掉多余列
        //  dijkstra
        d_st.site = &hc_emlrtRSI;
        mod_dijkstra(&d_st, b_price_cus, q_loc, lr_case_data_dmd[c_i],
                     lr_case_max_try, pind_without_cus, &trans_cost_cus);
        //  记录
        if (c_i + 1 > trans_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, trans_cost.size(0),
                                        &mb_emlrtBCI, &c_st);
        }
        trans_cost[c_i] = trans_cost_cus;
        temp.set_size(&ac_emlrtRTEI, &c_st, 1, pind_without_cus.size(1) + 1);
        temp[0] = lr_case_I[c_i];
        b_loop_ub = pind_without_cus.size(1);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          temp[i3 + 1] = pind_without_cus[i3];
        }
        if (temp.size(1) < lr_case_max_try + 1.0) {
          if (c_i + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, plan.size(0),
                                          &ab_emlrtBCI, &c_st);
          }
          trans_cost_cus =
              (lr_case_max_try + 1.0) - static_cast<real_T>(temp.size(1));
          if (!(trans_cost_cus >= 0.0)) {
            emlrtNonNegativeCheckR2012b(trans_cost_cus, &t_emlrtDCI, &c_st);
          }
          if (trans_cost_cus !=
              static_cast<int32_T>(muDoubleScalarFloor(trans_cost_cus))) {
            emlrtIntegerCheckR2012b(trans_cost_cus, &s_emlrtDCI, &c_st);
          }
          pind_without_cus.set_size(&bc_emlrtRTEI, &c_st, 1,
                                    temp.size(1) +
                                        static_cast<int32_T>(trans_cost_cus));
          b_loop_ub = temp.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            pind_without_cus[i3] = temp[i3];
          }
          b_loop_ub = static_cast<int32_T>(trans_cost_cus);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            pind_without_cus[i3 + temp.size(1)] = 0.0;
          }
          input_sizes[0] = 1;
          input_sizes[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2,
                                        pind_without_cus.size(), 2, &f_emlrtECI,
                                        &c_st);
          b_loop_ub = pind_without_cus.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            plan[c_i + plan.size(0) * i3] = pind_without_cus[i3];
          }
        } else {
          if (c_i + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, plan.size(0), &y_emlrtBCI,
                                          &c_st);
          }
          input_sizes[0] = 1;
          input_sizes[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, temp.size(), 2,
                                        &e_emlrtECI, &c_st);
          b_loop_ub = temp.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            plan[c_i + plan.size(0) * i3] = temp[i3];
          }
          //  记录方案
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&c_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&c_st, 5);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  i = plan.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > plan.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &x_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = plan.size(1);
    pind_with_cus.set_size(&rb_emlrtRTEI, sp, 1, plan.size(1));
    b_location.set_size(&sb_emlrtRTEI, sp, 1, plan.size(1));
    for (i1 = 0; i1 < loop_ub; i1++) {
      d = plan[b_i + plan.size(0) * i1];
      pind_with_cus[i1] = d;
      b_location[i1] = (d == 0.0);
    }
    st.site = &ic_emlrtRSI;
    coder::internal::nullAssignment(&st, pind_with_cus, b_location);
    if (pind_with_cus.size(1) < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = 1;
      i2 = pind_with_cus.size(1);
    }
    if (pind_with_cus.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, pind_with_cus.size(1), &w_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = i2 - i1;
    b_temp.set_size(&tb_emlrtRTEI, sp, 1, loop_ub + 1);
    b_temp[0] = pind_with_cus[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      d = pind_with_cus[i1 + i2];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &p_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > ii.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, ii.size(1),
                                      &kb_emlrtBCI, (emlrtConstCTX)sp);
      }
      b_temp[i2 + 1] = ii[static_cast<int32_T>(d) - 1];
    }
    if (b_temp.size(1) < lr_case_max_try + 1.0) {
      if (b_i + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d = (lr_case_max_try + 1.0) - static_cast<real_T>(b_temp.size(1));
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &r_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtConstCTX)sp);
      }
      pind_with_cus.set_size(&ub_emlrtRTEI, sp, 1,
                             b_temp.size(1) + static_cast<int32_T>(d));
      loop_ub = b_temp.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        pind_with_cus[i1] = b_temp[i1];
      }
      loop_ub = static_cast<int32_T>(d);
      for (i1 = 0; i1 < loop_ub; i1++) {
        pind_with_cus[i1 + b_temp.size(1)] = 0.0;
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, pind_with_cus.size(), 2,
                                    &d_emlrtECI, (emlrtCTX)sp);
      loop_ub = pind_with_cus.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[b_i + plan.size(0) * i1] = pind_with_cus[i1];
      }
    } else {
      if (b_i + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &u_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_temp.size(), 2, &c_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = b_temp.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[b_i + plan.size(0) * i1] = b_temp[i1];
      }
      //  记录方案
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  st.site = &jc_emlrtRSI;
  coder::sum(&st, trans_cost);
  st.site = &jc_emlrtRSI;
  coder::sum(&st, fix_cost);
  //  目标函数值
  //  快速模式不启动dfs
  st.site = &kc_emlrtRSI;
  *obj = ub_dfs(&st, lr_case_I, lr_case_bar_J, location, plan, trans_cost,
                lr_case_data_price, lr_case_data_dmd, lr_case_data_fix,
                lr_case_q, lr_case_max_try);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void ub_xy(const emlrtStack *sp,
           const coder::array<real_T, 2U> &lr_case_data_price,
           const coder::array<real_T, 1U> &lr_case_data_dmd,
           const coder::array<real_T, 1U> &lr_case_data_fix,
           const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
           const coder::array<real_T, 2U> &lr_case_bar_J,
           const coder::array<real_T, 2U> &lr_case_I,
           coder::array<boolean_T, 2U> &location, boolean_T flag_fast,
           real_T *obj, coder::array<real_T, 2U> &plan,
           coder::array<real_T, 1U> &trans_cost)
{
  coder::array<real_T, 2U> b_price_cus;
  coder::array<real_T, 2U> b_temp;
  coder::array<real_T, 2U> pind_with_cus;
  coder::array<real_T, 2U> pind_without_cus;
  coder::array<real_T, 2U> price_cus;
  coder::array<real_T, 2U> price_cus_fac;
  coder::array<real_T, 2U> price_located;
  coder::array<real_T, 2U> temp;
  coder::array<real_T, 1U> fix_cost;
  coder::array<real_T, 1U> q_loc;
  coder::array<int32_T, 2U> ii;
  coder::array<int32_T, 2U> r;
  coder::array<int32_T, 2U> r1;
  coder::array<int32_T, 2U> r2;
  coder::array<boolean_T, 2U> b_location;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T d;
  real_T trans_cost_cus;
  int32_T input_sizes[2];
  int32_T iv[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_i;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  int32_T result;
  int32_T sizes_idx_0_tmp;
  int32_T trueCount;
  int32_T ub_xy_numThreads;
  int8_T sizes_idx_0;
  boolean_T emlrtHadParallelError{false};
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // UB_YX求解模型的上界
  //  OBJ 返回原问题的最优目标函数
  //  plan 返回最优路径方案
  //  trans_cost 返回各路径的运输成本
  //  初始化
  //  提取
  trans_cost.set_size(&jb_emlrtRTEI, sp, lr_case_I.size(1));
  loop_ub = lr_case_I.size(1);
  for (i = 0; i < loop_ub; i++) {
    trans_cost[i] = 0.0;
  }
  //  记录每个客户的期望运输成本
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  ii.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      ii[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  fix_cost.set_size(&lb_emlrtRTEI, sp, ii.size(1));
  loop_ub = ii.size(1);
  for (i = 0; i < loop_ub; i++) {
    if (ii[i] > lr_case_data_fix.size(0)) {
      emlrtDynamicBoundsCheckR2012b(ii[i], 1, lr_case_data_fix.size(0),
                                    &hb_emlrtBCI, (emlrtConstCTX)sp);
    }
    fix_cost[i] = lr_case_data_fix[ii[i] - 1];
  }
  //  计算固定成本
  plan.set_size(&mb_emlrtRTEI, sp, lr_case_I.size(1), plan.size(1));
  if (!(lr_case_max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case_max_try + 1.0, &m_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(lr_case_max_try + 1.0));
  if (lr_case_max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case_max_try + 1.0, &l_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  plan.set_size(&mb_emlrtRTEI, sp, plan.size(0),
                static_cast<int32_T>(lr_case_max_try + 1.0));
  if (!(lr_case_max_try + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lr_case_max_try + 1.0, &o_emlrtDCI,
                                (emlrtConstCTX)sp);
  }
  if (lr_case_max_try + 1.0 != d) {
    emlrtIntegerCheckR2012b(lr_case_max_try + 1.0, &n_emlrtDCI,
                            (emlrtConstCTX)sp);
  }
  loop_ub = lr_case_I.size(1) * static_cast<int32_T>(lr_case_max_try + 1.0);
  for (i = 0; i < loop_ub; i++) {
    plan[i] = 0.0;
  }
  //  记录每个客户的方案
  if (location.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, location.size(1), &gb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  location[0] = true;
  //  虚拟设施指定是已经建设的
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  r.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      r[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  q_loc.set_size(&nb_emlrtRTEI, sp, r.size(1));
  loop_ub = r.size(1);
  for (i = 0; i < loop_ub; i++) {
    if (r[i] > lr_case_q.size(0)) {
      emlrtDynamicBoundsCheckR2012b(r[i], 1, lr_case_q.size(0), &ib_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    q_loc[i] = lr_case_q[r[i] - 1];
  }
  //  已建设施的损坏概率
  st.site = &fc_emlrtRSI;
  b_location.set_size(&ob_emlrtRTEI, &st, 1, location.size(1));
  loop_ub = location.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_location[i] = location[i];
  }
  b_st.site = &lc_emlrtRSI;
  coder::eml_find(&b_st, b_location, ii);
  //  已经建设的设施的索引
  loop_ub = location.size(1) - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      trueCount++;
    }
  }
  r1.set_size(&kb_emlrtRTEI, sp, 1, trueCount);
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (location[b_i]) {
      r1[trueCount] = b_i + 1;
      trueCount++;
    }
  }
  price_located.set_size(&pb_emlrtRTEI, sp, r1.size(1),
                         lr_case_data_price.size(1));
  loop_ub = lr_case_data_price.size(1);
  for (i = 0; i < loop_ub; i++) {
    trueCount = r1.size(1);
    for (i1 = 0; i1 < trueCount; i1++) {
      if (r1[i1] > lr_case_data_price.size(0)) {
        emlrtDynamicBoundsCheckR2012b(r1[i1], 1, lr_case_data_price.size(0),
                                      &jb_emlrtBCI, (emlrtConstCTX)sp);
      }
      price_located[i1 + price_located.size(0) * i] =
          lr_case_data_price[(r1[i1] + lr_case_data_price.size(0) * i) - 1];
    }
  }
  //  建设的节点之间的价格
  if (static_cast<uint32_T>(lr_case_bar_J.size(1)) + 1U >
      static_cast<uint32_T>(lr_case_data_price.size(0))) {
    i = 0;
    i1 = 0;
  } else {
    if ((static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                              1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                              1U) > lr_case_data_price.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(lr_case_bar_J.size(1)) +
                               1U),
          1, lr_case_data_price.size(0), &fb_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = lr_case_bar_J.size(1);
    if (lr_case_data_price.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(lr_case_data_price.size(0), 1,
                                    lr_case_data_price.size(0), &eb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = lr_case_data_price.size(0);
  }
  loop_ub = i1 - i;
  price_cus_fac.set_size(&qb_emlrtRTEI, sp, loop_ub,
                         lr_case_data_price.size(1));
  trueCount = lr_case_data_price.size(1);
  for (i1 = 0; i1 < trueCount; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      price_cus_fac[i2 + price_cus_fac.size(0) * i1] =
          lr_case_data_price[(i + i2) + lr_case_data_price.size(0) * i1];
    }
  }
  //  顾客和建设的节点之间的距离
  trueCount = lr_case_I.size(1) - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp,
                           static_cast<boolean_T>(omp_in_parallel()));
  ub_xy_numThreads =
      emlrtAllocRegionTLSs(sp->tls, static_cast<boolean_T>(omp_in_parallel()),
                           omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(ub_xy_numThreads) private(                    \
    price_cus, r2, b_price_cus, pind_without_cus, temp, trans_cost_cus, f_st,  \
    result, b_loop_ub, empty_non_axis_sizes, c_loop_ub, sizes_idx_0, i3,       \
    sizes_idx_0_tmp, i4, input_sizes)                                          \
    firstprivate(c_st, d_st, e_st, emlrtHadParallelError)
  {
    try {

      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = nullptr;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &d_st;
      e_st.tls = d_st.tls;
      f_st.prev = &e_st;
      f_st.tls = e_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (c_i = 0; c_i <= trueCount; c_i++) {
      if (emlrtHadParallelError) {
        continue;
      }
      try {

        if (c_i + 1 > lr_case_I.size(1)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, lr_case_I.size(1),
                                        &db_emlrtBCI, &c_st);
        }
        //  初始化客户相关变量
        if (c_i + 1 > lr_case_data_dmd.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, lr_case_data_dmd.size(0),
                                        &cb_emlrtBCI, &c_st);
        }
        //  节点需求
        d_st.site = &gc_emlrtRSI;
        if (c_i + 1 > price_cus_fac.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, price_cus_fac.size(0),
                                        &bb_emlrtBCI, &d_st);
        }
        e_st.site = &oc_emlrtRSI;
        if ((price_located.size(0) != 0) && (price_located.size(1) != 0)) {
          result = price_located.size(1);
        } else if (price_cus_fac.size(1) != 0) {
          result = price_cus_fac.size(1);
        } else {
          result = price_located.size(1);
        }
        f_st.site = &pc_emlrtRSI;
        if ((price_located.size(1) != result) &&
            ((price_located.size(0) != 0) && (price_located.size(1) != 0))) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        b_loop_ub = price_cus_fac.size(1);
        if ((price_cus_fac.size(1) != result) && (price_cus_fac.size(1) != 0)) {
          emlrtErrorWithMessageIdR2018a(
              &f_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        empty_non_axis_sizes = (result == 0);
        if (empty_non_axis_sizes ||
            ((price_located.size(0) != 0) && (price_located.size(1) != 0))) {
          c_loop_ub = price_located.size(0);
        } else {
          c_loop_ub = 0;
        }
        if (empty_non_axis_sizes || (price_cus_fac.size(1) != 0)) {
          sizes_idx_0 = 1;
        } else {
          sizes_idx_0 = 0;
        }
        pind_without_cus.set_size(&vb_emlrtRTEI, &e_st, 1,
                                  price_cus_fac.size(1));
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          pind_without_cus[i3] =
              price_cus_fac[c_i + price_cus_fac.size(0) * i3];
        }
        sizes_idx_0_tmp = sizes_idx_0;
        b_price_cus.set_size(&wb_emlrtRTEI, &e_st, c_loop_ub + sizes_idx_0,
                             result);
        for (i3 = 0; i3 < result; i3++) {
          for (i4 = 0; i4 < c_loop_ub; i4++) {
            b_price_cus[i4 + b_price_cus.size(0) * i3] =
                price_located[i4 + c_loop_ub * i3];
          }
        }
        for (i3 = 0; i3 < result; i3++) {
          for (i4 = 0; i4 < sizes_idx_0_tmp; i4++) {
            b_price_cus[c_loop_ub + b_price_cus.size(0) * i3] =
                pind_without_cus[sizes_idx_0 * i3];
          }
        }
        //  价格矩阵去掉多余行
        result = location.size(1) - 1;
        sizes_idx_0_tmp = 0;
        for (b_loop_ub = 0; b_loop_ub <= result; b_loop_ub++) {
          if (location[b_loop_ub]) {
            sizes_idx_0_tmp++;
          }
        }
        r2.set_size(&kb_emlrtRTEI, &c_st, 1, sizes_idx_0_tmp);
        sizes_idx_0_tmp = 0;
        for (b_loop_ub = 0; b_loop_ub <= result; b_loop_ub++) {
          if (location[b_loop_ub]) {
            r2[sizes_idx_0_tmp] = b_loop_ub + 1;
            sizes_idx_0_tmp++;
          }
        }
        sizes_idx_0_tmp = b_price_cus.size(0);
        b_loop_ub = r2.size(1);
        price_cus.set_size(&xb_emlrtRTEI, &c_st, b_price_cus.size(0),
                           r2.size(1));
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          for (i4 = 0; i4 < sizes_idx_0_tmp; i4++) {
            if ((r2[i3] < 1) || (r2[i3] > b_price_cus.size(1))) {
              emlrtDynamicBoundsCheckR2012b(r2[i3], 1, b_price_cus.size(1),
                                            &lb_emlrtBCI, &c_st);
            }
            price_cus[i4 + price_cus.size(0) * i3] =
                b_price_cus[i4 + b_price_cus.size(0) * (r2[i3] - 1)];
          }
        }
        b_price_cus.set_size(&yb_emlrtRTEI, &c_st, price_cus.size(0),
                             price_cus.size(1));
        b_loop_ub = price_cus.size(0) * price_cus.size(1);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          b_price_cus[i3] = price_cus[i3];
        }
        //  价格矩阵去掉多余列
        //  dijkstra
        d_st.site = &hc_emlrtRSI;
        mod_dijkstra(&d_st, b_price_cus, q_loc, lr_case_data_dmd[c_i],
                     lr_case_max_try, pind_without_cus, &trans_cost_cus);
        //  记录
        if (c_i + 1 > trans_cost.size(0)) {
          emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, trans_cost.size(0),
                                        &mb_emlrtBCI, &c_st);
        }
        trans_cost[c_i] = trans_cost_cus;
        temp.set_size(&ac_emlrtRTEI, &c_st, 1, pind_without_cus.size(1) + 1);
        temp[0] = lr_case_I[c_i];
        b_loop_ub = pind_without_cus.size(1);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          temp[i3 + 1] = pind_without_cus[i3];
        }
        if (temp.size(1) < lr_case_max_try + 1.0) {
          if (c_i + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, plan.size(0),
                                          &ab_emlrtBCI, &c_st);
          }
          trans_cost_cus =
              (lr_case_max_try + 1.0) - static_cast<real_T>(temp.size(1));
          if (!(trans_cost_cus >= 0.0)) {
            emlrtNonNegativeCheckR2012b(trans_cost_cus, &t_emlrtDCI, &c_st);
          }
          if (trans_cost_cus !=
              static_cast<int32_T>(muDoubleScalarFloor(trans_cost_cus))) {
            emlrtIntegerCheckR2012b(trans_cost_cus, &s_emlrtDCI, &c_st);
          }
          pind_without_cus.set_size(&bc_emlrtRTEI, &c_st, 1,
                                    temp.size(1) +
                                        static_cast<int32_T>(trans_cost_cus));
          b_loop_ub = temp.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            pind_without_cus[i3] = temp[i3];
          }
          b_loop_ub = static_cast<int32_T>(trans_cost_cus);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            pind_without_cus[i3 + temp.size(1)] = 0.0;
          }
          input_sizes[0] = 1;
          input_sizes[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2,
                                        pind_without_cus.size(), 2, &f_emlrtECI,
                                        &c_st);
          b_loop_ub = pind_without_cus.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            plan[c_i + plan.size(0) * i3] = pind_without_cus[i3];
          }
        } else {
          if (c_i + 1 > plan.size(0)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, plan.size(0), &y_emlrtBCI,
                                          &c_st);
          }
          input_sizes[0] = 1;
          input_sizes[1] = plan.size(1);
          emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, temp.size(), 2,
                                        &e_emlrtECI, &c_st);
          b_loop_ub = temp.size(1);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            plan[c_i + plan.size(0) * i3] = temp[i3];
          }
          //  记录方案
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&c_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&c_st, 5);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  i = plan.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > plan.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &x_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = plan.size(1);
    pind_with_cus.set_size(&rb_emlrtRTEI, sp, 1, plan.size(1));
    b_location.set_size(&sb_emlrtRTEI, sp, 1, plan.size(1));
    for (i1 = 0; i1 < loop_ub; i1++) {
      d = plan[b_i + plan.size(0) * i1];
      pind_with_cus[i1] = d;
      b_location[i1] = (d == 0.0);
    }
    st.site = &ic_emlrtRSI;
    coder::internal::nullAssignment(&st, pind_with_cus, b_location);
    if (pind_with_cus.size(1) < 2) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = 1;
      i2 = pind_with_cus.size(1);
    }
    if (pind_with_cus.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, pind_with_cus.size(1), &w_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = i2 - i1;
    b_temp.set_size(&tb_emlrtRTEI, sp, 1, loop_ub + 1);
    b_temp[0] = pind_with_cus[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      d = pind_with_cus[i1 + i2];
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &p_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(d) < 1) ||
          (static_cast<int32_T>(d) > ii.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, ii.size(1),
                                      &kb_emlrtBCI, (emlrtConstCTX)sp);
      }
      b_temp[i2 + 1] = ii[static_cast<int32_T>(d) - 1];
    }
    if (b_temp.size(1) < lr_case_max_try + 1.0) {
      if (b_i + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d = (lr_case_max_try + 1.0) - static_cast<real_T>(b_temp.size(1));
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &r_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtConstCTX)sp);
      }
      pind_with_cus.set_size(&ub_emlrtRTEI, sp, 1,
                             b_temp.size(1) + static_cast<int32_T>(d));
      loop_ub = b_temp.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        pind_with_cus[i1] = b_temp[i1];
      }
      loop_ub = static_cast<int32_T>(d);
      for (i1 = 0; i1 < loop_ub; i1++) {
        pind_with_cus[i1 + b_temp.size(1)] = 0.0;
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, pind_with_cus.size(), 2,
                                    &d_emlrtECI, (emlrtCTX)sp);
      loop_ub = pind_with_cus.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[b_i + plan.size(0) * i1] = pind_with_cus[i1];
      }
    } else {
      if (b_i + 1 > plan.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, plan.size(0), &u_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      iv[0] = 1;
      iv[1] = plan.size(1);
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_temp.size(), 2, &c_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = b_temp.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        plan[b_i + plan.size(0) * i1] = b_temp[i1];
      }
      //  记录方案
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  st.site = &jc_emlrtRSI;
  *obj = coder::sum(&st, trans_cost) + coder::sum(&st, fix_cost);
  //  目标函数值
  if (!flag_fast) {
    //  快速模式不启动dfs
    st.site = &kc_emlrtRSI;
    *obj = ub_dfs(&st, lr_case_I, lr_case_bar_J, location, plan, trans_cost,
                  lr_case_data_price, lr_case_data_dmd, lr_case_data_fix,
                  lr_case_q, lr_case_max_try);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (ub_xy.cpp)
