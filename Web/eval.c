#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/eval -A -# --F -= 1.62/Web/eval.c"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/eval.web"\
  CHANGE FILE:  (none)
#endif
#define _EVAL_h   \

#define BP_MARKER  1 \

#define PROPER_END(end) \
end= (np+1)->byte_start; \
if(*end==BP_MARKER&&np!=npmax)end= ((BP*)end)->byte_start \

#define MAX_ID_LENGTH  32 \

#define stringg  (eight_bits)02
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

#define BINARY(l,token)switch(val0->type) \
{ \
case Int: \
val0->value.i= val0->value.i token val1->value.i; \
break; \
 \
case Double: \
val0->value.l= val0->value.d token val1->value.d; \
break; \
 \
case Id: \
misplaced_id(val0->value.id,val1->value.id); \
 \
default: \
 \
{ \
if(eval_msgs) \
macro_err(OC("! Shouldn't have type Op here"),YES);longjmp(top_of_evaluate,1); \
} \
} \

#define ARITH(token)BINARY(d,token)break \

#define LOG(token)BINARY(i,token)val0->type= Int;break \

#define BIT(token)if(val0->type!=Int) \
{ \
if(eval_msgs) \
macro_err(OC("! Invalid type %s in bit \
operation. (Macro not defined?)"),YES,stype(val0->type));longjmp(top_of_evaluate,1); \
} \
val0->value.i= val0->value.i token val1->value.i; \
break \

#define DEFINED_TOKEN  (eight_bits)023
#define UNARY_MINUS  (eight_bits)024 \

#define LOWEST_PRECEDENCE  1
#define HIGHEST_PRECEDENCE  13 \
 \
 \
 \

#define IS_UNARY(token)((int)precedence(token)>=(int)UNARY)
#define IS_BINARY(token)((int)precedence(token)<(int)UNARY) \

#define TO_DOUBLE(v)CONVERT_TO(Double,d,double,v)
#define TO_ID(v)CONVERT_TO(Id,id,sixteen_bits,v) \

#define CONVERT_TO(t,lhs,cast,v)if(v->type!=t) \
{ \
v->value.lhs= (cast)v->value.i; \
v->type= t; \
} \



#include "typedefs.h"








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




VAL HUGE*val_heap;
VAL HUGE*val_ptr;




#include "e_type.h" 
#include "r_type.h" 







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



static jmp_buf top_of_evaluate;
boolean eval_msgs ESET(YES);







outer_char*stype FCN((type))
TYPE type C1("Type whose name is desired.")
{
switch(type)
{
case Int:return OC("Int");
case Double:return OC("Double");
case Id:return OC("Id");
case Op:return OC("Op");
default:return OC("UNKNOWN");
}
}


boolean eval FCN((p0,p1))
CONST eight_bits HUGE*p0 C0("Beginning of tokens.")
CONST eight_bits HUGE*p1 C1("End of tokens.")
{
VAL val;

EVALUATE(val,p0,p1);

switch(val.type)
{
case Int:return(boolean)(val.value.i!=0);
case Double:return(boolean)(val.value.d!=0.0);
default:
if(eval_msgs)
macro_err(OC("! Non-numeric type returned from eval \
(undefined macro?); assumed FALSE"),YES);
return 0;
}
}


int neval FCN((p0,p1))
CONST eight_bits HUGE*p0 C0("Beginning of tokens.")
CONST eight_bits HUGE*p1 C1("End of tokens.")
{
VAL val;

EVALUATE(val,p0,p1);

switch(val.type)
{
case Int:return(int)(val.value.i);
case Double:return(int)(val.value.d);
default:
if(eval_msgs)
macro_err(OC("! Non-numeric type returned from neval \
(undefined macro?); assumed 0"),YES);
return 0;
}
}


SRTN i_eval_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
VAL val;
eight_bits HUGE*p0;

CHK_ARGS("$EVAL",1);

p0= pargs[0]+1;
EVALUATE(val,p0,pargs[1]);


