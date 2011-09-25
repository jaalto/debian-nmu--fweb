#define DEBUG 1 \

#define com , \

#define YES 1
#define NO 0 \
 \
/* Infinite loop. */
#define WHILE() for(;;) /* Use ``|for(;;)|'' instead of ``|while(1)|'' to avoid 
\
			warnings from Microsoft compiler. */
#define MAX(a,b) ((a)>(b) ? (a) : (b))
#define MIN(a,b) ((a)<(b) ? (a) : (b)) \

#define SAVE_MACRO(text) save_macro(OC("m!"),(outer_char *)text) \
	/* Note that this protects the macros against redefinition. */
#define CHK_ARGS(name,num) chk_args(OC(name),num,n,pargs) \
	/* Right \# of arguments? */ \

#define tab_mark 9 /* The |ASCII| tab. */ \
 \
/* Subtraction of huge pointers; needed for pc's. We first cast to |long|, \
then to the final target type. */
#define PTR_DIFF(type,p,q) ((type)(long)((p) - (q)))
#define SUB_PTRS(p,q) PTR_DIFF(unsigned long,p,q) /* Used in the statistics \
						output. */ \
 \
/* Here are some macros to determine the identifier number in the name \
directory. */
#define ID_NUM_ptr(ptr,start,end) ID_NUM0(ptr = ,start,end) /* Set a \
	pointer as well as the number. */
#define ID_NUM(start,end) ID_NUM0(DUMMY,start,end) /* Just the number. */
#define DUMMY /* This kludge for an empty argument shouldn't be necessary, but 
\
	Microsoft didn't like the construction |ID_NUM0(,start,end)|. */ \
 \
/* Set both a pointer and the number. */
#define ID_NUM0(ptr_equals,start,end) PTR_DIFF(sixteen_bits, \
	(ptr_equals id_lookup(start,end,0)),name_dir) \
 \
/* Terminate a string. */
#define TERMINATE(p,offset) *(p+offset) = '\0' \

#define BOOLEAN(b) ((boolean)(b)) /* Explicit cast to make some compilers 
happy. */ \

#define CHOICE(flag,yes,no) (((int)(flag)) ? yes : no) \

#define EAT_AUTO_SEMI {if(auto_semi && next_byte() != 59) BACK_UP}
#define BACK_UP {saved_token = NO; cur_byte -= last_bytes;} \

#define NOT_BEFORE (eight_bits)127 /* Make octal constant. */
#define NOT_AFTER NOT_BEFORE \

#define SAVE_BEFORE(pp,nmax,r_before) save_out(pp,nmax,r_before,NOT_AFTER)
#define SAVE_AFTER(pp,nmax,r_after) save_out(pp,nmax,NOT_BEFORE,r_after) \

#define NUM_LANGUAGES 8 /* |C|, |RATFOR|, |FORTRAN|, |TEX|, |LITERAL|, \
		|C_PLUS_PLUS|, |RATFOR_90|, |FORTRAN_90| */
#define NUM_DISTINCT_LANGUAGES (NUM_LANGUAGES-2) \

#define GLOBAL_LANGUAGE FORTRAN
#define global_language global_params.Language /* The language in force at the 
\
					beginning of each module. */ \

#define is_C_(Language) (Language==C)
#define is_RATFOR_(Language) (Language==RATFOR || Language==RATFOR_90)
#define is_FORTRAN_(Language) (Language==FORTRAN || Language==FORTRAN_90) \

#define FORTRAN_LIKE(Language) (is_RATFOR_(Language) || is_FORTRAN_(Language))
#define FORTRAN90_LIKE(Language) (Language==FORTRAN_90 || Language==RATFOR_90)
#define C_LIKE(Language) (Language==C || Language==C_PLUS_PLUS) \

#define R66 (is_RATFOR_(language) && !Ratfor77) /* Non-expandable \Ratfor; \
obsolete. */
#define R77 (Ratfor77 && is_RATFOR_(language) && xpn_Ratfor) /* Expandable \
\Ratfor. */
#define R77_or_F (R77 || is_FORTRAN_(language)) /* Expandable \Ratfor\ or \
\Fortran. */ \

#define IS_WHITE(a) ((a) == 32 || (a) == tab_mark) \

#define LANGUAGE_CODE(l) OC(lang_codes[lan_num(l)]) /*  String \
	abbreviation for the language name. */ \

#define SET_VAL(val,abbrev) val = find_abbrev((outer_char *)abbrev)->nunits
#define MAX_VAL(abbrev) find_abbrev((outer_char *)abbrev)->max \

#define LN lan_num \

#define language params.Language
#define language_index params.Language_index
#define language_num params.Language_num \

#define in_format params.In_format
#define in_data params.In_data
#define intermingle params.Intermingle \

#define active_brackets params.Active_brackets
#define all_cmnts_verbatim params.All_cmnts_verbatim
#define all_includes params.All_includes
#define auto_app_semi params.Auto_app_semi
#define auto_semi params.Auto_semi[language_num]
#define auto_line params.Auto_line
#define auto_pseudo_semis params.Auto_pseudo_semis[language_num]
#define beeps params.Beeps
#define block_nums params.Block_nums[language_num]
#define bslash_continued_strings params.Bslash_continued_strings
#define color_mode params.Color_mode
#define chk_ifelse params.Chk_ifelse
#define chk_stmts params.Chk_stmts
#define compare_outfiles params.Compare_outfiles
#define compound_assignments params.Compound_assignments
#define Cpp params.CPP
#define Cpp_comments params.CPP_comments[language_num]
#define dbg_output params.Dbg_output
#define deferred_macros params.Deferred_macros
#define defn_mask params.Defn_mask
#define dot_constants params.Dot_constants
#define Fortran88 params.ForTran88
#define Fortran_label params.Fortran_Label
#define free_form_input params.Free_form_input[language_num]
#define ignore_C params.Ignore_C
#define in_escape params.In_escape[language_num]
#define index_hidden params.Index_hidden
#define index_one params.Index_one
#define input_macros params.Input_macros
#define keep_trailing_comments params.Keep_trailing_comments
#define lc_keywords params.Lc_keywords
#define line_info params.Line_info
#define lowercase_tokens params.Lowercase_tokens
#define m4 params.M4
#define makeindex params.Makeindex
#define no_xref params.No_xref
#define number_dos params.Number_dos
#define nuweb_mode params.Nuweb_mode
#define overload_ops params.Overload_ops
#define point_comments params.Point_comments[language_num]
#define prn_input_lines params.Prn_input_lines
#define prn_input_addresses params.Prn_input_addresses
#define prn_contents params.Prn_contents
#define prn_index params.Prn_index
#define prn_modules params.Prn_modules
#define prn_semis params.Prn_semis
#define prn_version params.Prn_version
#define quoted_includes params.Quoted_includes
#define Ratfor77 params.RatFor77
#define read_iformats params.Read_iformats
#define redefine_builtins params.Redefine_builtins
#define redefine_macros params.Redefine_macros
#define reverse_indices params.Reverse_indices[language_num]
#define rmv_files params.Rmv_files
#define skip_ifiles params.Skip_ifiles
#define skip_includes params.Skip_includes
#define statistics params.Statistics
#define subscript_fcns params.Subscript_fcns
#define suppress_cmds params.Suppress_cmds
#define TeX_processor params.TeX_Processor
#define toggle_includes params.Toggle_includes
#define top_version params.Top_version
#define translate_ASCII params.Translate_ASCII
#define translate_brackets params.Translate_brackets
#define truncate_ids params.Truncate_ids
#define try_extensions params.Try_extensions
#define xref_unnamed params.Xref_unnamed \

#define preprocessing parse_params.Preprocessing
#define at_beginning parse_params.At_beginning
#define sharp_include_line parse_params.Sharp_include_line
#define sharp_pragma_line parse_params.Sharp_pragma_line \

#define isAupper(c) (c<=90 && c>=65)
#define isAlower(c) (c<=122 && c>=97) \

