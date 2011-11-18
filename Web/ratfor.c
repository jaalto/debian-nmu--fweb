#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/ratfor -A -# --F -= 1.62/Web/ratfor.c"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/ratfor.web"\
  CHANGE FILE:  (none)
#endif
#define _RATFOR_h  
#define _ratfor_   \

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

#define semi  01 \

#define SILENT  (boolean)NO
#define COMPLAIN  (boolean)YES \

#define OUTER_MACRO  0xFF
#define OUTER_UNMACRO  0xFE
#define UNDEFINED_MACRO  0xFD \

#define MAX_XLEVELS  200 \

#define equiv  equiv_or_xref
#define EQUIV  ASCII HUGE* \
 \
 \

#define MAC_LOOKUP(cur_val)(cur_val<MODULE_NAME? \
(text_pointer)(name_dir+(cur_val))->equiv:NULL) \

#define macro  0 \
 \
 \
 \

#define NOT_DEFINED  0
#define DEFERRED_MACRO  1 \

#define IMMEDIATE_MACRO  2
#define FILE_NAME  3 \
 \

#define MCHECK(n,reason)if(mp+(n)>macrobuf_end) \
mbuf_full((unsigned long)(n),(outer_char*)reason) \

#define BP_MARKER  1 \

#define PROPER_END(end) \
end= (np+1)->byte_start; \
if(*end==BP_MARKER&&np!=npmax)end= ((BP*)end)->byte_start \

#define MAX_ID_LENGTH  32 \

#define UNNAMED_MODULE  0
#define N_IDBUF  100 \

#define fatal_RAT_ERROR(s1,s2,s3){ \
RAT_error(ERROR,OC(s1),0); \
fatal(ERR_R,OC(s2),OC(s3));} \

#define COPY_COMMENTS  NO
#define SAVE_COMMENTS  YES \

#define current_cmd  lbl[wlevel].cmd
#define do_or_while  (current_cmd==do_CMD||current_cmd==while_CMD) \

#define s_top  lbl[wlevel].Top
#define s_next  lbl[wlevel].Next
#define was_next  lbl[wlevel].was_Next
#define s_break  lbl[wlevel].Break
#define was_break  lbl[wlevel].was_Break
#define s_case  lbl[wlevel].Case
#define s_default  lbl[wlevel].Default
#define icase  lbl[wlevel].Icase \

#define DONT_PRINT_IF_0  YES
#define PRINT_IF_0  NO \

#define TO_OUTPUT  NO
#define TO_MEMORY  YES \

#define SAVE_IN_MEM(a){if(cur_case->txt.next>=cur_case->txt.end) \
resize(&cur_case->txt.start,BIG_SAVE8, \
&cur_case->txt.next, \
&cur_case->txt.end); \
*(cur_case->txt.next++)= (eight_bits)(a);} \

#define SAVE_16  {SAVE_IN_MEM(a0)SAVE_IN_MEM(a1)} \

#define XPN_CASES  YES
#define DONT_XPN_CASES  NO \

#define BLEVELS  100 \

#define copy_to(r_after)copy_2to(NOT_BEFORE,r_after) \

#define BRACE_ONLY  1 \
 \

#define unmatched(l,r) \
RAT_error(WARNING,OC("Ignored '%c' not matched with %s"),2,XCHR(r),qdelim(l)) \

#define inserted(n,l0,r0,l,level) \
RAT_error(WARNING,OC("Inserted %d '%c' to balance '%c' at %s level %d"),5,n,XCHR(r0),XCHR(l0),qdelim(l),level) \
 \

#define COPY_TO(r)psave_buffer= SAVE_AFTER(&save_buffer,BIG_SAVE8,r); \
copy_out(save_buffer,psave_buffer,!macro) \

#define COPY_2TO(r_before,r_after) \
psave_buffer= save_out(&save_buffer,BIG_SAVE8,r_before,r_after); \
copy_out(save_buffer,psave_buffer,!macro) \

#define INDENT  indent_level++;blank_out(1)
#define OUTDENT  indent_level--;out_pos-= indnt_size \

#define LABEL(lbl)out_label(DONT_PRINT_IF_0,(STMT_LBL)(lbl))
#define NUMBER(lbl)out_label(PRINT_IF_0,(STMT_LBL)(lbl)) \
 \

#define PARENS  copyd(TO_OUTPUT,XPN_CASES,050,051,NO) \
 \

#define NL  out_char(012)
#define LP  out_char(050)
#define RP  out_char(051)
#define COMMA  out_char(054)
#define NOT  out_char(041)
#define EQUALS  out_char(075)
#define MINUS  out_char(055)
#define EQ_EQ  out_char(eq_eq)
#define OR  out_char(or_or)
#define LT  out_char(074)
#define GT  out_char(076) \

#define IF(stmt_num)LABEL(stmt_num);id0(id__IF)
#define THEN  id0(id__THEN);NL
#define ELSE  id0(id__ELSE)
#define ENDIF  id0(id__ENDIF);if(symbolic_label)id0(symbolic_label);NL
#define ENDWHERE  id0(id__ENDWHERE);NL
#define GOTO(stmt)id0(id__GOTO);LABEL(stmt);NL
#define CONTINUE(stmt)LABEL(stmt);id0(id__CONTINUE);NL
#define RETURN  id0(id__RETURN);NL
#define END  id0(id__END);NL \

#define END_DO  id0(id__END);id0(id__DO);NL
#define END_SELECT  id0(id__END);id0(id__SELECT);NL \

#define NOT_LOOP(id,msg)not_loop(OC(id),OC(msg)) \

#define SAVE8  200 \

#define BIG_SAVE8  10000 \

#define id__ignore  ignore \

#define UNEXPECTED(id)unexpected(OC(id)) \

#define NSWITCHES  20
#define NCASES  257
#define cur_switch  switches[switch_level] \




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




typedef struct
{
eight_bits HUGE*tok_start;

sixteen_bits text_link;
boolean Language;
eight_bits nargs;
unsigned
moffset:8,
recursive:1,
var_args:1,
module_text:1,
built_in:1,
protected:1,
nbytes:19;
}text;

typedef text HUGE*text_pointer;



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




typedef enum{BAD_TOKEN,OR_OR,AND_AND,BIT_OR,BIT_XOR,BIT_AND,LOG_EQ,LOG_LT,
BIT_SHIFT,PLUS_MINUS,TIMES,EXP,UNARY,HIGHEST_UNARY}PRECEDENCE;


typedef struct
{
eight_bits token;
PRECEDENCE precedence;
}OP;


typedef union
{
long i;
double d;
sixteen_bits id;
OP op;
}VALUE;



typedef enum{Int,Double,Id,Op}TYPE;



typedef struct val
{
VALUE value;
TYPE type;
struct val HUGE*last,HUGE*next;
}VAL;



typedef struct
{
sixteen_bits token[MAX_XLEVELS];
int level;
}XIDS;



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



IN_RATFOR int switch_level RSET(0);


typedef struct
{
eight_bits HUGE*start,HUGE*next,HUGE*end;
}TEXT;


typedef struct
{
STMT_LBL label;
TEXT case_txt;
CASE_TYPE value;
TEXT txt;
boolean is_default;
}CASE;

IN_RATFOR CASE HUGE*cur_case;


typedef struct
{
CASE HUGE*cases;
unsigned short ncases;
boolean has_default;
}SWITCH;

IN_RATFOR SWITCH HUGE*switches;




#include "t_type.h" 







#ifdef SMALL_MEMORY
#define N_MSGBUF 2000
#else
#define N_MSGBUF 10000
#endif





EXTERN long max_texts;
EXTERN text HUGE*text_info;
EXTERN text_pointer text_end;

EXTERN long dtexts_max;
EXTERN text HUGE*txt_dinfo;
EXTERN text_pointer textd_end;

EXTERN text_pointer text_ptr,txt_dptr;


EXTERN long max_toks;
EXTERN eight_bits HUGE*tok_mem;
EXTERN eight_bits HUGE*tok_m_end;

EXTERN long max_dtoks;
EXTERN eight_bits HUGE*tok_dmem;
EXTERN eight_bits HUGE*tokd_end;

EXTERN eight_bits HUGE*tok_ptr,HUGE*tok_dptr;

EXTERN eight_bits HUGE*mx_tok_ptr,HUGE*mx_dtok_ptr;


EXTERN text_pointer macro_text;



EXTERN output_state cur_state;


EXTERN long stck_size;
EXTERN output_state HUGE*stack;
EXTERN stack_pointer stck_end;
EXTERN stack_pointer stck_ptr;



IN_COMMON STMT_LBL max_stmt;

EXTERN sixteen_bits outp_line[NUM_LANGUAGES]
#ifdef _FTANGLE_h
#if(part == 0 || part == 1)
= {1,1,1,1,1,1,1,1}
#endif 
#endif 
;



EXTERN boolean mac_protected,in_string;
EXTERN text_pointer macro_text;
EXTERN long cur_val;
EXTERN OUTPUT_STATE out_state;
EXTERN int indent_level,out_pos,rst_pos,indnt_size;
EXTERN eight_bits sent;

