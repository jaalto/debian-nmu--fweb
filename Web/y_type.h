#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/y_type -A -# --F -= 1.62/Web/y_type.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/y_type.web"
  CHANGE FILE:  (none)
#endif


void HUGE*alloc PROTO((CONST outer_char abbrev[],BUF_SIZE HUGE*pnunits,
size_t nsize,int dn));

SRTN free_mem0 PROTO((void HUGE*p,CONST outer_char why[],BUF_SIZE nunits,
size_t nsize));

void HUGE*get_mem0 PROTO((CONST outer_char why[],BUF_SIZE nunits,
size_t nsize));