#define SET_CASE(c) upper_case_code = BOOLEAN(isAupper(c)) \
	 /* Watch out for side effects. */
#define lower_case_code BOOLEAN(!upper_case_code) \

#define A_TO_LOWER(c) (ASCII)(isAupper(c) ? (int)c+040 : c)
#define A_TO_UPPER(c) (ASCII)(isAlower(c) ? (int)c-040 : c) \
 \
/* Handle the difference between |ASCII| and |outer_char|. */
#define isAlpha(c) isalpha(XCHR(c))
#define isDigit(c) isdigit(XCHR(c)) /* We're working on |ASCII| input. */
#define isBdigit(c) ((c)==48 || (c)==49) /* Is it a binary numeral? */
#define isOdigit(c) (isDigit(c) && c!=56 && c!=57) /* Octal numeral? */
#define isXdigit(c) isxdigit(XCHR(c)) /* Hex numeral? */ \

#define mark_harmless \
	{ \
	SET_COLOR(ordinary); \
	if (history==SPOTLESS) \
		history = HARMLESS_MESSAGE; \
	} \

#define mark_error \
	{ \
	SET_COLOR(ordinary); \
	history = ERROR_MESSAGE; \
	} \
 \

#define OUTPUT_LINE outp_line[lan_num(language)]
#define OUTPUT_FILE_NAME outp_nm[lan_num(out_language)]
#define OUT_LANGUAGE(language) \
	(R77_or_F ? (Fortran88 ? FORTRAN_90 : FORTRAN) : language)
#define OUT_FILE_NAME outp_nm[lan_num(OUT_LANGUAGE(language))] \

#define PUTC(c) \
	{ \
	CHECK_OPEN; \
	if(putc((int)(c),out_file) == EOF) \
		out_error(OC("putc")); \
	} \

#define MAX_FILE_NAME_LENGTH 200 \

#define WEB_FILE 0
#define web_file_name prms[WEB_FILE].web.File_name /* Main source file name. */
#define web_file prms[WEB_FILE].web.File /* Main source file. */ \

#define CUR_FILE incl_depth
#define cur_file_name prms[CUR_FILE].web.File_name /* Current input file name. 
*/
#define cur_file prms[CUR_FILE].web.File /* Current input file. */ \

#define cur_line cur0_prms->Line /* Number of current line in current file. */ 
\

#define change_file_name prms[CUR_FILE].change.File_name
#define change_file prms[CUR_FILE].change.File
#define change_line prms[CUR_FILE].change.Line \
 \
/* --- Stuff used mostly within |input_ln| --- */
#define num_in_buffer cur0_prms->Num_in_buffer
#define comment_in_buffer cur0_prms->Comment_in_buffer
#define scanning_C_cmnt cur0_prms->Scanning_C_cmnt
#define start_C cur0_prms->Start_C
#define last_was_empty cur0_prms->Last_was_empty
#define continuing_line cur0_prms->Continuing_line
#define last_was_continued cur0_prms->Last_was_continued \
 \
/* The following are used as arguments to |input_ln|. */
#define INPUT_FILE &prms[CUR_FILE].web
#define CHANGE_FILE &prms[CUR_FILE].change \
 \
/* --- Buffers --- */
#define cur_buffer cur0_prms->Buffer
#define buffer_end cur0_prms->Buffer_end
#define limit cur0_prms->Limit /* points to the last character in the buffer. 
*/ \

#define change_buffer (cur_prms.change)->Buffer
#define change_buffer_end (cur_prms.change)->Buffer_end
#define change_limit (cur_prms.change)->Limit \

#define MAX_DOT_LENGTH 31 /* Don't have to scan farther than this to see if 
it's \
			a dot constant. The~31 is a \FORTRAN-90 limit. */ \

#define dot_const (eight_bits)19 /* Make octal constant. */ \

#define MAKE_RECURSIVE 42 /* To allow a WEB macro to be recursive, preface its 
\
	definition by this symbol, as in `\.{@m *R R}'.  (Recursive macros \
	are not presently implemented.) */ \

#define AUTO_INSERT 91
#define END_AUTO_INSERT 93 \

#define PROTECTED 33 /* A protected macro ---`\.{@m!}'---may not be redefined. 
*/ \

#define ACTIVE_BRACKETS NO
#define ALL_CMNTS_VERBATIM NO
#define ALL_INCLUDES NO
#define AUTO_APP_SEMI NO
#define AUTO_LINE YES
#define AUTO_PSEUDO_SEMIS YES
#define BEEPS YES
#define BLOCK_NUMS NO
#define BSLASH_CONTINUED_STRINGS NO
#define CHK_IFELSE NO
#define CHK_STMTS NO
#define COLOR_MODE0 NO_COLOR
#define COMPARE_OUTFILES NO
#define COMPOUND_ASSIGNMENTS YES
#define CPP_COMMENTS YES
#define DBG_OUTPUT NO
#define DEFERRED_MACROS NO
#define DOT_CONSTANTS YES
#define FORTRAN88 NO	/* By default, it's \FORTRAN-77. */
#define FORTRAN_LABEL YES
#define FREE_FORM_INPUT YES
#define FREE_FORTRAN NO
#define IGNORE_C NO
#define IN_ESCAPE '\\'
#define INDEX_HIDDEN NO
#define INDEX_ONE NO
#define INPUT_MACROS YES
#define KEEP_TRAILING_COMMENTS YES
#define LC_KEYWORDS YES /* Changed 1/11/98 */
#define LINE_INFO YES
#define LOWERCASE_TOKENS NO
#define M4_ NO
#define MAKEINDEX NO
#define NO_XREF NO
#define NUMBER_DOS NO
#define NUWEB_MODE NO
#define OVERLOAD_OPS YES
#define POINT_COMMENTS NO
#define PRN_CONTENTS YES
#define PRN_OUTER_MACROS YES
#define PRN_fORMATS YES
#define PRN_FORMATS YES
#define PRN_LIMBO YES
#define PRN_INDEX YES
#define PRN_MACROS YES
#define PRN_MODULES YES
#define PRN_SEMIS NO
#define PRN_V YES
#define PRN_VERSION NO
#define PRN_W YES
#define QUOTED_INCLUDES NO
#define RATFOR77 YES
#define READ_IFORMATS NO
#define REDEFINE_BUILTINS NO
#define REDEFINE_MACROS NO
#define REVERSE_INDICES NO
#define RMV_FILES YES
#define SKIP_IFILES NO
#define SKIP_INCLUDES NO
#define STATISTICS NO
#define SUBSCRIPT_FCNS YES
#define TOGGLE_INCLUDES NO
#define TOP_VERSION YES
#define TRANSLATE_ASCII0 NO
#define TRANSLATE_BRACKETS YES
#define TRY_EXTENSIONS NO
#define TEX_PROCESSOR LaTeX_p
#define XREF_UNNAMED YES \

#define CCHAR '&' /* Default \FORTRAN\ continuation character. */ \

#define NUM_RATFOR_CMDS 20 /* The total number of reserved \RATFOR\ keywords. \
	This is used for an array size later on. */ \

#define mod_info info.mod
#define mod_ilk mod_info->Ilk
#define macro_type info.Macro_type \

#define defined_in(languag) dummy.defined_info[lan_num(languag)].section
#define defined_type(languag) dummy.defined_info[lan_num(languag)].type
#define ilk Ilk[language_num]
#define expandable dummy.RX.Expandable
#define rlink dummy.RX.Rlink
#define x_translate dummy.RX.Expand \

#define USED_BY_NEITHER ((eight_bits)0xFF)
#define USED_BY_OTHER ignore \

#define ESC 0x1b
#define MD "[1m" /* High intensity */
#define US "[4m" /* Underline */
#define MR "[7m" /* Reverse video */
#define MO "[m"  /* Revert to normal */ \
 \