IN_COMMON STMT_LBL max_stmt;
IN_COMMON sixteen_bits outp_line[];




IN_RATFOR sixteen_bits
id_block,id_blockdata,id_break,
id_case,
#if(0)
id_continue,
#endif
id_default,id_do,
id_else,id_elseif,id_end,
id_endif,
id_for,
#if(0)
id_goto,
#endif
id_if,
id_next,id_procedure,id_repeat,
id_return,id_switch,id_then,id_until,
id_while;

IN_RATFOR sixteen_bits id_function,id_program,id_subroutine;

IN_RATFOR sixteen_bits
id_contains,id_elsewhere,id_endinterface,id_endtype,id_endmodule,
id_endselect,id_endwhere,id_interface,id_module,id_type,id_where;


IN_RATFOR sixteen_bits id_data;


IN_RATFOR sixteen_bits
id__CASE,id__CONTINUE,id__DEFAULT,
id__DO,id__ELSE,id__ELSEIF,id__END,
id__ENDIF,id__EXIT,id__GOTO,id__IF,
id__RETURN,id__THEN,
id__WHILE;


IN_RATFOR sixteen_bits
id__CONTAINS,id__CYCLE,id__ENDWHERE,id__INTERFACE,id__MODULE,
id__SELECT,id__TYPE,id__WHERE;




IN_RATFOR SPEC out_tokens[]
#if(part == 0 || part == 1)
= {
{"CASE",0,NULL,&id__CASE},
{"CONTINUE",0,NULL,&id__CONTINUE},
{"DEFAULT",0,NULL,&id__DEFAULT},
{"DO",0,NULL,&id__DO},
{"ELSE",0,NULL,&id__ELSE},
{"ELSEIF",0,NULL,&id__ELSEIF},
{"END",0,NULL,&id__END},
{"ENDIF",0,NULL,&id__ENDIF},
{"EXIT",0,NULL,&id__EXIT},
{"GOTO",0,NULL,&id__GOTO},
{"IF",0,NULL,&id__IF},
{"RETURN",0,NULL,&id__RETURN},
{"THEN",0,NULL,&id__THEN},
{"WHILE",0,NULL,&id__WHILE},
{"",0,NULL,NULL}
}
#endif
;

IN_RATFOR SPEC out90_tokens[]
#if(part == 0 || part == 1)
= {
{"CONTAINS",0,NULL,&id__CONTAINS},
{"CYCLE",0,NULL,&id__CYCLE},
{"ENDWHERE",0,NULL,&id__ENDWHERE},
{"INTERFACE",0,NULL,&id__INTERFACE},
{"MODULE",0,NULL,&id__MODULE},
{"SELECT",0,NULL,&id__SELECT},
{"TYPE",0,NULL,&id__TYPE},
{"WHERE",0,NULL,&id__WHERE},
{"",0,NULL,NULL}
}
#endif
;



eight_bits break_tokens[3];


IN_RATFOR SPEC spec_tokens[]
#if(part == 0 || part == 1)
= {
{"block",0,x_block,&id_block},
{"blockdata",0,x_blockdata,&id_blockdata},
{"break",0,x_break,&id_break},
{"case",0,(X_FCN(*)(VOID))x_case,&id_case},
{"default",0,(X_FCN(*)(VOID))x_default,&id_default},
{"do",0,x_do,&id_do},
{"else",0,x_else,&id_else},
{"elseif",0,x_els_if,&id_elseif},
{"end",0,x_end,&id_end},
{"endif",0,x_en_if,&id_endif},
{"for",0,x_for,&id_for},
{"function",0,x_function,&id_function},
{"if",0,x_if,&id_if},
{"next",0,x_next,&id_next},
{"procedure",0,x_procedure,&id_procedure},
{"program",0,x_program,&id_program},
{"repeat",0,x_repeat,&id_repeat},
{"return",0,x_return,&id_return},
{"switch",0,x_switch,&id_switch},
{"subroutine",0,x_subroutine,&id_subroutine},
{"then",0,x_then,&id_then},
{"until",0,x_until,&id_until},
{"while",0,x_while,&id_while},
{"",0,NULL,NULL}
}
#endif
;


IN_RATFOR SPEC spec90_tokens[]
#if(part == 0 || part == 1)
= {
{"contains",0,x_contains,&id_contains},
{"endinterface",0,x_en_interface,&id_endinterface},
{"endmodule",0,x_en_module,&id_endmodule},
{"endselect",0,x_en_select,&id_endselect},
{"endtype",0,x_en_type,&id_endtype},
{"endwhere",0,x_en_where,&id_endwhere},
{"interface",0,x_interface,&id_interface},
{"module",0,x_module,&id_module},
{"type",0,x_type,&id_type},
{"where",0,x_where,&id_where},
{"",0,NULL,NULL}
}
#endif
;



IN_RATFOR sixteen_bits sym_label RSET(0);



IN_RATFOR boolean saved_token RSET(NO);
IN_RATFOR eight_bits last_a;
IN_RATFOR int last_bytes;





IN_RATFOR eight_bits HUGE*cmnt_buf RSET(NULL),
HUGE*cmnt_buf_end RSET(NULL),
HUGE*cmnt_pos RSET(NULL);


typedef struct
{
CMD cmd;
STMT_LBL Top,Next,Break;
STMT_LBL Case,Default;
sixteen_bits Icase;
unsigned was_Break:1,
was_Next:1;
}LBL;

IN_RATFOR LBL HUGE*lbl,HUGE*lbl_end;
IN_RATFOR BUF_SIZE max_lbls;

IN_RATFOR int wlevel RSET(0);







IN_RATFOR boolean balanced RSET(YES);
IN_RATFOR ASCII cur_delim RSET('\0');



IN_RATFOR eight_bits HUGE*save_buffer RSET(NULL),HUGE*psave_buffer;



IN_RATFOR outer_char HUGE*cmd_fmt;
IN_RATFOR ASCII HUGE*cmd_msg,HUGE*cmd_end;
IN_RATFOR BUF_SIZE cmd_fsize,cmd_size;



IN_COMMON double g_ratio;
IN_COMMON CASE_TYPE max_spread;
IN_COMMON unsigned short marginal_cases;

IN_EVAL VAL HUGE*val_ptr,HUGE*val_heap;





#if(part != 2)


SRTN
is_Rat_present(VOID)
{
Rat_is_loaded= YES;
}



boolean
Rat_OK FCN((msg))
outer_char*msg C1("")
{
return YES;
}



SRTN
ini_RAT_tokens FCN((language0))
LANGUAGE language0 C1("")
{
switch(language0)
{
case RATFOR_90:
ini_special_tokens(language0,spec90_tokens);
ini_out_tokens(out90_tokens);


case RATFOR:
ini_special_tokens(language0,spec_tokens);
ini_out_tokens(out_tokens);
break;

default:

confusion(OC("ini_RAT_tokens"),OC("Language should be RATFOR-like here"));
}

ini_univ_tokens(language0);

{
ASCII HUGE*pd;


break_tokens[0]= LEFT(id_break,ID0);
break_tokens[1]= RIGHT(id_break);
break_tokens[2]= 073;

pd= x_to_ASCII(OC("data"));
id_data= ID_NUM(pd,pd+4);
}


}



int
chk_lbl(VOID)
{
sixteen_bits a;

if(next_byte()==072)
{
sym_label= (sixteen_bits)cur_val;

if(TOKEN1(a= next_byte()))BACK_UP
else
{
a= IDENTIFIER(a,next_byte());

if(name_dir[a].expandable)
{
cur_val= a;
return YES;
}
else
{
BACK_UP
cur_val= sym_label;
sym_label= ignore;

checking_label= YES;
out_char(identifier);
checking_label= NO;

return-1;
}
}
}


sym_label= ignore;
BACK_UP
return NO;
}



SRTN
RAT_error FCN(VA_ALIST((err_type,msg,n VA_ARGS)))
VA_DCL(
ERR_TYPE err_type C0("Is it warning or error?")
CONST outer_char msg[]C0("Error message.")
int n C2("Number of arguments to follow."))
{
VA_LIST(arg_ptr)
outer_char HUGE*temp,HUGE*temp1;
int last_level;
#if(NUM_VA_ARGS == 1)
ERR_TYPE err_type;
CONST outer_char*msg;
int n;
#endif

temp= GET_MEM("RAT_error:temp",N_MSGBUF,outer_char);
temp1= GET_MEM("RAT_error:temp1",N_MSGBUF,outer_char);

VA_START(arg_ptr,n);

#if(NUM_VA_ARGS == 1)
err_type= va_arg(arg_ptr,ERR_TYPE);
msg= va_arg(arg_ptr,char*);
va_arg(arg_ptr,int);
#endif

vsprintf((char*)temp1,(CONST char*)msg,arg_ptr);
va_end(arg_ptr);


if(
nsprintf(temp,OC("RATFOR %s (Output l. %u in %s):  %s."),4,err_type==ERROR?"ERROR":"WARNING",OUTPUT_LINE,params.OUTPUT_FILE_NAME,temp1)>=(int)(N_MSGBUF))OVERFLW("temp","");

last_level= MAX(rlevel-1,0);


if(
nsprintf(temp1,OC("%s  Expanding \"%s\" (loop level %d) beginning at output line %u.  \
In \"%s %s\" beginning at line %u."),7,(char*)temp,(char*)cmd_name(begun[last_level].cmd),begun[last_level].level,begun[last_level].line,(char*)cmd_name(begun[0].cmd),(char*)name_of(begun[0].name),begun[0].line)>=(int)(N_MSGBUF))OVERFLW("temp1","");

printf("\n%s\n",(char*)temp1);
OUT_MSG(to_ASCII(temp1),NULL);

mark_error;

FREE_MEM(temp,"RAT_error:temp",N_MSGBUF,char);
FREE_MEM(temp1,"RAT_error:temp1",N_MSGBUF,char);
}



