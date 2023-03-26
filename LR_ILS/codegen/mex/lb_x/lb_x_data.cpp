//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_x_data.cpp
//
// Code generation for function 'lb_x_data'
//

// Include files
#include "lb_x_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131627U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "lb_x",                                               // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo m_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

emlrtRSInfo o_emlrtRSI{
    13,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

emlrtRSInfo t_emlrtRSI{
    48,       // lineNo
    "lb_dfs", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pathName
};

emlrtRSInfo u_emlrtRSI{
    50,       // lineNo
    "lb_dfs", // fcnName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pathName
};

emlrtDCInfo emlrtDCI{
    49,       // lineNo
    54,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    1                       // checkKind
};

emlrtBCInfo p_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    49,         // lineNo
    54,         // colNo
    "probDisr", // aName
    "lb_dfs",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

emlrtRTEInfo d_emlrtRTEI{
    85,                // lineNo
    27,                // colNo
    "validate_inputs", // fName
    "/Applications/MATLAB_R2022b.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

emlrtBCInfo fb_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    41,       // lineNo
    32,       // colNo
    "fac",    // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

emlrtBCInfo gb_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    42,         // lineNo
    52,         // colNo
    "cost_mat", // aName
    "lb_dfs",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

emlrtDCInfo q_emlrtDCI{
    42,       // lineNo
    52,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    1                       // checkKind
};

emlrtBCInfo hb_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    42,         // lineNo
    61,         // colNo
    "cost_mat", // aName
    "lb_dfs",   // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

emlrtDCInfo r_emlrtDCI{
    42,       // lineNo
    61,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    1                       // checkKind
};

emlrtBCInfo ib_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    42,       // lineNo
    97,       // colNo
    "cus_mu", // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

emlrtDCInfo s_emlrtDCI{
    42,       // lineNo
    97,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    1                       // checkKind
};

emlrtBCInfo jb_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    42,       // lineNo
    101,      // colNo
    "fac",    // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

emlrtBCInfo kb_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    48,       // lineNo
    48,       // colNo
    "fac",    // aName
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m", // pName
    0                       // checkKind
};

emlrtRTEInfo s_emlrtRTEI{
    48,       // lineNo
    25,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

emlrtRTEInfo t_emlrtRTEI{
    48,       // lineNo
    34,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

emlrtRTEInfo u_emlrtRTEI{
    50,       // lineNo
    46,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

emlrtRTEInfo x_emlrtRTEI{
    31,       // lineNo
    21,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

emlrtRTEInfo y_emlrtRTEI{
    21,       // lineNo
    17,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

emlrtRTEInfo ab_emlrtRTEI{
    10,       // lineNo
    13,       // colNo
    "lb_dfs", // fName
    "/Users/yurunfeng/Nutstore "
    "Files/\xe6\x88\x91\xe7\x9a\x84\xe5\x9d\x9a\xe6\x9e\x9c\xe4\xba\x91/"
    "code/LR_ILS/lb_dfs.m" // pName
};

// End of code generation (lb_x_data.cpp)