/* In the following, the |ordinary| setting is necessary to kill off \
underlining.  Should do this for |sset_color| as well. */
#define SET_COLOR(field) \
	set_color(wt_style.color.ordinary.value), \
	set_color(wt_style.color.field.value) \

#define SSET_COLOR(field) sset_color(wt_style.color.field.value) \

#define CLR_PRINTF(when, field, args) \
	{ \
	if(msg_level >= when) \
		{ \
		SET_COLOR(field); \
		printf args; fflush(stdout); \
		set_color(color0.last); \
		} \
	} \

#define cur_fcn begun[rlevel-1].name
#define NO_FCN (sixteen_bits)0 \
	/* Value of |cur_fcn| when function name is unknown. */ \

#define cur_struct begun[rlevel-1].name
#define is_function begun[rlevel-1].function
#define symbolic_label begun[rlevel-1].symbolic \

#define mark_defined w_style.misc.mark \

#define OC(s) ((outer_char HUGE *)(s)) \

#define STAT0(name,size,num,max_num,abs_max_num,abbrev,ctrl_chars) \
	stat0(OC(name),size,num,max_num,abs_max_num, \
		OC(abbrev),OC(ctrl_chars)) \

#define OVERFLW(msg,abbrev) overflow(OC(msg),OC(abbrev))
#define NEW_SPRM(name, value) new_sprm(OC(name), value)
#define SPRM_LEN 1500 \

#define RAT_OK(msg) Rat_OK(OC(msg)) \

#define APP_STR(s) app_str(OC(s)) \

#define and_and (eight_bits)4 /* Make octal constant. */ /* `|&&|'.*/
#define star_star (eight_bits)5 /* Make octal constant. */ /* `|@r x**y|' .*/ \
 \
/* The next two only occur in different languages, so they can have the same \
value. */
#define neqv (eight_bits)8 /* Make octal constant. */ /* `|@r .neqv.|'.*/
#define ellipsis neqv /* `|...|'.*/ \

#define stmt_label (eight_bits)24 /* Make octal constant. */ \

#define slash_slash (eight_bits)22 /* Make octal constant. */  /* Concatenation 
`|@r \/|' .*/ \

#define bell (eight_bits)7 /* Make octal constant. */ /* |ASCII| code for 
ringing the bell.*/
#define tab_mark 9 /* |ASCII| code used as tab-skip.*/
#define line_feed (eight_bits)10 /* Make octal constant. */ /* |ASCII| code 
thrown away at end of line; $\equiv$ \
			\.{'\\n'}. */
#define form_feed (eight_bits)12 /* Make octal constant. */ /* |ASCII| code 
used at end of page.*/
#define carriage_return (eight_bits)13 /* Make octal constant. */ /* |ASCII| 
code used at end of line.*/ \

#define gt_gt (eight_bits)16 /* Make octal constant. */ /* `|>>|'; this doesn't 
exist in MIT.*/
#define lt_lt (eight_bits)18 /* Make octal constant. */ /* `|<<|'; this doesn't 
exist in MIT.*/ \

#define plus_plus (eight_bits)11 /* Make octal constant. */ /* `|++|'; this 
corresponds to MIT's up-arrow.*/
#define minus_minus (eight_bits)1 /* Make octal constant. */ /* `|--|'; this 
corresponds to MIT's down-arrow.*/ \

#define minus_gt (eight_bits)25 /* Make octal constant. */ /* `|->|'.*/
#define eqv minus_gt /* `|@r .eqv.|'.*/ \

#define not_eq (eight_bits)26 /* Make octal constant. */ /* `|!=|'.*/ \

#define paste (eight_bits)27 /* Make octal constant. */ /* `|##|'.*/ \

#define lt_eq (eight_bits)28 /* Make octal constant. */ /* `|<=|'.*/
#define gt_eq (eight_bits)29 /* Make octal constant. */ /* `|>=|'.*/ \

#define eq_eq (eight_bits)30 /* Make octal constant. */ /* `|==|'.*/ \

#define or_or (eight_bits)31 /* Make octal constant. */ /* `||| |'.*/ \

#define begin_language (eight_bits)14 /* Make octal constant. */ /* Mark a 
language switch.*/ \

#define left_array (eight_bits)17 /* Make octal constant. */  /* `$\LS$'.*/
#define right_array (eight_bits)21 /* Make octal constant. */ /* `$\SR$'.*/ \

#define interior_semi (eight_bits)20 /* Make octal constant. */ /* `\.;'.  In 
\Fortran, a semicolon that's already \
	present in the input line, as opposed to one that's inserted by \
	\FWEB. */ \

#define ID_FLAG 10240 /* \bf DON'T MONKEY WITH THIS NUMBER!. */ \

#define length(c) ((c+1)->byte_start-(c)->byte_start) /* the length of a name. 
*/ \

#define llink link /* left link in binary search tree for module names. */
#define root CAST(name_pointer,name_dir)->rlink /* the root of the binary 
search \
						tree  for module names */ \

#define is_intrinsic(n) (n->intrinsic_word & (boolean)language)
#define is_keyword(n) (n->keyword & (boolean)language) \

#define BTRANS mod_trans(OC("beginning in section"),module_count) /* English! 
*/
#define MTRANS mod_trans(OC("section"),module_count) /* String including 
section and \
						page info.  English! */
#define MTRANS0 mod_trans(OC(""),module_count)
#define MOD_TRANS(mnum) mod_trans(OC("section"), mnum) /* English! */ \

#define UPDATE_TERMINAL fflush(stdout) /* Empty the terminal output buffer. */
#define new_line putchar('\n') 
#define putxchar putchar
#define ASCII_write(p0,n) fflush(stdout), \
		ASCII_file_write(stdout,p0,(int)(n)) \
	/* Write on the standard output, converting from |ASCII|. */ \

#define begin_format_stmt (eight_bits)121 /* Make octal constant. */
#define end_format_stmt (eight_bits)122 /* Make octal constant. */ \

#define is_identifier(c) (isAlpha(c) || c==95 || c==36 || \
	(c==37 && !C_LIKE(language) && !Fortran88) ) \
		/* This defines the starting character of an identifier. */ \

#define is_kind(c) (isDigit(c) || isAlpha(c) || c==95 || c==36) \
	/* \Fortran-90 kind parameter. */ \

#define GET_MEM(why,nunits,type) \
	(type HUGE *)get_mem0((outer_char *)why,(unsigned long)(nunits), \
		sizeof(type)) \

#define FREE_MEM(p,why,nunits,type) \
	free_mem0((void HUGE *)p,(outer_char *)why,(unsigned long)(nunits), \
		sizeof(type)) \

#define ALLOC(type,ptr,abbrev,nunits,dn) \
	ptr = (type HUGE *)alloc((outer_char *)abbrev,(BUF_SIZE HUGE *)&nunits, \
		sizeof(*ptr),dn) \
 \

#define MCHECK0(n,reason) mcheck0((unsigned long)(n),(outer_char *)reason) \
 \
	
#define EVALUATE(val,p0,p1) \
	  {unsigned long nbytes; \
	  val_ptr = val_heap = \
	  GET_MEM("val_heap",nbytes=2*((p1)-(p0)),VAL); \
		evaluate(&val,p0,p1); \
	  if(val_heap) FREE_MEM(val_heap,"val_heap",nbytes,VAL); \
	  } \
 \
	
#define DONE_LEVEL (cur_byte >= cur_end) /* Do we need to pop? */ \



/* Created automatically from typedefs.web. */
#include "os.h"



#ifdef _FWEB_h
	#define EXTERN part1_or_extern /* This is further redefined below,
				depending on the setting of |part|. */
	#define SET SET1
#else
	#define EXTERN extern
	#define SET(stuff)
#endif



#ifdef _FTANGLE_h
	#define IN_TANGLE part1_or_extern
	#define TSET TSET1
#else
	#define IN_TANGLE extern
	#define TSET(stuff)
#endif /* |_TANGLE_h| */

#ifdef _COMMON_h
	#define IN_COMMON part1_or_extern
	#define CSET SET1
