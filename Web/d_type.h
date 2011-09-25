#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/d_type -A -# --F -= 1.62/Web/d_type.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/d_type.web"
  CHANGE FILE:  (none)
#endif


int cmpr_nd PROTO((NAME_INFO HUGE**p0,NAME_INFO HUGE**p1));
SRTN ini_tokens PROTO((LANGUAGE language0));
SRTN ini_RAT_tokens PROTO((LANGUAGE language0));
SRTN ini_reserved PROTO((LANGUAGE l));
SRTN save_id PROTO((WORD_TYPE word_type,LANGUAGE language0,
CONST outer_char HUGE**words));
SRTN save_words PROTO((LANGUAGE language0,CONST RESERVED_WORD HUGE*words));
SRTN see_reserved PROTO((CONST RSRVD HUGE*prsrvd));

