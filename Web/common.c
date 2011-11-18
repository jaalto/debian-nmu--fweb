#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/common -A -# --F -= 1.62/Web/common.c"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/common.web"\
  CHANGE FILE:  (none)
#endif
#define _COMMON_h  
#define COMMON_FCNS_   \

#define VERSION  "1.61"
#define RELEASE_DATE  "September 23, 1998" \

#define normal  0
#define roman  1
#define wildcard  2
#define typewriter  3 \

#define is_reserved(a)(a->ilk>typewriter) \

#define append_xref(c)if(xref_ptr==xmem_end) \
OVERFLW("cross-references","r"); \
else \
{ \
(++xref_ptr)->num= c; \
xref_ptr->Language= (boolean)language; \
} \

#define def_flag  10240 \

#define xref  equiv_or_xref \
 \
 \
 \

#define app(a)*(tok_ptr++)= a
#define APP_ID  app(id_flag+PTR_DIFF(sixteen_bits,id_lookup(id_first,id_loc,normal),name_dir))
#define app1(a)app(tok_flag+PTR_DIFF(sixteen_bits,(a)->trans,tok_start)) \

#define trans  trans_plus.Trans
#define no_math  2
#define yes_math  1
#define maybe_math  0 \

#define id_flag  10240
#define res_flag  2*id_flag
#define mod_flag  ((sixteen_bits)(3*(sixteen_bits)id_flag)) \

#define tok_flag  ((sixteen_bits)(4*(sixteen_bits)id_flag))
#define inner_tok_flag  ((sixteen_bits)(5*(sixteen_bits)id_flag)) \
 \
 \

#define freeze_text  *(++text_ptr)= tok_ptr \

#define cur_end  cur_state.end_field
#define cur_byte  cur_state.byte_field
#define cur_name  cur_state.name_field
#define cur_repl  cur_state.repl_field
#define cur_mod  cur_state.mod_field \

#define cur_language  cur_state.language
#define cur_global_language  cur_state.global_params.Language \
 \
 \

#define cur_params  cur_state.params
#define cur_global_params  cur_state.global_params \
 \

#define macrobuf  cur_state.macro_buf
#define cur_mp  cur_state.mp
#define macrobuf_end  cur_state.macro_buf_end \

#define STKLEN  20000U \
 \

#define first_text_char  0
#define last_text_char  0377 \

#define TOO_LONG   \
{ \
 \
fatal(ERR_C,OC("Input line too long; "),OC("please use the `-ybs...' option to increase buffer size from \
its present value of %lu characters."),buf_size); \
} \

#define N_WORK  3
#define N_END  (N_WORK+2) \

#define IS_POINT(c) \
(c=='!'&&(point_comments||(c1= getc(cur0_prms->File),ungetc(c1,cur0_prms->File),c1=='!'))) \

#define MARK(type,delim,len)mark_cmnt(type,delim,len,p) \

#define BLANK_OUT(d)MEMSET((d)->pos,040,(d)->len) \

#define is_C_style_cmnt  (C_style_cmnt= ((short_cmnt= Cpp_comments&&*lp== \
057&&*(lp+1)==057))||(*lp==057&&*(lp+1)==052)) \

#define start_comment  (is_C_style_cmnt||(*lp==(char)begin_comment0) \
||(*lp==(char)begin_comment1)) \

#define start_Rcomment  ((R_style_cmnt= BOOLEAN(*lp==cmnt_char&& \
*(lp+1)!=cmnt_char&&*(lp-1)!=cmnt_char&& \
!(*(lp-1)==0100)))||is_C_style_cmnt) \

#define k0  cur0_prms->K0
#define found_at  cur0_prms->Found_at
#define at_line  cur0_prms->At_line \

#define LINES_DONT_MATCH  (change_limit-change_buffer!=limit-cur_buffer|| \
STRNCMP(cur_buffer,change_buffer,PTR_DIFF(size_t,limit,cur_buffer))) \

#define change_params  prms[incl_depth].input_params \

#define ABORT_ON_ERROR  YES
#define DONT_ABORT_ON_ERROR  NO \

#define FCLOSE(file_ptr)if(file_ptr!=stdin)fclose(file_ptr);file_ptr= NULL \

#define MAX_SIZE_T  ((BUF_SIZE)(size_t)(~(0L))) \

#define PTR_BASE  "[%p,%p) " \

#define SHOW_MEM  0 \

#define BP_MARKER  1 \

#define PROPER_END(end) \
end= (np+1)->byte_start; \
if(*end==BP_MARKER&&np!=npmax)end= ((BP*)end)->byte_start \

#define MAX_ID_LENGTH  32 \

#define hash_size  353 \

#define stringg  (eight_bits)02 \

#define constant  (eight_bits)03
#define begin_Xmeta  or_or
#define end_Xmeta  star_star
#define cdir  (eight_bits)06
#define colon_colon  (eight_bits)011 \

#define join  (eight_bits)0177 \

#define ID0  0200
#define TOKEN1(a)((a)<ID0) \

#define MACRO_ARGUMENT  0377 \

#define BASE2  0400 \

#define MODULE_NAME  10240
#define MODULE_NUM  20480
#define LINE_NUM  53248L \

#define IDENTIFIER(left,right) \
((sixteen_bits)(((left)-ID0)*BASE2+(sixteen_bits)(right))) \
 \

#define LEFT(a,id)((eight_bits)(((a)/BASE2+(id)))) \

#define RIGHT(a)((eight_bits)(((a)%BASE2))) \

#define ignore  0 \

#define begin_comment0  (eight_bits)0376
#define begin_comment1  (eight_bits)0375 \

#define module_number  (eight_bits)0201
#define identifier  (eight_bits)0202
#define id_keyword  (eight_bits)0203 \

#define L_switch  (eight_bits)0257
#define begin_FORTRAN  (eight_bits)0260
#define begin_RATFOR  (eight_bits)0261
#define begin_C  (eight_bits)0262
#define begin_LITERAL  (eight_bits)0263 \

#define verbatim  (eight_bits)0264 \
 \

#define invisible_cmnt  (eight_bits)0265
#define compiler_directive  (eight_bits)0266
#define Compiler_Directive  (eight_bits)0267 \

#define keyword_name  (eight_bits)0270 \

#define no_index  (eight_bits)0300
#define yes_index  (eight_bits)0301 \

#define ascii_constant  (eight_bits)0302
#define begin_vcmnt  (eight_bits)0303
#define big_line_break  (eight_bits)0304 \

#define begin_bp  (eight_bits)0305
#define insert_bp  (eight_bits)0306 \

#define begin_meta  (eight_bits)017
#define end_meta  (eight_bits)027 \

#define TeX_string  (eight_bits)0307
#define xref_roman  (eight_bits)0310
#define xref_typewriter  (eight_bits)0311
#define xref_wildcard  (eight_bits)0312 \

#define control_text  (eight_bits)0313 \

#define begin_nuweb  (eight_bits)0314
#define no_mac_expand  (eight_bits)0315
#define set_line_info  (eight_bits)0316
#define short_fcn  (eight_bits)0317 \

#define formatt  (eight_bits)0320 \

#define limbo_text  (eight_bits)0323
#define op_def  (eight_bits)0324
#define macro_def  (eight_bits)0325 \

#define ignore_defn  (eight_bits)0327 \

#define new_output_file  (eight_bits)0331 \

#define definition  (eight_bits)0332
#define undefinition  (eight_bits)0333
#define WEB_definition  (eight_bits)0334 \

#define m_ifdef  (eight_bits)0335
#define m_ifndef  (eight_bits)0336
#define m_if  (eight_bits)0337
#define m_else  (eight_bits)0340
#define m_elif  (eight_bits)0341
#define m_endif  (eight_bits)0342
#define m_for  (eight_bits)0343
#define m_endfor  (eight_bits)0344
#define m_line  (eight_bits)0345
#define m_undef  (eight_bits)0346 \

#define end_of_buffer  (eight_bits)0347 \

#define begin_code  (eight_bits)0350
#define module_name  (eight_bits)0351 \

#define new_module  (eight_bits)0352 \

#define MAX_ERR_BUF  160 \

#define WEAVE_LINE0  OC("{\"")
#define TANGLE_LINE0  OC("  COMMAND LINE: \"") \

#define WEAVE_LINE1  OC("\"} ")
#define TANGLE_LINE1  OC("\"") \

#define ESCAPE_LENGTH  256 \

#define MAX_INI_ARGS  100
#define T_SIZE  200
#define INI_CMNT_CHAR  '%' \

#define BEFORE_CHAR  '-'
#define MIDDLE_CHAR  '0'
#define AFTER_CHAR  '&' \

#define HOME  OC("HOME")
#define ENV_INI  OC("FWEB_INI")
#define ENV_INCLUDES  OC("FWEB_INCLUDES")
#define ENV_HDR_INCLUDES  OC("FWEB_HDR_INCLUDES") \

#define AUX_LEN  200
#define MAX_MOD_NAMES  3 \

#define NMOD_TEMP  200 \

#define THE_FILE_NAME  (a_file_name?pa:(outer_char HUGE*)"stdin") \

#define ARG_BUFFER_SIZE  500
#define COPY_TO_ARG_BUFFER(c)if(pa<arg_buffer_end)*pa++= c; \
else OVERFLW("arg buffer bytes","")
#define MAX_ARGS  100 \

#define STARTING_DO_NUM  UL(90000L) \

#define NOT(flag)BOOLEAN((!flag)^not) \

#define SPURIOUS_MSG  "Spurious trailing text ignored in option" \

#define G_RATIO  2.0
#define MIN_G_RATIO  0.0 \

#define MARGINAL_CASES  5L
#define MIN_MARGINAL_CASES  1 \

#define MAX_SPREAD  UL(128L)
#define MIN_MAX_SPREAD  1 \

#define NEVER_USED  1
#define MULTIPLE_USES  2
#define ALL_WARNINGS  (NEVER_USED|MULTIPLE_USES) \

#define LANGUAGE_SEPARATOR  '=' \

#define DFLT_FNAME_LENGTH  20 \

#define UPDATE_TERMINAL  fflush(stdout) \

#define new_line  putchar('\n')
#define putxchar  putchar \

#define TIMING_PREC  10 \
 \

#define BCHECK(n,reason) \
if(mp+(n)>buf_end) \
OVERFLW("Keyword buffer","") \

#define CUR_QUOTE  ((eight_bits)(single_quote||(!double_quote&&R77_or_F)? \
047:042)) \




#ifndef part
#define part 0 
#else
#if(part != 1 && part != 2 && part != 3)
#define part 1 
#endif
#endif 




#if(part == 0 || part == 1)
#define part1_or_extern
#define SET1(stuff)  =  stuff
#define TSET1(stuff)  =  stuff
#else
#define part1_or_extern extern
#define SET1(stuff)
#define TSET1(stuff)
#endif





#include "typedefs.h"






#include "map.h"




#ifdef ibmpc 
#ifdef borland
extern unsigned _stklen= STKLEN;
#endif
#endif




IN_COMMON ASCII xord[last_text_char+1];
#ifdef scramble_ASCII
ASCII xxord[last_text_char+1];
#endif
IN_COMMON outer_char xchr[0200];



extern DOTS dots0[],mcmds[];




IN_COMMON BUF_SIZE delta_dots;
IN_COMMON BUF_SIZE ndots;
IN_COMMON DOTS HUGE*dots,HUGE*dots_end,HUGE*next_dot;



IN_COMMON BUF_SIZE buf_size;

IN_COMMON ASCII HUGE*loc;


typedef enum{START,END}DELIM_TYPE;
typedef enum{NO_CMNT,SHORT_CMNT,LONG_CMNT}CMNT_TYPE;

typedef struct
{
CMNT_TYPE type;
DELIM_TYPE delim;
eight_bits len;
ASCII HUGE*pos;
}CMNT_DATA;

#define CMNT_MARKS 50

IN_COMMON CMNT_DATA posns[CMNT_MARKS],HUGE*pcmnt CSET(posns),
HUGE*pcmnt_end CSET(posns+CMNT_MARKS);



IN_COMMON ASCII HUGE*pk;



IN_COMMON ASCII HUGE*lp,HUGE*semi_pos;
IN_COMMON boolean found_text,text,C_style_cmnt,short_cmnt,R_style_cmnt;



IN_COMMON ASCII HUGE*last_pos;
IN_COMMON ASCII cmnt_char;



IN_COMMON sixteen_bits module_count;

IN_COMMON BUF_SIZE max_modules;
IN_COMMON boolean HUGE*chngd_module;

IN_COMMON boolean prn_where CSET(NO);

IN_COMMON boolean return_toggle CSET(NO);


IN_COMMON boolean toggling CSET(NO);
IN_COMMON boolean popped CSET(NO);
IN_COMMON boolean no_more_input CSET(NO);










#if SMALL_MEMORY
#define DFLT_BYTES 10000 
#define DFLT_BUF_SIZE 1500
#define DFLT_C_BUF_SIZE 200
#define DFLT_FMT_SIZE 200
#define DFLT_MSG_SIZE 1000
#define DFLT_DELTA_DOTS 20
#define DFLT_MAX_LBLS 20
#define DFLT_LINE_LENGTH 80
#define DFLT_LONGEST_NAME 1000
#define DFLT_MAX_EXPR_CHARS 500
#define DFLT_MAX_IFILES 10
#define DFLT_MAX_INCLUDE_DEPTH 10
#define DFLT_MAX_KEYWORDS 15
#define DFLT_MAX_MARGS 20
#define DFLT_MAX_MODULES 400
#define DFLT_MBUF_SIZE 32767
#define DFLT_MAX_NAMES 1000 
#define DFLT_MAX_REFS 2500 
#define DFLT_SBUF_LEN 300
#define DFLT_STACK_SIZE_T 50
#define DFLT_STACK_SIZE_W 210 
#define DFLT_MAX_SCRAPS 1000 
#define DFLT_MAX_TOKS_T 50000L 
#define DFLT_MAX_TOKS_W 6000 
#define DFLT_MAX_DTOKS 2500
#define DFLT_MAX_TEXTS 2500 
#define DFLT_MAX_DTEXTS 100
#define DFLT_NUM_FILES 15
#define DFLT_OP_ENTRIES 147
#define DFLT_X_BUF_SIZE 80
#else 
#define DFLT_BYTES 90000L
#define DFLT_BUF_SIZE 1500
#define DFLT_C_BUF_SIZE 255
#define DFLT_FMT_SIZE 500
#define DFLT_MSG_SIZE 2000
#define DFLT_DELTA_DOTS 20
#define DFLT_MAX_LBLS 20
#define DFLT_LINE_LENGTH 80
#define DFLT_LONGEST_NAME 10000
#define DFLT_MAX_EXPR_CHARS 500
#define DFLT_MAX_IFILES 100
#define DFLT_MAX_INCLUDE_DEPTH 10
#define DFLT_MAX_KEYWORDS 20
#define DFLT_MAX_MARGS 20
#define DFLT_MAX_MODULES 2000
#define DFLT_MBUF_SIZE 50000L
#define DFLT_MAX_NAMES 4000
#define DFLT_MAX_REFS 20000
#define DFLT_SBUF_LEN 300
#define DFLT_STACK_SIZE_T 50
#define DFLT_STACK_SIZE_W 400
#define DFLT_MAX_SCRAPS 10000
#define DFLT_MAX_TOKS_T 150000L
#define DFLT_MAX_TOKS_W 25000
#define DFLT_MAX_DTOKS 25000
#define DFLT_MAX_TEXTS 10239
#define DFLT_MAX_DTEXTS 500
#define DFLT_NUM_FILES 15
#define DFLT_OP_ENTRIES 157
#define DFLT_X_BUF_SIZE 80
#endif 




IN_COMMON name_pointer name_ptr;
IN_COMMON ASCII HUGE*byte_ptr;



IN_COMMON ASCII HUGE*pformat,HUGE*pdefault,HUGE*pdata,
HUGE*pbp,HUGE*pinclude,HUGE*ppragma,HUGE*pcontains;



IN_COMMON outer_char outp_buf[MAX_OUTPUT_LINE_LENGTH];

IN_COMMON int nbuf_length CSET(72);

IN_COMMON outer_char wbprefix[MAX_FILE_NAME_LENGTH];



IN_COMMON outer_char prefix_end_char CSET(PREFIX_END_CHAR);

IN_COMMON boolean all_std CSET(NO);



IN_COMMON STMT_LBL max_stmt CSET(STARTING_DO_NUM);
IN_COMMON int not;



IN_COMMON double g_ratio CSET(G_RATIO);
IN_COMMON unsigned short marginal_cases CSET(MARGINAL_CASES);
IN_COMMON CASE_TYPE max_spread CSET(MAX_SPREAD);



IN_COMMON CONST char*day[]
#if(part == 0 || part == 1)
= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}
#endif 
;

IN_COMMON CONST char*month[]
#if(part == 0 || part == 1)
= {"January","February","March","April","May","June","July",
"August","September","October","November","December"}
#endif 
;



#if TIMING

IN_COMMON clock_t clock0;
IN_COMMON TIME_T time0;

#if NEW_DIFFTIME
double diff_time FCN((t1,t0))
TIME_T t1 C0("")
TIME_T t0 C1("")
{
#if HAVE_GETTIMEOFDAY
return(double)(t1.tv_sec-t0.tv_sec)
+1.0e-6*(double)(t1.tv_usec-t0.tv_usec);
#else
#if HAVE_SYS_TIMEB_H
return(double)t1.time-(double)t0.time
+1.0e-3*((double)t1.millitm-(double)t0.millitm);



#else
return t1-t0;
#endif 
#endif
}
#endif 

#endif 




typedef struct xref_info0
{
sixteen_bits num;
struct xref_info0 HUGE*xlink;

boolean Language;
}xref_info;

typedef xref_info HUGE*xref_pointer;
typedef ASCII HUGE*XREF_POINTER;





typedef sixteen_bits Token;
typedef Token HUGE*token_pointer;
typedef token_pointer HUGE*text_pointer;



typedef struct
{
eight_bits cat;


eight_bits mathness;
union
{
text_pointer Trans;



}trans_plus;
}scrap;

typedef scrap HUGE*scrap_pointer;



typedef struct{
eight_bits HUGE*end_field;
eight_bits HUGE*byte_field;
name_pointer name_field;
text_pointer repl_field;
sixteen_bits mod_field;
PARAMS global_params,params;
eight_bits HUGE*macro_buf,HUGE*mp,HUGE*macro_buf_end;

}output_state;

typedef output_state HUGE*stack_pointer;



#if(0)
IN_COMMON boolean truncate_ids;
IN_COMMON unsigned short tr_max[];
IN_COMMON name_pointer npmax;
#endif


typedef struct Bp
{
ASCII c;
LANGUAGE Language;
CONST ASCII HUGE*byte_start,HUGE*byte_end;

struct Bp HUGE*next;

struct Trunc HUGE*Root;
}BP;


typedef struct Trunc
{
boolean Language;
size_t num[NUM_LANGUAGES];

ASCII HUGE*id,HUGE*id_end;
BP HUGE*first,HUGE*last;
struct Trunc HUGE*next;
}TRUNC;



typedef struct
{
outer_char*secno;
sixteen_bits pageno,modno0;
boolean subpage_flag;
}SECT_INFO;

IN_COMMON SECT_INFO HUGE*sect_info;

IN_COMMON outer_char HUGE*HUGE*mod_names;
IN_COMMON outer_char HUGE*HUGE*next_mod_name,HUGE*HUGE*last_mod_name;




IN_COMMON long start_line CSET(1);

IN_COMMON long end_line CSET(LONG_MAX);



IN_COMMON int stored_line_length;
IN_COMMON ASCII HUGE*stored_line;



IN_COMMON outer_char last_include_file[MAX_FILE_NAME_LENGTH]CSET(""),
this_include_file[MAX_FILE_NAME_LENGTH]CSET("");







#ifdef SMALL_MEMORY
#define N_MSGBUF 2000
#else
#define N_MSGBUF 10000
#endif





EXTERN boolean change_exists;



#ifndef COMMON_FCNS_
IN_COMMON BUF_SIZE max_modules;
#endif

EXTERN BUF_SIZE max_refs;
EXTERN xref_info HUGE*xmem;
EXTERN xref_pointer xmem_end;

EXTERN xref_pointer xref_ptr;

EXTERN sixteen_bits xref_switch,mod_xref_switch;
EXTERN boolean defd_switch;
EXTERN NAME_TYPE defd_type SET(NEVER_DEFINED);
EXTERN boolean typd_switch;
EXTERN boolean index_short;



EXTERN long max_toks;

EXTERN Token HUGE*tok_mem;
EXTERN token_pointer tok_m_end;

EXTERN long max_texts;

EXTERN token_pointer HUGE*tok_start;
EXTERN text_pointer tok_end;

EXTERN token_pointer tok_ptr;
EXTERN text_pointer text_ptr;

EXTERN token_pointer mx_tok_ptr;
EXTERN text_pointer mx_text_ptr;



EXTERN long max_scraps;
EXTERN scrap HUGE*scrp_info;
EXTERN scrap_pointer scrp_end;

EXTERN scrap_pointer pp;
EXTERN scrap_pointer scrp_base;
EXTERN scrap_pointer scrp_ptr;
EXTERN scrap_pointer lo_ptr;
EXTERN scrap_pointer hi_ptr;

EXTERN scrap_pointer mx_scr_ptr;



EXTERN output_state cur_state;


EXTERN long stck_size;
EXTERN output_state HUGE*stack;
EXTERN stack_pointer stck_end;
EXTERN stack_pointer stck_ptr;



IN_COMMON ASCII string_char;
IN_COMMON boolean in_char_string;



IN_COMMON INPUT_PARAMS change_params0
#if(part == 0 || part == 1)
= {FORTRAN,OUTER,NO}
#endif
;



IN_COMMON BUF_SIZE max_ifiles;
IN_COMMON outer_char**ifiles;
IN_COMMON int num_ifiles;



IN_COMMON BUF_SIZE max_keywords;
IN_COMMON RCS HUGE*rcs;
IN_COMMON unsigned num_keywords;



#ifndef C_TYPES
#include SFILE(y_type.h)
#endif 



IN_COMMON BUF_SIZE total_mem CSET(0);

IN_COMMON BUF_SIZE max_mem CSET(0);



IN_COMMON boolean show_mem CSET(SHOW_MEM);
IN_COMMON BUF_SIZE show_size CSET(10000);