#else
	#define IN_COMMON extern
	#define CSET(stuff)
#endif /* |_COMMON_h| */

#ifdef _PROD_h
	#define IN_PROD part1_or_extern
	#define PSET SET1
#else
	#define IN_PROD extern
	#define PSET(stuff)
#endif /* |_PROD_h| */

#ifdef _RATFOR_h
	#define IN_RATFOR part1_or_extern
	#define RSET SET1
#else
	#define IN_RATFOR extern
	#define RSET(stuff)
#endif /* |_RATFOR_h| */

#ifdef _EVAL_h
	#define IN_EVAL
	#define ESET(stuff) = stuff
#else
	#define IN_EVAL extern
	#define ESET(stuff)
#endif /* |_EVAL_h| */

#ifdef _MACS_h
	#define IN_MACS
#else
	#define IN_MACS extern
#endif /* |_MACS_h| */

#ifdef _STYLE_h
	#define IN_STYLE
	#define SSET(stuff) = stuff
#else
	#define IN_STYLE extern
	#define SSET(stuff)
#endif /* |_STYLE_h| */



typedef unsigned char eight_bits; /* The fundamental single-byte token. If
	your machine does not support |unsigned char| you should change
	the definition of |eight_bits| to |unsigned short|. */


typedef unsigned short sixteen_bits; /* Identifiers and similar things take
					up two bytes. */

typedef unsigned char outer_char; /* Type of characters outside \.{WEB}. */

typedef eight_bits boolean; /* The logical type. (\CWEB\ had |short| here.
	Indeed, some compilers give warnings about type conversions because the
	result of logical operations is an |int|, not a |char|.) */

typedef unsigned long BUF_SIZE; /* Size of dynamic arrays. */

typedef long STMT_LBL; /* \Fortran\ statement label.  (Negative is allowed.) */

typedef unsigned short LINE_NUMBER; /* Line number of \WEB\ source or output.*/

typedef long CASE_TYPE; /* The type for |case| values in \Ratfor.  */

/* For |web_strcmp|. {\bfit Web's convention differs from C's}!
	If you don't pay attention to this, you'll get bugs that are
	hard to track down. */
typedef enum {LESS=0, /* first name is lexicographically less than the second*/
	EQUAL=1, /* the first name is equal to the second */
	GREATER=2, /* first name is lexicographically greater than the
second */
	PREFIX=3, /* the first name is a proper prefix of the second */
	EXTENSION=4} LEXI; /* first name is a proper extension of the
second. */


typedef enum {tangle=0,weave=1} PROGRAM; /* The two processors. */

IN_COMMON PROGRAM program;



IN_COMMON outer_char version[] CSET(VERSION); /* \FWEB\ version number. */
IN_COMMON outer_char release_date[] CSET(RELEASE_DATE);
	/* Release date for this version. */
IN_COMMON outer_char *the_system, *local_banner; /* Name of the
	machine/operating system; and a possible additional local banner. */



IN_COMMON short phase CSET(0); /* Which phase are we in? */


typedef enum {OK,WARNING,ERROR} ERR_TYPE;



 /* The highest bit sets the basic language. */
typedef enum
	{
	NO_LANGUAGE = 	0,

	C = 		0x1,
	RATFOR =	0x2,
	FORTRAN = 	0x4,
	TEX = 		0x8,
	LITERAL =	0x10,

	C_PLUS_PLUS =	0x20,
	RATFOR_90 =	0x40,
	FORTRAN_90 =	0x80,

	NUWEB_OFF =	0xF0, /* Not a language, but used in |send_single|. */
	NUWEB_ON =	0xF1
	} LANGUAGE;

IN_COMMON LANGUAGE cmd_language CSET(NO_LANGUAGE);/* To check against
override. */
IN_COMMON boolean column_mode CSET(NO);

/* These names are used for error messages from the processors. */
IN_COMMON CONST char HUGE *languages[NUM_LANGUAGES]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {"C","RATFOR","FORTRAN","TEX","VERBATIM",
	  "C++","RATFOR--90","FORTRAN--90"}
#endif /* |part == 1| */
#endif /* |defined _COMMON_h| */
;

/* The following are used with \.{\\Winfo}. */
IN_COMMON CONST char HUGE *Xlanguages[NUM_LANGUAGES]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {"C","\\Ratfor","\\Fortran","\\TeX","VERBATIM",
	  "\\Cpp","\\Ratfor--90","\\Fortran--90"}
#endif /* |part == 1| */
#endif /* |defined _COMMON_h| */
;

/* These abbreviations are short-hands for the language---they are used,
for example, in the index. */
IN_COMMON CONST char HUGE *lang_codes[NUM_LANGUAGES]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {"C","R","N","X","V","C++","R90","N90"}
#endif
#endif
;



IN_COMMON outer_char begin_comment_char[NUM_LANGUAGES]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
 	= {'/','#','C','%','/', '/','#','C'}
#endif
#endif
; /* |C|, |RATFOR|, |FORTRAN|, |TEX|, |LITERAL|, \dots. */

IN_COMMON CONST outer_char end_comment_char[NUM_LANGUAGES]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {'/',' ',' ',' ','/', '/',' ',' '}
#endif
#endif
;



typedef struct
	{
	outer_char abbrev[3]; /* Two-character abbreviation for the
variable. */
	short bytes;	/* Number of bytes in one unit. */
	BUF_SIZE min,	/* Minimum possible value. */
		nunits, /* How many units to allocate, or the default
value. */
		max; 	/* Maximum possible value. */
	} MEM;



typedef struct
	{
	unsigned
		formats:1, Formats:1, /* Print \.{@f}, \.{@F}. */
		limbo:1, /* Print \.{@l}. */
		macros:1, /* Print \.{@m}. */
		outer_macros:1, /* Print \.{@d}. */
		v:1, /* Print \.{@v}. */
		w:1 /* Print \.{@w}. */
		;
	} DEFN_MASK;



typedef enum {TeX_p,LaTeX_p} TeX_PROCESSOR; /* What to use with \FWEAVE. */

typedef enum
	{
	NO_COLOR, ANSI_COLOR, BILEVEL, TRILEVEL, USER_COLORS
	} COLOR_MODE;

