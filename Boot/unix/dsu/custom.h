#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "./ftangle ./custom -uSUN -mDSU -mCC -= /u/krommes/Fweb/1.62/Boot/unix/dsu/custom.h -# -v"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "./custom.web"
  CHANGE FILE:  (none)
#endif

/* --- BOOTSTRAPPING --- */

/* To bootstrap yourself onto a new system, you should modify this file \
appropriately.  In most cases, you set a flag by saying ``#define \
FLAG''---i.e., you make a null definition.  Don't set these flags to~0 \
or~1.  However, in a few cases the macros are not flags and must be given \
the appropriate definition. */

/* --- MACHINE COMPILER FLAG --- */

/* This must be in lower case.  Presently these are drawn from the list \
{ansi, bsd, dsu, ibmpc, mac, misc, mvs, sgi, sun, vax}.  These \
flags may be used in #define statements within the source code to tailor \
things to a particular compiler or operating system.  If you use \
./configure to generate custom.h, there will be no definition following \
this comment. */
#ifndef dsu
#define dsu
#endif /* |dsu| */


/* --- FWEB SYSTEM NAME --- */

/* This is a string such as ``IBM-PC/DOS'' or ``VAX/VMS''. It is printed \
when FWEB starts up. */

#define THE_SYSTEM  "DECstation/ULTRIX"

/* --- An optional local banner, printed after the system name above. --- */

#define LOCAL_BANNER ""


/* Does your compiler understand the ANSI preprocessor command \#error? \
If it does, define |HAVE_ERROR|.  (I haven't figured out a general \
autoconf test yet; it seems to be impossible in principle.) */

#define HAVE_ERROR 0


/* The C preprocessor is run by the \.{-H} option. */

#define RUN_CPP "gcc -E"


/* Occasionally a system command is issued to rename a file.  Here's how to \
do that. */
#define MV "mv"


/* Do we bother with translations to the internal |ASCII| representation? \
If so, define |TRANSLATE_ASCII|.  Don't bother on |ASCII| machines. */

#define TRANSLATE_ASCII 0

/* For \It{debugging} of target machines whose character set differs from \
the one on which you're working, define |DEBUG_XCHR|.  \It{Usually, this \
flag should not be defined.}  When it is defined, the |TRANSLATE_ASCII| \
flag is automatically turned on, and the value of the style-file field \
`xchr' is relevant. \It{Don't use this flag unless you're a system \
developer!!!} */

#define DEBUG_XCHR 0

/* Does the operating system have a Unix-like path? \
That is, does it have the form ``/u/krommes'' rather than the VMS form \
``ux3:[krommes]''?  If so, define |UNIX_PATH|. */

#define UNIX_PATH 1


/* If the |getenv| call to obtain an environment variable is supported \
(it usually is) define |HAVE_GETENV|. */
#define HAVE_GETENV 1


/* --- FILE NAMES and EXTENSIONS --- */

/* Name of the null file.  This macro merely defines the default value of \
the style-file parameter `null_file', so it's not essential to add any more \
machines here. */

#define NULL_FILE_NAME  "/dev/null"/* For Unix systems. */

/* Name of \FWEB's initialization file.  Please see below, after the \
definition of |SMALL_MEMORY|. */

/* Name of \FWEB's default style file.  \It{Please don't change this unless \
you absolutely have to!  Use the `-z' option instead.} */

#define STYLE_FILE_NAME "fweb.sty"

/* Here are the default file extensions for each language.  These merely \
set default style-file parameters, so it's not essential that you change \
anything here.  See the parameters `suffix.C', `suffix.N', etc. */

#define C_EXT "c"
#define V_EXT "mk"
#define X_EXT "sty"

/* Unix. */
#define Cpp_EXT "C" /* Per \.{gcc}. */
#define R_EXT "r"
#define R90_EXT "r90"
#define N_EXT "f"
#define N90_EXT "f90"

#define HAVE_TMPNAM 1
#define HAVE_TEMPNAM 0


/* The |FANCY_SPLIT| flag is used for buffering the output lines of C~code. \
Define this if the C~compiler CAN'T continue an incomplete line with a \
backslash.  (ANSI compilers should be able to.) \
{\bf (This code may not be fully debugged yet!)} */

#define FANCY_SPLIT 1


/* --- INCLUDING FILES --- */

/* The code is written in C, and various header files of the form \
``<*.h>'' are included near the beginning of each source file.  The \
names of these files are standardized by ANSI.  Unfortunately, not everyone \
has gotten around to ANSI yet.  Therefore, here we include important files \
whose names may be nonstandard or whose functions may fluctuate. */

/* Does the ANSI <stdlib.h> exist?  If so, say so here.  This is supposed \
to contain prototypes for the following functions used by \FWEB: |abort|, \
|abs|, |atof|, |atoi|, |atol|, |calloc|, |exit|, |free|, |getenv|, \
|realloc|, |strtod|, |strtol|.  If it doesn't, either find the prototypes \
in another file and include it here, or actually give the prototypes here. */

#define HAVE_STDLIB_H 1

#define HAVE_STDARG_H 1


