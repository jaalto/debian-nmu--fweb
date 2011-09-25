#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/prod -A -# --F -= 1.62/Web/prod.c"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/prod.web"\
  CHANGE FILE:  (none)
#endif
#define _PROD_h   \

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

#define def_flag  ID_FLAG \

#define xref  equiv_or_xref \
 \
 \
 \

#define app(a)*(tok_ptr++)= a
#define APP_ID  app(id_flag+PTR_DIFF(sixteen_bits,id_lookup(id_first,id_loc,normal),name_dir))
#define app1(a)app(tok_flag+PTR_DIFF(sixteen_bits,(a)->trans,tok_start)) \

#undef expr  
#define expr  1 \

#undef unop  
#define unop  2 \

#undef binop  
#define binop  3 \

#define unorbinop  4 \

#define cast  5
#define question  6
#define lbrace  7
#define rbrace  8
#define decl_hd  9
#define comma  10
#define lpar  11
#define rpar  12
#define lbracket  13
#define rbracket  14
#define new_like  17
#define exp_op  18 \

#define max_math  19 \
 \

#define struct_hd  21
#define decl  20
#define label  22
#define stmt  23
#define functn  24
#define fn_decl  25
#define else_like  26
#define semi  27
#define colon  28
#define tag  29
#define if_hd  30
#define common_hd  31
#define read_hd  32
#define slashes  33
#define implicit_hd  34
#define lproc  35
#define rproc  36
#define ignore_scrap  37
#define for_hd  38
#define newline  39
#define language_scrap  40 \

#define do_like  55
#define for_like  56
#define if_like  57
#define int_like  58
#define case_like  59
#define sizeof_like  60
#define struct_like  61
#define typedef_like  62
#define define_like  63
#define common_like  64
#define read_like  65 \
 \

#define entry_like  66
#define implicit_like  67
#define assign_like  68
#define built_in  69 \

#define Rdo_like  70
#define endif_like  71
#define end_like  72
#define END_like  73
#define go_like  74
#define no_order  75
#define until_like  76
#define IF_like  77
#define IF_top  78
#define else_hd  79
#define ELSE_like  80
#define space  81
#define LPROC  82
#define UNOP  83
#define BINOP  84
#define COMMA  85
#define _EXPR  86
#define _EXPR_  87
#define EXPR_  88
#define Decl_hd  89
#define key_wd  90
#define program_like  91
#define CASE_like  92
#define modifier  93
#define class_like  94
#define op_like  95
#define proc_like  97
#define private_like  98
#define slash_like  99
#define fcn_hd  100
#define END_stmt  101
#define huge_like  102
#define imp_reserved  103
#define extern_like  104
#define while_do  105
#define template  106
#define langle  107
#define tstart  108
#define tlist  109
#define rangle  110
#define namespace  111
#define virtual  112
#define reference  113
#define kill_newlines  114 \

#define DFLUSH  if(dflush)puts(""); \

#define math_bin  (eight_bits)0345
#define math_rel  (eight_bits)0346 \

#define toggle_meta  (eight_bits)0347 \
 \

#define big_cancel  (eight_bits)0360
#define cancel  (eight_bits)0361 \
 \

#define indent  (eight_bits)0362
#define outdent  (eight_bits)0363
#define opt  (eight_bits)0364
#define backup  (eight_bits)0365
#define break_space  (eight_bits)0366
#define force  (eight_bits)0367
#define big_force  (eight_bits)0370 \

#define out_force  (eight_bits)0371 \

#define end_translation  (eight_bits)0377
#define trans  trans_plus.Trans
#define no_math  2
#define yes_math  1
#define maybe_math  0 \

#define id_flag  ID_FLAG
#define res_flag  2*id_flag
#define mod_flag  ((sixteen_bits)(3*(sixteen_bits)id_flag)) \

#define tok_flag  ((sixteen_bits)(4*(sixteen_bits)id_flag))
#define inner_tok_flag  ((sixteen_bits)(5*(sixteen_bits)id_flag)) \
 \
 \

#define freeze_text  *(++text_ptr)= tok_ptr \

#define b_app2(a)b_app1(a);b_app1(a+1)
#define b_app3(a)b_app2(a);b_app1(a+2)
#define b_app4(a)b_app3(a);b_app1(a+3) \

#define INI_MATHNESS(p)((p)->mathness%4) \

#define LAST_MATHNESS(p)((p)->mathness/4) \
 \

#define FIRST_ID(p)(((tok0= first_id(p->trans))&&tok0!=050)?name_dir+tok0- \
id_flag:name_dir) \

#define cat0  pp->cat
#define cat1  (pp+1)->cat
#define cat2  (pp+2)->cat
#define cat3  (pp+3)->cat
#define cat4  (pp+4)->cat
#define cat5  (pp+5)->cat \

#define indent_force  b_app(indent);b_app(force) \
 \

#define OPT9  APP_SPACE;app(opt);app(071) \

#define APP_SPACE  APP_STR("\\ ") \

#define INDENT  if(!indented) \
{ \
b_app(indent); \
indented= YES; \
} \

#define OUTDENT  if(indented) \
{ \
b_app(outdent); \
indented= NO; \
} \

#define MAX_OP_TOKENS  5 \
 \

#define REDUCE(j,k,c,d,n)reduce(j,k,(eight_bits)(c),d,(RULE_NO)(n))
#define SQUASH(j,k,c,d,n)squash(j,k,c,d,(RULE_NO)(n)) \

#define MAX_CYCLES  500
#define OUT_WIDTH  40



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



typedef unsigned long RULE_NO;




#include "p_type.h"








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



IN_PROD boolean dflush PSET(NO);



EXTERN long max_scraps;
EXTERN scrap HUGE*scrp_info;
EXTERN scrap_pointer scrp_end;

EXTERN scrap_pointer pp;
EXTERN scrap_pointer scrp_base;
EXTERN scrap_pointer scrp_ptr;
EXTERN scrap_pointer lo_ptr;
EXTERN scrap_pointer hi_ptr;

EXTERN scrap_pointer mx_scr_ptr;



IN_PROD int cur_mathness,ini_mathness,last_mathness;



IN_PROD sixteen_bits tok0;



IN_PROD PARSING_MODE translate_mode;



IN_PROD boolean active_space PSET(NO);
IN_PROD boolean in_LPROC PSET(NO);
IN_PROD boolean expanded_lproc PSET(NO);



extern boolean did_arg;



IN_PROD int in_prototype PSET(NO);

IN_PROD int indented PSET(NO);



IN_PROD boolean in_function PSET(NO);



IN_PROD boolean typedefing PSET(NO);


IN_PROD boolean kill_nl PSET(NO);






IN_PROD boolean forward_exp PSET(NO);



IN_PROD int fcn_level PSET(0);



IN_PROD text_pointer label_text_ptr[50];



IN_PROD boolean found_until PSET(NO);



IN_PROD int indent_level PSET(0);
IN_PROD int loop_num[50],max_loop_num PSET(0);





IN_PROD int containing PSET(0);





#if(part != 2)

#ifdef DEBUG

SRTN
prn_cat FCN((c))
eight_bits c C1("Category.")
{
switch(c)
{
case language_scrap:printf("@L");break;
case expr:printf("expr");break;
case exp_op:printf("^^");break;
case _EXPR:printf("$_EXPR");break;case EXPR_:printf("$EXPR_");break;case _EXPR_:printf("$_EXPR_");break;
case new_like:printf("new_like");break;
case stmt:printf("stmt");break;
case decl:printf("decl");break;
case decl_hd:printf("decl_hd");break;
case Decl_hd:printf("$Decl_hd");break;
case struct_hd:printf("struct_hd");break;
case functn:printf("functn");break;
case fn_decl:printf("fn_decl");break;
case fcn_hd:printf("fcn_hd");break;
case else_like:printf("else");break;
case ELSE_like:printf("ELSE");break;
case if_hd:printf("if_hd");break;
case IF_top:printf("IF_top");break;
case else_hd:printf("else_hd");break;
case for_hd:printf("for_hd");break;
case unop:printf("unop");break;
case UNOP:printf("$UNOP_");break;
case binop:printf("binop");break;
case BINOP:printf("$_BINOP_");break;
case unorbinop:printf("unorbinop");break;
case semi:printf(";");break;
case colon:printf(":");break;
case comma:printf(",");break;
case COMMA:printf("$_COMMA_");break;
case question:printf("?");break;
case tag:printf("tag");break;
case cast:printf("cast");break;
case lpar:printf("(");break;
case rpar:printf(")");break;
case lbracket:printf("[");break;
case rbracket:printf("]");break;
case lbrace:printf("{");break;
case rbrace:printf("}");break;
case common_hd:printf("common_hd");break;
case read_hd:printf("read_hd");break;
case slash_like:printf("slash");break;
case private_like:printf("private");break;
case slashes:printf("slashes");break;
case lproc:printf("#{");break;
case LPROC:printf("LPROC");break;
case rproc:printf("#}");break;
case ignore_scrap:printf("ignore");break;

case define_like:printf("define");break;
case no_order:printf("no_order");break;
case do_like:printf("do");break;
case while_do:printf("while");break;
case Rdo_like:printf("Rdo");break;
case if_like:printf("if");break;
case IF_like:printf("IF");break;
case for_like:printf("for");break;
case program_like:printf("program");break;
case int_like:printf("int");break;
case modifier:printf("modifier");break;
case huge_like:printf("huge");break;
case CASE_like:printf("CASE");break;
case case_like:printf("case");break;
case sizeof_like:printf("sizeof");break;
case op_like:printf("op");break;
case proc_like:printf("proc");break;
case class_like:printf("class");break;
case struct_like:printf("struct");break;
case typedef_like:printf("typedef");break;
case imp_reserved:printf("imp_rsrvd");break;
case extern_like:printf("extern");break;
case common_like:printf("common");break;
case read_like:printf("read");break;
case entry_like:printf("entry");break;
case implicit_like:printf("implicit");break;
case implicit_hd:printf("implicit_hd");break;
case built_in:printf("built_in");break;
case endif_like:printf("endif");break;
case end_like:printf("end");break;
case END_like:printf("END");break;
case END_stmt:printf("END_stmt");break;
case go_like:printf("go");break;
case newline:printf("\n");break;
case label:printf("label");break;
case space:printf("space");break;
case until_like:printf("until");break;
case template:printf("template");break;
case langle:printf("langle");break;
case rangle:printf("rangle");break;
case tstart:printf("tstart");break;
case tlist:printf("tlist");break;
case namespace:printf("namespace");break;
case virtual:printf("virtual");break;
case reference:printf("ref");break;
case kill_newlines:printf("killnl");break;

case 0:printf("zero");break;
default:printf("UNKNOWN(%i)",c);break;
}

DFLUSH;
}

#endif 



#ifdef DEBUG

SRTN
prn_text FCN((p))
text_pointer p C1("The token list.")
{
token_pointer j;
sixteen_bits r;

if(p>=text_ptr)
printf("BAD");
else for(j= *p;j<*(p+1);j++)
{
r= (sixteen_bits)(*j%id_flag);

switch(*j/id_flag)
{
case 1:printf("\\\\{");prn_id((name_dir+r));printf("}");break;

case 2:printf("\\&{");prn_id((name_dir+r));printf("}");break;

case 3:printf("<");prn_id((name_dir+r));printf(">");break;

case 4:printf("[[%d]]",r);break;
case 5:printf("|[[%d]]|",r);break;
default:

switch(r)
{
case math_bin:printf("\\mathbin}");break;
case math_rel:printf("\\mathrel}");break;
case big_cancel:printf("[ccancel]");break;
case cancel:printf("[cancel]");break;
case indent:printf("[indent]");break;
case outdent:printf("[outdent]");break;
case backup:printf("[backup]");break;
case opt:printf("[opt]");break;
case break_space:printf("[break]");break;
case force:printf("[force]");break;
case big_force:printf("[fforce]");break;
case end_translation:printf("[quit]");break;
default:putxchar(XCHR(r));
}

;
}
}

DFLUSH;
}

SRTN
prn_trans FCN((p))
scrap_pointer p C1("")
{
prn_text(indirect(p->trans));
}

#endif 



SRTN
app_str FCN((s))
CONST outer_char HUGE*s C1("String to be appended.")
{
while(*s)
app(XORD(*(s++)));
}


SRTN
app_ASCII_str FCN((s))
CONST ASCII HUGE*s C1("")
{
while(*s)
app(*s++);
}



SRTN
b_app FCN((a))
Token a C1("Token to be appended.")
{
if(a==040||(a>=big_cancel&&a<=big_force))
{
if(cur_mathness==maybe_math)
ini_mathness= no_math;
else if(cur_mathness==yes_math)
{
#ifdef DBGM
app(064);
#endif 
app(044);
}

cur_mathness= last_mathness= no_math;
}
else
{
if(cur_mathness==maybe_math)
ini_mathness= yes_math;
else if(cur_mathness==no_math)
{
app(044);
#ifdef DBGM
app(063);
#endif
}

cur_mathness= last_mathness= yes_math;
}

app(a);
}



SRTN
b_app1 FCN((a))
scrap_pointer a C1("Scrap to be appended.")
{
switch(INI_MATHNESS(a))
{
case no_math:
if(cur_mathness==maybe_math)
ini_mathness= no_math;
else if(cur_mathness==yes_math)
{
#ifdef DBGM
app(062);
#endif
APP_STR("$");

}

cur_mathness= last_mathness= LAST_MATHNESS(a);
break;

case yes_math:
if(cur_mathness==maybe_math)
ini_mathness= yes_math;
else if(cur_mathness==no_math)
{
APP_STR("$");

#ifdef DBGM
app(061);
#endif
}

cur_mathness= last_mathness= LAST_MATHNESS(a);
break;

case maybe_math:
break;
}

app(a->trans+tok_flag-tok_start);
}


int
get_language FCN((xp))
text_pointer xp C1("")
{
token_pointer tp,tp1;

tp= *xp;
tp1= *(xp+1)-1;


while(tp<tp1)
if(*tp++==begin_language)return*tp;

return
confusion(OC("get_language"),OC("Can't find |begin_language| token in language_scrap"));
}



SRTN
C_productions(VOID)
{
switch(pp->cat)
{
case ignore_scrap:

#if FCN_CALLS
C_ignore_scrap();
#else

{
switch(cat1)
{
case stmt:
case functn:
SQUASH(pp,2,cat1,0,1);
break;
}
}


#endif

break;
case built_in:
#if FCN_CALLS
R_built_in();
#else

{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
REDUCE(pp,1,expr,-2,9998);
}


#endif

break;
case expr:
#if FCN_CALLS
C_expr();
#else

{
if(cat1==lbrace||((!Cpp)&&cat1==int_like))
{
defined_at(make_underlined(pp));

in_function= YES;
SQUASH(pp,1,fn_decl,0,111);
}
else if(cat1==unop)
SQUASH(pp,2,expr,-2,2);
else if(cat1==binop)
{
if(cat2==expr)
SQUASH(pp,3,expr,-2,3);
else if(cat2==decl_hd)
SQUASH(pp,3,tstart,0,6061);

}
else if(cat1==unorbinop&&cat2==expr)
{
sixteen_bits*s= *(pp+1)->trans;
b_app1(pp);



if((s[0]==(sixteen_bits)0134)&&s[1]==(sixteen_bits)0141
&&s[2]==(sixteen_bits)0155)
{
APP_SPACE;b_app1(pp+1);APP_SPACE;
}
else b_app1(pp+1);

b_app1(pp+2);
REDUCE(pp,3,expr,-2,3000);
}
else if(cat1==comma)
{
if((cat2==expr||cat2==int_like))
{
b_app2(pp);
OPT9;
b_app1(pp+2);REDUCE(pp,3,cat2,-2,4);
}
else if(cat2==space)
SQUASH(pp,3,expr,-2,88);
}
else if(cat1==expr)
SQUASH(pp,2,expr,-2,5);
else if(cat1==semi)
SQUASH(pp,2,stmt,-1,6);
else if(cat1==colon)
{
if(!Cpp||in_function)
{
make_underlined(pp);
SQUASH(pp,2,tag,0,7);
}
else if(cat2==expr||cat2==int_like)
{

b_app1(pp);b_app(040);b_app1(pp+1);b_app(040);
b_app1(pp+2);
REDUCE(pp,3,expr,-2,701);

}
}
else if(cat1==space)
SQUASH(pp,2,expr,-2,8);
}


#endif

break;
case exp_op:
#if FCN_CALLS
R_exp_op();
#else

{
if(cat1==lpar)SQUASH(pp,1,exp_op,PLUS 1,2995);
else if(cat1==expr)
if(cat2==lpar)SQUASH(pp,1,exp_op,PLUS 2,2996);

else if(cat2==expr)SQUASH(pp,1,exp_op,PLUS 1,2997);

else
{

b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
REDUCE(pp,2,expr,-1,2998);
}
}


#endif

break;
case _EXPR:
#if FCN_CALLS
C__E();
#else

{
APP_SPACE;b_app1(pp);
REDUCE(pp,1,expr,-2,4446);
}


#endif

break;
case _EXPR_:
#if FCN_CALLS
C__E_();
#else

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,expr,-2,4447);
}


#endif

break;
case EXPR_:
#if FCN_CALLS
C_E_();
#else

{
b_app1(pp);APP_SPACE;
REDUCE(pp,1,expr,-2,4448);
}


#endif

break;
case new_like:
#if FCN_CALLS
C_new_like();
#else

{
if(cat1==lbracket&&cat2==rbracket)
{
b_app1(pp);b_app(040);b_app1(pp+1);
{
b_app(0134);b_app(073);
}

;b_app1(pp+2);
b_app(040);
REDUCE(pp,3,expr,-2,910);
}
else if(cat1==decl_hd||cat1==expr)
{
b_app1(pp);b_app(040);b_app1(pp+1);
if(cat1==decl_hd)
{
OUTDENT;
}
REDUCE(pp,2,expr,-2,909);
}
}


#endif

break;
case lpar:
#if FCN_CALLS
C_lpar();
#else

{
if(cat2==rpar&&(cat1==expr||cat1==unorbinop))
SQUASH(pp,3,expr,-2,120);
else if(cat1==rpar)
{

b_app1(pp);
{
b_app(0134);b_app(073);
}

;b_app1(pp+1);
REDUCE(pp,2,expr,-2,121);
}
else if((cat1==decl_hd)&&cat2==rpar)
{

b_app3(pp);

OUTDENT;

if(in_prototype)
in_prototype--;

REDUCE(pp,3,cast,-1,122);
}
else if(cat1==stmt)
{
b_app2(pp);b_app(040);REDUCE(pp,2,lpar,0,123);
}
else if(cat1==for_like&&cat2==rpar)
SQUASH(pp,3,expr,-2,1201);
}