typedef struct
	{
	LANGUAGE Language; /* The current language. May be set by encountering
a module name, or by explicit \.{@n}, \.{@r}, or \.{@c} commands. */
	short Language_num,Language_index; /* These are set by
|ini_language|. */
	short uses; /* Number of times module is used.  Incremented by
			\FWEAVE\ in \.{@<Append a module name@>}. */

boolean
/* Flags for really current state. */
	In_format, /* Inside a |@r format| statement. */
	In_data, /* Inside a |@r data| statement. */
	Intermingle, /* Inside something like a |@r data|
statement. */
	Include_line, /* Inside an \&{include} line. */
/* Options flags.  Some of these apply to all languages, others differ from
language to language and are thus arrays. */
	Active_brackets, /* Special array handling? */
	All_cmnts_verbatim, /* Should \.{TANGLE} copy all comments? . */
	All_includes, /* Cross-reference all include files? */
	Auto_app_semi, /* For \.{WEAVE}, automatically
append a pseudo-semi to the end of \.{WEB} macro definitions? */
	Auto_semi[NUM_LANGUAGES], /* Fill in semicolon at end of source line? */
	Auto_line, /* Auto-insert line number after \.{@\%}? */
	Auto_pseudo_semis[NUM_LANGUAGES],
		/* F90 code:  append pseudo-semis, not semis. */
	Beeps, /* Do we beep the terminal for certain errors? */
	Block_nums[NUM_LANGUAGES], /* */
	Bslash_continued_strings, /* Do the continuations of
strings require a starting backslash? */
	Chk_ifelse, /* Protect parenthesized strings? */
	Chk_stmts, /* Check statement syntax in \Ratfor? */
	Compare_outfiles, /* Check new (temporary) vs.\ old output? */
	Compound_assignments, /* Do we allow things like \.{+=}? */
	CPP, /* Do we recognize \.{C++}? */
	CPP_comments[NUM_LANGUAGES], /* Allow short comments? */
	Dbg_output, /* Print each character fired at output? */
	Deferred_macros, /* Allow deferred macros? */
	Dot_constants, /* Recognize dot constants like `\.{.eq.}'? */
	ForTran88, /* Turn on stuff for Fortran-88? */
	Fortran_Label, /* Label on same line? */
	Free_form_input[NUM_LANGUAGES], /* Free-form syntax. */
	Ignore_C, /* Throw away single \Fortran\ comment lines. */
	In_escape[NUM_LANGUAGES], /* (|outer_char|) continuation character
for end-of-lines. */
	Index_hidden, /* Index skipped include files. */
	Index_one, /* Index single-character identifiers? */
	Input_macros, /* Generate the default ``\.{\\input fwebmac}'' line? */
	Keep_trailing_comments, /* For \TeX, retain comments that don't
start a line. */
	Lc_keywords, /* Lower-case \Fortran\ and \Ratfor\ I/O keywords? */
	Line_info, /* Should \FTANGLE\ print out line information? */
	Lowercase_tokens, /* Output lower-case tokens (\Ratfor). */
	M4, /* Recognize \.{M4} preprocessor commands? */
	Makeindex, /* Output \.{makeindex} file? */
	No_xref, /* Should \.{WEAVE} print an index? */
	Number_dos, /* */
	Nuweb_mode, /* Emulate \.{nuweb}? */
	Overload_ops, /* Is operator overloading allowed? */
	Point_comments[NUM_LANGUAGES], /* Does \.! signify a \Fortran\ or
\Ratfor\ comment? */
	Prn_contents, /* Print table of contents? */
	Prn_index, /* Print index? */
	Prn_input_lines, /* Used in |input_ln| to print out the lines sent
back. */
	Prn_input_addresses, /* Print out the buffer addresses. */
	Prn_modules, /* Print module list? */
	Prn_semis, /* Print semicolons in \Fortran\ output. */
	Prn_version, /* Print the \FWEB\ version? */
	Quoted_includes, /* Cross-reference quoted include files? */
	RatFor77, /* Expand \Ratfor\ code directly to \Fortran-77? */
	Read_iformats, /* Read include files for formats. */
	Redefine_builtins, /* Permit built-in functions to be redefined. */
	Redefine_macros, /* Permit user macros to be redefined. */
	Reverse_indices[NUM_LANGUAGES], /* C-style indexing in \Fortran? */
	Rmv_files, /* Remove temporary files related to \.{-H}? */
	Skip_ifiles, /* \.{-j} --- skip files already included. */
	Skip_includes, /* For \.{WEAVE}, don't read in \.{@I} commands.
(Uppercase '\.{I}' only.) */
	Statistics, /* Print statistics about memory usage? */
	Subscript_fcns, /* Put module references on functions? */
	Suppress_cmds, /* ??? */
	Toggle_includes, /* For \.{WEAVE}, read in \.{@I} commands, but
don't print them out. */
	Top_version, /* Header info at top of output? */
	Translate_ASCII, /* Do we bother with the |xchr|--|xord|
conversions? */
	Translate_brackets, /* Brackets to parentheses in \Fortran? */
	Truncate_ids, /* Shorten identifiers? */
	Try_extensions, /* Search through list of possible file names? */
	Xref_unnamed; /* Cross-reference unnamed references? */

COLOR_MODE Color_mode; /* The color setting. */
DEFN_MASK Defn_mask; /* What defn's to print by \FWEAVE. */
TeX_PROCESSOR TeX_Processor; /* Processor to be used with \FWEAVE. */

outer_char HUGE*outp_nm[NUM_LANGUAGES]; /* Current output file names. */
FILE *outp_file[NUM_LANGUAGES]; /* File ptrs associated with above. */
	} PARAMS;

IN_COMMON PARAMS params,global_params;
IN_COMMON boolean stop_the_scan;



typedef enum {OUTER,INNER} PARSING_MODE;

IN_COMMON PARSING_MODE parsing_mode CSET(OUTER);



typedef struct
	{
	boolean Preprocessing; /* Are we scanning a preprocessor command? */
	boolean At_beginning;  /* Are we at logical beginning of line? */
	boolean Sharp_include_line; /* Does line start with ``|#include|''? */
	boolean Sharp_pragma_line; /* Starts with ``|#pragma|''? */
	} PARSE_PARAMS;

IN_COMMON PARSE_PARAMS parse_params
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {NO,YES}
#endif
#endif
;



EXTERN boolean upper_case_code SET(NO);

/* For debugging of target machines with a different character set than
that of the present machine, use the |DEBUG_XCHR| flag to force the
internal representation to be ``scrambled |ASCII|'', which replaces the
array~|xchr| with |wt_style.xchr|. */
#if(DEBUG_XCHR)
	#define XCHR_ wt_style.xchr /* Scrambled mapping. */
#else
	#define XCHR_ xchr /* The mapping for this machine. */
#endif /* |DEBUG_XCHR| */

#if(TRANSLATE_ASCII)
	#define XORD(outer) xord[outer]
	#define XCHR(inner) XCHR_[inner]
#else /* Don't bother with the translations. */
	#define XORD(outr) (outr) /* Funny spelling from Dethier's changes. */
	#define XCHR(innr) (innr)
#endif /* |TRANSLATE_ASCII| */

typedef unsigned char ASCII; /* Type of characters inside \.{WEB}. */



typedef struct
	{
	CONST char HUGE *reserved_word;
	eight_bits type;
	} RESERVED_WORD;



typedef enum
	{
	SPOTLESS, /*  Normal jobs */
	HARMLESS_MESSAGE, /*  Non-serious info was printed */
	ERROR_MESSAGE, /*  An error was noted */
	FATAL_MESSAGE /*  We had to stop prematurely */
	} HISTORY;

IN_COMMON HISTORY history CSET(SPOTLESS); /* indicates how bad this run was */

typedef enum
	{
	ALWAYS,
	NOTHING = 0,
	ERRORS_ONLY,
	WARNINGS,
	SHORT_INFO,
	EVERYTHING
	} MSG_LEVEL;

IN_COMMON MSG_LEVEL msg_level CSET(EVERYTHING); /* When to print. */

typedef enum
	{
	NONE,
	BRIEF,
	VERBOSE
	} TRACING_LEVEL;

IN_COMMON TRACING_LEVEL tracing CSET(NONE); /* For debugging \.{WEAVE}. */



typedef enum {ERR_NULL,ERR_C,ERR_T,ERR_W,ERR_R,ERR_M,ERR_S,ERR_F} ERR_ORIGIN;
IN_COMMON boolean err_happened CSET(NO);




IN_COMMON LANGUAGE out_language; /* Current language for output file. */
IN_COMMON FILE *out_file; /* Current output file pointer. */
IN_COMMON int incl_depth; /* Current level of file nesting. */

typedef struct
	{
	FILE *File;	/* Pointer to file. */
	LINE_NUMBER Line; 	/* Line number. */
	ASCII HUGE *Buffer; /* Input buffer. */
	ASCII HUGE *Buffer_end;
	ASCII HUGE *K0;
	ASCII HUGE *Limit; /* Next unfilled position. */
	int Num_in_buffer; /* Number remaining to be read. */
	boolean Comment_in_buffer;
	boolean Found_at,At_line;
	boolean Scanning_C_cmnt,Start_C,Last_was_empty;
	boolean Continuing_line,Last_was_continued;
	outer_char File_name[MAX_FILE_NAME_LENGTH];
	} INPUT_PRMS0;

IN_COMMON INPUT_PRMS0 HUGE *cur0_prms; /* Pointer to current parameters. */

typedef struct
	{
	INPUT_PRMS0 HUGE *web, HUGE *change;
	} CUR_PRMS;

IN_COMMON CUR_PRMS cur_prms; /* Address of current input parameters. */