IN_COMMON MEM mem[]
#if(part == 0 || part == 1)
= {
{"b",1,
1000,DFLT_BYTES,ULONG_MAX},

{"bs",1,
500,DFLT_BUF_SIZE,20000},
{"cb",1,
10,DFLT_C_BUF_SIZE,1000},
{"cf",1,
100,DFLT_FMT_SIZE,UL(65536L)},
{"cg",1,
100,DFLT_MSG_SIZE,UL(65536L)},
{"d",sizeof(DOTS),
20,DFLT_DELTA_DOTS,255},

{"dt",sizeof(eight_bits),
1000,DFLT_MAX_DTOKS,ULONG_MAX},
{"dx",sizeof(text),
100,DFLT_MAX_DTEXTS,10239},
{"id",sizeof(INPUT_PRMS),
1,DFLT_MAX_INCLUDE_DEPTH,100},
{"if",sizeof(outer_char*),
1,DFLT_MAX_IFILES,10000},
{"kt",sizeof(output_state),
10,DFLT_STACK_SIZE_T,100},
{"kw",sizeof(output_state),
50,DFLT_STACK_SIZE_W,1000},
{"lb",sizeof(BEGUN),
5,DFLT_MAX_LBLS,255},
{"ll",1,
60,DFLT_LINE_LENGTH,255},

{"ln",1,
3*MAX_FILE_NAME_LENGTH,DFLT_LONGEST_NAME,UL(50000L)},


{"lx",1,
25,DFLT_MAX_EXPR_CHARS,UL(65536L)},
{"m",sizeof(boolean),
100,DFLT_MAX_MODULES,10239},

{"ma",sizeof(sixteen_bits),
1,DFLT_MAX_MARGS,255},
{"mb",1,
5000,DFLT_MBUF_SIZE,ULONG_MAX},
{"n",sizeof(NAME_INFO)+sizeof(name_pointer),
500,DFLT_MAX_NAMES,10239},

{"nf",sizeof(OPEN_FILE),
1,DFLT_NUM_FILES,256},
{"op",sizeof(OPERATOR),
142,DFLT_OP_ENTRIES,256},

{"r",sizeof(xref_info),
500,DFLT_MAX_REFS,UL(65536L)},

{"rk",sizeof(RCS),
11,DFLT_MAX_KEYWORDS,UL(65536L)},
{"s",sizeof(scrap),
1000,DFLT_MAX_SCRAPS,ULONG_MAX},
{"sb",sizeof(outer_char),
100,DFLT_SBUF_LEN,ULONG_MAX},
{"tt",sizeof(eight_bits),
10000,DFLT_MAX_TOKS_T,ULONG_MAX},

{"tw",sizeof(sixteen_bits),1000,
DFLT_MAX_TOKS_W,UL(65536L)},

{"x",sizeof(text),
500,DFLT_MAX_TEXTS,10239},
{"xb",1,
10,DFLT_X_BUF_SIZE,1000},
{"",0,0,0}
}
#endif 
;

IN_COMMON size_t sizeof_mem CSET(sizeof(mem));



IN_COMMON boolean info_option CSET(NO);
IN_COMMON boolean see_rsrvd CSET(NO);
IN_COMMON RSRVD rsrvd
#if(part == 0 || part == 1)
= {NULL,NO,NO,NO}
#endif 
;
IN_COMMON outer_char HUGE*style_args CSET(NULL);
IN_STYLE ASCII HUGE*at_codes;



IN_COMMON CONST char*origin_name[]
#if(part == 0 || part == 1)
= {"","COMMON","FTANGLE","FWEAVE","RATFOR","MACROS","STYLE",".fweb"}
#endif 
;



IN_COMMON boolean found_web,found_change;
IN_COMMON outer_char wbflnm0[MAX_FILE_NAME_LENGTH];




IN_COMMON outer_char
HUGE*HUGE*ini_args,

HUGE*HUGE*new_args,

HUGE*HUGE*pn;
IN_COMMON outer_char HUGE*HUGE*pn0;
IN_COMMON outer_char HUGE*HUGE*pn1;
IN_COMMON FILE*ini_file CSET(NULL);



IN_COMMON INCL_PATHS incl;
IN_COMMON INCL_PATHS hdr_incl;



jmp_buf top_of_get_arg;



IN_COMMON outer_char style_file_name[MAX_FILE_NAME_LENGTH]
CSET(STYLE_FILE_NAME);
IN_COMMON boolean renamed_style CSET(NO);



IN_COMMON boolean doing_cmd_line;
IN_COMMON boolean cmd_prms;



IN_COMMON ASCII HUGE*fbuffer,HUGE*flimit,HUGE*floc;




IN_COMMON BUF_SIZE starting_memory CSET(ULONG_MAX);




IN_COMMON outer_char*extra_args;

IN_COMMON boolean mod_warning_flag CSET(NEVER_USED);



IN_COMMON boolean single_quote CSET(NO),double_quote CSET(NO);





#if(part != 2)


SRTN
common_init(VOID)
{
IN_RATFOR SRTN is_Rat_present PROTO((VOID));
struct tm*t= the_localtime();

#if(TRANSLATE_ASCII || DEBUG_XCHR)
translate_ASCII= YES;
#endif

is_Rat_present();


{
STRNCPY(xchr,"                                 !\"#$%&'()*+,-./0123456789\
:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ ",
sizeof(xchr));


xchr[tab_mark]= '\t';
xchr[012]= '\n';



;

{
int i;



for(i= first_text_char;i<=last_text_char;i++)
{
xord[i]= 040;
#ifdef scramble_ASCII
xxord[i]= 040;
#endif
}


for(i= 1;i<0177;i++)
{
xord[(eight_bits)XCHR_[i]]= (ASCII)i;
#ifdef scramble_ASCII
xxord[(eight_bits)wt_style.xchr[i]]= i;
#endif
}

#ifdef scramble_ASCII
for(i= 0177;i<=0377;i++)
xxord[(eight_bits)wt_style.xchr[i]]= i;
#endif

#if(DEBUG_XCHR)
for(i= 0177;i<=0377;i++)
xord[(eight_bits)XCHR_[i]]= (ASCII)i;
#endif
}

;
}



{
int k;

for(k= 0;k<128;k++)
TeX[k]= TeX_other;

for(k= 0101;k<=0132;k++)
TeX[k]= TeX_letter;

for(k= 0141;k<=0172;k++)
TeX[k]= TeX_letter;

TeX[0134]= TeX_escape;
TeX[0173]= TeX_bgroup;
TeX[0175]= TeX_egroup;
TeX[044]= TeX_math_shift;
TeX[046]= TeX_alignment_tab;
TeX[012]= TeX_eol;
TeX[043]= TeX_parameter;
TeX[0136]= TeX_superscript;
TeX[0137]= TeX_subscript;
TeX[0]= TeX_ignored;
TeX[040]= TeX[tab_mark]= TeX_space;
TeX[0176]= TeX_active;
TeX[045]= TeX_comment;
TeX[0177]= TeX_invalid;
}

;

{
ALLOC(INPUT_PRMS,prms,"id",max_include_depth,1);
}



hash= GET_MEM("hash",hash_size,name_pointer);
hash_end= hash+hash_size-1;

for(h= hash;h<=hash_end;*h++= NULL);


{
pformat= x__to_ASCII(OC("format"));
pdata= x__to_ASCII(OC("data"));
pdefault= x__to_ASCII(OC("default"));
pbp= x__to_ASCII(OC("_BP"));
pinclude= x__to_ASCII(OC("include"));
ppragma= x__to_ASCII(OC("pragma"));

conv_bi(incl_likes);
conv_bi(WEB_incl_likes);
conv_bi(non_labels);

conv_dot(dots0);
conv_dot(mcmds);
}



SET_VAL(mbuf_size,"mb");


{
init_buf(&sput_buf,10);
init_buf(&c_buf,10);
}

;
predefine_macros();


{
params.uses= 0;

#define FSET(flag) =  flag

active_brackets FSET(ACTIVE_BRACKETS);
all_cmnts_verbatim FSET(ALL_CMNTS_VERBATIM);

all_includes FSET(ALL_INCLUDES);
auto_app_semi FSET(AUTO_APP_SEMI);

auto_line FSET(AUTO_LINE);


params.Auto_semi[LN(FORTRAN)]
= params.Auto_semi[LN(FORTRAN_90)]= YES;
params.Auto_semi[LN(RATFOR)]
= params.Auto_semi[LN(RATFOR_90)]
= params.Auto_semi[LN(C)]
= params.Auto_semi[LN(C_PLUS_PLUS)]
= params.Auto_semi[LN(LITERAL)]
= params.Auto_semi[LN(TEX)]
= NO;


params.Auto_pseudo_semis[LN(FORTRAN)]
= params.Auto_pseudo_semis[LN(RATFOR)]
= params.Auto_pseudo_semis[LN(RATFOR_90)]
= params.Auto_pseudo_semis[LN(C)]
= params.Auto_pseudo_semis[LN(C_PLUS_PLUS)]
= params.Auto_pseudo_semis[LN(LITERAL)]
= params.Auto_pseudo_semis[LN(TEX)]
= NO;

params.Auto_pseudo_semis[LN(FORTRAN_90)]FSET(AUTO_PSEUDO_SEMIS);


params.Beeps FSET(BEEPS);


params.Block_nums[LN(C)]
= params.Block_nums[LN(C_PLUS_PLUS)]
= params.Block_nums[LN(LITERAL)]
= params.Block_nums[LN(TEX)]
= NO;

params.Block_nums[LN(FORTRAN)]
= params.Block_nums[LN(FORTRAN_90)]
= params.Block_nums[LN(RATFOR)]
= params.Block_nums[LN(RATFOR_90)]
= BLOCK_NUMS;

bslash_continued_strings FSET(BSLASH_CONTINUED_STRINGS);

chk_ifelse FSET(CHK_IFELSE);
chk_stmts FSET(CHK_STMTS);
compare_outfiles FSET(COMPARE_OUTFILES);
compound_assignments FSET(COMPOUND_ASSIGNMENTS);

Cpp FSET(NO);

dbg_output FSET(DBG_OUTPUT);
deferred_macros FSET(DEFERRED_MACROS);

defn_mask.outer_macros FSET(PRN_OUTER_MACROS);
defn_mask.formats FSET(PRN_fORMATS);
defn_mask.Formats FSET(PRN_FORMATS);
defn_mask.limbo FSET(PRN_LIMBO);
defn_mask.macros FSET(PRN_MACROS);
defn_mask.v FSET(PRN_V);
defn_mask.w FSET(PRN_W);

dot_constants FSET(DOT_CONSTANTS);

params.CPP_comments[LN(C)]
= params.CPP_comments[LN(C_PLUS_PLUS)]
= params.CPP_comments[LN(LITERAL)]
= params.CPP_comments[LN(TEX)]
= CPP_COMMENTS;



params.CPP_comments[LN(FORTRAN)]
= params.CPP_comments[LN(FORTRAN_90)]
= params.CPP_comments[LN(RATFOR)]
= params.CPP_comments[LN(RATFOR_90)]
= NO;

Fortran88 FSET(FORTRAN88);
Fortran_label FSET(FORTRAN_LABEL);

params.Free_form_input[LN(FORTRAN)]
= params.Free_form_input[LN(LITERAL)]
= params.Free_form_input[LN(TEX)]
= NO;
params.Free_form_input[LN(RATFOR)]
= params.Free_form_input[LN(RATFOR_90)]
= params.Free_form_input[LN(C)]
= params.Free_form_input[LN(C_PLUS_PLUS)]
= params.Free_form_input[LN(FORTRAN_90)]
= YES;

keep_trailing_comments FSET(KEEP_TRAILING_COMMENTS);
ignore_C FSET(IGNORE_C);

params.In_escape[LN(FORTRAN)]
= params.In_escape[LN(FORTRAN_90)]
= '&';
params.In_escape[LN(RATFOR)]
= params.In_escape[LN(RATFOR_90)]
= params.In_escape[LN(C)]
= params.In_escape[LN(C_PLUS_PLUS)]
= params.In_escape[LN(LITERAL)]
= params.In_escape[LN(TEX)]
= '\\';

in_escape FSET(IN_ESCAPE);
index_hidden FSET(INDEX_HIDDEN);
index_one FSET(INDEX_ONE);
input_macros FSET(INPUT_MACROS);

lc_keywords FSET(LC_KEYWORDS);
line_info FSET(LINE_INFO);
lowercase_tokens FSET(LOWERCASE_TOKENS);
m4 FSET(M4_);
makeindex FSET(MAKEINDEX);
no_xref FSET(NO_XREF);
number_dos FSET(NUMBER_DOS);
nuweb_mode FSET(NUWEB_MODE);
overload_ops FSET(OVERLOAD_OPS);

params.Point_comments[LN(C)]
= params.Point_comments[LN(C_PLUS_PLUS)]
= params.Point_comments[LN(TEX)]
= params.Point_comments[LN(LITERAL)]
= NO;
params.Point_comments[LN(FORTRAN)]
= params.Point_comments[LN(FORTRAN_90)]
= params.Point_comments[LN(RATFOR)]
= params.Point_comments[LN(RATFOR_90)]
= POINT_COMMENTS;

prn_contents FSET(PRN_CONTENTS);
prn_index FSET(PRN_INDEX);
prn_input_lines FSET(NO);

prn_input_addresses FSET(NO);
prn_modules FSET(PRN_MODULES);
prn_semis FSET(PRN_SEMIS);

quoted_includes FSET(QUOTED_INCLUDES);

Ratfor77 FSET(RATFOR77);

read_iformats FSET(READ_IFORMATS);
params.Reverse_indices[LN(C)]
= params.Reverse_indices[LN(C_PLUS_PLUS)]
= params.Reverse_indices[LN(TEX)]
= params.Reverse_indices[LN(LITERAL)]
= NO;
params.Reverse_indices[LN(FORTRAN)]
= params.Reverse_indices[LN(FORTRAN_90)]
= params.Reverse_indices[LN(RATFOR)]
= params.Reverse_indices[LN(RATFOR_90)]
= REVERSE_INDICES;
rmv_files FSET(RMV_FILES);

skip_ifiles FSET(SKIP_IFILES);
skip_includes FSET(SKIP_INCLUDES);

statistics FSET(STATISTICS);
stop_the_scan FSET(YES);
subscript_fcns FSET(YES);
suppress_cmds FSET(YES);
toggle_includes FSET(TOGGLE_INCLUDES);

top_version FSET(TOP_VERSION);
translate_ASCII FSET(TRANSLATE_ASCII0);

translate_brackets FSET(TRANSLATE_BRACKETS);

truncate_ids FSET(NO);
try_extensions FSET(TRY_EXTENSIONS);
TeX_processor FSET(TEX_PROCESSOR);
xref_unnamed FSET(XREF_UNNAMED);
#undef FSET

#if(TRANSLATE_ASCII || DEBUG_XCHR)
translate_ASCII= YES;
#endif



global_params= params;
}




{

{
int k;



new_fname(&tex_fname,NULL,NULL);
new_fname(&fwebmac,NULL,NULL);

for(k= 0;k<NUM_LANGUAGES;k++)
new_fname(params.outp_nm+k,NULL,NULL);
}


scan_args();


if(found_web)
{
ini_input_prms(WEB_FILE,(outer_char HUGE*)"",ABORT_ON_ERROR);


{
outer_char temp1[100],temp2[1000],
full_web_name[ESCAPE_LENGTH],esc_full_web_name[ESCAPE_LENGTH],
full_change_name[ESCAPE_LENGTH],esc_full_change_name[ESCAPE_LENGTH];
int n1,n2;
BUF_SIZE old_size;



n1= program==tangle?
nsprintf(temp1,OC("\n  RUN TIME:     \"%s, %s at %s.\""),3,the_day(t),the_cdate(t),the_time(t))
:
nsprintf(temp1,OC(""),0);

#if(VMS)
fgetname(web_file,full_web_name);
fgetname(change_file,full_change_name);
#else
STRCPY(full_web_name,web_file_name);
STRCPY(full_change_name,change_file_name);
#endif 

esc_file_name(esc_full_web_name,ESCAPE_LENGTH,full_web_name);
esc_file_name(esc_full_change_name,ESCAPE_LENGTH,full_change_name);

n2= 
nsprintf(temp2,OC(program==tangle?
"\n  WEB FILE:     \"%s\"\n  CHANGE FILE:  %c%s%c":
" {\"%s\"} {%c%s%c} "),4,esc_full_web_name,*esc_full_change_name?'"':'(',*esc_full_change_name?esc_full_change_name:OC("none"),*esc_full_change_name?'"':')');

old_size= STRLEN(cmd_ln_buf)+1;
cmd_ln_buf= (outer_char HUGE*)REALLOC(cmd_ln_buf,old_size+n1+n2,old_size);
STRCAT(cmd_ln_buf,temp1);
STRCAT(cmd_ln_buf,temp2);
}

;

if(program==weave)
open_tex_file();
}



if(language==NO_LANGUAGE)
ini_language(XORD(*LANGUAGE_CODE(GLOBAL_LANGUAGE)));

global_params= params;
}

;

#if 0
banner();
#endif



{
DOTS HUGE*d;

ALLOC(DOTS,dots,"d",delta_dots,0);
ndots= delta_dots;
dots_end= dots+ndots;
next_dot= dots;


for(d= dots0;d->len!=0;d++)
{
if(dot_code(dots,d->symbol,d->symbol+d->len,d->code)!=d->code)

confusion(OC("dots allocation"),OC("Invalid dot code"));
}
}


{
BUF_SIZE cur_prms_units;

alloc(OC("id"),&cur_prms_units,0,-1);

if(cur_prms_units!=DFLT_MAX_INCLUDE_DEPTH)
prms= (INPUT_PRMS*)REALLOC(prms,
(cur_prms_units+1)*sizeof(INPUT_PRMS),
(DFLT_MAX_INCLUDE_DEPTH+1)*sizeof(INPUT_PRMS));
}



ALLOC(boolean,chngd_module,"m",max_modules,0);


{
ALLOC(outer_char*,ifiles,"if",max_ifiles,0);
}


{
ALLOC(RCS,rcs,"rk",max_keywords,0);
}



ALLOC(ASCII,byte_mem,"b",max_bytes,0);
byte_end= byte_mem+max_bytes-1;

ALLOC(NAME_INFO,name_dir,"n",max_names,0);

name_end= name_dir+max_names-1;

ALLOC(ASCII,mod_text,"ln",longest_name,1);
mod_end= mod_text+longest_name;




ALLOC(SECT_INFO,sect_info,"m",max_modules,0);


{
if(program==tangle)
{
ALLOC(sixteen_bits,args,"ma",max_margs,1);
max_margs++;
}
}




CAST(name_pointer,name_dir)->byte_start= byte_ptr= byte_mem;

name_ptr= name_dir+1;
CAST(name_pointer,name_ptr)->byte_start= byte_mem;




root= NULL;

;

{
if(rsrvd.args)see_reserved(&rsrvd);
if(style_args)see_style(style_args,NO);

if(!found_web&&info_option&&!at_codes)
wrap_up();
}



more_includes(&incl,wt_style.Idir);

if(found_web)
read_aux();
}



ASCII HUGE*
x__to_ASCII FCN((p0))
CONST outer_char HUGE*p0 C1("Character string to translate.")
{
if(translate_ASCII)
{
ASCII HUGE*buffer,HUGE*p;
CONST outer_char HUGE*q;

buffer= GET_MEM("x__to_ASCII arg",STRLEN(p0)+1,ASCII);

for(p= buffer,q= p0;*q;p++,q++)
*p= XORD(*q);
*p= '\0';

return buffer;
}
else
return(ASCII HUGE*)p0;
}



ASCII HUGE*
x_to_ASCII FCN((p0))
CONST outer_char HUGE*p0 C1("Character string to translate.")
{
static size_t bufsiz= 0;
static ASCII HUGE*buffer= NULL;

if(translate_ASCII)
{
ASCII HUGE*p;
CONST outer_char HUGE*q;

while(bufsiz<=STRLEN(p0)+1)
{
if(buffer==NULL)
buffer= GET_MEM("x_to_ASCII_buf",bufsiz= 32,ASCII);

else
{
buffer= (ASCII HUGE*)REALLOC(buffer,bufsiz+32,bufsiz);
bufsiz+= 32;
}

if(buffer==NULL)

fatal(ERR_C,OC("!! No more memory (x_to_ASCII)"),OC(""));
}

for(p= buffer,q= p0;*q;p++,q++)
*p= XORD(*q);
*p= '\0';

return buffer;
}
else
return(ASCII HUGE*)p0;
}



ASCII HUGE*
to_ASCII FCN((p0))
outer_char HUGE*p0 C1("Character string to translate.")
{
ASCII HUGE*p;

if(translate_ASCII)
for(p= (ASCII HUGE*)p0;*p;p++)
*p= XORD(*p);

return(ASCII HUGE*)p0;
}



outer_char HUGE*
to_outer FCN((p0))
ASCII HUGE*p0 C1("Internal string to translate to outer world.")
{
outer_char HUGE*p;

if(translate_ASCII)
for(p= (outer_char HUGE*)p0;*p;p++)*p= XCHR(*(ASCII HUGE*)p);

return(outer_char HUGE*)p0;
}



boolean
is_include_like(VOID)
{

if(m4&&is_in(incl_likes,id_first,id_loc))return YES;



if(program==tangle)return NO;

if(!(*id_first==044||*id_first==0137))return NO;
return is_in(WEB_incl_likes,id_first,id_loc);
}


SRTN conv_bi FCN((b))
BUILT_IN HUGE*b C1("")
{
for(;b->n!=0;b++)
b->name= x__to_ASCII((outer_char*)b->name);
}

SRTN
conv_dot FCN((d))
DOTS HUGE*d C1("")
{
for(;d->code!=0;d++)
d->symbol= x__to_ASCII((outer_char*)d->symbol);
}



boolean
is_in FCN((b0,p0,p1))
CONST BUILT_IN b0[]C0("Array of built-ins.")
CONST ASCII HUGE*p0 C0("Start of text.")
CONST ASCII HUGE*p1 C1("End of text.")
{
CONST BUILT_IN HUGE*b;

for(b= b0;b->n!=0;b++)
if(web_strcmp(b->name,b->name+b->n,p0,p1)==EQUAL)
return YES;

return NO;
}



ASCII HUGE*
uppercase FCN((p,n))
ASCII HUGE*p C0("Start of text.")
int n C1("Number of bytes to convert in place.")
{
int k;

for(k= 0;k<n;++k)
p[k]= A_TO_UPPER(p[k]);

return p;
}



boolean
is_dot(VOID)
{
ASCII HUGE*p;
int n;
ASCII temp[MAX_DOT_LENGTH];



for(p= loc,n= 0;n<MAX_DOT_LENGTH;n++,p++)
if(*p==056||!isAlpha(*p))
break;

if(*p!=056||p==loc)
return NO;



STRNCPY(temp,loc,n);
return BOOLEAN(CHOICE(dot_code(dots,uppercase(temp,n),temp+n,dot_const),
YES,NO));
}