SRTN
output_ended FCN(VA_ALIST((msg,n VA_ARGS)))
VA_DCL(
CONST outer_char msg[]C0("Error message.")
int n C2("Number of arguments to follow."))
{
VA_LIST(arg_ptr)
char HUGE*temp;

temp= GET_MEM("output_ended:temp",N_MSGBUF,char);

VA_START(arg_ptr,n);

#if(NUM_VA_ARGS==1)
{
char*fmt0= va_arg(arg_ptr,char*);

va_arg(arg_ptr,int);
vsprintf((char*)temp,fmt0,arg_ptr);
}
#else
vsprintf(temp,(CONST char*)msg,arg_ptr);
#endif
va_end(arg_ptr);


RAT_error(ERROR,OC("Output ended %s"),1,temp);

fatal(ERR_R,OC("ABORTING!"),OC(""));
}



outer_char HUGE*
cmd_name FCN((cmd))
CMD cmd C1("Type of command.")
{
switch(cmd)
{
case _DO_CMD:
return OC("$DO");

case blockdata_CMD:return OC("blockdata");
case break_CMD:return OC("break");
case case_CMD:return OC("case");
case contains_CMD:return OC("contains");
case default_CMD:return OC("default");
case do_CMD:return OC("do");
case for_CMD:return OC("for");
case function_CMD:return OC("function");
case if_CMD:return OC("if");
case interface_CMD:return OC("interface");
case module_CMD:return OC("module");
case next_CMD:return OC("next");
case program_CMD:return OC("program");
case repeat_CMD:return OC("repeat");
case return_CMD:return OC("return");
case subroutine_CMD:return OC("subroutine");
case switch_CMD:return OC("switch");
case type_CMD:return OC("type");
case until_CMD:return OC("until");
case where_CMD:return OC("where");
case while_CMD:return OC("while");
default:return OC("UNKNOWN CMD");
}
}



SRTN
not_switch FCN((s))
CONST outer_char s[]C1("Error message.")
{

RAT_error(ERROR,OC("Misplaced keyword: \
\"%s\" must be used only inside \"switch\""),1,s);
}


SRTN didnt_expand FCN((c0,c,op))
eight_bits c0 C0("")
eight_bits c C0("")
CONST char*op C1("")
{

RAT_error(ERROR,OC("Was expecting '%c', not '%c', after \"%s\"; \
expansion aborted"),3,XCHR(c0),XCHR(c),op);
}


boolean
char_after FCN((c))
outer_char c C1("Character expected next.")
{
if((ASCII)(next_byte())!=XORD(c))
{

RAT_error(WARNING,OC("Inserted '%c' after \"%s\""),1,c,cmd_name(begun[rlevel-1].cmd));
BACK_UP
return NO;
}

return YES;
}



eight_bits
next_byte(VOID)
{
eight_bits a0;
sixteen_bits a;
static boolean ended_module= NO;
long cur_val0;


if(saved_token)
{
saved_token= NO;
return last_a;
}

cur_val0= cur_val;

WHILE()
{
if(DONE_LEVEL)
{
if(!ended_module)
{
cur_val= -(long)cur_mod;
if(cur_val!=ignore)OUT_CHAR(module_number);
ended_module= YES;
}

if(!pop_level())
{
a0= ignore;
break;
}

ended_module= NO;
}

if(TOKEN1(a0= *cur_byte++))
{
if(a0==ignore&&!in_string)
continue;

if(rlevel>0&&a0==begin_language)
{
cur_byte++;
continue;
}

last_bytes= 1;
break;
}


{
a= IDENTIFIER(a0,last_a= *cur_byte++);
last_bytes= 2;


switch(a/MODULE_NAME)
{
case 0:

if(is_deferred(a))continue;


if(!mac_protected&&
(macro_text= (text_pointer)mac_lookup(a))!=NULL)
{
eight_bits HUGE*p;
long cur_val0= cur_val;

cur_val= a;
p= xmacro(macro_text,&cur_byte,&cur_end,YES,
macrobuf);
cur_val= cur_val0;
push_level(NULL,p,mp);
break;
}
else if(!balanced&&language==RATFOR&&
(a==id_function||a==id_program||a==id_subroutine))
{

RAT_error(ERROR,OC("Inserted missing '%c' at beginning of function"),1,XCHR(cur_delim));
cur_byte-= 2;
saved_token= NO;
a0= cur_delim;
goto return_next_byte;
}
else
{
saved_token= YES;
goto return_next_byte;
}

case 1:
x_mod_a(a);
break;

default:
cur_val= a-MODULE_NUM;
if(cur_val>UNNAMED_MODULE)cur_mod= (sixteen_bits)cur_val;
OUT_CHAR(module_number);
}
}


}

return_next_byte:
cur_val= cur_val0;
return a0;
}



SRTN
skip_newlines FCN((save_comments))
boolean save_comments C1("")
{
eight_bits a;

if(save_comments)
{
cmnt_pos= cmnt_buf= GET_MEM("cmnt_buf",SAVE8,eight_bits);
cmnt_buf_end= cmnt_buf+SAVE8;
}

while((a= copy_comment(save_comments))==012);

if(a==ignore)
output_ended(OC("while skipping newlines"),0);

BACK_UP
}


eight_bits
copy_comment FCN((save_comments))
boolean save_comments C1("")
{
eight_bits a;

WHILE()
if((a= next_byte())!=stringg)return a;

else if(save_comments)
{

*cmnt_pos++= a;
in_string= YES;
while((a= next_byte())!=stringg)
{
if(cmnt_pos==cmnt_buf_end)
resize(&cmnt_buf,SAVE8,&cmnt_pos,&cmnt_buf_end);

*cmnt_pos++= a;
}
*cmnt_pos++= a;
in_string= NO;
}
else
{
OUT_CHAR(stringg);
while((a= get_output())!=stringg);
}

DUMMY_RETURN(ignore);
}



SRTN
flush_comments(VOID)
{
eight_bits*p;

if(!cmnt_buf)return;

for(p= cmnt_buf;p<cmnt_pos;p++)out_char(*p);
if(cmnt_pos>cmnt_buf)NL;

FREE_MEM(cmnt_buf,"cmnt_buf",SAVE8,eight_bits);
cmnt_buf= cmnt_buf_end= cmnt_pos= NULL;
}



SRTN
id0 FCN((cur_val))
sixteen_bits cur_val C1("Token to print out.")
{
if(cur_val==ignore)return;

if(out_state==NUM_OR_ID)C_putc(' ');

out_ptrunc(cur_val);

out_state= NUM_OR_ID;
}



int
save_lbls FCN((cmd,top0,next0,break0,n_used))
CMD cmd C0("The current command.")
STMT_LBL top0 C0("Label number for top of block.")
STMT_LBL next0 C0("Go here on |next|.")
STMT_LBL break0 C0("Go here on |break|.")
int n_used C1("Number of labels used in this expansion.")
{

if(++wlevel>=(int)max_lbls)OVERFLW("stmt labels","");

current_cmd= cmd;
s_top= top0;
s_next= next0;
s_break= break0;
was_break= was_next= NO;

max_stmt+= n_used;


s_case= s_default= 0;
icase= ignore;

return wlevel;
}



SRTN
out_label FCN((suppress_0,stmt_num))
boolean suppress_0 C0("Suppress if zero?")
STMT_LBL stmt_num C1("Statement number to print.")
{
outer_char temp[N_IDBUF];
outer_char*p;

if(stmt_num==(STMT_LBL)0&&suppress_0)return;


if(stmt_num>(STMT_LBL)99999)
{
stmt_num= (STMT_LBL)99999;

RAT_error(WARNING,OC("Automatic statement number out of bounds; %ld assumed"),1,stmt_num);
}


if(
nsprintf(temp,OC("%ld"),1,stmt_num)>=(int)(N_IDBUF))OVERFLW("temp","");

OUT_CHAR(constant);
for(p= temp;*p;p++)
OUT_CHAR(XORD(*p));
OUT_CHAR(constant);
}