#endif

break;
case lbracket:
#if FCN_CALLS
C_lbracket();
#else

{
if(active_brackets)
{
b_app(0134);
APP_STR("WXA{");
}
else b_app1(pp);

REDUCE(pp,1,lpar,0,5000);
}


#endif

break;
case rbracket:
#if FCN_CALLS
C_rbracket();
#else

{
if(active_brackets)
{
text_pointer t= indirect(pp->trans);

if(**t==0135)**t= 0175;
}

b_app1(pp);

REDUCE(pp,1,rpar,-5,5001);
}


#endif

break;
case question:
#if FCN_CALLS
C_question();
#else

{
if(cat1==expr&&cat2==colon)SQUASH(pp,3,binop,-2,30);

}


#endif

break;
case unop:
#if FCN_CALLS
C__unop();
#else

{
if(cat1==expr)
SQUASH(pp,2,expr,-2,140);
else if(cat1==int_like)
SQUASH(pp,2,int_like,0,141);

}


#endif

break;
case UNOP:
#if FCN_CALLS
C_UNOP();
#else

{
b_app1(pp);APP_SPACE;
REDUCE(pp,1,unop,-1,4443);
}


#endif

break;
case unorbinop:
#if FCN_CALLS
C_unorbinop();
#else

{
if(cat1==expr||(cat1==int_like&&!(cat2==lpar||cat2==unop)))
{


b_app(0173);b_app1(pp);b_app(0175);
b_app1(pp+1);
REDUCE(pp,2,cat1,-2,150);
}
else if(cat1==binop)

{
b_app(math_bin);
b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,151);
}


}


#endif

break;
case binop:
#if FCN_CALLS
C__binop();
#else

{
if(cat1==binop)

{
b_app(math_bin);b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,180);
}


else if(cat1==space)
{
b_app1(pp);
REDUCE(pp,2,binop,-1,181);
}
else if(Cpp&&cat1==decl_hd)
SQUASH(pp,2,tstart,0,6063);


}


#endif

break;
case BINOP:
#if FCN_CALLS
C_BINOP();
#else

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,binop,-1,4444);
}


#endif

break;
case COMMA:
#if FCN_CALLS
C_COMMA();
#else

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,comma,-1,4445);
}


#endif

break;
case cast:
#if FCN_CALLS
C_cast();
#else

{
if(cat1==expr)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,expr,-2,160);
}
else if(cat1==unorbinop||cat1==reference)
SQUASH(pp,1,cast,PLUS 1,162);
else
SQUASH(pp,1,expr,-2,161);
}


#endif

break;
case sizeof_like:
#if FCN_CALLS
C_sizeof_like();
#else

{
if(cat1==cast)
SQUASH(pp,2,expr,-2,170);
else if(cat1==expr)
SQUASH(pp,2,expr,-2,171);
}


#endif

break;
case int_like:
#if FCN_CALLS
C_int_like();
#else

{
if(cat1==unop)
{
if(cat2==expr||cat2==int_like)
SQUASH(pp,3,expr,-2,35);

else if(cat2==op_like)
SQUASH(pp,1,int_like,PLUS 2,36);

}
else if(cat1==int_like||cat1==struct_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,cat1,0,40);
}
else if(cat1==reference)
SQUASH(pp,2,int_like,-2,43);
else if(cat1==expr||cat1==unorbinop||cat1==semi)
{
b_app1(pp);

if(cat1!=semi)
app(0176);

#if 0
INDENT;

#endif

REDUCE(pp,1,decl_hd,-1,41);
}
else if(cat1==comma)
{
b_app1(pp);
#if 0
INDENT;
#endif
REDUCE(pp,1,decl_hd,-2,42);
}
else if(cat1==rpar)
{
b_app1(pp);
#if 0
INDENT;
#endif
REDUCE(pp,1,decl_hd,-2,502);
}
else if(Cpp&&cat1==lpar&&!in_prototype)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}


REDUCE(pp,1,expr,-2,5021);

}
else if(cat1==binop&&cat2==expr)
SQUASH(pp,3,int_like,-2,5022);
else if(cat1==langle)
SQUASH(pp,1,int_like,PLUS 1,5997);
else if(cat1==rangle)
{
b_app1(pp);
#if 0
INDENT;
#endif
REDUCE(pp,1,decl_hd,-2,5998);
}
else if(cat1==class_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,class_like,0,5995);
}
else if(cat1==tlist)
SQUASH(pp,2,int_like,-2,5999);
else if(cat1==namespace)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,namespace,0,5996);
}
}


#endif

break;
case extern_like:
#if FCN_CALLS
C_ext_like();
#else

{
if(Cpp&&cat1==expr)
{
b_app1(pp);b_app(040);b_app1(pp+1);
if(cat2==lbrace||cat2==kill_newlines)
REDUCE(pp,2,fn_decl,0,5025);
else
REDUCE(pp,2,int_like,0,5023);

}
else
SQUASH(pp,1,int_like,0,5024);
}


#endif

break;
case modifier:
#if FCN_CALLS
C_modifier();
#else

{
if(cat1==int_like||cat1==struct_like||cat1==class_like)
SQUASH(pp,1,cat1,-2,503);
else if(pp==lo_ptr)
SQUASH(pp,1,expr,0,5040);
else if(cat1==comma||cat1==semi||cat1==lbrace||cat1==kill_newlines)
SQUASH(pp,1,_EXPR,0,5042);


else
SQUASH(pp,1,EXPR_,0,5041);
}


#endif

break;
case huge_like:
#if FCN_CALLS
C_huge_like();
#else

{
if(cat1==unorbinop)
{
b_app1(pp);APP_SPACE;b_app1(pp+1);
REDUCE(pp,2,unorbinop,-1,505);
}
}


#endif

break;
case decl_hd:
#if FCN_CALLS
C_decl_hd();
#else

{
if(cat1==rpar)
{
if((pp-1)->cat==lpar)
SQUASH(pp,1,decl_hd,-1,4990);
else if((pp-2)->cat==decl_hd)
SQUASH(pp,1,decl_hd,-2,4991);
else if((pp-3)->cat==decl_hd)
SQUASH(pp,1,decl_hd,-3,4992);
}
else if(cat1==decl_hd)
SQUASH(pp,2,decl_hd,0,50);
else if(cat1==comma)
{
if(cat2==decl_hd)
{
b_app2(pp);OPT9;
b_app1(pp+2);
REDUCE(pp,3,decl_hd,0,501);
}
else if(cat2==ignore_scrap&&cat3==decl_hd)
{
b_app2(pp);OPT9;
b_app2(pp+2);
REDUCE(pp,4,decl_hd,0,504);
}
#if 0
else if(Cpp&&(cat2==decl||cat2==stmt))
SQUASH(pp,3,stmt,-2,508);


#endif
else
{
if(cat2==ignore_scrap&&(cat3==int_like||cat3==struct_like||
cat3==modifier))
{
b_app1(pp);
if((pp-3)->cat!=decl_hd&&(pp-2)->cat!=decl_hd
&&cat3!=modifier)
in_prototype++;
REDUCE(pp,1,decl_hd,PLUS 3,5221);
}
else if(cat2==int_like||cat2==struct_like||cat2==modifier)
{
b_app1(pp);
if((pp-3)->cat!=decl_hd&&(pp-2)->cat!=decl_hd
&&cat2!=modifier)
in_prototype++;


REDUCE(pp,1,decl_hd,PLUS 2,52);
}
else
{
b_app2(pp);app(0176);

#if 0
if(Cpp)
REDUCE(pp,2,decl_hd,-2,540);

else
#endif
REDUCE(pp,2,decl_hd,-1,54);
}
}
}
else if(cat1==unorbinop)
{
b_app1(pp);
b_app(0173);
b_app1(pp+1);
b_app(0175);
REDUCE(pp,2,decl_hd,-1,55);
}
else if(cat1==expr)
{
make_underlined(pp+1);
SQUASH(pp,2,decl_hd,-1,56);

}
else if((cat1==binop||cat1==colon
||cat1==expr
)&&cat2==expr&&(cat3==comma||cat3==semi||cat3==rpar))
#if 0
if(cat1==binop)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,decl_hd,-1,5660);
}
else
#endif
SQUASH(pp,3,decl_hd,-1,5661);
else if(cat1==int_like&&(cat2==unop||cat2==langle))
SQUASH(pp,1,decl_hd,PLUS 1,5662);


else if(cat1==lbrace||(cat1==int_like&&
((pp-1)->trans==NULL||**(pp-1)->trans!=050)))


{
b_app1(pp);
#if 0
OUTDENT;
#endif
in_function= YES;
defined_at(FIRST_ID(pp));
REDUCE(pp,1,fn_decl,0,58);
}
else if(cat1==semi)
{
b_app2(pp);
#if 0
OUTDENT;
#endif
#if 0
if(Cpp)
REDUCE(pp,2,decl,-2,594);

else
#endif
REDUCE(pp,2,decl,-1,59);
}
else if(Cpp&&cat1==int_like&&cat2==unop)
SQUASH(pp,1,decl_hd,PLUS 1,590);
else if(Cpp&&cat1==rangle)
SQUASH(pp,1,decl_hd,-2,591);
else if(Cpp&&cat1==struct_like)
SQUASH(pp,2,decl_hd,-1,593);

}


#endif

break;
case decl:
#if FCN_CALLS
C_decl();
#else

{
if(Cpp)
{
if(cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,functn,-1,61);
}
else
SQUASH(pp,1,stmt,-1,611);
}
else
{
if(cat1==decl)
{
b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,decl,-1,60);
}
else if(cat1==stmt||cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,cat1,-1,61);
}
}
}


#endif

break;
case typedef_like:
#if FCN_CALLS
C_typedef_like();
#else

{
if(cat1==decl_hd&&(cat2==expr||cat2==int_like))
{
make_underlined(pp+2);make_reserved(pp+2);
b_app2(pp+1);
REDUCE(pp+1,2,decl_hd,0,90);
}
else if(cat1==decl)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,decl,-1,91);
}
else if(cat1==semi)
SQUASH(pp,2,stmt,-1,94);

else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,stmt,-1,95);

}

}


#endif

break;
case imp_reserved:
#if FCN_CALLS
C_imp_reserved();
#else

{
if(typedefing)SQUASH(pp,1,expr,-2,92);
else SQUASH(pp,1,int_like,-2,93);
}


#endif

break;
case op_like:
#if FCN_CALLS
C_op_like();
#else

{
short n;


if((cat1==lpar&&cat2==rpar)||(cat1==lbracket&&cat2==rbracket))
{



APP_STR("\\Woperator");
b_app(0173);
b_app1(pp+1);

{
b_app(0134);b_app(054);
}


b_app1(pp+2);
b_app(0175);
n= 3;
}
else
{

scrap_pointer q;
int k;



for(q= pp+1;q<=scrp_ptr&&q-pp<=MAX_OP_TOKENS;q++)
if(q->cat==lpar)
break;

n= (q->cat==lpar)?PTR_DIFF(short,q,pp):0;


if(n>0)
{
text_pointer xp;
token_pointer tp,tp1;

#if 0
b_app1(pp);
b_app(0173);

#endif
APP_STR("\\Woperator");
b_app(0173);

id_first= id_loc= mod_text+1;

for(k= 1;k<n;k++)
{
b_app1(pp+k);

xp= indirect((pp+k)->trans);
tp= *xp;
tp1= *(xp+1);
while(tp<tp1)
*id_loc++= (ASCII)(*tp++);
}

underline_xref(id_lookup(id_first,id_loc,0));

b_app(0175);
}
}

if(n>0)
REDUCE(pp,n,expr,-2,6666);
else
{
APP_STR("\\Woperatoro");
REDUCE(pp,1,expr,-2,6668);
}
}


#endif

break;
case class_like:
#if FCN_CALLS
C_class_like();
#else

{
if(cat1==expr||cat1==int_like)
{
make_underlined(pp+1);make_reserved(pp+1);

b_app1(pp);b_app(040);b_app1(pp+1);

if((pp-1)->cat==tstart||(pp-1)->cat==decl_hd
||(pp-1)->cat==lpar)
REDUCE(pp,2,decl_hd,-1,8998);
else
REDUCE(pp,2,struct_like,0,8999);
}
else if(cat1==lbrace)
SQUASH(pp,1,struct_like,0,8987);

}


#endif

break;
case struct_like:
#if FCN_CALLS
C_struct_like();
#else

{
if(cat1==lbrace)
{
b_app1(pp);indent_force;
b_app1(pp+1);REDUCE(pp,2,struct_hd,0,100);
}
else if(cat1==expr)
{
if(cat2==lbrace)
{

if(Cpp)
{make_underlined(pp+1);make_reserved(pp+1);}

b_app1(pp);b_app(040);b_app1(pp+1);
indent_force;
b_app1(pp+2);
REDUCE(pp,3,struct_hd,0,101);
}
else
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,int_like,-1,102);
}
}
else if(cat1==colon&&cat2==int_like&&Cpp)
{
if(cat3==langle)
SQUASH(pp,1,struct_like,PLUS 3,1023);
else
{
b_app1(pp);b_app(040);b_app1(pp+1);b_app(040);
b_app1(pp+2);
REDUCE(pp,3,struct_like,0,1021);
}
}
else if(cat1==comma&&cat2==int_like&&Cpp)
{
if(cat3==langle)
SQUASH(pp,1,struct_like,PLUS 3,1024);
else
{
b_app2(pp);b_app(040);b_app1(pp+2);
REDUCE(pp,3,struct_like,0,1022);
}
}
else if(cat1==tlist)
SQUASH(pp,2,struct_like,0,1025);
else if(cat1==semi)
SQUASH(pp,2,decl,-1,103);
else if(cat1==rangle)
SQUASH(pp,1,decl_hd,-2,592);
}


#endif

break;
case struct_hd:
#if FCN_CALLS
C_str_hd();
#else

{
if((cat1==decl||cat1==stmt
||cat1==expr
||cat1==functn
)&&cat2==rbrace)
{
b_app1(pp);

{

{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



kill_nl= NO;
}


b_app1(pp+2);
b_app(outdent);
REDUCE(pp,3,int_like,-1,110);
}
else if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,int_like,-1,1101);
}
}


#endif

break;
case fn_decl:
#if FCN_CALLS
C_fn_decl();
#else

{
if(cat1==semi&&Cpp)
{
b_app2(pp);
REDUCE(pp,2,stmt,-1,72);
}
else if(cat1==decl)
{
b_app1(pp);
b_app(indent);indent_force;
b_app1(pp+1);
b_app(outdent);b_app(outdent);
REDUCE(pp,2,fn_decl,0,70);
}
else if(cat1==stmt)
{
#if(0)
b_app(backup);
#endif
b_app1(pp);b_app(force);
b_app(indent);
b_app1(pp+1);
b_app(outdent);
in_function= kill_nl= NO;
REDUCE(pp,2,functn,-1,71);
}
}


#endif

break;
case functn:
#if FCN_CALLS
C_functn();
#else

{
if(cat1==functn||cat1==decl||cat1==stmt)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);REDUCE(pp,2,cat1,-1,80);
}
}


#endif

break;
case lbrace:
#if FCN_CALLS
C_lbrace();
#else

{
if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,stmt,-1,130);
}
else if((cat1==stmt||cat1==decl||cat1==functn)&&cat2==rbrace)

{
b_app(force);
b_app1(pp);


{

{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



kill_nl= NO;
}



b_app1(pp+2);

REDUCE(pp,3,stmt,-1,131);
}
else if(cat1==expr)
{
if(cat2==rbrace)
SQUASH(pp,3,expr,-2,132);
else if(cat2==comma&&cat3==rbrace)
SQUASH(pp,4,expr,-2,132);
}
}


#endif

break;
case do_like:
#if FCN_CALLS
C_do_like();
#else

{
if(cat1==stmt)
if(cat2==for_like)
{
cat2= while_do;
SQUASH(pp,1,do_like,PLUS 2,191);
}
else if(cat2==expr&&cat3==semi)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
b_app(force);
b_app2(pp+2);
REDUCE(pp,4,stmt,-1,190);
}
}


#endif

break;
case while_do:
#if FCN_CALLS
C_wh_do();
#else

{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
REDUCE(pp,1,expr,0,192);
}


#endif

break;
case if_like:
#if FCN_CALLS
C_if_like();
#else

{
if(cat1==lpar&&cat2==expr&&cat3==rpar)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app3(pp+1);
#if(0)
cmnt_after_IF= (cat4==ignore_scrap);
#endif
REDUCE(pp,4,IF_like,0,220);
}
}


#endif

break;
case IF_like:
#if FCN_CALLS
C_IF();
#else

{
if(cat1==stmt
||cat1==lbrace||cat1==if_like||cat1==for_like||cat1==do_like
||cat1==Rdo_like
#if(0)
||cmnt_after_IF
#endif
)
SQUASH(pp,1,if_hd,0,230);
#if(0)
else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,IF_top,-1,231);
}
#endif
}


#endif

break;
case IF_top:
#if FCN_CALLS
C_IF_top();
#else

{
if(cat1==else_like||cat1==else_hd||cat1==space)
SQUASH(pp,1,IF_top,1,242);
else if(cat1==IF_top)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,IF_top,-1,238);
}
else if(cat1==ELSE_like)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-1,239);
}
else if(cat1==IF_like&&(cat2==expr||cat2==stmt))
SQUASH(pp,1,IF_top,1,241);
else
SQUASH(pp,1,stmt,-1,240);
}


#endif

break;
case for_like:
#if FCN_CALLS
C_for_like();
#else

{
if(cat1==expr)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
b_app(040);

if(cat2==semi)
{
if(!auto_semi||(auto_semi&&cat3==semi))
{
indent_force;
b_app1(pp+2);
b_app(outdent);
REDUCE(pp,3,stmt,-2,200);

}
else
REDUCE(pp,3,for_hd,0,2011);
}
else
REDUCE(pp,2,for_hd,0,201);
}
else if(cat1!=lpar)
SQUASH(pp,1,expr,0,2010);
}


#endif

break;
case for_hd:
#if FCN_CALLS
C_forhd();
#else

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,stmt,-1,210);
}
}


