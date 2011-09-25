#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/macs -A -# --F -= 1.62/Web/macs.c"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/macs.web"\
  CHANGE FILE:  (none)
#endif
#define _MACS_h   \

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

#define BP_MARKER  1 \

#define PROPER_END(end) \
end= (np+1)->byte_start; \
if(*end==BP_MARKER&&np!=npmax)end= ((BP*)end)->byte_start \

#define MAX_ID_LENGTH  32 \

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

#define MAKE_16(start)(((sixteen_bits)(*start)<<8)+(sixteen_bits)(*(start+1))) \

#define TYPE_DESCR_LEN  20 \
 \

#define save_name(a){if(xids->level>=MAX_XLEVELS) \
{ \
 \
macro_err(OC("! Macro inner recursion depth exceeded"),YES); \
 \
fatal(ERR_M,OC("!! BYE."),OC("")); \
} \
xids->token[slevel= xids->level++]= a; \
} \

#define unsave_name  xids->level= slevel \

#define DEFINED_ERR(s){ \
macro_err(OC(s),YES);goto done_expanding;} \

#define ERR_IF_DEFINED_AT_END  if(p>=end) \
DEFINED_ERR("! `defined' ends prematurely") \

#define CUR_QUOTE  ((eight_bits)(single_quote||(!double_quote&&R77_or_F)? \
047:042)) \

#define UNNAMED_MODULE  0
#define CPY_OP(token,trans)case token:cpy_op(OC(trans));break \

#define MUST_QUOTE(name,p,p1)must_quote(OC(name),p,p1) \

#define CHECK_QUOTE(var,n)if(*var++!=end_char) \
macro_err(OC("! Argument %d of \
$TRANSLIT doesn't begin with '%c'"),YES,n,end_char) \

#define N_ENVBUF  200 \

#define SAVE_ENV(aval)if(t<temp_end)*t++= XCHR(aval); \
else OVERFLW("Env_buf","") \

#define DOES_ARG_FOLLOW(c) \
if(*p0!=MACRO_ARGUMENT) \
{ \
 \
macro_err(OC("! Macro token `#%c' must be followed by a parameter"),YES,c); \
break; \
} \
p0++ \

#define INS_ARG_LIST  pargs,m,n,&p0,&pasting,&xpn_argument,last_was_paste \

#define STOP  YES \

#define arg_must_be_constant(name) \
 \
macro_err(OC("Argument of \"%s\" must be constant or string"),YES,name); \

#define MTEXT_SIZE  2500 \

#define SAVE_MTEXT(val)if(p<mtext_end)*p++= (eight_bits)(val); \
else OVERFLW("Mtext","") \



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
sixteen_bits token[MAX_XLEVELS];
int level;
}XIDS;



typedef struct
{
const char*name;
int len;
SRTN(*expnd)PROTO((int,unsigned char**));



boolean Language;
eight_bits nargs;
boolean var_args;
boolean recursive;
sixteen_bits id;
}INTERNAL_FCN;




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



IN_COMMON sixteen_bits HUGE*args;

IN_COMMON BUF_SIZE max_margs;



INTERNAL_FCN internal_fcns[]= {
{"$$ASCII",0,i_ascii_,0xF,1,NO,NO},
{"$ASSERT",0,i_assert_,0xF,1,NO,NO},
{"$$CONST",0,i_const_,0xF,2,YES,NO},
{"$DEFINE",0,i_define_,0xF,1,NO,NO},
{"_DUMPDEF",0,i_dumpdef_,0xF,0,YES,NO},
{"$DUMPDEF",0,i_dumpdef_,0xF,0,YES,NO},
{"$$ERROR",0,i_error_,0xF,1,NO,NO},
{"$$EVAL",0,i_eval_,0xF,1,NO,NO},
{"$$GETENV",0,i_getenv_,0xF,1,NO,NO},
{"$IF",0,i_if_,0xF,3,NO,YES},
{"$IFCASE",0,i_ifcase_,0xF,1,YES,YES},
{"$IFDEF",0,i_ifdef_,0xF,3,NO,YES},
{"$IFNDEF",0,i_ifndef_,0xF,3,NO,YES},
{"$IFELSE",0,i_ifelse_,0xF,4,NO,YES},
{"_INPUT_LINE",0,i_inp_line_,0xF,0,NO,NO},
{"$INPUT_LINE",0,i_inp_line_,0xF,0,NO,NO},
{"$$KEYWORD",0,i_keyword_,0xF,1,NO,NO},
{"_LANGUAGE",0,i_lang_,0xF,0,NO,NO},
{"$LANGUAGE",0,i_lang_,0xF,0,NO,NO},
{"$$LC",0,i_lowercase_,0xF,1,NO,NO},
{"$$LEN",0,i_len_,0xF,1,NO,NO},
{"$$LOG",0,i_log_,0xF,2,NO,NO},
{"_LANGUAGE_NUM",0,i_lnum_,0xF,0,NO,NO},
{"$LANGUAGE_NUM",0,i_lnum_,0xF,0,NO,NO},
{"$M",0,i_define_,0xF,1,NO,NO},
{"$$META",0,i_meta_,0xF,1,NO,NO},
{"$$MIN_MAX",0,i_min_max_,0xF,2,YES,NO},
{"$$MODULE_NAME",0,i_mod_name_,0xF,0,NO,NO},
{"$$MODULES",0,i_modules_,0xF,1,NO,NO},
{"$$NARGS",0,i_nargs_,0xF,1,NO,NO},
{"_OUTPUT_LINE",0,i_outp_line_,0xF,0,NO,NO},
{"$OUTPUT_LINE",0,i_outp_line_,0xF,0,NO,NO},
{"$$ROUTINE",0,i_routine_,RATFOR,0,NO,NO},
{"_SECTION_NUM",0,i_sect_num_,0xF,0,NO,NO},
{"$SECTION_NUM",0,i_sect_num_,0xF,0,NO,NO},
{"$$SWITCH",0,i_switch_,0,0,NO,NO},
{"$$TM",0,i_tm_,0xF,1,NO,NO},
{"$$TRANSLIT",0,i_translit_,0xF,3,NO,NO},
{"$UNDEF",0,i_undef_,0xF,1,NO,NO},
{"$$UNSTRING",0,i_unstring_,0xF,1,NO,NO},
{"$$UC",0,i_uppercase_,0xF,1,NO,NO},
{"$$VERBATIM",0,i_verbatim_,0xF,1,NO,NO},
{"$$VERSION",0,i_version_,0xF,0,NO,NO},
{"_XX",0,i_xflag_,0xF,1,NO,NO},
{"$XX",0,i_xflag_,0xF,1,NO,NO},
{"",0,NULL}
};


SRTN
ini_internal_fcns(VOID)
{
INTERNAL_FCN HUGE*s;
name_pointer np;
text_pointer m;

for(s= internal_fcns;(s->len= STRLEN(s->name))!=0;s++)
{
ASCII HUGE*p= x_to_ASCII(OC(s->name));

s->id= ID_NUM_ptr(np,p,p+s->len);

np->equiv= (ASCII HUGE*)(m= text_ptr++);
np->macro_type= IMMEDIATE_MACRO;

m->tok_start= (eight_bits HUGE*)s->expnd;
m->nbytes= 0;
m->text_link= macro;
m->Language= s->Language;
m->nargs= s->nargs;
m->recursive= s->recursive;
m->var_args= s->var_args;
m->module_text= NO;
m->built_in= YES;
m->protected= YES;
}



text_ptr->tok_start= tok_mem;
}



IN_TANGLE text_pointer cur_text;
IN_TANGLE LINE_NUMBER nearest_line;



XIDS HUGE*pids[MAX_XLEVELS];
int xlevel= 0;



static boolean keep_intact;
IN_COMMON boolean single_quote,double_quote;


OUTPUT_STATE copy_state;



int xflag= 1;