SRTN
copyd FCN((to_memory,xpn_cases,l,r,semi_allowed))
boolean to_memory C0("To memory?")
boolean xpn_cases C0("Expand |case| statements?")
ASCII l C0("Left-hand delimiter.")
ASCII r C0("Right-hand delimiter.")
boolean semi_allowed C1("Is a semicolon allowed in the text to be \
copied?")
{
int bal,bal0[BLEVELS];
LINE_NUMBER starting_line;
eight_bits(*output_rtn)(VOID);
sixteen_bits a,last_token;
sixteen_bits l0= ignore,r0= ignore;
boolean found_semi;
boolean balanced0= balanced;
ASCII cur_delim0= cur_delim;



switch(l)
{
case 0173:
l0= 050;r0= 051;
break;

case 050:
l0= 0173;r0= 0175;
break;

default:

confusion(OC("copyd"),OC("Invalid left delimiter 0x%x"),l);
}



if(l==0173&&xpn_cases)
{
if(DONE_LEVEL&&!pop_level())
output_ended(OC("after '{'"),0);

bal0[bal= 1]= 0;
}
else
{
if((ASCII)(next_byte())!=l)
{

RAT_error(ERROR,OC("Missing opening delimiter '%c'; \
text not copied"),1,XCHR(l));
return;
}


BACK_UP
bal0[bal= 0]= 0;
}

starting_line= OUTPUT_LINE;



output_rtn= to_memory?next_byte:get_output;



last_token= ignore;
found_semi= NO;


balanced= NO;
cur_delim= r;

WHILE()
{
a= (sixteen_bits)(*output_rtn)();


if(to_memory&&a==(sixteen_bits)stringg)
in_string= BOOLEAN(!in_string);

if(!in_string)
{
if(a==ignore)
output_ended(OC("while scanning for '%c'.  Scan began \
with delimiter '%c' at line %u"),3,XCHR(r),XCHR(l),starting_line);

if(a==(sixteen_bits)l)bal0[++bal]= 0;
else if(a==(sixteen_bits)r)
{
if(bal<=0)
{
if(!to_memory)out_pos--;
unmatched(l,r);
continue;
}
else
{
if(bal0[bal]!=0)
{
inserted(bal0[bal],l0,r0,l,bal);

while(bal0[bal]--)
if(to_memory)SAVE_IN_MEM(r0)
else OUT_CHAR(r0);
}

if(--bal==0)
{
if(semi_allowed&&last_token&&last_token!=073)
{

RAT_error(WARNING,OC("Supplied missing ';' before \
delimiter '%c'"),1,r);

if(to_memory)SAVE_IN_MEM(073)
else OUT_CHAR(073);
}

if(to_memory)SAVE_IN_MEM(r)


balanced= YES;
cur_delim= '\0';
break;
}
}
}


else if(a==l0)bal0[bal]++;
else if(a==r0)
{
if(bal0[bal]<=0)
{
if(!to_memory)out_pos--;
unmatched((ASCII)l0,(ASCII)r0);
continue;
}
else bal0[bal]--;
}


else if(a!=stringg)
{
if(a==073)
if(semi_allowed)found_semi= YES;
else
RAT_error(ERROR,OC("Spurious semicolon"),0);

if(chk_stmts)
if(!to_memory&&a==id_keyword)last_token= ignore;
else last_token= a;

}
}



if(to_memory)
{
if(TOKEN1(a))
{
SAVE_IN_MEM(a)

switch(a)
{
case dot_const:
case begin_language:
SAVE_IN_MEM(*cur_byte++);
break;

case new_output_file:

RAT_error(ERROR,OC("@o command not allowed inside switch"),0);
}
}
else
{
if(xpn_cases)

{
eight_bits a0,a1;


a= IDENTIFIER(a0= (eight_bits)a,a1= next_byte());

if(a==id_switch)
{
SAVE_16;
copyd(TO_MEMORY,DONT_XPN_CASES,050,051,NO);
skip_newlines(COPY_COMMENTS);
copyd(TO_MEMORY,DONT_XPN_CASES,0173,0175,YES);
}
else if(a==id_case)x_case();
else if(a==id_default)x_default();
else SAVE_16;
}


else
{
SAVE_IN_MEM(a)
SAVE_IN_MEM(next_byte())
}
}
}


}

balanced= balanced0;
cur_delim= cur_delim0;
}



SRTN
cp_fcn_body(VOID)
{
brace_level++;
copyd(TO_OUTPUT,XPN_CASES,0173,0175,YES);

if(--brace_level==0)
{
END;
cur_fcn= NO_FCN;
rlevel--;
}
}



SRTN
stmt FCN((to_memory,brace_only))
boolean to_memory C0("")
boolean brace_only C1("Is only a left brace allowed next?")
{
sixteen_bits a;

EAT_AUTO_SEMI;
skip_newlines(COPY_COMMENTS);

if((a= next_byte())!=0173)
{
if(a==ignore)
output_ended(OC("at beginning of statement"),0);


if(brace_only)
{

RAT_error(WARNING,OC("Inserted '{'"),0);
BACK_UP
copyd(to_memory,XPN_CASES,0173,0175,YES);
return;
}

if(TOKEN1(a))
{
BACK_UP
x_stmt();
}
else
{

SPEC HUGE*s;

a= IDENTIFIER(a,next_byte());

for(s= spec_tokens;s->len!=0;s++)
if(a==*s->pid&&s->expand!=NULL)
{
(*s->expand)();
return;
}
BACK_UP
x_stmt();
}
}
else copyd(to_memory,XPN_CASES,0173,0175,YES);

}




SRTN
x_stmt(VOID)
{
eight_bits a;

WHILE()
{
if((a= get_output())==ignore)
output_ended(OC("during scan of simple \
statement "),0);

if(a==073&&!in_string)break;
}


if((a= next_byte())!=stringg){BACK_UP return;}

if(*cur_byte!=012){BACK_UP return;}


OUT_CHAR(a);
while((a= get_output())!=stringg);
}




eight_bits HUGE*
save_out FCN((pp,nmax,r_before,r_after))
eight_bits HUGE**pp C0("Address of pointer to buffer where result is \
saved.")
int nmax C0("Length of above buffer.")
eight_bits r_before C0("Stop before here.")
eight_bits r_after C1("Stop after here.")
{
eight_bits a,l;
eight_bits HUGE*p,HUGE*p_end;
LINE_NUMBER starting_line;
int bal,bal0[BLEVELS];


if(!(*pp))
*pp= GET_MEM("*pp",nmax,eight_bits);

p= *pp;
p_end= p+nmax-1;



switch(r_after)
{
case 051:
l= (eight_bits)050;
bal= 1;
break;

case 0175:
l= (eight_bits)0173;
bal= 1;
break;

default:
l= '\0';
bal= 0;
break;
}

bal0[bal]= 0;

starting_line= OUTPUT_LINE;


if(in_string)

confusion(OC("save_out"),OC("Shouldn't be inside string here"));

WHILE()
{
if(p>=p_end)resize(pp,nmax,&p,&p_end);


if(TOKEN1(a= next_byte()))
{
if(!in_string)

{
if(a==ignore)
output_ended(OC("while scanning from line %u \
for delimiter (r_before = '%c', r_after = '%c')"),3,starting_line,XCHR(r_before),XCHR(r_after));

if(a==l)bal0[++bal]= 0;
else if(a==r_after&&r_after!=NOT_AFTER)
{
if(l&&bal<=0)
{
p--;
unmatched(l,r_after);
continue;
}
else
{
if(bal0[bal]!=0)
{
inserted(bal0[bal],0173,0175,l,bal);

while(bal0[bal]--)
{
*p++= 0175;
if(p>=p_end)resize(pp,nmax,&p,&p_end);
}
}

if(l)bal--;
if(bal==0)
{
*p= '\0';
return p;
}
}
}


else if(a==r_before&&r_before!=NOT_BEFORE)
{
BACK_UP;
*p= '\0';
return p;
}
else if(a==0173)bal0[bal]++;
else if(a==0175)
{
if(bal0[bal]<=0)
{
p--;
unmatched(0173,0175);
continue;
}
else bal0[bal]--;
}


}




{
*p++= a;

switch(a)
{
case stringg:
in_string= BOOLEAN(!in_string);
break;

case dot_const:
case begin_language:
*p++= *cur_byte++;
break;
}
}


}
else
{
*p++= a;
*p++= next_byte();
}
}

DUMMY_RETURN(NULL);
}




outer_char*
qdelim FCN((delim))
ASCII delim C1("")
{
static outer_char q0[4];

sprintf((char*)q0,delim?"'%c'":"?",XCHR(delim));
return q0;
}



SRTN
resize FCN((pp,nmax,pq,pp_end))
eight_bits HUGE**pp C0("Addr of ptr to beginning of buffer")
int nmax C0("Resizing increment")
eight_bits HUGE**pq C0("Address of current pointer")
eight_bits HUGE**pp_end C1("Addr of ptr to end of buffer")
{
int old_len= PTR_DIFF(int,*pq,*pp);
int new_len= old_len+nmax;

*pp= (eight_bits HUGE*)REALLOC(*pp,
new_len*sizeof(eight_bits),
old_len*sizeof(eight_bits));
*pq= *pp+old_len;
*pp_end= *pp+new_len-1;
}


#endif 

#if(part != 1)