#endif

break;
case else_like:
#if FCN_CALLS
C_else();
#else

{
if(cat1==if_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,if_like,0,235);
}
else if(cat1==stmt||cat1==lbrace||cat1==for_like||cat1==do_like)
SQUASH(pp,1,else_hd,0,236);
#if 0 
else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,ELSE_like,-1,237);
}
#endif
}


#endif

break;
case if_hd:
#if FCN_CALLS
C_if_hd();
#else

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,IF_top,-1,233);
}
else if(cat1==IF_top&&cat2==else_like)
SQUASH(pp,1,if_hd,2,234);
}


#endif

break;
case else_hd:
#if FCN_CALLS
C_els_hd();
#else

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,ELSE_like,-1,241);
}
}


#endif

break;
case case_like:
#if FCN_CALLS
C_case_like();
#else

{
if(cat1==semi)
SQUASH(pp,2,stmt,-1,260);
else if(cat1==colon)
SQUASH(pp,2,tag,-1,261);
else if(cat1==expr)
{
if(cat2==semi)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,stmt,-1,262);
}
else if(cat2==colon)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,tag,-1,263);
}
}
else if(cat1==int_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,int_like,-2,264);
}
}


#endif

break;
case stmt:
#if FCN_CALLS
C_stmt();
#else

{
if(cat1==stmt||(Cpp&&cat1==decl))
{
b_app1(pp);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);

REDUCE(pp,2,stmt,-1,250);
}
else if(cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-1,251);
}
}


#endif

break;
case tag:
#if FCN_CALLS
C_tag();
#else

{
if(cat1==tag)
{
b_app1(pp);
b_app(force);
b_app(backup);
b_app1(pp+1);REDUCE(pp,2,tag,-1,270);
}
else if(cat1==stmt||cat1==decl||cat1==functn)

{
b_app(big_force);
b_app(backup);b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,cat1,-1,271);
}
}


#endif

break;
case semi:
#if FCN_CALLS
C_semi();
#else

{
b_app(040);b_app1(pp);
REDUCE(pp,1,stmt,-1,280);
}


#endif

break;
case lproc:
#if FCN_CALLS
C_lproc();
#else

{
expanded_lproc= YES;

if(!in_LPROC)
active_space= YES;

if(cat1==define_like)
make_underlined(pp+3);

if(cat1==else_like||cat1==if_like||cat1==define_like)
SQUASH(pp,2,lproc,0,10);

else if(cat1==rproc)
{
expanded_lproc= active_space= in_LPROC= NO;
SQUASH(pp,2,ignore_scrap,-1,11);
}
else if(cat1==expr)
#if 0
SQUASH(pp,1,LPROC,0,12);
#endif
{
b_app1(pp);b_app(040);b_app1(pp+1);

if(cat2==lpar)
did_arg= NO;
else
{
b_app(040);
did_arg= YES;
}

REDUCE(pp,2,LPROC,0,12);
}
else if(cat1==space)
{
if(cat2==lpar)
SQUASH(pp,1,lproc,PLUS 2,1332);


else if(cat3==lpar)
SQUASH(pp,1,lproc,PLUS 3,1333);
else if(cat3==expr)
SQUASH(pp,4,LPROC,0,13);

else if(cat3==space||cat3==ignore_scrap||cat3==rproc)
SQUASH(pp,3,LPROC,0,14);
}
expanded_lproc= NO;
}


#endif

break;
case LPROC:
#if FCN_CALLS
C_LPRC();
#else

{
active_space= NO;in_LPROC= YES;

if(cat1==space)
{
b_app1(pp);
b_app(040);
REDUCE(pp,2,LPROC,0,20);
}
else if(!did_arg&&cat1==expr)
{
SQUASH(pp,2,LPROC,0,24);
did_arg= YES;
}
else if(cat1==rproc)
{
in_LPROC= NO;
SQUASH(pp,2,ignore_scrap,-1,21);
}
else if(cat2==rproc)
{
in_LPROC= NO;
SQUASH(pp,3,ignore_scrap,-1,22);
}

#if(0)
if(cat3==lpar&&cat4==expr&&cat5==rpar)
if(cat2==rproc)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,ignore_scrap,-1,53);
}
else if(cat2==expr&&cat3==rproc)
{
b_app1(pp);b_app(040);b_app1(pp+1);b_app(040);
b_app2(pp+2);REDUCE(pp,4,ignore_scrap,-1,53);
}
#endif
}


#endif

break;
case space:
#if FCN_CALLS
C_space();
#else

{
if(active_space)
{
if(expanded_lproc)
SQUASH(pp,1,space,-1,5336);
else
SQUASH(pp,1,space,1,5335);
}
else
REDUCE(pp,1,ignore_scrap,-1,5334);
}


#endif

break;

case template:
#if FCN_CALLS
C_template();
#else

{
if(cat1==langle)
SQUASH(pp,1,template,PLUS 1,6000);
else if(cat1==tlist)
{
b_app1(pp);b_app(040);b_app1(pp+1);b_app(force);
REDUCE(pp,2,int_like,0,6001);
}
}


#endif

break;
case langle:
#if FCN_CALLS
C_langle();
#else

{
if((pp-1)->cat==template||(pp-1)->cat==int_like||(pp-1)->cat==
struct_like)
{
b_app(0134);
APP_STR("WLA ");
REDUCE(pp,1,tstart,0,6050);
}
else if(cat1==decl_hd&&cat2==rangle)
{
b_app(0134);
APP_STR("WLA ");
b_app1(pp+1);
b_app(0134);
APP_STR("WRA ");
REDUCE(pp,3,expr,-1,6053);
}
else if(cat1==int_like)
SQUASH(pp,1,langle,PLUS 1,6054);
else
SQUASH(pp,1,binop,-1,6051);
}


#endif

break;
case rangle:
#if FCN_CALLS
C_rangle();
#else

{
if((pp-1)->cat==decl_hd)
SQUASH(pp,1,rangle,-2,6055);
else
SQUASH(pp,1,binop,-1,6052);
}


#endif

break;
case tstart:
#if FCN_CALLS
C_tstart();
#else

{
if(cat2==rangle&&(cat1==int_like||cat1==decl_hd||cat1==expr
||cat1==unorbinop))
{
b_app2(pp);
b_app(0134);
APP_STR("WRA ");
OUTDENT;
REDUCE(pp,3,tlist,-1,6060);
}
}


#endif

break;
case tlist:
#if FCN_CALLS
C_tlist();
#else



#endif

break;

case virtual:
#if FCN_CALLS
C_virtual();
#else

{
b_app1(pp);

if(cat1==unop)
APP_SPACE;

REDUCE(pp,1,int_like,0,506);
}


#endif

break;
case reference:
#if FCN_CALLS
C_reference();
#else

{
SQUASH(pp,1,unorbinop,-1,507);
}


#endif

break;
case namespace:
#if FCN_CALLS
C_namespace();
#else

{
if(cat1==expr||cat1==int_like)
{
make_underlined(pp+1);make_reserved(pp+1);

b_app1(pp);b_app(040);b_app1(pp+1);

REDUCE(pp,2,fn_decl,0,7901);
}
else if(cat1==lbrace)
SQUASH(pp,1,fn_decl,0,7902);
}


#endif

break;

case kill_newlines:
#if FCN_CALLS
C_killnl();
#else

{
kill_nl= YES;
SQUASH(pp,1,lbrace,-2,8888);
}


#endif

break;
}
}



SRTN
make_reserved FCN((p))

scrap_pointer p C1("")
{
sixteen_bits tok_value= first_id(p->trans);

name_pointer pname= name_dir+tok_value-id_flag;

if(!tok_value||tok_value==050)
return;

if(DEFINED_TYPE(pname)==M_MACRO||DEFINED_TYPE(pname)==D_MACRO)
return;


for(;p<=scrp_ptr;p++)
{
if(p->cat==expr)
{
if(**(p->trans)==tok_value)
{
p->cat= int_like;
**(p->trans)+= res_flag-id_flag;
}
}
}

pname->ilk= int_like;
pname->reserved_word|= (boolean)language;

if(mark_defined.typedef_name)
{
pname->defined_in(language)= module_count;
SET_TYPE(pname,TYPEDEF_NAME);
}
}



sixteen_bits
first_id FCN((t))
text_pointer t C1("Pointer to start of token list")
{
token_pointer pk= *t;
token_pointer pk1= *(t+1);
sixteen_bits tok_value;

for(;pk<pk1;pk++)
{
tok_value= *pk;

if(tok_value>inner_tok_flag)tok_value-= (inner_tok_flag-
tok_flag);

if(tok_value<=tok_flag)
{
if(tok_value>=id_flag&&tok_value<res_flag)
return tok_value;
else if(tok_value==050)return tok_value;
}
else
{
t= tok_start+(int)(tok_value-tok_flag);

tok_value= first_id(t);
if(tok_value)return tok_value;
}
}

return 0;
}



name_pointer
make_underlined FCN((p))

scrap_pointer p C1("")
{
sixteen_bits tok_value;

tok_value= **(p->trans);

if(tok_value>inner_tok_flag)tok_value-= (inner_tok_flag-tok_flag);

if(tok_value>tok_flag){
do
{

tok_value= **(tok_start+
(int)(tok_value-tok_flag));

}
while(tok_value>tok_flag);

if(tok_value<id_flag||tok_value>=res_flag)return NULL;


xref_switch= def_flag;underline_xref(tok_value-id_flag+name_dir);
}

if(tok_value<id_flag||tok_value>=res_flag)return NULL;


xref_switch= def_flag;return underline_xref(tok_value-id_flag+name_dir);
}



name_pointer
underline_xref FCN((p))
name_pointer p C1("")
{
xref_pointer q= (xref_pointer)p->xref;

xref_pointer r;
sixteen_bits m;
sixteen_bits n;
extern boolean strt_off;

if(no_xref||(strt_off&&!index_hidden))
return p;

xref_switch= def_flag;
m= (sixteen_bits)(module_count+xref_switch);

while(q!=xmem)
{
n= q->num;

if(n==m)return p;
else if(m==n+def_flag)

{
q->num= m;return p;
}
else if(n>=def_flag&&n<m)break;

q= q->xlink;
}



append_xref(0);
xref_ptr->xlink= (xref_pointer)p->xref;
r= xref_ptr;p->xref= (ASCII*)xref_ptr;

while(r->xlink!=q){r->num= r->xlink->num;r= r->xlink;}

r->num= m;

;

return p;
}



SRTN
defined_at FCN((p))
name_pointer p C1("")
{
extern boolean ok_to_define;

if(ok_to_define&&translate_mode==OUTER&&p>name_dir)
{
sixteen_bits mod_defined= p->defined_in(language);

if(mod_defined&&mod_defined!=module_count&&language!=C_PLUS_PLUS)
{
if(msg_level>=WARNINGS)
{
printf("\n! (FWEAVE):  Implicit phase 2 declaration of `");
prn_id(p);
printf("' at %s \
repeats or conflicts with declaration at %s.\n",
(char*)MOD_TRANS(module_count),
(char*)MOD_TRANS(mod_defined));
mfree();
}
mark_harmless;
}
else if(mark_defined.fcn_name)
{
p->defined_in(language)= module_count;
SET_TYPE(p,FUNCTION_NAME);
}
}
}



#if FCN_CALLS
SRTN C_ignore_scrap(VOID)
{

{
switch(cat1)
{
case stmt:
case functn:
SQUASH(pp,2,cat1,0,1);
break;
}
}


}
#endif


#if FCN_CALLS
SRTN C_expr(VOID)
{

{
if(cat1==lbrace||((!Cpp)&&cat1==int_like))
{
defined_at(make_underlined(pp));

in_function= YES;
SQUASH(pp,1,fn_decl,0,111);
}
else if(cat1==unop)
SQUASH(pp,2,expr,-2,2);
else if(cat1==binop)
{
if(cat2==expr)
SQUASH(pp,3,expr,-2,3);
else if(cat2==decl_hd)
SQUASH(pp,3,tstart,0,6061);

}
else if(cat1==unorbinop&&cat2==expr)
{
sixteen_bits*s= *(pp+1)->trans;
b_app1(pp);



if((s[0]==(sixteen_bits)0134)&&s[1]==(sixteen_bits)0141
&&s[2]==(sixteen_bits)0155)
{
APP_SPACE;b_app1(pp+1);APP_SPACE;
}
else b_app1(pp+1);

b_app1(pp+2);
REDUCE(pp,3,expr,-2,3000);
}
else if(cat1==comma)
{
if((cat2==expr||cat2==int_like))
{
b_app2(pp);
OPT9;
b_app1(pp+2);REDUCE(pp,3,cat2,-2,4);
}
else if(cat2==space)
SQUASH(pp,3,expr,-2,88);
}
else if(cat1==expr)
SQUASH(pp,2,expr,-2,5);
else if(cat1==semi)
SQUASH(pp,2,stmt,-1,6);
else if(cat1==colon)
{
if(!Cpp||in_function)
{
make_underlined(pp);
SQUASH(pp,2,tag,0,7);
}
else if(cat2==expr||cat2==int_like)
{

b_app1(pp);b_app(040);b_app1(pp+1);b_app(040);
b_app1(pp+2);
REDUCE(pp,3,expr,-2,701);

}
}
else if(cat1==space)
SQUASH(pp,2,expr,-2,8);
}


}
#endif


#if FCN_CALLS
SRTN C_UNOP(VOID)
{

{
b_app1(pp);APP_SPACE;
REDUCE(pp,1,unop,-1,4443);
}


}
#endif


#if FCN_CALLS
SRTN C_BINOP(VOID)
{

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,binop,-1,4444);
}


}
#endif


#if FCN_CALLS
SRTN C_COMMA(VOID)
{

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,comma,-1,4445);
}


}
#endif


#if FCN_CALLS
SRTN C__E(VOID)
{

{
APP_SPACE;b_app1(pp);
REDUCE(pp,1,expr,-2,4446);
}


}
#endif


#if FCN_CALLS
SRTN C__E_(VOID)
{

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,expr,-2,4447);
}


}
#endif


#if FCN_CALLS
SRTN C_E_(VOID)
{

{
b_app1(pp);APP_SPACE;
REDUCE(pp,1,expr,-2,4448);
}


}
#endif


#if FCN_CALLS
SRTN C_new_like(VOID)
{

{
if(cat1==lbracket&&cat2==rbracket)
{
b_app1(pp);b_app(040);b_app1(pp+1);
{
b_app(0134);b_app(073);
}

;b_app1(pp+2);
b_app(040);
REDUCE(pp,3,expr,-2,910);
}
else if(cat1==decl_hd||cat1==expr)
{
b_app1(pp);b_app(040);b_app1(pp+1);
if(cat1==decl_hd)
{
OUTDENT;
}
REDUCE(pp,2,expr,-2,909);
}
}


}
#endif


#if FCN_CALLS
SRTN C_lproc(VOID)
{

{
expanded_lproc= YES;

if(!in_LPROC)
active_space= YES;

if(cat1==define_like)
make_underlined(pp+3);

if(cat1==else_like||cat1==if_like||cat1==define_like)
SQUASH(pp,2,lproc,0,10);

else if(cat1==rproc)
{
expanded_lproc= active_space= in_LPROC= NO;
SQUASH(pp,2,ignore_scrap,-1,11);
}
else if(cat1==expr)
#if 0
SQUASH(pp,1,LPROC,0,12);
#endif
{
b_app1(pp);b_app(040);b_app1(pp+1);

if(cat2==lpar)
did_arg= NO;
else
{
b_app(040);
did_arg= YES;
}

REDUCE(pp,2,LPROC,0,12);
}
else if(cat1==space)
{
if(cat2==lpar)
SQUASH(pp,1,lproc,PLUS 2,1332);


else if(cat3==lpar)
SQUASH(pp,1,lproc,PLUS 3,1333);
else if(cat3==expr)
SQUASH(pp,4,LPROC,0,13);

else if(cat3==space||cat3==ignore_scrap||cat3==rproc)
SQUASH(pp,3,LPROC,0,14);
}
expanded_lproc= NO;
}


}
#endif


#if FCN_CALLS
SRTN C_LPRC(VOID)
{

{
active_space= NO;in_LPROC= YES;

if(cat1==space)
{
b_app1(pp);
b_app(040);
REDUCE(pp,2,LPROC,0,20);
}
else if(!did_arg&&cat1==expr)
{
SQUASH(pp,2,LPROC,0,24);
did_arg= YES;
}
else if(cat1==rproc)
{
in_LPROC= NO;
SQUASH(pp,2,ignore_scrap,-1,21);
}
else if(cat2==rproc)
{
in_LPROC= NO;
SQUASH(pp,3,ignore_scrap,-1,22);
}

#if(0)
if(cat3==lpar&&cat4==expr&&cat5==rpar)
if(cat2==rproc)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,ignore_scrap,-1,53);
}
else if(cat2==expr&&cat3==rproc)
{
b_app1(pp);b_app(040);b_app1(pp+1);b_app(040);
b_app2(pp+2);REDUCE(pp,4,ignore_scrap,-1,53);
}
#endif
}


}
#endif


#if FCN_CALLS
SRTN C_space(VOID)
{

{
if(active_space)
{
if(expanded_lproc)
SQUASH(pp,1,space,-1,5336);
else
SQUASH(pp,1,space,1,5335);
}
else
REDUCE(pp,1,ignore_scrap,-1,5334);
}


}
#endif


#if FCN_CALLS
SRTN C_question(VOID)
{

{
if(cat1==expr&&cat2==colon)SQUASH(pp,3,binop,-2,30);

}


}
#endif


#if FCN_CALLS
SRTN C_int_like(VOID)
{

{
if(cat1==unop)
{
if(cat2==expr||cat2==int_like)
SQUASH(pp,3,expr,-2,35);

else if(cat2==op_like)
SQUASH(pp,1,int_like,PLUS 2,36);

}
else if(cat1==int_like||cat1==struct_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,cat1,0,40);
}
else if(cat1==reference)
SQUASH(pp,2,int_like,-2,43);
else if(cat1==expr||cat1==unorbinop||cat1==semi)
{
b_app1(pp);

if(cat1!=semi)
app(0176);

#if 0
INDENT;

#endif

REDUCE(pp,1,decl_hd,-1,41);
}
else if(cat1==comma)
{
b_app1(pp);
#if 0
INDENT;
#endif
REDUCE(pp,1,decl_hd,-2,42);
}
else if(cat1==rpar)
{
b_app1(pp);
#if 0
INDENT;
#endif
REDUCE(pp,1,decl_hd,-2,502);
}
else if(Cpp&&cat1==lpar&&!in_prototype)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}


