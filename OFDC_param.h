//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Feb 14 12:48:49 2020
// Arguments: "-B" "macro_default" "-W" "cpplib:OFDC_param" "OFDC_param.m" "-T"
// "link:lib" 
//

#ifndef __OFDC_param_h
#define __OFDC_param_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_OFDC_param
#define PUBLIC_OFDC_param_C_API __global
#else
#define PUBLIC_OFDC_param_C_API /* No import statement needed. */
#endif

#define LIB_OFDC_param_C_API PUBLIC_OFDC_param_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_OFDC_param
#define PUBLIC_OFDC_param_C_API __declspec(dllexport)
#else
#define PUBLIC_OFDC_param_C_API __declspec(dllimport)
#endif

#define LIB_OFDC_param_C_API PUBLIC_OFDC_param_C_API


#else

#define LIB_OFDC_param_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_OFDC_param_C_API 
#define LIB_OFDC_param_C_API /* No special import/export declaration */
#endif

extern LIB_OFDC_param_C_API 
bool MW_CALL_CONV OFDC_paramInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_OFDC_param_C_API 
bool MW_CALL_CONV OFDC_paramInitialize(void);

extern LIB_OFDC_param_C_API 
void MW_CALL_CONV OFDC_paramTerminate(void);



extern LIB_OFDC_param_C_API 
void MW_CALL_CONV OFDC_paramPrintStackTrace(void);

extern LIB_OFDC_param_C_API 
bool MW_CALL_CONV mlxOFDC_param(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_OFDC_param
#define PUBLIC_OFDC_param_CPP_API __declspec(dllexport)
#else
#define PUBLIC_OFDC_param_CPP_API __declspec(dllimport)
#endif

#define LIB_OFDC_param_CPP_API PUBLIC_OFDC_param_CPP_API

#else

#if !defined(LIB_OFDC_param_CPP_API)
#if defined(LIB_OFDC_param_C_API)
#define LIB_OFDC_param_CPP_API LIB_OFDC_param_C_API
#else
#define LIB_OFDC_param_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_OFDC_param_CPP_API void MW_CALL_CONV OFDC_param(int nargout, mwArray& corre, mwArray& correm, mwArray& M, const mwArray& I1, const mwArray& I2, const mwArray& alpha, const mwArray& iter_num);

#endif
#endif
