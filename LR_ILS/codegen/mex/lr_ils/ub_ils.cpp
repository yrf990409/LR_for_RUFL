//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ub_ils.cpp
//
// Code generation for function 'ub_ils'
//

// Include files
#include "ub_ils.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "lr_ils_data.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "ub_xy.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo xc_emlrtRSI{
    15,       // lineNo
    "ub_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    21,       // lineNo
    "ub_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    23,       // lineNo
    "ub_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    26,       // lineNo
    "ub_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    29,       // lineNo
    "ub_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    32,       // lineNo
    "ub_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    39,       // lineNo
    "ub_ils", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    61,       // lineNo
    "get_nb", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    62,       // lineNo
    "get_nb", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    63,       // lineNo
    "get_nb", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo id_emlrtRSI{
    98,       // lineNo
    "get_nb", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    27,     // lineNo
    "sort", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/sort.m" // pathName
};

static emlrtRTEInfo n_emlrtRTEI{
    13,       // lineNo
    12,       // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtBCInfo ge_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    21,       // lineNo
    49,       // colNo
    "nb",     // aName
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    41,       // lineNo
    30,       // colNo
    "nb",     // aName
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ie_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    74,       // lineNo
    8,        // colNo
    "ns",     // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtECInfo k_emlrtECI{
    -1,       // nDims
    74,       // lineNo
    5,        // colNo
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtBCInfo je_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    82,       // lineNo
    8,        // colNo
    "ns",     // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtECInfo l_emlrtECI{
    -1,       // nDims
    82,       // lineNo
    5,        // colNo
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtBCInfo ke_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    92,       // lineNo
    12,       // colNo
    "ns",     // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtECInfo m_emlrtECI{
    -1,       // nDims
    92,       // lineNo
    9,        // colNo
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtDCInfo bc_emlrtDCI{
    67,       // lineNo
    12,       // colNo
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    1                       // checkKind
};

static emlrtDCInfo cc_emlrtDCI{
    15,       // lineNo
    5,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    1                       // checkKind
};

static emlrtBCInfo le_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    73,       // lineNo
    10,       // colNo
    "temp",   // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo me_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    73,       // lineNo
    17,       // colNo
    "opened", // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ne_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    81,       // lineNo
    10,       // colNo
    "temp",   // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oe_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    81,       // lineNo
    17,       // colNo
    "closed", // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pe_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    90,       // lineNo
    14,       // colNo
    "temp",   // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qe_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    90,       // lineNo
    21,       // colNo
    "opened", // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo re_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    91,       // lineNo
    14,       // colNo
    "temp",   // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    91,       // lineNo
    21,       // colNo
    "closed", // aName
    "get_nb", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo te_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    21,            // lineNo
    22,            // colNo
    "nb_cost_rec", // aName
    "ub_ils",      // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ue_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    26,       // lineNo
    24,       // colNo
    "nb",     // aName
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    26,         // lineNo
    33,         // colNo
    "sort_ind", // aName
    "ub_ils",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo pd_emlrtRTEI{
    8,        // lineNo
    1,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo qd_emlrtRTEI{
    15,       // lineNo
    17,       // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo rd_emlrtRTEI{
    61,       // lineNo
    1,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo sd_emlrtRTEI{
    62,       // lineNo
    15,       // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo td_emlrtRTEI{
    62,       // lineNo
    1,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo ud_emlrtRTEI{
    63,       // lineNo
    15,       // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo vd_emlrtRTEI{
    15,       // lineNo
    5,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo wd_emlrtRTEI{
    72,       // lineNo
    5,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo xd_emlrtRTEI{
    80,       // lineNo
    5,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo yd_emlrtRTEI{
    89,       // lineNo
    9,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo ae_emlrtRTEI{
    307,   // lineNo
    14,    // colNo
    "cat", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/cat.m" // pName
};

static emlrtRTEInfo be_emlrtRTEI{
    19,       // lineNo
    5,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo ce_emlrtRTEI{
    21,       // lineNo
    46,       // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo de_emlrtRTEI{
    28,     // lineNo
    5,      // colNo
    "sort", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/datafun/sort.m" // pName
};

static emlrtRTEInfo ee_emlrtRTEI{
    26,       // lineNo
    5,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo fe_emlrtRTEI{
    29,       // lineNo
    48,       // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo ge_emlrtRTEI{
    41,       // lineNo
    13,       // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo he_emlrtRTEI{
    37,       // lineNo
    9,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

static emlrtRTEInfo ie_emlrtRTEI{
    48,       // lineNo
    9,        // colNo
    "ub_ils", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/ub_ils.m" // pName
};

// Function Definitions
void ub_ils(const emlrtStack *sp,
            const coder::array<real_T, 2U> &lr_case_data_price,
            const coder::array<real_T, 1U> &lr_case_data_dmd,
            const coder::array<real_T, 1U> &lr_case_data_fix,
            const coder::array<real_T, 1U> &lr_case_q, real_T lr_case_max_try,
            const coder::array<real_T, 2U> &lr_case_bar_J,
            const coder::array<real_T, 2U> &lr_case_I, real_T ub,
            coder::array<boolean_T, 2U> &location, real_T lr_para_theta_sa,
            real_T lr_para_eta_ils, real_T *best_nb_ub, real_T *current_ub,
            coder::array<boolean_T, 2U> &current_loc)
{
  coder::array<real_T, 2U> a__1;
  coder::array<real_T, 1U> nb_cost_rec;
  coder::array<int32_T, 2U> ii;
  coder::array<int32_T, 2U> opened;
  coder::array<int32_T, 1U> iidx;
  coder::array<boolean_T, 2U> b_location;
  coder::array<boolean_T, 2U> nb;
  coder::array<boolean_T, 2U> r;
  coder::array<boolean_T, 2U> temp;
  coder::array<boolean_T, 2U> temp_best_loc;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T temp_cost_rec[5];
  real_T t_gap;
  real_T temperature;
  int32_T sizes[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T i3;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // UB_ILS 局部迭代搜索
  //  初始化
  *best_nb_ub = ub;
  //  记录全局最佳上界
  //  记录全局最佳选址方案
  *current_ub = ub;
  //  当前上界
  current_loc.set_size(&pd_emlrtRTEI, sp, 1, location.size(1));
  loop_ub = location.size(1);
  for (i = 0; i < loop_ub; i++) {
    current_loc[i] = location[i];
  }
  //  当前方案
  temperature = -(lr_para_theta_sa - 1.0) * ub / -0.69314718055994529;
  //  初始温度
  t_gap = temperature / (lr_para_eta_ils * 0.4);
  //  每次降低的温度
  i = static_cast<int32_T>(lr_para_eta_ils);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, lr_para_eta_ils, mxDOUBLE_CLASS,
                                static_cast<int32_T>(lr_para_eta_ils),
                                &n_emlrtRTEI, (emlrtConstCTX)sp);
  for (int32_T iter{0}; iter < i; iter++) {
    real_T ns_sz;
    int32_T b_i;
    int32_T i1;
    int32_T i2;
    int32_T j;
    uint32_T count;
    int8_T i4;
    boolean_T empty_non_axis_sizes;
    //  求邻域
    st.site = &xc_emlrtRSI;
    b_location.set_size(&qd_emlrtRTEI, &st, 1, current_loc.size(1));
    loop_ub = current_loc.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_location[i1] = current_loc[i1];
    }
    b_st.site = &fd_emlrtRSI;
    c_st.site = &ib_emlrtRSI;
    i1 = current_loc.size(1);
    if (current_loc.size(1) < 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI,
                                    "MATLAB:subsdeldimmismatch",
                                    "MATLAB:subsdeldimmismatch", 0);
    }
    c_st.site = &jb_emlrtRSI;
    for (loop_ub = 0; loop_ub <= i1 - 2; loop_ub++) {
      b_location[loop_ub] = b_location[loop_ub + 1];
    }
    if (current_loc.size(1) - 1 < 1) {
      i1 = 0;
    } else {
      i1 = current_loc.size(1) - 1;
    }
    b_location.set_size(&rd_emlrtRTEI, &c_st, b_location.size(0), i1);
    //  先删除虚拟设施
    b_st.site = &gd_emlrtRSI;
    temp.set_size(&sd_emlrtRTEI, &b_st, 1, b_location.size(1));
    loop_ub = b_location.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      temp[i1] = b_location[i1];
    }
    c_st.site = &lc_emlrtRSI;
    coder::eml_find(&c_st, temp, ii);
    opened.set_size(&td_emlrtRTEI, &b_st, 1, ii.size(1));
    loop_ub = ii.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      opened[i1] = ii[i1];
    }
    b_st.site = &hd_emlrtRSI;
    temp.set_size(&ud_emlrtRTEI, &b_st, 1, b_location.size(1));
    loop_ub = b_location.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      temp[i1] = !b_location[i1];
    }
    c_st.site = &lc_emlrtRSI;
    coder::eml_find(&c_st, temp, ii);
    //  计算需要邻域的大小
    ns_sz =
        static_cast<real_T>(static_cast<uint32_T>(opened.size(1)) +
                            static_cast<uint32_T>(ii.size(1))) +
        static_cast<real_T>(opened.size(1)) * static_cast<real_T>(ii.size(1));
    if (ns_sz != static_cast<int32_T>(ns_sz)) {
      emlrtIntegerCheckR2012b(ns_sz, &bc_emlrtDCI, &st);
    }
    nb.set_size(&vd_emlrtRTEI, &st, static_cast<int32_T>(ns_sz),
                b_location.size(1));
    if (ns_sz != static_cast<int32_T>(ns_sz)) {
      emlrtIntegerCheckR2012b(ns_sz, &cc_emlrtDCI, &st);
    }
    loop_ub = static_cast<int32_T>(ns_sz) * b_location.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      nb[i1] = false;
    }
    count = 1U;
    //  关闭一个设施
    i1 = opened.size(1);
    if (opened.size(1) - 1 >= 0) {
      b_loop_ub = b_location.size(1);
      sizes[0] = 1;
    }
    for (b_i = 0; b_i < i1; b_i++) {
      temp.set_size(&wd_emlrtRTEI, &st, 1, b_location.size(1));
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        temp[i2] = b_location[i2];
      }
      if (b_i + 1 > opened.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, opened.size(1), &me_emlrtBCI,
                                      &st);
      }
      i2 = opened[b_i];
      if ((i2 < 1) || (i2 > b_location.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, b_location.size(1), &le_emlrtBCI,
                                      &st);
      }
      temp[i2 - 1] = false;
      if ((static_cast<int32_T>(count) < 1) ||
          (static_cast<int32_T>(count) > nb.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(count), 1,
                                      nb.size(0), &ie_emlrtBCI, &st);
      }
      sizes[1] = nb.size(1);
      emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, temp.size(), 2, &k_emlrtECI,
                                    &st);
      loop_ub = temp.size(1);
      for (i2 = 0; i2 < loop_ub; i2++) {
        nb[(static_cast<int32_T>(count) + nb.size(0) * i2) - 1] = temp[i2];
      }
      count++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    //  开启一个设施
    i1 = ii.size(1);
    if (ii.size(1) - 1 >= 0) {
      c_loop_ub = b_location.size(1);
      sizes[0] = 1;
    }
    for (b_i = 0; b_i < i1; b_i++) {
      temp.set_size(&xd_emlrtRTEI, &st, 1, b_location.size(1));
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        temp[i2] = b_location[i2];
      }
      if (b_i + 1 > ii.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(1), &oe_emlrtBCI,
                                      &st);
      }
      i2 = ii[b_i];
      if ((i2 < 1) || (i2 > b_location.size(1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, b_location.size(1), &ne_emlrtBCI,
                                      &st);
      }
      temp[i2 - 1] = true;
      if ((static_cast<int32_T>(count) < 1) ||
          (static_cast<int32_T>(count) > nb.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(count), 1,
                                      nb.size(0), &je_emlrtBCI, &st);
      }
      sizes[1] = nb.size(1);
      emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, temp.size(), 2, &l_emlrtECI,
                                    &st);
      loop_ub = temp.size(1);
      for (i2 = 0; i2 < loop_ub; i2++) {
        nb[(static_cast<int32_T>(count) + nb.size(0) * i2) - 1] = temp[i2];
      }
      count++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    //  交换设施状态
    i1 = opened.size(1);
    if (opened.size(1) - 1 >= 0) {
      i3 = ii.size(1);
      if (ii.size(1) - 1 >= 0) {
        d_loop_ub = b_location.size(1);
        sizes[0] = 1;
      }
    }
    for (b_i = 0; b_i < i1; b_i++) {
      for (j = 0; j < i3; j++) {
        temp.set_size(&yd_emlrtRTEI, &st, 1, b_location.size(1));
        for (i2 = 0; i2 < d_loop_ub; i2++) {
          temp[i2] = b_location[i2];
        }
        if (b_i + 1 > opened.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, opened.size(1),
                                        &qe_emlrtBCI, &st);
        }
        i2 = opened[b_i];
        if ((i2 < 1) || (i2 > b_location.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, b_location.size(1), &pe_emlrtBCI,
                                        &st);
        }
        temp[i2 - 1] = false;
        if (j + 1 > ii.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, ii.size(1), &se_emlrtBCI,
                                        &st);
        }
        i2 = ii[j];
        if ((i2 < 1) || (i2 > temp.size(1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, temp.size(1), &re_emlrtBCI, &st);
        }
        temp[i2 - 1] = true;
        if ((static_cast<int32_T>(count) < 1) ||
            (static_cast<int32_T>(count) > nb.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(count), 1,
                                        nb.size(0), &ke_emlrtBCI, &st);
        }
        sizes[1] = nb.size(1);
        emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, temp.size(), 2, &m_emlrtECI,
                                      &st);
        loop_ub = temp.size(1);
        for (i2 = 0; i2 < loop_ub; i2++) {
          nb[(static_cast<int32_T>(count) + nb.size(0) * i2) - 1] = temp[i2];
        }
        count++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    //  补充虚拟设施
    b_st.site = &id_emlrtRSI;
    c_st.site = &oc_emlrtRSI;
    if (nb.size(0) != 0) {
      j = nb.size(0);
    } else {
      j = 0;
    }
    d_st.site = &pc_emlrtRSI;
    if ((nb.size(0) != j) && (nb.size(0) != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((nb.size(0) != j) && ((nb.size(0) != 0) && (nb.size(1) != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (j == 0);
    if (empty_non_axis_sizes || (nb.size(0) != 0)) {
      i4 = 1;
    } else {
      i4 = 0;
    }
    if (empty_non_axis_sizes || ((nb.size(0) != 0) && (nb.size(1) != 0))) {
      sizes[1] = nb.size(1);
    } else {
      sizes[1] = 0;
    }
    r.set_size(&ae_emlrtRTEI, &c_st, j, i4 + sizes[1]);
    loop_ub = i4;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < j; i2++) {
        r[i2] = true;
      }
    }
    loop_ub = sizes[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < j; i2++) {
        r[i2 + r.size(0) * (i1 + i4)] = nb[i2 + j * i1];
      }
    }
    nb.set_size(&vd_emlrtRTEI, &c_st, r.size(0), r.size(1));
    loop_ub = r.size(0) * r.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      nb[i1] = r[i1];
    }
    //  获取邻域
    //  求所有邻域中成本最小的几个
    nb_cost_rec.set_size(&be_emlrtRTEI, sp, nb.size(0));
    loop_ub = nb.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      nb_cost_rec[i1] = 0.0;
    }
    i1 = nb.size(0);
    for (b_i = 0; b_i < i1; b_i++) {
      if (b_i + 1 > nb.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, nb.size(0), &ge_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = nb.size(1);
      temp.set_size(&ce_emlrtRTEI, sp, 1, nb.size(1));
      for (i2 = 0; i2 < loop_ub; i2++) {
        temp[i2] = nb[b_i + nb.size(0) * i2];
      }
      if (b_i + 1 > nb_cost_rec.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, nb_cost_rec.size(0),
                                      &te_emlrtBCI, (emlrtConstCTX)sp);
      }
      st.site = &yc_emlrtRSI;
      b_ub_xy(&st, lr_case_data_price, lr_case_data_dmd, lr_case_data_fix,
              lr_case_q, lr_case_max_try, lr_case_bar_J, lr_case_I, temp,
              &nb_cost_rec[b_i], a__1);
      //  求快速解
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    st.site = &ad_emlrtRSI;
    b_st.site = &jd_emlrtRSI;
    coder::internal::sort(&b_st, nb_cost_rec, iidx);
    nb_cost_rec.set_size(&de_emlrtRTEI, &st, iidx.size(0));
    loop_ub = iidx.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      nb_cost_rec[i1] = iidx[i1];
    }
    //  最小成本索引
    //  计算前 5 个 最佳索引的精准上界
    st.site = &bd_emlrtRSI;
    coder::internal::indexShapeCheck(&st, nb_cost_rec.size(0));
    temp_best_loc.set_size(&ee_emlrtRTEI, sp, 5, nb.size(1));
    loop_ub = nb.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < 5; i2++) {
        if (i2 + 1 > nb_cost_rec.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i2 + 1, 1, nb_cost_rec.size(0),
                                        &ve_emlrtBCI, (emlrtConstCTX)sp);
        }
        j = static_cast<int32_T>(nb_cost_rec[i2]);
        if ((j < 1) || (j > nb.size(0))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, nb.size(0), &ue_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        temp_best_loc[i2 + 5 * i1] = nb[(j + nb.size(0) * i1) - 1];
      }
    }
    b_i = 1;
    loop_ub = nb.size(1);
    for (j = 0; j < 5; j++) {
      b_i = j + 1;
      temp.set_size(&fe_emlrtRTEI, sp, 1, nb.size(1));
      for (i1 = 0; i1 < loop_ub; i1++) {
        temp[i1] = temp_best_loc[j + 5 * i1];
      }
      st.site = &cd_emlrtRSI;
      c_ub_xy(&st, lr_case_data_price, lr_case_data_dmd, lr_case_data_fix,
              lr_case_q, lr_case_max_try, lr_case_bar_J, lr_case_I, temp,
              &temp_cost_rec[j], a__1);
      //  求快速解
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    st.site = &dd_emlrtRSI;
    b_st.site = &y_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    if (!muDoubleScalarIsNaN(temp_cost_rec[0])) {
      j = 1;
    } else {
      boolean_T exitg1;
      j = 0;
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub < 6)) {
        if (!muDoubleScalarIsNaN(temp_cost_rec[loop_ub - 1])) {
          j = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }
    if (j == 0) {
      ns_sz = temp_cost_rec[0];
      j = 1;
    } else {
      ns_sz = temp_cost_rec[j - 1];
      i1 = j + 1;
      for (loop_ub = i1; loop_ub < 6; loop_ub++) {
        real_T d;
        d = temp_cost_rec[loop_ub - 1];
        if (ns_sz > d) {
          ns_sz = d;
          j = loop_ub;
        }
      }
    }
    //  接受上界
    if (ns_sz < *current_ub) {
      //  得到更优质的解
      *current_ub = ns_sz;
      //  记录临时上界
      current_loc.set_size(&he_emlrtRTEI, sp, 1, nb.size(1));
      loop_ub = nb.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        current_loc[i1] = temp_best_loc[(j + 5 * i1) - 1];
      }
      //  临时选址方案
    } else {
      //  概率接受不那么好的解
      st.site = &ed_emlrtRSI;
      if (coder::b_rand() <
          muDoubleScalarExp((ns_sz - *current_ub) / temperature)) {
        *current_ub = ns_sz;
        //  记录临时上界
        if (b_i > nb.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, nb.size(0), &he_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        current_loc.set_size(&ge_emlrtRTEI, sp, 1, nb.size(1));
        loop_ub = nb.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          current_loc[i1] = nb[(b_i + nb.size(0) * i1) - 1];
        }
        //  临时选址方案
      }
    }
    //  更新最优解
    if (*current_ub < *best_nb_ub) {
      //  获得全局最优解直接返回
      *best_nb_ub = *current_ub;
      //  记录全局最佳上界
      location.set_size(&ie_emlrtRTEI, sp, 1, location.size(1));
      loop_ub = current_loc.size(1);
      location.set_size(&ie_emlrtRTEI, sp, location.size(0),
                        current_loc.size(1));
      for (i1 = 0; i1 < loop_ub; i1++) {
        location[i1] = current_loc[i1];
      }
      //  记录全局最佳选址方案
    }
    //  更新温度
    temperature -= t_gap;
    if (temperature <= 0.0) {
      temperature = 0.0001;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (ub_ils.cpp)