REDUCE(pp,1,expr,-2,5021);

}
else if(cat1==binop&&cat2==expr)
SQUASH(pp,3,int_like,-2,5022);
else if(cat1==langle)
SQUASH(pp,1,int_like,PLUS 1,5997);
else if(cat1==rangle)
{
b_app1(pp);
#if 0
INDENT;
#endif
REDUCE(pp,1,decl_hd,-2,5998);
}
else if(cat1==class_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,class_like,0,5995);
}
else if(cat1==tlist)
SQUASH(pp,2,int_like,-2,5999);
else if(cat1==namespace)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,namespace,0,5996);
}
}


}
#endif


#if FCN_CALLS
SRTN C_ext_like(VOID)
{

{
if(Cpp&&cat1==expr)
{
b_app1(pp);b_app(040);b_app1(pp+1);
if(cat2==lbrace||cat2==kill_newlines)
REDUCE(pp,2,fn_decl,0,5025);
else
REDUCE(pp,2,int_like,0,5023);

}
else
SQUASH(pp,1,int_like,0,5024);
}


}
#endif


#if FCN_CALLS
SRTN C_modifier(VOID)
{

{
if(cat1==int_like||cat1==struct_like||cat1==class_like)
SQUASH(pp,1,cat1,-2,503);
else if(pp==lo_ptr)
SQUASH(pp,1,expr,0,5040);
else if(cat1==comma||cat1==semi||cat1==lbrace||cat1==kill_newlines)
SQUASH(pp,1,_EXPR,0,5042);


else
SQUASH(pp,1,EXPR_,0,5041);
}


}
#endif


#if FCN_CALLS
SRTN C_huge_like(VOID)
{

{
if(cat1==unorbinop)
{
b_app1(pp);APP_SPACE;b_app1(pp+1);
REDUCE(pp,2,unorbinop,-1,505);
}
}


}
#endif


#if FCN_CALLS
SRTN C_virtual(VOID)
{

{
b_app1(pp);

if(cat1==unop)
APP_SPACE;

REDUCE(pp,1,int_like,0,506);
}


}
#endif


#if FCN_CALLS
SRTN C_reference(VOID)
{

{
SQUASH(pp,1,unorbinop,-1,507);
}


}
#endif


#if FCN_CALLS
SRTN C_decl_hd(VOID)
{

{
if(cat1==rpar)
{
if((pp-1)->cat==lpar)
SQUASH(pp,1,decl_hd,-1,4990);
else if((pp-2)->cat==decl_hd)
SQUASH(pp,1,decl_hd,-2,4991);
else if((pp-3)->cat==decl_hd)
SQUASH(pp,1,decl_hd,-3,4992);
}
else if(cat1==decl_hd)
SQUASH(pp,2,decl_hd,0,50);
else if(cat1==comma)
{
if(cat2==decl_hd)
{
b_app2(pp);OPT9;
b_app1(pp+2);
REDUCE(pp,3,decl_hd,0,501);
}
else if(cat2==ignore_scrap&&cat3==decl_hd)
{
b_app2(pp);OPT9;
b_app2(pp+2);
REDUCE(pp,4,decl_hd,0,504);
}
#if 0
else if(Cpp&&(cat2==decl||cat2==stmt))
SQUASH(pp,3,stmt,-2,508);


#endif
else
{
if(cat2==ignore_scrap&&(cat3==int_like||cat3==struct_like||
cat3==modifier))
{
b_app1(pp);
if((pp-3)->cat!=decl_hd&&(pp-2)->cat!=decl_hd
&&cat3!=modifier)
in_prototype++;
REDUCE(pp,1,decl_hd,PLUS 3,5221);
}
else if(cat2==int_like||cat2==struct_like||cat2==modifier)
{
b_app1(pp);
if((pp-3)->cat!=decl_hd&&(pp-2)->cat!=decl_hd
&&cat2!=modifier)
in_prototype++;


REDUCE(pp,1,decl_hd,PLUS 2,52);
}
else
{
b_app2(pp);app(0176);

#if 0
if(Cpp)
REDUCE(pp,2,decl_hd,-2,540);

else
#endif
REDUCE(pp,2,decl_hd,-1,54);
}
}
}
else if(cat1==unorbinop)
{
b_app1(pp);
b_app(0173);
b_app1(pp+1);
b_app(0175);
REDUCE(pp,2,decl_hd,-1,55);
}
else if(cat1==expr)
{
make_underlined(pp+1);
SQUASH(pp,2,decl_hd,-1,56);

}
else if((cat1==binop||cat1==colon
||cat1==expr
)&&cat2==expr&&(cat3==comma||cat3==semi||cat3==rpar))
#if 0
if(cat1==binop)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,decl_hd,-1,5660);
}
else
#endif
SQUASH(pp,3,decl_hd,-1,5661);
else if(cat1==int_like&&(cat2==unop||cat2==langle))
SQUASH(pp,1,decl_hd,PLUS 1,5662);


else if(cat1==lbrace||(cat1==int_like&&
((pp-1)->trans==NULL||**(pp-1)->trans!=050)))


{
b_app1(pp);
#if 0
OUTDENT;
#endif
in_function= YES;
defined_at(FIRST_ID(pp));
REDUCE(pp,1,fn_decl,0,58);
}
else if(cat1==semi)
{
b_app2(pp);
#if 0
OUTDENT;
#endif
#if 0
if(Cpp)
REDUCE(pp,2,decl,-2,594);

else
#endif
REDUCE(pp,2,decl,-1,59);
}
else if(Cpp&&cat1==int_like&&cat2==unop)
SQUASH(pp,1,decl_hd,PLUS 1,590);
else if(Cpp&&cat1==rangle)
SQUASH(pp,1,decl_hd,-2,591);
else if(Cpp&&cat1==struct_like)
SQUASH(pp,2,decl_hd,-1,593);

}


}
#endif


#if FCN_CALLS
SRTN C_decl(VOID)
{

{
if(Cpp)
{
if(cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,functn,-1,61);
}
else
SQUASH(pp,1,stmt,-1,611);
}
else
{
if(cat1==decl)
{
b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,decl,-1,60);
}
else if(cat1==stmt||cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,cat1,-1,61);
}
}
}


}
#endif


#if FCN_CALLS
SRTN C_fn_decl(VOID)
{

{
if(cat1==semi&&Cpp)
{
b_app2(pp);
REDUCE(pp,2,stmt,-1,72);
}
else if(cat1==decl)
{
b_app1(pp);
b_app(indent);indent_force;
b_app1(pp+1);
b_app(outdent);b_app(outdent);
REDUCE(pp,2,fn_decl,0,70);
}
else if(cat1==stmt)
{
#if(0)
b_app(backup);
#endif
b_app1(pp);b_app(force);
b_app(indent);
b_app1(pp+1);
b_app(outdent);
in_function= kill_nl= NO;
REDUCE(pp,2,functn,-1,71);
}
}


}
#endif


#if FCN_CALLS
SRTN C_functn(VOID)
{

{
if(cat1==functn||cat1==decl||cat1==stmt)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);REDUCE(pp,2,cat1,-1,80);
}
}


}
#endif


#if FCN_CALLS
SRTN C_typedef_like(VOID)
{

{
if(cat1==decl_hd&&(cat2==expr||cat2==int_like))
{
make_underlined(pp+2);make_reserved(pp+2);
b_app2(pp+1);
REDUCE(pp+1,2,decl_hd,0,90);
}
else if(cat1==decl)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,decl,-1,91);
}
else if(cat1==semi)
SQUASH(pp,2,stmt,-1,94);

else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,stmt,-1,95);

}

}


}
#endif


#if FCN_CALLS
SRTN C_imp_reserved(VOID)
{

{
if(typedefing)SQUASH(pp,1,expr,-2,92);
else SQUASH(pp,1,int_like,-2,93);
}


}
#endif


#if FCN_CALLS
SRTN C_op_like(VOID)
{

{
short n;


if((cat1==lpar&&cat2==rpar)||(cat1==lbracket&&cat2==rbracket))
{



APP_STR("\\Woperator");
b_app(0173);
b_app1(pp+1);

{
b_app(0134);b_app(054);
}


b_app1(pp+2);
b_app(0175);
n= 3;
}
else
{

scrap_pointer q;
int k;



for(q= pp+1;q<=scrp_ptr&&q-pp<=MAX_OP_TOKENS;q++)
if(q->cat==lpar)
break;

n= (q->cat==lpar)?PTR_DIFF(short,q,pp):0;


if(n>0)
{
text_pointer xp;
token_pointer tp,tp1;

#if 0
b_app1(pp);
b_app(0173);

#endif
APP_STR("\\Woperator");
b_app(0173);

id_first= id_loc= mod_text+1;

for(k= 1;k<n;k++)
{
b_app1(pp+k);

xp= indirect((pp+k)->trans);
tp= *xp;
tp1= *(xp+1);
while(tp<tp1)
*id_loc++= (ASCII)(*tp++);
}

underline_xref(id_lookup(id_first,id_loc,0));

b_app(0175);
}
}

if(n>0)
REDUCE(pp,n,expr,-2,6666);
else
{
APP_STR("\\Woperatoro");
REDUCE(pp,1,expr,-2,6668);
}
}


}
#endif


#if FCN_CALLS
SRTN C_class_like(VOID)
{

{
if(cat1==expr||cat1==int_like)
{
make_underlined(pp+1);make_reserved(pp+1);

b_app1(pp);b_app(040);b_app1(pp+1);

if((pp-1)->cat==tstart||(pp-1)->cat==decl_hd
||(pp-1)->cat==lpar)
REDUCE(pp,2,decl_hd,-1,8998);
else
REDUCE(pp,2,struct_like,0,8999);
}
else if(cat1==lbrace)
SQUASH(pp,1,struct_like,0,8987);

}


}
#endif


#if FCN_CALLS
SRTN C_struct_like(VOID)
{

{
if(cat1==lbrace)
{
b_app1(pp);indent_force;
b_app1(pp+1);REDUCE(pp,2,struct_hd,0,100);
}
else if(cat1==expr)
{
if(cat2==lbrace)
{

if(Cpp)
{make_underlined(pp+1);make_reserved(pp+1);}

b_app1(pp);b_app(040);b_app1(pp+1);
indent_force;
b_app1(pp+2);
REDUCE(pp,3,struct_hd,0,101);
}
else
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,int_like,-1,102);
}
}
else if(cat1==colon&&cat2==int_like&&Cpp)
{
if(cat3==langle)
SQUASH(pp,1,struct_like,PLUS 3,1023);
else
{
b_app1(pp);b_app(040);b_app1(pp+1);b_app(040);
b_app1(pp+2);
REDUCE(pp,3,struct_like,0,1021);
}
}
else if(cat1==comma&&cat2==int_like&&Cpp)
{
if(cat3==langle)
SQUASH(pp,1,struct_like,PLUS 3,1024);
else
{
b_app2(pp);b_app(040);b_app1(pp+2);
REDUCE(pp,3,struct_like,0,1022);
}
}
else if(cat1==tlist)
SQUASH(pp,2,struct_like,0,1025);
else if(cat1==semi)
SQUASH(pp,2,decl,-1,103);
else if(cat1==rangle)
SQUASH(pp,1,decl_hd,-2,592);
}


}
#endif


#if FCN_CALLS
SRTN C_str_hd(VOID)
{

{
if((cat1==decl||cat1==stmt
||cat1==expr
||cat1==functn
)&&cat2==rbrace)
{
b_app1(pp);

{

{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



kill_nl= NO;
}


b_app1(pp+2);
b_app(outdent);
REDUCE(pp,3,int_like,-1,110);
}
else if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,int_like,-1,1101);
}
}


}
#endif


#if FCN_CALLS
SRTN C_lpar(VOID)
{

{
if(cat2==rpar&&(cat1==expr||cat1==unorbinop))
SQUASH(pp,3,expr,-2,120);
else if(cat1==rpar)
{

b_app1(pp);
{
b_app(0134);b_app(073);
}

;b_app1(pp+1);
REDUCE(pp,2,expr,-2,121);
}
else if((cat1==decl_hd)&&cat2==rpar)
{

b_app3(pp);

OUTDENT;

if(in_prototype)
in_prototype--;

REDUCE(pp,3,cast,-1,122);
}
else if(cat1==stmt)
{
b_app2(pp);b_app(040);REDUCE(pp,2,lpar,0,123);
}
else if(cat1==for_like&&cat2==rpar)
SQUASH(pp,3,expr,-2,1201);
}


}
#endif


#if FCN_CALLS
SRTN C_lbracket(VOID)
{

{
if(active_brackets)
{
b_app(0134);
APP_STR("WXA{");
}
else b_app1(pp);

REDUCE(pp,1,lpar,0,5000);
}


}
#endif


#if FCN_CALLS
SRTN C_rbracket(VOID)
{

{
if(active_brackets)
{
text_pointer t= indirect(pp->trans);

if(**t==0135)**t= 0175;
}

b_app1(pp);

REDUCE(pp,1,rpar,-5,5001);
}


}
#endif


#if FCN_CALLS
SRTN C_killnl(VOID)
{

{
kill_nl= YES;
SQUASH(pp,1,lbrace,-2,8888);
}


}
#endif


#if FCN_CALLS
SRTN C_lbrace(VOID)
{

{
if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,stmt,-1,130);
}
else if((cat1==stmt||cat1==decl||cat1==functn)&&cat2==rbrace)

{
b_app(force);
b_app1(pp);


{

{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



kill_nl= NO;
}



b_app1(pp+2);

REDUCE(pp,3,stmt,-1,131);
}
else if(cat1==expr)
{
if(cat2==rbrace)
SQUASH(pp,3,expr,-2,132);
else if(cat2==comma&&cat3==rbrace)
SQUASH(pp,4,expr,-2,132);
}
}


}
#endif


#if FCN_CALLS
SRTN C__unop(VOID)
{

{
if(cat1==expr)
SQUASH(pp,2,expr,-2,140);
else if(cat1==int_like)
SQUASH(pp,2,int_like,0,141);

}


}
#endif


#if FCN_CALLS
SRTN C_unorbinop(VOID)
{

{
if(cat1==expr||(cat1==int_like&&!(cat2==lpar||cat2==unop)))
{


b_app(0173);b_app1(pp);b_app(0175);
b_app1(pp+1);
REDUCE(pp,2,cat1,-2,150);
}
else if(cat1==binop)

{
b_app(math_bin);
b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,151);
}


}


}
#endif


#if FCN_CALLS
SRTN C_cast(VOID)
{

{
if(cat1==expr)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,expr,-2,160);
}
else if(cat1==unorbinop||cat1==reference)
SQUASH(pp,1,cast,PLUS 1,162);
else
SQUASH(pp,1,expr,-2,161);
}


}
#endif


#if FCN_CALLS
SRTN C_sizeof_like(VOID)
{

{
if(cat1==cast)
SQUASH(pp,2,expr,-2,170);
else if(cat1==expr)
SQUASH(pp,2,expr,-2,171);
}


}
#endif


#if FCN_CALLS
SRTN C__binop(VOID)
{

{
if(cat1==binop)

{
b_app(math_bin);b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,180);
}


else if(cat1==space)
{
b_app1(pp);
REDUCE(pp,2,binop,-1,181);
}
else if(Cpp&&cat1==decl_hd)
SQUASH(pp,2,tstart,0,6063);


}


}
#endif


#if FCN_CALLS
SRTN C_do_like(VOID)
{

{
if(cat1==stmt)
if(cat2==for_like)
{
cat2= while_do;
SQUASH(pp,1,do_like,PLUS 2,191);
}
else if(cat2==expr&&cat3==semi)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
b_app(force);
b_app2(pp+2);
REDUCE(pp,4,stmt,-1,190);
}
}


}
#endif


#if FCN_CALLS
SRTN C_wh_do(VOID)
{

{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
REDUCE(pp,1,expr,0,192);
}


}
#endif


#if FCN_CALLS
SRTN C_for_like(VOID)
{

{
if(cat1==expr)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
b_app(040);

if(cat2==semi)
{
if(!auto_semi||(auto_semi&&cat3==semi))
{
indent_force;
b_app1(pp+2);
b_app(outdent);
REDUCE(pp,3,stmt,-2,200);

}
else
REDUCE(pp,3,for_hd,0,2011);
}
else
REDUCE(pp,2,for_hd,0,201);
}
else if(cat1!=lpar)
SQUASH(pp,1,expr,0,2010);
}


}
#endif


#if FCN_CALLS
SRTN C_forhd(VOID)
{

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,stmt,-1,210);
}
}


}
#endif


#if FCN_CALLS
SRTN C_if_like(VOID)
{

{
if(cat1==lpar&&cat2==expr&&cat3==rpar)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app3(pp+1);
#if(0)
cmnt_after_IF= (cat4==ignore_scrap);
#endif
REDUCE(pp,4,IF_like,0,220);
}
}


}
#endif


#if FCN_CALLS
SRTN C_IF(VOID)
{

{
if(cat1==stmt
||cat1==lbrace||cat1==if_like||cat1==for_like||cat1==do_like
||cat1==Rdo_like
#if(0)
||cmnt_after_IF
#endif
)
SQUASH(pp,1,if_hd,0,230);
#if(0)
else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,IF_top,-1,231);
}
#endif
}


}
#endif


#if FCN_CALLS
SRTN C_if_hd(VOID)
{

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,IF_top,-1,233);
}
else if(cat1==IF_top&&cat2==else_like)
SQUASH(pp,1,if_hd,2,234);
}


}
#endif


#if FCN_CALLS
SRTN C_els_hd(VOID)
{

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,ELSE_like,-1,241);
}
}


}
#endif


#if FCN_CALLS
SRTN C_else(VOID)
{

{
if(cat1==if_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,if_like,0,235);
}
else if(cat1==stmt||cat1==lbrace||cat1==for_like||cat1==do_like)
SQUASH(pp,1,else_hd,0,236);
#if 0 
else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,ELSE_like,-1,237);
}
#endif
}


}
#endif


#if FCN_CALLS
SRTN C_ELS(VOID)
{



}
#endif