eight_bits
dot_code FCN((d0,p0,p1,new_code))
DOTS HUGE*d0 C0("|DOTS| array.")
CONST ASCII HUGE*p0 C0("Start of text.")
CONST ASCII HUGE*p1 C0("End of text.")
eight_bits new_code C1("May we extend the table or not?")
{
DOTS HUGE*d;

re_dot:
for(d= d0;d<next_dot;d++)
if(web_strcmp(d->symbol,d->symbol+d->len,p0,p1)==EQUAL)
{

if(d->code==dot_const)
{
STRCPY(dot_op.name+1,d->symbol);
dot_op.cat= d->cat;
dot_op.num= (eight_bits)(d-dots);
}

return d->code;
}



if(!new_code)return NO;

if(next_dot==dots_end)
{
if((dots= (DOTS HUGE*)REALLOC(dots,
(ndots+delta_dots)*sizeof(DOTS),ndots*sizeof(DOTS)))==NULL)
OVERFLW("dot operators","d");

next_dot= dots+ndots;
ndots+= delta_dots;
dots_end= dots+ndots;
}


next_dot->len= PTR_DIFF(short,p1,p0);
next_dot->symbol= GET_MEM("next_dot->symbol",next_dot->len+1,ASCII);
STRNCPY(next_dot->symbol,p0,next_dot->len);
next_dot->code= new_code;
next_dot->cat= 1;
d0= next_dot++;
next_dot->len= 0;
goto re_dot;
}



eight_bits
is_mcmd FCN((d0,p0,p1))
DOTS HUGE*d0 C0("|DOTS| array.")
CONST ASCII HUGE*p0 C0("Start of text.")
CONST ASCII HUGE*p1 C1("End of text.")
{
DOTS HUGE*d;

for(d= d0;d->code;d++)
if(web_strcmp(d->symbol,d->symbol+d->len,p0,p1)==EQUAL)
return d->code;

return 0;
}




boolean
input_ln FCN((p0))
INPUT_PRMS0 HUGE*p0 C1("Which structure describes the current file?")
{
cur0_prms= p0;
limit= cur_buffer;


cur_line++;




if(!nuweb_mode&&FORTRAN_LIKE(language)&&column_mode&&parsing_mode==OUTER)
switch(language)
{
case FORTRAN:
case FORTRAN_90:
if(!rd_Fortran())
return NO;
break;

case RATFOR:
case RATFOR_90:
if(!rd_Ratfor())
return NO;

if(limit==cur_buffer)
goto empty_line;
break;

default:

confusion(OC("input_ln"),OC("Invalid FORTRAN_LIKE language %i"),language);
}
else
if(!rd_free_form())
return NO;


if(column_mode&&FORTRAN_LIKE(language)&&
PTR_DIFF(size_t,limit,cur_buffer)==2&&
((!auto_semi&&(cur_buffer[1]==073||cur_buffer[1]==040))||
(auto_semi&&cur_buffer[1]==073&&(cur_buffer[0]=='C'||
cur_buffer[0]==0143||cur_buffer[0]==052))))
empty_line:
limit= cur_buffer;


#if(DEBUG)

{
register ASCII HUGE*k;

if(prn_input_lines&&cur_line>=(LINE_NUMBER)start_line
&&cur_line<(LINE_NUMBER)end_line)
{
if(prn_input_addresses)
printf("%lu->%lu (%u) ",
(unsigned long)cur_buffer,(unsigned long)limit,
PTR_DIFF(unsigned,limit,cur_buffer));

printf("%c[%d%s:%u]: \"",
(language==global_language?' ':*LANGUAGE_CODE(language)),
incl_depth,
(changing?"*":""),
cur_line);

for(k= cur_buffer;k<limit;++k)
switch(*k)
{
case(ASCII)begin_comment0:
printf("</*>");
break;

case(ASCII)begin_comment1:
printf("<//>");
break;

case interior_semi:
printf("<;>");
break;

default:
putchar(XCHR(*k));
break;
}

puts("\"");
}
}

;
#endif

return YES;
}



boolean
rd_free_form(VOID)
{
register int c= '\0';
register ASCII HUGE*k;


{
if(num_in_buffer!=0)

{
STRNCPY(cur_buffer,k0,num_in_buffer);
k0= cur_buffer;
limit= cur_buffer+num_in_buffer-N_END;
num_in_buffer= 0;
}


else
{
if(feof(cur0_prms->File))
return NO;


{
k= cur_buffer;


while(k<=buffer_end&&(c= getc(cur0_prms->File))!=EOF&&c!='\n')
if((*(k++)= XORD(c))!=040)limit= k;



if(k>buffer_end)
if((c= getc(cur0_prms->File))!=EOF&&c!='\n')
{
ungetc(c,cur0_prms->File);loc= cur_buffer;TOO_LONG;

}

if(c==EOF&&limit==cur_buffer)
return NO;
}

;
}
}



return YES;
}



boolean
rd_Fortran(VOID)
{
register int c= '\0';
register ASCII HUGE*k;
boolean first_line= YES;


last_was_continued= NO;
scanning_C_cmnt= NO;
string_char= '\0';
in_char_string= NO;



for(k= limit;;k= k0= (limit+= N_END),first_line= NO,cur_line++)
if(num_in_buffer==0)

{
int i;


if(feof(cur0_prms->File))
{
if(first_line)
return NO;
else
goto concatenate_cmnts;
}

k0= limit;


{
if(ignore_C)

{
first_char:
c= getc(cur0_prms->File);

switch(c)
{
case '!':
if(!point_comments)
{
ungetc(c,cur0_prms->File);
break;
}

case 'C':
case 'c':
case '*':
while((c= getc(cur0_prms->File))!=EOF&&c!='\n')
;
cur_line++;
goto first_char;

default:
ungetc(c,cur0_prms->File);
break;
}
}



while(k<=buffer_end&&(c= getc(cur0_prms->File))!=EOF&&c!='\n')
if(c=='\t'&&k<=buffer_end-6)
for(i= 0;i<6;++i)
*(k++)= 040;

else
{
boolean escaped_char= NO;
outer_char c1;

if(c==';')
c= XCHR(interior_semi);
else if(point_comments&&(*k0!=0100)&&
(escaped_char= BOOLEAN(c=='\\')))
{
c= getc(cur0_prms->File);


if(c!='!')
{
ungetc(c,cur0_prms->File);
c= '\\';
}
}


if((*(k++)= CHOICE(IS_POINT(c)&&!escaped_char,
(ASCII)begin_comment1,XORD(c)))!=040)
limit= k;
}

if(k>buffer_end)
if((c= getc(cur0_prms->File))!=EOF&&c!='\n')
{
ungetc(c,cur0_prms->File);loc= cur_buffer;TOO_LONG;

}

if(c==EOF&&limit==cur_buffer)return NO;

}

;



MEMSET(limit,040,N_END);
num_in_buffer= 0;



at_line= BOOLEAN(*k0==0100&&*(k0+1)!=057);

if(at_line&&(*(k0+1)==052||*(k0+1)==040))
found_at= YES;




if(found_at&&k0==cur_buffer)
goto out_of_column_mode;

if(first_line&&at_line)
break;






if(scanning_C_cmnt)
{
scan_for_cmnts();
continue;
}

if(!(at_line||scanning_C_cmnt))

{
boolean is_cmnt= NO,Fortran_cmnt= NO,C_cmnt= NO;

ASCII HUGE*p= k0;



switch(*k0)
{
case 0103:
case 0143:
case 052:
case(ASCII)begin_comment0:
case(ASCII)begin_comment1:
is_cmnt= Fortran_cmnt= YES;
break;

default:

for(;p<limit;p++)
if(*p!=040)
break;

if((*p==057&&(*(p+1)==052
||(*(p+1)==057&&Cpp_comments&&!ignore_C)))
||*p==(ASCII)begin_comment0
||*p==(ASCII)begin_comment1)
is_cmnt= C_cmnt= YES;
break;
}

if(is_cmnt)

{
if(limit==k0+1)
{
limit= k0;

if(!first_line)
goto last_of_read;
else
goto concatenate_cmnts;
}

if(k0>cur_buffer)
MEMSET(k0-N_END,040,N_END);

if(Fortran_cmnt)
*p= begin_comment1;



if(last_was_empty)
{
num_in_buffer= PTR_DIFF(size_t,limit,k0)+N_END;
comment_in_buffer= YES;
limit= cur_buffer;
break;
}

scan_for_cmnts();
continue;
}







if(limit-k0>=5&&!(k0[5]==040||k0[5]==060))

{
register ASCII HUGE*l;
boolean stuff_in_1_5;


if(first_line)
{
scan_for_cmnts();
continue;
}




stuff_in_1_5= NO;

for(l= k0;l<k0+5;++l)
if(*l!=040)
{
stuff_in_1_5= YES;
break;
}




if(stuff_in_1_5)goto neither_cmnt_nor_continuation;

*l= 040;
scan_for_cmnts();
continue;
}


}









neither_cmnt_nor_continuation:
if(first_line)
if(limit==cur_buffer)
{
comment_in_buffer= NO;
num_in_buffer= 0;
break;
}
else
{
scan_for_cmnts();
continue;

}


{
last_of_read:
if(!first_line)
{
num_in_buffer= PTR_DIFF(size_t,limit,k0)+N_END;
limit= MAX(k0-N_WORK,cur_buffer);
}
else limit+= N_WORK;

concatenate_cmnts:
anlz_cmnts();

cur_line--;
break;
}

;
}


else

{

{
STRNCPY(cur_buffer,k0,num_in_buffer);
k0= cur_buffer;
limit= cur_buffer+num_in_buffer-N_END;
num_in_buffer= 0;
}

;


if(found_at)
{
out_of_column_mode:
found_at= column_mode= last_was_empty= NO;
break;

}

if(at_line)
{
last_was_empty= NO;
break;
}


last_was_empty= BOOLEAN(limit==cur_buffer);
scan_for_cmnts();
}





if(*cur_buffer==0100&&!(limit==cur_buffer+1||*(cur_buffer+1)==052||
*(cur_buffer+1)==040))
for(k= cur_buffer+2;k<limit;++k)
if(*k==073)
{
*k= 040;
break;
}

return YES;
}



SRTN
mark_cmnt FCN((type0,delim0,length0,pos0))
CMNT_TYPE type0 C0("")
DELIM_TYPE delim0 C0("")
eight_bits length0 C0("")
ASCII HUGE*pos0 C1("")
{
pcmnt->type= type0;
pcmnt->delim= delim0;
pcmnt->len= length0;
pcmnt->pos= pos0;

if(type0==LONG_CMNT)
scanning_C_cmnt= BOOLEAN(delim0==START);

pcmnt++;

if(pcmnt==pcmnt_end)

fatal(ERR_C,OC("Cmnt-buffer overflow."),OC(" Please simplify long Fortran comment."));

pcmnt->type= NO_CMNT;
pcmnt->delim= START;
pcmnt->len= 0;
pcmnt->pos= limit;
}



SRTN
scan_for_cmnts(VOID)
{
register ASCII HUGE*p;

for(p= k0;p<limit;p++)
switch(*p)
{
case(ASCII)begin_comment0:
if(scanning_C_cmnt)
break;

MARK(LONG_CMNT,START,1);
break;

case(ASCII)begin_comment1:
if(scanning_C_cmnt)
break;

MARK(SHORT_CMNT,START,1);
p= limit;
MARK(SHORT_CMNT,END,0);
break;

case 047:
case 042:
if(!scanning_C_cmnt)

{
if(!in_char_string)
{
in_char_string= YES;
string_char= *p;
break;
}

if(string_char==*p&&p[1]==string_char)
{
p++;
break;
}

in_char_string= NO;
}


break;

case 057:
if(in_char_string||scanning_C_cmnt)
break;

if(*(p+1)==057&&Cpp_comments&&!ignore_C)
{
MARK(SHORT_CMNT,START,2);
p= limit;
MARK(SHORT_CMNT,END,0);
}
else if(*(p+1)==052)
{
MARK(LONG_CMNT,START,2);
p++;
}

break;

case 052:
if(in_char_string)
break;

if(scanning_C_cmnt&&*(p+1)==057)
{
MARK(LONG_CMNT,END,2);
p++;
}

break;
}
}



SRTN
anlz_cmnts(VOID)
{
CMNT_DATA*d;
boolean found_text= NO;
ASCII HUGE*l;

pcmnt->pos= limit;

for(d= posns+1;d<pcmnt;d+= 2)
{
found_text= NO;

for(l= d->pos+d->len;l<(d+1)->pos;l++)
if(*l!=040)
{
found_text= YES;
break;
}

if(found_text)
{
if(d->type==SHORT_CMNT)
{
BLANK_OUT(d-1);
*((d-1)->pos)= begin_comment0;
*(d->pos)= 052;
*(d->pos+1)= 057;
}
}
else if(d->type==(d+1)->type)
{
BLANK_OUT(d);
BLANK_OUT(d+1);
d->type= (d+1)->type= NO_CMNT;
}
}


{
boolean text_after= NO;

if(pcmnt>posns)
{
if(!scanning_C_cmnt)
for(l= limit-1;l>(pcmnt-1)->pos+(pcmnt-1)->len;l--)
if(*l!=040)
{
text_after= YES;
*(l+1)= 073;
break;
}

if(!text_after)
{
pcmnt-= 2;

if(pcmnt<posns)
{

err0_print(ERR_C,OC("Fortran comment didn't end; missing */?"),0);
pcmnt= posns;
}

while(pcmnt->type==NO_CMNT)
{
pcmnt--;

if(pcmnt<posns)

confusion(OC("Insert an automatic semicolon"),OC("Invalid comment structure"));
}

while(pcmnt>=posns)
{
ASCII HUGE*lmin;

if(pcmnt==posns)
lmin= cur_buffer;
else
lmin= (pcmnt-1)->pos+(pcmnt-1)->len;

for(l= pcmnt->pos-1;l>=lmin;l--)
{
if(*l!=040)
{
semi_pos= pcmnt->pos;

{
*(semi_pos+1)= (ASCII)(((pcmnt+1)->type==LONG_CMNT?begin_comment0:
begin_comment1));





if(semi_pos>cur_buffer&&*(semi_pos-1)==0100)
{
*(semi_pos--)= 0100;
}

*semi_pos= 073;




for(lp= semi_pos-1;lp>cur_buffer;lp--)
{
if(*lp==040)continue;

if(*lp==057&&*(--lp)==0100)
{
*semi_pos= 040;
*lp= 073;*(lp+1)= 0100;*(lp+2)= 057;
}
break;
}


;
}


goto done_auto_insert;
}
}

pcmnt-= 2;
}
}
}
else
{
for(l= limit-1;l>=cur_buffer;l--)
if(*l!=040)
{
*(l+1)= 073;
break;
}
}

done_auto_insert:
;
}



pcmnt= posns;
}



boolean
rd_Ratfor(VOID)
{
register int c= '\0';
register ASCII HUGE*k;
boolean found_semi;

string_char= '\0';
in_char_string= NO;


{
if(num_in_buffer!=0)

{
STRNCPY(cur_buffer,k0,num_in_buffer);
k0= cur_buffer;
limit= cur_buffer+num_in_buffer-N_END;
num_in_buffer= 0;
}


else
{
if(feof(cur0_prms->File))
return NO;


{
k= cur_buffer;


while(k<=buffer_end&&(c= getc(cur0_prms->File))!=EOF&&c!='\n')
if((*(k++)= XORD(c))!=040)limit= k;



if(k>buffer_end)
if((c= getc(cur0_prms->File))!=EOF&&c!='\n')
{
ungetc(c,cur0_prms->File);loc= cur_buffer;TOO_LONG;

}

if(c==EOF&&limit==cur_buffer)
return NO;
}

;
}
}





if(*cur_buffer==0100&&(limit==cur_buffer+1
||*(cur_buffer+1)==052||*(cur_buffer+1)==040))
column_mode= NO;
else

{
last_was_continued= continuing_line;
continuing_line= NO;

if(limit==cur_buffer)
return YES;

limit[0]= limit[1]= limit[2]= limit[3]= 040;

cmnt_char= 043;

found_semi= found_text= text= NO;

semi_pos= NULL;



if(!free_form_input&&!(*cur_buffer==0100&&*(cur_buffer+1)==043))
{
for(lp= cur_buffer;;)
if(!skip_Rtext()||!skp_cmnt())break;

switch(*last_pos)
{
case 053:case 055:case 052:case 075:case 0173:case 0175:
case 0136:case 046:case 0174:case 050:case 072:
case 076:case 074:case 0133:case 054:case 0134:
continuing_line= YES;
break;


case 0137:
if(last_pos>cur_buffer)
{
ASCII c;

c= *(last_pos-1);
if(isAlpha(c)||isDigit(c)||
c==0137||c==044)
goto not_continuation;
}
*last_pos= 040;
continuing_line= YES;
break;

default:
not_continuation:
if(!auto_semi)
break;





if(!text&&semi_pos!=NULL)
{
*(semi_pos+1)= (ASCII)(((pcmnt+1)->type==LONG_CMNT?begin_comment0:
begin_comment1));





if(semi_pos>cur_buffer&&*(semi_pos-1)==0100)
{
*(semi_pos--)= 0100;
}

*semi_pos= 073;




for(lp= semi_pos-1;lp>cur_buffer;lp--)
{
if(*lp==040)continue;

if(*lp==057&&*(--lp)==0100)
{
*semi_pos= 040;
*lp= 073;*(lp+1)= 0100;*(lp+2)= 057;
}
break;
}


;
}


else if(found_text&&limit>cur_buffer)*limit++= 073;

break;
}
}
}

;

return YES;
}


boolean skip_Rtext(VOID)
{
static ASCII blank= 040;



if(scanning_C_cmnt)return YES;



for(;lp<limit;++lp)
if(!(*lp==040||*lp==tab_mark))break;

if(lp>=limit)return NO;

;

last_pos= &blank;


if(!start_Rcomment)
{
found_text= text= YES;
}


for(;lp<limit;lp++)
{
if(start_Rcomment)
{
if(R_style_cmnt)
{
*lp= cmnt_char= begin_comment0;
*limit++= 052;*limit++= 057;
}
if(++lp<limit)return YES;
}

if(*lp!=040&&*lp!=tab_mark)
last_pos= lp;
}

return NO;
}


boolean skp_cmnt(VOID)
{

if(text)semi_pos= lp-1;

text= NO;
scanning_C_cmnt= NO;



if(C_style_cmnt)
{
if(short_cmnt)
{
lp= limit;
return YES;
}

for(++lp;lp<limit;lp++)
{
if(*lp==(ASCII)begin_comment0||*lp==(ASCII)begin_comment1)
{
*lp= 0143;
continue;
}

if(*lp==052&&*(lp+1)==057)
{
lp+= 2;
if(lp<=limit)return YES;
}
}

scanning_C_cmnt= YES;
}
else
{
for(++lp;lp<limit;lp++)
if(*lp==(ASCII)begin_comment1)
*lp= 041;

*(limit-2)= 052;*(limit-1)= 057;
}

return NO;
}



SRTN
prime_the_change_buffer(VOID)
{
INPUT_PARAMS input_params;

input_params.Language= language;
input_params.Parsing_mode= parsing_mode;
input_params.Column_mode= column_mode;

language= change_params.Language;
parsing_mode= change_params.Parsing_mode;
column_mode= change_params.Column_mode;

change_limit= NULL;



WHILE()
{
ASCII c;

if(!input_ln(CHANGE_FILE))
{
change_limit= NULL;
goto done_priming;
}

if(limit<cur_buffer+2)continue;

if(cur_buffer[0]!=0100)continue;



if((cur_buffer[1]>=0130&&cur_buffer[1]<=0132)||cur_buffer[1]==0111)
cur_buffer[1]+= 0172-0132;

;


if(cur_buffer[1]==0151)
{
loc= cur_buffer+2;

err0_print(ERR_C,OC("Sorry, no includes allowed in change file"),0);

}

;
if((c= cur_buffer[1])==0170)break;

if(c==0171||c==0172)
{
loc= cur_buffer+2;

err0_print(ERR_C,OC("Where is the matching @x?"),0);

}
else
{
if(c==0154)
if(limit==cur_buffer+2)

err0_print(ERR_C,OC("Missing language character after @L"),0);
else c= cur_buffer[2];

switch(c)
{

case 0143

:
language= change_params.Language= 
(cur_buffer[2]==053)?C_PLUS_PLUS:C;
column_mode= change_params.Column_mode= NO;
continue;


case 0162

:
if(!RAT_OK("Language change ignored"))continue;

language= change_params.Language= 
(cur_buffer[2]==071)?RATFOR_90:RATFOR;
continue;


case 0156

:
language= change_params.Language= 
(cur_buffer[2]==071)?FORTRAN_90:FORTRAN;
continue;


case 0166



:
language= change_params.Language= LITERAL;continue;


case 0170

:
language= change_params.Language= TEX;continue;

case 0133:
column_mode= change_params.Column_mode= YES;continue;

case 0135:
column_mode= change_params.Column_mode= NO;continue;

default:
loc= cur_buffer+2;

err0_print(ERR_C,OC("Invalid @ command in change file"),0);
continue;
}
}


}

;


do
{
if(!input_ln(CHANGE_FILE))
{

err0_print(ERR_C,OC("Change file ended after @x"),0);

change_limit= NULL;
goto done_priming;
}
}
while(limit==cur_buffer);

;

done_priming:
language= input_params.Language;
parsing_mode= input_params.Parsing_mode;
column_mode= input_params.Column_mode;



changing= NO;
cur0_prms= cur_prms.web;
}



SRTN
chk_change(VOID)
{
int n= 0;

if(LINES_DONT_MATCH)return;

WHILE()
{
changing= YES;prn_where= YES;

if(!input_ln(CHANGE_FILE))
{

err0_print(ERR_C,OC("Change file ended before @y"),0);

change_limit= NULL;changing= NO;prn_where= YES;
return;
}



if(limit>cur_buffer+1&&cur_buffer[0]==0100)
{


if((cur_buffer[1]>=0130&&cur_buffer[1]<=0132)||cur_buffer[1]==0111)
cur_buffer[1]+= 0172-0132;

;


if(cur_buffer[1]==0151)
{
loc= cur_buffer+2;

err0_print(ERR_C,OC("Sorry, no includes allowed in change file"),0);

}

;

if(cur_buffer[1]==0170||cur_buffer[1]==0172)
{
loc= cur_buffer+2;

err0_print(ERR_C,OC("Where is the matching @y?"),0);

}
else if(cur_buffer[1]==0171)
{
if(n>0)
{
loc= cur_buffer+2;

err0_print(ERR_C,OC("Hmm... some of the preceding lines failed to match"),0);

}
return;
}
}

;
changing= NO;prn_where= YES;

while(!input_ln(INPUT_FILE))
{
if(incl_depth==WEB_FILE)
{

err0_print(ERR_C,OC("WEB file ended during a change"),0);

input_has_ended= YES;return;
}

incl_depth--;prn_where= YES;
}

if(LINES_DONT_MATCH)n++;
}
}


#endif 

#if(part != 1)


SRTN
rst_input(VOID)
{
FCLOSE(prms[WEB_FILE].web.File);
FCLOSE(prms[WEB_FILE].change.File);

ini_input_prms(WEB_FILE,(outer_char HUGE*)"",ABORT_ON_ERROR);


limit= cur_buffer;loc= cur_buffer+1;cur_buffer[0]= 040

;


{
cur0_prms= cur_prms.change;
changing= YES;
change_params= change_params0;
prime_the_change_buffer();


limit= cur_buffer;loc= cur_buffer+1;cur_buffer[0]= 040

;
}



incl_depth= WEB_FILE;
input_has_ended= NO;
}