SRTN
alloc_Rat(VOID)
{


ALLOC(LBL,lbl,"lb",max_lbls,0);
lbl_end= lbl+max_lbls;



ALLOC(outer_char,cmd_fmt,"cf",cmd_fsize,0);
ALLOC(ASCII,cmd_msg,"cg",cmd_size,0);
cmd_end= cmd_msg+cmd_size;



begun= GET_MEM("begun",max_lbls,BEGUN);


}



SRTN
out_cmd FCN(VA_ALIST((emit_continue,abbrev,beginning,fmt0,n VA_ARGS)))
VA_DCL(
boolean emit_continue C0("Put a |continue| in case of label.")
outer_char abbrev C0("Abbreviation of command.")
CONST outer_char beginning[]C0("Beginning part of message.")
CONST outer_char*fmt0 C0("Format of the message.")
int n C2("Number of arguments to message."))
{
VA_LIST(arg_ptr)
#if(NUM_VA_ARGS == 1)
boolean emit_continue;
char abbrev;
CONST outer_char*beginning;
CONST outer_char*fmt0;
int n;
#endif

VA_START(arg_ptr,n);

#if(NUM_VA_ARGS == 1)
emit_continue= va_arg(arg_ptr,boolean);
abbrev= va_arg(arg_ptr,char);
beginning= va_arg(arg_ptr,char*);
fmt0= va_arg(arg_ptr,char*);
va_arg(arg_ptr,int);
#endif


{
static outer_char brkset[3]= "*?";

char*strpbrk();
boolean found_abbrev;


brkset[1]= abbrev;
found_abbrev= BOOLEAN(STRPBRK(abbrev_cmds,brkset)!=NULL);

if(suppress_cmds){if(found_abbrev)return;}
else{if(!found_abbrev)return;}
}



if(emit_continue)
{
CONTINUE(ignore);
}



if(
nsprintf(cmd_fmt,OC("--- %s \"%s%s\" ---"),3,beginning,cmd_name(begun[rlevel-1].cmd),fmt0)>=(int)(cmd_fsize))OVERFLW("cmd_fmt","");


{
outer_char HUGE*p;
ASCII HUGE*q;
eight_bits HUGE*s,HUGE*s1;


p= cmd_fmt;
q= cmd_msg;

while(*p)
{
if(q>=cmd_end)
OVERFLW("cmd_msg","cg");

if(*p=='%'&&*(p+1)=='s')
{
p+= 2;







s= va_arg(arg_ptr,eight_bits*);
s1= va_arg(arg_ptr,eight_bits*);

while(s<s1)
*q++= *s++;
}
else
*q++= XORD(*p++);
}

va_end(arg_ptr);


OUT_MSG(cmd_msg,q);
}

;

if(Fortran88&&symbolic_label)
{
id0(symbolic_label);OUT_CHAR(072);
}
}



SRTN
expanding FCN((cmd))
CMD cmd C1("Type of identifier being expanded.")
{
if(rlevel>=(int)max_lbls)OVERFLW("Nesting","");

begun[rlevel].cmd= cmd;
begun[rlevel].name= rlevel?cur_fcn:NO_FCN;
begun[rlevel].symbolic= sym_label;
begun[rlevel].function= BOOLEAN(CHOICE(rlevel,is_function,NO));
begun[rlevel].line= OUTPUT_LINE;
begun[rlevel].level= wlevel;
rlevel++;
}



X_FCN
x_while(VOID)
{
eight_bits HUGE*a= NULL,HUGE*pa;

expanding(while_CMD);
save_lbls(while_CMD,max_stmt,max_stmt,max_stmt+1,2);



{
eight_bits c;

if((c= next_byte())!='(')
{
didnt_expand('(',c,"while");
return;
}
};
pa= SAVE_AFTER(&a,SAVE8,051);


out_cmd(YES,'w',OC(""),OC("(%s)"),2,a,pa);

if(Fortran88)
{
id0(id__DO);id0(id__WHILE);LP;copy_out(a,pa,!macro);RP;
NL;
}
else
{
IF(s_top);LP;copy_out(a,pa,!macro);RP;THEN;
}
INDENT;
stmt(TO_OUTPUT,0);
if(!Fortran88){GOTO(s_top);}
OUTDENT;

if(Fortran88){END_DO;}
else
{
ENDIF;
if(was_break){CONTINUE(s_break);}
}

wlevel--;
rlevel--;
FREE_MEM(a,"while:a",SAVE8,eight_bits);
}



X_FCN
x_break(VOID)
{
sixteen_bits a;


if(wlevel==0&&switch_level==0)
{
NOT_LOOP("break"," or \"switch\"");
COPY_TO(073);
return;
}

expanding(break_CMD);

was_break= YES;



out_cmd(YES,'b',OC(""),OC(""),0);

if(Fortran88&&do_or_while)
{
id0(id__EXIT);

if(TOKEN1(a= next_byte()))BACK_UP
else id0(IDENTIFIER(a,next_byte()));

NL;

}
else{GOTO(s_break);}

char_after(';');
rlevel--;
}



SRTN
not_loop FCN((id,msg))
CONST outer_char id[]C0("Errant identifier name.")
CONST outer_char msg[]C1("Error message.")
{

RAT_error(WARNING,OC("Misplaced keyword: \
\"%s\" must appear inside loop%s; command ignored"),2,id,msg);
}



X_FCN
x_next(VOID)
{
sixteen_bits a;


if(wlevel==0)
{
NOT_LOOP("next","");
COPY_TO(073);
return;
}

expanding(next_CMD);

was_next= YES;

out_cmd(YES,'n',OC(""),OC(""),0);

if(Fortran88&&do_or_while)
{
id0(id__CYCLE);

if(TOKEN1(a= next_byte()))BACK_UP
else id0(IDENTIFIER(a,next_byte()));

NL;
}
else{GOTO(s_next);}

char_after(';');
rlevel--;
}



X_FCN
x_repeat(VOID)
{
sixteen_bits a;
eight_bits HUGE*u= NULL,HUGE*pu;

expanding(repeat_CMD);
save_lbls(repeat_CMD,max_stmt,max_stmt+1,max_stmt+2,3);


out_cmd(YES,'p',OC(""),OC(""),0);

CONTINUE(s_top);
INDENT;
stmt(TO_OUTPUT,0);
OUTDENT;
if(was_next)LABEL(s_next);

skip_newlines(SAVE_COMMENTS);


if(TOKEN1(a= next_byte()))BACK_UP
else
{
a= IDENTIFIER(a,next_byte());

if(a==id_until)
{
flush_comments();
rlevel--;
expanding(until_CMD);


{
eight_bits c;

if((c= next_byte())!='(')
{
didnt_expand('(',c,"until");
return;
}
};
pu= SAVE_AFTER(&u,SAVE8,051);

out_cmd(NO,'p',OC(""),OC("(%s)"),2,u,pu);

IF(ignore);LP;NOT;
LP;copy_out(u,pu,!macro);RP;
RP;
FREE_MEM(u,"repeat:u",SAVE8,eight_bits);
}
else BACK_UP
}

GOTO(s_top);
flush_comments();

if(was_break){CONTINUE(s_break);}

wlevel--;
rlevel--;
}


X_FCN
x_do(VOID)
{
eight_bits b;
sixteen_bits a;


b= next_byte();BACK_UP


if(b==constant)
{
id0(id_do);
return;
}


expanding(do_CMD);
save_lbls(do_CMD,0L,max_stmt,max_stmt+1,2);


out_cmd(YES,'d',OC(""),OC(""),0);



if(!TOKEN1(a= next_byte()))
a= IDENTIFIER(a,next_byte());

BACK_UP

if(!(a==id_while))
{
id0(id__DO);if(!Fortran88)LABEL(s_next);COPY_2TO(0173,073);NL;
INDENT;
stmt(TO_OUTPUT,0);
OUTDENT;
if(Fortran88)
{
id0(id__END);id0(id__DO);
if(symbolic_label)id0(symbolic_label);
NL;
}
else
{
CONTINUE(s_next);
if(was_break){CONTINUE(s_break);}
}
}

wlevel--;
rlevel--;
}



X_FCN
x_for(VOID)
{
eight_bits HUGE*a= NULL,HUGE*b= NULL,HUGE*c= NULL,
HUGE*pa,HUGE*pb,HUGE*pc;

expanding(for_CMD);
save_lbls(for_CMD,max_stmt,max_stmt+1,max_stmt+2,3);



{
eight_bits c;

if((c= next_byte())!='(')
{
didnt_expand('(',c,"for");
return;
}
};
pa= SAVE_AFTER(&a,SAVE8,073);
pb= SAVE_AFTER(&b,SAVE8,073);
pc= SAVE_AFTER(&c,SAVE8,051);


out_cmd(YES,'f',OC(""),OC("(%s;%s;%s)"),6,a,pa,b,pb,c,pc);


if(pa>a){copy_out(a,pa,!macro);NL;}


if(pb>b)
{IF(s_top);LP;copy_out(b,pb,!macro);RP;THEN;}
else{CONTINUE(s_top);}


INDENT;
stmt(TO_OUTPUT,0);


if(was_next){CONTINUE(s_next);}
if(pc>c)
{

out_cmd(NO,'f',OC("Reinitialization of"),OC("(%s;%s;%s)"),6,a,pa,b,pb,c,pc);
copy_out(c,pc,!macro);NL;
}
GOTO(s_top);
OUTDENT;
if(pb>b){ENDIF;}
if(was_break){CONTINUE(s_break);}
wlevel--;
rlevel--;
FREE_MEM(a,"for:a",SAVE8,eight_bits);
FREE_MEM(b,"for:b",SAVE8,eight_bits);
FREE_MEM(c,"for:c",SAVE8,eight_bits);
}