SRTN
predefine_macros(VOID)
{
new_mbuf();



SAVE_MACRO("$DEFINED(macro)$EVAL(defined #!macro)");



SAVE_MACRO("$ABS(a)$IF((a) > 0,$EVAL(a),$EVAL(-(a)))");



SAVE_MACRO("$STRING(expr)$STRING0(`expr`)");


SAVE_MACRO("$STRING0(expr)#*expr");



SAVE_MACRO("$LEN(s)$$LEN(#*s)");



SAVE_MACRO("$VERBATIM(s)$$VERBATIM(s)");

SAVE_MACRO("$UNQUOTE(s)$$VERBATIM(s)");

SAVE_MACRO("$P $VERBATIM($IF($LANGUAGE_NUM==2 || $LANGUAGE_NUM==4, \
	'#', \"#\"))");

SAVE_MACRO("$PP $UNSTRING($P)");



SAVE_MACRO("$UNSTRING(s)$$UNSTRING(s)");



SAVE_MACRO("$TRANSLIT(s,from,to)$$TRANSLIT(#*s,#*from,#*to)");




SAVE_MACRO("$GETENV(var)$STRING($$GETENV(#*var))");

SAVE_MACRO("$HOME $GETENV(HOME)");




SAVE_MACRO("$COMMENT(cmnt)$$META(#*cmnt)");



SAVE_MACRO("$ERROR(text)$$ERROR(#*text)");



SAVE_MACRO("$ROUTINE $STRING($$ROUTINE)");



SAVE_MACRO("$L(name)$$LC(name)");

SAVE_MACRO("$U(name)$$UC(name)");



SAVE_MACRO("$NARGS(mname)$$NARGS(#!mname)");



SAVE_MACRO("$KEYWORD(s)$$KEYWORD(#*s)");

SAVE_MACRO("$AUTHOR $KEYWORD(Author)");
SAVE_MACRO("$DATE_TIME $KEYWORD(Date)");
SAVE_MACRO("$HEADER $KEYWORD(Header)");
SAVE_MACRO("$ID $KEYWORD(Id)");
SAVE_MACRO("$LOCKER $KEYWORD(Locker)");
SAVE_MACRO("$NAME $KEYWORD(Name)");
SAVE_MACRO("$RCSFILE $KEYWORD(RCSfile)");
SAVE_MACRO("$REVISION $KEYWORD(Revision)");
SAVE_MACRO("$SOURCE $KEYWORD(Source)");
SAVE_MACRO("$STATE $KEYWORD(State)");

;

t_macros();
e_macros();
}


SRTN
new_mbuf(VOID)
{
mp= cur_mp= macrobuf= GET_MEM("macrobuf",mbuf_size,eight_bits);
macrobuf_end= macrobuf+mbuf_size;
}


eight_bits HUGE*
argize FCN((start,end))
eight_bits HUGE*start C0("Beginning of the raw tokens.")
eight_bits HUGE*end C1("End.")
{
eight_bits k,l;
eight_bits HUGE*p,HUGE*last2,HUGE*start0;
boolean var_args;

start0= start;

if(TOKEN1(*start))
{

err0_print(ERR_M,OC("! Macro must start with identifier"),0);

return end;
}



start= get_dargs(start,end,args,&k,&var_args);
cur_text->moffset= (unsigned char)(start-start0);


cur_text->nargs= k;
cur_text->var_args= var_args;


for(last2= p= start;p<end;p++)
{
if(TOKEN1(*p))
switch(*p)
{
case 043:

{
int n;
eight_bits HUGE*q= p;
outer_char*tmp;
size_t i;

if(*(p+1)!=constant)continue;

p+= 2;

for(i= 0;p[i]!=constant;i++)
;

tmp= GET_MEM("var arg buf",i+1,outer_char);

for(i= 0;p[i]!=constant;i++)
tmp[i]= XCHR(p[i]);
tmp[i+1]= '\0';

n= ATOI(tmp);



FREE_MEM(tmp,"var arg buf",i+1,outer_char);

if(!var_args)
macro_err(OC("! #%d may only be used with variable-argument \
macros"),YES,n);

while(*p!=constant)*p++= ignore;

if(n<0)
macro_err(OC("! #%d is not allowed"),YES,n);
else if(n==0)
*(q+1)= 060;

else
{
*q= MACRO_ARGUMENT;
*(q+1)= (eight_bits)(k+(eight_bits)(n-1));

}

last2= p;
*p= ignore;
}


continue;

case dot_const:
case begin_language:
p++;

default:
continue;
}



if(*p==0320&&*(p+1)==0)
p+= 5;
else
for(l= 0;l<k;++l)


if(args[l]>>8==*p&&(args[l]&0x00FF)==*(p+1))
{
*p= MACRO_ARGUMENT;
*(p+1)= l;

break;
}

last2= ++p;


}



for(last2++;p>last2;)
if(*(p-1)==012||*(p-1)==040)
p--;
else
break;

;
return p;
}


eight_bits HUGE*
get_dargs FCN((start,end,args,n,pvar_args))
eight_bits HUGE*start C0("Start of token string.")
eight_bits HUGE*end C0("End of token string.")
sixteen_bits HUGE*args C0("Array of argument tokens, to be returned.")
eight_bits*n C0("Number of arguments found.")
boolean*pvar_args C1("Return whether variable arguments")
{
eight_bits k;
sixteen_bits id_token;

*pvar_args= NO;

id_token= IDENTIFIER(*start,*(start+1));
start+= 2;

*n= 0;

if(start==end)
return end;

if(*start!=050)
{
while(start!=end&&*start==040)
start++;

return start;
}


for(k= 0,++start;start!=end&&*start!=051;++k)
{
if(TOKEN1(*start))
{


if(*start==ellipsis)
{
if(*++start!=051)
err0_print(ERR_M,OC("Expected ')' after ellipsis"),0);
else*pvar_args= YES;

break;
}




err0_print(ERR_M,OC("Invalid macro parameter in definition of macro \
\"%s\". Token %s is invalid; \
can only have identifiers and commas between (...)"),2,name_of(id_token),type1(*start));
return start;
}

if(k>=(eight_bits)max_margs)
mac_args(id_token);

args[k]= MAKE_16(start);

start+= 2;


if(*start==054)
start++;
}


*n= k;

if(start==end)
{

err0_print(ERR_M,OC("Missing right paren in definition of macro \"%s\""),1,name_of(id_token));
return end;
}



if(*start==051&&k==0&&!*pvar_args)
args[k++]= 0;

return start+1;
}


SRTN
mac_args FCN((id_token))
sixteen_bits id_token C1("")
{
char temp[200];

sprintf(temp,"arguments to macro \"%s\"",(char*)name_of(id_token));
OVERFLW(temp,"ma");
}


outer_char*
type1 FCN((c))
eight_bits c C1("")
{
outer_char*p= NULL;
static outer_char type_descr[TYPE_DESCR_LEN];

if(isprint(XCHR(c)))
{
if(
nsprintf(type_descr,OC("'%c'"),1,XCHR(c))>=(int)(TYPE_DESCR_LEN))OVERFLW("type_descr","");}

else
{
switch(c)
{
case constant:
p= OC("constant");break;

case stringg:
p= OC("string");break;

case 012:
p= OC("newline");break;
}

if(p)
{
if(
nsprintf(type_descr,OC("'%s'"),1,p)>=(int)(TYPE_DESCR_LEN))OVERFLW("type_descr","");}

else
{
if(
nsprintf(type_descr,OC("0x%x"),1,c)>=(int)(TYPE_DESCR_LEN))OVERFLW("type_descr","");}

}

return type_descr;
}


eight_bits HUGE*
get_margs0 FCN((start,end,pcur_byte,pthe_end,multilevels,
var_args,pargs,n))
eight_bits HUGE*start C0("Beginning of the tokens for this \
macro call.")
eight_bits HUGE*end C0("Maximum possible end.")
eight_bits HUGE**pcur_byte C0("Pointer to |cur_byte|.")
eight_bits HUGE**pthe_end C0("End of the current buffer.")
boolean multilevels C0("")
boolean var_args C0("Does macro have variable arguments?")
PARGS pargs C0("Array of pointers to the actual arguments, \
to be returned.")
eight_bits*n C1("Number of arguments found.")
{
eight_bits k;
int bal,bbal;
boolean mac_protected;
sixteen_bits id_token;

id_token= IDENTIFIER(*start,*(start+1));
start+= 2;


if(start==end&&pthe_end!=NULL)
end= args_to_macrobuf(end,pcur_byte,pthe_end,multilevels,var_args);


if(start==end||*start!=050)
{
return pargs[*n= 0]= start;

}

pargs[k= 0]= start++;





bal= 1;
bbal= 0;
mac_protected= NO;

while(start<end)
{
eight_bits c= *start;

if(TOKEN1(c))
{
switch(c)
{
case 043:
if(start+1<end&&*(start+1)==054)
{
*start= '\0';
start+= 2;
continue;
}
break;

case constant:
case stringg:
for(start++;*start++!=c;);
continue;

case dot_const:
case begin_language:
start+= 2;
continue;

case 0140:
mac_protected= BOOLEAN(!mac_protected);
*start++= '\0';

continue;



case 050:
bal++;
break;

case 051:
if(bal==0)

macro_err(OC("Unexpected ')' in macro argument"),YES);
else if(bal>0)bal--;
break;

case 0133:
bbal++;
break;

case 0135:
if(bbal==0)

macro_err(OC("Unexpected ']' in macro argument"),YES);
else if(bbal>0)bbal--;
break;
}

if(!mac_protected&&((bal==1&&bbal==0&&(c==054))
||bal==0))
{

if(++k>=max_margs)
mac_args(id_token);

pargs[k]= start++;

if(bal==0)break;
}
else start++;
}
else
start+= (c<0250?2:4+4*1);

}

*n= k;
return start;
}


void HUGE*
mac_lookup FCN((cur_val))
sixteen_bits cur_val C1("Current id token.")
{
return(void*)MAC_LOOKUP(cur_val);
}



SRTN
i_ifdef_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
text_pointer m;
sixteen_bits id;
eight_bits HUGE*p0= pargs[0]+1;
boolean e;