boolean
ini_input_prms FCN((ilevel,path,quit_on_error))
int ilevel C0("Present level of input files.")
outer_char HUGE*path C0("Colon-delimited path list")
boolean quit_on_error C1("Abort flag.")
{
INPUT_PRMS HUGE*p= &prms[ilevel];
CUR_PRMS old_prms;
boolean web_level= BOOLEAN(ilevel==WEB_FILE);

old_prms= cur_prms;


cur_prms.web= &p->web;
cur_prms.change= &p->change;


if(!(ini0_input_prms(cur_prms.web,path,OC("input"),quit_on_error,
(SEQUENCES*)(web_level?wt_style.input_ext.web:
wt_style.input_ext.hweb))&&
ini0_input_prms(cur_prms.change,path,OC("change"),quit_on_error,
(SEQUENCES*)(web_level?wt_style.input_ext.change:
wt_style.input_ext.hchange))))
{
cur_prms= old_prms;
return NO;
}


cur0_prms= cur_prms.web;
loc= cur_buffer;


STRCPY(this_include_file,web_level?
(CONST outer_char*)"":p->web.File_name);

return YES;
}



boolean
ini0_input_prms FCN((p0,path,file_type,quit_on_error,extensions))
INPUT_PRMS0 HUGE*p0 C0("")
outer_char HUGE*path C0("")
outer_char file_type[]C0("")
boolean quit_on_error C0("")
SEQUENCES*extensions C1("")
{
cur0_prms= p0;


if(p0->Buffer==NULL)
{
ALLOC(ASCII,p0->Buffer,"bs",buf_size,0);
p0->Buffer_end= p0->Buffer+buf_size-2;
}


loc= p0->Limit= p0->Buffer;
p0->Line= 0;
p0->Num_in_buffer= 0;
p0->Scanning_C_cmnt= p0->Last_was_empty
= p0->Continuing_line= p0->Last_was_continued= NO;


if(!p0->File&&
(p0->File= xopen(p0->File_name,path,extensions,OC("r")))==NULL)
{
if(quit_on_error)
{

fatal(ERR_C,OC(""),OC("Can't open %s%s file %s."),*p0->File_name?"":"(null) ",(char*)file_type,*p0->File_name?p0->File_name:wt_style.null_file_name);


}
else
{

err0_print(ERR_C,OC("Can't open include %s file \"%s\""),2,file_type,p0->File_name);

}

return NO;
}

return YES;
}



FILE*
xopen FCN((file_name,path,extensions,iomode))
outer_char*file_name C0("")
outer_char HUGE*path C0("")
SEQUENCES*extensions C0("")
CONST outer_char*iomode C1("")
{
outer_char HUGE*p1;
FILE*file_ptr;
outer_char total_name[2*MAX_FILE_NAME_LENGTH];
outer_char prefix_end_str[2];

if(!*file_name)
return FOPEN(wt_style.null_file_name,iomode);

if(*iomode=='r'&&STRCMP(file_name,"stdin")==0)
return stdin;
else if(*iomode=='w'&&STRCMP(file_name,"stdout")==0)
return stdout;




if(file_name[0]==prefix_end_char||!(path&&*path))
return x0open(file_name,extensions,iomode);

prefix_end_str[0]= prefix_end_char;
prefix_end_str[1]= '\0';


while((p1= (outer_char HUGE*)STRCHR(path,':'))!=NULL)
{
*p1= '\0';
STRCPY(total_name,path);
*p1= ':';
if(*(p1-1)!=prefix_end_char)
STRCAT(total_name,prefix_end_str);
STRCAT(total_name,file_name);
if((file_ptr= x0open(total_name,extensions,iomode))!=NULL)
return file_ptr;
path= p1+1;
}

return NULL;
}



FILE*
x0open FCN((file_name,extensions,iomode))
outer_char*file_name C0("")
SEQUENCES*extensions C0("")
CONST outer_char*iomode C1("")
{
int k;





if(STRCHR(file_name,wt_style.ext_delimiter)!=NULL||!try_extensions)
return FOPEN(file_name,iomode);




for(k= 0;k<extensions->n;k++)
{
outer_char full_name[MAX_FILE_NAME_LENGTH];
FILE*file_ptr;

if(
nsprintf(full_name,OC("%s%c%s"),3,file_name,wt_style.ext_delimiter,extensions->string[k])>=
MAX_FILE_NAME_LENGTH)OVERFLW("Extended file name","");

file_ptr= FOPEN(full_name,iomode);

if(file_ptr)
{
STRCPY(file_name,full_name);

return file_ptr;
}
}

return NULL;
}



boolean
get_line(VOID)
{
if(return_toggle)

{
return_toggle= NO;

if(popped&&no_more_input)
{
input_has_ended= YES;
return NO;
}

STRNCPY(cur_buffer,stored_line,stored_line_length);
FREE_MEM(stored_line,"stored_line",stored_line_length,ASCII);
limit= cur_buffer+stored_line_length;
*limit= 040;

if(popped)
{
popped= NO;
goto popped_stack;
}
else if(toggling)
goto push_stack;
else
goto process_line;
}



restart:
if(changing)
chngd_module[module_count]= YES;
else

{
popped= NO;

if(cur_prms.web->Line==0)
{
if(ignored_cmnts())
goto fin_read;
else
goto pop_or_quit;
}

while(!input_ln(INPUT_FILE))
{
pop_or_quit:
prn_where= YES;

if(incl_depth==WEB_FILE)
{input_has_ended= YES;break;}
else
{
if(cur_prms.web->File!=prms[incl_depth-1].web.File)
{FCLOSE(cur_prms.web->File);}

if(cur_prms.change->File!=prms[incl_depth-1].change.File)
{FCLOSE(cur_prms.change->File);}
else prms[incl_depth-1].change= *cur_prms.change;

cur0_prms->File= NULL;
CLR_PRINTF(SHORT_INFO,include_file,(")"));




incl_depth--;
cur_prms.web= &prms[incl_depth].web;
cur_prms.change= &prms[incl_depth].change;

if(incl_depth==WEB_FILE&&toggle_includes&&toggling)
{
toggling= NO;
return_toggle= YES;
}

STRCPY(this_include_file,(incl_depth==WEB_FILE)?
(CONST outer_char*)"":cur_file_name);

}
}

fin_read:
if(return_toggle)
{
no_more_input= input_has_ended;
input_has_ended= NO;
popped= YES;

{
return_toggle= YES;
stored_line_length= PTR_DIFF(size_t,limit,cur_buffer);
stored_line= GET_MEM("stored_line",stored_line_length+1,ASCII);


STRNCPY(stored_line,cur_buffer,stored_line_length);
loc= cur_buffer+2;
get_fname(prms[1].web.File_name);
loc= limit= cur_buffer;
*limit++= 0100;*limit++= '\001';*limit= 040;

return YES;
}


}

popped_stack:
if(!input_has_ended)
if(limit==change_limit-change_buffer+cur_buffer)
if(cur_buffer[0]==change_buffer[0])
if(change_limit>change_buffer)chk_change();
}

;

if(changing)
{

{
if(!input_ln(CHANGE_FILE))
{

err0_print(ERR_C,OC("Change file ended without @z"),0);

cur_buffer[0]= 0100;cur_buffer[1]= 0172;limit= cur_buffer+2;
}

if(limit>cur_buffer+1)
if(cur_buffer[0]==0100)
{


if((cur_buffer[1]>=0130&&cur_buffer[1]<=0132)||cur_buffer[1]==0111)
cur_buffer[1]+= 0172-0132;

;


if(cur_buffer[1]==0151)
{
loc= cur_buffer+2;

err0_print(ERR_C,OC("Sorry, no includes allowed in change file"),0);

}

;

if(cur_buffer[1]==0170||cur_buffer[1]==0171)
{
loc= cur_buffer+2;
err0_print(ERR_C,OC("Where is the matching @z?"),0);

}
else if(cur_buffer[1]==0172)
{
prime_the_change_buffer();prn_where= YES;
}
}
}

;

if(!changing)
{
chngd_module[module_count]= YES;goto restart;
}
}

process_line:
loc= cur_buffer;*limit= 040;

if(return_toggle)

{
return_toggle= YES;
stored_line_length= PTR_DIFF(size_t,limit,cur_buffer);
stored_line= GET_MEM("stored_line",stored_line_length+1,ASCII);


STRNCPY(stored_line,cur_buffer,stored_line_length);
loc= cur_buffer+2;
get_fname(prms[1].web.File_name);
loc= limit= cur_buffer;
*limit++= 0100;*limit++= '\001';*limit= 040;

return YES;
}



if(*cur_buffer==0100)
switch(*(cur_buffer+1))
{
case 0151:
case 0111:


if(*(cur_buffer+1)==0111&&(skip_includes||
(program==weave&&toggle_includes&&CUR_FILE==WEB_FILE)))
{
if(skip_includes)
{
loc= limit+1;
goto restart;
}
else if(toggle_includes&&CUR_FILE==WEB_FILE)
{
toggling= YES;

{
return_toggle= YES;
stored_line_length= PTR_DIFF(size_t,limit,cur_buffer);
stored_line= GET_MEM("stored_line",stored_line_length+1,ASCII);


STRNCPY(stored_line,cur_buffer,stored_line_length);
loc= cur_buffer+2;
get_fname(prms[1].web.File_name);
loc= limit= cur_buffer;
*limit++= 0100;*limit++= '\001';*limit= 040;

return YES;
}


}
}
else

{
boolean found_include;


push_stack:
loc= cur_buffer+2;

if(++incl_depth>=(int)max_include_depth)
{
incl_depth--;

err0_print(ERR_C,OC("Too many nested includes; %d allowed.  \
Increase with `-yid'."),1,max_include_depth);

goto restart;
}


if(!(found_include= get_fname(cur_file_name)))

err0_print(ERR_C,OC("Include file name not given"),0);

else
{
if(skip_ifiles)

{
int j;

for(j= 0;j<num_ifiles;j++)
if(STRCMP(ifiles[j],cur_file_name)==0)
{
incl_depth--;
goto restart;
}

if(num_ifiles==(int)max_ifiles)
OVERFLW("unique include file names","if");

if(phase==1)
{
ifiles[num_ifiles]= GET_MEM("ifile",STRLEN(cur_file_name)+1,outer_char);
STRCPY(ifiles[num_ifiles],cur_file_name);
}

num_ifiles++;
}



if(!get_fname(change_file_name))
{

INPUT_PRMS*p_lower= &prms[incl_depth-1];
INPUT_PRMS0*p0_lower= &p_lower->change;

STRCPY(change_file_name,p0_lower->File_name);
change_file= p0_lower->File;
change_params= p_lower->input_params;
}
}

if(found_include)
{
if(ini_input_prms(CUR_FILE,incl.list,DONT_ABORT_ON_ERROR))
{
if(cur_prms.change->File!=prms[incl_depth-1].change.File)

{
cur0_prms= cur_prms.change;
changing= YES;
change_params= change_params0;
prime_the_change_buffer();


limit= cur_buffer;loc= cur_buffer+1;cur_buffer[0]= 040

;
}


else*cur_prms.change= prms[incl_depth-1].change;


cur_line= 0;
prn_where= YES;
CLR_PRINTF(SHORT_INFO,include_file,
(" (%s",(char*)cur_file_name));

}
else
{
incl_depth--;
}
}

goto restart;
}




break;
}

return(boolean)(!input_has_ended);
}



boolean
get_fname FCN((file_name))
outer_char HUGE*file_name C1("")
{
ASCII HUGE*j;
outer_char HUGE*k;

skip_white:


while(loc<=limit&&(*loc==040||*loc==011||*loc==042))loc++;



if(loc>=limit)return NO;


{
if(*loc==057)
{
if(*(loc+1)==057)
{
loc= limit+1;
return NO;
}

if(*(loc+1)==052)
{
for(loc+= 2;loc<=limit;loc++)
if(*loc==052&&*(loc+1)==057)
{
loc+= 2;
goto skip_white;
}


err0_print(ERR_C,OC("Can't continue comments on @i lines"),0);
}
}
}



k= file_name;j= loc;


while(*loc!=040&&*loc!=011&&*loc!=042)*k++= XCHR(*loc++);
TERMINATE(k,0);



add_prefix(file_name);

return YES;
}



SRTN
add_prefix FCN((file_name))
outer_char HUGE*file_name C1("")
{
outer_char temp[MAX_FILE_NAME_LENGTH];

xpnd_file_name(file_name);

if(*wbprefix&&STRRCHR(file_name,prefix_end_char)==NULL)
{
if(
nsprintf(temp,OC("%s%s"),2,wbprefix,file_name)>=
MAX_FILE_NAME_LENGTH)OVERFLW("Path/file_name","");

STRCPY(file_name,temp);
}
}



SRTN
xpnd_file_name FCN((name))
outer_char HUGE*name C1("")
{
outer_char temp[MAX_FILE_NAME_LENGTH],env_prefix[MAX_FILE_NAME_LENGTH];
outer_char*pc,*px,*qx;
CONST char*separator;
int n;
boolean expanded;

#ifdef vms
return;
#else

#if !HAVE_GETENV

err0_print(ERR_C,OC("Sorry, this machine doesn't support environment variables"),0);
return;
#else


if((pc= OC(STRCHR(name,':')))==NULL)return;


STRNCPY(env_prefix,name,n= PTR_DIFF(int,pc,name));
TERMINATE(env_prefix,n);


expanded= NO;
for(px= env_prefix;px;px= qx)
{
if((qx= GETENV(px))==NULL)break;
if(STRCMP(qx,env_prefix)==0)
{

err0_print(ERR_C,OC("Infinite recursion in definition of \
environmental variable \"%s\""),1,px= env_prefix);
expanded= NO;
break;
}
expanded= YES;

}



if(!expanded)return;


separator= 
#ifdef ibmpc
"\\"
#else
"/"
#endif 
;
if(
nsprintf(temp,OC("%s%s%s"),3,px,separator,pc+1)>=
MAX_FILE_NAME_LENGTH)
OVERFLW("Expandable file name","");
STRCPY(name,temp);

#endif 
#endif 
}



boolean
ignored_cmnts(VOID)
{
boolean limbo_material;


if(!input_ln(INPUT_FILE))
return NO;



limbo_material= BOOLEAN(cur_buffer[0]==0100&&cur_buffer[1]==0172);

if(limbo_material)
do
{
if(!input_ln(INPUT_FILE))
{
CLR_PRINTF(WARNINGS,warning,("\n! File ended while \
skiping ignorable commentary.  Limbo material that begins with @z must be \
terminated by @x."));
return NO;
}

if(phase==1)
find_keywords(cur_buffer,limit);


}
while(!(cur_buffer[0]==0100&&cur_buffer[1]==0170));







if(limbo_material&&!input_ln(INPUT_FILE))
return NO;

return YES;
}



SRTN
find_keywords FCN((p,p_end))
ASCII HUGE*p C0("Start of line to search")
ASCII HUGE*p_end C1("End of line")
{
ASCII HUGE*pk,HUGE*pk_end,HUGE*ptext,HUGE*ptext_end;

*p_end= '\0';

pk= (ASCII HUGE*)STRCHR(p,044);

if(!pk)
return;

pk_end= (ASCII HUGE*)STRCHR(pk,072);

if(!pk_end)
return;

if(pk_end[1]!=040)
return;

ptext_end= (ASCII HUGE*)STRCHR(pk_end+1,044);

if(!ptext_end)
return;

if(ptext_end[-1]!=040)
return;


for(ptext= pk_end+2;*ptext==040;ptext++)
;


for(ptext_end--;*ptext_end==040;ptext_end--)
;

add_keyword(pk+1,pk_end,ptext,ptext_end+1);
}



SRTN
add_keyword FCN((pk,pk_end,pt,pt_end))
ASCII HUGE*pk C0("Start of keyword")
ASCII HUGE*pk_end C0("End of keyword")
ASCII HUGE*pt C0("Start of text")
ASCII HUGE*pt_end C1("End of text")
{
RCS_LIST HUGE*plist= &prms[CUR_FILE].rcs_list;
RCS HUGE*prcs;
unsigned k;

*pk_end= *pt_end= '\0';

for(prcs= plist->start;prcs&&prcs->keyword;prcs= prcs->next)
if(STRCMP(pk,prcs->keyword)==0)
{
outer_char temp[256];

STRCPY(temp,pk);
to_outer(temp);
printf("\n! Duplicate RCS-like keyword `%s' ignored (l. %u).",
temp,cur_line);
mark_harmless;
return;
}

if(!plist->start)
plist->end= plist->start= GET_MEM("RCS",1,RCS);
else
plist->end= plist->end->next= GET_MEM("RCS",1,RCS);

prcs= plist->end;

prcs->keyword= GET_MEM("keyword",STRLEN(pk)+1,ASCII);
STRCPY(prcs->keyword,pk);

prcs->txt= GET_MEM("RCS text",STRLEN(pt)+1,ASCII);
STRCPY(prcs->txt,pt);

prcs->next= NULL;
}



SRTN
chk_complete(VOID)
{
if(change_limit!=NULL)
{
STRNCPY(cur_buffer,change_buffer,
PTR_DIFF(size_t,change_limit,change_buffer)+1);
loc= limit= PTR_DIFF(size_t,change_limit,change_buffer)+cur_buffer;
changing= YES;

err0_print(ERR_C,OC("Change file entry did not match"),0);

}
}



void HUGE*
get_mem0 FCN((why,nunits,nsize))
CONST outer_char why[]C0("Reason for request")
BUF_SIZE nunits C0("Number of units to allocate.")
size_t nsize C1("Size of each unit.")
{
void HUGE*p;

BUF_SIZE nbytes;

if(nunits==0)
return NULL;

if(nsize==0)

confusion(OC("get_mem0"),OC("Nsize = 0 requested"));

#if !NON_ANSI_CALLOC

if(nunits>MAX_SIZE_T)
{

err0_print(ERR_C,OC("get_mem0: Can't request %lu units; used max of %lu"),2,nunits,MAX_SIZE_T);
nunits= MAX_SIZE_T;
}
#endif 

if((p= (void HUGE*)CALLOC(nunits,nsize))==NULL)
{
FREE(byte_mem);


fatal(ERR_C,OC("\n!!! NO MORE MEMORY"),OC(" (\"%s\")!!!  \
[Requesting %lu unit(s) of size %lu byte(s); \
allocated %lu bytes so far.]  \
Try using the -y option to reduce the sizes of internal tables."),(char*)why,nunits,(BUF_SIZE)nsize,total_mem);
}


nbytes= nunits*nsize;
total_mem+= nbytes;
max_mem= MAX(max_mem,total_mem);

#ifdef mac
lmemset(p,0,nbytes);
#endif

if(show_mem&&nbytes>=show_size)
show_alloc('+',why,nunits,(BUF_SIZE)nsize,nbytes,p,total_mem);

return p;
}



SRTN
show_alloc FCN((c,why,nunits,nsize,nbytes,p,total_mem))
outer_char c C0("Either plus or minus")
CONST outer_char why[]C0("Reason for request")
BUF_SIZE nunits C0("Number of units")
BUF_SIZE nsize C0("Size of each unit.")
BUF_SIZE nbytes C0("Bytes allocated")
void HUGE*p C0("Start of allocated area")
BUF_SIZE total_mem C1("Total bytes currently allocated")
{
printf("\"%s\": %c(%s x %s) = %c%s ",
(char*)why,c,commas(nunits),commas(nsize),c,commas(nbytes));
ptr_range(p,nbytes);
printf("(%s total)\n",commas(total_mem));
free_buf(&c_buf);
}



SRTN
ptr_range FCN((p,nbytes))
void HUGE*p C0("Start of the allocated space.")
BUF_SIZE nbytes C1("Length of the allocation")
{
static char ptr_string[]= 
#ifdef ibmpc
PTR_BASE
#else
""
#endif
;

printf(ptr_string,p,(char HUGE*)p+nbytes);
}



SRTN
free_mem0 FCN((p,why,nunits,nsize))
void HUGE*p C0("Pointer to deallocate")
CONST outer_char why[]C0("Reason for request")
BUF_SIZE nunits C0("Number of units to deallocate.")
size_t nsize C1("Size of each unit.")
{
BUF_SIZE nbytes;



if(p==NULL)

confusion(OC("free_mem0"),OC("Attempting to deallocate NULL pointer"));


nbytes= nunits*nsize;
total_mem-= nbytes;

if(show_mem&&nbytes>=show_size)
show_alloc('-',why,nunits,(BUF_SIZE)nsize,nbytes,p,total_mem);

FREE(p);
}



MEM HUGE*
msearch FCN((abbrev,nunits))
CONST outer_char abbrev[]C0("Abbreviation for desired object.")
BUF_SIZE nunits C1("Value.")
{
MEM HUGE*m;

for(m= mem;*m->abbrev;m++)
if(STRCMP(m->abbrev,abbrev)==0)
{
if(nunits==0L)return m;

if(nunits<m->min)
{
CLR_PRINTF(WARNINGS,warning,
("! Warning (msearch:%s): nunits (%lu) < min (%lu); min used.\n",
(char*)abbrev,nunits,m->min));
mark_harmless;
nunits= m->min;
}
else if(nunits>m->max)
{
CLR_PRINTF(WARNINGS,warning,
("! Warning (dynamic buffer %s): nunits (%lu) > max (%lu); max used.\n",
(char*)abbrev,nunits,m->max));
mark_harmless;
nunits= m->max;
}

m->nunits= nunits;
return m;
}

CLR_PRINTF(WARNINGS,warning,
("! Invalid alloc abbreviation \"%s[%lu]\"\n",(char*)abbrev,nunits));
mark_harmless;
return m;
}



void HUGE*
alloc FCN((abbrev,pnunits,nsize,dn))
CONST outer_char abbrev[]C0("Abbreviation for desired object.")
BUF_SIZE HUGE*pnunits C0("Pointer to returned \# of units.")
size_t nsize C0("Size of object.")
int dn C1("Incremental number of units to allocate.")
{
MEM HUGE*m= find_abbrev(abbrev);

*pnunits= m->nunits;



if(dn<0)
return NULL;
else
return get_mem0(abbrev,(*pnunits)+dn,nsize);
}


MEM HUGE*
find_abbrev FCN((abbrev))
CONST outer_char abbrev[]C1("")
{
MEM HUGE*m;

for(m= mem;*m->abbrev;m++)
if(STRCMP(m->abbrev,abbrev)==0)
return m;


confusion(OC("find_abbrev"),OC("Bad alloc abbreviation \"%s\""),abbrev);

return NULL;
}


#ifdef mcc

