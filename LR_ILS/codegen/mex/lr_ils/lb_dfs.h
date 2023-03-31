//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// lb_dfs.h
//
// Code generation for function 'lb_dfs'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void lb_dfs(const emlrtStack &sp, real_T r_data[], int32_T r_size[2],
            coder::array<real_T, 2U> &best_r, real_T &ub,
            const coder::array<real_T, 2U> &fac, real_T cus_dmd,
            const coder::array<real_T, 2U> &cost_mat, real_T R, real_T pi,
            const coder::array<real_T, 1U> &probDisr,
            const coder::array<real_T, 2U> &cus_mu);

// End of code generation (lb_dfs.h)
