#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/r_type -A -# --F -= 1.62/Web/r_type.h"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/r_type.web"\
  CHANGE FILE:  (none)
#endif
#define OUT_MSG(msg,msg1)out_msg((CONST ASCII*)(msg),(CONST ASCII*)(msg1)) \
 \



#include "c_type.h" 

#ifdef _ratfor_
boolean char_after PROTO((outer_char c));
outer_char HUGE*cmd_name PROTO((CMD cmd));
eight_bits copy_comment PROTO((boolean save_comments));
SRTN copyd PROTO((boolean to,
boolean xpn_cases,ASCII l,ASCII r,
boolean semi_allowed));
unsigned copy_2to PROTO((ASCII r_before,ASCII r_after));
SRTN expanding PROTO((CMD cmd));
eight_bits get_saved_output PROTO((stack_pointer stack_ptr0));
SRTN flush_comments PROTO((VOID));
SRTN id0 PROTO((sixteen_bits cur_val));
#ifndef C_TYPES
name_pointer id_lookup PROTO((CONST ASCII HUGE*first,
CONST ASCII HUGE*last,eight_bits t));
#endif 
SRTN ini_out_tokens PROTO((SPEC HUGE*tokens));
STMT_LBL label_case PROTO((CASE_TYPE cmin,CASE_TYPE m));
SRTN not_loop PROTO((CONST outer_char id[],CONST outer_char msg[]));
SRTN not_switch PROTO((CONST outer_char s[]));
SRTN output_ended PROTO((CONST outer_char msg[],int n ELLIPSIS));
SRTN out_cmd PROTO((boolean emit_continue,
outer_char abbrev,CONST outer_char beginning[],
CONST outer_char*fmt0,int n ELLIPSIS));
SRTN out_label PROTO((boolean suppress_0,STMT_LBL stmt_num));
outer_char*qdelim PROTO((ASCII delim));
SRTN resize PROTO((eight_bits HUGE**pp,int nmax,
eight_bits HUGE**pq,eight_bits HUGE**pp_end));
int save_lbls PROTO((CMD cmd,STMT_LBL top0,STMT_LBL next0,
STMT_LBL break0,int n_used));
SRTN show_cmd PROTO((CONST CASE HUGE*cur_case));
SRTN stmt PROTO((boolean to,boolean brace_only));
SRTN unexpected PROTO((CONST outer_char id[]));
X_FCN x_block PROTO((VOID));
X_FCN x_blockdata PROTO((VOID));
X_FCN x_break PROTO((VOID));
X_FCN x_case PROTO((VOID));
X_FCN x_contains PROTO((VOID));
X_FCN x_default PROTO((VOID));
X_FCN x_do PROTO((VOID));
X_FCN x_else PROTO((VOID));
X_FCN x_els_if PROTO((VOID));
X_FCN x_end PROTO((VOID));
X_FCN x_en_if PROTO((VOID));
X_FCN x_en_interface PROTO((VOID));
X_FCN x_en_module PROTO((VOID));
X_FCN x_en_select PROTO((VOID));
X_FCN x_en_type PROTO((VOID));
X_FCN x_en_where PROTO((VOID));
X_FCN x_for PROTO((VOID));
X_FCN x_function PROTO((VOID));
X_FCN x_if PROTO((VOID));
X_FCN x_inter0face PROTO((VOID));
X_FCN x_interface PROTO((VOID));
X_FCN x_module PROTO((VOID));
X_FCN x_next PROTO((VOID));
X_FCN x_procedure PROTO((VOID));
X_FCN x_program PROTO((VOID));
X_FCN x_repeat PROTO((VOID));
X_FCN x_return PROTO((VOID));
SRTN x_stmt PROTO((VOID));
X_FCN x_subroutine PROTO((VOID));
X_FCN x_switch PROTO((VOID));
X_FCN x_then PROTO((VOID));
X_FCN x_type PROTO((VOID));
X_FCN x_until PROTO((VOID));
X_FCN x_where PROTO((VOID));
X_FCN x_while PROTO((VOID));
SRTN xpn_body PROTO((sixteen_bits token1,boolean scan_parens,
sixteen_bits token2));
boolean xpn_else PROTO((sixteen_bits id_x,sixteen_bits id_else_x,
sixteen_bits token1,boolean scan_parens,
sixteen_bits token2));
#endif 

SRTN alloc_Rat PROTO((VOID));
int chk_lbl PROTO((VOID));
SRTN copy_out PROTO((CONST eight_bits HUGE*p0,
CONST eight_bits HUGE*p1,boolean is_expr));
SRTN cp_fcn_body PROTO((VOID));
SRTN didnt_expand PROTO((eight_bits c0,eight_bits c,CONST char*op));
eight_bits get_output PROTO((VOID));
SRTN ini_Ratfor PROTO((VOID));
SRTN is_Rat_present PROTO((VOID));
void HUGE*mac_lookup PROTO((sixteen_bits cur_val));
outer_char HUGE*name_of PROTO((sixteen_bits id));
SRTN out_msg PROTO((CONST ASCII*msg,CONST ASCII*msg1));
SRTN out_ptrunc PROTO((sixteen_bits cur_val));
CONST ASCII HUGE*proper_end PROTO((name_pointer np));
SRTN RAT_error PROTO((ERR_TYPE err_type,CONST outer_char msg[],
int n ELLIPSIS));
boolean Rat_OK PROTO((outer_char*msg));
SRTN rst_last PROTO((VOID));
SRTN skip_newlines PROTO((boolean save_comments));
eight_bits HUGE*str_to_mb PROTO((CONST eight_bits HUGE*begin_arg,
CONST eight_bits HUGE*end_arg,boolean esc_chars));
SRTN x_mod_a PROTO((sixteen_bits a));
SRTN x_special PROTO((VOID));
eight_bits HUGE*xmacro PROTO((text_pointer macro_text,
eight_bits HUGE**pcur_byte,eight_bits HUGE**pthe_end,
boolean multilevels,eight_bits HUGE*mp0));