#if FCN_CALLS
SRTN C_IF_top(VOID)
{

{
if(cat1==else_like||cat1==else_hd||cat1==space)
SQUASH(pp,1,IF_top,1,242);
else if(cat1==IF_top)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,IF_top,-1,238);
}
else if(cat1==ELSE_like)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-1,239);
}
else if(cat1==IF_like&&(cat2==expr||cat2==stmt))
SQUASH(pp,1,IF_top,1,241);
else
SQUASH(pp,1,stmt,-1,240);
}


}
#endif


#if FCN_CALLS
SRTN C_stmt(VOID)
{

{
if(cat1==stmt||(Cpp&&cat1==decl))
{
b_app1(pp);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);

REDUCE(pp,2,stmt,-1,250);
}
else if(cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-1,251);
}
}


}
#endif


#if FCN_CALLS
SRTN C_case_like(VOID)
{

{
if(cat1==semi)
SQUASH(pp,2,stmt,-1,260);
else if(cat1==colon)
SQUASH(pp,2,tag,-1,261);
else if(cat1==expr)
{
if(cat2==semi)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,stmt,-1,262);
}
else if(cat2==colon)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,tag,-1,263);
}
}
else if(cat1==int_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,int_like,-2,264);
}
}


}
#endif


#if FCN_CALLS
SRTN C_tag(VOID)
{

{
if(cat1==tag)
{
b_app1(pp);
b_app(force);
b_app(backup);
b_app1(pp+1);REDUCE(pp,2,tag,-1,270);
}
else if(cat1==stmt||cat1==decl||cat1==functn)

{
b_app(big_force);
b_app(backup);b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,cat1,-1,271);
}
}


}
#endif


#if FCN_CALLS
SRTN C_semi(VOID)
{

{
b_app(040);b_app1(pp);
REDUCE(pp,1,stmt,-1,280);
}


}
#endif


#if FCN_CALLS
SRTN C_template(VOID)
{

{
if(cat1==langle)
SQUASH(pp,1,template,PLUS 1,6000);
else if(cat1==tlist)
{
b_app1(pp);b_app(040);b_app1(pp+1);b_app(force);
REDUCE(pp,2,int_like,0,6001);
}
}


}
#endif


#if FCN_CALLS
SRTN C_langle(VOID)
{

{
if((pp-1)->cat==template||(pp-1)->cat==int_like||(pp-1)->cat==
struct_like)
{
b_app(0134);
APP_STR("WLA ");
REDUCE(pp,1,tstart,0,6050);
}
else if(cat1==decl_hd&&cat2==rangle)
{
b_app(0134);
APP_STR("WLA ");
b_app1(pp+1);
b_app(0134);
APP_STR("WRA ");
REDUCE(pp,3,expr,-1,6053);
}
else if(cat1==int_like)
SQUASH(pp,1,langle,PLUS 1,6054);
else
SQUASH(pp,1,binop,-1,6051);
}


}
#endif


#if FCN_CALLS
SRTN C_rangle(VOID)
{

{
if((pp-1)->cat==decl_hd)
SQUASH(pp,1,rangle,-2,6055);
else
SQUASH(pp,1,binop,-1,6052);
}


}
#endif


#if FCN_CALLS
SRTN C_tstart(VOID)
{

{
if(cat2==rangle&&(cat1==int_like||cat1==decl_hd||cat1==expr
||cat1==unorbinop))
{
b_app2(pp);
b_app(0134);
APP_STR("WRA ");
OUTDENT;
REDUCE(pp,3,tlist,-1,6060);
}
}


}
#endif


#if FCN_CALLS
SRTN C_tlist(VOID)
{



}
#endif


#if FCN_CALLS
SRTN C_namespace(VOID)
{

{
if(cat1==expr||cat1==int_like)
{
make_underlined(pp+1);make_reserved(pp+1);

b_app1(pp);b_app(040);b_app1(pp+1);

REDUCE(pp,2,fn_decl,0,7901);
}
else if(cat1==lbrace)
SQUASH(pp,1,fn_decl,0,7902);
}


}
#endif



SRTN
prn_math FCN((k))
scrap_pointer k C1("")
{
if(INI_MATHNESS(k)==yes_math)
putxchar('+');
else if(INI_MATHNESS(k)==no_math)
putxchar('-');

prn_cat(k->cat);

if(LAST_MATHNESS(k)==yes_math)
putxchar('+');
else if(LAST_MATHNESS(k)==no_math)
putxchar('-');

DFLUSH
}


#endif 

#if(part != 1)


SRTN
R_productions(VOID)
{
switch(pp->cat)
{
case ignore_scrap:

#if FCN_CALLS
C_ignore_scrap();
#else

{
switch(cat1)
{
case stmt:
case functn:
SQUASH(pp,2,cat1,0,1);
break;
}
}


#endif

break;
case expr:
#if FCN_CALLS
R_expr();
#else

{
if(cat1==unop)SQUASH(pp,2,expr,-2,2);
else if((cat1==binop||cat1==unorbinop||cat1==colon)&&cat2==expr)

if(cat1==colon&&(*pp->trans)[1]==(sixteen_bits)043)
{
b_app1(pp);
APP_STR("\\Colon");
b_app1(pp+2);
REDUCE(pp,3,expr,-2,3333);
}
else if(cat1==binop&&**(pp+1)->trans==(sixteen_bits)057)
SQUASH(pp,1,expr,PLUS 1,3334);
else
SQUASH(pp,3,expr,-2,3);

else if(cat1==comma&&(cat2==expr||cat2==end_like))
{
b_app2(pp);
OPT9;
b_app1(pp+2);REDUCE(pp,3,expr,-2,4);
}
else if(cat1==expr)SQUASH(pp,2,expr,-2,5);
else if(cat1==semi)SQUASH(pp,2,stmt,-2,6);
else if(cat1==colon&&cat2==unorbinop&&
(cat3==rpar||(active_brackets&&cat3==rbracket)))
SQUASH(pp,3,expr,-2,299);
else if(cat1==colon&&cat2!=lpar)
{
make_underlined(pp);SQUASH(pp,2,tag,0,7);
}
else if(cat1==comma&&cat2==int_like)
{
b_app2(pp);
OPT9;
b_app1(pp+2);REDUCE(pp,3,int_like,-2,4444);
}
}


#endif

break;
case key_wd:
#if FCN_CALLS
R_key_wd();
#else

{
SQUASH(pp,1,expr,-2,4445);
}


#endif

break;
case exp_op:
#if FCN_CALLS
R_exp_op();
#else

{
if(cat1==lpar)SQUASH(pp,1,exp_op,PLUS 1,2995);
else if(cat1==expr)
if(cat2==lpar)SQUASH(pp,1,exp_op,PLUS 2,2996);

else if(cat2==expr)SQUASH(pp,1,exp_op,PLUS 1,2997);

else
{

b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
REDUCE(pp,2,expr,-1,2998);
}
}


#endif

break;
case _EXPR:
#if FCN_CALLS
C__E();
#else

{
APP_SPACE;b_app1(pp);
REDUCE(pp,1,expr,-2,4446);
}


#endif

break;
case _EXPR_:
#if FCN_CALLS
C__E_();
#else

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,expr,-2,4447);
}


#endif

break;
case EXPR_:
#if FCN_CALLS
C_E_();
#else

{
b_app1(pp);APP_SPACE;
REDUCE(pp,1,expr,-2,4448);
}


#endif

break;
case lpar:
#if FCN_CALLS
R_lpar();
#else


if(cat1==expr&&cat2==rpar)
SQUASH(pp,3,expr,-2,120);
else if(cat1==expr&&cat2==colon&&cat3==rpar)
{
b_app3(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+3);
REDUCE(pp,4,expr,-2,9120);
}
else if(cat1==colon&&cat2!=comma)

{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,lpar,0,9121);
}
else if(cat1==rpar)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,expr,-2,121);
}
else if(cat1==stmt)
{
b_app2(pp);b_app(040);REDUCE(pp,2,lpar,0,123);
}


#endif

break;
case lbracket:
#if FCN_CALLS
C_lbracket();
#else

{
if(active_brackets)
{
b_app(0134);
APP_STR("WXA{");
}
else b_app1(pp);

REDUCE(pp,1,lpar,0,5000);
}


#endif

break;
case rbracket:
#if FCN_CALLS
C_rbracket();
#else

{
if(active_brackets)
{
text_pointer t= indirect(pp->trans);

if(**t==0135)**t= 0175;
}

b_app1(pp);

REDUCE(pp,1,rpar,-5,5001);
}


#endif

break;
case unop:
#if FCN_CALLS
R_unop();
#else


if(cat1==expr)SQUASH(pp,2,expr,-2,33);


#endif

break;
case UNOP:
#if FCN_CALLS
C_UNOP();
#else

{
b_app1(pp);APP_SPACE;
REDUCE(pp,1,unop,-1,4443);
}


#endif

break;
case unorbinop:
#if FCN_CALLS
R_unorbinop();
#else


if(cat1==expr)
{
b_app(0173);b_app1(pp);b_app(0175);
b_app1(pp+1);
REDUCE(pp,2,expr,-2,140);
}
else if(cat1==binop)

{
b_app(math_bin);
b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,151);
}


else if(cat1==comma||cat1==rpar)
SQUASH(pp,1,expr,-2,141);


#endif

break;
case binop:
#if FCN_CALLS
R_binop();
#else

{
sixteen_bits tok= **pp->trans;

if(cat1==binop)
{
if(tok==(sixteen_bits)057)
{
if(**(pp+1)->trans==tok)

{
b_app(0173);
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
b_app(0175);
REDUCE(pp,2,slashes,-1,180);
}


else
{
APP_STR("\\WSl");
REDUCE(pp,1,binop,-1,1803);
}
}
else

{
b_app(math_bin);b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,180);
}


}
else
{
if(tok==(sixteen_bits)057)
{
if(cat1==expr&&cat2==binop&&**(pp+2)->trans==tok)

{
#if 0
b_app(0173);
b_app1(pp);
b_app(0175);
#endif

make_underlined(pp+1);
APP_STR("\\WCMN");
b_app1(pp+1);

#if 0
b_app(0173);
b_app1(pp+2);
b_app(0175);
#endif

REDUCE(pp,3,slashes,-1,9181);
}


else
{
APP_STR("\\WSl");
REDUCE(pp,1,binop,-1,1804);
}
}
}
}


#endif

break;
case BINOP:
#if FCN_CALLS
C_BINOP();
#else

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,binop,-1,4444);
}


#endif

break;
case slash_like:
#if FCN_CALLS
R_slash_like();
#else

if(cat1==slash_like)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
REDUCE(pp,2,slashes,-1,1801);
}
else if(cat1==expr&&cat2==slash_like)
SQUASH(pp,3,slashes,-1,1802);


#endif

break;
case colon:
#if FCN_CALLS
R_colon();
#else


if(cat1==expr||cat1==unorbinop)
SQUASH(pp,2,expr,-2,9500);
else if(cat1==comma&&cat2==colon)
SQUASH(pp,3,colon,-2,9502);


else
SQUASH(pp,1,expr,0,9501);


#endif

break;
case program_like:
#if FCN_CALLS
R_program_like();
#else


if(is_FORTRAN_(language))
{
if(cat1==expr&&cat2==semi)
{
fcn_level++;
b_app1(pp);b_app(040);
b_app(indent);b_app2(pp+1);b_app(outdent);
defined_at(make_underlined(pp+1));
REDUCE(pp,3,fcn_hd,-1,2999);
}
else if(cat1==no_order)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,program_like,0,2997);
}
else if(cat1==semi)
{
fcn_level++;
b_app1(pp);
REDUCE(pp,2,fcn_hd,-1,2996);
}
else if(cat1==proc_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,int_like,0,2887);
}
}
else
{
fcn_level++;
SQUASH(pp,1,int_like,-1,2998);
}


#endif

break;
case struct_like:
#if FCN_CALLS
R_struct_like();
#else

if(cat1==lpar)
{
b_app1(pp);
#if(0)

{
b_app(0134);b_app(054);
}


#endif
REDUCE(pp,1,int_like,0,9075);

}
else if(cat1==comma&&cat2==int_like)
{
b_app2(pp);b_app(040);b_app1(pp+2);
REDUCE(pp,3,struct_like,0,90750);
}
else if(cat1==binop&&**(pp+1)->trans!=(sixteen_bits)057)
SQUASH(pp,2,struct_like,0,90751);

else if(cat1==expr||cat1==slashes||cat1==struct_like)
{

b_app1(pp);b_app(040);b_app1(pp+1);
make_underlined(pp+1);
REDUCE(pp,2,language==FORTRAN_90?struct_hd:struct_like,0,9076);
}
else if(cat1==semi)
SQUASH(pp,1,struct_hd,0,9077);
else if(cat1==lbrace)
{
b_app1(pp);indent_force;
b_app1(pp+1);REDUCE(pp,2,struct_hd,0,100);
}


#endif

break;
case struct_hd:
#if FCN_CALLS
R_str_hd();
#else

if(is_FORTRAN_(language))
{
if(cat1==expr)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);

REDUCE(pp,2,struct_hd,0,90760);
}
else if(cat1==semi)
{
fcn_level++;
b_app2(pp);
b_app(indent);
REDUCE(pp,2,struct_hd,0,90770);
}
else if(cat1==decl||cat1==functn)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,struct_hd,0,9078);
}
else if(cat1==END_stmt)
{
b_app1(pp);
b_app(outdent);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,decl,-1,9079);
}
}
else
{
if((cat1==decl||cat1==stmt
||cat1==expr
||cat1==functn
)&&cat2==rbrace)
{
b_app1(pp);

{

{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



kill_nl= NO;
}


b_app1(pp+2);
b_app(outdent);
REDUCE(pp,3,int_like,-1,110);
}
else if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,int_like,-1,1101);
}
}




#endif

break;
case op_like:
#if FCN_CALLS
R_op_like();
#else

{
short n;

if(cat1==lpar)
{

scrap_pointer q;
int k;



for(q= pp+2;q<=scrp_ptr&&q-pp<MAX_OP_TOKENS;q++)
if(q->cat==rpar)break;

n= (q->cat==rpar)?PTR_DIFF(short,q,pp):0;

if(n>0)
{
b_app1(pp);b_app(040);
b_app1(pp+1);
b_app(0173);
APP_STR("\\optrue");

for(k= 2;k<n;k++)
b_app1(pp+k);

APP_STR("\\opfalse");

b_app(0175);
b_app1(pp+k);

REDUCE(pp,n+1,expr,-2,6667);
}
}
}


#endif

break;
case proc_like:
#if FCN_CALLS
R_proc_like();
#else


if(fcn_level==0){}
else fcn_level--;

SQUASH(pp,1,int_like,-1,2989);


#endif

break;
case private_like:
#if FCN_CALLS
R_private_like();
#else

{
if(cat1==(eight_bits)(language==FORTRAN_90?semi:colon))
{
app(backup);
b_app2(pp);
REDUCE(pp,2,decl,-1,2988);
}
else SQUASH(pp,1,int_like,-2,2987);
}


#endif

break;
case int_like:
#if FCN_CALLS
R_int_like();
#else

{
if(cat1==lbrace)
{
b_app(indent);
b_app1(pp);
REDUCE(pp,1,decl_hd,0,940);
}
else if(cat1==unorbinop&&cat2==expr)
{
b_app1(pp);
b_app(0173);b_app2(pp+1);b_app(0175);
REDUCE(pp,3,int_like,-1,941);
}
else if(cat1==int_like||cat1==no_order)


{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,cat0,0,40);
}
else if(cat1==comma)
SQUASH(pp,2,int_like,0,9001);
else if(cat1==binop)
{
b_app2(pp);
b_app(indent);
REDUCE(pp,2,decl_hd,0,9002);
}
else if(cat1==slashes)
{
b_app1(pp);
b_app(040);
b_app(indent);
REDUCE(pp,1,decl_hd,0,9002);
}
else if(cat1==expr&&**indirect((pp+1)->trans)==050)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);
REDUCE(pp,2,int_like,0,9003);
}
else if(cat1==expr||cat1==semi)
{
b_app1(pp);

if(cat1!=semi)app(0176);

b_app(indent);

REDUCE(pp,1,decl_hd,0,41);
}
else if(cat1==rbrace)
SQUASH(pp,1,decl,-1,411);

}


#endif

break;
case decl_hd:
#if FCN_CALLS
R_dcl_hd();
#else

if(cat1==comma)
{
b_app2(pp);b_app(040);REDUCE(pp,2,decl_hd,0,54);
}
else if(cat1==expr)
{
make_underlined(pp+1);

if(**(pp+2)->trans==(sixteen_bits)075)
{
SQUASH(pp,1,decl_hd,PLUS 1,55);
}
else
{
SQUASH(pp,2,decl_hd,0,56);
}
}
else if(cat1==slashes)
{
SQUASH(pp,2,decl_hd,0,57);
}
else if(cat1==lbrace||cat1==int_like||cat1==implicit_like)


{
b_app1(pp);
b_app(outdent);
defined_at(FIRST_ID(pp));
REDUCE(pp,1,fn_decl,0,58);
}
else if(cat1==semi&&(!auto_semi||(auto_semi&&cat2!=lbrace)))
{
b_app2(pp);
b_app(outdent);
REDUCE(pp,2,
(eight_bits)(intermingle?(intermingle= NO,ignore_scrap):decl),
-1,59);
}
else if(cat1==built_in)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,decl_hd,0,5901);
}
#if(0)
else if(cat1==lpar&&cat2==expr)make_underlined(pp+2);

#endif


#endif

break;
case decl:
#if FCN_CALLS
R_decl();
#else

if(is_FORTRAN_(language)&&cat1==END_like)SQUASH(pp,1,stmt,-1,960);

else if(cat1==decl)
{
b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,decl,-1,60);
}
else if(cat1==stmt||cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);REDUCE(pp,2,cat1,-1,61);
}


#endif

break;
case fn_decl:
#if FCN_CALLS
C_fn_decl();
#else

{
if(cat1==semi&&Cpp)
{
b_app2(pp);
REDUCE(pp,2,stmt,-1,72);
}
else if(cat1==decl)
{
b_app1(pp);
b_app(indent);indent_force;
b_app1(pp+1);
b_app(outdent);b_app(outdent);
REDUCE(pp,2,fn_decl,0,70);
}
else if(cat1==stmt)
{
#if(0)
b_app(backup);
#endif
b_app1(pp);b_app(force);
b_app(indent);
b_app1(pp+1);
b_app(outdent);
in_function= kill_nl= NO;
REDUCE(pp,2,functn,-1,71);
}
}


#endif

break;
case fcn_hd:
#if FCN_CALLS
R_fcn_hd();
#else