X_FCN
x_if(VOID)
{
expanding(if_CMD);

out_cmd(YES,'i',OC(""),OC(""),0);

xpn_body(id__IF,YES,id__THEN);


WHILE()
if(!
xpn_else(id_if,id_elseif,id__IF,YES,id__THEN))break;

ENDIF;
flush_comments();
rlevel--;
}




SRTN
xpn_body FCN((token1,scan_parens,token2))
sixteen_bits token1 C0("")
boolean scan_parens C0("")
sixteen_bits token2 C1("")
{
LABEL(ignore);id0(token1);

if(scan_parens)PARENS;
if(token2)id0(token2);
NL;

INDENT;
stmt(TO_OUTPUT,0);
OUTDENT;
}



boolean
xpn_else FCN((id_x,id_else_x,token1,scan_parens,token2))
sixteen_bits id_x C0("")
sixteen_bits id_else_x C0("")
sixteen_bits token1 C0("")
boolean scan_parens C0("")
sixteen_bits token2 C1("")
{
sixteen_bits a;

skip_newlines(SAVE_COMMENTS);

if(TOKEN1(a= next_byte()))
{
BACK_UP
return NO;
}
else
{
a= IDENTIFIER(a,next_byte());

if(a==id_else_x)
{
flush_comments();
ELSE;
xpn_body(token1,scan_parens,token2);
return YES;
}

if(a!=id_else)
{
BACK_UP
return NO;
}
else
{
flush_comments();
ELSE;

if(TOKEN1(a= next_byte()))BACK_UP
else
{
a= IDENTIFIER(a,next_byte());

if(a==id_x)
{
xpn_body(token1,scan_parens,token2);
return YES;
}
else BACK_UP
}

if(out_pos>rst_pos)NL;

INDENT;
stmt(TO_OUTPUT,0);
OUTDENT;
return NO;
}
}
}



X_FCN
x_else(VOID)
{
UNEXPECTED("else");
}

X_FCN
x_els_if(VOID)
{
UNEXPECTED("elseif");
}



X_FCN
x_end(VOID)
{
UNEXPECTED("end");
}

X_FCN
x_en_if(VOID)
{
UNEXPECTED("endif");
}

X_FCN
x_en_interface(VOID)
{
UNEXPECTED("endinterface");
}

X_FCN
x_en_module(VOID)
{
UNEXPECTED("endmodule");
}

X_FCN
x_en_select(VOID)
{
UNEXPECTED("endselect");
}

X_FCN
x_en_type(VOID)
{
UNEXPECTED("endtype");
}

X_FCN
x_en_where(VOID)
{
UNEXPECTED("endwhere");
}

X_FCN
x_procedure(VOID)
{
UNEXPECTED("procedure");
}

X_FCN
x_then(VOID)
{
UNEXPECTED("then");
}

X_FCN
x_until(VOID)
{
UNEXPECTED("until");
}



X_FCN
x_where(VOID)
{
expanding(where_CMD);

out_cmd(YES,'h',OC(""),OC(""),0);

xpn_body(id__WHERE,YES,id__ignore);

xpn_else(id_where,id_elsewhere,id__WHERE,NO,id__ignore);

ENDWHERE;
rlevel--;
}



SRTN
unexpected FCN((id))
CONST outer_char id[]C1("Error message.")
{

RAT_error(WARNING,OC("Unexpected keyword \"%s\" ignored"),1,id);
}



X_FCN
x_switch(VOID)
{
eight_bits HUGE*a= NULL,HUGE*pa;
outer_char temp[N_IDBUF];
unsigned short k;
boolean computed_goto= NO;
CASE_TYPE cmin= 0,cmax;
CASE_TYPE mcases= 0;
unsigned short num_cases;

expanding(switch_CMD);

if(switches==NULL)switches= GET_MEM("switches",NSWITCHES,SWITCH);

++switch_level;
if(cur_switch.cases==NULL)
cur_switch.cases= GET_MEM("cur_switch.cases",NCASES,CASE);
cur_switch.ncases= 0;
cur_switch.has_default= NO;



cur_case= &cur_switch.cases[0];
cur_case->txt.next= cur_case->txt.start= 
GET_MEM("cur_case->txt.start",BIG_SAVE8,eight_bits);
cur_case->txt.end= cur_case->txt.start+BIG_SAVE8;

save_lbls(switch_CMD,0L,s_next,max_stmt,1);



{
eight_bits c;

if((c= next_byte())!='(')
{
didnt_expand('(',c,"switch");
return;
}
};
pa= SAVE_AFTER(&a,SAVE8,051);


out_cmd(YES,'s',OC(""),OC("(%s)"),2,a,pa);

if(Fortran88)
{
id0(id__SELECT);id0(id__CASE);LP;copy_out(a,pa,!macro);RP;NL;
}
INDENT;
stmt(TO_MEMORY,BRACE_ONLY);

if(Fortran88)
{
computed_goto= NO;
}
else
{
unsigned short k;
VAL val;



cmin= LONG_MAX;
cmax= LONG_MIN+1;

for(k= 1;k<=cur_switch.ncases;k++)
{
cur_case= &cur_switch.cases[k];

if(cur_case->is_default)continue;



{
extern boolean eval_msgs;

eval_msgs= NO;
EVALUATE(val,cur_case->case_txt.start,cur_case->case_txt.next);
eval_msgs= YES;
}

switch(val.type)
{
case Int:
cur_case->value= (CASE_TYPE)(val.value.i);
break;

case Double:

RAT_error(WARNING,OC("Case value %#g of type double truncated to int"),1,val.value.d);
cur_case->value= (CASE_TYPE)(val.value.d);
break;

default:

computed_goto= NO;
goto not_integer;
}


if(cur_case->value<cmin)cmin= cur_case->value;
if(cur_case->value>cmax)cmax= cur_case->value;
}

if(cur_switch.ncases==1&&s_default!=0)
{
mcases= 0;
computed_goto= YES;
goto not_integer;
}
else mcases= (cmax-cmin+1);

if((num_cases= cur_switch.ncases-(unsigned short)(s_default!=0))==0)
{
computed_goto= NO;
goto not_integer;
}
computed_goto= BOOLEAN((num_cases>marginal_cases&&
mcases<max_spread)?YES:
((double)mcases)/num_cases<=g_ratio);

not_integer:;
}

;

if(computed_goto)
{
CASE_TYPE m;
unsigned short k;



OUTDENT;
if(mcases>0){id0(id__GOTO);LP;}

for(m= 0;m<mcases;m++,m<mcases?COMMA:RP)
LABEL(label_case(cmin,m));

if(mcases>0)
{
COMMA;LP;copy_out(a,pa,!macro);RP;
MINUS;LP;NUMBER(cmin-1);RP;NL;
}



GOTO(s_default?s_default:(was_break= YES,s_break));
INDENT;


for(k= 1;k<=cur_switch.ncases;k++)
{
cur_case= &cur_switch.cases[k];

show_cmd(cur_case);
OUTDENT;
CONTINUE(cur_case->label);
INDENT;
copy_out(cur_case->txt.start,cur_case->txt.next,!macro);
rlevel--;
}
}


else
{
boolean case_ended_with_break= NO;
boolean made_temp= YES;



if(!Fortran88&&(made_temp= BOOLEAN(!((pa-a)==2&&!TOKEN1(*a)))))
{


if(
nsprintf(temp,OC("I%d"),1,s_break)>=(int)(N_IDBUF))OVERFLW("temp","");
to_ASCII(temp);
icase= ID_NUM((ASCII HUGE*)temp,(ASCII HUGE*)(temp+STRLEN(temp)));

id0(icase);EQUALS;copy_out(a,pa,!macro);NL;
}

for(k= 1;k<=cur_switch.ncases;k++)

{
cur_case= &cur_switch.cases[k];

if(Fortran88)
if(k==1)s_case= max_stmt++;
else
{

{
CASE HUGE*last_case= &cur_switch.cases[k-1];


if(PTR_DIFF(long,last_case->txt.next,last_case->txt.start)>=3)
case_ended_with_break= 
BOOLEAN(MEMCMP(last_case->txt.next-3,break_tokens,3)==0);
else case_ended_with_break= NO;
}


if(!case_ended_with_break){GOTO(s_case);}
}

show_cmd(cur_case);
OUTDENT;
if(Fortran88)
{
id0(id__CASE);

if(cur_case->is_default)id0(id__DEFAULT);
else
{
if(*cur_case->case_txt.start!=050)LP;
copy_out(cur_case->case_txt.start,cur_case->case_txt.next,
!macro);
if(*(cur_case->case_txt.next-1)!=051)RP;
}
NL;
INDENT;
if(k>1&&!case_ended_with_break)
{
CONTINUE(s_case);
s_case= max_stmt++;
}
}
else
{
if(cur_case->is_default){CONTINUE(s_default);}
else
{
IF(s_case);LP;NOT;LP;


if(made_temp)id0(icase);else copy_out(a,pa,!macro);
EQ_EQ;
copy_out(cur_case->case_txt.start,
cur_case->case_txt.next,!macro);
RP;RP;
GOTO(s_case= max_stmt++);
}
INDENT;
}


copy_out(cur_case->txt.start,cur_case->txt.next,!macro);

rlevel--;
}



if(!Fortran88)
{
CONTINUE(s_case);
if(s_default)
{
GOTO(s_default);
}
}
}


OUTDENT;

if(Fortran88)
{
if(was_break)LABEL(s_break);
id0(id__END);id0(id__SELECT);
if(symbolic_label)id0(symbolic_label);
NL;
}
else if(was_break){CONTINUE(s_break);}

wlevel--;
rlevel--;
switch_level--;

FREE_MEM(a,"switch:a",SAVE8,eight_bits);
}



