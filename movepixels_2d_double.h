//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Feb 14 13:02:13 2020
// Arguments: "-B" "macro_default" "-W" "cpplib:movepixels_2d_double"
// "movepixels_2d_double.m" "-T" "link:lib" 
//

#ifndef __movepixels_2d_double_h
#define __movepixels_2d_double_h 1

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

#ifdef EXPORTING_movepixels_2d_double
#define PUBLIC_movepixels_2d_double_C_API __global
#else
#define PUBLIC_movepixels_2d_double_C_API /* No import statement needed. */
#endif

#define LIB_movepixels_2d_double_C_API PUBLIC_movepixels_2d_double_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_movepixels_2d_double
#define PUBLIC_movepixels_2d_double_C_API __declspec(dllexport)
#else
#define PUBLIC_movepixels_2d_double_C_API __declspec(dllimport)
#endif

#define LIB_movepixels_2d_double_C_API PUBLIC_movepixels_2d_double_C_API


#else

#define LIB_movepixels_2d_double_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_movepixels_2d_double_C_API 
#define LIB_movepixels_2d_double_C_API /* No special import/export declaration */
#endif

extern LIB_movepixels_2d_double_C_API 
bool MW_CALL_CONV movepixels_2d_doubleInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_movepixels_2d_double_C_API 
bool MW_CALL_CONV movepixels_2d_doubleInitialize(void);

extern LIB_movepixels_2d_double_C_API 
void MW_CALL_CONV movepixels_2d_doubleTerminate(void);



extern LIB_movepixels_2d_double_C_API 
void MW_CALL_CONV movepixels_2d_doublePrintStackTrace(void);

extern LIB_movepixels_2d_double_C_API 
bool MW_CALL_CONV mlxMovepixels_2d_double(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                          *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_movepixels_2d_double
#define PUBLIC_movepixels_2d_double_CPP_API __declspec(dllexport)
#else
#define PUBLIC_movepixels_2d_double_CPP_API __declspec(dllimport)
#endif

#define LIB_movepixels_2d_double_CPP_API PUBLIC_movepixels_2d_double_CPP_API

#else

#if !defined(LIB_movepixels_2d_double_CPP_API)
#if defined(LIB_movepixels_2d_double_C_API)
#define LIB_movepixels_2d_double_CPP_API LIB_movepixels_2d_double_C_API
#else
#define LIB_movepixels_2d_double_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_movepixels_2d_double_CPP_API void MW_CALL_CONV movepixels_2d_double(int nargout, mwArray& Iout, const mwArray& Iin, const mwArray& Tx, const mwArray& Ty, const mwArray& mode);

#endif
#endif