{
if(cat1==END_stmt)
{
b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,functn,-1,7172);
}
else if(cat1==stmt&&cat2==END_stmt)
{
b_app1(pp);b_app(force);
b_app(indent);
b_app1(pp+1);

if(fcn_level==0)
{
if(containing)
b_app(big_force);

while(containing)
{
#if(0)
b_app(outdent);
#endif
containing--;
}
}

b_app(outdent);
b_app(force);

b_app1(pp+2);
REDUCE(pp,3,functn,-1,7171);
}
}


#endif

break;
case functn:
#if FCN_CALLS
R_functn();
#else


if(cat1==functn||(is_RATFOR_(language)&&(cat1==decl||cat1==stmt)))
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);REDUCE(pp,2,cat1,0,80);
}
else if(free_Fortran&&cat1==semi)
{
b_app2(pp);
REDUCE(pp,2,functn,0,8088);
}
#if(0)
else if(cat1==END_like)
{
b_app1(pp);
REDUCE(pp,1,stmt,-1,9050);
}
#endif


#endif

break;
case lbrace:
#if FCN_CALLS
R_lbrace();
#else

if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,stmt,-2,130);
}
else if((cat1==stmt||cat1==decl)&&cat2==rbrace)
{
b_app(force);
b_app1(pp);b_app(force);
b_app1(pp+1);b_app(force);
b_app1(pp+2);
REDUCE(pp,3,stmt,-2,131);
}


#endif

break;
case do_like:
#if FCN_CALLS
R_do_like();
#else


if(cat1==stmt)
{
if(cat2==until_like)
{
found_until= YES;
SQUASH(pp,1,do_like,PLUS 2,9190);

}
else
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
b_app(force);

if(found_until&&cat2==stmt)

{
found_until= NO;
b_app1(pp+2);REDUCE(pp,3,stmt,-2,9191);
}
else REDUCE(pp,2,stmt,-2,9192);

}
}


#endif

break;
case until_like:
#if FCN_CALLS
R_until_like();
#else


SQUASH(pp,1,for_like,0,9195);


#endif

break;
case Rdo_like:
#if FCN_CALLS
R_Rdo_like();
#else


if(is_FORTRAN_(language))
{
if(cat1==for_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,Rdo_like,0,9600);
}
else if(cat1==expr&&((cat2==expr&&cat3==binop)||cat2==if_like))
{
label_text_ptr[indent_level]= (pp+1)->trans;

b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,Rdo_like,0,9601);
}
else if(cat1==stmt)
{
loop_num[indent_level++]= ++max_loop_num;

b_app1(pp);
b_app(040);
b_app1(pp+1);
app_loop_num(max_loop_num);

b_app(indent);
REDUCE(pp,2,stmt,-2,9602);
}
}

else if(cat1==stmt||(cat1==expr&&cat2==lbrace))

{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,for_hd,0,9603);
}


#endif

break;
case if_like:
#if FCN_CALLS
R_if_like();
#else


if(cat1==CASE_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,if_like,0,9196);
}
else
if(is_FORTRAN_(language))
{
if(cat1==expr)
{
boolean if_form;

if((if_form= BOOLEAN(cat2==built_in&&cat3==semi))||cat2==semi)
{
short n;


loop_num[indent_level++]= ++max_loop_num;

b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
b_app(040);

if(if_form)
{
n= 4;
b_app2(pp+2);
}
else
{
n= 3;
b_app1(pp+2);
}

app_loop_num(max_loop_num);
b_app(indent);
REDUCE(pp,n,stmt,-2,9800);
}
else if(cat2==stmt)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
app(040);
b_app(cancel);
b_app1(pp+2);
REDUCE(pp,3,stmt,-2,9801);
}
else
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
REDUCE(pp,2,if_hd,0,9802);
}
}
}

else
{
if(cat1==lpar&&cat2==expr&&cat3==rpar)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app3(pp+1);
#if(0)
cmnt_after_IF= (cat4==ignore_scrap);
#endif
REDUCE(pp,4,IF_like,0,220);
}
}





#endif

break;
case IF_like:
#if FCN_CALLS
C_IF();
#else

{
if(cat1==stmt
||cat1==lbrace||cat1==if_like||cat1==for_like||cat1==do_like
||cat1==Rdo_like
#if(0)
||cmnt_after_IF
#endif
)
SQUASH(pp,1,if_hd,0,230);
#if(0)
else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,IF_top,-1,231);
}
#endif
}


#endif

break;

case IF_top:
#if FCN_CALLS
C_IF_top();
#else

{
if(cat1==else_like||cat1==else_hd||cat1==space)
SQUASH(pp,1,IF_top,1,242);
else if(cat1==IF_top)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,IF_top,-1,238);
}
else if(cat1==ELSE_like)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-1,239);
}
else if(cat1==IF_like&&(cat2==expr||cat2==stmt))
SQUASH(pp,1,IF_top,1,241);
else
SQUASH(pp,1,stmt,-1,240);
}


#endif

break;
case endif_like:
#if FCN_CALLS
R_endif_like();
#else

{
short n;
boolean no_construct_name;

if((no_construct_name= BOOLEAN(cat1==semi))||(cat1==expr&&cat2==semi))
{
b_app(outdent);
b_app(force);

if(no_construct_name)
{
n= 2;
b_app2(pp);
}
else
{
n= 3;
b_app1(pp);b_app(040);b_app2(pp+1);
}

if(--indent_level<0)
indent_level= 0;

app_loop_num(loop_num[indent_level]);
REDUCE(pp,n,stmt,-2,9880);
}
}


#endif

break;
case end_like:
#if FCN_CALLS
R_end_like();
#else

if(cat1==Rdo_like||cat1==if_like)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,endif_like,0,9860);

}
else
{
fcn_level--;
SQUASH(pp,1,END_like,-1,9861);
}


#endif

break;
case END_like:
#if FCN_CALLS
R_END();
#else

{
if(cat1==program_like||cat1==struct_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);

if(cat2==expr)
{
b_app(040);b_app1(pp+2);
REDUCE(pp,3,END_like,0,9860);
}
else
REDUCE(pp,2,END_like,0,9861);
}
else if(cat1==semi)
SQUASH(pp,2,END_stmt,-2,9862);
}


#endif

break;
case go_like:
#if FCN_CALLS
R_go_like();
#else


if(cat1==built_in)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,case_like,0,9850);
}
else SQUASH(pp,1,expr,-2,9851);


#endif

break;
case for_like:
#if FCN_CALLS
C_for_like();
#else

{
if(cat1==expr)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
b_app(040);

if(cat2==semi)
{
if(!auto_semi||(auto_semi&&cat3==semi))
{
indent_force;
b_app1(pp+2);
b_app(outdent);
REDUCE(pp,3,stmt,-2,200);

}
else
REDUCE(pp,3,for_hd,0,2011);
}
else
REDUCE(pp,2,for_hd,0,201);
}
else if(cat1!=lpar)
SQUASH(pp,1,expr,0,2010);
}


#endif

break;
case for_hd:
#if FCN_CALLS
C_forhd();
#else

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,stmt,-1,210);
}
}


#endif

break;
case else_like:
#if FCN_CALLS
R_else_like();
#else


if(is_FORTRAN_(language))
{
if(cat1==if_like)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,else_like,0,9910);
}
else if(cat1==semi)
{
b_app(outdent);
b_app(force);
b_app2(pp);
app_loop_num(loop_num[indent_level-1]);
b_app(indent);
REDUCE(pp,2,stmt,-2,9911);
}
else if(cat1==expr&&cat2==built_in&&cat3==semi)

{
b_app(outdent);
b_app(force);

b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
b_app(040);
b_app2(pp+2);
app_loop_num(loop_num[indent_level-1]);

b_app(indent);
REDUCE(pp,4,stmt,-2,9912);
}
}

else
{
if(cat1==if_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,if_like,0,235);
}
else if(cat1==stmt||cat1==lbrace||cat1==for_like||cat1==do_like)
SQUASH(pp,1,else_hd,0,236);
#if 0 
else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,ELSE_like,-1,237);
}
#endif
}




#endif

break;
case else_hd:
#if FCN_CALLS
C_els_hd();
#else

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,ELSE_like,-1,241);
}
}


#endif

break;
case if_hd:
#if FCN_CALLS
R_if_hd();
#else


if(is_FORTRAN_(language))
{
if(cat1==stmt)
{
#if 0
b_app1(pp);b_app(break_space);b_app1(pp+1);
#endif
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,stmt,-2,9900);
}
}
else

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,IF_top,-1,233);
}
else if(cat1==IF_top&&cat2==else_like)
SQUASH(pp,1,if_hd,2,234);
}




#endif

break;
case CASE_like:
#if FCN_CALLS
R_CASE();
#else


if(is_FORTRAN_(language))
{
b_app(backup);
b_app1(pp);
REDUCE(pp,1,case_like,0,9258);
}
else SQUASH(pp,1,case_like,0,9259);


#endif

break;
case case_like:
#if FCN_CALLS
R_case_like();
#else

if(cat1==read_like)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,case_like,0,9260);
}
else if(cat1==semi)SQUASH(pp,2,stmt,-2,260);
else if(cat1==colon)
{
b_app1(pp);APP_STR("\\Colon\\ ");
REDUCE(pp,2,tag,-1,261);
}


else if(cat1==expr&&cat2==semi)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,stmt,-2,262);
}
else if((cat1==expr||cat1==label)&&cat2==colon)
{
b_app1(pp);b_app(040);b_app1(pp+1);
APP_STR("\\Colon\\ ");
REDUCE(pp,3,tag,-1,263);
}


#endif

break;
case stmt:
#if FCN_CALLS
R_stmt();
#else


if(cat1==stmt||(free_Fortran&&cat1==decl))
{
b_app1(pp);
b_app(break_space);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-2,2501);
}
else if(cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-2,2511);
}


#endif

break;
case tag:
#if FCN_CALLS
R_tag();
#else


if(cat1==tag)
{
b_app1(pp);b_app(force);
b_app(backup);
b_app1(pp+1);REDUCE(pp,2,tag,-1,270);
}
else if(cat1==stmt||cat1==END_like)
{
boolean end_of_loop;

end_of_loop= NO;


while(indent_level>0&&
compare_text(pp->trans,label_text_ptr[indent_level-1]))
{
--indent_level;
b_app(outdent);
end_of_loop= YES;
}

if(is_FORTRAN_(language)&&Fortran_label)
{
b_app(force);
APP_STR("\\Wlbl{");b_app1(pp);app(0175);

}
else
{
b_app(big_force);
b_app(backup);
b_app1(pp);
b_app(force);
}

b_app1(pp+1);

if(end_of_loop)
app_loop_num(loop_num[indent_level]);

REDUCE(pp,2,cat1,-2,271);
}



#endif

break;
case label:
#if FCN_CALLS
R_label();
#else

if(cat1==colon)
{
b_app1(pp);
REDUCE(pp,2,label,0,9270);


}
else if(cat1==stmt||cat1==END_like)
{
b_app1(pp);APP_STR("\\Colon\\ ");

if(is_FORTRAN_(language)&&Fortran_label)
b_app(cancel);

REDUCE(pp,1,tag,0,9271);

}


#endif

break;
case semi:
#if FCN_CALLS
R_semi();
#else

if(is_RATFOR_(language)&&auto_semi)
{
text_pointer t;

t= indirect(pp->trans);

if(**t==073)**t= 0;
SQUASH(pp,1,ignore_scrap,-1,9280);
}
else
{
b_app(040);b_app1(pp);REDUCE(pp,1,stmt,-2,280);
}


#endif

break;

case common_like:
#if FCN_CALLS
R_common_like();
#else

if(cat1==expr||cat1==slashes||cat1==semi)
{
#if 0
b_app1(pp);
#if 0
if(cat1!=semi)
b_app(040);
#endif
b_app(indent);
REDUCE(pp,1,common_hd,0,9950);
#endif
SQUASH(pp,1,common_hd,0,9950);
}


#endif

break;
case common_hd:
#if FCN_CALLS
R_cmn_hd();
#else


#if 0
if(cat1==expr)
SQUASH(pp,2,common_hd,0,9951);
else if(cat1==slashes)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
b_app(040);
REDUCE(pp,2,common_hd,0,9952);
}
else if(cat1==comma)
{
b_app2(pp);
b_app(040);
REDUCE(pp,2,common_hd,0,9953);
}

if(cat1==expr)
{
b_app1(pp);
OPT9;
b_app1(pp+1);
REDUCE(pp,2,common_hd,0,9951);
}
else if(cat1==slashes)
{
SQUASH(pp,2,common_hd,0,9952);
}
else if(cat1==comma)
{
SQUASH(pp,2,common_hd,0,9953);
}
else if(cat1==semi)
{
b_app2(pp);
b_app(outdent);
REDUCE(pp,2,decl,-1,9954);
}
#endif
if(cat1==slashes)
SQUASH(pp,2,int_like,0,9952);
else
SQUASH(pp,1,int_like,0,9951);


#endif

break;
case read_like:
#if FCN_CALLS
R_read_like();
#else


if(cat1==lpar&&cat2==expr&&cat3==rpar)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app3(pp+1);
b_app(040);
REDUCE(pp,4,read_hd,0,9960);
}
else if(cat1==expr&&cat2==comma)
{
b_app1(pp);
b_app(040);
b_app2(pp+1);
b_app(040);
REDUCE(pp,3,read_hd,0,9961);
}
else if(cat1==expr||cat1==unorbinop)
{
b_app1(pp);b_app(040);b_app1(pp+1);

if(cat2==expr)b_app(040);

REDUCE(pp,2,read_hd,0,9962);
}
else if(cat1==semi)SQUASH(pp,1,read_hd,0,9963);



#endif

break;
case read_hd:
#if FCN_CALLS
R_rd_hd();
#else

if(cat1==comma)
{
b_app2(pp);
b_app(040);
REDUCE(pp,2,read_hd,0,9965);
}
else if(cat1==expr)
{
if(cat2==comma||cat2==semi)
SQUASH(pp,2,read_hd,0,9966);
}
else if(cat1==semi&&cat2==read_like)
{
b_app1(pp);
b_app1(pp+1);
b_app(force);
b_app1(pp+2);
REDUCE(pp,3,read_like,0,9967);
}
else if(cat1==semi)
{
b_app1(pp);
b_app1(pp+1);
REDUCE(pp,2,stmt,-2,9968);
}


#endif

break;
case entry_like:
#if FCN_CALLS
R_entry_like();
#else

if(cat1==expr&&cat2==semi)
{
b_app(big_force);
b_app(backup);b_app1(pp);b_app(040);b_app2(pp+1);b_app(force);
REDUCE(pp,3,stmt,-2,9990);
}
else if(cat1==(eight_bits)(language==FORTRAN_90?semi:colon))
{
b_app(big_force);
b_app(backup);b_app2(pp);b_app(force);

containing++;
#if(0)
b_app(indent);
#endif
REDUCE(pp,2,stmt,-2,9991);
}


#endif

break;
case implicit_like:
#if FCN_CALLS
R_implicit_like();
#else

if(cat1==int_like||cat1==expr)

{
b_app1(pp);
b_app(040);
b_app(indent);
REDUCE(pp,1,implicit_hd,0,9970);
}
else if(cat1==semi)
{
b_app1(pp);
b_app(indent);
REDUCE(pp,1,implicit_hd,0,99700);
}


#endif

break;
case implicit_hd:
#if FCN_CALLS
R_imp_hd();
#else

if(cat1==unorbinop&&cat2==expr)
{
b_app1(pp);
b_app(0173);b_app2(pp+1);b_app(0175);

{
b_app(0134);b_app(054);
}

;
REDUCE(pp,3,implicit_hd,0,9971);
}
else if(cat1==expr)SQUASH(pp,2,implicit_hd,0,9972);

else if(cat1==comma||cat1==int_like)
{
b_app2(pp);

if(cat2!=unorbinop)
if(cat2==int_like)b_app(040);

else
{
b_app(0134);b_app(054);
}

;

REDUCE(pp,2,implicit_hd,0,9973);
}
else if(cat1==semi)SQUASH(pp,1,decl_hd,0,9974);



#endif

break;
case assign_like:
#if FCN_CALLS
R_assign_like();
#else

if(cat1==expr&&cat2==built_in&&cat3==expr)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
b_app(040);
b_app1(pp+2);
b_app(040);
b_app1(pp+3);
REDUCE(pp,4,expr,0,9980);
}


#endif

break;
case define_like:
#if FCN_CALLS
R_define_like();
#else

if(cat1==expr)
{
b_app(force);
b_app(backup);b_app2(pp);b_app(force);
REDUCE(pp,2,ignore_scrap,-1,9995);
}


#endif

break;
case built_in:
#if FCN_CALLS
R_built_in();
#else

{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
REDUCE(pp,1,expr,-2,9998);
}


#endif

break;
case no_order:
#if FCN_CALLS
R_no_order();
#else

intermingle= YES;
b_app(force);
b_app1(pp);b_app(040);
REDUCE(pp,1,int_like,0,9996);



#endif

break;
case newline:
#if FCN_CALLS
R_newline();
#else

SQUASH(pp,1,ignore_scrap,-1,9999);


#endif

break;
case COMMA:
#if FCN_CALLS
C_COMMA();
#else

{


APP_SPACE;b_app1(pp);APP_SPACE;

;
REDUCE(pp,1,comma,-1,4445);
}


#endif

break;

}
}


#if FCN_CALLS
SRTN R_expr(VOID)
{

{
if(cat1==unop)SQUASH(pp,2,expr,-2,2);
else if((cat1==binop||cat1==unorbinop||cat1==colon)&&cat2==expr)

if(cat1==colon&&(*pp->trans)[1]==(sixteen_bits)043)
{
b_app1(pp);
APP_STR("\\Colon");
b_app1(pp+2);
REDUCE(pp,3,expr,-2,3333);
}
else if(cat1==binop&&**(pp+1)->trans==(sixteen_bits)057)
SQUASH(pp,1,expr,PLUS 1,3334);
else
SQUASH(pp,3,expr,-2,3);

else if(cat1==comma&&(cat2==expr||cat2==end_like))
{
b_app2(pp);
OPT9;
b_app1(pp+2);REDUCE(pp,3,expr,-2,4);
}
else if(cat1==expr)SQUASH(pp,2,expr,-2,5);
else if(cat1==semi)SQUASH(pp,2,stmt,-2,6);
else if(cat1==colon&&cat2==unorbinop&&
(cat3==rpar||(active_brackets&&cat3==rbracket)))
SQUASH(pp,3,expr,-2,299);
else if(cat1==colon&&cat2!=lpar)
{
make_underlined(pp);SQUASH(pp,2,tag,0,7);
}
else if(cat1==comma&&cat2==int_like)
{
b_app2(pp);
OPT9;
b_app1(pp+2);REDUCE(pp,3,int_like,-2,4444);
}
}


}
#endif