SRTN
show_cmd FCN((cur_case))
CONST CASE HUGE*cur_case C1("")
{
if(cur_case->is_default)
{
expanding(default_CMD);

out_cmd(NO,'t',OC(""),OC(":"),0);
}
else
{
expanding(case_CMD);

out_cmd(NO,'c',OC(""),OC(" %s:"),2,cur_case->case_txt.start,cur_case->case_txt.next);
}
}



STMT_LBL
label_case FCN((cmin,m))
CASE_TYPE cmin C0("")
CASE_TYPE m C1("")
{
CASE_TYPE num= cmin+m;
unsigned short k;


for(k= 1;k<=cur_switch.ncases;k++)
{
cur_case= &cur_switch.cases[k];

if(!cur_case->is_default&&cur_case->value==num)
return cur_case->label= s_case= max_stmt++;
}


for(k= 1;k<=cur_switch.ncases;k++)
if(cur_case->is_default)return s_default;

return s_break;
}


X_FCN x_case(VOID)
{
if(switch_level==0)
{
not_switch(OC("case"));
return;
}

expanding(case_CMD);



*cur_case->txt.next= '\0';


cur_case= &cur_switch.cases[++cur_switch.ncases];


if(cur_case->case_txt.start==NULL)
{
cur_case->case_txt.start= 
GET_MEM("cur_case->case_txt.start",SAVE8,eight_bits);
cur_case->case_txt.end= cur_case->case_txt.start+SAVE8;

cur_case->txt.start= 
GET_MEM("cur_case->txt.start",BIG_SAVE8,eight_bits);
cur_case->txt.end= cur_case->txt.start+BIG_SAVE8;
}


cur_case->txt.next= cur_case->txt.start;

;
cur_case->case_txt.next= SAVE_AFTER(&cur_case->case_txt.start,SAVE8,072);
cur_case->is_default= NO;


{
unsigned short k;
CONST CASE HUGE*old_case;

for(k= 1;k<cur_switch.ncases;k++)
{
old_case= &cur_switch.cases[k];

if(web_strcmp((CONST ASCII HUGE*)cur_case->case_txt.start,
(CONST ASCII HUGE*)cur_case->case_txt.next,
(CONST ASCII HUGE*)old_case->case_txt.start,
(CONST ASCII HUGE*)old_case->case_txt.next)==EQUAL)
{

RAT_error(ERROR,OC("Duplicate case value in switch"),0);
break;
}
}
}



rlevel--;
}



X_FCN
x_default(VOID)
{
if(switch_level==0)
{
not_switch(OC("default"));
return;
}

expanding(default_CMD);

if(cur_switch.has_default)

RAT_error(ERROR,OC("Only one default allowed per switch"),0);
else cur_switch.has_default= YES;



*cur_case->txt.next= '\0';


cur_case= &cur_switch.cases[++cur_switch.ncases];


if(cur_case->case_txt.start==NULL)
{
cur_case->case_txt.start= 
GET_MEM("cur_case->case_txt.start",SAVE8,eight_bits);
cur_case->case_txt.end= cur_case->case_txt.start+SAVE8;

cur_case->txt.start= 
GET_MEM("cur_case->txt.start",BIG_SAVE8,eight_bits);
cur_case->txt.end= cur_case->txt.start+BIG_SAVE8;
}


cur_case->txt.next= cur_case->txt.start;

;
cur_case->case_txt.next= cur_case->case_txt.start;
cur_case->is_default= YES;

cur_case->label= s_default= max_stmt++;

char_after(':');
rlevel--;
}




X_FCN x_program(VOID)
{
sixteen_bits a;
eight_bits b;

expanding(program_CMD);



WHILE()
{
a= next_byte();

if(!(a==040||a==tab_mark))
break;
}

if(TOKEN1(a))
{
#if(YES)

RAT_error(ERROR,OC("Expected identifier after \"%s\""),1,"program");
#endif
BACK_UP
cur_fcn= NO_FCN;
is_function= NO;
}
else
{
cur_fcn= IDENTIFIER(a,next_byte());
is_function= NO;
}

id0(id_program);id0(cur_fcn);

if(cur_fcn==id_procedure)
{
COPY_TO(073);NL;
}
else
{
b= next_byte();BACK_UP
if(b==050)PARENS;
NL;
EAT_AUTO_SEMI;
skip_newlines(COPY_COMMENTS);
INDENT;
copy_out(insert.program.start,insert.program.end,!macro);
out_char(073);
COPY_2TO(0173,NOT_AFTER);
if(psave_buffer>save_buffer)NL;
brace_level++;
stmt(TO_OUTPUT,BRACE_ONLY);
brace_level--;
OUTDENT;

id0(id__END);
if(Fortran88){id0(id_program);id0(cur_fcn);}
NL;
}

cur_fcn= NO_FCN;

rlevel--;
}

X_FCN x_module(VOID)
{
sixteen_bits a;
eight_bits b;

expanding(module_CMD);



WHILE()
{
a= next_byte();

if(!(a==040||a==tab_mark))
break;
}

if(TOKEN1(a))
{
#if(YES)

RAT_error(ERROR,OC("Expected identifier after \"%s\""),1,"module");
#endif
BACK_UP
cur_fcn= NO_FCN;
is_function= NO;
}
else
{
cur_fcn= IDENTIFIER(a,next_byte());
is_function= NO;
}

id0(id_module);id0(cur_fcn);

if(cur_fcn==id_procedure)
{
COPY_TO(073);NL;
}
else
{
b= next_byte();BACK_UP
if(b==050)PARENS;
NL;
EAT_AUTO_SEMI;
skip_newlines(COPY_COMMENTS);
INDENT;
copy_out(insert.module.start,insert.module.end,!macro);
out_char(073);
COPY_2TO(0173,NOT_AFTER);
if(psave_buffer>save_buffer)NL;
brace_level++;
stmt(TO_OUTPUT,BRACE_ONLY);
brace_level--;
OUTDENT;

id0(id__END);
if(Fortran88){id0(id_module);id0(cur_fcn);}
NL;
}

cur_fcn= NO_FCN;

rlevel--;
}

X_FCN x_subroutine(VOID)
{
sixteen_bits a;
eight_bits b;

expanding(subroutine_CMD);



WHILE()
{
a= next_byte();

if(!(a==040||a==tab_mark))
break;
}

if(TOKEN1(a))
{
#if(YES)

RAT_error(ERROR,OC("Expected identifier after \"%s\""),1,"subroutine");
#endif
BACK_UP
cur_fcn= NO_FCN;
is_function= NO;
}
else
{
cur_fcn= IDENTIFIER(a,next_byte());
is_function= NO;
}

id0(id_subroutine);id0(cur_fcn);

if(cur_fcn==id_procedure)
{
COPY_TO(073);NL;
}
else
{
b= next_byte();BACK_UP
if(b==050)PARENS;
NL;
EAT_AUTO_SEMI;
skip_newlines(COPY_COMMENTS);
INDENT;
copy_out(insert.subroutine.start,insert.subroutine.end,!macro);
out_char(073);
COPY_2TO(0173,NOT_AFTER);
if(psave_buffer>save_buffer)NL;
brace_level++;
stmt(TO_OUTPUT,BRACE_ONLY);
brace_level--;
OUTDENT;

id0(id__END);
if(Fortran88){id0(id_subroutine);id0(cur_fcn);}
NL;
}

cur_fcn= NO_FCN;

rlevel--;
}