CHK_ARGS("$IFDEF",3);

if(TOKEN1(*p0))
{

macro_err(OC("! First argument of $IFDEF or $IFNDEF must be a macro"),YES);
return;
}

id= IDENTIFIER(p0[0],p0[1]);
e= ((m= mac_lookup(id))!=NULL&&!(m->built_in));

if(e)
{MCHECK(pargs[2]-pargs[1]-1,"ifdef");
for(p0= pargs[1]+1;p0<pargs[2];)*mp++= *p0++;}
else
{MCHECK(pargs[3]-pargs[2]-1,"ifdef");
for(p0= pargs[2]+1;p0<pargs[3];)*mp++= *p0++;}
}

SRTN
i_ifndef_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
text_pointer m;
sixteen_bits id;
eight_bits HUGE*p0= pargs[0]+1;
boolean e;

CHK_ARGS("$IFDEF",3);

if(TOKEN1(*p0))
{

macro_err(OC("! First argument of $IFDEF or $IFNDEF must be a macro"),YES);
return;
}

id= IDENTIFIER(p0[0],p0[1]);
e= ((m= mac_lookup(id))!=NULL&&!(m->built_in));

if(!e)
{MCHECK(pargs[2]-pargs[1]-1,"ifndef");
for(p0= pargs[1]+1;p0<pargs[2];)*mp++= *p0++;}
else
{MCHECK(pargs[3]-pargs[2]-1,"ifndef");
for(p0= pargs[2]+1;p0<pargs[3];)*mp++= *p0++;}
}


SRTN
i_ifelse_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p0;
eight_bits HUGE*pp0,HUGE*pp1,HUGE*mp0,HUGE*mp1;
boolean args_identical= YES;

CHK_ARGS("$IFELSE",4);

pp0= xmac_text(mp0= mp,pargs[0]+1,pargs[1]);
mp1= mp;

pp1= xmac_text(mp,pargs[1]+1,pargs[2]);




if(mp-pp1!=mp1-pp0)
args_identical= NO;
else
while(pp0<mp1)
if(*pp0++!=*pp1++)
args_identical= NO;

mp= mp0;

if(args_identical)
{MCHECK(pargs[3]-pargs[2]-1,"_ifelse_");
for(p0= pargs[2]+1;p0<pargs[3];)*mp++= *p0++;}
else
{MCHECK(pargs[4]-pargs[3]-1,"_ifelse_");
for(p0= pargs[3]+1;p0<pargs[4];)*mp++= *p0++;}
}


SRTN
i_if_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*pp;
eight_bits HUGE*mp0;
eight_bits HUGE*p0;
boolean e;

CHK_ARGS("$IF",3);

pp= xmac_text(mp0= mp,p0= pargs[0]+1,pargs[1]);
e= eval(pp,mp);
mp= mp0;

if(e)
{MCHECK(pargs[2]-pargs[1]-1,"_if_");
for(p0= pargs[1]+1;p0<pargs[2];)*mp++= *p0++;}
else
{MCHECK(pargs[3]-pargs[2]-1,"_if_");
for(p0= pargs[2]+1;p0<pargs[3];)*mp++= *p0++;}
}


SRTN
i_ifcase_ FCN((n,pargs))
int n C0("Total number of arguments")
PARGS pargs C1("")
{
eight_bits HUGE*pp;
eight_bits HUGE*mp0;
int ncase;

CHK_ARGS("$IFCASE",-1);
pp= xmac_text(mp0= mp,pargs[0]+1,pargs[1]);
ncase= neval(pp,mp);
mp= mp0;
copy_nth_arg(ncase,n-3,pargs);
}


SRTN
copy_nth_arg FCN((n0,n,pargs))
int n0 C0("Should be a non-negative integer")
int n C0("Cases are numbered 0--n, default")
PARGS pargs C1("")
{
eight_bits HUGE*p0;

if(n0<0||n0>n)n0= n+1;

n0++;
MCHECK(pargs[n0+1]-pargs[n0]-1,"copy_nth_arg");
for(p0= pargs[n0]+1;p0<pargs[n0+1];)*mp++= *p0++;
}


SRTN
i_switch_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{}


SRTN
undef FCN((cur_val,warning))
sixteen_bits cur_val C0("Token to be undefined.")
boolean warning C1("Complain is there's an error?")
{
name_pointer np= name_dir+cur_val;
text_pointer m;

if(np->macro_type==NOT_DEFINED)
{
if(warning)

macro_err(OC("WARNING: \"%s\" is already undefined"),YES,name_of(cur_val));

return;
}


if(np->equiv==NULL)
{
if(np->macro_type==IMMEDIATE_MACRO)
{

macro_err(OC("Attempting to @#undef deferred macro \"%s\" \
during phase 1; consider using $UNDEF(%s)"),YES,name_of(cur_val),name_of(cur_val));
}
else
{

macro_err(OC("Missing equivalence field while undefining \"%s\"; \
this shouldn't happen!"),YES,name_of(cur_val));

np->macro_type= NOT_DEFINED;
}

return;
}

np->macro_type= NOT_DEFINED;

m= (text_pointer)np->equiv;
m->nargs= UNDEFINED_MACRO;
FREE(m->tok_start);
m->nbytes= m->moffset= 0;

np->equiv= NULL;
}


boolean recursive_name FCN((a,xids,last_level))
sixteen_bits a C0("")
XIDS HUGE*xids C0("")
int last_level C1("")
{
int i;


for(i= 0;i<last_level;i++)
if(xids->token[i]==a)return YES;

return NO;
}



SRTN
macro_err FCN(VA_ALIST((s,trail VA_ARGS)))
VA_DCL(
CONST outer_char s[]C0("Error message about macro expansion.")
int trail C2("Do we print out the expansion trail?"))
{
VA_LIST(arg_ptr)
outer_char HUGE*temp,HUGE*temp1,HUGE*t,HUGE*near_line;
int i,ntemp;
#if(NUM_VA_ARGS == 1)
CONST outer_char s[];
int trail;
#endif


temp= GET_MEM("macro_err:temp",N_MSGBUF,outer_char);
temp1= GET_MEM("macro_err:temp1",N_MSGBUF,outer_char);
near_line= GET_MEM("macro_err:near_line",N_MSGBUF,outer_char);

VA_START(arg_ptr,trail);

#if(NUM_VA_ARGS==1)
{
char*fmt0= va_arg(arg_ptr,char*);

va_arg(arg_ptr,int);
vsprintf((char*)(char*)temp1,fmt0,arg_ptr);
}
#else
vsprintf((char*)temp1,(CONST char*)s,arg_ptr);
#endif
va_end(arg_ptr);

if(phase==2)

if(
nsprintf(near_line,OC("; near input l. %u"),1,nearest_line)>=(int)(N_MSGBUF))OVERFLW("near_line","");






if(
nsprintf(temp,OC("\"%s.  (%s l. %u in %s%s.)  %s"),6,temp1,phase==1?"Input":"Output",phase==1?cur_line:OUTPUT_LINE,phase==1?cur_file_name:params.OUTPUT_FILE_NAME,near_line,trail&&(xlevel>0)?"Expanding ":"")>=(int)(N_MSGBUF))OVERFLW("temp","");

t= temp+STRLEN(temp);



if(trail&&(xlevel>0))
for(i= 0;i<1;i++)
see_xlevel(&t,pids[i]);

ntemp= STRLEN(temp);
temp[ntemp]= '"';
temp[ntemp+1]= '\0';


OUT_MSG(to_ASCII(temp),NULL);


temp[ntemp]= '\0';
printf("\n%s\n",(char*)to_outer((ASCII HUGE*)temp)+1);

mark_harmless;

FREE_MEM(temp,"macro_err:temp",N_MSGBUF,outer_char);
FREE_MEM(temp1,"macro_err:temp1",N_MSGBUF,outer_char);
FREE_MEM(near_line,"macro_err:near_line",N_MSGBUF,outer_char);
}


SRTN
see_xlevel FCN((pt,p))
outer_char HUGE**pt C0("")
XIDS HUGE*p C1("")
{
int i,level;

level= p->level;

for(i= 0;i<level;
i++,sprintf((char*)(*pt),"%s",i==level?". ":", "),(*pt)+= 2)
prn_mname(pt,p->token[i]);
}


SRTN
prn_mname FCN((pt,token))
outer_char HUGE**pt C0("")
sixteen_bits token C1("")
{
name_pointer np;
ASCII HUGE*p;
CONST ASCII HUGE*end;

np= name_dir+token;

PROPER_END(end);

for(p= np->byte_start;p<end;)
*(*pt)++= XCHR(*p++);
}


SRTN
i_inp_line_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
num_to_mbuf(n,pargs,"$INPUT_LINE",0,"nearest line",nearest_line);
}

SRTN
i_outp_line_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
num_to_mbuf(n,pargs,"$OUTPUT_LINE",0,"output line",OUTPUT_LINE);
}