#if FCN_CALLS
SRTN R_key_wd(VOID)
{

{
SQUASH(pp,1,expr,-2,4445);
}


}
#endif


#if FCN_CALLS
SRTN R_exp_op(VOID)
{

{
if(cat1==lpar)SQUASH(pp,1,exp_op,PLUS 1,2995);
else if(cat1==expr)
if(cat2==lpar)SQUASH(pp,1,exp_op,PLUS 2,2996);

else if(cat2==expr)SQUASH(pp,1,exp_op,PLUS 1,2997);

else
{

b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
REDUCE(pp,2,expr,-1,2998);
}
}


}
#endif


#if FCN_CALLS
SRTN R_program_like(VOID)
{


if(is_FORTRAN_(language))
{
if(cat1==expr&&cat2==semi)
{
fcn_level++;
b_app1(pp);b_app(040);
b_app(indent);b_app2(pp+1);b_app(outdent);
defined_at(make_underlined(pp+1));
REDUCE(pp,3,fcn_hd,-1,2999);
}
else if(cat1==no_order)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,program_like,0,2997);
}
else if(cat1==semi)
{
fcn_level++;
b_app1(pp);
REDUCE(pp,2,fcn_hd,-1,2996);
}
else if(cat1==proc_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,int_like,0,2887);
}
}
else
{
fcn_level++;
SQUASH(pp,1,int_like,-1,2998);
}


}
#endif


#if FCN_CALLS
SRTN R_fcn_hd(VOID)
{

{
if(cat1==END_stmt)
{
b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,functn,-1,7172);
}
else if(cat1==stmt&&cat2==END_stmt)
{
b_app1(pp);b_app(force);
b_app(indent);
b_app1(pp+1);

if(fcn_level==0)
{
if(containing)
b_app(big_force);

while(containing)
{
#if(0)
b_app(outdent);
#endif
containing--;
}
}

b_app(outdent);
b_app(force);

b_app1(pp+2);
REDUCE(pp,3,functn,-1,7171);
}
}


}
#endif


#if FCN_CALLS
SRTN R_proc_like(VOID)
{


if(fcn_level==0){}
else fcn_level--;

SQUASH(pp,1,int_like,-1,2989);


}
#endif


#if FCN_CALLS
SRTN R_private_like(VOID)
{

{
if(cat1==(eight_bits)(language==FORTRAN_90?semi:colon))
{
app(backup);
b_app2(pp);
REDUCE(pp,2,decl,-1,2988);
}
else SQUASH(pp,1,int_like,-2,2987);
}


}
#endif


#if FCN_CALLS
SRTN R_int_like(VOID)
{

{
if(cat1==lbrace)
{
b_app(indent);
b_app1(pp);
REDUCE(pp,1,decl_hd,0,940);
}
else if(cat1==unorbinop&&cat2==expr)
{
b_app1(pp);
b_app(0173);b_app2(pp+1);b_app(0175);
REDUCE(pp,3,int_like,-1,941);
}
else if(cat1==int_like||cat1==no_order)


{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,cat0,0,40);
}
else if(cat1==comma)
SQUASH(pp,2,int_like,0,9001);
else if(cat1==binop)
{
b_app2(pp);
b_app(indent);
REDUCE(pp,2,decl_hd,0,9002);
}
else if(cat1==slashes)
{
b_app1(pp);
b_app(040);
b_app(indent);
REDUCE(pp,1,decl_hd,0,9002);
}
else if(cat1==expr&&**indirect((pp+1)->trans)==050)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);
REDUCE(pp,2,int_like,0,9003);
}
else if(cat1==expr||cat1==semi)
{
b_app1(pp);

if(cat1!=semi)app(0176);

b_app(indent);

REDUCE(pp,1,decl_hd,0,41);
}
else if(cat1==rbrace)
SQUASH(pp,1,decl,-1,411);

}


}
#endif


#if FCN_CALLS
SRTN R_struct_like(VOID)
{

if(cat1==lpar)
{
b_app1(pp);
#if(0)

{
b_app(0134);b_app(054);
}


#endif
REDUCE(pp,1,int_like,0,9075);

}
else if(cat1==comma&&cat2==int_like)
{
b_app2(pp);b_app(040);b_app1(pp+2);
REDUCE(pp,3,struct_like,0,90750);
}
else if(cat1==binop&&**(pp+1)->trans!=(sixteen_bits)057)
SQUASH(pp,2,struct_like,0,90751);

else if(cat1==expr||cat1==slashes||cat1==struct_like)
{

b_app1(pp);b_app(040);b_app1(pp+1);
make_underlined(pp+1);
REDUCE(pp,2,language==FORTRAN_90?struct_hd:struct_like,0,9076);
}
else if(cat1==semi)
SQUASH(pp,1,struct_hd,0,9077);
else if(cat1==lbrace)
{
b_app1(pp);indent_force;
b_app1(pp+1);REDUCE(pp,2,struct_hd,0,100);
}


}
#endif


#if FCN_CALLS
SRTN R_str_hd(VOID)
{

if(is_FORTRAN_(language))
{
if(cat1==expr)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);

REDUCE(pp,2,struct_hd,0,90760);
}
else if(cat1==semi)
{
fcn_level++;
b_app2(pp);
b_app(indent);
REDUCE(pp,2,struct_hd,0,90770);
}
else if(cat1==decl||cat1==functn)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,struct_hd,0,9078);
}
else if(cat1==END_stmt)
{
b_app1(pp);
b_app(outdent);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,decl,-1,9079);
}
}
else
{
if((cat1==decl||cat1==stmt
||cat1==expr
||cat1==functn
)&&cat2==rbrace)
{
b_app1(pp);

{

{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



b_app1(pp+1);


{
if(kill_nl)

{
b_app(0134);b_app(054);
}


else
b_app(force);
}



kill_nl= NO;
}


b_app1(pp+2);
b_app(outdent);
REDUCE(pp,3,int_like,-1,110);
}
else if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,int_like,-1,1101);
}
}




}
#endif


#if FCN_CALLS
SRTN R_op_like(VOID)
{

{
short n;

if(cat1==lpar)
{

scrap_pointer q;
int k;



for(q= pp+2;q<=scrp_ptr&&q-pp<MAX_OP_TOKENS;q++)
if(q->cat==rpar)break;

n= (q->cat==rpar)?PTR_DIFF(short,q,pp):0;

if(n>0)
{
b_app1(pp);b_app(040);
b_app1(pp+1);
b_app(0173);
APP_STR("\\optrue");

for(k= 2;k<n;k++)
b_app1(pp+k);

APP_STR("\\opfalse");

b_app(0175);
b_app1(pp+k);

REDUCE(pp,n+1,expr,-2,6667);
}
}
}


}
#endif


#if FCN_CALLS
SRTN R_dcl_hd(VOID)
{

if(cat1==comma)
{
b_app2(pp);b_app(040);REDUCE(pp,2,decl_hd,0,54);
}
else if(cat1==expr)
{
make_underlined(pp+1);

if(**(pp+2)->trans==(sixteen_bits)075)
{
SQUASH(pp,1,decl_hd,PLUS 1,55);
}
else
{
SQUASH(pp,2,decl_hd,0,56);
}
}
else if(cat1==slashes)
{
SQUASH(pp,2,decl_hd,0,57);
}
else if(cat1==lbrace||cat1==int_like||cat1==implicit_like)


{
b_app1(pp);
b_app(outdent);
defined_at(FIRST_ID(pp));
REDUCE(pp,1,fn_decl,0,58);
}
else if(cat1==semi&&(!auto_semi||(auto_semi&&cat2!=lbrace)))
{
b_app2(pp);
b_app(outdent);
REDUCE(pp,2,
(eight_bits)(intermingle?(intermingle= NO,ignore_scrap):decl),
-1,59);
}
else if(cat1==built_in)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,decl_hd,0,5901);
}
#if(0)
else if(cat1==lpar&&cat2==expr)make_underlined(pp+2);

#endif


}
#endif


#if FCN_CALLS
SRTN R_decl(VOID)
{

if(is_FORTRAN_(language)&&cat1==END_like)SQUASH(pp,1,stmt,-1,960);

else if(cat1==decl)
{
b_app1(pp);b_app(force);
b_app1(pp+1);
REDUCE(pp,2,decl,-1,60);
}
else if(cat1==stmt||cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);REDUCE(pp,2,cat1,-1,61);
}


}
#endif


#if FCN_CALLS
SRTN R_functn(VOID)
{


if(cat1==functn||(is_RATFOR_(language)&&(cat1==decl||cat1==stmt)))
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);REDUCE(pp,2,cat1,0,80);
}
else if(free_Fortran&&cat1==semi)
{
b_app2(pp);
REDUCE(pp,2,functn,0,8088);
}
#if(0)
else if(cat1==END_like)
{
b_app1(pp);
REDUCE(pp,1,stmt,-1,9050);
}
#endif


}
#endif


#if FCN_CALLS
SRTN R_lpar(VOID)
{


if(cat1==expr&&cat2==rpar)
SQUASH(pp,3,expr,-2,120);
else if(cat1==expr&&cat2==colon&&cat3==rpar)
{
b_app3(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+3);
REDUCE(pp,4,expr,-2,9120);
}
else if(cat1==colon&&cat2!=comma)

{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,lpar,0,9121);
}
else if(cat1==rpar)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,expr,-2,121);
}
else if(cat1==stmt)
{
b_app2(pp);b_app(040);REDUCE(pp,2,lpar,0,123);
}


}
#endif


#if FCN_CALLS
SRTN R_colon(VOID)
{


if(cat1==expr||cat1==unorbinop)
SQUASH(pp,2,expr,-2,9500);
else if(cat1==comma&&cat2==colon)
SQUASH(pp,3,colon,-2,9502);


else
SQUASH(pp,1,expr,0,9501);


}
#endif


#if FCN_CALLS
SRTN R_lbrace(VOID)
{

if(cat1==rbrace)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
REDUCE(pp,2,stmt,-2,130);
}
else if((cat1==stmt||cat1==decl)&&cat2==rbrace)
{
b_app(force);
b_app1(pp);b_app(force);
b_app1(pp+1);b_app(force);
b_app1(pp+2);
REDUCE(pp,3,stmt,-2,131);
}


}
#endif


#if FCN_CALLS
SRTN R_unop(VOID)
{


if(cat1==expr)SQUASH(pp,2,expr,-2,33);


}
#endif


#if FCN_CALLS
SRTN R_unorbinop(VOID)
{


if(cat1==expr)
{
b_app(0173);b_app1(pp);b_app(0175);
b_app1(pp+1);
REDUCE(pp,2,expr,-2,140);
}
else if(cat1==binop)

{
b_app(math_bin);
b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,151);
}


else if(cat1==comma||cat1==rpar)
SQUASH(pp,1,expr,-2,141);


}
#endif


#if FCN_CALLS
SRTN R_slash_like(VOID)
{

if(cat1==slash_like)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
REDUCE(pp,2,slashes,-1,1801);
}
else if(cat1==expr&&cat2==slash_like)
SQUASH(pp,3,slashes,-1,1802);


}
#endif


#if FCN_CALLS
SRTN R_binop(VOID)
{

{
sixteen_bits tok= **pp->trans;

if(cat1==binop)
{
if(tok==(sixteen_bits)057)
{
if(**(pp+1)->trans==tok)

{
b_app(0173);
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app1(pp+1);
b_app(0175);
REDUCE(pp,2,slashes,-1,180);
}


else
{
APP_STR("\\WSl");
REDUCE(pp,1,binop,-1,1803);
}
}
else

{
b_app(math_bin);b_app1(pp);
b_app(0173);b_app1(pp+1);b_app(0175);
b_app(0175);
REDUCE(pp,2,binop,-1,180);
}


}
else
{
if(tok==(sixteen_bits)057)
{
if(cat1==expr&&cat2==binop&&**(pp+2)->trans==tok)

{
#if 0
b_app(0173);
b_app1(pp);
b_app(0175);
#endif

make_underlined(pp+1);
APP_STR("\\WCMN");
b_app1(pp+1);

#if 0
b_app(0173);
b_app1(pp+2);
b_app(0175);
#endif

REDUCE(pp,3,slashes,-1,9181);
}


else
{
APP_STR("\\WSl");
REDUCE(pp,1,binop,-1,1804);
}
}
}
}


}
#endif



text_pointer
indirect FCN((t))
text_pointer t C1("")
{
Token tok_value;

if(t==NULL)return t;

tok_value= **t;

if(tok_value<=tok_flag)return t;

if(tok_value>inner_tok_flag)tok_value-= (inner_tok_flag-tok_flag);

if(tok_value>tok_flag)
do
{
Token tok_value0= tok_value;

t= tok_start+(int)(tok_value-tok_flag);
tok_value= **t;

if(tok_value==tok_value0)return t;

}
while(tok_value>tok_flag);

return t;
}


boolean
compare_text FCN((t0,t1))
text_pointer t0 C0("")
text_pointer t1 C1("")
{
token_pointer p0,p0_end,p1;

if(t0==NULL||t1==NULL)return NO;

t0= indirect(t0);t1= indirect(t1);

p0= *t0;p0_end= *(t0+1);
p1= *t1;

while(p0<p0_end)
{
if(*p0==072)return YES;
if(*p0++!=*p1++)return NO;
}

return YES;
}


sixteen_bits
tok_val FCN((p))
scrap_pointer p C1("")
{
sixteen_bits tok_value;

tok_value= **(p->trans);

if(tok_value>inner_tok_flag)
tok_value-= (inner_tok_flag-tok_flag);

if(tok_value>tok_flag)
do
{
tok_value= **(tok_start+(int)(tok_value-tok_flag));
}
while(tok_value>tok_flag);

return tok_value;
}


#if FCN_CALLS
SRTN R_Rdo_like(VOID)
{


if(is_FORTRAN_(language))
{
if(cat1==for_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,Rdo_like,0,9600);
}
else if(cat1==expr&&((cat2==expr&&cat3==binop)||cat2==if_like))
{
label_text_ptr[indent_level]= (pp+1)->trans;

b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,Rdo_like,0,9601);
}
else if(cat1==stmt)
{
loop_num[indent_level++]= ++max_loop_num;

b_app1(pp);
b_app(040);
b_app1(pp+1);
app_loop_num(max_loop_num);

b_app(indent);
REDUCE(pp,2,stmt,-2,9602);
}
}

else if(cat1==stmt||(cat1==expr&&cat2==lbrace))

{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,for_hd,0,9603);
}


}
#endif


#if FCN_CALLS
SRTN R_do_like(VOID)
{


if(cat1==stmt)
{
if(cat2==until_like)
{
found_until= YES;
SQUASH(pp,1,do_like,PLUS 2,9190);

}
else
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
b_app(force);

if(found_until&&cat2==stmt)

{
found_until= NO;
b_app1(pp+2);REDUCE(pp,3,stmt,-2,9191);
}
else REDUCE(pp,2,stmt,-2,9192);

}
}


}
#endif


#if FCN_CALLS
SRTN R_until_like(VOID)
{


SQUASH(pp,1,for_like,0,9195);


}
#endif


#if FCN_CALLS
SRTN R_if_like(VOID)
{


if(cat1==CASE_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,if_like,0,9196);
}
else
if(is_FORTRAN_(language))
{
if(cat1==expr)
{
boolean if_form;

if((if_form= BOOLEAN(cat2==built_in&&cat3==semi))||cat2==semi)
{
short n;


loop_num[indent_level++]= ++max_loop_num;

b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
b_app(040);

if(if_form)
{
n= 4;
b_app2(pp+2);
}
else
{
n= 3;
b_app1(pp+2);
}

app_loop_num(max_loop_num);
b_app(indent);
REDUCE(pp,n,stmt,-2,9800);
}
else if(cat2==stmt)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
app(040);
b_app(cancel);
b_app1(pp+2);
REDUCE(pp,3,stmt,-2,9801);
}
else
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
REDUCE(pp,2,if_hd,0,9802);
}
}
}

else
{
if(cat1==lpar&&cat2==expr&&cat3==rpar)
{
b_app1(pp);
{
b_app(0134);b_app(054);
}

;b_app3(pp+1);
#if(0)
cmnt_after_IF= (cat4==ignore_scrap);
#endif
REDUCE(pp,4,IF_like,0,220);
}
}





}
#endif



SRTN
app_loop_num FCN((n))
int n C1("Loop number.")
{
char loop_id[100];

if(!block_nums)return;

sprintf(loop_id,"\\Wblock{%d}",n);

APP_STR(loop_id);
}


#if FCN_CALLS
SRTN R_go_like(VOID)
{


if(cat1==built_in)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,case_like,0,9850);
}
else SQUASH(pp,1,expr,-2,9851);


}
#endif


#if FCN_CALLS
SRTN R_end_like(VOID)
{

if(cat1==Rdo_like||cat1==if_like)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,endif_like,0,9860);

}
else
{
fcn_level--;
SQUASH(pp,1,END_like,-1,9861);
}


}
#endif


#if FCN_CALLS
SRTN R_END(VOID)
{

{
if(cat1==program_like||cat1==struct_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);

if(cat2==expr)
{
b_app(040);b_app1(pp+2);
REDUCE(pp,3,END_like,0,9860);
}
else
REDUCE(pp,2,END_like,0,9861);
}
else if(cat1==semi)
SQUASH(pp,2,END_stmt,-2,9862);
}


}
#endif


#if FCN_CALLS
SRTN R_endif_like(VOID)
{

{
short n;
boolean no_construct_name;

if((no_construct_name= BOOLEAN(cat1==semi))||(cat1==expr&&cat2==semi))
{
b_app(outdent);
b_app(force);

if(no_construct_name)
{
n= 2;
b_app2(pp);
}
else
{
n= 3;
b_app1(pp);b_app(040);b_app2(pp+1);
}

if(--indent_level<0)
indent_level= 0;

app_loop_num(loop_num[indent_level]);
REDUCE(pp,n,stmt,-2,9880);
}
}


}
#endif