typedef struct
	{
	LANGUAGE Language;
	PARSING_MODE Parsing_mode;
	boolean Column_mode;
	} INPUT_PARAMS;

typedef struct Rcs
	{
	ASCII HUGE *keyword, HUGE *txt;
	struct Rcs HUGE *next;
	} RCS;

typedef struct
	{
	RCS HUGE *start, HUGE *end;
	} RCS_LIST;

typedef struct
	{
	INPUT_PRMS0 web, change;
	INPUT_PARAMS input_params;
	RCS_LIST rcs_list; /* RCS keywords. */
	} INPUT_PRMS;

IN_COMMON BUF_SIZE max_include_depth;
IN_COMMON INPUT_PRMS *prms; /* Stack of |max_include_depth+1| open files. */

IN_COMMON outer_char HUGE *tex_fname; /* Name of |tex_file|. */
#define tex_file out_file /* Where output of \.{WEAVE} goes. */

IN_COMMON outer_char HUGE *fwebmac; /* The default macro package. */

IN_COMMON boolean input_has_ended; /* If there is no more input. */
IN_COMMON boolean changing; /* If the current line is from |change_file|. */

typedef struct
	{
	outer_char HUGE *name; /* The ultimate output file name. */
	outer_char HUGE *tmp_name; /* Temporary file name, so new results
					can be compared with old ones. */
	FILE *ptr; /* A pointer to |tmp_name|. */
	eight_bits previously_opened; /* Possibly opened, but now closed. */
	eight_bits global_scope; /* To control closing at end of each sectn. */
	} OPEN_FILE; /* Info about previously opened files. */


typedef eight_bits HUGE *PARGS[];



IN_COMMON ASCII HUGE *id_first; /* Where the current identifier begins in
					the buffer */
IN_COMMON ASCII HUGE *id_loc; /* Just after the current identifier in the
					buffer */

typedef struct
	{
	ASCII *name;
	int n;
	} BUILT_IN;

IN_COMMON BUILT_IN incl_likes[]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {
	{(ASCII *)"changequote",11},
	{(ASCII *)"ifelse",6},
	{(ASCII *)"include",7},
	{(ASCII *)"index",5},
	{(ASCII *)"len",3},
	{(ASCII *)"maketemp",8},
	{(ASCII *)"sinclude",8},
	{(ASCII *)"substr",6},
	{(ASCII *)"syscmd",6},
	{(ASCII *)"translit",8},
	{(ASCII *)"",0}
	}
#endif
#endif
;

IN_COMMON BUILT_IN WEB_incl_likes[]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {
	{(ASCII *)"$COMMENT",8},
	{(ASCII *)"$DEFINE",7},
	{(ASCII *)"$ERROR",6},
	{(ASCII *)"$IF",3},
	{(ASCII *)"$IFCASE",7},
	{(ASCII *)"$IFELSE",7},
	{(ASCII *)"$LEN",4},
	{(ASCII *)"$M",2},
	{(ASCII *)"_COMMENT",8},
	{(ASCII *)"_DEFINE",7},
	{(ASCII *)"_ERROR",6},
	{(ASCII *)"_IF",3},
	{(ASCII *)"_IFCASE",7},
	{(ASCII *)"_IFELSE",7},
	{(ASCII *)"_LEN",4},
	{(ASCII *)"_M",2},
	{(ASCII *)"",0}
	}
#endif
#endif
;



IN_COMMON BUILT_IN non_labels[]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {
	{(ASCII *)"contains",8},
	{(ASCII *)"default",7},
	{(ASCII *)"private",7},
	{(ASCII *)"protected",9},
	{(ASCII *)"public",6},
	{(ASCII *)"sequence",8},
	{(ASCII *)"",0}
	}
#endif
#endif
;



typedef struct
	{
	ASCII *symbol;
	short len;
	eight_bits code; /* Something like |dot_const|. */
	eight_bits cat; /* Category code for special constants and
operators. */
	eight_bits token; /* The tokenized meaning of this operator. */
	} DOTS;

typedef struct
	{
	ASCII name[MAX_DOT_LENGTH+3]; /* Holds the macro name to be
appended. */
	eight_bits cat; /* Category of the operator. */
	eight_bits num; /* Position in the table. */
	} DOT_OP;

IN_COMMON DOT_OP dot_op
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {"\\",0,0}
#endif
#endif
;



IN_COMMON boolean in_macro CSET(NO);
	
IN_COMMON BUF_SIZE mbuf_size; /* Set dynamically. */
IN_COMMON eight_bits HUGE *mp; /* Next available position in |macrobuf|. */

IN_COMMON boolean from_buffer CSET(NO); /* Are we reading from a buffer? */



IN_COMMON int argc; /* copy of |ac| parameter to |main| */
IN_COMMON outer_char **argv; /* copy of |av| parameter to |main| */
IN_COMMON outer_char HUGE *pa, *pa_begin; /* Current/init value of |*argv|. */



typedef struct
	{
	outer_char HUGE *args;
	boolean intrinsics, keywords, reserveds;
	} RSRVD;



IN_COMMON outer_char cchar CSET(CCHAR); /* Fortran's continuation
character. */

IN_COMMON ASCII cont_char CSET(92); /* Current continuation char for eol. */
IN_COMMON boolean free_Fortran CSET(NO); /* Free-form syntax in \Fortran.  */
IN_COMMON boolean free_90 CSET(NO); /* \Fortran/\Ratfor-90 and free-form 
syntax. */

IN_COMMON unsigned short tr_max[NUM_LANGUAGES]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {0,0,0,0,0,0,0,0}
#endif
#endif
;

IN_COMMON CONST char HUGE *filter_char[NUM_LANGUAGES]
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {"","_","_","","", "","_","_"}
#endif
#endif
;

IN_COMMON outer_char abbrev_cmds[NUM_RATFOR_CMDS+1] CSET(""); /* Nothing
	suppressed by default. */



IN_COMMON outer_char HUGE *cmd_ln_buf;



typedef enum {NO_TYPE,ORDINARY_ID,RESERVED_WD,INTRINSIC_FCN,KEYWD} WORD_TYPE;

IN_COMMON WORD_TYPE word_type CSET(ORDINARY_ID);

#define X_FCN SRTN	/* |typedef| didn't work on the VAX. */

typedef struct RX_link
	{
	struct name_info HUGE *Rlink; /* right link in binary search tree for
					module names */
	X_FCN (HUGE_FCN_PTR * HUGE *Expand)(VOID); /* Array of functions
for keyword expansion (one for each language). */
	boolean Expandable; /* For which language is this expandable? */
	} RX_LINK;

typedef struct
	{
	char Ilk;
	PARAMS params;	
	} MOD_INFO;

IN_COMMON boolean index_flag; /* Print identifier in index? */

typedef boolean NAME_TYPE; /* Type of identifier, enumerated below. */

enum {NEVER_DEFINED=0,
	GENERIC_NAME,FUNCTION_NAME,M_MACRO,D_MACRO,IMPLICIT_RESERVED,
	TYPEDEF_NAME,
	NEVER_DEFINED0=0x80,
	GENERIC_NAME0,FUNCTION_NAME0,M_MACRO0,D_MACRO0,IMPLICIT_RESERVED0,
	TYPEDEF_NAME0};

/* Maybe the |defined_type| is already marked to not appear in the index.
(It's $> 128$.)  To properly set a new type, we use a macro to keep the
flag and attach it to the new type. */
#define SET_TYPE(p,type) p->defined_type(language) =\
	 ((boolean)(type) | (boolean)((p->defined_type(language) & 0x80)))

/* To recover the base type, use the following, which strips off the flag: */
#define DEFINED_TYPE(p) (p->defined_type(language) & 0x7F)

typedef struct
	{
	sixteen_bits section; /* Section number where identifier defined. */
	NAME_TYPE type; /* Kind of identifier, such as function name. */
	} DEFINED_INFO;