X_FCN x_function(VOID)
{
sixteen_bits a;
eight_bits b;

expanding(function_CMD);



WHILE()
{
a= next_byte();

if(!(a==040||a==tab_mark))
break;
}

if(TOKEN1(a))
{
#if(YES)

RAT_error(ERROR,OC("Expected identifier after \"%s\""),1,"function");
#endif
BACK_UP
cur_fcn= NO_FCN;
is_function= NO;
}
else
{
cur_fcn= IDENTIFIER(a,next_byte());
is_function= YES;
}

id0(id_function);id0(cur_fcn);

if(cur_fcn==id_procedure)
{
COPY_TO(073);NL;
}
else
{
b= next_byte();BACK_UP
if(b==050)PARENS;
NL;
EAT_AUTO_SEMI;
skip_newlines(COPY_COMMENTS);
INDENT;
copy_out(insert.function.start,insert.function.end,!macro);
out_char(073);
COPY_2TO(0173,NOT_AFTER);
if(psave_buffer>save_buffer)NL;
brace_level++;
stmt(TO_OUTPUT,BRACE_ONLY);
brace_level--;
OUTDENT;

id0(id__END);
if(Fortran88){id0(id_function);id0(cur_fcn);}
NL;
}

cur_fcn= NO_FCN;

rlevel--;
}

X_FCN x_blockdata(VOID)
{
sixteen_bits a;
eight_bits b;

expanding(blockdata_CMD);



WHILE()
{
a= next_byte();

if(!(a==040||a==tab_mark))
break;
}

if(TOKEN1(a))
{
#if(NO)

RAT_error(ERROR,OC("Expected identifier after \"%s\""),1,"blockdata");
#endif
BACK_UP
cur_fcn= NO_FCN;
is_function= NO;
}
else
{
cur_fcn= IDENTIFIER(a,next_byte());
is_function= NO;
}

id0(id_blockdata);id0(cur_fcn);

if(cur_fcn==id_procedure)
{
COPY_TO(073);NL;
}
else
{
b= next_byte();BACK_UP
if(b==050)PARENS;
NL;
EAT_AUTO_SEMI;
skip_newlines(COPY_COMMENTS);
INDENT;
copy_out(insert.blockdata.start,insert.blockdata.end,!macro);
out_char(073);
COPY_2TO(0173,NOT_AFTER);
if(psave_buffer>save_buffer)NL;
brace_level++;
stmt(TO_OUTPUT,BRACE_ONLY);
brace_level--;
OUTDENT;

id0(id__END);
if(Fortran88){id0(id_blockdata);id0(cur_fcn);}
NL;
}

cur_fcn= NO_FCN;

rlevel--;
}

X_FCN x_interface(VOID)
{
sixteen_bits a;
eight_bits b;

expanding(interface_CMD);



WHILE()
{
a= next_byte();

if(!(a==040||a==tab_mark))
break;
}

if(TOKEN1(a))
{
#if(NO)

RAT_error(ERROR,OC("Expected identifier after \"%s\""),1,"interface");
#endif
BACK_UP
cur_fcn= NO_FCN;
is_function= NO;
}
else
{
cur_fcn= IDENTIFIER(a,next_byte());
is_function= NO;
}

id0(id_interface);id0(cur_fcn);

if(cur_fcn==id_procedure)
{
COPY_TO(073);NL;
}
else
{
b= next_byte();BACK_UP
if(b==050)PARENS;
NL;
EAT_AUTO_SEMI;
skip_newlines(COPY_COMMENTS);
INDENT;
copy_out(insert.interface.start,insert.interface.end,!macro);
out_char(073);
COPY_2TO(0173,NOT_AFTER);
if(psave_buffer>save_buffer)NL;
brace_level++;
stmt(TO_OUTPUT,BRACE_ONLY);
brace_level--;
OUTDENT;

id0(id__END);
if(Fortran88){id0(id_interface);id0(cur_fcn);}
NL;
}

cur_fcn= NO_FCN;

rlevel--;
}



X_FCN
x_block(VOID)
{
sixteen_bits a;

if(TOKEN1(a= next_byte()))
{
BACK_UP
id0(id_block);
}
else
{
a= IDENTIFIER(a,next_byte());

if(a==id_data)x_blockdata();
else
{
BACK_UP
id0(a);
}
}
}



X_FCN
x_contains(VOID)
{
OUTDENT;
id0(id__CONTAINS);
char_after(':');
NL;
INDENT;
}




X_FCN x_type(VOID)
{
sixteen_bits a;
eight_bits b;

b= next_byte();BACK_UP
if(b==054){}
else if(b==050)
{
id0(id_type);
return;
}

expanding(type_CMD);

if(TOKEN1(a= next_byte()))
{

RAT_error(ERROR,OC("Expected identifier after \"%s\""),1,"type");
BACK_UP
cur_struct= NO_FCN;
}
else
{
cur_struct= IDENTIFIER(a,next_byte());
}

id0(id_type);id0(cur_struct);
NL;
INDENT;
brace_level++;
stmt(TO_OUTPUT,BRACE_ONLY);
brace_level--;
OUTDENT;

id0(id__END);id0(id_type);id0(cur_struct);
char_after(';');OUT_CHAR(';');

wlevel--;
rlevel--;
}



X_FCN
x_return(VOID)
{
eight_bits HUGE*return_expr= NULL,HUGE*pr;

expanding(return_CMD);


if((pr= SAVE_AFTER(&return_expr,SAVE8,073))>return_expr)
{
if(!is_function)

RAT_error(ERROR,OC("Can't return value from program or subroutine"),0);
else
{

out_cmd(YES,'r',OC(""),OC(" %s"),2,return_expr,pr);
id0(cur_fcn);EQUALS;
copy_out(return_expr,pr,!macro);NL;
}
}

RETURN;
rlevel--;
FREE_MEM(return_expr,"return_expr",SAVE8,eight_bits);
}



X_FCN
x_unroll(VOID)
{
eight_bits HUGE*I= NULL,HUGE*pI;
eight_bits HUGE*Imin= NULL,HUGE*pImin;
eight_bits HUGE*Imax= NULL,HUGE*pImax;
eight_bits HUGE*Di= NULL,HUGE*pDi;
eight_bits HUGE*txt= NULL,HUGE*ptxt;
int i,imin,imax,di;
name_pointer n;
text_pointer t;
eight_bits temp[20];
extern int last_bytes;
extern boolean saved_token;
eight_bits c;

expanding(_DO_CMD);


{
eight_bits c;

if((c= next_byte())!='(')
{
didnt_expand('(',c,"$DO");
return;
}
};

pI= SAVE_AFTER(&I,SAVE8,054);

if(TOKEN1(*I))
{

RAT_error(ERROR,OC("Expected identifier for first argument of $DO; \
expansion aborted"),0);
return;
}

pImin= SAVE_AFTER(&Imin,SAVE8,054);
imin= neval(Imin,pImin);

pImax= SAVE_AFTER(&Imax,SAVE8,054);
imax= neval(Imax,pImax);

pDi= SAVE_AFTER(&Di,SAVE8,051);
di= neval(Di,pDi);

EAT_AUTO_SEMI;
skip_newlines(NO);

c= next_byte();

if(!(c==0173||c==050))
{

RAT_error(ERROR,OC("Was expecting '{' or '(', not '%c', after $DO(); \
expansion aborted"),1,XCHR(c));
return;
}



mac_protected= YES;
ptxt= SAVE_AFTER(&txt,BIG_SAVE8,c==0173?0175:051);
mac_protected= NO;

n= name_dir+IDENTIFIER(*I,*(I+1));
n->info.Macro_type= IMMEDIATE_MACRO;
t= GET_MEM("equiv",2,text);
n->equiv_or_xref= (EQUIV)t;
t->tok_start= temp;
t->moffset= 2;

if(!((di>=0&&imax<imin)||(di<0&&imax>imin)))
for(i= imin;di>=0?i<=imax:i>=imax;i+= di)
{
STRNCPY(temp,I,2);
sprintf((char*)(temp+2),"%c%d%c",XCHR(constant),i,XCHR(constant));
to_ASCII(temp+2);
#if 0
(t+1)->tok_start= temp+STRLEN(temp);
#endif
t->nbytes= STRLEN(temp);
copy_out(txt,ptxt,!macro);

if(i==imax)
break;
}

rlevel--;

FREE_MEM(t,"t",2,text);
n->equiv_or_xref= NULL;
n->info.Macro_type= NOT_DEFINED;

FREE_MEM(I,"unroll:I",SAVE8,eight_bits);
FREE_MEM(Imin,"unroll:Imin",SAVE8,eight_bits);
FREE_MEM(Imax,"unroll:Imax",SAVE8,eight_bits);
FREE_MEM(txt,"unroll:txt",SAVE8,eight_bits);
}



SRTN
ini_Ratfor(VOID)
{
insert.program.start= insert.program.end= 
GET_MEM("program",2,eight_bits);
insert.module.start= insert.module.end= 
GET_MEM("module",2,eight_bits);
insert.subroutine.start= insert.subroutine.end= 
GET_MEM("subroutine",2,eight_bits);
insert.function.start= insert.function.end= 
GET_MEM("function",2,eight_bits);
insert.blockdata.start= insert.blockdata.end= 
GET_MEM("blockdata",2,eight_bits);
insert.interface.start= insert.interface.end= 
GET_MEM("interface",2,eight_bits);
}


#endif 