SRTN
num_to_mbuf FCN((n,pargs,built_in_name,num_args,num_descr,num))
int n C0("")
PARGS pargs C0("")
CONST char*built_in_name C0("")
int num_args C0("")
CONST char*num_descr C0("")
int num C1("")
{
CHK_ARGS(built_in_name,num_args);

MCHECK0(20,num_descr);

*mp++= constant;
sprintf((char*)mp,"%d",num);
to_ASCII((outer_char HUGE*)mp);
mp+= STRLEN(mp);
*mp++= constant;
}



boolean
x0macro FCN((p,end,xids,pcur_byte,pthe_end,multilevels))
eight_bits HUGE*p C0("Present position in the input buffer.")
eight_bits HUGE*end C0("Last filled position of the input \
buffer plus~1.")
XIDS HUGE*xids C0("")
eight_bits HUGE**pcur_byte C0("Pointer to |cur_byte|.")
eight_bits HUGE**pthe_end C0("End of buffer.")
boolean multilevels C1("")
{
boolean expanded;
sixteen_bits a;
eight_bits a0,a1;
text_pointer m;
eight_bits HUGE*p0,HUGE*p1;
eight_bits HUGE*HUGE*pargs= GET_MEM("pargs",max_margs,eight_bits HUGE*);
boolean must_paste= NO,pasting= NO;
int level0= xids->level;
boolean mac_protected= NO;

expanded= NO;


while(p<end)
{
a0= *p++;

if(p==end&&a0==012)break;

if(TOKEN1(a0))
{
switch(a0)
{
case 0140:
mac_protected= BOOLEAN(!mac_protected);
continue;

case stringg:
case constant:
MCHECK(1,"`");
*mp++= a0;

copy_string:
do
{
if(!TOKEN1(*mp= *p++))
{
MCHECK(1,"id prefix");
*++mp= *p++;
}
MCHECK(1,"8-bit token");
}
while(*mp++!=a0);

if(a0==stringg)
{
eight_bits HUGE*p00;


for(p00= p;p<end;p++)
if(*p!=040&&*p!=011)break;

if(p<end&&*p==stringg)
{
eight_bits mchar= *(mp-2);
eight_bits pchar= *(p+1);

if((mchar==047||mchar==042)&&
(pchar==047||pchar==042))
{
mp-= 2;
p+= 2;
goto copy_string;
}
}
else p= p00;
}



continue;

case dot_const:
case begin_language:
MCHECK(2,"dot_const");
*mp++= a0;
*mp++= *p++;
continue;

default:
MCHECK(1,"`");
*mp++= a0;
continue;
}
}


else
{
a= IDENTIFIER(a0,a1= *p++);

if(a==id_defined)
{

{
MCHECK(6,"defined stuff");


*mp++= a0;
*mp++= a1;

ERR_IF_DEFINED_AT_END;
if(TOKEN1(a0= *p++))
{
if(a0!=050)DEFINED_ERR("! Invalid token after `defined'")
else*mp++= a0;

ERR_IF_DEFINED_AT_END;
if(TOKEN1(a0= *p++))DEFINED_ERR("! Invalid argument of `defined'")
else
{
*mp++= a0;
*mp++= *p++;
}

ERR_IF_DEFINED_AT_END;
if(TOKEN1(a0= *p++))
if(a0!=051)DEFINED_ERR("! Missing ')' after `defined'")
else*mp++= a0;
}
else
{
*mp++= a0;
*mp++= *p++;
}
}



continue;
}





if((m= MAC_LOOKUP(a))!=NULL)
if(mac_protected)
{
MCHECK(2,"protected macro token");
*mp++= a0;
*mp++= a1;
}
else if(recursive_name(a,xids,level0))

{
name_pointer np;
CONST ASCII HUGE*end;

np= name_dir+a;

PROPER_END(end);
copy_id(np->byte_start,end,"recursive macro name");


}




else
{
int slevel= ignore;

if(!m->recursive)
save_name(a);

#ifdef DEBUG_MACS
dbg_macs(a,p,end);
#endif


{
eight_bits n= 0;
eight_bits HUGE*mp0= NULL,HUGE*mp1,HUGE*m_start,HUGE*m_end;
boolean xpn_argument= YES;
boolean last_was_paste;
long max_n= 0;



if(m->nargs>0||m->var_args)
p= get_margs0(p-2,end,pcur_byte,pthe_end,multilevels,
(boolean)(m->var_args),pargs,&n);

if((!m->var_args&&n!=m->nargs)||(m->var_args&&n<m->nargs))
{

macro_err(OC("! Actual number of WEB macro arguments (%u) does not match \
number of def'n (%u); %s"),YES,n,m->nargs,n<m->nargs?"missing ones assumed to be NULL":
"extra ones discarded");




while(n<m->nargs)
{
pargs[n+1]= pargs[n]+1;
n++;
}
}


m_start= mp;
last_was_paste= NO;

if(m->built_in)
{
(*(SRTN(*)(int,unsigned char**))(m->tok_start))(n,pargs);
}
else

{

p0= m->tok_start+m->moffset;
p1= m->tok_start+m->nbytes;

while(p0<p1)
{
if(TOKEN1(a= *p0++))

{
if(!(a==043&&*p0==056))last_was_paste= NO;

if(p0==p1&&a==012)break;

switch(a)
{
case 043:

{
keep_intact= NO;

switch(*p0++)
{
case 046:

{
sixteen_bits id;


if(p0==p1)
macro_err(OC("! Missing internal function name after #&"),YES);
else
{
if(TOKEN1(a= *p0++))
macro_err(OC("! Identifier must follow #&"),YES);
else if(!x_int_fcn(id= IDENTIFIER(a,*p0++),n,pargs))

macro_err(OC("! Internal function name \"%s\" not defined"),YES,name_of(id));
}
}

break;

case 072:

{
int m;
long n;
outer_char*tmp;
size_t i;


if(*p0!=constant)
{

macro_err(OC("Expected constant after \"#:\""),YES);
break;
}

p0++;

for(i= 0;p0[i]!=constant;i++)
;

tmp= GET_MEM("stmt number",i+1,outer_char);


for(i= 0;*p0!=constant;i++,p0++)
tmp[i]= XCHR(*p0);
tmp[i+1]= '\0';
p0++;

n= ATOL(tmp);

FREE_MEM(tmp,"stmt number",i+1,outer_char);

if(n<=0)
{

macro_err(OC("! Invalid statement number offset (%ld) after #:; 1 assumed"),YES,n);
n= 1;
}

if(n>max_n)max_n= n;

MCHECK(2,"|constant|");
*mp++= constant;

m= 
nsprintf((outer_char*)mp,OC("%lu"),1,max_stmt+n-1);
MCHECK(m,"stmt label");
to_ASCII((outer_char HUGE*)mp);
mp+= m;

*mp++= constant;
}


break;

case 041:
if(*p0==MACRO_ARGUMENT)xpn_argument= NO;
else
macro_err(OC("! Macro token '#!' must be followed by \
a parameter"),YES);
break;

case 047:
single_quote= YES;
DOES_ARG_FOLLOW('\'');
goto do_stringize;

case 042:
double_quote= YES;
DOES_ARG_FOLLOW('\"');
goto do_stringize;

case 052:
DOES_ARG_FOLLOW('*');
keep_intact= YES;


case MACRO_ARGUMENT:

{
eight_bits HUGE*begin;
boolean do_quote;


do_stringize:
for(begin= pargs[*p0]+1;*begin=='\0';begin++)
;



MCHECK(1,"stringg");*mp++= stringg

;

do_quote= BOOLEAN(!keep_intact||*begin!=stringg||begin[1]!=CUR_QUOTE);

if(do_quote)

{
MCHECK(1,"quote");
*mp++= CUR_QUOTE;
}



str_to_mb(begin,pargs[*p0+1],YES);
p0++;


if(do_quote)

{
MCHECK(1,"quote");
*mp++= CUR_QUOTE;
}




MCHECK(1,"stringg");*mp++= stringg

;

single_quote= double_quote= NO;
}

break;

case 060:

{
eight_bits HUGE*mp0;

p0+= 2;

MCHECK(4,"tokens for number of variable arguments");
*mp++= constant;
mp0= mp;
mp+= 
nsprintf((outer_char*)mp0,OC("%d"),1,n-m->nargs);
to_ASCII((outer_char HUGE*)mp0);
*mp++= constant;
}


break;

case 0173:

expanded|= ins_arg(0173,0175,INS_ARG_LIST);


break;

case 0133:

expanded|= ins_arg(0133,0135,INS_ARG_LIST);


break;

case 056:

{
eight_bits k;
boolean next_is_paste= BOOLEAN(*p0==paste);

for(k= m->nargs;k<n;k++)
{
pasting= cp_macro_arg(pargs,k,n,&xpn_argument,
(boolean)(last_was_paste&&k==m->nargs),
(boolean)(next_is_paste&&k==(eight_bits)(n-1)));
*mp++= 054;
}

if(*(mp-1)==054)mp--;

}


break;

default:
p0--;

macro_err(OC(_Xx("! Invalid token 0x%x ('%c') after '#'")),YES,*p0,isprint(*p0)?*p0:'.');
break;
}
}


break;

case stringg:
MCHECK(1,"\"");
*mp++= (eight_bits)a;

do
{
if(!TOKEN1(*mp= *p0++))
{
MCHECK(1,"id prefix");
*++mp= *p0++;
}
MCHECK(1,"8-bit token");
}
while(*mp++!=(eight_bits)a);

break;

case dot_const:
case begin_language:
MCHECK(2,"dot_const");
*mp++= (eight_bits)a;
*mp++= *p0++;
break;

default:

MCHECK(1,"single-byte token");
if((*mp++= (eight_bits)a)==paste)
last_was_paste= must_paste= YES;
break;
}
}


else

{
eight_bits k= *p0++;

if(a==MACRO_ARGUMENT)
{
pasting= cp_macro_arg(pargs,k,n,&xpn_argument,
last_was_paste,(boolean)(*p0==paste));
}
else
{
last_was_paste= NO;

MCHECK(2,"nonargument macro token");

*mp++= (eight_bits)a;
*mp++= k;

if(a==0320&&k=='\0')
{
MCHECK(4,"line info");
memcpy(mp,p0,4);
mp+= 4;
p0+= 4;
}
}
}


}
}




if(must_paste)

{
m_end= mp;



copy_and_paste(m_start,m_end);


for(mp1= mp,mp= m_start,mp0= m_end;mp0<mp1;)
*mp++= *mp0++;
}



if(max_n>0)
max_stmt+= max_n;

xpn_before(m_start,xids,pcur_byte,pthe_end,multilevels);
#if 0
if(must_paste)
#endif
expanded= YES;

}



if(!m->recursive)
unsave_name;
}
else
{

MCHECK(2,"ordinary id");
*mp++= a0;
*mp++= a1;



if(a0>=0250)
{
int n= 2+4*1;

MCHECK(n,"module defn");
while(n-->0)
*mp++= *p++;
}
}
}


}


done_expanding:
FREE_MEM(pargs,"pargs",max_margs,eight_bits HUGE*);
return expanded;

}