/* Does the ANSI <stddef.h> exist?  If so, include it here.  This is \
supposed to define the |NULL| pointer, and the type |size_t|.  Sometimes \
these are defined in other places as well. */

#define HAVE_STDDEF_H 0

/* Other stuff handled by autoconf. */
#define HAVE_STRING_H 1

#define HAVE_MEMORY_H 0

#define HAVE_FLOAT_H 1

/* Does (non-ANSI) <sys/types.h> exist?  You may find some useful stuff in \
here. But don't use it unless you have to. */

_P include<sys/types.h>

/* Must we include an extra file for memory management?  E.g., for \
Microsoft, <malloc.h>; for Borland; <alloc.h>.  Not necessary for ANSI; \
it's in <stdlib.h>. */

/*  _P include<malloc.h> */

/* Numerical limits.  We use the following ANSI macros: |INT_MAX|, \
|INT_MIN|, |LONG_MAX|, |LONG_MIN|, and |ULONG_MAX|, which are found in \
<limits.h>. If you can't find those macros, define the flag \
|HAVE_VALUES_H|, and possibly include another file with different names for \
the limits, such as <values.h> on the Sun.  The flag |HAVE_VALUES_H| \
assumes that the macros |MAXINT| and |MAXLONG| are defined.  If they are \
not, you must define them here. */

#define HAVE_LIMITS_H 1
#define HAVE_VALUES_H 0

/* Please note that additional files are included automatically \
(essentially immediately after this file is read; see <includes.hweb>). \
These were considered to be standard, but that might be a mistake.  Those \
files are: <string.h>, <stdio.h>, <ctype.h>, <setjmp.h>, <time.h>. \
Remember that by convention these files should limit themselves to being \
included only once.  Therefore, if for some reason you need to include one \
of these somewhere in this file, you should be able to do it without \
difficulty; the later automatic include just won't be done if those files \
are following standard protocol. */

#define ANSI_CTYPE_H 0


/* --- VARIABLE-LENGTH ARGUMENT LISTS --- */

/* For convenience, FWEB attempts to use functions with variable numbers of \
arguments.  We attempt to support two conventions: ANSI, and Sun's.  If \
this feature is supported, define the flag |VARIABLE_ARGUMENTS|, say \
whether |va_start| has one or two arguments, and include the associated \
header file (<stdarg.h> for ANSI). */

/* Does the compiler allow ANSI-style variable arguments? */

#define VARIABLE_ARGUMENTS 0

/* Is |va_start| defined with one argument (Sun's convention) or two \
(ANSI)? */
#define NUM_VA_ARGS 2
#define HAVE_STDARG_H 1


/* --- ADDITIONAL PROTOTYPES --- */

/* You may wish to collect any additional prototypes that are required and \
put them into your own header file that you include here. */

/* If the flag |HAVE_STD_PROTOTYPES| is false, it causes the file \
"stdlib0.h" to be loaded.  This contains ANSI prototypes that for some \
reason aren't provided with the gcc environment on the Sun. */
#define HAVE_STD_PROTOTYPES 1


/* Define the flag |OLD_PROTOTYPES| for compilers that don't support the \
new (ANSI) style of function declaration and prototyping.  The new style is \
|fcn(int i,char *s){}|; the old style is |fcn(i,s) int i; char *s; {}|. */

#define OLD_PROTOTYPES 1

/* ANSI also introduces the type |void|.  If your compiler doesn't \
understand the constructions |void *| and |void fcn()|, define |NO_VOID|. */

#define NO_VOID 1


/* --- SPECIAL TYPES --- */

/* |const| seems to be an annoyance; not all compilers treat it the same \
way.  We really only want it for debugging, anyway, so we mostly just \
remove it.  It's kept when compiling on the Sun with gcc, because it \
gives the developer more checks on the code.  If you want to keep it, \
define |KEEP_CONST|. */

#define KEEP_CONST 0

/* For personal computers, the kind of pointer is an issue.  They must be \
|huge|.  If your compiler understands |huge|, define |HUGE_POINTERS|. */

#define HUGE_POINTERS 0


/* --- SPECIAL FUNCTIONS --- */

/* The ANSI |sprintf| function returns the number of characters written. \
If this is the case on your system, define |ANSI_SPRINTF|.  (It's always \
safe to not define it.) */

#define ANSI_SPRINTF 0

/* The ANSI |sscanf| does some cute things with scansets, but it doesn't \
always work. */
#define ANSI_SSCANF 0

/* The ANSI |system| function is supposed to take |NULL| as an argument, \
which means check if a command processor exists.  If this works properly, \
defined |ANSI_SYSTEM|.  (It doesn't work on the Sun.) */

#define ANSI_SYSTEM 0


/* --- ANNOYING WARNINGS --- */

/* Sometimes the compiler can't understand that the \
control flow can never get to the bottom of a function. To avoid warning \
complaints, we have the following: */

#define DUMMY_RETURN(value)


/* --- UNUSUAL NAMES --- */

/* Put here any definitions that override standard names.  For example, for \
some ancient on the MAC one had to say ``#define getc agetc''. */

