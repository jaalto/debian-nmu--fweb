#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/m_type -A -# --F -= 1.62/Web/m_type.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/m_type.web"
  CHANGE FILE:  (none)
#endif


SRTN i_ascii_ PROTO((int n,PARGS pargs));
SRTN i_assert_ PROTO((int n,PARGS pargs));
SRTN i_define_ PROTO((int n,PARGS pargs));
SRTN i_dumpdef_ PROTO((int n,PARGS pargs));
SRTN i_error_ PROTO((int n,PARGS pargs));
SRTN i_eval_ PROTO((int n,PARGS pargs));
SRTN i_getenv_ PROTO((int n,PARGS pargs));
SRTN i_if_ PROTO((int n,PARGS pargs));
SRTN i_ifcase_ PROTO((int n,PARGS pargs));
SRTN i_ifdef_ PROTO((int n,PARGS pargs));
SRTN i_ifndef_ PROTO((int n,PARGS pargs));
SRTN i_ifelse_ PROTO((int n,PARGS pargs));
SRTN i_inp_line_ PROTO((int n,PARGS pargs));
SRTN i_keyword_ PROTO((int n,PARGS pargs));
SRTN i_lang_ PROTO((int n,PARGS pargs));
SRTN i_len_ PROTO((int n,PARGS pargs));
SRTN i_lnum_ PROTO((int n,PARGS pargs));
SRTN i_lowercase_ PROTO((int n,PARGS pargs));
SRTN i_meta_ PROTO((int n,PARGS pargs));
SRTN i_mod_name_ PROTO((int n,PARGS pargs));
SRTN i_modules_ PROTO((int n,PARGS pargs));
SRTN i_nargs_ PROTO((int n,PARGS pargs));
SRTN i_outp_line_ PROTO((int n,PARGS pargs));
SRTN i_routine_ PROTO((int n,PARGS pargs));
SRTN i_sect_num_ PROTO((int n,PARGS pargs));
SRTN i_switch_ PROTO((int n,PARGS pargs));
SRTN i_tm_ PROTO((int n,PARGS pargs));
SRTN i_translit_ PROTO((int n,PARGS pargs));
SRTN i_undef_ PROTO((int n,PARGS pargs));
SRTN i_unstring_ PROTO((int n,PARGS pargs));
SRTN i_uppercase_ PROTO((int n,PARGS pargs));
SRTN i_verbatim_ PROTO((int n,PARGS pargs));
SRTN i_version_ PROTO((int n,PARGS pargs));
SRTN i_xflag_ PROTO((int n,PARGS pargs));
eight_bits HUGE*argize PROTO((eight_bits HUGE*start,
eight_bits HUGE*end));
eight_bits HUGE*args_to_macrobuf PROTO((eight_bits HUGE*mp,
eight_bits HUGE**pcur_byte,eight_bits HUGE**pthe_end,
boolean multilevels,boolean var_args));
eight_bits HUGE*copy_and_paste PROTO((eight_bits HUGE*m_start,
eight_bits HUGE*m_end));
SRTN copy_id PROTO((CONST ASCII HUGE*start,CONST ASCII HUGE*end,
CONST char*descr));
SRTN copy_nth_arg PROTO((int n0,int n,PARGS pargs));
boolean cp_macro_arg PROTO((PARGS pargs,eight_bits k,eight_bits n,
boolean HUGE*pxpn_argument,boolean last_was_paste,
boolean next_is_paste));
SRTN cpy_op PROTO((CONST outer_char HUGE*s));
SRTN dbg_macs PROTO((sixteen_bits,eight_bits HUGE*,eight_bits*));
SRTN esc_certain_chars PROTO((sixteen_bits c,boolean esc_chars));
eight_bits HUGE*get_dargs PROTO((eight_bits HUGE*start,
eight_bits HUGE*end,sixteen_bits HUGE*args,eight_bits*n,
boolean*pvar_args));
eight_bits HUGE*get_margs0 PROTO((eight_bits HUGE*start,
eight_bits HUGE*end,
eight_bits HUGE**pcur_byte,eight_bits HUGE**pthe_end,
boolean multilevels,boolean var_args,
eight_bits HUGE*pargs[],eight_bits*n));
SRTN ini_internal_fcns PROTO((VOID));
boolean ins_arg PROTO((ASCII cleft,ASCII cright,PARGS pargs,text_pointer m,
eight_bits n,eight_bits HUGE*HUGE*pp0,
boolean*ppasting,boolean*pxpn_argument,boolean last_was_paste));
SRTN mac_args PROTO((sixteen_bits id_token));
void HUGE*mac_lookup PROTO((sixteen_bits cur_val));
SRTN mbuf_full PROTO((unsigned long n,CONST outer_char reason[]));
SRTN must_quote PROTO((CONST outer_char*name,
eight_bits HUGE*p,eight_bits HUGE*p1));
outer_char*type1 PROTO((eight_bits c));
SRTN new_mbuf PROTO((VOID));
SRTN num_to_mbuf PROTO((int n,PARGS pargs,
CONST char*built_in_name,int num_args,
CONST char*num_descr,int num));
eight_bits HUGE*paste1 PROTO((eight_bits HUGE*p0,
eight_bits HUGE*begin_or_end));
CONST ASCII HUGE*proper_end PROTO((name_pointer np));
SRTN prn_mname PROTO((outer_char HUGE**pt,sixteen_bits tokn));
SRTN put_long PROTO((long l));
boolean recursive_name PROTO((sixteen_bits a,XIDS HUGE*xids,int last_level));
int rcvr_macro PROTO((ASCII HUGE*mtext,sixteen_bits HUGE*tokens,
CONST eight_bits HUGE*p0,CONST eight_bits HUGE*p1));
SRTN see_macro PROTO((CONST eight_bits HUGE*p0,CONST eight_bits HUGE*p1));
SRTN see_xlevel PROTO((outer_char HUGE**pt,XIDS HUGE*p));
eight_bits HUGE*str_to_mb PROTO((CONST eight_bits HUGE*begin_arg,
CONST eight_bits HUGE*end_arg,boolean escape_chars));
SRTN t_macros PROTO((VOID));
SRTN translit PROTO((CONST ASCII HUGE*s,CONST ASCII HUGE*from,
CONST ASCII HUGE*to));
SRTN undef PROTO((sixteen_bits cur_val,boolean warning));
boolean x_int_fcn PROTO((sixteen_bits id,int n,PARGS pargs));
eight_bits HUGE*xmacro PROTO((text_pointer macro_text,
eight_bits HUGE**pcur_byte,
eight_bits HUGE**pthe_end,
boolean multilevels,
eight_bits HUGE*mp0));
eight_bits HUGE*xmac_buf PROTO((eight_bits HUGE*mp0,
XIDS HUGE*old_xids,
eight_bits HUGE**pcur_byte,eight_bits HUGE**pthe_end,
boolean multilevels));
eight_bits HUGE*xmac_text PROTO((eight_bits HUGE*mp0,
eight_bits HUGE*start,eight_bits HUGE*end));
boolean x0macro PROTO((eight_bits HUGE*p,eight_bits HUGE*end,
XIDS HUGE*xids,
eight_bits HUGE**pcur_byte,
eight_bits HUGE**the_end,
boolean multilevels));
SRTN xpn_before PROTO((eight_bits HUGE*mp0,XIDS HUGE*xids,
eight_bits HUGE**pcur_byte,eight_bits HUGE**the_end,
boolean multilevels));