SRTN
dbg_macs FCN((n,start,end))
sixteen_bits n C0("")
eight_bits HUGE*start C0("")
eight_bits HUGE*end C1("")
{
printf("%lu = (0x%x->0x%x) <<%lu>>:  ",
end-start,start,end,start-macrobuf);
find_n(n);
}


SRTN
cpy_op FCN((s))
CONST outer_char HUGE*s C1("String such as \.{++}.")
{
MCHECK(2,"cpy_op");

while(*s)
*mp++= XORD(*s++);

copy_state= MISCELLANEOUS;
}


eight_bits HUGE*
str_to_mb FCN((begin_arg,end_arg,esc_chars))
CONST eight_bits HUGE*begin_arg C0("Beginning of string.")
CONST eight_bits HUGE*end_arg C0("End of string.")
boolean esc_chars C1("Insert escape characters?")
{
eight_bits HUGE*mp0= mp;
sixteen_bits c;

copy_state= MISCELLANEOUS;

while(begin_arg<end_arg)
{
if(TOKEN1(c= *begin_arg++))
{


switch(c)
{
case ignore:
break;



CPY_OP(plus_plus,"++");
CPY_OP(minus_minus,"--");
CPY_OP(minus_gt,C_LIKE(language)?"->":".EQV.");
CPY_OP(gt_gt,">>");
CPY_OP(eq_eq,"==");
CPY_OP(lt_lt,"<<");
CPY_OP(gt_eq,">=");
CPY_OP(lt_eq,"<=");
CPY_OP(not_eq,"!=");
CPY_OP(and_and,"&&");
CPY_OP(or_or,"||");
CPY_OP(star_star,"**");
CPY_OP(slash_slash,"//");
CPY_OP(ellipsis,C_LIKE(language)?"...":".XOR.");

case dot_const:
cpy_op(OC("."));
{
ASCII*symbol= dots[*begin_arg++].symbol;

cpy_op(to_outer(symbol));
to_ASCII((outer_char*)symbol);
}
cpy_op(OC("."));
break;



case join:
copy_state= UNBREAKABLE;
break;

case constant:
if(copy_state==NUM_OR_ID)

{
MCHECK(1,"' '");*mp++= 040;
}



{
if(!keep_intact&&c==stringg)esc_certain_chars(*begin_arg++,YES);


while(*begin_arg!=(eight_bits)c)
{
MCHECK(1,"constant");
*mp++= *begin_arg++;
}

if(!keep_intact&&c==stringg)
esc_certain_chars((sixteen_bits)*(--mp),YES);


begin_arg++;
}


copy_state= NUM_OR_ID;
break;

case stringg:

{
if(!keep_intact&&c==stringg)esc_certain_chars(*begin_arg++,YES);


while(*begin_arg!=(eight_bits)c)
{
MCHECK(1,"constant");
*mp++= *begin_arg++;
}

if(!keep_intact&&c==stringg)
esc_certain_chars((sixteen_bits)*(--mp),YES);


begin_arg++;
}


copy_state= MISCELLANEOUS;
break;

case 073:
if(R77_or_F)
{

{
MCHECK(3,"\";\"");
*mp++= constant;
*mp++= 073;
*mp++= constant;
}

;
break;
}

default:
esc_certain_chars(c,esc_chars);
if(copy_state!=VERBATIM)copy_state= MISCELLANEOUS;
break;
}


}
else
{
name_pointer np;

if(copy_state==NUM_OR_ID)

{
MCHECK(1,"' '");*mp++= 040;
}



if(c==MACRO_ARGUMENT)

{
outer_char temp[10];
int n;

n= 
nsprintf(temp,OC("$%d"),1,*begin_arg++);
to_ASCII(temp);
MCHECK(n,"%arg");
STRCPY(mp,temp);
mp+= n;
}


else

{
c= IDENTIFIER(c,*begin_arg++);

switch(c/MODULE_NAME)
{
case 0:
np= name_dir+c;

{
TRUNC HUGE*s;
ASCII HUGE*pc= np->byte_start;

if(*pc!=BP_MARKER)
{
CONST ASCII HUGE*end;

PROPER_END(end);
copy_id((CONST ASCII HUGE*)pc,end,"copied id");
}
else
{
s= ((BP HUGE*)pc)->Root;
copy_id(s->id,s->id_end,"copied id");
}
}


break;

case 1:
MCHECK(5,"macro name");

*mp++= 043;
*mp++= 074;

c-= MODULE_NAME;

np= name_dir+c;

if(np->equiv!=(EQUIV)text_info)

{
TRUNC HUGE*s;
ASCII HUGE*pc= np->byte_start;

if(*pc!=BP_MARKER)
{
CONST ASCII HUGE*end;

PROPER_END(end);
copy_id((CONST ASCII HUGE*)pc,end,"copied id");
}
else
{
s= ((BP HUGE*)pc)->Root;
copy_id(s->id,s->id_end,"copied id");
}
}


else if(c!=UNNAMED_MODULE)
*mp++= 077;


*mp++= 0100;
*mp++= 076;
break;

default:
if(c==MODULE_NUM)
begin_arg+= 4*1;

break;
}
}



copy_state= NUM_OR_ID;
}
}

*mp= '\0';
return mp0;
}


SRTN
esc_certain_chars FCN((c,esc_chars))
sixteen_bits c C0("Character to be maybe escaped.")
boolean esc_chars C1("Do we escape them?")
{
if(esc_chars)
if(C_LIKE(language))
{
if(c==0134||c==042)
{
MCHECK(1,"'\\'");
*mp++= 0134;
}
}
else if(R77_or_F)
{
if(c==047)
{
MCHECK(1,"doubled quote");
*mp++= (eight_bits)c;

}
}
else
{
if(c==042)
{
MCHECK(1,"'\"'");
*mp++= (eight_bits)c;
}
}


MCHECK(1,"escaped character");
*mp++= (eight_bits)c;
}


SRTN
i_len_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
int m,num;

CHK_ARGS("$LEN",1);

m= (int)(pargs[1]-pargs[0]-5);



num= 
nsprintf((outer_char HUGE*)mp,OC("%d"),1,m);
MCHECK(num,"_len_");
to_ASCII((outer_char HUGE*)mp);
mp+= num;
}


SRTN
i_verbatim_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p,delim[2];
eight_bits quote_char[3];

CHK_ARGS("$VERBATIM",1);

if(*(p= pargs[0]+1)!=stringg)
{
MUST_QUOTE("$VERBATIM",p,pargs[1]);
return;
}

STRNCPY(delim,"\0\0",2);
STRNCPY(quote_char,"\42\0\0",3);


switch(language)
{
case FORTRAN:
quote_char[0]= 047;
break;

case FORTRAN_90:
quote_char[1]= 047;
break;

case TEX:
return;

default:
break;
}


MCHECK(1,"string token");
*mp++= *p++;