#if FCN_CALLS
SRTN R_if_hd(VOID)
{


if(is_FORTRAN_(language))
{
if(cat1==stmt)
{
#if 0
b_app1(pp);b_app(break_space);b_app1(pp+1);
#endif
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,stmt,-2,9900);
}
}
else

{
if(cat1==stmt)
{
b_app1(pp);
indent_force;
b_app1(pp+1);
b_app(outdent);
REDUCE(pp,2,IF_top,-1,233);
}
else if(cat1==IF_top&&cat2==else_like)
SQUASH(pp,1,if_hd,2,234);
}




}
#endif


#if FCN_CALLS
SRTN R_else_like(VOID)
{


if(is_FORTRAN_(language))
{
if(cat1==if_like)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,else_like,0,9910);
}
else if(cat1==semi)
{
b_app(outdent);
b_app(force);
b_app2(pp);
app_loop_num(loop_num[indent_level-1]);
b_app(indent);
REDUCE(pp,2,stmt,-2,9911);
}
else if(cat1==expr&&cat2==built_in&&cat3==semi)

{
b_app(outdent);
b_app(force);

b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app1(pp+1);
b_app(040);
b_app2(pp+2);
app_loop_num(loop_num[indent_level-1]);

b_app(indent);
REDUCE(pp,4,stmt,-2,9912);
}
}

else
{
if(cat1==if_like)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,if_like,0,235);
}
else if(cat1==stmt||cat1==lbrace||cat1==for_like||cat1==do_like)
SQUASH(pp,1,else_hd,0,236);
#if 0 
else if(cat1==stmt)
{
b_app1(pp);b_app(040);b_app1(pp+1);
REDUCE(pp,2,ELSE_like,-1,237);
}
#endif
}




}
#endif


#if FCN_CALLS
SRTN R_stmt(VOID)
{


if(cat1==stmt||(free_Fortran&&cat1==decl))
{
b_app1(pp);
b_app(break_space);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-2,2501);
}
else if(cat1==functn)
{
b_app1(pp);b_app(big_force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-2,2511);
}


}
#endif


#if FCN_CALLS
SRTN R_CASE(VOID)
{


if(is_FORTRAN_(language))
{
b_app(backup);
b_app1(pp);
REDUCE(pp,1,case_like,0,9258);
}
else SQUASH(pp,1,case_like,0,9259);


}
#endif


#if FCN_CALLS
SRTN R_case_like(VOID)
{

if(cat1==read_like)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
REDUCE(pp,2,case_like,0,9260);
}
else if(cat1==semi)SQUASH(pp,2,stmt,-2,260);
else if(cat1==colon)
{
b_app1(pp);APP_STR("\\Colon\\ ");
REDUCE(pp,2,tag,-1,261);
}


else if(cat1==expr&&cat2==semi)
{
b_app1(pp);b_app(040);b_app2(pp+1);
REDUCE(pp,3,stmt,-2,262);
}
else if((cat1==expr||cat1==label)&&cat2==colon)
{
b_app1(pp);b_app(040);b_app1(pp+1);
APP_STR("\\Colon\\ ");
REDUCE(pp,3,tag,-1,263);
}


}
#endif


#if FCN_CALLS
SRTN R_tag(VOID)
{


if(cat1==tag)
{
b_app1(pp);b_app(force);
b_app(backup);
b_app1(pp+1);REDUCE(pp,2,tag,-1,270);
}
else if(cat1==stmt||cat1==END_like)
{
boolean end_of_loop;

end_of_loop= NO;


while(indent_level>0&&
compare_text(pp->trans,label_text_ptr[indent_level-1]))
{
--indent_level;
b_app(outdent);
end_of_loop= YES;
}

if(is_FORTRAN_(language)&&Fortran_label)
{
b_app(force);
APP_STR("\\Wlbl{");b_app1(pp);app(0175);

}
else
{
b_app(big_force);
b_app(backup);
b_app1(pp);
b_app(force);
}

b_app1(pp+1);

if(end_of_loop)
app_loop_num(loop_num[indent_level]);

REDUCE(pp,2,cat1,-2,271);
}



}
#endif


#if FCN_CALLS
SRTN R_label(VOID)
{

if(cat1==colon)
{
b_app1(pp);
REDUCE(pp,2,label,0,9270);


}
else if(cat1==stmt||cat1==END_like)
{
b_app1(pp);APP_STR("\\Colon\\ ");

if(is_FORTRAN_(language)&&Fortran_label)
b_app(cancel);

REDUCE(pp,1,tag,0,9271);

}


}
#endif


#if FCN_CALLS
SRTN R_semi(VOID)
{

if(is_RATFOR_(language)&&auto_semi)
{
text_pointer t;

t= indirect(pp->trans);

if(**t==073)**t= 0;
SQUASH(pp,1,ignore_scrap,-1,9280);
}
else
{
b_app(040);b_app1(pp);REDUCE(pp,1,stmt,-2,280);
}


}
#endif


#if FCN_CALLS
SRTN R_common_like(VOID)
{

if(cat1==expr||cat1==slashes||cat1==semi)
{
#if 0
b_app1(pp);
#if 0
if(cat1!=semi)
b_app(040);
#endif
b_app(indent);
REDUCE(pp,1,common_hd,0,9950);
#endif
SQUASH(pp,1,common_hd,0,9950);
}


}
#endif


#if FCN_CALLS
SRTN R_cmn_hd(VOID)
{


#if 0
if(cat1==expr)
SQUASH(pp,2,common_hd,0,9951);
else if(cat1==slashes)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
b_app(040);
REDUCE(pp,2,common_hd,0,9952);
}
else if(cat1==comma)
{
b_app2(pp);
b_app(040);
REDUCE(pp,2,common_hd,0,9953);
}

if(cat1==expr)
{
b_app1(pp);
OPT9;
b_app1(pp+1);
REDUCE(pp,2,common_hd,0,9951);
}
else if(cat1==slashes)
{
SQUASH(pp,2,common_hd,0,9952);
}
else if(cat1==comma)
{
SQUASH(pp,2,common_hd,0,9953);
}
else if(cat1==semi)
{
b_app2(pp);
b_app(outdent);
REDUCE(pp,2,decl,-1,9954);
}
#endif
if(cat1==slashes)
SQUASH(pp,2,int_like,0,9952);
else
SQUASH(pp,1,int_like,0,9951);


}
#endif


#if FCN_CALLS
SRTN R_read_like(VOID)
{


if(cat1==lpar&&cat2==expr&&cat3==rpar)
{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
b_app3(pp+1);
b_app(040);
REDUCE(pp,4,read_hd,0,9960);
}
else if(cat1==expr&&cat2==comma)
{
b_app1(pp);
b_app(040);
b_app2(pp+1);
b_app(040);
REDUCE(pp,3,read_hd,0,9961);
}
else if(cat1==expr||cat1==unorbinop)
{
b_app1(pp);b_app(040);b_app1(pp+1);

if(cat2==expr)b_app(040);

REDUCE(pp,2,read_hd,0,9962);
}
else if(cat1==semi)SQUASH(pp,1,read_hd,0,9963);



}
#endif


#if FCN_CALLS
SRTN R_rd_hd(VOID)
{

if(cat1==comma)
{
b_app2(pp);
b_app(040);
REDUCE(pp,2,read_hd,0,9965);
}
else if(cat1==expr)
{
if(cat2==comma||cat2==semi)
SQUASH(pp,2,read_hd,0,9966);
}
else if(cat1==semi&&cat2==read_like)
{
b_app1(pp);
b_app1(pp+1);
b_app(force);
b_app1(pp+2);
REDUCE(pp,3,read_like,0,9967);
}
else if(cat1==semi)
{
b_app1(pp);
b_app1(pp+1);
REDUCE(pp,2,stmt,-2,9968);
}


}
#endif


#if FCN_CALLS
SRTN R_implicit_like(VOID)
{

if(cat1==int_like||cat1==expr)

{
b_app1(pp);
b_app(040);
b_app(indent);
REDUCE(pp,1,implicit_hd,0,9970);
}
else if(cat1==semi)
{
b_app1(pp);
b_app(indent);
REDUCE(pp,1,implicit_hd,0,99700);
}


}
#endif


#if FCN_CALLS
SRTN R_imp_hd(VOID)
{

if(cat1==unorbinop&&cat2==expr)
{
b_app1(pp);
b_app(0173);b_app2(pp+1);b_app(0175);

{
b_app(0134);b_app(054);
}

;
REDUCE(pp,3,implicit_hd,0,9971);
}
else if(cat1==expr)SQUASH(pp,2,implicit_hd,0,9972);

else if(cat1==comma||cat1==int_like)
{
b_app2(pp);

if(cat2!=unorbinop)
if(cat2==int_like)b_app(040);

else
{
b_app(0134);b_app(054);
}

;

REDUCE(pp,2,implicit_hd,0,9973);
}
else if(cat1==semi)SQUASH(pp,1,decl_hd,0,9974);



}
#endif


#if FCN_CALLS
SRTN R_assign_like(VOID)
{

if(cat1==expr&&cat2==built_in&&cat3==expr)
{
b_app1(pp);
b_app(040);
b_app1(pp+1);
b_app(040);
b_app1(pp+2);
b_app(040);
b_app1(pp+3);
REDUCE(pp,4,expr,0,9980);
}


}
#endif


#if FCN_CALLS
SRTN R_entry_like(VOID)
{

if(cat1==expr&&cat2==semi)
{
b_app(big_force);
b_app(backup);b_app1(pp);b_app(040);b_app2(pp+1);b_app(force);
REDUCE(pp,3,stmt,-2,9990);
}
else if(cat1==(eight_bits)(language==FORTRAN_90?semi:colon))
{
b_app(big_force);
b_app(backup);b_app2(pp);b_app(force);

containing++;
#if(0)
b_app(indent);
#endif
REDUCE(pp,2,stmt,-2,9991);
}


}
#endif


#if FCN_CALLS
SRTN R_define_like(VOID)
{

if(cat1==expr)
{
b_app(force);
b_app(backup);b_app2(pp);b_app(force);
REDUCE(pp,2,ignore_scrap,-1,9995);
}


}
#endif


#if FCN_CALLS
SRTN R_no_order(VOID)
{

intermingle= YES;
b_app(force);
b_app1(pp);b_app(040);
REDUCE(pp,1,int_like,0,9996);



}
#endif


#if FCN_CALLS
SRTN R_built_in(VOID)
{

{
b_app1(pp);

{
b_app(0134);b_app(054);
}

;
REDUCE(pp,1,expr,-2,9998);
}


}
#endif


#if FCN_CALLS
SRTN R_newline(VOID)
{

SQUASH(pp,1,ignore_scrap,-1,9999);


}
#endif


SRTN
V_productions(VOID)
{
switch(pp->cat)
{
case expr:

break;
case stmt:

break;
}
}


SRTN
X_productions(VOID)
{
switch(pp->cat)
{
case expr:
{
if(cat1==expr)SQUASH(pp,2,expr,0,5);
else if(cat1==semi)
{
b_app1(pp);
REDUCE(pp,2,stmt,-1,6);
}
}

break;
case stmt:
{
if(cat1==stmt)
{
b_app1(pp);
b_app(force);
b_app1(pp+1);
REDUCE(pp,2,stmt,-1,250);
}
}

break;
}
}


SRTN
reduce FCN((j,k,c,d,n))
scrap_pointer j C0("")
short k C0("Number of items to be reduced.")
eight_bits c C0("Reduce to this type.")
short d C0("Move by this amount.")
RULE_NO n C1("Rule number.")
{
scrap_pointer i,i1;


j->cat= c;j->trans= text_ptr;
j->mathness= (eight_bits)(4*last_mathness+ini_mathness);
freeze_text;



if(k>1)
{
for(i= j+k,i1= j+1;i<=lo_ptr;i++,i1++)
{
i1->cat= i->cat;i1->trans= i->trans;
i1->mathness= i->mathness;
}

lo_ptr= lo_ptr-k+1;
}



if(pp+d>=scrp_base)pp= pp+d;
else pp= scrp_base;

;

#ifdef DEBUG

{
scrap_pointer k;



{
static RULE_NO last_rule= ULONG_MAX;
static int ncycles= 0;

if(n&&n==last_rule)
{
if(ncycles++>MAX_CYCLES)
{

confusion(OC("reduce"),OC("Infinite production loop, rule %lu"),n);
}
}
else
{
last_rule= n;
ncycles= 0;
}
}



if(tracing==VERBOSE)
{
printf("%5lu",n);

if(in_prototype)
printf(".%i",in_prototype);

printf(": ");

for(k= scrp_base;k<=lo_ptr;k++)
{
if(k==pp)
putxchar('*');
else
putxchar(' ');

prn_math(k);
}

if(hi_ptr<=scrp_ptr)printf("...");



{
printf(" ==\"");

if(lo_ptr>scrp_base)
{
prn_trans(lo_ptr-1);
printf("\" \"");
}

prn_trans(lo_ptr);
puts("\"");
}



}
}

;
#endif 

pp--;
}


SRTN
squash FCN((j,k,c,d,n))
scrap_pointer j C0("")
short k C0("Number to be squashed.")
eight_bits c C0("Make it this type.")
short d C0("Move by this amount.")
RULE_NO n C1("Rule number.")
{
scrap_pointer i;

if(k==1)
{
j->cat= c;

if(pp+d>=scrp_base)pp= pp+d;
else pp= scrp_base;

;

#ifdef DEBUG

{
scrap_pointer k;



{
static RULE_NO last_rule= ULONG_MAX;
static int ncycles= 0;

if(n&&n==last_rule)
{
if(ncycles++>MAX_CYCLES)
{

confusion(OC("reduce"),OC("Infinite production loop, rule %lu"),n);
}
}
else
{
last_rule= n;
ncycles= 0;
}
}



if(tracing==VERBOSE)
{
printf("%5lu",n);

if(in_prototype)
printf(".%i",in_prototype);

printf(": ");

for(k= scrp_base;k<=lo_ptr;k++)
{
if(k==pp)
putxchar('*');
else
putxchar(' ');

prn_math(k);
}

if(hi_ptr<=scrp_ptr)printf("...");



{
printf(" ==\"");

if(lo_ptr>scrp_base)
{
prn_trans(lo_ptr-1);
printf("\" \"");
}

prn_trans(lo_ptr);
puts("\"");
}



}
}

;
#endif 

pp--;
return;
}

for(i= j;i<j+k;i++)b_app1(i);

reduce(j,k,c,d,n);
}


text_pointer
translate FCN((mode0))
PARSING_MODE mode0 C1("")
{
LANGUAGE saved_language= language;
scrap_pointer i,
j;

translate_mode= mode0;

pp= scrp_base;lo_ptr= pp-1;hi_ptr= pp;


#ifdef DEBUG
if(tracing==VERBOSE)
{
CLR_PRINTF(ALWAYS,warning,
("\nTracing after l. %u (language = %s):  ",
cur_line,languages[lan_num(language)]));
mark_harmless;

if(loc>=cur_buffer+OUT_WIDTH)
{
printf("...");
ASCII_write(loc-OUT_WIDTH,OUT_WIDTH);
}
else ASCII_write(cur_buffer,loc-cur_buffer);

puts("");
}
#endif 

;

{
in_prototype= indented= NO;

WHILE()
{


if(lo_ptr<pp+3)
{
while(hi_ptr<=scrp_ptr&&lo_ptr!=pp+3)
{
(++lo_ptr)->cat= hi_ptr->cat;lo_ptr->mathness= (hi_ptr)->mathness;
lo_ptr->trans= (hi_ptr++)->trans;
}

for(i= lo_ptr+1;i<=pp+3;i++)i->cat= 0;
}

;

if(tok_ptr+8>tok_m_end)
{
if(tok_ptr>mx_tok_ptr)mx_tok_ptr= tok_ptr;
OVERFLW("tokens","tw");
}

if(text_ptr+4>tok_end)
{
if(text_ptr>mx_text_ptr)mx_text_ptr= text_ptr;
OVERFLW("texts","x");
}

if(pp>lo_ptr)
break;


{
if(cat0==language_scrap)
{
language= lan_enum(get_language(pp->trans));

ini0_language();
SQUASH(pp,1,ignore_scrap,-1,0);
}
else if(cat1==ignore_scrap)SQUASH(pp,2,cat0,-2,0);
else switch(language)
{
case NO_LANGUAGE:

confusion(OC("match production"),OC("Language hasn't been defined yet"));

case C:
case C_PLUS_PLUS:
C_productions();
break;

case RATFOR:
case RATFOR_90:
if(!RAT_OK("(translate)"))

confusion(OC("match production"),OC("Language shouldn't be Ratfor here"));

case FORTRAN:
case FORTRAN_90:
R_productions();
break;

case LITERAL:
V_productions();
break;

case TEX:
X_productions();
break;

case NUWEB_OFF:
case NUWEB_ON:

confusion(OC("match a production"),OC("Invalid language"));
}

pp++;
}

;
ini_mathness= cur_mathness= last_mathness= maybe_math;
}
}



{
EXTERN int math_flag;



#ifdef DEBUG
{
scrap_pointer scrap0= scrp_base;

while(scrap0->cat==ignore_scrap)scrap0++;

if(lo_ptr>scrap0&&tracing==BRIEF)
{
CLR_PRINTF(ALWAYS,warning,
("\nIrreducible scrap sequence in %s:",
MOD_TRANS(module_count)));
mfree();
mark_harmless;

for(j= scrap0;j<=lo_ptr;j++)
{
printf(" ");prn_cat(j->cat);
}
}
}
#endif 

;

for(j= scrp_base;j<=lo_ptr;j++)
{
if(j!=scrp_base)
app(040);

if((INI_MATHNESS(j)==yes_math)&&math_flag==NO)
{
app(044);
#ifdef DBGM
app(067);
#endif
}

if((INI_MATHNESS(j)==no_math)&&math_flag==YES)
{
app(040);

#ifdef DBGM
app(070);
#endif
app(044);
}

app1(j);

if((LAST_MATHNESS(j)==yes_math)&&math_flag==NO)
{
#ifdef DBGM
app(071);
#endif
app(044);
}

if((LAST_MATHNESS(j)==no_math)&&math_flag==YES)
{
app(044);
#ifdef DBGM
app(060);
#endif
app(040);
}

if(tok_ptr+6>tok_m_end)OVERFLW("tokens","tw");
}

freeze_text;
}

;

language= saved_language;
return text_ptr-1;
}


#endif 