{
MCHECK0(2,"expansion |constant|");

*mp++= constant;

switch(val.type)
{
case Int:

nsprintf((outer_char*)mp,OC("%ld"),1,val.value.i);
break;

case Double:

nsprintf((outer_char*)mp,OC("%#.*g"),2,DBL_DIG,val.value.d);

break;

case Id:
MCHECK0(pargs[1]-p0,"Id");
mp--;
while(p0<pargs[1])*mp++= *p0++;
return;

default:
if(eval_msgs)
macro_err(OC("! Invalid type returned from _eval_"),YES);
return;
}

fin_constant(val.type);
}

;
}


CONST eight_bits HUGE*evaluate FCN((val,p0,p1))
VAL HUGE*val C0("Return the evaluated |DATA| structure here.")
CONST eight_bits HUGE*p0 C0("Beginning of the input tokens.")
CONST eight_bits HUGE*p1 C1("End of the input tokens.")
{
if(setjmp(top_of_evaluate)==0)return eval0(val,p0,p1,(eight_bits)'\0');

else
{
val->type= Id;
val->value.id= ignore;
return p1;
}
}


CONST eight_bits HUGE*eval0 FCN((val,p0,p1,delim))
VAL HUGE*val C0("Return the evaluated |DATA| structure here.")
CONST eight_bits HUGE*p0 C0("Beginning of the input tokens.")
CONST eight_bits HUGE*p1 C0("End of the input tokens.")
eight_bits delim C1("End the scan when this token is encountered.")
{
CONST eight_bits HUGE*p;
eight_bits a;
sixteen_bits id;
VAL v_root,v_end;
VAL HUGE*v;
VAL HUGE*v0= &v_root,HUGE*v1= &v_end;

VAL HUGE*vlast,HUGE*vnext;
int prec;
boolean at_start;
eight_bits last_op;


int k,found_op[HIGHEST_PRECEDENCE+1];


for(k= LOWEST_PRECEDENCE;k<=HIGHEST_PRECEDENCE;k++)found_op[k]= 0;


if(p0>=p1||*p0==delim)
{
if(eval_msgs)
macro_err(OC("! Null expression encountered during expression \
evaluation; 0 assumed"),YES);
val->type= Int;
val->value.i= 0;

if(*p0==delim)return p0+1;
else return p1;
}


{
at_start= YES;
last_op= ignore;

for(p= p0,vlast= v0,v= v0->next= ++val_ptr,v->last= vlast;p<p1;)
{
if(TOKEN1(a= *p++))

{
if(a==delim)
break;

reswitch:
switch(a)
{
case 050:
last_op= ignore;
p= eval0(v,p,p1,051);

break;

case dot_const:
{
extern DOTS dots0[];
DOTS*d;
int num= *p++;

if(num>14)
{
if(eval_msgs)
macro_err(OC("! May only use predefined dot \
constants such as .AND. here"),YES);longjmp(top_of_evaluate,1);
};

d= dots0+num;

if(d->cat==expr)
{
if(eval_msgs)
macro_err(OC("! .FALSE. and .TRUE. are not handled \
by the expression evaluator.  Please use 0 or 1 instead"),YES);longjmp(top_of_evaluate,1);
}
if(d->cat!=binop)
{
if(eval_msgs)
macro_err(OC("! Invalid dot constant during \
expression evaluation; was expecting binary operator"),YES);longjmp(top_of_evaluate,1);
}
a= d->token;
goto reswitch;
}

case constant:
last_op= ignore;
p= vfill(v,p,p1);
break;

case stringg:
while(*p++!=stringg);

continue;

case 040:
case tab_mark:
continue;

case 055:
if(last_op||at_start)a= UNARY_MINUS;
last_op= ignore;

default:
if((prec= (int)precedence(a))>0)
{
if(last_op&&((IS_UNARY(last_op)&&IS_UNARY(a))
||(IS_BINARY(last_op)&&IS_BINARY(a))))

{
if(eval_msgs)
macro_err(OC("! Adjacent operators \"%s %s\" \
not allowed in expression"),YES,op_name(last_op),op_name(a));longjmp(top_of_evaluate,1);
}

v->type= Op;
last_op= v->value.op.token= a;
found_op[(int)(v->value.op.precedence= (PRECEDENCE)prec)]++;
}
else
{
if(eval_msgs)
macro_err(OC(_Xx("! Invalid token '%c' (0x%x) in \
expression")),YES,a>=040?a:'?',a);longjmp(top_of_evaluate,1);
}
break;
}

at_start= NO;
}


else

{
at_start= NO;last_op= ignore;

if((id= IDENTIFIER(a,*p++))==id_defined)
{
v->type= Op;
last_op= v->value.op.token= DEFINED_TOKEN;
found_op[(int)(v->value.op.precedence= precedence(DEFINED_TOKEN))]++;
}
else
{
v->type= Id;
v->value.id= id;
}
}





vlast= v;v= v->next= ++val_ptr;v->last= vlast;
}

vlast->next= v1;
v1->last= vlast;
}




for(prec= (int)HIGHEST_UNARY;prec>=(int)UNARY;prec--)
if(found_op[prec])
for(v= v0->next;v!=v1;v= vnext)
{
vnext= v->next;

if(v->type==Op&&v->value.op.precedence==(PRECEDENCE)prec)
{
switch(v->value.op.token)
{
case DEFINED_TOKEN:

{
text_pointer m;

if(vnext->type!=Id)

{
if(eval_msgs)
macro_err(OC("! 'defined' must act on identifier, not type %s"),NO,stype(vnext->type));longjmp(top_of_evaluate,1);
}
else v->value.i= ((m= mac_lookup(vnext->value.id))!=NULL&&!(m->built_in));

v->type= Int;
}

;break;

case 041:


switch(vnext->type)
{
case Int:
v->value.i= !(vnext->value.i);
break;

case Double:
v->value.i= !(vnext->value.d);
break;

default:

{
if(eval_msgs)
macro_err(OC("! Can't negate type %s"),YES,stype(vnext->type));longjmp(top_of_evaluate,1);
}
}

v->type= Int


;break;

case 0176:


if(vnext->type!=Int)
{
if(eval_msgs)
macro_err(OC("! Can't take one's complement of type %s; \
operand converted to integer"),YES,stype(vnext->type));
v->value.i= (long)(vnext->value.d);
}

v->type= Int;
v->value.i= ~vnext->value.i

;break;

case UNARY_MINUS:


switch(v->type= vnext->type)
{
case Int:
v->value.i= -(vnext->value.i);break;

case Double:
v->value.d= -(vnext->value.d);break;

default:

{
if(eval_msgs)
macro_err(OC("! Missing or invalid operand of unary minus \
has type %s"),NO,stype(v->type));longjmp(top_of_evaluate,1);
}
}

;break;
}



v->next= vnext->next;
v->next->last= v;
vnext= v->next;

if(!(--found_op[prec]))break;
}
}





v0= eval1(v0,v1,(PRECEDENCE)LOWEST_PRECEDENCE,found_op);
val->type= v0->type;
val->value= v0->value;

for(k= LOWEST_PRECEDENCE;k<=HIGHEST_PRECEDENCE;k++)
if(found_op[k])

{
if(eval_msgs)
macro_err(OC("! Missing operand(s) at precedence \
level %d (null macro?)"),YES,k);longjmp(top_of_evaluate,1);
};

return p;
}