delim[0]= *p;

if(STRSPN(delim,quote_char))
p++;
else
delim[0]= stringg;

while(*p!=stringg)
{
MCHECK(1,"verbatim token");
*mp++= *p++;
}


if(STRSPN(delim,quote_char))
*(mp---1)= stringg;
}


SRTN
i_unstring_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p,delim[2];
eight_bits quote_char[3];

CHK_ARGS("$UNSTRING",1);

if(*(p= pargs[0]+1)!=stringg)
{
MUST_QUOTE("$UNSTRING",p,pargs[1]);
return;
}

STRNCPY(delim,"\0\0",2);
STRNCPY(quote_char,"\42\0\0",3);


switch(language)
{
case FORTRAN:
quote_char[0]= 047;
break;

case FORTRAN_90:
quote_char[1]= 047;
break;

case TEX:
return;

default:
break;
}


p++;


delim[0]= *p;

if(STRSPN(delim,quote_char))
p++;
else
delim[0]= stringg;

while(*p!=stringg)
{
MCHECK(1,"verbatim token");
*mp++= *p++;
}


if(STRSPN(delim,quote_char))
mp--;
}


SRTN
must_quote FCN((name,p,p1))
CONST outer_char*name C0("")
eight_bits HUGE*p C0("")
eight_bits HUGE*p1 C1("")
{

macro_err(OC("! Argument of %s must be a quoted string"),YES,name);


MCHECK(p1-p,"copy quotes");
while(p<p1)*mp++= *p++;
}


SRTN
i_translit_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
int k;

CHK_ARGS("$TRANSLIT",3);

for(k= 0;k<2;k++)
if(*(pargs[k]+1)!=stringg)
macro_err(OC("! Argument %d of $TRANSLIT \
must be a string"),YES,k);

translit((ASCII HUGE*)(pargs[0]+2),
(ASCII HUGE*)(pargs[1]+2),
(ASCII HUGE*)(pargs[2]+2));
}


SRTN
translit FCN((s,from,to))
CONST ASCII HUGE*s C0("String to be transliterated")
CONST ASCII HUGE*from C0("Characters to replace")
CONST ASCII HUGE*to C1("Replace by")
{
short code[128],i,n;
ASCII end_char= *s++;
ASCII c,cfrom,cto;
ASCII esc_achar PROTO((CONST ASCII HUGE*HUGE*));

CHECK_QUOTE(from,1);
CHECK_QUOTE(to,2);


MCHECK(1,"stringg");*mp++= stringg

;


for(i= 0;i<128;i++)
code[i]= i;


while(*(to+1)!=stringg)
{
if(*(from+1)==stringg)break;


if((cfrom= *from++)==0134)cfrom= esc_achar(&from);
if((cto= *to++)==0134)cto= esc_achar(&to);

code[cfrom]= cto;
}



if(*(from+1)!=stringg)
while(*(from+1)!=stringg)
{
if((cfrom= *from++)==0134)cfrom= esc_achar(&from);

code[cfrom]= -1;
}


while(*(s+1)!=stringg)
{
if((c= *s++)==0134)c= esc_achar(&s);

if((n= code[c])==-1)continue;
MCHECK(1,"_translit_");
*mp++= (eight_bits)n;
}


MCHECK(1,"stringg");*mp++= stringg

;
}


SRTN
i_getenv_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
ASCII HUGE*p;
outer_char*pvar,HUGE*t;
outer_char HUGE*temp,HUGE*temp_end;


#if !HAVE_GETENV

macro_err(OC("Sorry, this machine doesn't support getenv"),YES);
#else

CHK_ARGS("$GETENV",1);


temp= GET_MEM("_getenv_:temp",N_ENVBUF,outer_char);
temp_end= temp+N_ENVBUF;

for(p= (ASCII HUGE*)(pargs[0]+3),t= temp;*(p+1)!=stringg;)
SAVE_ENV(*p++);

SAVE_ENV('\0');

if((pvar= GETENV((CONST char*)temp))!=NULL)mcopy(pvar);

FREE_MEM(temp,"_getenv_:temp",N_ENVBUF,outer_char);

#endif 
}


boolean cp_macro_arg FCN((pargs,k,n,pxpn_argument,
last_was_paste,next_is_paste))
PARGS pargs C0("")
eight_bits k C0("Current argument to process")
eight_bits n C0("")
boolean HUGE*pxpn_argument C0("")
boolean last_was_paste C0("")
boolean next_is_paste C1("")
{
boolean pasting;
eight_bits HUGE*begin_arg,HUGE*end_arg,HUGE*mp0= NULL;



if(k>=n)
{
pargs[k]= pargs[n];
pargs[k+1]= pargs[n]+1;
}

begin_arg= pargs[k]+1;



while(*begin_arg==012)begin_arg++;

end_arg= pargs[k+1];



if(last_was_paste||next_is_paste)pasting= YES;
else
{
pasting= NO;
mp0= mp;
}




if(begin_arg==end_arg)
{
if(pasting)
{
MCHECK(1,"null character");
*mp++= '\0';
}
}
else
{
MCHECK(end_arg-begin_arg,"argument tokens");
while(begin_arg<end_arg)*mp++= *begin_arg++;
}






if(!*pxpn_argument)
*pxpn_argument= YES;
else if(!pasting)
xpn_before(mp0,NULL,NULL,NULL,NO);

return pasting;
}


boolean ins_arg FCN((cleft,cright,
pargs,m,n,pp0,ppasting,pxpn_argument,last_was_paste))
ASCII cleft C0("")
ASCII cright C0("")
PARGS pargs C0("")
text_pointer m C0("")
eight_bits n C0("")
eight_bits HUGE*HUGE*pp0 C0("")
boolean*ppasting C0("")
boolean*pxpn_argument C0("")
boolean last_was_paste C1("")
{
int k;
boolean next_is_paste= BOOLEAN(*(*pp0)==paste);
eight_bits HUGE*pp;
eight_bits HUGE*mp0= mp;
eight_bits HUGE*p00= (*pp0);
boolean fixed= BOOLEAN(cleft==0133);

WHILE()
if(*(*pp0)==cright)
{
break;
}
else if(TOKEN1(*(*pp0)))(*pp0)++;
else(*pp0)+= 2;

pp= xmac_text(mp0,p00,(*pp0)++);
k= neval(pp,mp);

mp= mp0;


if(k==0)
{
*mp++= 043;
*mp++= 0173;

while(p00<*pp0)
*mp++= *p00++;

return YES;
}

if(k<=0)
{
outer_char temp[5];


nsprintf(temp,OC("#%c0%c"),3,5,XCHR(cleft),XCHR(cright));
MCHECK(4,temp);
*mp++= constant;
mp0= mp;
mp+= 
nsprintf((outer_char*)mp0,OC("%d"),1,n-(fixed?0:m->nargs));
to_ASCII((outer_char HUGE*)mp0);
*mp++= constant;
}
else
*ppasting= cp_macro_arg(pargs,(eight_bits)(k-1+(fixed?0:m->nargs)),
n,pxpn_argument,last_was_paste,next_is_paste);

return NO;
}


SRTN
xpn_before FCN((mp0,xids,pcur_byte,pthe_end,multilevels))
eight_bits HUGE*mp0 C0("Remember this end of |macro_buf|.")
XIDS HUGE*xids C0("")
eight_bits HUGE**pcur_byte C0("Pointer to |cur_byte|.")
eight_bits HUGE**pthe_end C0("End of buffer.")
boolean multilevels C1("")
{
eight_bits HUGE*mp1;

mp1= xmac_buf(mp0,xids,pcur_byte,pthe_end,multilevels);


while(mp1<mp)
*mp0++= *mp1++;


mp= mp0;
}


boolean
x_int_fcn FCN((id,n,pargs))
sixteen_bits id C0("Token for internal function.")
int n C0("Number of arguments")
PARGS pargs C1("Array of pointers to arguments.")
{
INTERNAL_FCN HUGE*f;

for(f= internal_fcns;f->len!=0;f++)
if(f->id==id)
{
(*f->expnd)(n,pargs);

return YES;
}

return NO;
}


eight_bits HUGE*
copy_and_paste FCN((m_start,m_end))
eight_bits HUGE*m_start C0("Start of range.")
eight_bits HUGE*m_end C1("End of range.")
{
eight_bits HUGE*mp0;
eight_bits a0;
eight_bits HUGE*m_last= m_start;

for(mp0= m_start;mp0<m_end;)
{
if(TOKEN1(a0= *mp0))
{
if(a0==paste)
{
eight_bits HUGE*p;

p= mp;

paste1(m_last,m_start);
mp0= paste1(++mp0,m_end);


divert((ASCII HUGE*)p,(ASCII HUGE*)mp,STOP);

scan_repl(macro,STOP);


mp= m_last;
m_last= copy_and_paste(cur_text->tok_start,tok_ptr);


text_ptr= cur_text;
mx_tok_ptr= tok_ptr;
tok_ptr= text_ptr->tok_start;
}


else
{
if(a0==ignore)
{
mp0++;
continue;
}

m_last= mp;

switch(a0)
{
case constant:
case stringg:
MCHECK(1,"|constant| or |stringg|");
*mp++= *mp0++;

do
{
*mp= *mp0++;
MCHECK(1,"text of \
|constant| or |stringg|");
}
while(*mp++!=a0);

break;

case dot_const:
case begin_language:
MCHECK(2,"dot_const");
*mp++= *mp0++;
*mp++= *mp0++;
break;

default:
MCHECK(1,"ASCII token");
*mp++= *mp0++;
break;
}
}
}
else
{
m_last= mp;
MCHECK(2,"two-byte token");
*mp++= *mp0++;*mp++= *mp0++;
}
}

return m_last;
}


