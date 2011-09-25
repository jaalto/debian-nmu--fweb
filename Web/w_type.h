#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/w_type -A -# --F -= 1.62/Web/w_type.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/w_type.web"
  CHANGE FILE:  (none)
#endif


#include "s_type.h" 
#include "c_type.h" 
#include "p_type.h" 
#include "d_type.h" 

SRTN app_hdr PROTO((CONST char*section_part));
SRTN app_overload PROTO((VOID));
SRTN app_lang PROTO((CONST outer_char*suffix));
SRTN app_misc PROTO((outer_char*s));
SRTN app_proc PROTO((eight_bits next_control));
SRTN app_temp PROTO((CONST outer_char letter[],CONST outer_char arg[]));
SRTN break_out PROTO((VOID));
void cant_do PROTO((outer_char*the_part));
eight_bits copy_TeX PROTO((VOID));
SRTN C_parse PROTO((PARSING_MODE mode0));
text_pointer C_translate PROTO((VOID));
SRTN C_xref PROTO((PART part0,PARSING_MODE mode0));
int cmpr_rcs PROTO((RCS HUGE**pp0,RCS HUGE**pp1));
int copy_comment PROTO((int bal));
SRTN copy_limbo PROTO((VOID));
outer_char*dbl_bslash PROTO((outer_char*m_temp,outer_char*s));
outer_char*dbl_cslash PROTO((outer_char*m_temp,outer_char c));
ASCII HUGE*esc_buf PROTO((ASCII HUGE*temp,CONST ASCII HUGE
*temp_end,CONST ASCII HUGE*buf,boolean all_cases));
SRTN fin_C PROTO((VOID));
SRTN fin_line PROTO((VOID));
SRTN flush_buffer PROTO((ASCII HUGE*b,boolean per_cent));
SRTN footnote PROTO((sixteen_bits flag));
GOTO_CODE get_control_code PROTO((VOID));
SRTN get_iformats PROTO((VOID));
eight_bits get_next PROTO((VOID));
eight_bits get_output PROTO((VOID));
eight_bits get_string PROTO((ASCII c,ASCII boz));
eight_bits get_TeX PROTO((VOID));
SRTN improper PROTO((outer_char*m_type,outer_char*msg));
SRTN init_op PROTO((eight_bits op_code,CONST outer_char op_name[],
int lang,CONST outer_char op_macro[],boolean overload,
eight_bits cat,CONST outer_char defn[]));
int main PROTO((int ac,outer_char**av));
SRTN make_output PROTO((VOID));
outer_char*mktmp PROTO((outer_char*file_name,outer_char*ext));
int mod_check PROTO((name_pointer p));
SRTN mod_print PROTO((name_pointer p));
int mod_warn PROTO((name_pointer p,outer_char*msg));
SRTN mx_open PROTO((outer_char*ext));
outer_char*mx_quote PROTO((outer_char*m_out,outer_char*s));
SRTN new_mod_xref PROTO((name_pointer p));
SRTN new_xref PROTO((PART part0,name_pointer p));
SRTN out_atext PROTO((CONST ASCII HUGE*s));
SRTN out_fname PROTO((CONST outer_char HUGE*s));
SRTN out_md_name PROTO((VOID));
SRTN out_mod PROTO((sixteen_bits n,boolean encap));
SRTN out_name PROTO((outer_char*m_temp,boolean surround,
boolean is_id,name_pointer p));
SRTN out_prm PROTO((CONST outer_char*fmt,int n,
CONST outer_char*cmt ELLIPSIS));
SRTN out_skip PROTO((VOID));
SRTN out_str PROTO((CONST outer_char HUGE*s));
SRTN out_del_str PROTO((ASCII HUGE*s,ASCII HUGE*t));
SRTN out_del_tokens PROTO((token_pointer s,token_pointer t));
SRTN outr_parse PROTO((VOID));
SRTN outr_xref PROTO((PART part0));
SRTN output_C PROTO((VOID));
SRTN phase1 PROTO((VOID));
SRTN phase2 PROTO((VOID));
SRTN phase3 PROTO((VOID));
SRTN pop_level PROTO((VOID));
SRTN pr_format PROTO((boolean xref_lhs,boolean xref_rhs));
SRTN pre_scrap PROTO((eight_bits last_control));
GOTO_CODE prs_TeX_code PROTO((VOID));
GOTO_CODE prs_regular_code PROTO((GOTO_CODE iswitch));
SRTN push_level PROTO((text_pointer p));
SRTN room_for PROTO((int ntokens,int ntexts,int nscraps));
SRTN set_language PROTO((LANGUAGE language0));
eight_bits skip_TeX PROTO((VOID));
SRTN skip_file PROTO((VOID));
SRTN skip_limbo PROTO((VOID));
int TeX_char PROTO((VOID));
SRTN trns_code PROTO((VOID));
SRTN trns_defn PROTO((VOID));
SRTN trns_TeX PROTO((VOID));
SRTN unbucket PROTO((eight_bits d));
OPERATOR HUGE*valid_op PROTO((eight_bits op_code));