CONST eight_bits HUGE*vfill FCN((v,p0,p1))
VAL HUGE*v C0("To be filled.")
CONST eight_bits HUGE*p0 C0("Start of expression.")
CONST eight_bits HUGE*p1 C1("End of expression.")
{
CONST eight_bits HUGE*p;
eight_bits a;
ASCII temp[100];
ASCII HUGE*t;
TYPE type= Int;


for(p= p0,t= temp;p<p1;)
{
if((a= *p++)==constant)break;

if(a==056||a==0145||a==0105||a==0144||a==0104)type= Double;

*t++= a;
}

*t= '\0';


switch(v->type= type)
{
case Int:
if(temp[0]==060)
if(temp[1]==0170||temp[1]==0130)
v->value.i= xtoi(temp,t);
else if(temp[1]==0142||temp[1]==0102)
v->value.i= btoi(temp,t);
else v->value.i= otoi(temp,t);
else v->value.i= ATOL(to_outer(temp));
break;

case Double:
v->value.d= ATOF(to_outer(temp));
break;

default:

confusion(OC("vfill"),OC("Type must be Int or Double here"));
}

return p;
}


VAL HUGE*eval1 FCN((v0,v1,prec0,found_op))
CONST VAL HUGE*v0 C0("Start of list.")
CONST VAL HUGE*v1 C0("End of list.")
PRECEDENCE prec0 C0("Start scanning with this value of precedence.")
int found_op[]C1("Array of flags---was an operator found at \
each precedence level?")
{
int prec;
VAL HUGE*v,
HUGE*val0,HUGE*val1;


if(v0->next==v1->last)return v0->next;

for(prec= (int)prec0;prec<(int)UNARY;prec++)
if(found_op[prec])
for(v= v1->last;v!=v0;v= v->last)
{
if(v->type==Op&&v->value.op.precedence==(PRECEDENCE)prec)
{
val0= eval1(v0,v,(PRECEDENCE)LOWEST_PRECEDENCE,
found_op);
val1= eval1(v,v1,(PRECEDENCE)(prec+1),found_op);

promote(val0,val1);



switch(v->value.op.token)
{
case star_star:


switch(val0->type)
{
case Int:
val0->value.i= 
(long)pow((double)val0->value.i,(double)val1->value.i);
break;

case Double:
val0->value.d= pow(val0->value.d,val1->value.d);
break;

default:

{
if(eval_msgs)
macro_err(OC("! Invalid operand of exponentiate has type %s"),NO,stype(val0->type));longjmp(top_of_evaluate,1);
}
}

;break;

case 052:ARITH(*);
case 057:chk_zero('/',val1);ARITH(/);
case 045:chk_zero('%',val1);BIT(%);

case 053:ARITH(+);
case 055:ARITH(-);

case lt_lt:BIT(<<);
case gt_gt:BIT(>>);

case 074:LOG(<);
case lt_eq:LOG(<=);
case 076:LOG(>);
case gt_eq:LOG(>=);

case eq_eq:
if(val0->type==Id&&val1->type==Id)
{
val0->value.i= val0->value.id==val1->value.id;
val0->type= Int;
break;
}
else
LOG(==);

case not_eq:
if(val0->type==Id&&val1->type==Id)
{
val0->value.i= val0->value.id!=val1->value.id;
val0->type= Int;
break;
}
else
LOG(!=);

case 046:BIT(&);
case 0136:case neqv:BIT(^);
case 0174:BIT(|);

case and_and:BIT(&&);
case or_or:BIT(||);
}




found_op[prec]--;
return val0;
}
}


{
if(eval_msgs)
macro_err(OC("! Missing binary operator, or undefined macro"),YES);longjmp(top_of_evaluate,1);
}

DUMMY_RETURN(NULL);
}


