#if(0)
  FTANGLE v1.60,
 created with UNIX on "Thursday, September 24, 1998 at 16:12." 
  COMMAND LINE: "Web/ftangle Web/termcap0 -A -# --F -= 1.62/Web/termcap0.c"
  RUN TIME:     "Friday, September 25, 1998 at 8:02."
  WEB FILE:     "Web/termcap0.web"
  CHANGE FILE:  (none)
#endif




#include "os.h" 


typedef char outer_char;


#include "a_type.h"







int tgetent FCN((buffer,name))
outer_char*buffer C0("")
CONST outer_char*name C1("")
{
*buffer= '\0';

return 0;
}


int tgetflag FCN((id))
CONST outer_char*id C1("")
{
return 0;
}


int tgetnum FCN((id))
CONST outer_char*id C1("")
{
return-1;
}


outer_char*tgetstr FCN((id,pp))
CONST outer_char*id C0("")
outer_char**pp C1("")
{
return NULL;
}


outer_char*tgoto FCN((cm,destcol,destline))
CONST outer_char*cm C0("")
int destcol C0("")
int destline C1("")
{
return(outer_char*)"OOPS";
}


SRTN tputs FCN((cp,affcnt,outc))
outer_char*cp C0("")
int affcnt C0("")
int(*outc)PROTO((int))C1("")
{
while(*cp)
(*outc)(*cp++);
}