typedef struct
	{
	ASCII HUGE *text; /* The replacement text for the macro. */
	unsigned int len; /* Length of replacement text. */
	eight_bits cat; /* Category code. */
	} WV_MACRO;

typedef struct name_info
	{
	ASCII HUGE *byte_start; /* Beginning of the name in |byte_mem|. */
	struct name_info HUGE *link; /* Used for hashing. */
	union
		{
		struct RX_link RX; /* For \FTANGLE. */
		DEFINED_INFO defined_info[NUM_LANGUAGES]; /* For \FWEAVE. */
		} dummy;
	boolean reserved_word,intrinsic_word,keyword;
	boolean Language;
	union
		{
		char Macro_type; /* For \FTANGLE. */
		boolean upper_case; /* For \FWEAVE\ identifiers. */
		MOD_INFO HUGE *mod; /* For \FWEAVE\ module names */
		} info;
	eight_bits Ilk[NUM_LANGUAGES];/* Used by ident.'s in \WEAVE\ only. */
	ASCII HUGE *equiv_or_xref; /* Info corresponding to names. */
	WV_MACRO HUGE *wv_macro; /* For fancy identifiers. */
	} NAME_INFO; /* Contains information about an identifier or mod
name. */

typedef NAME_INFO HUGE *name_pointer; /* pointer into array of |name_info|s. */



/* Information for each language. */
typedef struct
	{
	CONST outer_char *op_macro; /* The default \FWEB\ macro. */
	boolean overloaded; /* Has it been overloaded? */
	eight_bits cat;	/* Category code for this operator. */
	outer_char HUGE *defn; /* Replacement text for the \Fortran\ macro. */
	} OP_INFO;

/* The description of an operator. */
typedef struct
	{
	ASCII HUGE *op_name; /* \Fortran-like name of operator. Not |const|
because it's converted to |ASCII|. */
	OP_INFO info[NUM_LANGUAGES];
	} OPERATOR;



typedef enum
	{
	NULL_COLOR,
	BLACK,RED,GREEN,YELLOW,BLUE,MAGENTA,CYAN,WHITE,NORMAL,HIGHEST_COLOR
	} COLOR;

IN_STYLE CONST char *clr_name[]
#ifdef _STYLE_h
	= {"NULL",
	   "black","red","green","yellow","blue","magenta","cyan", "white",
	    "default"}
#endif
;

typedef struct
	{
	COLOR last,present;
	} COLOR0;

IN_COMMON COLOR0 color0
#ifdef _COMMON_h
#if(part == 0 || part == 1)
	= {NORMAL,NORMAL}
#endif
#endif
;

typedef struct
	{
	short n;	/* Number of escape sequences attached to this color. */
	outer_char **string;	/* Array of pointers to those sequences. */
	} SEQUENCES;

/* A buffer for an array of strings. */
typedef struct
{
int num;
int n;
outer_char **s;
} BUF;

BUF buf;

IN_STYLE outer_char HUGE *termcap; /* Name of termcap file. */
IN_STYLE BUF sput_buf; /* For temporary color strings. */
IN_COMMON BUF c_buf; /* For commas. */



typedef enum
	{
	TeX_escape,TeX_bgroup,TeX_egroup,TeX_math_shift,TeX_alignment_tab,
	TeX_eol,TeX_parameter,TeX_superscript,TeX_subscript,TeX_ignored,
	TeX_space,TeX_letter,TeX_other,TeX_active,TeX_comment,TeX_invalid
	} TeX_CATEGORY;

IN_COMMON TeX_CATEGORY TeX[128];



EXTERN sixteen_bits id_defined;

typedef struct
	{
	CONST char HUGE *name; /* Identifier. */
	int len;	/* Length of identifier. */
	X_FCN (HUGE_FCN_PTR *expand)(VOID); /* Function that expands this
token. */
	sixteen_bits HUGE *pid; /* Address of the |sixteen_bits| that is to be
initialized. */
	} SPEC;



typedef struct
	{
	eight_bits *start; /* Macro to be inserted. */
	eight_bits *end; /* End of |start|. */
	} INSERT_TEXT;

typedef struct
	{
	INSERT_TEXT program,module,subroutine,function,blockdata,interface;
	} INSERT_MATERIAL;



boolean Rat_OK PROTO((outer_char *msg));
IN_COMMON boolean Rat_is_loaded; /* Set by call to |is_Rat_present|. */
IN_COMMON boolean xpn_Ratfor CSET(YES);

IN_TANGLE int spcs_after_cmnt TSET(0);/* Turned on for Ratfor error
messages. */
IN_TANGLE int brace_level TSET(0);
IN_TANGLE boolean checking_label TSET(NO);
IN_TANGLE INSERT_MATERIAL insert; /* For automatic insertions. */


EXTERN boolean long_comment;



IN_COMMON ASCII xord[]; /* specifies conversion of input characters. */
#ifdef scramble_ASCII
	IN_COMMON ASCII xxord[];
#endif
IN_COMMON outer_char xchr[]; /* specifies conversion of output characters. */



IN_COMMON BUF_SIZE buf_size; /* Used for \FWEAVE; see \.{common.web}. */
IN_COMMON ASCII HUGE *loc; /* points to the next character to be read from the
				buffer*/

typedef struct
	{
	unsigned size; /* Length of |list|. */
	unsigned num; /* Number of entries (e.g., number of colons). */
	outer_char HUGE *list; /* Colon-delimited List of include files. */
	} INCL_PATHS;



IN_COMMON name_pointer name_ptr; /* first unused position in |byte_start|. */
IN_COMMON ASCII HUGE *byte_ptr; /* first unused position in |byte_mem|. */

typedef name_pointer HUGE *hash_pointer;
IN_COMMON hash_pointer hash, /* heads of hash lists */
	hash_end, /* end of |hash| */
	h; /* index into hash-head array */




EXTERN boolean mac_mod_name;



IN_COMMON int mod_level CSET(0);



IN_COMMON sixteen_bits module_count; /* The current module number. */
IN_COMMON boolean HUGE *chngd_module; /* Dynamic array: Is the module/
					changed? */
IN_COMMON boolean prn_where; /* Tells \.{TANGLE} to print line and file
					info. */



#undef expr
#define expr 1

#undef unop
#define unop 2

#undef binop
#define binop 3

extern DOTS HUGE *dots; /* The dynamic table; see \.{common.web}. */

#ifdef _FWEB_h

	EXTERN DOTS dots0[]
   #if(part == 0 || part == 1)
	    = {
		{(ASCII *)"@@@",3,dot_const,expr,0}, /* Dummy */
		{(ASCII *)"AND",3,dot_const,binop,and_and}, /* |and_and| */
		{(ASCII *)"EQ",2,dot_const,binop,eq_eq}, /* |eq_eq| */
		{(ASCII *)"EQV",3,dot_const,binop,eqv}, /* |eqv| */
		{(ASCII *)"FALSE",5,dot_const,expr,0},
		{(ASCII *)"GE",2,dot_const,binop,gt_eq}, /* |gt_eq| */
		{(ASCII *)"GT",2,dot_const,binop,62}, /* |62| */
		{(ASCII *)"LE",2,dot_const,binop,lt_eq}, /* |lt_eq| */
		{(ASCII *)"LT",2,dot_const,binop,60}, /* |60| */
		{(ASCII *)"NE",2,dot_const,binop,not_eq}, /* |not_eq| */
		{(ASCII *)"NEQV",4,dot_const,binop,neqv}, /* |neqv| */
		{(ASCII *)"NOT",3,dot_const,unop,33}, /* |33| */
		{(ASCII *)"OR",2,dot_const,binop,or_or}, /* |or_or| */
		{(ASCII *)"TRUE",4,dot_const,expr,1},
		{(ASCII *)"XOR",3,dot_const,binop,neqv}, /* |neqv| */
		{(ASCII *)"",0,0,0,0}
		}
	#endif /* |part == 1| */
		;
