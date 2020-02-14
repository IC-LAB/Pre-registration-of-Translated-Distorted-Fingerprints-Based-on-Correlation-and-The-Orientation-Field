//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Feb 14 12:59:20 2020
// Arguments: "-B" "macro_default" "-W" "cpplib:movepixels" "movepixels.m" "-T"
// "link:lib" 
//

#ifndef __movepixels_h
#define __movepixels_h 1

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

#ifdef EXPORTING_movepixels
#define PUBLIC_movepixels_C_API __global
#else
#define PUBLIC_movepixels_C_API /* No import statement needed. */
#endif

#define LIB_movepixels_C_API PUBLIC_movepixels_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_movepixels
#define PUBLIC_movepixels_C_API __declspec(dllexport)
#else
#define PUBLIC_movepixels_C_API __declspec(dllimport)
#endif

#define LIB_movepixels_C_API PUBLIC_movepixels_C_API


#else

#define LIB_movepixels_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_movepixels_C_API 
#define LIB_movepixels_C_API /* No special import/export declaration */
#endif

extern LIB_movepixels_C_API 
bool MW_CALL_CONV movepixelsInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_movepixels_C_API 
bool MW_CALL_CONV movepixelsInitialize(void);

extern LIB_movepixels_C_API 
void MW_CALL_CONV movepixelsTerminate(void);



extern LIB_movepixels_C_API 
void MW_CALL_CONV movepixelsPrintStackTrace(void);

extern LIB_movepixels_C_API 
bool MW_CALL_CONV mlxMovepixels(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_movepixels
#define PUBLIC_movepixels_CPP_API __declspec(dllexport)
#else
#define PUBLIC_movepixels_CPP_API __declspec(dllimport)
#endif

#define LIB_movepixels_CPP_API PUBLIC_movepixels_CPP_API

#else

#if !defined(LIB_movepixels_CPP_API)
#if defined(LIB_movepixels_C_API)
#define LIB_movepixels_CPP_API LIB_movepixels_C_API
#else
#define LIB_movepixels_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_movepixels_CPP_API void MW_CALL_CONV movepixels(int nargout, mwArray& I3, const mwArray& I1, const mwArray& Tx, const mwArray& Ty, const mwArray& Tz, const mwArray& mode);

#endif
#endif
