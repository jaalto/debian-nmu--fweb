#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/e_type -A -# --F -= 1.62/Web/e_type.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/e_type.web"
  CHANGE FILE:  (none)
#endif


#include "c_type.h" 

SRTN i_eval_ PROTO((int n,PARGS pargs));
SRTN i_const_ PROTO((int n,PARGS pargs));
SRTN i_log_ PROTO((int n,PARGS pargs));
SRTN i_min_max_ PROTO((int n,PARGS pargs));

unsigned long btoi PROTO((CONST ASCII HUGE*b,CONST ASCII HUGE*b1));
SRTN chk_zero PROTO((outer_char c,CONST VAL HUGE*pv));
SRTN convert_to PROTO((TYPE type,VAL HUGE*v0,VAL HUGE*v1));
SRTN e_macros PROTO((VOID));
boolean eval PROTO((CONST eight_bits HUGE*p0,CONST eight_bits HUGE*p1));
CONST eight_bits HUGE*eval0 PROTO((VAL HUGE*val,CONST eight_bits HUGE*p0,
CONST eight_bits HUGE*p1,eight_bits delim));
VAL HUGE*eval1 PROTO((CONST VAL HUGE*v0,CONST VAL HUGE*v1,
PRECEDENCE prec0,int found_op[]));
CONST eight_bits HUGE*evaluate PROTO((VAL HUGE*val,CONST eight_bits HUGE*p0,
CONST eight_bits HUGE*p1));

SRTN fin_constant PROTO((TYPE type));

#ifndef C_TYPES
name_pointer id_lookup PROTO((CONST ASCII HUGE*first,
CONST ASCII HUGE*last,eight_bits t));
#endif 
void HUGE*mac_lookup PROTO((sixteen_bits cur_val));
SRTN mcheck0 PROTO((unsigned long n,CONST outer_char reason[]));
SRTN misplaced_id PROTO((sixteen_bits a0,sixteen_bits a1));
int neval PROTO((CONST eight_bits HUGE*p0,CONST eight_bits HUGE*p1));
SRTN num_to_mbuf PROTO((int n,PARGS pargs,
CONST char*built_in_name,int num_args,
CONST char*num_descr,int num));
outer_char*op_name PROTO((eight_bits tokn));
unsigned long otoi PROTO((CONST ASCII HUGE*b,CONST ASCII HUGE*b1));
PRECEDENCE precedence PROTO((eight_bits tokn));
SRTN promote PROTO((VAL HUGE*v0,VAL HUGE*v1));
unsigned stnd_num PROTO((LANGUAGE Language));
outer_char*stype PROTO((TYPE type));
CONST eight_bits HUGE*vfill PROTO((VAL HUGE*v,CONST eight_bits HUGE*p0,
CONST eight_bits HUGE*p1));
unsigned long xtoi PROTO((CONST ASCII HUGE*b,CONST ASCII HUGE*b1));