#endif /* |_FWEB_h| */



#ifdef _FWEB_h

	EXTERN DOTS mcmds[]
   #if(part ==0 || part == 1)
	 = {
		{(ASCII *)"define",6,WEB_definition},
		{(ASCII *)"elif",4,m_elif},
		{(ASCII *)"elseif",6,m_elif},
		{(ASCII *)"else",4,m_else},
		{(ASCII *)"endfor",6,m_endfor},
		{(ASCII *)"endif",5,m_endif},
		{(ASCII *)"for",3,m_for},
		{(ASCII *)"if",2,m_if},
		{(ASCII *)"ifdef",5,m_ifdef},
		{(ASCII *)"ifndef",6,m_ifndef},
		{(ASCII *)"line",4,m_line},
		{(ASCII *)"undef",5,m_undef},
		{(ASCII *)"",0,0}
	    }
	#endif /* |part == 1| */
		;
#endif /* |_FWEB_h| */



IN_COMMON sixteen_bits HUGE *args; /* For macro processing. */
IN_COMMON BUF_SIZE max_margs;

IN_COMMON boolean upcoming_kind CSET(NO);
	/* For use after dot constant or character kind. */


#ifdef _FWEB_h
#if(part == 0 || part == 1)

outer_char *ccode_name FCN((code))
	eight_bits code C1("")
{
switch(code)
	{
   case begin_FORTRAN: return (outer_char *)"begin_FORTRAN";
   case begin_RATFOR: return (outer_char *)"begin_RATFOR";
   case begin_C: return (outer_char *)"begin_C";
   case ascii_constant: return (outer_char *)"ascii_constant";
   case big_line_break: return (outer_char *)"big_line_break";
   case begin_meta: return (outer_char *)"begin_meta";
   case end_meta: return (outer_char *)"end_meta";
   case TeX_string: return (outer_char *)"TeX_string";
   case xref_roman: return (outer_char *)"xref_roman";
   case xref_typewriter: return (outer_char *)"xref_typewriter";
   case xref_wildcard: return (outer_char *)"xref_wildcard";
   case formatt: return (outer_char *)"formatt";
   case definition: return (outer_char *)"definition";
   case WEB_definition: return (outer_char *)"WEB_definition";
   case begin_code: return (outer_char *)"begin_code";
   case module_name: return (outer_char *)"module_name";
   case new_module: return (outer_char *)"new_module";
   case m_ifdef: return (outer_char *)"m_ifdef";
   case m_ifndef: return (outer_char *)"m_ifndef";
   case m_if: return (outer_char *)"m_if";
   case m_else: return (outer_char *)"m_else";
   case m_elif: return (outer_char *)"m_elif";
   case m_endif: return (outer_char *)"m_endif";
   case m_undef: return (outer_char *)"m_undef";
   case m_line: return (outer_char *)"m_line";

#ifdef _FTANGLE_h
   case begin_vcmnt: return (outer_char *)"begin_vcmnt";
   case begin_bp: return (outer_char *)"begin_bp";
   case insert_bp: return (outer_char *)"insert_bp";
   case control_text: return (outer_char *)"control_text";
#endif /* |_FTANGLE_h| */

#ifdef _FWEAVE_h
   case dont_expand: return (outer_char *)"dont_expand";
   case auto_label: return (outer_char *)"auto_label";
   case macro_module_name: return (outer_char *)"macro_module_name";
   case switch_math_flag: return (outer_char *)"switch_math_flag";
   case underline: return (outer_char *)"underline";
   case thin_space: return (outer_char *)"thin_space";
   case math_break: return (outer_char *)"math_break";
   case line_break: return (outer_char *)"line_break";
   case no_line_break: return (outer_char *)"no_line_break";
   case pseudo_semi: return (outer_char *)"pseudo_semi";
   case macro_space: return (outer_char *)"macro_space";
   case copy_mode: return (outer_char *)"copy_mode";
   case toggle_output: return (outer_char *)"toggle_output";
   case pseudo_expr: return (outer_char *)"pseudo_expr";
   case pseudo_colon: return (outer_char *)"pseudo_colon";
   case trace: return (outer_char *)"trace";
#endif /* |_FWEAVE_h| */
   default: return OC("UNKNOWN");
	}	
}
#endif /* |part == 1| */
#endif /* |_FWEB_h| */




IN_COMMON BUF_SIZE max_bytes;
IN_COMMON ASCII HUGE *byte_mem; /* Dynamic array: characters of names. */
IN_COMMON ASCII HUGE *byte_end; /* End of |byte_mem|. */

IN_COMMON BUF_SIZE max_names;
IN_COMMON NAME_INFO HUGE *name_dir; /* Dynamic array: information about
names. */
IN_COMMON name_pointer name_end; /* End of |name_dir|. */
IN_COMMON name_pointer npmax; /* |name_ptr - 1|. */

IN_COMMON BUF_SIZE longest_name;
IN_COMMON ASCII HUGE *mod_text; /* Dynamic array: name being sought for. */
IN_COMMON ASCII HUGE *mod_end; /* End of |mod_text|. */




IN_STYLE outer_char HUGE *sbuf, HUGE *sbuf_end;/* One line of style file. */
IN_STYLE CONST outer_char HUGE *sloc; /* Position in |sbuffer|. */
IN_STYLE outer_char HUGE *slimit; /* Next available position in buffer. */
IN_STYLE LINE_NUMBER s_line SSET(0); /* Input line number. */




typedef enum
	{
	_DO_CMD,
	block_CMD,blockdata_CMD,
	break_CMD,case_CMD,contains_CMD,
	default_CMD,do_CMD,for_CMD,function_CMD,
	if_CMD,interface_CMD,module_CMD,next_CMD,program_CMD,
	repeat_CMD,return_CMD,type_CMD,subroutine_CMD,switch_CMD,until_CMD,
	where_CMD,while_CMD
	} CMD;

typedef struct
	{
	CMD cmd; /* Type of keyword being expanded. */
	sixteen_bits name; /* Identifier for this program unit. */
	sixteen_bits symbolic; /* Symbolic loop label. */
	boolean function; /* Is this a function? */
	LINE_NUMBER line; /* Line number at which expansion started. */
	int level; /* Expansion level. */
	} BEGUN;

IN_TANGLE BEGUN HUGE *begun; /* Dynamic array. */
IN_TANGLE int rlevel TSET(0); /* Current level of \Ratfor\ expansion.  This is
		incremented for each expandable \Ratfor\ keyword. */



typedef enum
 	{MORE_PARSE=-1,GOTO_MISTAKE=-2,GOTO_GET_IDENTIFIER=-3,
	 GOTO_GET_A_STRING=-4,GOTO_SKIP_A_COMMENT=-5} GOTO_CODE;




typedef enum {LIMBO,TEX_,DEFINITION,CODE} PART;

IN_COMMON PART the_part CSET(LIMBO);

typedef struct
	{
	int generic_name,fcn_name,WEB_macro,outer_macro,imp_reserved_name,
		typedef_name;
	} MARK_DEFINED;



typedef struct
	{
	outer_char *reserved, *RESERVED;
	outer_char *short_id;
	outer_char *id, *ID;
	outer_char *id_outer, *ID_OUTER;
	outer_char *id_inner, *ID_INNER;
	outer_char *intrinsic;
	outer_char *keyword, *KEYWORD;
	outer_char *typewritr;
	outer_char *wildcrd;
	} FORMAT;



typedef struct
{
outer_char *options;
outer_char *file;
} OPTIONS_FILE;

typedef struct
	{
	OPTIONS_FILE class, package;
	} LATEX;



typedef char CC_BUF[2][40]; /*  One line of output for the control codes. */



typedef enum
	{
	MISCELLANEOUS, /* ``normal'' state */
	NUM_OR_ID, /* state associated with numbers and identifiers */
	UNBREAKABLE, /* state associated with \.{@\&} */
	VERBATIM /* state in the middle of a string */
	} OUTPUT_STATE;