void HUGE*
hrealloc FCN((old_ptr,new_size,old_size))
void HUGE*old_ptr C0("Old buf previously allocated with |halloc|.")
BUF_SIZE new_size C0("New size in bytes.")
BUF_SIZE old_size C1("Old size in bytes.")
{
void HUGE*new_ptr;
BUF_SIZE num_to_copy;
size_t ncopied;

new_ptr= GET_MEM("hrealloc",new_size,char);

if(new_ptr==NULL)
return NULL;

num_to_copy= MIN(old_size,new_size);
ncopied= (size_t)num_to_copy;

if((BUF_SIZE)ncopied!=num_to_copy)

confusion(OC("hrealloc"),OC("trying to copy %lu bytes; more than size_t"),num_to_copy);

memcpy(new_ptr,old_ptr,ncopied);

FREE_MEM(old_ptr,"old_ptr",old_size,char);

return new_ptr;
}

#endif 



unsigned
prn_id FCN((np))
name_pointer np C1("")
{
ASCII_write(*np->byte_start==BP_MARKER?
((BP*)np->byte_start)->Root->id:np->byte_start,Length(np));

return PTR_DIFF(unsigned,np,name_dir);
}

int
Length FCN((np))
name_pointer np C1("")
{
int n;
BP HUGE*bp;
TRUNC HUGE*s;
CONST ASCII HUGE*p0;
CONST ASCII HUGE*p1;

p0= np->byte_start;
bp= (BP*)p0;

if(*(char*)bp==BP_MARKER)
{
s= bp->Root;
n= PTR_DIFF(int,s->id_end,s->id);
}
else
{
p1= (np+1)->byte_start;
PROPER_END(p1);
n= PTR_DIFF(int,p1,p0);
}

return n;
}



name_pointer
id_lookup FCN((first,last,t))
CONST ASCII HUGE*first C0("First character of string.")
CONST ASCII HUGE*last C0("last character of string plus one.")
eight_bits t C1("The |ilk|; used by \.{WEAVE} only.")
{
CONST ASCII HUGE*i= first;
int h;
int l;
name_pointer p;
WORD_TYPE word_type0= ORDINARY_ID;

if(last==NULL)
{
word_type0= word_type;

for(last= first;*last!='\0';last++)
;
}

l= PTR_DIFF(int,last,first);


h= *i;

while(++i<last)h= (h+h+*i)%hash_size;

;

p= hash[h];

while(p&&!names_match(p,first,l,t))p= p->link;

if(p==NULL)
{
p= name_ptr;
p->link= hash[h];hash[h]= p;

}

;

if(p==name_ptr)

{
if(byte_ptr+l>byte_end)OVERFLW("bytes","b");
if(name_ptr>=name_end)OVERFLW("names","n");

STRNCPY(byte_ptr,first,l);
(++name_ptr)->byte_start= byte_ptr+= l;

if(program==weave)
ini_p(p,t);
}

;

if(!(p->Language&(boolean)language))
p->ilk= t;

p->Language|= (boolean)language;



switch(word_type0)
{
case RESERVED_WD:
p->reserved_word|= (boolean)language;
break;

case INTRINSIC_FCN:
p->intrinsic_word|= (boolean)language;
break;

case KEYWD:
p->keyword|= (boolean)language;
break;

default:;
}

return p;
}



sixteen_bits
find_n FCN((n))
sixteen_bits n C1("")
{
name_pointer np;
CONST ASCII HUGE*end;
outer_char HUGE*s;
size_t len;

np= name_dir+n;

if(np>=name_ptr)
{
printf("!! n = %u exceeds nmax = %u.\n",n,
PTR_DIFF(unsigned,name_ptr,name_dir)-1);
return 0;
}

PROPER_END(end);

len= PTR_DIFF(size_t,end,np->byte_start);
s= GET_MEM("find_n",len+1,outer_char);

STRNCPY(s,np->byte_start,len);
TERMINATE(s,len);


to_outer((ASCII HUGE*)s);
id_info(np,(long)n,(CONST outer_char*)s,NULL);
FREE_MEM(s,"find_n",len+1,outer_char);

return n;
}

sixteen_bits
find_s FCN((s))
CONST outer_char*s C1("")
{
int h,l;
name_pointer p;
ASCII HUGE*a;
CONST ASCII HUGE*first,HUGE*last;
CONST ASCII HUGE*i;
sixteen_bits n= 0;

l= STRLEN(s);
a= GET_MEM("find_s",l+1,ASCII);
STRCPY(a,s);
i= first= to_ASCII((outer_char*)a);
last= first+l;



h= *i;

while(++i<last)h= (h+h+*i)%hash_size;


p= hash[h];
while(p&&!(STRNCMP(first,p->byte_start,l)==0))
p= p->link;

if(p==NULL)
{CLR_PRINTF(WARNINGS,warning,("%cId \"%s\" is not in name_dir!\n",
beep(1),(char*)s));}
else
id_info(p,(long)(n= (sixteen_bits)(p-name_dir)),s,NULL);

FREE_MEM(a,"find_s",l+1,ASCII);

return n;
}




sixteen_bits
find_id FCN((a0,a1))
eight_bits a0 C0("")
eight_bits a1 C1("")
{
return find_n(IDENTIFIER(a0,a1));
}



SRTN
id_info FCN((np,n,s,prsrvd))
name_pointer np C0("")
long n C0("")
CONST outer_char*s C0("")
CONST RSRVD HUGE*prsrvd C1("")
{
if(n>=0)
printf(_Xx("Id %ld (0x%lx):"),n,n);

if(!prsrvd
||(prsrvd->reserveds&&np->reserved_word)
||(prsrvd->intrinsics&&np->intrinsic_word)
||(prsrvd->keywords&&np->keyword))
printf(" \"%s\"\n",(char*)s);

if(!prsrvd)
pr_lan("Language ",np->Language);

if(!prsrvd||prsrvd->reserveds)
pr_lan("reserved ",np->reserved_word);

if(!prsrvd||prsrvd->intrinsics)
pr_lan("intrinsic",np->intrinsic_word);

if(!prsrvd||prsrvd->keywords)
pr_lan("keyword  ",np->keyword);
}



SRTN
pr_lan FCN((name,b))
CONST char*name C0("")
boolean b C1("")
{
unsigned k;
boolean first= YES;

if(b==0)
return;

printf("   %s = { ",name);

for(k= 1;k<=256;k<<= 1)
if(k&b)
{
printf("%s%s",first?"":", ",
languages[lan_num((LANGUAGE)k)]);
first= NO;
}

if(first)
printf("(none)");

printf(" }");


puts("");
}



BUF_SIZE
prn_nd(VOID)
{
BUF_SIZE k,n= name_ptr-name_dir;

for(k= 0;k<n;k++)
{
printf("[%lu]:  ",k);
prn_id(name_dir+k);
putchar('\n');
}

return n;
}



name_pointer
mod_lookup FCN((k,l))
CONST ASCII HUGE*k C0("First character of name.")
CONST ASCII HUGE*l C1("Last character of name.")
{
LEXI c= GREATER;
name_pointer p= root;
name_pointer q= name_dir;

while(p)
{
c= web_strcmp(k,l+1,p->byte_start,(p+1)->byte_start);
q= p;

switch(c)
{
case LESS:p= p->llink;continue;
case GREATER:p= p->rlink;continue;
case EQUAL:return p;
default:
err0_print(ERR_C,OC("Incompatible section names"),0);
return NULL;

}
}

return install_node(q,c,k,PTR_DIFF(int,l,k)+1);
}



LEXI
web_strcmp FCN((j,j1,k,k1))
CONST ASCII HUGE*j C0("Beginning of first string.")
CONST ASCII HUGE*j1 C0("End of first string plus one.")
CONST ASCII HUGE*k C0("Beginning of second string.")
CONST ASCII HUGE*k1 C1("End of second string plus one.")
{
while(k<k1&&j<j1&&*j==*k)k++,j++;

if(k==k1)if(j==j1)return EQUAL;
else return EXTENSION;
else if(j==j1)return PREFIX;
else if(*j<*k)return LESS;
else return GREATER;
}



name_pointer
install_node FCN((parent,c,j,name_len))
name_pointer parent C0("Parent of new node.")
int c C0("Right or left?")
CONST ASCII HUGE*j C0("Where replacement text starts.")
int name_len C1("length of replacement text.")
{
name_pointer node= name_ptr;
if(byte_ptr+name_len>byte_end)OVERFLW("bytes","b");
if(name_ptr==name_end)OVERFLW("names","n");

if(c==LESS)parent->llink= node;else parent->rlink= node;

node->llink= node->rlink= NULL;
ini_node(node);
STRNCPY(byte_ptr,j,name_len);
(++name_ptr)->byte_start= byte_ptr+= name_len;
return node;
}



name_pointer
prefix_lookup FCN((k,l))
CONST ASCII HUGE*k C0("First char of prefix.")
CONST ASCII HUGE*l C1("Last char of prefix.")
{
LEXI c= GREATER;
short count= 0;
name_pointer p= root;
name_pointer q= NULL;

name_pointer r= NULL;
while(p){
c= web_strcmp(k,l+1,p->byte_start,(p+1)->byte_start);

switch(c){
case LESS:p= p->llink;break;
case GREATER:p= p->rlink;break;
default:r= p;count++;q= p->rlink;p= p->llink;
}

if(p==NULL){
p= q;q= NULL;
}
}
if(count==0)
err0_print(ERR_C,OC("Name does not match"),0);

else if(count>1)
err0_print(ERR_C,OC("Ambiguous prefix"),0);


return r;
}



unsigned
find_prefix FCN((s))
outer_char s[]C1("")
{
name_pointer r;

to_ASCII(s);
r= prefix_lookup((ASCII HUGE*)s,(ASCII HUGE*)(s+STRLEN(s)));

return r?prn_id(r):0;
}



SRTN
err0_print FCN(VA_ALIST((err_origin,fmt,n VA_ARGS)))
VA_DCL(
ERR_ORIGIN err_origin C0("Where the error came from")
CONST outer_char*fmt C0("Format of error message.")
int n C2("Number of arguments to the string."))
{
VA_LIST(arg_ptr)
ASCII HUGE*k,HUGE*l;
char temp[500];
boolean prn_input_buffer;
boolean newline_first;
#if(NUM_VA_ARGS == 1)
ERR_ORIGIN err_origin;
CONST outer_char*fmt;
int n;
#endif

VA_START(arg_ptr,n);

#if(NUM_VA_ARGS == 1)
err_origin= va_arg(arg_ptr,ERR_ORIGIN);
fmt= va_arg(arg_ptr,outer_char*);
va_arg(arg_ptr,int);
#endif

prn_input_buffer= BOOLEAN(err_origin!=ERR_NULL);

if(n<0)
{
n= -(n+1);
newline_first= NO;
}
else
newline_first= YES;

if(prn_input_buffer&&err_origin!=ERR_S&&newline_first)
putchar('\n');

SET_COLOR(error);

if(prn_input_buffer)
{
printf("! ");
CLR_PRINTF(ALWAYS,md_name,("(%s)",origin_name[err_origin]));
sprintf(temp,":  %s",(char*)fmt);
vprintf(temp,arg_ptr);
}
else
vprintf((char*)fmt,arg_ptr);

va_end(arg_ptr);

if(prn_input_buffer)
{
outer_char last_char= fmt[STRLEN(fmt)-1];

if(*fmt&&last_char!='?'&&last_char!='!')
printf(".");




if(err_origin==ERR_S)

{
CONST outer_char HUGE*k,HUGE*l;
IN_STYLE boolean from_sprm;

printf("  (l. %u of %s file ",s_line,"style");
CLR_PRINTF(ALWAYS,in_file,("%s)\n",
from_sprm?"parameter buffer":(char*)style_file_name));

l= MIN(sloc,slimit);

for(k= sbuf;k<l;k++)
putchar(*k>127?' ':(*k=='\t'?' ':*k));


putchar('\n');

multi_chars(' ',l-sbuf);

for(k= l;k<slimit;k++)
putchar(*k>127?' ':*k);

putchar('\n');
}


else

{
if(cur0_prms)
{
if(changing)
{
CLR_PRINTF(ALWAYS,line_num,
(" (l. %u of %s file ",change_line,"change"));
CLR_PRINTF(ALWAYS,in_file,("%s)\n",(char*)change_file_name));
}
else if(incl_depth==WEB_FILE)
{
CLR_PRINTF(ALWAYS,line_num,(" (l. %u)\n",cur_line));
}
else
{
CLR_PRINTF(ALWAYS,line_num,
(" (l. %u of %s file ",cur_line,"include"));
CLR_PRINTF(ALWAYS,in_file,("%s)\n",(char*)cur_file_name));
}

l= MIN(loc,limit);

SET_COLOR(ordinary);

if(l>cur_buffer&&cur_buffer!=NULL)
{
if((BUF_SIZE)(l-cur_buffer)>buf_size)
{
CLR_PRINTF(ALWAYS,error,
("! TROUBLE IN ERROR ROUTINE.  PLEASE REPORT THIS!\n"));
mark_error;

l= cur_buffer+MAX_ERR_BUF;
}

for(k= cur_buffer;k<l;k++)
if(*k==011)
putchar(' ');
else
putchar(*k>127?' ':XCHR(*k));


putchar('\n');

multi_chars(' ',l-cur_buffer);
}

if(l!=NULL)
{
if((BUF_SIZE)(limit-l)>buf_size)
{
puts("! TROUBLE IN ERROR ROUTINE.  PLEASE REPORT THIS!");
l= limit-MAX_ERR_BUF;
}

for(k= l;k<limit;k++)
putchar(*k>127?' ':XCHR(*k));

}
if(limit!=NULL)
if(*limit==0174)putchar('|');

putchar(' ');
err_happened= YES;
}
}


}

fflush(stdout);mark_error;

if(prn_input_buffer&&err_origin!=ERR_S&&!newline_first)
putchar('\n');

mfree();

free_buf(&sput_buf);
set_color(NORMAL);
}



int
fatal FCN(VA_ALIST((err_origin,s1,fmt VA_ARGS)))
VA_DCL(
ERR_ORIGIN err_origin C0("Where the error came from")
CONST outer_char s1[]C0("Basic message.")
CONST outer_char fmt[]C2("Elaboration."))
{
VA_LIST(arg_ptr)
#if(NUM_VA_ARGS == 1)
ERR_ORIGIN err_origin;
CONST outer_char s1[];
CONST outer_char fmt[];
#endif
outer_char temp[500];

VA_START(arg_ptr,fmt);

#if(NUM_VA_ARGS == 1)
err_origin= va_arg(arg_ptr,ERR_ORIGIN);
s1= va_arg(arg_ptr,outer_char*);
fmt= va_arg(arg_ptr,outer_char*);
#endif

printf("\n");
if(err_origin!=ERR_NULL)
{
CLR_PRINTF(ALWAYS,fatal,("! "));
CLR_PRINTF(ALWAYS,md_name,("(%s)",origin_name[err_origin]));
CLR_PRINTF(ALWAYS,fatal,(":  "));
}
CLR_PRINTF(ALWAYS,fatal,((char*)s1));

vsprintf((char*)temp,(CONST char*)fmt,arg_ptr);
err0_print(ERR_NULL,temp,0);

history= FATAL_MESSAGE;

va_end(arg_ptr);

return wrap_up();

}



int
confusion FCN(VA_ALIST((where,fmt0 VA_ARGS)))
VA_DCL(
CONST outer_char where[]C0("")
CONST outer_char fmt0[]C2(""))
{
outer_char fmt[200],temp[200];
VA_LIST(arg_ptr)
#if(NUM_VA_ARGS == 1)
CONST outer_char where[];
CONST outer_char fmt0[];
#endif

VA_START(arg_ptr,fmt0);

#if(NUM_VA_ARGS == 1)
where= va_arg(arg_ptr,outer_char*);
fmt0= va_arg(arg_ptr,outer_char*);
#endif


if(
nsprintf(fmt,OC("\n   At %s:  %s."),2,where,fmt0)>=(int)(200))OVERFLW("fmt","");
vsprintf((char*)temp,(CONST char*)fmt,arg_ptr);

beep(3);

return
fatal(ERR_NULL,OC("\n!!! \
I'M CONFUSED; this shouldn't happen.  PLEASE REPORT THIS!!!  "),OC(temp));
}




SRTN
overflow FCN((s,abbrev))
CONST outer_char s[]C0("Condition that caused overflow.")
CONST outer_char abbrev[]C1("Abbreviation for buffer.")
{
if(*abbrev=='\0')
{

fatal(ERR_NULL,OC("!!! Sorry, CAPACITY EXCEEDED:  "),OC("%s contents too long."),(char*)s);
}
else
{
MEM HUGE*m= msearch(abbrev,0L);


fatal(ERR_NULL,OC("!!! Sorry, CAPACITY EXCEEDED:  "),OC("Too many %s.  Current number is %lu, absolute max is \
%lu.  Use command-line option \"-y%s...\" to override default."),(char*)s,m->nunits,m->max,(char*)abbrev);
}
}




SRTN
new_sprm FCN((name,value))
CONST outer_char name[]C0("Name of parameter.")
int value C1("Integer value of parameters.")
{
char temp[100];

sprintf(temp,"Please increase style-file parameter `%s' from current value \
of %i;",name,value);
OVERFLW(temp,"");
}



#if(VMS)
#include stsdef 
#endif 

int
wrap_up(VOID)
{

if(statistics)
see_statistics();



#if TIMING
prn_time();
#endif 


{
if(msg_level>=SHORT_INFO
||(msg_level>=WARNINGS&&history>=HARMLESS_MESSAGE)
||(history>=ERROR_MESSAGE))
{
putchar('\n');
CLR_PRINTF(ALWAYS,program_name,
("[%s:",program==tangle?"FTANGLE":"FWEAVE"));
printf("  ");
}

switch(history)
{
case SPOTLESS:
CLR_PRINTF(SHORT_INFO,info,
("No errors were found."));
break;

case HARMLESS_MESSAGE:
CLR_PRINTF(WARNINGS,warning,
("%cDid you see the warning message(s) above?",beep(1)));
break;

case ERROR_MESSAGE:
CLR_PRINTF(ALWAYS,error,
("%cPardon me, but I think I spotted something wrong.",beep(1)));
break;

case FATAL_MESSAGE:
CLR_PRINTF(ALWAYS,fatal,
("%cThat was a fatal error, my friend.",beep(2)));
break;
}

if(msg_level>=SHORT_INFO
||(msg_level>=WARNINGS&&history>=HARMLESS_MESSAGE)
||(history>=ERROR_MESSAGE))
CLR_PRINTF(ALWAYS,program_name,("]\n"));

set_color(NORMAL);
}



{
if(cur_prms.web&&cur_prms.web->File)
fclose(cur_prms.web->File);

if(cur_prms.change&&cur_prms.change->File)
fclose(cur_prms.change->File);

cls_files();
}



SET_COLOR(ordinary);

#if(VMS)
switch(history)
{
case SPOTLESS:exit(STS$K_SUCCESS|STS$M_INHIB_MSG);
case HARMLESS_MESSAGE:exit(STS$K_INFO|STS$M_INHIB_MSG);
case ERROR_MESSAGE:exit(STS$K_ERROR|STS$M_INHIB_MSG);
case FATAL_MESSAGE:exit(STS$K_SEVERE|STS$M_INHIB_MSG);
}
#else
switch(history)
{
case SPOTLESS:
case HARMLESS_MESSAGE:
exit(0);

default:
exit(1);
}
#endif 

return-1;
}



char
beep FCN((n))
int n C1("")
{
if(beeps)
{
for(--n;n>0;n--)
printf("\007");

fflush(stdout);

return '\007';
}
else
return '!';
}



SRTN
out_error FCN((fcn))
CONST outer_char fcn[]C1("")
{

fatal(ERR_C,OC("Output error"),OC("from %s (quota exceeded?)."),fcn);
}




boolean
verify FCN(VA_ALIST((fmt VA_ARGS)))
VA_DCL(
CONST outer_char fmt[]C2(""))
{
VA_LIST(arg_ptr)
outer_char buf[80];

VA_START(arg_ptr,fmt);

#if(NUM_VA_ARGS==1)
{
char*fmt0= va_arg(arg_ptr,char*);

va_arg(arg_ptr,int);
vprintf(out,fmt0,arg_ptr);
}
#else
vprintf((CONST char*)fmt,arg_ptr);
#endif
va_end(arg_ptr);

printf(" [");
CLR_PRINTF(ALWAYS,info,("yes"));
printf("/");
CLR_PRINTF(ALWAYS,error,("no"));
printf("]?  "),fflush(stdout);

WHILE()
{
SET_COLOR(ordinary);
gets((char*)buf);

if(STRCMP(buf,"yes")==0||STRCMP(buf,"no")==0)
break;

SET_COLOR(error);
printf(">>> Please answer ``yes'' or ``no'':  ");
fflush(stdout);
}

return(STRCMP(buf,"yes")==0);
}



SRTN
scan_args(VOID)
{
outer_char wbflnm[MAX_FILE_NAME_LENGTH];


cmd_ln_buf= cmd_line(argc,argv);



set_args(&argc,&argv);


do_args(YES,argc,argv,&found_web,wbflnm,&found_change);

banner();

if(statistics)
mem_avail(0);


{
outer_char HUGE*dot_pos;
outer_char HUGE*p= NULL;

if(STRLEN(wbflnm)>MAX_FILE_NAME_LENGTH-5)
too_long();

if(STRCMP(wbflnm,"stdin")==0)STRCPY(web_file_name,wbflnm);
else
{
p= OC(STRRCHR(wbflnm,prefix_end_char));

if((dot_pos= OC(STRCHR(p?p+1:wbflnm,wt_style.ext_delimiter)))==NULL
&&!try_extensions)
{

if(
nsprintf(web_file_name,OC("%s%cweb"),2,wbflnm,wt_style.ext_delimiter)>=(int)(MAX_FILE_NAME_LENGTH))OVERFLW("web_file_name","");
}
else{


if(
nsprintf(web_file_name,OC("%s"),1,wbflnm)>=(int)(MAX_FILE_NAME_LENGTH))OVERFLW("web_file_name","");

if(!try_extensions)
TERMINATE(dot_pos,0);

}
}


{
if(p)
{
STRNCPY(wbprefix,wbflnm,
PTR_DIFF(size_t,p,(outer_char HUGE*)wbflnm)+1);
STRCPY(wbflnm0,p+1);
}
else
{
TERMINATE(wbprefix,0);
STRCPY(wbflnm0,wbflnm);
}
}


}




{
read_sty(style_file_name,renamed_style);


{
DOT_DELIMITER HUGE*d= &wt_style.dot_delimiter;

d->begin= XORD(d->begin);
d->end= XORD(d->end);

if(program==tangle)
{
t_style.ASCII_fcn= x__to_ASCII((outer_char*)t_style.ASCII_fcn);
}
}


}




{
int k;


xpn_name(&tex_fname,MAX_FILE_NAME_LENGTH,tex_fname,wbflnm0);
if(*tex_fname=='\0')
new_fname(&tex_fname,wbflnm0,OC("tex"));


for(k= 0;k<NUM_LANGUAGES;k++)
xpn_name(params.outp_nm+k,MAX_FILE_NAME_LENGTH,
params.outp_nm[k],wbflnm0);

set_name(C,wt_style.output_ext.C_);
set_name(C_PLUS_PLUS,wt_style.output_ext.Cpp_);
set_name(LITERAL,wt_style.output_ext.V_);
set_name(FORTRAN,wt_style.output_ext.N_);
set_name(FORTRAN_90,wt_style.output_ext.N90_);
set_name(RATFOR,wt_style.output_ext.R_);
set_name(RATFOR_90,wt_style.output_ext.R90_);
set_name(TEX,wt_style.output_ext.X_);
}

;

if(!(found_web||info_option))
usage("!! Missing webfile name.\n",YES);

if(!found_change)
*change_file_name= '\0';
}