SRTN chk_zero FCN((c,pv))
outer_char c C0("Operator.")
CONST VAL HUGE*pv C1("Right-hand operand.")
{
boolean is_zero= NO;

switch(pv->type)
{
case Int:
if(pv->value.i==0)is_zero= YES;
break;

case Double:
if(pv->value.d==0.0)is_zero= YES;
break;

default:

{
if(eval_msgs)
macro_err(OC("! Right operand of '%c' must have type Int or \
Double"),YES,c);longjmp(top_of_evaluate,1);
}
}

if(is_zero)
{
if(eval_msgs)
macro_err(OC("! RIGHT OPERAND OF '%c' IS ZERO"),YES,c);longjmp(top_of_evaluate,1);
}
}


SRTN misplaced_id FCN((a0,a1))
sixteen_bits a0 C0("Left-hand token.")
sixteen_bits a1 C1("Right-hand token.")
{
outer_char left_id[MAX_ID_LENGTH],right_id[MAX_ID_LENGTH];

STRCPY(left_id,name_of(a0));
STRCPY(right_id,name_of(a1));


{
if(eval_msgs)
macro_err(OC("! Identifier not allowed as binary operand:  \
left = \"%s\" (%d), right = \"%s\" (%d).  (Undefined WEB macro?)"),NO,left_id,a0,right_id,a1);longjmp(top_of_evaluate,1);
}
}


