#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/os -A -# --F -= 1.62/Web/os.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/os.web"
  CHANGE FILE:  (none)
#endif



#ifndef OS_H_
#define OS_H_

#ifdef HAVE_CONFIG_H
#include "config.h" 
#endif 




#include "custom.h" 




#if OLD_PROTOTYPES
#define PROTO(args) () 
#else
#define PROTO(args) args 
#endif 



#if(0)

#if(NUM_VA_ARGS == 1)
#undef NUM_VA_ARGS
#define NUM_VA_ARGS 2
#endif
#endif

#if VARIABLE_ARGUMENTS
#define ELLIPSIS ,... 

#define VA_ARGS
#define VA_start
#if(NUM_VA_ARGS == 1)
#define VA_ALIST(args) (va_alist) 
#define VA_DCL(args) va_dcl
#define VA_START(a,n) va_start(a)
#else
#define VA_ALIST(args) args 
#define VA_DCL(args) args
#define VA_START(a,n) va_start(a,n)
#endif
#define VA_LIST(a) va_list a;
#else
#define ELLIPSIS 

#define VA_ARGS ,arg_ptr
#define arg_ptr arg1,arg2,arg3,arg4,arg5,arg6,\
arg7,arg8,arg9,arg10,arg11,arg12,arg13
#define VA_start outer_char *arg1,*arg2,*arg3,*arg4,*arg5,*arg6,\
*arg7,*arg8,*arg9,*arg10,*arg11,*arg12,*arg13;
#define VA_ALIST(args) args
#define VA_DCL(args) args
#define VA_LIST(a)
#define VA_START(a,n)
#ifdef va_arg
#undef va_arg
#define va_arg(a,type) (type)"KLUDGE for va_arg"
#endif
#define va_end(a)
#define vprintf printf
#define vsprintf sprintf
#endif 



#if !NO_VOID  

#define VOID void
#define SRTN void
#else
#define VOID 
#define void char
#define SRTN int
#endif 

#if KEEP_CONST
#define CONST const
#else
#define CONST
#endif



#if OLD_PROTOTYPES

#define FCN(args) args
#define C0(cmnt) ;
#define C1(cmnt) ;
#define C2(cmnt) ;VA_start
#else



#define FCN(args) (

#define C0(cmnt) , 

#define C1(cmnt) ) 

#define C2(cmnt) ,...) 
#endif 





#ifndef ANSI_CTYPE_H
#define ANSI_CTYPE_H 0
#endif

#ifndef ANSI_SPRINTF
#define ANSI_SPRINTF 0
#endif

#ifndef ANSI_SSCANF
#define ANSI_SSCANF 0
#endif

#ifndef ANSI_SYSTEM
#define ANSI_SYSTEM 0
#endif

#ifndef DEBUG_XCHR
#define DEBUG_XCHR 0
#endif

#ifndef FCN_CALLS
#define FCN_CALLS 0
#endif

#ifndef FANCY_SPLIT
#define FANCY_SPLIT 0
#endif

#ifndef HAVE_ERROR
#define HAVE_ERROR 0
#endif

#ifndef HAVE_GETENV
#define HAVE_GETENV 0
#endif

#ifndef HAVE_GETTIMEOFDAY
#define HAVE_GETTIMEOFDAY 0
#endif

#ifndef HAVE_LIMITS_H
#define HAVE_LIMITS_H 0
#endif

#ifndef HAVE_SYS_TIMEB_H
#define HAVE_SYS_TIMEB_H 0
#endif

#ifndef HAVE_STDARG_H
#define HAVE_STDARG_H 0
#endif

#ifndef HAVE_STDDEF_H
#define HAVE_STDDEF_H 0
#endif

#ifndef HAVE_STDLIB_H
#define HAVE_STDLIB_H 0
#endif

#ifndef HAVE_STD_PROTOTYPES
#define HAVE_STD_PROTOTYPES 0
#endif

#ifndef HAVE_STRERROR
#define HAVE_STRERROR 0
#endif

#ifndef HAVE_VALUES_H
#define HAVE_VALUES_H 0
#endif

#ifndef HUGE_POINTERS
#define HUGE_POINTERS 0
#endif

#ifndef KEEP_CONST
#define KEEP_CONST 0
#endif

#ifndef NEW_DIFFTIME
#define NEW_DIFFTIME 0
#endif

#ifndef NO_VOID
#define NO_VOID 0
#endif

#ifndef NON_ANSI_CALLOC
#define NON_ANSI_CALLOC 0
#endif

#ifndef OLD_PROTOTYPES
#define OLD_PROTOTYPES 0
#endif

#ifndef PRINT_AVAILABLE_MEMORY
#define PRINT_AVAILABLE_MEMORY 0
#endif

#ifndef SIZE_T_DEFINED
#define SIZE_T_DEFINED 0
#endif

#ifndef TIMING
#define TIMING 0
#endif

#ifndef TRANSLATE_ASCII
#define TRANSLATE_ASCII 0
#endif

#ifndef UNIX_PATH
#define UNIX_PATH 0
#endif



#if HAVE_STDARG_H
#include <stdarg.h>
#else
#include <varargs.h>
#endif

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif

#if !HAVE_STD_PROTOTYPES
#include "stdlib0.h"
#endif

#if HAVE_STDDEF_H
#include <stddef.h>
#endif

#if HAVE_LIMITS_H
#include <limits.h> 
#else
#if HAVE_VALUES_H
#define INT_MAX MAXINT
#define LONG_MAX MAXLONG
#else
#define INT_MAX 0x7FFF
#define LONG_MAX INT_MAX
#endif

#define INT_MIN (~(INT_MAX))
#define LONG_MIN (~(LONG_MAX))
#define ULONG_MAX (MAXLONG | (~(MAXLONG)))

#endif

#if HAVE_FLOAT_H
#include <float.h>
#else
#ifndef DBL_DIG
#define DBL_DIG 10
#endif
#endif

#if !NON_ANSI_CALLOC
#define CALLOC calloc
#define REALLOC(old_ptr, new_size, old_size) realloc(old_ptr, new_size)
#define FREE free
#endif 





#define UL(num) ((unsigned long)(num))

#include <stdio.h> 
#include <errno.h>


#define FWRITE(buf,len,fp) fwrite((CONST void *)(buf),(size_t)(len),\
    (size_t)(1),fp)

#define WRITE1(buf,len) \
 {\
 int _k;\
 outer_char *_p;\
 for(_p= buf,_k= (int)(len); _k>0; _k--)\
   {\
   PUTC(*_p);\
   _p++;\
   }\
 }


#if STDC_HEADERS || HAVE_STRING_H
#include <string.h> 

#if !STDC_HEADERS && HAVE_MEMORY_H
#include <memory.h>
#endif
#else
#include <strings.h>
#endif

#include <ctype.h> 





#if !ANSI_CTYPE_H
#undef isalpha
#undef isupper
#undef islower

#define isupper(c) ('A' <= (unsigned)(c) && (unsigned)(c) <= 'Z')
#define islower(c) ('a' <= (unsigned)(c) && (unsigned)(c) <= 'z')
#define isalpha(c) (isupper(c) || islower(c))
#endif

#include <setjmp.h> 









#ifndef TIMING_WIDTH
#define TIMING_WIDTH 1 
#endif 

#include <time.h> 


#if TIMING




#if HAVE_GETTIMEOFDAY

#include <sys/time.h>
#undef NEW_DIFFTIME
#define NEW_DIFFTIME 1
#define TIME_T struct timeval
#ifdef _COMMON_h
struct timezone tz_dummy;
#endif
int gettimeofday PROTO((struct timeval*tp,struct timezone*tzp));
#define TIME(p) gettimeofday(p, &tz_dummy)
#else
#if HAVE_SYS_TIMEB_H

#include <sys/timeb.h>
#undef NEW_DIFFTIME
#define NEW_DIFFTIME 1
#define TIME_T struct timeb
#define TIME(p) ftime(p)
#else 
#define TIME_T time_t
#define TIME(p) time(p)
#endif 
#endif 

#if NEW_DIFFTIME
#define DIFFTIME diff_time 



#else
#define DIFFTIME difftime 
#endif 

clock_t clock PROTO((VOID));

#ifndef CLOCKS_PER_SEC
#ifdef CLK_TCK
#define CLOCKS_PER_SEC CLK_TCK 
#else
#define CLOCKS_PER_SEC 1000000 

#endif 
#endif 

#endif 



#ifndef THE_SYSTEM
#define THE_SYSTEM "UNKNOWN"
#endif

#ifndef LOCAL_BANNER
#define LOCAL_BANNER ""
#endif

#ifndef NULL_FILE_NAME
#define NULL_FILE_NAME "null"
#endif

#ifndef C_EXT
#define C_EXT "c"
#endif

#ifndef M_EXT
#define M_EXT "mk"
#endif

#ifndef X_EXT
#define X_EXT "sty"
#endif

#ifndef Cpp_EXT
#define Cpp_EXT "c++"
#endif

#ifndef R_EXT
#define R_EXT "r"
#endif

#ifndef R90_EXT
#define R90_EXT "r90"
#endif

#ifndef N_EXT
#define N_EXT "f"
#endif

#ifndef N90_EXT
#define N90_EXT "f90"
#endif

#ifndef VARIABLE_ARGUMENTS
#define VARIABLE_ARGUMENTS 0
#endif

#if VARIABLE_ARGUMENTS
#ifndef NUM_VA_ARGS
#define NUM_VA_ARGS 2
#endif
#endif

#ifndef PREFIX_END_CHAR
#define PREFIX_END_CHAR '/'
#endif




#ifndef _strmac_
#include "strmac.h" 
#endif 



#define UNUSED(var) var



#define HUGE_FCN_PTR

#ifndef _POSIX_SOURCE
#define _POSIX_SOURCE 
#endif

#include <math.h> 
#ifdef HUGE
#undef HUGE 
#endif

#if HUGE_POINTERS 
#define HUGE huge 
#else
#define HUGE 
#endif 



#define PLUS



#define CAST(type,var) var
#define _Xx(fmt) fmt




#define beep Fbeep






#endif 