outer_char HUGE*
cmd_line FCN((num_args,args))
int num_args C0("Number of arguments on command line.")
outer_char*args[]C1("Array of pointers to arguments.")
{
int k,len,l0,l1;
outer_char HUGE*buf,HUGE*b,HUGE*line0,HUGE*line1;
outer_char p[ESCAPE_LENGTH];

if(program==tangle)
{
line0= TANGLE_LINE0;
line1= TANGLE_LINE1;
}
else
{
line0= WEAVE_LINE0;
line1= WEAVE_LINE1;
}


for(k= 0,len= 0;k<num_args;len+= STRLEN(args[k++])+1);

l0= STRLEN(line0);
l1= STRLEN(line1);
buf= GET_MEM("buf",2*(len+l0+l1),outer_char);
STRCPY(buf,line0);
b= buf+l0;

while(num_args-->0)
{
int n= esc_file_name(p,ESCAPE_LENGTH,*(args++));

STRNCPY(b,p,n);
b+= n;
*b++= ' ';
}

STRCPY(--b,line1);
return buf;
}



SRTN
set_args FCN((pargc,pargv))
int HUGE*pargc C0("Pointer to the arg count; new value returned.")
outer_char HUGE*HUGE**pargv C1("Ptr to the array of ptrs; returned.")
{
int k,n;
outer_char HUGE*buffer,
HUGE*temp,HUGE*t,
HUGE*HUGE*a,
HUGE*pc;
boolean blank;
outer_char ini_file_name[MAX_FILE_NAME_LENGTH];


buffer= GET_MEM("buffer",T_SIZE,outer_char);
temp= GET_MEM("temp",T_SIZE,outer_char);


k= 0;

ini_args= GET_MEM("ini_args",MAX_INI_ARGS,outer_char HUGE*);


{
outer_char*p_root,ini_root[MAX_FILE_NAME_LENGTH];

#if HAVE_GETENV 
p_root= GETENV(ENV_INI);

if(p_root)
STRCPY(ini_root,p_root);
else
STRCPY(ini_root,OC(FWEB_INI));

more_includes(&incl,GETENV(ENV_INCLUDES));
more_includes(&hdr_incl,GETENV(ENV_HDR_INCLUDES));

#else
STRCPY(ini_root,OC(FWEB_INI));
#endif 

ini_file= FOPEN(mk_fname(ini_file_name,MAX_FILE_NAME_LENGTH,
HOME,YES,ini_root),"r");
}




if(ini_file)

{
outer_char CONST HUGE*b,HUGE*blimit;

#if 0
reading(ini_file_name,NO);
#endif

for(a= ini_args;k<MAX_INI_ARGS;)
{
if(FGETS(buffer,T_SIZE,ini_file)==NULL)
break;

blimit= buffer+STRLEN(buffer)-1;




blank= YES;

for(t= temp,b= buffer;b<blimit;)
switch(*b)
{
case INI_CMNT_CHAR:
goto done;

case '"':
case '\'':
blank= NO;

{
outer_char delim= *b;

*t++= *b++;

while(*b!=delim)
{
if(b==blimit)
{

err0_print(ERR_F,OC(".fweb:  Missing quote inserted at end of string.  \
Did you mean to continue the line with '\\'?  \
(No white space is allowed after the '\\'.)"),-1-0);
*t++= delim;
goto done;
}

if(*b=='\\')
{
if(++b==blimit)
{
FGETS(buffer,T_SIZE,ini_file);
blimit= buffer+STRLEN(buffer);
b= buffer;
continue;
}
else
*t++= '\\';
}

*t++= *b++;
}

*t++= *b++;
}


goto done;

case ' ':
*t= '\0';
for(b++;b<blimit;b++)
if(*b!=INI_CMNT_CHAR)
{

err0_print(ERR_F,OC("Garbage after option `%s' ignored"),1,temp);
putchar('\n');
goto done;
}

default:
blank= NO;

*t++= *b++;
break;
}

done:
*t= '\0';

if(blank)
continue;

if(t==temp)
continue;

*a= GET_MEM("ini arg",STRLEN(temp)+1,outer_char);

STRCPY(*a++,temp);
k++;
}

FCLOSE(ini_file);

#if 0
if(msg_level>=SHORT_INFO)
putchar('\n');
#endif
}





pn= new_args= GET_MEM("new_args",n= *pargc-1+k,outer_char HUGE*);

acopy(BEFORE_CHAR,ini_args,k);

pn0= pn;

acopy(MIDDLE_CHAR,(outer_char HUGE**)(*pargv),*pargc);


pn1= pn;

acopy(AFTER_CHAR,ini_args,k);


*pargc= n;
*pargv= new_args;

FREE_MEM(ini_args,"ini_args",MAX_INI_ARGS,outer_char HUGE*);
FREE_MEM(buffer,"buffer",T_SIZE,char);
FREE_MEM(temp,"temp",T_SIZE,char);
}



SRTN
more_includes FCN((pincl,incl_list0))
INCL_PATHS*pincl C0("Structure to fill")
outer_char*incl_list0 C1("")
{
unsigned n;
BUF_SIZE old_size;

if(!incl_list0)
return;


while(*incl_list0==':')
incl_list0++;

if((n= STRLEN(incl_list0))==0)
return;

old_size= incl.size;
pincl->size+= n+2;

if(!pincl->list)
{
pincl->list= GET_MEM("incl_list",pincl->size,outer_char);
STRCPY(pincl->list,incl_list0);
pincl->num= chr_cnt(pincl->list,':');
}
else
{
pincl->list= (outer_char HUGE*)REALLOC(pincl->list,pincl->size,
old_size);

if(pincl->list==NULL)

fatal(ERR_NULL,OC("!! NO MORE MEMORY"),OC(" (more_includes)"));

STRCAT(pincl->list,incl_list0);
pincl->num+= chr_cnt(incl_list0,':');
}


if(pincl->list[n-1]!=':')
{
pincl->list[n]= ':';
pincl->num++;
}
}



int
chr_cnt FCN((s,c))
outer_char*s C0("String to be searched for occurrences of |c|")
outer_char c C1("Search character")
{
int n;

for(n= 0;*s;s++)
if(*s==c)
n++;

return n;
}




char*
mk_fname FCN((buffer,buf_len,env_var,print_msg,file_name))
outer_char*buffer C0("Put result here.")
unsigned buf_len C0("Length of |buffer|.")
CONST outer_char*env_var C0("Variable that holds directory name.")
boolean print_msg C0("Flag for not recognizing |env_var|.")
CONST outer_char*file_name C1("The raw file name.")
{
outer_char*directory;

#if HAVE_GETENV 
if((directory= GETENV(env_var))==NULL)
{
if(print_msg)
printf("! I can't find environment \
variable \"%s\", so I'll look for file \"%s\" \
in directory \"%s\".\n",
(char*)env_var,(char*)file_name,
*wbprefix?(char*)wbprefix:".");
if(buf_chk(file_name,buf_len,
STRLEN(file_name)+STRLEN(wbprefix)))
return(char*)wt_style.null_file_name;
STRCPY(buffer,wbprefix);
STRCAT(buffer,file_name);
}
else
{
if(buf_chk(file_name,buf_len,
STRLEN(directory)+1+STRLEN(file_name)))
return(char*)wt_style.null_file_name;


#if !UNIX_PATH

if(
nsprintf(buffer,OC("%s%s"),2,directory,file_name)>=(int)(buf_len))OVERFLW("buffer","");
#else

if(
nsprintf(buffer,OC("%s%c%s"),3,directory,prefix_end_char,file_name)>=(int)(buf_len))OVERFLW("buffer","");
#endif 
}
#else 
if(buf_chk(file_name,buf_len,STRLEN(file_name)))
return(char*)wt_style.null_file_name;
STRCPY(buffer,file_name);
#endif 

return(char*)buffer;
}



boolean
buf_chk FCN((file_name,buf_len,needed))
CONST outer_char*file_name C0("Raw file name")
unsigned buf_len C0("Max space available")
unsigned needed C1("Requested")
{
if(needed>=buf_len)
{
printf("\n! Buffer too small to make complete file name from \
\"%s\"; opened \"%s\"\n",(char*)file_name,(char*)wt_style.null_file_name);
return YES;
}

return NO;
}



SRTN
acopy FCN((c,a,n))
outer_char c C0("Starting symbol.")
outer_char HUGE**a C0("Old array.")
int n C1("Number of arguments to be looked at.")
{
boolean is_before= BOOLEAN(c==BEFORE_CHAR||c=='+');
boolean is_middle= BOOLEAN(c==MIDDLE_CHAR);
boolean is_after= BOOLEAN(c==AFTER_CHAR);
int k;


if(is_middle)
{
k= 1;
a++;
}
else
k= 0;


for(;k<n;k++,a++)
{
boolean before_entry= BOOLEAN((*a)[0]==BEFORE_CHAR||(*a)[0]=='+');



if((!is_before&&!before_entry)||(!is_after&&before_entry))
{
*pn= GET_MEM("*pn",STRLEN(*a)+1,outer_char);
STRCPY(*pn,*a);
if((*pn)[0]=='+'||(*pn)[0]==AFTER_CHAR)
(*pn)[0]= BEFORE_CHAR;
pn++;
}
}
}



SRTN
set_name FCN((l,output_ext))
LANGUAGE l C0("")
outer_char*output_ext C1("")
{
int k;

if(*params.outp_nm[k= lan_num(l)]=='\0')
new_fname(params.outp_nm+k,wbflnm0,output_ext);
}



outer_char HUGE*
xpn_name FCN((pout_name,buf_len,in_name,wbflnm0))
outer_char HUGE*HUGE*pout_name C0("The expanded result")
int buf_len C0("Length of above buffer")
CONST outer_char*in_name C0("File name possibly having a \.\#.")
CONST outer_char wbflnm0[]C1("Basic name of the web file.")
{
size_t n;
outer_char HUGE*t,HUGE*t0= NULL;
boolean buffered= BOOLEAN(*pout_name==in_name);

if(buffered)
t= t0= GET_MEM("xpn buffer",buf_len,outer_char);
else
t= *pout_name;

for(;*in_name;in_name++)
if(*in_name=='#')
{
if(in_name[1]=='#')
*t++= *in_name++;

else
{
n= STRLEN(wbflnm0);
STRNCPY(t,wbflnm0,n);
t+= n;
}
}
else
*t++= *in_name;

TERMINATE(t,0);

if(buffered)
{
new_fname(pout_name,t0,NULL);
FREE_MEM(t0,"xpn buffer",buf_len,outer_char);
}

return*pout_name;
}




SRTN
read_aux(VOID)
{
outer_char aux_file_name[MAX_FILE_NAME_LENGTH];
FILE*fa;
outer_char buffer[AUX_LEN];
int aline= 0;
sixteen_bits modno,modno0;
outer_char smodno[100],smodno0[100],spageno[10],ssecno[100];
int n;
SECT_INFO*ps;
int pmcount= 1;
long modno_ref= -1;



next_mod_name= mod_names= GET_MEM("mod_names",MAX_MOD_NAMES,
outer_char HUGE*);
last_mod_name= mod_names+MAX_MOD_NAMES;

if(TeX_processor!=LaTeX_p)
return;


{
outer_char*dot_pos;

dot_pos= OC(STRCHR(tex_fname,wt_style.ext_delimiter));

if(dot_pos==NULL)
n= STRLEN(tex_fname);
else
n= PTR_DIFF(int,dot_pos,tex_fname);

STRNCPY(aux_file_name,tex_fname,n);

if(
nsprintf(aux_file_name+n,OC("%caux"),1,wt_style.ext_delimiter)>=(int)(MAX_FILE_NAME_LENGTH))OVERFLW("aux_file_name+n","");

fa= FOPEN(aux_file_name,"r");

if(!fa)
{
SET_COLOR(info);
printf("(No ");
CLR_PRINTF(ALWAYS,in_file,("%s",(char*)aux_file_name));
printf(" file.)\n");
return;
}
else
reading(aux_file_name,YES);

}



modno= 0;

while(FGETS(buffer,AUX_LEN,fa))
{
aline++;

if(STRNCMP(buffer,"\\Newlabel",9)!=0)
continue;


{
#if(!ANSI_SSCANF)
{

err0_print(ERR_C,OC("Sorry, non-ANSI sscanf; can't read .aux file"),0);
return;
}
#endif

#if 0
n= sscanf((char*)(buffer+9),"%*c%[^}]%*3c%[^}]%*2c%[^}]%*3c%[^}]",
(char*)smodno,(char*)ssecno,(char*)spageno,(char*)smodno0);

if(n!=4)
{

err0_print(ERR_C,OC("Invalid \\Newlabel format in %s file, line %d"),2,aux_file_name,aline);
return;
}
#endif

if(setjmp(top_of_get_arg)==0)
{
outer_char*p,*q;
outer_char arg2[100];

p= (outer_char*)STRCHR(buffer,'{');
p= get_arg(smodno,p,'{','}');
#if 0
seea(1,smodno);
#endif

p= get_arg(arg2,p,'{','}');
q= get_arg(ssecno,arg2,'{','}');
#if 0
seea(2,ssecno);
#endif
q= get_arg(spageno,q,'{','}');
#if 0
seea(3,spageno);
#endif

p= get_arg(smodno0,p,'{','}');
#if 0
seea(4,smodno0);
#endif
}
else
{

err0_print(ERR_C,OC("Invalid \\Newlabel format in %s file, line %d"),2,aux_file_name,aline);
return;
}

modno= (sixteen_bits)ATOI(smodno);

if(modno>=max_modules)
OVERFLW("sections","m");

ps= sect_info+modno;

ps->secno= GET_MEM("ps->secno",STRLEN(ssecno)+1,outer_char);
STRCPY(ps->secno,ssecno);

ps->pageno= (sixteen_bits)ATOI(spageno);
ps->modno0= modno0= (sixteen_bits)ATOI(smodno0);


sect_info[modno-1].subpage_flag= YES;

if((long)modno0==modno_ref)
pmcount++;
else
{
if(pmcount==1)
sect_info[modno-1].subpage_flag= NO;

modno_ref= (long)modno0;
pmcount= 1;
}
}


}

sect_info[modno].subpage_flag= BOOLEAN(pmcount!=1);
fclose(fa);
}



outer_char HUGE*
mod_trans FCN((prefix,modno))
outer_char*prefix C0("")
sixteen_bits modno C1("")
{
outer_char HUGE*mod_temp= GET_MEM("mod_temp",NMOD_TEMP,outer_char);
SECT_INFO*ps= sect_info+modno;

if(ps->secno)
{
outer_char c,letter[2];

letter[1]= '\0';

c= (ps->subpage_flag?
XCHR(modno-ps->modno0+0141-1):'\0');

if(c)
{
if(XORD(c)>0172)
c= '?';
else if(c==0140)
c= '\0';
}

letter[0]= c;


if(
nsprintf(mod_temp,OC("%s %d (sect. %s, p. %d%s)"),5,prefix,modno,ps->secno,ps->pageno,letter)>=(int)(NMOD_TEMP))OVERFLW("mod_temp","");
}
else
{

if(
nsprintf(mod_temp,OC("%s %d"),2,prefix,modno)>=(int)(NMOD_TEMP))OVERFLW("mod_temp","");
}

if(next_mod_name==last_mod_name)

confusion(OC("mod_trans"),OC("too many unfreed mod names"));

return*(next_mod_name++)= mod_temp;
}



SRTN
mfree(VOID)
{
if(!mod_names)
return;




while(next_mod_name>mod_names)
{
next_mod_name--;
FREE(*next_mod_name);
}
}



int
lan_num FCN((Language))
LANGUAGE Language C1("")
{
proper_language:
switch(Language)
{
case C:return 0;
case RATFOR:return 1;
case FORTRAN:return 2;
case TEX:return 3;
case LITERAL:return 4;

case C_PLUS_PLUS:return 5;
case RATFOR_90:return 6;
case FORTRAN_90:return 7;

case NO_LANGUAGE:Language= GLOBAL_LANGUAGE;goto proper_language;
default:Language= global_language;goto proper_language;
}
}

LANGUAGE
lan_enum FCN((num))
int num C1("Integer index of the language.")
{
switch(num)
{
case 0:return C;
case 1:return RATFOR;
case 2:return FORTRAN;
case 3:return TEX;
case 4:return LITERAL;

case 5:return C_PLUS_PLUS;
case 6:return RATFOR_90;
case 7:return FORTRAN_90;

default:return NO_LANGUAGE;
}
}


int
lan_index FCN((Language))
LANGUAGE Language C1("")
{
proper_language:
switch(Language)
{
case C:return 0;

case RATFOR:
case FORTRAN:return 1;

case TEX:return 2;
case LITERAL:return 3;

case C_PLUS_PLUS:return 4;

case RATFOR_90:
case FORTRAN_90:return 5;

case NO_LANGUAGE:Language= GLOBAL_LANGUAGE;goto proper_language;
default:Language= global_language;goto proper_language;
}
}