eight_bits HUGE*
paste1 FCN((p0,begin_or_end))
eight_bits HUGE*p0 C0("Beginning of tokens to be expanded.")
eight_bits HUGE*begin_or_end C1("")
{
eight_bits a0,a1;
sixteen_bits a;

if(p0==begin_or_end)
{

macro_err(OC("! Missing argument to token-paste operation. Null assumed"),YES);
return p0;
}

if(TOKEN1(a0= *p0++))
switch(a0)
{
case ignore:break;

case constant:
case stringg:

while((a1= *p0++)!=a0)
{
MCHECK(1,"stuff between tokens");
*mp++= a1;
}
break;

case dot_const:
case begin_language:
MCHECK(2,"dot_const");
*mp++= a0;
*mp++= *p0++;
break;

default:
MCHECK(1,"default ASCII token");
*mp++= a0;
break;
}
else
{
a= IDENTIFIER(a0,*p0++);

if(a<MODULE_NAME)
{
name_pointer np;

np= name_dir+a;

{
TRUNC HUGE*s;
ASCII HUGE*pc= np->byte_start;

if(*pc!=BP_MARKER)
{
CONST ASCII HUGE*end;

PROPER_END(end);
copy_id((CONST ASCII HUGE*)pc,end,"copied id");
}
else
{
s= ((BP HUGE*)pc)->Root;
copy_id(s->id,s->id_end,"copied id");
}
}


}
else{}
}

return p0;
}


SRTN
copy_id FCN((start,end,descr))
CONST ASCII HUGE*start C0("Beginning of identifier name.")
CONST ASCII HUGE*end C0("End of identifier name.")
CONST char*descr C1("")
{
CONST ASCII HUGE*j;

MCHECK(end-start,descr);

for(j= start;j<end;)
*mp++= (eight_bits)(*j++);
}


SRTN
mbuf_full FCN((n,reason))
unsigned long n C0("Number of bytes requested.")
CONST outer_char reason[]C1("Reason for request.")
{

macro_err(OC("! Macro buffer full; %lu byte(s) requested for %s"),YES,n,reason);
OVERFLW("macro buffer bytes","mb");
}


SRTN
mcheck0 FCN((n,reason))
unsigned long n C0("Number of bytes requested.")
CONST outer_char reason[]C1("Reason for request.")
{
MCHECK(n,reason);
}


eight_bits HUGE*
xmacro FCN((macro_text,pcur_byte,pthe_end,multilevels,mp0))
text_pointer macro_text C0("")
eight_bits HUGE**pcur_byte C0("Pointer to |cur_byte|.")
eight_bits HUGE**pthe_end C0("End of buffer.")
boolean multilevels C0("Read args through many levels?")
eight_bits HUGE*mp0 C1("Build the expansion beginning here in \
|macrobuf|.")
{
eight_bits HUGE*macro_start;
extern long cur_val;


mp= mp0;

MCHECK(2,"macro token");

if(macro_text->built_in)
{
*mp++= LEFT(cur_val,ID0);
*mp++= RIGHT(cur_val);
}
else
{
macro_start= macro_text->tok_start;
*mp++= *macro_start++;*mp++= *macro_start++;
}



if(macro_text->nargs>0||macro_text->var_args)
mp= args_to_macrobuf(mp,pcur_byte,pthe_end,multilevels,
(boolean)(macro_text->var_args));

return xmac_buf(mp0,NULL,pcur_byte,pthe_end,multilevels);


}


eight_bits HUGE*
args_to_macrobuf FCN((mp,pcur_byte,pthe_end,
multilevels,var_args))
eight_bits HUGE*mp C0("Next available position in |macro_buf|.")
eight_bits HUGE**pcur_byte C0("Pointer to |cur_byte|.")
eight_bits HUGE**pthe_end C0("End of buffer.")
boolean multilevels C0("Read through many levels?")
boolean var_args C1("Does macro have variable args?")
{
eight_bits c;
sixteen_bits id_token;
int bal= 0;

id_token= IDENTIFIER(*(mp-2),*(mp-1));


do
{
if(*pcur_byte==*pthe_end)
{
if(!(multilevels&&pop_level()))
{

macro_err(OC("! No ')' in call to macro \"%s\""),YES,name_of(id_token));
break;
}
}

MCHECK(1,"arg to macrobuf");
c= *mp++= *(*pcur_byte)++;

if(TOKEN1(c))

{
switch(c)
{
case stringg:
do
{
MCHECK(1,"string arg");
*mp= *(*pcur_byte)++;
}
while(*mp++!=stringg);
break;

case dot_const:
case begin_language:
MCHECK(1,"dot const");
*mp++= *(*pcur_byte)++;
break;

case 050:
bal++;
break;

case 051:
if(bal==0&&!var_args)
{

macro_err(OC("! Missing '(' in call to macro \"%s\""),YES,name_of(id_token));
goto done_copying;
}
else bal--;

break;
}
}


else
{

int n;

n= (c<0250?1:3+4*1);
MCHECK(n,"second id token");
while(n-->0)*mp++= *(*pcur_byte)++;
continue;
}
}
while(bal>0);

done_copying:
return mp;
}


eight_bits HUGE*
xmac_buf FCN((mp0,old_xids,pcur_byte,pthe_end,multilevels))
eight_bits HUGE*mp0 C0("Text to be expanded begins here.")
XIDS HUGE*old_xids C0("")
eight_bits HUGE**pcur_byte C0("Pointer to |cur_byte|.")
eight_bits HUGE**pthe_end C0("End of buffer.")
boolean multilevels C1("")
{
eight_bits HUGE*p,HUGE*p1;
XIDS xids;
XIDS HUGE*pid;

xids.level= 0;

if(xlevel>=MAX_XLEVELS)
{

macro_err(OC("! Macro outer recursion depth exceeded"),YES);

fatal(ERR_M,OC("!! BYE."),OC(""));
}

pid= pids[xlevel++]= old_xids?old_xids:&xids;


for(p= mp0,p1= mp;
x0macro(p,p1,pid,pcur_byte,pthe_end,multilevels);
p= p1,p1= mp);

xlevel--;

return p1;
}


eight_bits HUGE*
xmac_text FCN((mp0,start,end))
eight_bits HUGE*mp0 C0("")
eight_bits HUGE*start C0("")
eight_bits HUGE*end C1("")
{

for(mp= mp0;start<end;)
*mp++= *start++;


return xmac_buf(mp0,NULL,NULL,NULL,NO);
}


SRTN
i_meta_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p;

CHK_ARGS("$COMMENT",1);


p= pargs[0]+1;
if(!(*p==constant||*p==stringg))
{
arg_must_be_constant("$COMMENT");
return;
};


{
static eight_bits begin_C_meta[]= {constant,057,052,constant,'\0'};
eight_bits HUGE*p;


if(C_LIKE(language))
{
MCHECK0(4,"begin_C_meta");
for(p= begin_C_meta;*p;)*mp++= *p++;
}
else
{
MCHECK0(2,"begin_meta");
*mp++= begin_meta;
*mp++= begin_meta;
}
}

;

*(p+1)= *(pargs[1]-2)= 040;

do
{
MCHECK0(1,"_meta_");
*mp++= *p++;
}
while(p<pargs[1]);


{
static eight_bits end_C_meta[]= "\52\57";
eight_bits HUGE*p;


if(C_LIKE(language))
{
MCHECK0(2,"end_C_meta");
for(p= end_C_meta;*p;)*mp++= *p++;
}
else
{
MCHECK0(1,"end_meta");
*mp++= end_meta;
}
}

;
}


SRTN
i_assert_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p;
eight_bits HUGE*pp;
eight_bits HUGE*mp0;
boolean e;

CHK_ARGS("$ASSERT",1);

pp= xmac_text(mp0= mp,p= pargs[0]+1,pargs[1]);
e= eval(pp,mp);
mp= mp0;

if(e)
return;

mp= str_to_mb(p,pargs[1],YES);


macro_err(OC("! $ASSERT(%s) failed"),NO,to_outer((ASCII HUGE*)mp));

fatal(ERR_M,OC(""),OC("Processing ABORTED!"));
}


SRTN
i_error_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits c;
eight_bits HUGE*t,HUGE*p,HUGE*temp;

