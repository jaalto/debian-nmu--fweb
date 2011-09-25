#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/s_type -A -# --F -= 1.62/Web/s_type.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/s_type.web"
  CHANGE FILE:  (none)
#endif


#include "a_type.h"

SRTN a_str PROTO((outer_char HUGE**pp,CONST outer_char HUGE*id));
SRTN add_str PROTO((S_MAP HUGE*ps));
int cc_cmp PROTO((CONST VOID*pk0,CONST VOID*pk1));
outer_char*ccode_name PROTO((eight_bits code));
SRTN clr_printf PROTO((COLOR clr,outer_char*fmt ELLIPSIS));
int ctoi PROTO((outer_char c));
int cmpr_s_map PROTO((S_MAP HUGE**s0,S_MAP HUGE**s1));
ASCII esc_achar PROTO((CONST ASCII HUGE*HUGE*ppc));
outer_char esc_char PROTO((CONST outer_char HUGE*HUGE*ppc));
SRTN ext_set PROTO((CONST outer_char HUGE**pid));
S_MAP HUGE*find_sty PROTO((S_MAP HUGE*m,
CONST outer_char HUGE*keyword));
outer_char*get_option PROTO((outer_char*s));
outer_char*get_termcap PROTO((VOID));
SRTN ini_aclr PROTO((S_MAP HUGE*ps));
SRTN ini_bilevel PROTO((S_MAP HUGE*ps));
SRTN ini_ccode PROTO((CONST outer_char*keyword,CONST outer_char*defaults,
eight_bits code));
SRTN ini_cchar PROTO((S_MAP HUGE*ps));
SRTN ini_cdir PROTO((CONST S_MAP HUGE*ps));
SRTN ini_change PROTO((CONST S_MAP HUGE*ps));
SRTN ini_clr PROTO((S_MAP HUGE*ps));
COLOR_MODE ini_colors PROTO((COLOR_MODE color_mode0));
SRTN ini_dot PROTO((S_MAP HUGE*ps));
SRTN ini_ext PROTO((S_MAP HUGE*ps));
SRTN ini_hchange PROTO((CONST S_MAP HUGE*ps));
SRTN ini_hweb PROTO((CONST S_MAP HUGE*ps));
SRTN ini_output_line_length PROTO((S_MAP HUGE*ps));
SRTN ini_style PROTO((VOID));
SRTN ini_web PROTO((CONST S_MAP HUGE*ps));
SRTN link0 PROTO((outer_char HUGE**pp,CONST outer_char HUGE*id,
SRTN(HUGE_FCN_PTR*fcn)(CONST outer_char HUGE**)));
STY_TYPE next_sty PROTO((VOID));
boolean out_map PROTO((outer_char*name));
SRTN prn0_code PROTO((ASCII a,CC_BUF HUGE*cc_buf,int*pk));
SRTN read_sty PROTO((CONST outer_char sty_file_name[],boolean warn_if_absent));
SRTN reassign PROTO((eight_bits old_code,eight_bits new_code));
SRTN see_map PROTO((S_MAP HUGE*s,CONST outer_char HUGE*pa,
boolean see_all));
SRTN see_str PROTO((CONST outer_char HUGE*s,CONST outer_char*eos));
SRTN see_style PROTO((CONST outer_char HUGE*pa,boolean see_all));
SRTN set_color PROTO((COLOR clr));
SRTN set_char PROTO((S_MAP HUGE*ps));
SRTN set_int PROTO((S_MAP HUGE*ps));
SRTN set_long PROTO((S_MAP HUGE*ps));
SRTN set_str PROTO((S_MAP HUGE*ps));
outer_char*sset_color PROTO((COLOR clr));
boolean sty_line PROTO((VOID));
boolean sty0_line PROTO((outer_char HUGE*last_sprm));
outer_char*sput PROTO((SEQUENCES*ps));
SRTN tput PROTO((SEQUENCES*ps));
SRTN termset PROTO((CONST outer_char**pid));
SRTN zero_ccodes PROTO((VOID));