SRTN
do_args FCN((doing_cmd_line0,argc,argv,pfound_web,wbflnm,pfound_change))
boolean doing_cmd_line0 C0("")
int argc C0("")
outer_char HUGE*argv[]C0("")
boolean HUGE*pfound_web C0("")
outer_char wbflnm[]C0("")
boolean HUGE*pfound_change C1("")
{
boolean a_file_name;
outer_char HUGE*dot_pos;

IN_STYLE outer_char HUGE*sprm_ptr0,HUGE*sprm_ptr;

doing_cmd_line= doing_cmd_line0;
cmd_prms= NO;

*pfound_web= *pfound_change= NO;

while(argc-->0)
{
if(!cmd_prms&&argv==pn0)
{
cmd_prms= YES;
sprm_ptr0= sprm_ptr;
}

if(cmd_prms&&argv==pn1)
{
cmd_prms= YES;
}

pa= pa_begin= *(argv++);



if((a_file_name= BOOLEAN(*pa!='-'))||*(pa+1)=='\0')

{
if(doing_cmd_line)
{
if(!*pfound_web)
{
STRCPY(wbflnm,THE_FILE_NAME);
*pfound_web= YES;
}
else if(!*pfound_change)

{
if(a_file_name&&STRLEN(pa)>MAX_FILE_NAME_LENGTH-5)
too_long();



if(a_file_name&&(dot_pos= OC(STRCHR(pa,wt_style.ext_delimiter)))==NULL
&&!try_extensions)
{

if(
nsprintf(change_file_name,OC("%s%cch"),2,pa,wt_style.ext_delimiter)>=(int)(MAX_FILE_NAME_LENGTH))OVERFLW("change_file_name","");
}
else
{

if(
nsprintf(change_file_name,OC("%s"),1,THE_FILE_NAME)>=(int)(MAX_FILE_NAME_LENGTH))OVERFLW("change_file_name","");
}

*pfound_change= YES;
}


else

{
printf("! Warning: Ignoring multiple change file \"%s\".\n",
(char*)THE_FILE_NAME);
mark_harmless;
continue;
}

;
}
else
{
printf("\n! File name \"%s\" is not allowed as optional argument; \
ignored.\n",pa);
mark_harmless;
}
}


else

{
outer_char mc;
outer_char cmd_symbol;


pa++;

if(*pa=='-')
{
not= YES;
pa++;
}
else
not= NO;

reswitch:
switch(cmd_symbol= *pa++)
{

case '1':
tracing= BRIEF;
break;

case '2':
tracing= VERBOSE;
break;

case '@':

{
if(!at_codes)
{
at_codes= GET_MEM("at_codes",200,ASCII);
at_codes[0]= '\0';
}

STRCAT(at_codes,to_ASCII(pa));
info_option= YES;
}


continue;

case 'a':
case 'A':

{
#if(TRANSLATE_ASCII || DEBUG_XCHR)
translate_ASCII= YES;
#else
translate_ASCII= NOT(TRANSLATE_ASCII0);
#endif
}



break;

case 'b':

{
params.Block_nums[LN(FORTRAN)]
= params.Block_nums[LN(FORTRAN_90)]
= params.Block_nums[LN(RATFOR)]
= params.Block_nums[LN(RATFOR_90)]
= NOT(BLOCK_NUMS);
}


break;

case 'B':
beeps= NOT(BEEPS);
break;


case 'c'

:

{

cant_negate(pa-2);



Cpp= BOOLEAN(*pa=='+');

if(Cpp)
while(*pa=='+')
pa++;

switch(*pa)
{
case '{':
set_filter(Cpp?C_PLUS_PLUS:C);
continue;

case '\0':
ini_language(XORD(*LANGUAGE_CODE(C)));
continue;

default:
break;
}
}



break;

case 'C':
while(*pa)
pa++;
break;

case 'D':

{
if(*pa=='[')

{
for(++pa;*pa!=']';pa++)
switch(*pa)
{
case 'i':
case 'I':
rsrvd.intrinsics= YES;
break;

case 'k':
case 'K':
rsrvd.keywords= YES;
break;

case 'r':
case 'R':
rsrvd.reserveds= YES;
break;

case '\0':

err0_print(ERR_C,OC("Missing ']' inserted after optional argument \
list to `-D'"),-1-0);
break;

default:

err0_print(ERR_C,OC("Optional argument to `-D' must be one of \
'i', 'k', or 'r'"),-1-0);
break;
}

pa++;
}


else
{
if(!(*pa=='\0'||*pa=='*'||isalpha(*pa)))
{

err0_print(ERR_C,OC("Either nothing, a letter, '*', or '[' \
must follow `-D'; option ignored"),-1-0);
break;
}

rsrvd.reserveds= rsrvd.intrinsics= rsrvd.keywords= YES;
}

rsrvd.args= pa;

info_option= YES;
}


continue;

case 'd':
number_dos= NOT(NUMBER_DOS);

case ':':

{

cant_negate(pa-2);



max_stmt= STARTING_DO_NUM;

if(*pa)
{
max_stmt= ATOL(pa);

if(max_stmt>99999L)

err0_print(ERR_C,OC("Starting DO number must be < 99999; assuming %lu"),-1-1,max_stmt= STARTING_DO_NUM);
}
}



continue;

case 'e':
try_extensions= NOT(TRY_EXTENSIONS);break;

case 'E':

{

cant_negate(pa-2);



if(*pa)
wt_style.ext_delimiter= *pa++;
else

err0_print(ERR_C,OC("Missing character after -E option; option ignored"),-1-0);
}


break;

case 'f':
subscript_fcns= NOT(SUBSCRIPT_FCNS);break;

case 'F':
compare_outfiles= NOT(COMPARE_OUTFILES);break;

case 'g':
dbg_output= NOT(DBG_OUTPUT);break;

case 'h':

cant_negate(pa-2);


help();
continue;

case 'H':

{
outer_char HUGE*p= pa;

more_H:
switch(*p++)
{
case 'r':
rmv_files= NOT(RMV_FILES);
goto more_H;

case 'x':
quoted_includes= NOT(QUOTED_INCLUDES);
goto more_H;

case 'X':
all_includes= NOT(ALL_INCLUDES);
goto more_H;

case '\0':
read_iformats= NOT(READ_IFORMATS);
continue;

default:
bad_option();
continue;
}

}


break;

case 'i':

{
switch(*pa++)
{
case 'x':
index_hidden= NOT(INDEX_HIDDEN);
toggle_includes= NOT(TOGGLE_INCLUDES);
break;

case '\0':
toggle_includes= NOT(TOGGLE_INCLUDES);
continue;

case '!':
skip_includes= NOT(SKIP_INCLUDES);break;

default:
bad_option();
continue;
}
}


break;

case 'I':

{
more_includes(read_iformats?&hdr_incl:&incl,pa);

}


continue;

case 'j':
skip_ifiles= NOT(SKIP_IFILES);break;

case 'k':
lc_keywords= NOT(LC_KEYWORDS);break;

case 'L':

{
switch(*pa)
{

case 'c'

:

case 'n'

:

case 'r'

:
goto reswitch;


case 'v'



:

cant_negate(pa-2);


switch(*(pa+1))
{
case '{':
set_filter(LITERAL);
break;

case '\0':
ini_language(XORD(*LANGUAGE_CODE(LITERAL)));
break;

default:
bad_lcmd("argument",pa-2);
break;
}
break;


case 'x'

:

cant_negate(pa-2);


switch(*(pa+1))
{
case '{':
set_filter(TEX);
break;

case '\0':
ini_language(XORD(*LANGUAGE_CODE(TEX)));
break;

default:
bad_lcmd("argument",pa-2);
break;
}
break;

default:
bad_lcmd("command",pa-2);
break;
}
}


continue;

case 'l':

{
prn_input_lines= BOOLEAN(YES^not);

if(*pa)
if(isdigit(*pa)||*pa=='-')
{
outer_char*colon_pos;

start_line= ATOL(pa);

if((colon_pos= OC(STRCHR(pa,':')))==NULL)
end_line= LONG_MAX;
else
end_line= ATOL(colon_pos+1);
}

else
{
printf("! Option `-l' must be followed by integer.\n");
mark_harmless;
}


if(start_line<0)
{
start_line= -start_line;
prn_input_addresses= YES;
}
}


continue;

case 'M':

{
if(!*pa)
msg_level= EVERYTHING;
else
{
msg_level= ATOI(pa++);

if(msg_level<NOTHING||msg_level>EVERYTHING)
{
printf("! Argument to `-M' must be %i--%i or empty (==%i).\n",
NOTHING,EVERYTHING,EVERYTHING);
mark_harmless;
msg_level= EVERYTHING;
}
}
}



continue;

case 'm':

{
switch(*pa)
{
case '4':


cant_negate(pa-2);


m4= !M4_;
pa++;
break;

case ';':

auto_app_semi= NOT(AUTO_APP_SEMI);
pa++;
break;

case '\0':

err0_print(ERR_C,OC("Missing id for 'm' option"),-1-0);
break;

default:
if(not)
goto undefine_macro;

define_macro:
mc= *pa;

if(!(isalpha(mc)||mc=='_'||mc=='$'))

err0_print(ERR_C,OC("Macro definition may not start with \
'%c'; -m option ignored"),-1-1,mc);
else
save_macro(OC("m"),(outer_char*)pa);


continue;
}
}


break;

case 'N':
nuweb_mode= NOT(NUWEB_MODE);
break;

case 'n':
FR_args(FORTRAN);
continue;

case 'o':
overload_ops= NOT(OVERLOAD_OPS);
break;

case 'p':

{
IN_STYLE outer_char HUGE*sprm_buf,HUGE*sprm_ptr,HUGE*sprm_end;
int n= STRLEN(pa);
size_t nbuf,nused;

if(!sprm_buf)
{
sprm_ptr= sprm_buf= GET_MEM("sprm_buf",SPRM_LEN,outer_char);
sprm_end= sprm_buf+SPRM_LEN;
nbuf= SPRM_LEN;
}

if(sprm_ptr+(n+2)>=sprm_end)
{
BUF_SIZE old_size;

nused= PTR_DIFF(size_t,sprm_ptr,sprm_buf);
old_size= nbuf;
nbuf= PTR_DIFF(size_t,sprm_end,sprm_buf)+SPRM_LEN;

if((sprm_buf= (outer_char HUGE*)REALLOC(sprm_buf,
nbuf*sizeof(outer_char),old_size*sizeof(outer_char)))==NULL)
OVERFLW("sprm_buf",0);

sprm_ptr= sprm_buf+nused;
sprm_end= sprm_ptr+nbuf;
}


STRCPY(sprm_ptr,pa);
sprm_ptr+= n;
*sprm_ptr++= ' ';
*sprm_ptr++= '\n';
}


continue;

case 'P':

{
switch(*pa)
{
default:

err0_print(ERR_C,OC("'%c' is invalid option for -X; must be either 'L' \
(LaTeX) or 'T' (TeX).  Assuming LaTeX"),-1-1,*pa);
TeX_processor= LaTeX_p;
continue;

case '\0':
pa--;

case 'L':
TeX_processor= LaTeX_p;
break;

case 'T':

err0_print(ERR_C,OC("Warning: Plain TeX (`-PT') is no longer supported.  \
Please use LaTeX (`-PL')"),-1-0);
TeX_processor= TeX_p;
break;
}

pa++;
}



break;

case 'q':
free_form_input= NOT(FREE_FORM_INPUT);
Ratfor77= NOT(RATFOR77);
break;


case 'r'

:
if(!RAT_OK("Language command ignored"))
break;
FR_args(RATFOR);
continue;

case 's':

{
statistics= NOT(STATISTICS);



if(*pa)
if(*pa=='m')
{
pa++;
show_mem= NOT(SHOW_MEM);
if(isdigit(*pa))show_size= ATOL(pa);
}
else
{
printf("! Option \"%s\" is invalid.\n",(char*)(pa-2));
mark_harmless;
}
}


continue;

case 't':

{

cant_negate(pa-2);


ntrunc();
}


continue;

case 'T':

{
outer_char HUGE*p= pa;

if(!*p)
{
no_arg('T',OC("Dv%#"));
continue;
}

while(*p)
switch(*p++)
{
case 'D':
deferred_macros= NOT(DEFERRED_MACROS);
break;

case 'b':
redefine_builtins= NOT(REDEFINE_BUILTINS);
break;

case 'm':
redefine_macros= NOT(REDEFINE_MACROS);
break;

case 'v':
top_version= NOT(TOP_VERSION);
break;

case '%':
keep_trailing_comments= NOT(KEEP_TRAILING_COMMENTS);
break;

case '#':
auto_line= NOT(AUTO_LINE);
break;

default:
bad_option();
break;
}
}


continue;

case 'u':

{
if(not)
goto define_macro;

undefine_macro:
if(*pa=='\0')

err0_print(ERR_C,OC("Missing identifier for `-u' option"),-1-0);
else
save_macro(OC("#undef"),pa);
}



continue;

case 'U':
lowercase_tokens= NOT(LOWERCASE_TOKENS);
break;

case 'V':
prn_version= NOT(PRN_VERSION);
break;

case 'v':
all_cmnts_verbatim= NOT(ALL_CMNTS_VERBATIM);
break;

case 'w':
if(*pa)
new_fname(&fwebmac,pa,NULL);
else
input_macros= NOT(INPUT_MACROS);

continue;

case 'W':

{
outer_char HUGE*p= pa;
int n,n_old;

if(!*p)
{
no_arg('W',OC("@1[HdFflmvWw"));
continue;
}

while(*p)
switch(*p++)
{
case '@':
if(!*p)
mod_warning_flag= ALL_WARNINGS;
else
mod_warning_flag= ATOI(p++);
break;

case '1':
index_one= NOT(INDEX_ONE);
break;

case '[':
active_brackets= NOT(ACTIVE_BRACKETS);
break;

case 'H':
n= STRLEN(p);
n_old= STRLEN(extra_args);

if(!extra_args)
{
extra_args= GET_MEM("extra_args",n+1,outer_char);
STRCPY(extra_args,p);
}
else
{
if((extra_args= (outer_char*)REALLOC(extra_args,
(n_old+n+1)*sizeof(outer_char),
n_old*sizeof(outer_char)))==NULL)
OVERFLW("extra_args",0);

STRCAT(extra_args,p);
}

p+= n;
break;

case 'd':
defn_mask.outer_macros= NOT(PRN_OUTER_MACROS);
break;

case 'f':
defn_mask.formats= NOT(PRN_fORMATS);
break;

case 'F':
defn_mask.Formats= NOT(PRN_FORMATS);
break;

case 'l':
defn_mask.limbo= NOT(PRN_LIMBO);
break;

case 'm':
defn_mask.macros= NOT(PRN_MACROS);
break;

case 'v':
defn_mask.v= NOT(PRN_V);
break;

case 'w':
case 'W':
defn_mask.w= NOT(PRN_W);
break;

default:
bad_option();
break;
}
}


continue;

case 'x':
flags3(BOOLEAN(not));
continue;

case 'X':
if(*pa=='I')
{
makeindex= NOT(MAKEINDEX);
break;
}

flags3(BOOLEAN(!not));
continue;

case 'y':

{
outer_char abbrev[80],HUGE*a;
BUF_SIZE nunits;
MEM HUGE*m,HUGE*mmin= NULL,HUGE*mmax= NULL;
boolean query_mode= NO;



cant_negate(pa-2);



if(!*pa)
{
mmin= mem;
mmax= mmin+(sizeof_mem/sizeof(MEM)-1);
query_mode= YES;
CLR_PRINTF(ALWAYS,info,("Default memory allocation parameters:"));
}
else
{
abbrev[0]= abbrev[1]= '\0';


for(a= abbrev;isalpha(*pa);)
*a++= *pa++;

TERMINATE(abbrev,2);

if(!isdigit(*pa))
{
mmin= msearch(abbrev,0L);
mmax= mmin+1;
query_mode= YES;
}
}

if(query_mode)
for(m= mmin;m<mmax;m++)
{
SET_COLOR(character);
printf(" \"%-s\"%s",
(char*)m->abbrev,m->abbrev[1]?"":" ");

SET_COLOR(ordinary);
printf("x %d byte(s):\
  min = %s, cur = %s [%s byte(s)], max = %s.\n",
m->bytes,
commas(m->min),
commas(m->nunits),
commas((m->nunits)*(m->bytes)),
commas(m->max));
}
else
{
nunits= ATOL(pa);
msearch(abbrev,nunits);
}

info_option= YES;
}


continue;

case 'z':

{

cant_negate(pa-2);



if(STRLEN(pa)<MAX_FILE_NAME_LENGTH)
{
if(STRCMP(pa,".")==0)
{
if(
nsprintf(style_file_name,OC(".%c%s"),2,PREFIX_END_CHAR,STYLE_FILE_NAME)>=
MAX_FILE_NAME_LENGTH)OVERFLW("./style_file_name","");
}
else
STRCPY(style_file_name,pa);

renamed_style= YES;
}
else

err0_print(ERR_C,OC("Style file name `%s' is too long; must be less \
than %d characters"),-1-2,pa,MAX_FILE_NAME_LENGTH);
}



continue;

case 'Z':
prn_style_defaults= BOOLEAN(!not);
style_args= pa;
info_option= YES;
continue;

case '.':
dot_constants= NOT(DOT_CONSTANTS);
break;

case '\\':
bslash_continued_strings= NOT(BSLASH_CONTINUED_STRINGS);
break;

case '?':
chk_stmts= NOT(CHK_STMTS);
break;

case '[':
translate_brackets= NOT(TRANSLATE_BRACKETS);
break;

case '(':
case ')':
chk_ifelse= NOT(CHK_IFELSE);break;

case '>':
case '=':

cant_negate(pa-2);


if(doing_cmd_line||phase==2)
redirect_output();
continue;

case '/':
params.CPP_comments[LN(FORTRAN)]
= params.CPP_comments[LN(FORTRAN_90)]
= params.CPP_comments[LN(RATFOR)]
= params.CPP_comments[LN(RATFOR_90)]
= BOOLEAN(YES^not);
break;

case '!':
params.Point_comments[LN(FORTRAN)]
= params.Point_comments[LN(FORTRAN_90)]
= params.Point_comments[LN(RATFOR)]
= params.Point_comments[LN(RATFOR_90)]
= BOOLEAN(YES^not);
break;

case '+':
compound_assignments= NOT(COMPOUND_ASSIGNMENTS);break;

case '#':
line_info= NOT(LINE_INFO);break;

default:
bad_option();
continue;
}


if(*pa)
spurious(pa);
}


;
}
}



SRTN
opt_args FCN((l))
ASCII l C1("")
{
ASCII arg_buffer[ARG_BUFFER_SIZE],*pa= arg_buffer,
*arg_buffer_end= arg_buffer+ARG_BUFFER_SIZE;
int argc;
outer_char HUGE*args[MAX_ARGS];

ini_language(l);

if(!IS_WHITE(*loc))
{
if(*loc!=0133)
{
*pa++= 055;
*pa++= l;

WHILE()
{
if(IS_WHITE(*loc)||*loc==0133)break;
if(*loc==0174&&parsing_mode==INNER)
{

err0_print(ERR_C,OC("WARNING:  Code mode ended during \
unbracketed optional argument.  Should there be white space after \
language command?"),0);
break;
}
COPY_TO_ARG_BUFFER(*loc++);
}
}


if(*loc==0133)
{
COPY_TO_ARG_BUFFER(040);

for(loc++;;)
{
if(*loc==0135)
{
loc++;
break;
}
COPY_TO_ARG_BUFFER(*loc++);
}
}

TERMINATE(pa,0);
argc= to_args(to_outer(arg_buffer),args,MAX_ARGS);
do_args(NO,argc,args,&found_web,(outer_char*)NULL,&found_change);
}

fin_language();
}



SRTN
ini_language FCN((l))
ASCII l C1("Basic language code")
{

l= A_TO_LOWER(l);

switch(l)
{

case 0143

:
language= (Cpp?C_PLUS_PLUS:C);
break;


case 0162

:
if(!RAT_OK("Invalid @r command; language set to C"))language= C;
else language= (Fortran88?RATFOR_90:RATFOR);
break;


case 0156

:
language= (Fortran88?FORTRAN_90:FORTRAN);
break;


case 0166



:
language= LITERAL;
break;


case 0170

:
language= TEX;
break;
}



if(doing_cmd_line)
cmd_language= language;

ini0_language();
}



SRTN
ini0_language(VOID)
{

out_language= OUT_LANGUAGE(language);



language_index= (short)lan_index(language);
language_num= (short)lan_num(language);

index_flag= YES;

switch(language)
{
case C:
Cpp= NO;
break;

case C_PLUS_PLUS:
Cpp= YES;
break;

case FORTRAN:
case FORTRAN_90:
free_form_input= global_params.Free_form_input[language_num];

auto_semi= global_params.Auto_semi[language_num];
break;

case RATFOR:
case RATFOR_90:
if(nuweb_mode)

err0_print(ERR_C,OC("SORRY, but Ratfor doesn't work yet with the N \
mode!"),0);
auto_semi= global_params.Auto_semi[language_num];
if(auto_semi)
free_form_input= NO;
break;

case LITERAL:
nuweb_mode= YES;
line_info= NO;
index_flag= NO;
break;

case TEX:
break;

default:
break;
}
}



SRTN
fin_language(VOID)
{
ini_reserved(language);

switch(language)
{
case C:
break;

case RATFOR:
break;

case FORTRAN:
break;

case LITERAL:
break;

case TEX:
break;

default:
break;
}

frz_params();



if(program==tangle)
out_file= params.outp_file[lan_num(out_language)];
}



SRTN
frz_params(VOID)
{

cont_char= XORD(in_escape);
free_90= BOOLEAN(Fortran88&&free_form_input);
free_Fortran= BOOLEAN((language==FORTRAN_90)&&free_90);

if(!prn_semis&&free_Fortran&&auto_pseudo_semis)
prn_semis= YES;


if(program==tangle&&free_90)
switch(language)
{
case FORTRAN_90:
case RATFOR_90:
begin_comment_char[lan_num(FORTRAN_90)]= 
(outer_char)CHOICE(free_90,'!','C');
break;

default:;
}

}



int
to_args FCN((p,args,max_args))
outer_char HUGE*p C0("")
outer_char HUGE*args[]C0("")
int max_args C1("")
{
int n;

for(n= 0;*p;p++)
{
if(n>=max_args)
{

err0_print(ERR_C,OC("Too many command-line or optional \
arguments; must be < %d"),1,max_args);
break;
}
while(isspace(*p))p++;
args[n++]= p;

for(p++;*p;p++)
if(isspace(*p)||!*p)break;

if(!*p)break;
TERMINATE(p,0);
}

return n;
}



SRTN
help(VOID)
{
if(!*pa)
{
printf("! For help, please use options\n\n\
  `-@' (query control codes),\n\
  `-D' (query reserved words),\n\
  `-y' (query memory allocations),\n\
  `-Z' (query style-file parameters)\n\n\
or see the info(1) man-page entry for FWEB."),fflush(stdout);
}

#if(HAVE_INFO)

{
outer_char temp[500],buf[500],*pmenus;

if(*pa)
pmenus= pa;
else
{
printf("\nTo enter `info FWEB' now, type\n\n\
  `?', for the top-level FWEB directory;\n\
  `node-name' or `-n node-name', to go to a specific node like `Macros'; or\n\
  a space-separated list of hierarchal FWEB menu items,\n\
     like `concepts structure'.\n\n\
Type `q' to exit info.  To abort now, hit Enter:  "),fflush(stdout);
gets((char*)buf);

pmenus= buf;
}

if(STRLEN(pmenus)>0)
{
if(*pmenus=='?'||*pmenus=='.')
pmenus++;

sprintf((char*)temp,"info -f FWEB %s",pmenus);
system((char*)temp);
}
}


#endif 

usage("",NO);
}




SRTN
FR_args FCN((Language))
LANGUAGE Language C1("")
{
int lnum;

if(isdigit(*pa))
{

cant_negate(pa-2);



switch(*pa++)
{
case '7':
if(*pa=='7')
pa++;
Fortran88= NO;
ini_language(XORD(*LANGUAGE_CODE(Language)));
break;

case '9':
if(*pa=='0')
pa++;
Fortran88= YES;
ini_language(XORD(*LANGUAGE_CODE(Language)));
break;

default:
bad_loption(Language);
return;
}
}
else
{
lnum= lan_num(language);




switch(*pa++)
{
case '\\':
case '&':



cant_negate(pa-2);



if(FORTRAN90_LIKE(language))
params.Free_form_input[lnum]= NOT(FREE_FORTRAN);
params.In_escape[lnum]= *(pa-1);
break;

case '@':
if(*pa++!=';')
{
bad_option();
return;
}

params.Auto_semi[lnum]= BOOLEAN(YES^not);
params.Auto_pseudo_semis[lnum]= YES;
break;

case ';':
params.Auto_semi[lnum]= BOOLEAN(YES^not);
params.Auto_pseudo_semis[lnum]= NO;
break;

case ':':
if(is_FORTRAN_(Language))
Fortran_label= NOT(FORTRAN_LABEL);
break;

case '!':
params.Point_comments[lnum]= BOOLEAN(YES^not);
break;

case '/':
params.CPP_comments[lnum]= BOOLEAN(YES^not);
break;

case ')':
params.Reverse_indices[lnum]= BOOLEAN(YES^not);
break;

case 'b':
case 'B':
params.Block_nums[lnum]= NOT(BLOCK_NUMS);
break;

case 'C':
params.Ignore_C= NOT(IGNORE_C);
break;

case 'g':
case 'G':

cant_negate(pa-2);




{
if(is_RATFOR_(Language))
{
if(!RAT_OK("'g' command ignored"))
break;

{
while(*pa)
if(isalpha(*pa))
switch(*pa++)
{
case 'r':
case 'R':
g_ratio= STRTOD(pa,&pa);
if(g_ratio<MIN_G_RATIO)
{

err0_print(ERR_C,OC(
"Invalid 'g' option: %s must be >= %.1f"),-1-2,"g_ratio",MIN_G_RATIO);
g_ratio= G_RATIO;
};
break;
case 'm':
case 'M':
marginal_cases= 
(unsigned short)STRTOL(pa,&pa,10);
if(marginal_cases<MIN_MARGINAL_CASES)
{

err0_print(ERR_C,OC("Invalid 'g' option: %s must be >= %d"),-1-2,"marginal_cases",MIN_MARGINAL_CASES);
marginal_cases= MARGINAL_CASES;
};
break;
case 's':
case 'S':
max_spread= STRTOL(pa,&pa,10);
if(max_spread<MIN_MAX_SPREAD)
{

err0_print(ERR_C,OC("Invalid 'g' option: %s must be >= %d"),-1-2,"max_spread",MIN_MAX_SPREAD);
max_spread= MAX_SPREAD;
};
break;
default:

err0_print(ERR_C,OC("Invalid 'g' option: \
parameter type '%c'"),-1-1,*(pa-1));
break;
}
}

;
}
else
bad_loption(Language);
}


return;

case 'k':
suppress_cmds= BOOLEAN(YES^not);

{
if(!*pa)
STRCPY(abbrev_cmds,"*");
else
STRNCPY(abbrev_cmds,pa,NUM_RATFOR_CMDS);
}



return;

case 'K':
suppress_cmds= BOOLEAN(NO^not);

{
if(!*pa)
STRCPY(abbrev_cmds,"*");
else
STRNCPY(abbrev_cmds,pa,NUM_RATFOR_CMDS);
}



return;

case 'p':
if(is_FORTRAN_(Language))
prn_semis= NOT(PRN_SEMIS);
break;

case '{':

cant_negate(pa-2);


pa--;
set_filter(language);
return;

case '\0':



cant_negate(pa-2);


ini_language(XORD(*LANGUAGE_CODE(Language)));
return;

default:
bad_loption(Language);
return;
}
}

if(*pa)
spurious(pa);
}



SRTN
save_macro FCN((cmd,t))
CONST outer_char HUGE*cmd C0("Name of the ``at'' command to put first.")
outer_char HUGE*t C1("Text of the definition.")
{
eight_bits HUGE*p;
boolean replace_equals= BOOLEAN(STRCMP(cmd,"m")==0);


if(program==weave)return;

p= mp;


*mp++= '@';

while(*cmd)
*mp++= *cmd++;

*mp++= ' ';

while(*t)
{
if(replace_equals)
if(*t=='=')
{
*t= ' ';
replace_equals= NO;
}
else if(*t==' ')replace_equals= NO;
*mp++= *t++;
}

*mp++= ' ';
*mp= '@';*(mp+1)= 'm';


for(;p<mp+2;p++)
*p= XORD(*p);
}