PRECEDENCE precedence FCN((token))
eight_bits token C1("Operator token whose precedence is desired.")
{
switch(token)
{
case DEFINED_TOKEN:
return HIGHEST_UNARY;


case 041:
case 0176:
case UNARY_MINUS:
return UNARY;


case star_star:
return EXP;


case 052:
case 057:
case 045:
return TIMES;


case 053:
case 055:
return PLUS_MINUS;


case lt_lt:
case gt_gt:
return BIT_SHIFT;


case 074:case lt_eq:
case 076:case gt_eq:
return LOG_LT;


case eq_eq:
case not_eq:
return LOG_EQ;


case 046:
return BIT_AND;


case 0136:
case neqv:
return BIT_XOR;


case 0174:
return BIT_OR;


case and_and:
return AND_AND;


case or_or:
return OR_OR;

default:
return BAD_TOKEN;
}
}



#define NAME(token,name) case token: return OC(name)

outer_char*op_name FCN((token))
eight_bits token C1("Operator token whose name is desired.")
{
switch(token)
{
NAME(DEFINED_TOKEN,"defined");
NAME(041,"!");
NAME(0176,"~");
NAME(UNARY_MINUS,"-");
NAME(star_star,"**");
NAME(052,"*");
NAME(057,"/");
NAME(045,"%");
NAME(053,"+");
NAME(055,"-");
NAME(lt_lt,"<<");
NAME(gt_gt,">>");
NAME(074,"<");
NAME(lt_eq,"<=");
NAME(076,">");
NAME(gt_eq,">=");
NAME(eq_eq,"==");
NAME(not_eq,"!=");
NAME(046,"&");
NAME(0136,"^");
NAME(neqv,"?=");
NAME(0174,"|");
NAME(and_and,"&&");
NAME(or_or,"||");

default:return OC("(UNKNOWN)");
}
}

#undef NAME


SRTN promote FCN((v0,v1))
VAL HUGE*v0 C0("Left-hand value.")
VAL HUGE*v1 C1("Right-hand value.")
{
if((int)v0->type>(int)v1->type)convert_to(v0->type,v0,v1);
else convert_to(v1->type,v0,v1);
}

SRTN convert_to FCN((type,v0,v1))
TYPE type C0("Type to be converted to.")
VAL HUGE*v0 C0("Left-hand value.")
VAL HUGE*v1 C1("Right-hand value.")
{
switch(type)
{
case Int:break;

case Double:
TO_DOUBLE(v0);
TO_DOUBLE(v1);
break;

case Id:
TO_ID(v0);
TO_ID(v1);
break;

default:

{
if(eval_msgs)
macro_err(OC("! Invalid data type %s in promotion"),NO,stype(type));longjmp(top_of_evaluate,1);
}
}
}


SRTN i_lang_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
outer_char temp[5],*temp1= temp+1;
sixteen_bits l;

CHK_ARGS("$LANGUAGE",0);


STRCPY(temp,"$N");

switch(language)
{
case C:
*temp1= 'C';break;

case C_PLUS_PLUS:
STRCPY(temp1,"CPP");break;

case RATFOR:
if(!RAT_OK("(_LANGUAGE)"))

confusion(OC("_lang_"),OC("Language shouldn't be Ratfor here"));
*temp1= 'R';break;

case RATFOR_90:
if(!RAT_OK("(_LANGUAGE)"))

confusion(OC("_lang_"),OC("Language shouldn't be Ratfor here"));
STRCPY(temp1,"R90");break;

case TEX:
*temp1= 'X';break;

case LITERAL:
*temp1= 'V';break;

case FORTRAN:
default:
*temp1= 'N';break;

case FORTRAN_90:
STRCPY(temp1,"N90");break;
}

to_ASCII(temp);
l= ID_NUM((ASCII HUGE*)temp,(ASCII HUGE*)(temp+STRLEN(temp)));

MCHECK0(2,"language token");
*mp++= LEFT(l,ID0);
*mp++= RIGHT(l);
}


SRTN i_lnum_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
num_to_mbuf(n,pargs,"$LANGUAGE_NUM",0,"language number",stnd_num(language));
}


unsigned stnd_num FCN((Language))
LANGUAGE Language C1("")
{
proper_language:
switch(Language)
{
case C:return 0;
case C_PLUS_PLUS:return 1;
case FORTRAN:return 2;
case FORTRAN_90:return 3;
case RATFOR:return 4;
case RATFOR_90:return 5;
case TEX:return 6;
case LITERAL:return 7;
default:
Language= global_language;
goto proper_language;
}
}


