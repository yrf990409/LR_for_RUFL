//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lr_ils_data.cpp
//
// Code generation for function 'lr_ils_data'
//

// Include files
#include "lr_ils_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131642U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "lr_ils",                                             // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo p_emlrtRSI{
    7,         // lineNo
    "getTime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/getTime.m" // pathName
};

emlrtRSInfo q_emlrtRSI{
    21,                     // lineNo
    "CoderTimeAPI/getTime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo r_emlrtRSI{
    148,                                  // lineNo
    "CoderTimeAPI/callEMLRTClockGettime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo y_emlrtRSI{
    17,    // lineNo
    "min", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/min.m" // pathName
};

emlrtRSInfo ab_emlrtRSI{
    40,         // lineNo
    "minOrMax", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo bb_emlrtRSI{
    90,        // lineNo
    "minimum", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "minOrMax.m" // pathName
};

emlrtRSInfo cb_emlrtRSI{
    173,             // lineNo
    "unaryMinOrMax", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pathName
};

emlrtRSInfo db_emlrtRSI{
    72,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo eb_emlrtRSI{
    64,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo gb_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

emlrtRSInfo hb_emlrtRSI{
    130,                        // lineNo
    "minOrMaxRealVectorKernel", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" // pathName
};

emlrtRSInfo ib_emlrtRSI{
    13,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

emlrtRSInfo jb_emlrtRSI{
    17,               // lineNo
    "nullAssignment", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pathName
};

emlrtRSInfo lc_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

emlrtRSInfo oc_emlrtRSI{
    41,    // lineNo
    "cat", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

emlrtRSInfo pc_emlrtRSI{
    113,        // lineNo
    "cat_impl", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t lr_ils_nestLockGlobal;

emlrtRTEInfo c_emlrtRTEI{
    159,                    // lineNo
    13,                     // colNo
    "coderTimeCheckStatus", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pName
};

emlrtRTEInfo e_emlrtRTEI{
    288,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/cat.m" // pName
};

emlrtRTEInfo h_emlrtRTEI{
    134,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unaryMinOrMax.m" // pName
};

emlrtRTEInfo l_emlrtRTEI{
    85,                // lineNo
    27,                // colNo
    "validate_inputs", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "nullAssignment.m" // pName
};

emlrtRTEInfo gb_emlrtRTEI{
    23,                                                                // lineNo
    11,                                                                // colNo
    "update_mu",                                                       // fName
    "/Users/yurunfeng/Documents/Github/LR_for_RUFL/LR_ILS/update_mu.m" // pName
};

const char_T cv[26]{'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                    'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

// End of code generation (lr_ils_data.cpp)