/* Nothing to be done. */


/* --- DIRECTORY SPECIFICATIONS --- */

/* Directory specifications are delimited in different ways under the various \
operating systems. Unix: '/'; IBM-PC: '\\'; VAX/VMS: ']'. */

#define PREFIX_END_CHAR '/' /* The Unix convention. */


/* --- TIMING --- */

/* First of all, we have a flag to say whether timing information is \
printed at the end of the run.  (If you can't figure out the timing \
routines for your machine or don't want a timing information line at the \
end of your terminal output, don't define this.)  Beginning with fweb-1.53, \
timing is turned off by default. */

#define TIMING 0

/* --- Number of decimal places  for timing information in seconds.  (Use \
at least 2 for supercomputers.) --- */

#define TIMING_WIDTH 1

/* There's supposed to be a function |clock()| that returns the cpu time, \
in units of |CLOCKS_PER_SEC|.  The type of |clock| is |clock_t|.  If that \
is defined, define the flag |CLOCK_T_DEFINED|; otherwise, say |typedef ... \
clock_t| here. */

#define CLOCK_T_DEFINED 1

/* Some systems don't define |CLOCKS_PER_SEC|.  If not, we try |CLK_TCK|. \
If that's not defined, it defaults to 1000000.  If that's not appropriate, \
define |CLOCKS_PER_SEC| here. */

/* \
#define CLOCKS_PER_SEC 1000000 \
*/

/* Are there system routines that return wall-clock time in sub-second units? \
First, look for |gettimeofday| ($\mu$sec timing). */
#define HAVE_GETTIMEOFDAY 0

/* Otherwise, does the file sys/timeb.h exist that along with |ftime| gives \
millisecond timing for wall-clock time?  We check for the header file, not \
|ftime| itself, since |ftime| may be in a Berkeley compatibility library, \
not in libc. */

#define HAVE_SYS_TIMEB_H 1

/* Do we use our own version of |difftime()|, which computes the difference \
of two wall clock times?  If so, define |NEW_DIFFTIME|.  This flag should \
always be defined if |HAVE_SYS_TIMEB_H| is defined above.  */

#define NEW_DIFFTIME 1


/* --- MAKING IT FIT --- */

/* Sometimes the compiler can't handle functions or switches that are too \
large.  In that case, define |FCN_CALLS|.  That converts certain in-line \
code (such as in the syntax production analyzer) into function calls (at \
the price of slowing things down a bit). */

#define FCN_CALLS 0

/* The personal computers are starved for memory.  For those machines, we \
specify smaller default values for the lengths of dynamic arrays; define \
|SMALL_MEMORY|.  (You can always use the `-y' option to override these \
defaults.) */

#define SMALL_MEMORY 0

/* Name of \FWEB's default initialization file.  Please don't change these \
conventions unless you absolutely have to!!!  Also, note that these \
definitions are overridden by the environment variable |FWEB_INI|, if it is \
defined. */

#ifndef SMALL_MEMORY
#define SMALL_MEMORY 0
#endif

#if SMALL_MEMORY
#define FWEB_INI "fweb.ini"
#else
#define FWEB_INI ".fweb"
#endif


/* --- MEMORY ALLOCATIONS --- */

/* The ANSI |calloc| routine takes two arguments:  |void \
*calloc(size_t,size_t)|. If the system doesn't have a standard |calloc| \
routine, or if the name isn't standard, you must define an UPPERCASE macro \
that does the same thing.  (The name isn't standard on personal computers \
because one is dealing with |huge| allocations.)  If you define \
|NON_ANSI_CALLOC|, you must define |CALLOC|, |REALLOC|, and |FREE|.  E.g., the \
relevant definitions for Borland are \
\begintt \
#define CALLOC farcalloc \
#define REALLOC(oldblock,nbytes) \ \
 farrealloc((void far *)(oldblock),(unsigned long)(nbytes)) \
#define FREE(block) farfree((void far *)(block)) \
\endtt \
*/

#define NON_ANSI_CALLOC 0

/* |IBMPC| */

/* Do we supply below a routine that obtains the available memory, such \
as Borland's farcoreleft()? */

#define PRINT_AVAILABLE_MEMORY 0

/* The function call that obtains the memory is called |CORE_LEFT|.  This \
function is assumed to return an |unsigned long int|.  For Microsoft, we had \
to write our own routine |_hmemavl|; see below.  For Borland, the routine \
should be called |farcoreleft|.  For the other machines, we don't have \
anything as yet. */




/* The following flag is defined only by \common.web}. */
#ifdef COMMON_FCNS_
#if(part==0 || part==1)

/* Give here the C code for any additional functions that are \
compiler-specific or missing from your implementation, such as maybe \
|strtod|.  Note that these are bracketed with the flag COMMON_FCNS_ so they \
are compiled into just one module, namely common.c. You must \
always supply some version of the debugging routine |trap|, which must \
return~0 as a minimum. */


/* The default |trap| function for debugging. */
int trap(void)
{return 0;}

#endif /* |part == 1| */

#endif /* |COMMON_FCNS_| */


