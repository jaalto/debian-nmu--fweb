#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/a_type -A -# --F -= 1.62/Web/a_type.h"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/a_type.web"
  CHANGE FILE:  (none)
#endif


int tgetent PROTO((outer_char*buffer,CONST outer_char*name));
int tgetflag PROTO((CONST outer_char*id));
int tgetnum PROTO((CONST outer_char*id));
outer_char*tgetstr PROTO((CONST outer_char*id,outer_char**area));
outer_char*tgoto PROTO((CONST outer_char*cm,int destcol,int destline));
SRTN tputs PROTO((outer_char*cp,int affcnt,int(*outc)(int)));