SRTN
divert FCN((buffer,end,stop))
ASCII HUGE*buffer C0("Start of the buffer.")
ASCII HUGE*end C0("End of the buffer.")
boolean stop C1("Stop when end is reached?")
{
stop_the_scan= stop;

fbuffer= cur_buffer;
flimit= limit;
floc= loc;

cur_buffer= loc= buffer;
limit= end;

from_buffer= YES;
}


SRTN
undivert(VOID)
{
cur_buffer= fbuffer;
limit= flimit;
loc= floc;

from_buffer= NO;
}




SRTN
mem_avail FCN((at_end))
int at_end C1("0 for beginning, 1 for end")
{
SET_COLOR(info);

if(at_end)
printf("\n Allocated maximum of %s bytes dynamically; \
ended with %s bytes.\n",
commas(max_mem),commas(total_mem));

#if PRINT_AVAILABLE_MEMORY
printf(" Available memory: %s bytes.\n",commas(CORE_LEFT));
if(!at_end)
{
starting_memory= CORE_LEFT;
putchar('\n');
}
#endif

free_buf(&c_buf);
SET_COLOR(ordinary);
}



SRTN
stat0 FCN((name,size,num,max_num,abs_max_num,abbrev,ctrl_chars))
CONST outer_char*name C0("")
size_t size C0("")
BUF_SIZE num C0("")
BUF_SIZE max_num C0("")
BUF_SIZE abs_max_num C0("")
CONST outer_char*abbrev C0("")
CONST outer_char*ctrl_chars C1("")
{
SET_COLOR(ordinary);
printf("  %s ",(char*)name);

SET_COLOR(character);
printf("[\"%s\"]",(char*)abbrev);

SET_COLOR(ordinary);
printf(" x %u byte(s):  %lu [%lu byte(s)] of %lu <= %s%s\n",
(unsigned)size,num,num*size,max_num,
commas(abs_max_num),(char*)ctrl_chars);
free_buf(&c_buf);
}



BUF_SIZE
smin0 FCN((abs_max_num))
BUF_SIZE abs_max_num C1("")
{
return MIN(starting_memory,abs_max_num);
}




SRTN
init_buf FCN((p,num))
BUF*p C0("")
int num C1("")
{
p->s= GET_MEM("buf array",num,outer_char*);
p->num= num;
p->n= 0;
}

outer_char*
push_buf FCN((p,s))
BUF*p C0("")
outer_char*s C1("")
{
if(p->n>=p->num)
{}

return p->s[p->n++]= s;
}

SRTN
free_buf FCN((p))
BUF*p C1("")
{
while(p->n>0)
FREE(p->s[--p->n]);
}



outer_char*
commas FCN((l))
unsigned long l C1("")
{
outer_char temp[50],*p;
outer_char temp1[100],*p1;
int n0,n;
int len;

p= temp;
p1= temp1;

#if 0
if(l<0)
{
*p1++= '-';
l= -l;
}
#endif

sprintf((char*)temp,"%lu",l);

len= STRLEN(temp);

n= 3-len%3;

while(*p)
{
*p1++= *p++;
n++;
if(n%3==0)
*p1++= ',';
}

p1[-1]= '\0';

return push_buf(&c_buf,temp1);
}




SRTN
ntrunc(VOID)
{
LANGUAGE l;

truncate_ids= NO;

if(!*pa)
goto bad_t_option;

while(*pa)
{
if(isdigit(*pa))
l= (language==NO_LANGUAGE)?GLOBAL_LANGUAGE:language;
else switch(*pa++)
{

case 'c'

:
l= lcase(C,'\0',C_PLUS_PLUS,'+',&pa);
break;

case 'r'

:
l= lcase(RATFOR,'7',RATFOR_90,'9',&pa);
break;

case 'n'

:
l= lcase(FORTRAN,'7',FORTRAN_90,'9',&pa);
break;

case 'v'



:
l= LITERAL;break;

case 'x'

:
l= TEX;break;
default:
bad_t_option:

err0_print(ERR_C,OC("Invalid -t option.  Example:  `-tn=6{_}'"),-1-0);
return;
}


if(*pa==LANGUAGE_SEPARATOR)
pa++;


truncate_ids= 
BOOLEAN(CHOICE((tr_max[lan_num(l)]= (unsigned short)ATOI(pa))!=0,
YES,NO));

while(isdigit(*pa))pa++;

if(*pa=='{')
set_filter(l);
}
}



LANGUAGE
lcase FCN((l0,c0,l1,c1,pp))
LANGUAGE l0 C0("")
outer_char c0 C0("")
LANGUAGE l1 C0("")
outer_char c1 C0("")
outer_char HUGE*HUGE*pp C1("")
{
if(c0&&**pp==c0)
{
while(**pp==c0)(*pp)++;
return l0;
}

if(c1&&**pp==c1)
{
while(**pp==c1)(*pp)++;
return l1;
}

return l0;
}



SRTN
set_filter FCN((Language))
LANGUAGE Language C1("")
{
if(!*pa)
return;

if(*pa=='{')
pa++;

filter_char[lan_num(Language)]= (char*)pa;



for(;*pa;pa++)
if(*pa=='}')
{
*pa++= '\0';
return;
}
}




SRTN
flags3 FCN((not))
boolean not C1("")
{
prn_contents= BOOLEAN(PRN_CONTENTS^not);
prn_index= BOOLEAN(PRN_INDEX^not);
prn_modules= BOOLEAN(PRN_MODULES^not);
xref_unnamed= BOOLEAN(XREF_UNNAMED^not);

if(!(*pa))
{
*pa= '*';
*(pa+1)= '\0';
}

for(;*pa;pa++)
switch(*pa)
{
case '*':
case '/':
prn_contents= NOT(PRN_CONTENTS);
prn_index= NOT(PRN_INDEX);
prn_modules= NOT(PRN_MODULES);
break;

case 'c':
prn_contents= NOT(PRN_CONTENTS);
break;

case 'i':
prn_index= NOT(PRN_INDEX);
break;

case 'm':
prn_modules= NOT(PRN_MODULES);
break;

case 'u':
xref_unnamed= NOT(XREF_UNNAMED);
break;

default:

err0_print(ERR_C,OC("'%c' is invalid argument for `-x' or `-X'; \
must be element of set {*cim}"),-1-1,*pa);
break;
}

no_xref= BOOLEAN(!(prn_index||prn_modules));
}



SRTN
redirect_output(VOID)
{
int k;

if(*pa=='\0')
{
new_fname(&tex_fname,OC("stdout"),NULL);

for(k= 0;k<NUM_LANGUAGES;k++)
new_fname(params.outp_nm+k,OC("stdout"),NULL);
}
else if(phase==2&&program==weave)
return;
else
{
outer_char c,HUGE*pname;
outer_char HUGE*q= (outer_char HUGE*)STRCHR(pa,LANGUAGE_SEPARATOR);


if(q==pa)
{
c= LANGUAGE_SEPARATOR;
pname= q+1;
}
else if(q)
{
c= *pa++;
pname= q;
}
else
{
c= LANGUAGE_SEPARATOR;
pname= pa;
}

switch(c)
{

case 'c'

:
set_fname(lcase(C,'\0',C_PLUS_PLUS,'+',&pa),pname,YES);
break;


case 'r'

:
if(!RAT_OK("Redirection ignored"))break;

set_fname(lcase(RATFOR,'7',RATFOR_90,'9',&pa),pname,YES);
break;


case 'n'

:
set_fname(lcase(FORTRAN,'7',FORTRAN_90,'9',&pa),pname,YES);
break;


case 'v'



:
set_fname(LITERAL,pname,YES);
break;


case 'x'

:
set_fname(TEX,pname,YES);
break;

case LANGUAGE_SEPARATOR:
#if 0 
new_fname(&tex_fname,pname,NULL);
#endif

for(k= 0;k<NUM_LANGUAGES;k++)
new_fname(params.outp_nm+k,pname,NULL);

break;

default:

err0_print(ERR_C,OC("Syntax error in output redirection \
command \"->\". Language must be one of 'c', 'r', 'n', `m', or `x',  not '%c'"),-1-1,*(pa-1));
break;
}
}
}



SRTN
set_fname FCN((l,s,check))
LANGUAGE l C0("Language")
outer_char HUGE*s C0("Remainder of command-line argument to parse")
boolean check C1("Do we check for beginning colon?")
{
if(program==weave)

err0_print(ERR_C,OC("Can't redirect FWEAVE's TeX output by individual \
languages. Use \"->\" or \"-%cname.ext\""),-1-1,LANGUAGE_SEPARATOR);

if(check)
if(*s++!=LANGUAGE_SEPARATOR)
{

err0_print(ERR_C,OC("Expected '%c' after language in \"->\"; \
command ignored"),-1-1,LANGUAGE_SEPARATOR);
return;
}


new_fname(params.outp_nm+lan_num(l),*s?s:(outer_char HUGE*)"stdout",NULL);
}




SRTN
cant_negate FCN((s))
outer_char HUGE*s C1("")
{
if(not)
{
printf("! Can't negate option \"%s\"'; ignoring extra hyphen.\n",
(char*)s);
mark_harmless;
}
}



SRTN
bad_lcmd FCN((type,pa0))
CONST char*type C0("")
CONST outer_char HUGE*pa0 C1("")
{

err0_print(ERR_C,OC("Invalid language %s \"%s\""),-1-2,type,pa0);
}



SRTN
bad_loption FCN((Language))
LANGUAGE Language C1("")
{
printf("! Invalid language option \"%s\" for %s.\n",
(char*)(pa-3),is_FORTRAN_(Language)?"Fortran":"Ratfor");
mark_harmless;
}



SRTN
no_arg FCN((option,letters))
outer_char option C0("Letter of option")
CONST outer_char*letters C1("Possibilities for args")
{

err0_print(ERR_C,OC("Missing argument for `-%c' option; \
should be one or more letters in set {%s}"),-1-2,option,letters);
}



SRTN
usage FCN((msg,is_fatal))
CONST char*msg C0("")
boolean is_fatal C1("Fatal?")
{
if(is_fatal)
{
char c= wt_style.ext_delimiter;


fatal(ERR_NULL,OC(msg),OC("!! Usage:  %s [-option...] webfile[%cweb] \
[changefile[%cch]]\n"),program==tangle?"ftangle":"fweave",c,c);
}
else
wrap_up();
}



SRTN
too_long(VOID)
{

fatal(ERR_NULL,OC("!! Filename too long:  "),OC("%s."),(CONST outer_char*)pa);
}



SRTN
bad_option(VOID)
{
printf("! (%s):  Unknown option `%s' ignored.\n",
cmd_prms?"Command line":".fweb",(char*)pa_begin);
mark_harmless;
}



SRTN
chk_override FCN((language0))
LANGUAGE language0 C1("")
{
if(language!=language0&&cmd_language!=NO_LANGUAGE&&cmd_language!=
language)

err0_print(ERR_C,OC("WARNING:  Command-line language %s overridden in limbo by %s"),2,languages[lan_num(cmd_language)],languages[lan_num(language)]);
}



SRTN
new_fname FCN((pname,name,ext))
outer_char HUGE*HUGE*pname C0("")
outer_char*name C0("")
outer_char*ext C1("")
{
outer_char temp[MAX_FILE_NAME_LENGTH];


if(!name)
*pname= GET_MEM("pname",DFLT_FNAME_LENGTH+1,outer_char);
else
{

char ext_delimiter[2];
FILE*temp_file_ptr;

ext_delimiter[0]= (char)wt_style.ext_delimiter;
ext_delimiter[1]= '\0';


if(
nsprintf(temp,OC("%s%s%s"),3,name,ext?
ext_delimiter:"",ext?ext:(outer_char*)"")>=(int)(MAX_FILE_NAME_LENGTH))OVERFLW("temp","");





was_opened(temp,0,pname,&temp_file_ptr);
}
}



unsigned
esc_file_name FCN((esc_name,max_length,name))
outer_char*esc_name C0("Put answer into here")
unsigned max_length C0("Maximum length of |esc_name|.")
outer_char*name C1("Put escapes into this name")
{
outer_char*pt,*pn;
unsigned n;

max_length--;

for(pt= esc_name,pn= name,n= 0;*pn;)
{
if(program==weave)
switch(*pn)
{
case '\\':case '$':case '#':case '%':
case '^':case '~':case '&':case '_':
if(n<max_length)
{
n++;
*pt++= '\\';
}
}

if(n<max_length)
{
n++;
*pt++= *pn++;
}
}

TERMINATE(pt,0);
return n;
}



SRTN
ASCII_file_write FCN((file_ptr,p0,n))
FILE*file_ptr C0("Standard file pointer.")
CONST ASCII HUGE*p0 C0("Start of the buffer.")
size_t n C1("Number of characters to write.")
{
CONST ASCII HUGE*p,HUGE*p1= p0+n;
ASCII atemp[1000],HUGE*a,HUGE*a1;
size_t n_out;

if(n==0)
return;


for(p= p0,a1= atemp;p<p1;a1++,p++)
switch(*p)
{
case interior_semi:
*a1= 073;
break;

case MACRO_ARGUMENT:
*a1++= 0133;
*a1++= 0133;
*a1++= (ASCII)(060+*(++p));
*a1++= 0135;
*a1= 0135;
break;

default:
*a1= *p;
break;
}

n= PTR_DIFF(size_t,a1,atemp);


if(translate_ASCII)
{
outer_char temp[1000];
outer_char HUGE*t;

for(a= atemp,t= temp;a<a1;)
*t++= XCHR(*a++);

n_out= FWRITE(temp,n,file_ptr);
}
else
n_out= FWRITE(atemp,n,file_ptr);

if(n_out!=1)

{

fatal(ERR_NULL,OC("! WRITE ERROR:  "),OC("nbytes = %u, %u items written\n%s"),(unsigned)n,(unsigned)n_out,strerror(errno));
}


}



#if !HAVE_STRERROR

char*
strerror FCN((errnum))
int errnum C1("")
{
static char temp[50];

sprintf(temp,"(strerror() is not available; errno = %d).",errnum);
return temp;
}

#endif 



struct tm*
the_localtime(VOID)
{
time_t the_tm;
time_t time PROTO((time_t*tp));

time(&the_tm);
return localtime(&the_tm);
}



CONST outer_char*
the_day FCN((t))
CONST struct tm*t C1("")
{
return OC(day[t->tm_wday]);
}

#define NDATE 20

CONST outer_char*
the_cdate FCN((t))
CONST struct tm*t C1("")
{
static outer_char date_buf[NDATE];

if(
nsprintf(date_buf,OC("%s %d, %d"),3,month[t->tm_mon],t->tm_mday,1900+t->tm_year)>=NDATE)
OVERFLW("Date","");
return(CONST outer_char*)date_buf;
}
#undef NDATE

#define NTIME 8

CONST outer_char*
the_time FCN((t))
CONST struct tm*t C1("")
{
static outer_char time_buf[NTIME];

if(
nsprintf(time_buf,OC("%d:%02d"),2,t->tm_hour,t->tm_min)>=NTIME)
OVERFLW("Time","");

return(CONST outer_char*)time_buf;
}
#undef NTIME



#if TIMING

SRTN
ini_timer(VOID)
{
TIME(&time0);
clock0= clock();
}

#endif 



#if TIMING

SRTN
prn_time(VOID)
{
TIME_T time1;
double cpu,wall;
char less_than= NO;
char format[100];

cpu= (clock()-clock0)/(double)(CLOCKS_PER_SEC);
TIME(&time1);



if((wall= DIFFTIME(time1,time0))==0.0)
{
wall= 1.0;
less_than= YES;
}

SET_COLOR(timing);


sprintf(format,"\nCPU = %%.%df sec.",TIMING_WIDTH);
printf(format,cpu);
if(cpu>=60.0)printf(" (%.2f min.)",cpu/60.0);


sprintf(format,"; REAL %%s %%.%df sec.",TIMING_WIDTH);
printf(format,less_than?"<=":"=",wall);
if(wall>=60.0)printf(" (%.2f min.).",wall/60.0);


printf("  CPU/REAL = %.1f%%.",100.0*(cpu/wall));





SET_COLOR(ordinary);
}

#endif 



SRTN
ini_program FCN((program0))
PROGRAM program0 C1("")
{
program= program0;

the_system= OC(THE_SYSTEM);
local_banner= OC(LOCAL_BANNER);

ini_style();
}



SRTN
banner(VOID)
{
if(msg_level==NOTHING&&!prn_version)
return;

CLR_PRINTF(ALWAYS,info,("This is "));
SET_COLOR(program_name);
printf("%s",DEBUG_XCHR?"ScRaMbLeD ":"");

#if 0
CLR_PRINTF(ALWAYS,program_name,
("%s",program==tangle?"FTANGLE":"FWEAVE"));
#endif

printf("%s",program==tangle?"FTANGLE":"FWEAVE");

SET_COLOR(info);

printf(" [%s version %s (%s)%s%s]. %s\n",
(char*)the_system,(char*)version,(char*)release_date,
color_mode?"; TERM=":"",
color_mode?(char*)termcap:"",
(char*)local_banner);

SET_COLOR(ordinary);
}



SRTN
reading FCN((in_name,emit_newline))
CONST outer_char*in_name C0("")
boolean emit_newline C1("")
{
if(msg_level<SHORT_INFO)
return;

CLR_PRINTF(SHORT_INFO,info,("Reading"));putchar(' ');
CLR_PRINTF(SHORT_INFO,in_file,("%s",(char*)in_name));
CLR_PRINTF(SHORT_INFO,info,("..."));

if(emit_newline)
putchar('\n');
}



SRTN
writing FCN((print_write,out_name))
boolean print_write C0("")
CONST outer_char*out_name C1("")
{
if(msg_level<SHORT_INFO)
return;

if(print_write)
{
CLR_PRINTF(SHORT_INFO,info,("\nWriting"));
putchar(' ');
}

CLR_PRINTF(SHORT_INFO,out_file,("%s",(char*)out_name));
CLR_PRINTF(SHORT_INFO,info,("..."));
fflush(stdout);
}



SRTN
progress(VOID)
{
if(msg_level<EVERYTHING)
return;

if(loc[-1]==052)
{
if(err_happened)
{
putchar('\n');
err_happened= NO;
}
else
putchar(' ');

CLR_PRINTF(EVERYTHING,module_num,("*%d",module_count));
}

UPDATE_TERMINAL;
}



int
nsprintf FCN(VA_ALIST((s,fmt,n VA_ARGS)))
VA_DCL(
outer_char*s C0("")
CONST outer_char*fmt C0("")
int n C2(""))
{
int num_char;
VA_LIST(arg_ptr)
#if(NUM_VA_ARGS == 1)
outer_char*s;
CONST outer_char*fmt;
int n;
#endif

VA_START(arg_ptr,n);

#if(NUM_VA_ARGS == 1)
s= va_arg(arg_ptr,outer_char*);
fmt= va_arg(arg_ptr,outer_char*);
va_arg(arg_ptr,int);
#endif

#if ANSI_SPRINTF
num_char= 
#endif

vsprintf((char*)s,(CONST char*)fmt,arg_ptr);

#if !ANSI_SPRINTF
num_char= (int)STRLEN(s);
#endif

va_end(arg_ptr);

return num_char;
}


#endif 






SRTN
multi_chars FCN((c,n))
outer_char c C0("Character to print")
int n C1("Number of times to print")
{
while(--n>=0)
putchar(c);
}


void
seea(int n,char*s)
{
printf("Arg %i = \"%s\"\n",n,s);
}


outer_char*
get_arg FCN((result,s,ldelim,rdelim))
outer_char*result C0("Resulting argument string")
outer_char*s C0("Input argument")
outer_char ldelim C0("Left argument delimiter")
outer_char rdelim C1("Right argument delimiter")
{
outer_char*s0;
int blevel;

if(!s)
{

err0_print(ERR_C,OC("get_arg:  Null arg pointer"),0);
longjmp(top_of_get_arg,1);
}



while(*s==' '||*s=='\t')
s++;

if(*s++!=ldelim)
{

err0_print(ERR_C,OC("get_arg:  Expected '%c' while processing \"%s\".\n"),2,ldelim,s-1);
longjmp(top_of_get_arg,2);
}

s0= s;
blevel= 1;

while(*s)
{
if(*s==ldelim)
blevel++;
else if(*s==rdelim)
{
blevel--;

if(blevel<0)
{

err0_print(ERR_C,OC("Too many '%c' while processing \"%s\"\n"),2,rdelim,s0-1);
longjmp(top_of_get_arg,3);
}

if(blevel==0)
{
int n;

STRNCPY(result,s0,n= s-s0);
result[n]= '\0';
return s+1;
}
}

s++;
}

if(!(*s))
{

err0_print(ERR_C,OC("get_arg:  Field \"%s\" ended while scanning for '%c'\n"),2,s0-1,rdelim);
longjmp(top_of_get_arg,4);
}
}


SRTN
spurious FCN((pa1))
outer_char HUGE*pa1 C1("Current position")
{
printf("%c%s `%s'.\n",beep(1),SPURIOUS_MSG,pa_begin);
multi_chars(' ',STRLEN(SPURIOUS_MSG)+2+pa1-pa_begin);
puts("^");
}



SRTN
x_keyword FCN((pmp,buf_end,p,p1,in_quotes,out_quotes,input_level))
eight_bits HUGE*HUGE*pmp C0("")
eight_bits HUGE*buf_end C0("")
eight_bits HUGE*p C0("")
eight_bits HUGE*p1 C0("")
boolean in_quotes C0("")
boolean out_quotes C0("")
int input_level C1("")
{
eight_bits HUGE*mp= *pmp;
RCS HUGE*prcs;

ASCII temp[256];
int len;
eight_bits quote_char;
boolean found_it;

len= p1-p-2*in_quotes;

if(in_quotes)
quote_char= *p++;
else if(out_quotes)
quote_char= CUR_QUOTE;

if(out_quotes)
{
BCHECK(1,"quote0");
*mp++= quote_char;
}

STRNCPY(temp,p,len);
temp[len]= '\0';

found_it= NO;

for(prcs= prms[input_level].rcs_list.start;
prcs&&prcs->keyword;prcs= prcs->next)
if(STRCMP(temp,prcs->keyword)==0)
{
len= STRLEN(prcs->txt);
BCHECK(len,"keyword");
STRCPY(mp,prcs->txt);
mp+= len;
found_it= YES;
break;
}

if(!found_it)

err0_print(ERR_C,OC("Unrecognized %s RCS-like keyword `%s'"),2,input_level==WEB_FILE?"global":"local",temp);

if(out_quotes)
{
BCHECK(1,"quote1");
*mp++= quote_char;
}

*pmp= mp;
}