CHK_ARGS("$ERROR",1);


p= pargs[0]+1;
if(!(*p==constant||*p==stringg))
{
arg_must_be_constant("$ERROR");
return;
};

temp= GET_MEM("_error_:temp",N_MSGBUF,eight_bits);

for(c= *p++,t= temp;*p!=c;)*t++= *p++;
*t= '\0';


macro_err(OC("%cUSER ERROR:  %s"),NO,beep(1),to_outer((ASCII HUGE*)temp));
FREE_MEM(temp,"_error_:temp",N_MSGBUF,eight_bits);
}


SRTN
i_routine_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
name_pointer np;
CONST ASCII HUGE*f,HUGE*end;

CHK_ARGS("$ROUTINE",0);

if(!(is_RATFOR_(language)))return;
if(!RAT_OK(""))
confusion(OC("_routine_"),OC("Language shouldn't be Ratfor here"));

if(cur_fcn==NO_FCN)
{
MCHECK0(1,"'?'");
*mp++= 077;
return;
}

np= name_dir+cur_fcn;
end= proper_end(np);

MCHECK0(end-np->byte_start,"_routine_");
for(f= np->byte_start;f<end;)
*mp++= *f++;
}



SRTN
i_lowercase_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p= pargs[0]+1,HUGE*p1= pargs[1];

CHK_ARGS("$LC",1);

if(*p!=stringg)
{
MUST_QUOTE("$L",p,p1);
return;
}

MCHECK(p1-p,"lowercase");

for(;p<p1;p++)
*mp++= A_TO_LOWER(*p);
}

SRTN
i_uppercase_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p= pargs[0]+1,HUGE*p1= pargs[1];

CHK_ARGS("$UC",1);

if(*p!=stringg)
{
MUST_QUOTE("$U",p,p1);
return;
}

MCHECK(p1-p,"uppercase");

for(;p<p1;p++)
*mp++= A_TO_UPPER(*p);
}


SRTN
i_nargs_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
text_pointer m;
eight_bits*pa= pargs[0]+1;

if((m= MAC_LOOKUP(IDENTIFIER(pa[0],pa[1])))==NULL)
{

macro_err(OC("! Argument of $NARGS is not a WEB macro"),YES);
put_long(-1L);
}
else put_long((long)m->nargs);
}


SRTN
put_long FCN((l))
long l C1("")
{
outer_char temp[100];
int n;

n= 
nsprintf(temp,OC("%ld"),1,l);
to_ASCII(temp);
MCHECK(n+2,"long");
*mp++= constant;
STRCPY(mp,temp);
mp+= n;
*mp++= constant;
}


SRTN
chk_args FCN((name,proper_num,actual_num,pargs))
outer_char*name C0("")
int proper_num C0("")
int actual_num C0("")
PARGS pargs C1("")
{
if(proper_num>=0)
{
if(actual_num!=proper_num)

macro_err(OC("Built-in macro %s should be called with %d \
argument(s), not %d"),NO,name,proper_num,actual_num);
}
}


SRTN
see_macro FCN((p0,p1))
CONST eight_bits HUGE*p0 C0("Beginning of token list.")
CONST eight_bits HUGE*p1 C1("End of token list.")
{
int k,l,num_tokens;
ASCII HUGE*q0;
sixteen_bits HUGE*tokens;
ASCII HUGE*mtext;

num_tokens= PTR_DIFF(int,p1,p0);

tokens= GET_MEM("see_macro:tokens",num_tokens,sixteen_bits);
mtext= GET_MEM("see_macro:mtext",MTEXT_SIZE,ASCII);

k= rcvr_macro(mtext,tokens,p0,p1);

printf(">> \"");
for(l= 0;l<k;++l)
printf(_Xx("%x "),tokens[l]);

printf("\"\n== \"");
for(q0= mtext;q0<mtext+k;++q0)
putchar(XCHR(*q0));
puts("\"");

FREE_MEM(mtext,"see_macro:mtext",MTEXT_SIZE,ASCII);
if(num_tokens)FREE_MEM(tokens,"see_macro:tokens",num_tokens,sixteen_bits);
}


int
rcvr_macro FCN((mtext,tokens,p0,p1))
ASCII HUGE*mtext C0("Holds readable translation of the	text.")
sixteen_bits HUGE*tokens C0("Slightly translated tokens.")
CONST eight_bits HUGE*p0 C0("")
CONST eight_bits HUGE*p1 C1("")
{
ASCII HUGE*mtext_end= mtext+MTEXT_SIZE;
ASCII HUGE*p;
ASCII HUGE*j;
int k;
sixteen_bits a;

for(k= 0,p= mtext;p0<p1;k++)
{
if(TOKEN1(a= *p0++))
switch(a)
{
case paste:
SAVE_MTEXT(043);SAVE_MTEXT(043);
break;

default:
SAVE_MTEXT(a);
break;
}
else if(a==MACRO_ARGUMENT)
{
SAVE_MTEXT(044);
a= (sixteen_bits)(-(*p0));
SAVE_MTEXT(*p0+++060);
}
else
{
a= IDENTIFIER(a,*p0++);

if(a<MODULE_NAME)
{
CONST ASCII HUGE*end;
name_pointer np= name_dir+a;

PROPER_END(end);

for(j= np->byte_start;j<end;++j)
{SAVE_MTEXT(*j);}
}
else
{
SAVE_MTEXT(0115);
}
}

if(tokens)tokens[k]= a;
}

return k;
}


SRTN
i_xflag_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p= pargs[0]+1;
outer_char temp[100],*t= temp;

CHK_ARGS("$XX",1);

if(*p++!=constant)
{

macro_err(OC("Argument of $XX is not a numerical constant"),NO);
return;
}

while(*p!=constant)
*t++= XCHR(*p++);

TERMINATE(t,0);

xflag= ATOI(temp);
}


SRTN
i_dumpdef_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
int k;
eight_bits HUGE*p,HUGE*mp0,HUGE*mp1,HUGE*mp2;
sixteen_bits a;
extern long cur_val;
eight_bits HUGE*q0,HUGE*q1;
ASCII HUGE*mtext= GET_MEM("rcvr_macro:mtext",MTEXT_SIZE,ASCII);
ASCII HUGE*mx,HUGE*mx0;
name_pointer np;

CHK_ARGS("$DUMPDEF",INT_MIN);

for(k= 0;k<n;k++)
{
text_pointer m;

if(xflag)
printf("\n");

mp0= mp;

p= pargs[k]+1;

while(IS_WHITE(*p)||*p==012)p++;

a= IDENTIFIER(*p,*(p+1));

if((m= MAC_LOOKUP(a))==NULL)
{
str_to_mb(p,pargs[k+1],NO);
printf("NOT WEB MACRO:  %s\n",(char*)to_outer((ASCII*)mp0));
}
else

{
p+= 2;


np= name_dir+a;

for(mx= mtext,mx0= np->byte_start;mx0<(np+1)->byte_start;)
*mx++= *mx0++;

*mx++= '\0';
to_outer(mtext);


if(m->built_in)
{
cur_val= a;
STRCPY(mp0,"<built-in>");
mp= mp0+STRLEN(mp0)+1;
}
else
{
q0= m->tok_start+m->moffset;
q1= m->tok_start+m->nbytes;

str_to_mb(q0,q1,NO);
mp++;
to_outer((ASCII*)mp0);
}


printf("%s",(char*)mtext);

if(m->nargs||m->var_args)
{
eight_bits n;

printf("(");
for(n= 0;n<m->nargs;n++)
printf("$%d%s",(int)n,
CHOICE(n==(eight_bits)(m->nargs-1),"",","));
if(m->var_args)printf("%s...",
CHOICE(m->nargs,",",""));
printf(")");
}

printf(" = %s\n",(char*)(mp= mp0));

if(xflag)
{

mp0= mp;
str_to_mb(p,pargs[k+1],NO);
mp++;
to_outer((ASCII*)mp0);


mp1= xmacro(m,&p,&pargs[k+1],NO,mp);
*mp++= '\0';
mp2= mp;
str_to_mb(mp1,mp,NO);
mp++;
to_outer((ASCII*)mp2);

printf("%s%s = %s\n",(char*)mtext,(char*)mp0,(char*)(mp= mp2));

if(p!=pargs[k+1])

err0_print(ERR_M,OC("Extra text after macro call"),0);
}
}




mp= mp0;
}

FREE_MEM(mtext,"_dumpdef_:mtext",MTEXT_SIZE,ASCII);
}


SRTN
i_keyword_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
eight_bits HUGE*p= pargs[0]+1,HUGE*p1= pargs[1];

CHK_ARGS("$KEYWORD",1);

if(*p!=stringg)
{
MUST_QUOTE("$KEYWORD",p,p1);
return;
}

MCHECK(1,"stringg0");
*mp++= *p++;

x_keyword(&mp,macrobuf_end,p,p1-1,YES,YES,WEB_FILE);

MCHECK(1,"stringg1");
*mp++= stringg;
}