SRTN e_macros(VOID)
{


SAVE_MACRO("$EVAL(expr)$$EVAL(expr)");



SAVE_MACRO("$POW(x,y)$EVAL((x)^^(y))");



SAVE_MACRO("$PI(...)$$CONST(\"$PI\", \".31415926535897932384626433832795028\
8419716939937510\",#.)");

SAVE_MACRO("$E(...)$$CONST(\"$E\", \".2718281828459045235360287471352662497\
75724709369995\",#.)");

SAVE_MACRO("$EXP(x)$POW($E, x)");
SAVE_MACRO("$SQRT(x)$POW(x, 0.5)");



SAVE_MACRO("$LOG(x)$$LOG(0, x)");
SAVE_MACRO("$LOG10(x)$$LOG(1, x)");



SAVE_MACRO("$MIN(a,...)$$MIN_MAX(0, a, #.)");
SAVE_MACRO("$MAX(a,...)$$MIN_MAX(1, a, #.)");

;
}



SRTN i_const_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
VAL val;
int prec,carry;

if(n==2)
prec= DBL_DIG;
else
{
CHK_ARGS("$$CONST",3);
EVALUATE(val,pargs[2]+1,pargs[3]);
if(val.type!=Int)
{
if(eval_msgs)
macro_err(OC("! Precision argument of $PI or $E must be an \
integer; default precision of %d assumed"),YES,DBL_DIG);
prec= DBL_DIG;
}
else
{
prec= (int)MIN(val.value.i,49L);
prec= MAX(prec,0);
}
}

prec+= 2;

MCHECK0(prec+2,"math constant");

*mp++= constant;
STRNCPY(mp,pargs[1]+3,prec+1);



n= prec;
carry= (mp[n--]>=065);

while(carry)
{
mp[n]+= 1;

if(mp[n]>071)
mp[n--]= 060;
else
break;
}

mp[0]= mp[1];
mp[1]= 056;

mp+= prec;

if(FORTRAN_LIKE(language))
{

MCHECK0(2,"d0");
*mp++= 0144;
*mp++= 060;
}

*mp++= constant;
}


SRTN i_log_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
int m;
VAL val;
double x,y;

m= *(pargs[0]+2)-060;
EVALUATE(val,pargs[1]+1,pargs[2]);

if(val.type==Int)
x= (double)val.value.i;
else if(val.type==Double)
x= val.value.d;
else
{
if(eval_msgs)
macro_err(OC("! Invalid argument to $LOG or $LOG10 (undefined \
macro?); expansion aborted"),YES);
return;
}

if(m==0)
y= log(x);
else
y= log10(x);

MCHECK0(DBL_DIG+2,"$$LOG");
*mp++= constant;
sprintf((char*)mp,"%#.*g",DBL_DIG,y);

fin_constant(Double);
}


SRTN fin_constant FCN((type))
TYPE type C1("")
{
int n= STRLEN(mp);

if(type==Double)
while(mp[n-1]==060)
{
if(mp[n-2]==056)
break;

n--;
}

to_ASCII(mp);
mp+= n;
*mp++= constant;
}


SRTN i_min_max_ FCN((n,pargs))
int n C0("")
PARGS pargs C1("")
{
int m= *(pargs[0]+2)-060;
long l= 0;
double z= 0;
double v= 0;
VAL val;
TYPE type;
int k;

EVALUATE(val,pargs[1]+1,pargs[2]);

type= val.type;

if(type==Int)
l= val.value.i;
else
z= val.value.d;

for(k= 2;k<n;k++)
{
EVALUATE(val,pargs[k]+1,pargs[k+1]);

if(val.type==Double)
{
if(type==Int)
z= (double)l;

type= Double;
}

if(type==Double)
if(val.type==Int)
v= (double)val.value.i;
else
v= val.value.d;

if(type==Int)
if(m==0)
{
if(val.value.i<l)
l= val.value.i;
}
else
{
if(val.value.i>l)
l= val.value.i;
}
else
if(m==0)
{
if(v<z)
z= v;
}
else
{
if(v>z)
z= v;
}
}

MCHECK0(DBL_DIG+2,"min_max");
*mp++= constant;

if(type==Int)
sprintf((char*)mp,"%ld",l);
else
sprintf((char*)mp,"%#.*g",DBL_DIG,z);

fin_constant(type);
}


