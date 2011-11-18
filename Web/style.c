#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/style -A -# --F -= 1.62/Web/style.c"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/style.web"\
  CHANGE FILE:  (none)
#endif
#define _STYLE_h   \

#define CMNT_CHAR  '%' \
 \

#define isodigit(c)(isdigit(c)&&(c)!='8'&&(c)!='9') \
 \

#define Ctoi(c)ctoi(XCHR(c)) \

#define ENV_FWEB_STY  "FWEB_STYLE_DIR" \
 \

#define ignore  0 \

#define SET_ACOLOR(field,clr)wt_style.color.field.value= clr \

#define CLR_LINK(CLR,id)link0(&wt_style.color._##CLR,OC(#id),termset)
#define CLR_LINK1(CLR,id)link0(&wt_style.color._##CLR,OC(id),termset) \

#define ENV_TERM  "TERM" \

#define NUM_TEMP_PTRS  20 \



#include "typedefs.h"





#include "map.h"




typedef struct
{
CONST char*name;
COLOR value;
}CLR_MATCH;

CLR_MATCH clr_match[]= {
{"black",BLACK},
{"blue",BLUE},
{"cyan",CYAN},
{"default",NORMAL},
{"green",GREEN},
{"magenta",MAGENTA},
{"normal",NORMAL},
{"red",RED},
{"yellow",YELLOW},
{"",NORMAL}
};







#ifdef SMALL_MEMORY
#define N_MSGBUF 2000
#else
#define N_MSGBUF 10000
#endif





#ifndef C_TYPES
#include SFILE(y_type.h)
#endif 



outer_char HUGE*sprm_buf,HUGE*sprm_ptr,HUGE*sprm_end;
outer_char HUGE*sprm_ptr0;

boolean from_sprm;
static BUF_SIZE sbuf_len;
static outer_char HUGE*stemp,HUGE*stemp_end,HUGE*tloc;

static outer_char cur_char;

extern ASCII xord[];
extern outer_char xchr[];



static CONST outer_char*sty_file_name;
static boolean warn_if_absent;
static FILE*sty_file;
static S_MAP HUGE*map_array= fweb_map;

jmp_buf top_of_style;



eight_bits ccode[128];
CONST outer_char*cname[128];
CONST ASCII HUGE*at_codes;



static CC_BUF HUGE*cc_buf;



outer_char used_by_buf[15+1];



static outer_char HUGE*tcap_buffer;







outer_char
esc_char FCN((ppc))
CONST outer_char HUGE*HUGE*ppc C1("")
{
int k;
unsigned n;
CONST outer_char HUGE*pc= *ppc;

if(isodigit(*pc))

{
n= ctoi(*pc++);
for(k= 0;k<2;k++)
{
if(!isodigit(*pc))
break;

n= 8*n+ctoi(*pc++);
}
}


else if(*pc=='x'&&isxdigit(*(pc+1)))

{
pc++;
n= ctoi(*pc++);

if(isxdigit(*pc))
n= 16*n+ctoi(*pc++);
}


else
{
switch(*pc)
{
case 'a':n= '\007';break;
case 'b':n= '\b';break;
case 'e':n= '\033';break;
case 'f':n= '\f';break;
case 'n':n= '\n';break;
case 'r':n= '\r';break;
case 't':n= '\t';break;
case 'v':n= '\v';break;
default:
n= (unsigned)(*pc);
break;
}
pc++;
}

*ppc= pc;
return(outer_char)n;
}


ASCII
esc_achar FCN((ppc))
CONST ASCII HUGE*HUGE*ppc C1("")
{
int k;
unsigned n;
CONST ASCII HUGE*pc= *ppc;

if(isOdigit(*pc))

{
n= Ctoi(*pc++);
for(k= 0;k<2;k++)
{
if(!isOdigit(*pc))break;
n= 8*n+Ctoi(*pc++);
}
}


else if(*pc==0170&&isXdigit(*(pc+1)))

{
pc++;
n= Ctoi(*pc++);
if(isXdigit(*pc))n= 16*n+Ctoi(*pc++);
}


else
{
switch(*pc)
{
case 0141:n= 07;break;
case 0142:n= 010;break;
case 0145:n= 033;break;
case 0146:n= 014;break;
case 0156:n= 012;break;
case 0162:n= 015;break;
case 0164:n= 011;break;
case 0166:n= 013;break;
default:n= *pc;break;
}

#if(DEBUG_XCHR)
n= XCHR(n);
#endif
pc++;
}

*ppc= pc;

#if(DEBUG_XCHR)
n= xord[n];
#endif

return(ASCII)n;
}


int
ctoi FCN((c))
outer_char c C1("")
{
switch(c)
{
case '0':return 0x0;case '1':return 0x1;case '2':return 0x2;case '3':return 0x3;case '4':return 0x4;case '5':return 0x5;
case '6':return 0x6;case '7':return 0x7;case '8':return 0x8;case '9':return 0x9;
case 'a':return 0xa;case 'A':return 0xA;
case 'b':return 0xb;case 'B':return 0xB;
case 'c':return 0xc;case 'C':return 0xC;
case 'd':return 0xd;case 'D':return 0xD;
case 'e':return 0xe;case 'E':return 0xE;
case 'f':return 0xf;case 'F':return 0xF;
default:return 0;
}
}


S_MAP
HUGE*find_sty FCN((m,keyword))
S_MAP HUGE*m C0("Array of map variables")
CONST outer_char HUGE*keyword C1("Search for this keyword")
{
for(;*(m->keyword);m++)
if(STRCMP(keyword,m->keyword)==0)return m;

return NULL;
}


boolean
sty_line(VOID)
{
typedef enum{FROM_INI,FROM_LOCAL,FROM_CMD_LINE}STYLE_MODE;

static STYLE_MODE mode= FROM_INI;

from_sprm= BOOLEAN(mode==FROM_INI||mode==FROM_CMD_LINE);

switch(mode)
{
case FROM_INI:
if(!sty0_line(sprm_ptr0))
mode++;
else
return YES;

case FROM_LOCAL:
if(!sty0_line(NULL))
mode++;
else
return YES;

case FROM_CMD_LINE:
return sty0_line(sprm_end);
}

return YES;
}

boolean
sty0_line FCN((last_sprm))
outer_char HUGE*last_sprm C1("")
{
int c;


sloc= slimit= sbuf;

if(last_sprm)
{
if(sprm_ptr>=last_sprm)
{
s_line= 0;
return NO;
}
else
{
int n;
outer_char HUGE*p;

if((p= (outer_char HUGE*)STRCHR(sprm_ptr,'\n'))==NULL)
{

err0_print(ERR_S,OC("Trouble in sty_line"),0);
return NO;
}
else n= PTR_DIFF(int,p,sprm_ptr);

STRNCPY(sloc,sprm_ptr,n);
sprm_ptr+= n+1;
slimit+= n;
s_line++;
}
}
else
{
if(!sty_file)

{
outer_char full_sty_name[MAX_FILE_NAME_LENGTH];


if(!*sty_file_name)
return NO;

if(warn_if_absent)
{
STRCPY(full_sty_name,sty_file_name);
add_prefix(full_sty_name);
}
else
mk_fname(full_sty_name,MAX_FILE_NAME_LENGTH,
OC(ENV_FWEB_STY),NO,sty_file_name);

if((sty_file= fopen((char*)full_sty_name,"r"))==NULL)
{
if(warn_if_absent)
{

err0_print(ERR_C,OC("Can't open style file %s"),1,full_sty_name);
}
return NO;
}

reading(full_sty_name,YES);
}




{
if(feof(sty_file))
return NO;

s_line++;

while((c= getc(sty_file))!=EOF&&c!='\n')
{
if(slimit==sbuf_end)
{

err0_print(ERR_S,OC("Input line too long; max is %lu characters"),1,sbuf_len);
ungetc(c,sty_file);
break;
}

*slimit++= (outer_char)c;
}
}


}

return YES;
}


STY_TYPE
next_sty(VOID)
{
outer_char c;

WHILE()
{


if(sloc==slimit||(c= *sloc++)==CMNT_CHAR)
{
if(!sty_line())
return S_DONE;

continue;
}

if(isalpha(c)||c=='_')

{
sloc--;
tloc= stemp;

while(sloc<slimit
&&(isalpha(*sloc)||isdigit(*sloc)||*sloc=='_'||*sloc=='.'))
{
cur_char= *sloc++;

{
if(tloc<stemp_end)
*tloc++= (outer_char)CHOICE(cur_char=='.','_',cur_char);
else
{

err0_print(ERR_S,OC("Style-file buffer overflow.  \
Try using `-ysb' to increase the size"),0);
break;
}
}


}

*tloc= '\0';return S_KEYWORD;
}


else if(isdigit(c)||c=='-'||c=='+')

{
sloc--;
tloc= stemp;

if(*sloc=='+'||*sloc=='-')
{
cur_char= *sloc++;

{
if(tloc<stemp_end)
*tloc++= cur_char;
else
{

err0_print(ERR_S,OC("Style-file buffer overflow.  \
Try using `-ysb' to increase the size"),0);
break;
}
}


}

while(sloc<slimit&&isdigit(*sloc))
{
cur_char= *sloc++;

{
if(tloc<stemp_end)
*tloc++= cur_char;
else
{

err0_print(ERR_S,OC("Style-file buffer overflow.  \
Try using `-ysb' to increase the size"),0);
break;
}
}


}

if(sloc==slimit)
*tloc= '\0';return S_INT;


if(*sloc=='l'||*sloc=='L')
{
sloc++;
*tloc= '\0';return S_LONG;
}

*tloc= '\0';return S_INT;
}


else if(c=='"')

{
tloc= stemp;

while(*sloc!='"')
{
if(sloc==slimit)
{

err0_print(ERR_S,OC("Missing double quote inserted at end of string.  \
Did you mean to continue the line with '\\'?  \
(No white space is allowed after the '\\'.)"),0);
*tloc= '\0';return S_STRING;
}

if(*sloc=='\\')
{
if(++sloc==slimit)
{
sty_line();
continue;
}
else
cur_char= esc_char(&sloc);
}
else
cur_char= *sloc++;


{
if(tloc<stemp_end)
*tloc++= cur_char;
else
{

err0_print(ERR_S,OC("Style-file buffer overflow.  \
Try using `-ysb' to increase the size"),0);
break;
}
}


}

sloc++;

*tloc= '\0';return S_STRING;
}


else if(c=='\'')

{
tloc= stemp;



if(*sloc=='\\')
{
sloc++;
cur_char= esc_char(&sloc);
}
else
cur_char= *sloc++;


{
if(tloc<stemp_end)
*tloc++= cur_char;
else
{

err0_print(ERR_S,OC("Style-file buffer overflow.  \
Try using `-ysb' to increase the size"),0);
break;
}
}



if(*sloc!='\'')

err0_print(ERR_S,OC("Missing single quote inserted"),0);
else
sloc++;

*tloc= '\0';return S_CHAR;
}


else if(c==' '||c=='\t'||c=='=')
continue;
else
{

err0_print(ERR_S,OC("Invalid style-file field; \
skipping remainder of file"),0);
longjmp(top_of_style,1);
}
}

DUMMY_RETURN(S_DONE);
}


SRTN
read_sty FCN((sty_file_name0,warn_if_absent0))
CONST outer_char sty_file_name0[]C0("")
boolean warn_if_absent0 C1("")
{
sty_file_name= sty_file_name0;
warn_if_absent= warn_if_absent0;


{
IN_COMMON outer_char HUGE*style_args;

if(TeX_processor==LaTeX_p)
{
W_META HUGE*m= &w_style.misc.meta;
INDEX HUGE*i= &w_style.indx;

pfrmt->id= pfrmt->id_outer= pfrmt->id_inner= OC("\\>");
pfrmt->ID= pfrmt->ID_OUTER= pfrmt->ID_INNER= OC("\\WUC");
pfrmt->RESERVED= OC("\\WRS");

m->TeX.begin= OC("\\begin{verbatim}");
m->TeX.end= OC("\\end{verbatim}");
m->code.begin= OC("\\WBM ");
m->code.end= OC("\\WEM ");

i->encap_prefix= OC("\\M");
i->encap_infix= OC("{");
i->encap_suffix= OC("}");
}

if(prn_style_defaults)
see_style(style_args,YES);
}




{
ALLOC(outer_char,sbuf,"sb",sbuf_len,0);
sbuf_end= sbuf+sbuf_len;

stemp= GET_MEM("stemp",sbuf_len,outer_char);
stemp_end= stemp+sbuf_len;


sprm_end= sprm_ptr;
sprm_ptr= sprm_buf;
}



if(setjmp(top_of_style)!=0)
goto done_sty;


if(!sty_line())
goto done_sty;


WHILE()
switch(next_sty())
{
case S_CMNT:break;

case S_KEYWORD:

{
S_MAP HUGE*ps;
STY_TYPE type;


if((ps= find_sty(map_array,stemp))==NULL)
{

err0_print(ERR_S,OC("Invalid style-file keyword; skipping remainder of line"),0);
sty_line();
break;
}


type= ps->type&~S_MODIFIED;

if(type!=next_sty())
{

err0_print(ERR_S,OC("Argument of keyword \"%s\" has wrong type; \
conversion to %s attempted"),2,ps->keyword,s_type_name[type]);
}

switch(type)
{
case S_INT:
case S_LONG:
case S_STRING:
case S_CHAR:
break;

default:

err0_print(ERR_S,OC("Was expecting %s here; argument not processed"),1,s_type_name[type]);
goto processed;
}



if(ps->init)
(*ps->init)(ps);
else

confusion(OC("style keyword"),OC("NULL ini fcn"));


ps->type|= S_MODIFIED;

processed:;
}



break;

default:

err0_print(ERR_S,OC("Was expecting keyword or comment here; \
skipping remainder of file"),0);

case S_DONE:
done_sty:
if(sty_file)
fclose(sty_file);

if(sprm_buf)
FREE_MEM(sprm_buf,"sprm_buf",
SPRM_LEN,outer_char);

FREE_MEM(stemp,"stemp",sbuf_len,outer_char);
FREE_MEM(sbuf,"sb",sbuf_len,outer_char);
return;
}
}


SRTN
ini_style(VOID)
{
ini_colors(NO_COLOR);
ini_colors(ATOI(get_option(OC("-C"))+2));


{
link0(&wt_style.input_ext.web,OC("web"),ext_set);
link0(&wt_style.input_ext.change,OC("ch"),ext_set);
link0(&wt_style.input_ext.hweb,OC("hweb"),ext_set);
link0(&wt_style.input_ext.hchange,OC("hch"),ext_set);
}


}



outer_char*
get_option FCN((s))
outer_char*s C1("")
{
int k,len;

len= STRLEN(s);

for(k= 1;k<argc;k++)
if(STRNCMP(s,argv[k],len)==0)
return argv[k];

return OC("");
}


SRTN
set_str FCN((ps))
S_MAP HUGE*ps C1("")
{
a_str(ps->ptr,(CONST outer_char HUGE*)stemp);
}


SRTN
add_str FCN((ps))
S_MAP HUGE*ps C1("")
{
outer_char HUGE*pa= *(outer_char HUGE**)ps->ptr,HUGE*pb;

if(*pa&&(ps->type&S_MODIFIED))
{
pb= GET_MEM("add_str",STRLEN(pa)+STRLEN(stemp)+2,outer_char);
STRCPY(pb,pa);
STRCAT(pb,"\n");
STRCAT(pb,stemp);
*(outer_char HUGE**)ps->ptr= pb;
}
else
set_str(ps);
}


SRTN
set_int FCN((ps))
S_MAP HUGE*ps C1("")
{
*((int*)ps->ptr)= ATOI(stemp);
}


SRTN
set_long FCN((ps))
S_MAP HUGE*ps C1("")
{
*((long*)ps->ptr)= ATOL(stemp);
}


SRTN
set_char FCN((ps))
S_MAP HUGE*ps C1("")
{
*((outer_char*)ps->ptr)= *stemp;
}


SRTN
ini_aclr FCN((ps))
S_MAP HUGE*ps C1("")
{
CLR_MATCH HUGE*c;

set_str(ps);

for(c= clr_match;STRCMP(c->name,"")!=0;c++)
if(STRCMP(c->name,*(outer_char HUGE**)ps->ptr)==0)
{
*(COLOR*)ps->ptr= c->value;
return;
}

CLR_PRINTF(WARNINGS,warning,("! Color name \"%s\" is invalid; \
replaced by \"default\"\n",(char*)ps->ptr));
mark_harmless;

*(COLOR*)ps->ptr= NORMAL;
}


SRTN
ini_clr FCN((ps))
S_MAP HUGE*ps C1("")
{
set_int(ps);
ini_colors((COLOR_MODE)(*(int*)ps->ptr));
}


SRTN
ini_ext FCN((ps))
S_MAP HUGE*ps C1("")
{
set_str(ps);
ext_set((CONST outer_char HUGE**)ps->ptr);
}


SRTN
ini_dot FCN((ps))
S_MAP HUGE*ps C1("")
{
set_char(ps);
*(ASCII*)ps->ptr= XORD(*(outer_char*)ps->ptr);
}


SRTN
ini_cchar FCN((ps))
S_MAP HUGE*ps C1("")
{
outer_char c;

set_char(ps);
c= *(outer_char*)ps->ptr;

if(!(c&&isprint(c)&&c!=' '&&c!='0'))
{
*(outer_char*)ps->ptr= CCHAR;

err0_print(ERR_S,OC("Invalid continuation character '%c'; '%c' assumed"),2,c,CCHAR);
}
}


SRTN
ini_output_line_length FCN((ps))
S_MAP HUGE*ps C1("")
{
int output_line_length;

set_int(ps);
output_line_length= *(int*)ps->ptr;

if(output_line_length<MIN_OUTPUT_LINE_LENGTH||
output_line_length>MAX_OUTPUT_LINE_LENGTH)
{
*(int*)ps->ptr= STANDARD_OUTPUT_LINE_LENGTH;

err0_print(ERR_S,OC("Line length %d is invalid; %d assumed"),2,output_line_length,STANDARD_OUTPUT_LINE_LENGTH+FORTRAN90_LIKE(language));
}
}


SRTN
zero_ccodes(VOID)
{
int c;



for(c= 0;c<=127;c++)
{
ccode[c]= USED_BY_NEITHER;
cname[c]= OC("?");
}


{
ccode[0100]= 0100;


ccode[0173]= 0173;

ccode[0175]= 0175;

ccode[076]= ignore;




}


}


SRTN
ini_ccode FCN((keyword,defaults,code))
CONST outer_char*keyword C0("The desired keyword.")
CONST outer_char*defaults C0("String of default characters.")
eight_bits code C1("Assign this \FWEB\ universal code")
{
CONST outer_char*pc;
CONST S_MAP HUGE*m;
boolean bad_code= NO;
eight_bits cval;
boolean override;
IN_COMMON outer_char style_file_name[];
ASCII a;


if((m= find_sty(map_array,keyword))==NULL)
override= NO;
else



override= BOOLEAN(*(outer_char**)m->ptr!=NULL);


pc= (override&&code)?*(outer_char**)m->ptr:defaults;



if(code!=USED_BY_NEITHER)
while(*pc)
{
if(override&&((cval= ccode[XORD(*pc)])!=USED_BY_NEITHER))
{
printf("! ccode['%c'] already filled with \"%s\"; \
not filled with \"%s\" = \"%s\".\n",
*pc,(char*)ccode_name(cval),(char*)keyword,
(char*)ccode_name(code));
bad_code= YES;
}

a= XORD(*pc++);
ccode[a]= code;
cname[a]= keyword;
}

if(bad_code)

fatal(ERR_S,OC("Invalid control code mapping; "),OC("check the style file %s."),style_file_name);
}


SRTN
reassign FCN((old_code,new_code))
eight_bits old_code C0("")
eight_bits new_code C1("")
{
int c;

for(c= 0;c<128;c++)
if(ccode[c]==old_code)
ccode[c]= new_code;
}


SRTN
prn_codes(VOID)
{
IN_COMMON boolean found_web;
int HUGE*cc_indices;
boolean prn_all= NO;

int k;
int n= 0;

if(!at_codes)
return;

puts("Control-code assignments \
([S,D,C]==`Begins [Section,Definition,Code])':");

cc_buf= GET_MEM("cc_buf",128,CC_BUF);
cc_indices= GET_MEM("cc_indices",128,int);

if(*at_codes&&at_codes[0]==052&&at_codes[1]==052)
prn_all= YES;

if(*at_codes&&!prn_all)
{
CONST ASCII*p;

for(p= at_codes;*p;p++)
prn0_code(*p,cc_buf,&n);
}
else
{
ASCII a;

for(a= 0;a<128;a++)
{
if(ccode[a]==USED_BY_NEITHER&&!prn_all)
continue;

prn0_code(a,cc_buf,&n);
}
}

FREE_MEM(at_codes,"at_codes",200,ASCII);

for(k= 0;k<n;k++)
cc_indices[k]= k;

QSORT(cc_indices,n,sizeof(int),cc_cmp);

for(k= 0;k<n;k++)
STRCPY(cc_buf[k][1],cc_buf[cc_indices[k]][0]);

for(k= 0;k<n;k++)
printf("%-40s%-40s\n",cc_buf[k][0],cc_buf[k][1]);

FREE_MEM(cc_buf,"cc_buf",128,CC_BUF);
FREE_MEM(cc_indices,"cc_indices",128,int);

if(!found_web)
wrap_up();
}


int
cc_cmp FCN((k0,k1))
CONST VOID*pk0 C0("")
CONST VOID*pk1 C1("")
{
char*s0,*s1;

s0= strrchr(cc_buf[*(int*)pk0][0],'-');
s1= strrchr(cc_buf[*(int*)pk1][0],'-');

return STRCMP(s0,s1);
}


SRTN
prn0_code FCN((a,cc_buf,pk))
ASCII a C0("")
CC_BUF HUGE*cc_buf C0("")
int*pk C1("")
{
ASCII new_module,begin_code,formatt;
ASCII cc= ccode[a];
outer_char c;
int n;
outer_char*letter;



new_module= ccode[052];
begin_code= ccode[0141];
formatt= ccode[0146];

c= XCHR(a);

if(cc==USED_BY_NEITHER)
letter= OC("   ");
else if(cc>=new_module)
letter= OC("[S]");
else if(cc>=begin_code)
letter= OC("[C]");
else if(cc>=formatt)
letter= OC("[D]");
else
letter= OC("   ");

n= 
nsprintf((outer_char*)&cc_buf[*pk][0][0],OC(isprint(c)?"  %s @%c":" %s@'\\x%02x'"),2,isprint(c)?letter:OC(""),c);

if(cc==USED_BY_OTHER)
{
STRCPY(used_by_buf,"Used by ");
STRCAT(used_by_buf,program==tangle?"FWEAVE":"FTANGLE");
cname[c]= used_by_buf;
}
else if(cc==USED_BY_NEITHER)
cname[c]= OC("Unassigned");
else switch(c)
{
case '/':
cname[c]= OC("(verbatim comment)");
break;

case '>':
cname[c]= OC("(end of module name)");
break;

case '@':
cname[c]= OC("(literal '@')");
break;
}

sprintf(&cc_buf[*pk][0][n]," --- %s",(char*)cname[c]);
(*pk)++;
}


COLOR_MODE
ini_colors FCN((color_mode0))
COLOR_MODE color_mode0 C1("")
{
color_mode= color_mode0;


{
SET_ACOLOR(ordinary,NORMAL);
SET_ACOLOR(program_name,CYAN);
SET_ACOLOR(md_name,CYAN);
SET_ACOLOR(info,GREEN);
SET_ACOLOR(warning,YELLOW);
SET_ACOLOR(error,RED);
SET_ACOLOR(fatal,RED);
SET_ACOLOR(module_num,MAGENTA);
SET_ACOLOR(line_num,MAGENTA);
SET_ACOLOR(in_file,CYAN);
SET_ACOLOR(include_file,BLUE);
SET_ACOLOR(out_file,CYAN);
SET_ACOLOR(timing,MAGENTA);
SET_ACOLOR(character,MAGENTA);
}



if(!(termcap= get_termcap()))
color_mode= NO_COLOR;

new_color:
switch(color_mode)
{
case NO_COLOR:

{
CLR_LINK(NORMAL,me);
CLR_LINK(BLACK,me);
CLR_LINK(RED,mdmr);
CLR_LINK(GREEN,me);
CLR_LINK(YELLOW,md);
CLR_LINK(BLUE,me);
CLR_LINK(MAGENTA,me);
CLR_LINK(CYAN,me);
CLR_LINK(WHITE,mr);
}


break;

case ANSI_COLOR:
CLR_LINK1(NORMAL,"\033[0m");
CLR_LINK1(BLACK,"\033[01;30m");
CLR_LINK1(RED,"\033[01;31m");
CLR_LINK1(GREEN,"\033[01;32m");
CLR_LINK1(YELLOW,"\033[01;33m");
CLR_LINK1(BLUE,"\033[01;34m");
CLR_LINK1(MAGENTA,"\033[01;35m");
CLR_LINK1(CYAN,"\033[01;36m");
CLR_LINK1(WHITE,"\033[01;37m");
break;

case BILEVEL:
CLR_LINK(NORMAL,me);
CLR_LINK(BLACK,me);
CLR_LINK(RED,mdmr);
CLR_LINK(GREEN,md);
CLR_LINK(YELLOW,md);
CLR_LINK(BLUE,me);
CLR_LINK(MAGENTA,me);
CLR_LINK(CYAN,me);
CLR_LINK(WHITE,mr);
break;

case TRILEVEL:
CLR_LINK(NORMAL,me);
CLR_LINK(BLACK,me);
CLR_LINK(RED,mdmr);
CLR_LINK(GREEN,md);
CLR_LINK(YELLOW,md);
CLR_LINK(BLUE,usmd);
CLR_LINK(MAGENTA,me);
CLR_LINK(CYAN,us);
CLR_LINK(WHITE,mr);
break;

case USER_COLORS:
break;

default:
beeps= YES;
printf("!%c Color mode %i is invalid; replaced by 0.\n",
beep(1),color_mode);
beeps= BEEPS;
color_mode= NO_COLOR;
goto new_color;
}

return color_mode;
}


SRTN
ini_bilevel FCN((ps))
S_MAP HUGE*ps C1("")
{
set_str(ps);

if(termcap==NULL)
return;

termset(ps->ptr);
}


SRTN
link0 FCN((pp,id,fcn))
outer_char HUGE**pp C0("")
CONST outer_char HUGE*id C0("")
SRTN(HUGE_FCN_PTR*fcn)PROTO((CONST outer_char HUGE**))C1("")
{
a_str(pp,id);
(*fcn)((CONST outer_char HUGE**)pp);

}


SRTN
a_str FCN((pp,id))
outer_char HUGE**pp C0("")
CONST outer_char HUGE*id C1("")
{
*((outer_char HUGE**)pp)= GET_MEM("map_string",STRLEN(id)+1,outer_char);
STRCPY(*((outer_char HUGE**)pp),id);
}


outer_char*
get_termcap(VOID)
{
#if !HAVE_GETENV
return NULL;
#else
if((termcap= GETENV(ENV_TERM))==NULL)
return NULL;

tcap_buffer= GET_MEM("tcap_buffer",1024,outer_char);

switch(tgetent(tcap_buffer,termcap))
{
case-1:
printf("! Can't open termcap file `%s'.\n",(char*)termcap);

case 0:
return NULL;
}

return termcap;
#endif 
}


SRTN
termset FCN((pid))
CONST outer_char HUGE**pid C1("")
{
outer_char value_buf[500],*area= value_buf;

outer_char*s;
CONST outer_char HUGE*t;
outer_char id[3];
int k,n,len;
SEQUENCES HUGE*ps= GET_MEM("termcap struct",1,SEQUENCES);
outer_char*string[NUM_TEMP_PTRS];

if(!termcap)
return;

for(t= *pid,n= 0;*t;t+= len)
{
if(n==NUM_TEMP_PTRS)
break;

while(*t==' ')
t++;

#if 0
printf("TERMSET:  <0%o>: `%s'\n",t[0],t+1);
#endif

if(*t==ESC)
{
len= STRLEN(t);
string[n++]= (outer_char*)t;
}
else

{

len= 2;
STRNCPY(id,t,len);
TERMINATE(id,len);


if((s= tgetstr(id,&area))==NULL)
printf("! Termcap entry \"%s\" not found \
for terminal type \"%s\".\n",(char*)id,(char*)termcap);
else
string[n++]= s;
}


}


{
ps->n= (short)n;
ps->string= GET_MEM("termcap strings",n,outer_char*);

for(k= 0;k<n;k++)
{
ps->string[k]= GET_MEM("termcap string",
STRLEN(string[k])+1,outer_char);
STRCPY(ps->string[k],string[k]);
}

FREE((void*)(*pid));
*pid= (CONST outer_char HUGE*)ps;
}


}


SRTN
ext_set FCN((pid))
CONST outer_char HUGE**pid C1("")
{
outer_char id[1000],*p,*p0;
CONST outer_char HUGE*t;
outer_char*string[NUM_TEMP_PTRS];
int k,n;
SEQUENCES HUGE*ps= GET_MEM("termcap struct",1,SEQUENCES);

t= *pid;
n= 0;
p= id;

while(*t)
{
if(n==NUM_TEMP_PTRS)
break;

while(*t==' ')
t++;

p0= p;
while(*t!=' '&&*t)
*p++= *t++;
TERMINATE(p,0);
p++;
string[n++]= p0;
}


{
ps->n= (short)n;
ps->string= GET_MEM("termcap strings",n,outer_char*);

for(k= 0;k<n;k++)
{
ps->string[k]= GET_MEM("termcap string",
STRLEN(string[k])+1,outer_char);
STRCPY(ps->string[k],string[k]);
}

FREE((void*)(*pid));
*pid= (CONST outer_char HUGE*)ps;
}


}


int
put_out FCN((c))
int c C1("")
{
return putchar(c);
}


SRTN
set_color FCN((clr))
COLOR clr C1("")
{
color0.last= color0.present;

#define put_ tput

if(color_mode)
switch(clr)
{

case NORMAL:
put_((SEQUENCES*)wt_style.color._NORMAL);
break;

case BLACK:
put_((SEQUENCES*)wt_style.color._BLACK);
break;

case RED:
put_((SEQUENCES*)wt_style.color._RED);
break;

case GREEN:
put_((SEQUENCES*)wt_style.color._GREEN);
break;

case YELLOW:
put_((SEQUENCES*)wt_style.color._YELLOW);
break;

case BLUE:
put_((SEQUENCES*)wt_style.color._BLUE);
break;

case MAGENTA:
put_((SEQUENCES*)wt_style.color._MAGENTA);
break;

case CYAN:
put_((SEQUENCES*)wt_style.color._CYAN);
break;

case WHITE:
put_((SEQUENCES*)wt_style.color._WHITE);
break;

default:
put_((SEQUENCES*)wt_style.color._NORMAL);
break;
}

#undef put_

color0.present= clr;
}


outer_char*
sset_color FCN((clr))
COLOR clr C1("")
{
#define put_ return sput

if(color_mode)
switch(clr)
{

case NORMAL:
put_((SEQUENCES*)wt_style.color._NORMAL);
break;

case BLACK:
put_((SEQUENCES*)wt_style.color._BLACK);
break;

case RED:
put_((SEQUENCES*)wt_style.color._RED);
break;

case GREEN:
put_((SEQUENCES*)wt_style.color._GREEN);
break;

case YELLOW:
put_((SEQUENCES*)wt_style.color._YELLOW);
break;

case BLUE:
put_((SEQUENCES*)wt_style.color._BLUE);
break;

case MAGENTA:
put_((SEQUENCES*)wt_style.color._MAGENTA);
break;

case CYAN:
put_((SEQUENCES*)wt_style.color._CYAN);
break;

case WHITE:
put_((SEQUENCES*)wt_style.color._WHITE);
break;

default:
put_((SEQUENCES*)wt_style.color._NORMAL);
break;
}

#undef put_

return OC("");
}


SRTN
tput FCN((ps))
SEQUENCES*ps C1("")
{
int k;

for(k= 0;k<ps->n;k++)
tputs(ps->string[k],1,put_out);
}


outer_char*
sput FCN((ps))
SEQUENCES*ps C1("")
{
int k;
outer_char temp[100],*temp1;

if(color_mode==NO_COLOR)
return OC("");

STRCPY(temp,ps->string[0]);

for(k= 1;k<ps->n;k++)
STRCAT(temp,ps->string[k]);

temp1= GET_MEM("sput buf",STRLEN(temp)+1,outer_char);
STRCPY(temp1,temp);

return push_buf(&sput_buf,temp1);
}



SRTN
see_style FCN((pa,see_all))
CONST outer_char HUGE*pa C0("")
boolean see_all C1("")
{
S_MAP HUGE**s0,HUGE**s,HUGE**s1,HUGE*m;

s0= GET_MEM("s0",sizeof(fweb_map)/sizeof(S_MAP),S_MAP HUGE*);


for(s= s0,m= fweb_map;*(m->keyword);s++,m++)
*s= m;


QSORT(s0,s-s0,sizeof(S_MAP HUGE*),cmpr_s_map);


SET_COLOR(info);
printf("%s style-file parameters%s%s%s%s:\n",
see_all?"Default":"Modified",
*pa?" beginning with \"":"",(char*)pa,*pa?"\"":"",
#if 0
see_all
#endif
0?"\n (null or empty values for \
@ command codes are misleading)":"");

SET_COLOR(ordinary);

if(*pa)
{
outer_char HUGE*p;

for(p= (outer_char HUGE*)pa;*p;p++)
if(*p=='.')
*p= '_';
}

for(s1= s0;s1<s;s1++)
see_map(*s1,pa,see_all);

FREE_MEM(s0,"s0",sizeof(fweb_map)/sizeof(S_MAP),S_MAP);
}


int
cmpr_s_map FCN((s0,s1))
S_MAP HUGE**s0 C0("")
S_MAP HUGE**s1 C1("")
{
return STRCMP((*s0)->keyword,(*s1)->keyword);
}


SRTN
see_map FCN((s,pa,see_all))
S_MAP HUGE*s C0("")
CONST outer_char HUGE*pa C0("")
boolean see_all C1("")
{
SEQUENCES*ps;
int k;
STY_TYPE type;
boolean modified= NO;
boolean is_color;

if(*pa&&STRNCMP(pa,s->keyword,STRLEN(pa))!=0)
return;

ps= NULL;

if(see_all)
modified= NO;
else
modified= s->type&S_MODIFIED;


if(STRNCMP(s->keyword,"Color",5)==0)
{
ps= (SEQUENCES*)(*(outer_char**)s->ptr);

if(see_all)
type= S_CLR;
else if(color_mode==USER_COLORS)
type= S_CLR|modified;
else
type= S_CLR_MOD;
}
else if(STRNCMP(s->keyword,"ext",3)==0)
{
ps= NULL;
type= S_CLR|modified;
}
else
type= s->type;

if(see_all)
printf(" ");
else
{
if(type&S_MODIFIED)
{
CLR_PRINTF(ALWAYS,warning,
((type==S_CLR_MOD&&!modified?" ":"*")));
type&= ~S_MODIFIED;

}

else return;
}

is_color= (type==S_STRING)
&&*(int*)s->ptr>NULL_COLOR&&*(int*)s->ptr<(int)HIGHEST_COLOR;

if(color_mode)
if(ps)
tput(ps);
else if(is_color)
set_color(*(int*)s->ptr);

printf(" %s = ",(char*)s->keyword);

switch(type)
{
case S_STRING:
if(is_color)
printf("\"%s\"\n",clr_name[*(int*)s->ptr]);
else
see_str(*((outer_char**)s->ptr),OC("\n"));
break;

case S_CHAR:
printf("'%c'\n",*(outer_char*)s->ptr);
break;

case S_INT:
printf("%d\n",*(int*)s->ptr);
break;

case S_LONG:
printf("%ld\n",*(long*)s->ptr);
break;

case S_CLR:
ps= (SEQUENCES*)(*(outer_char**)s->ptr);

for(k= 0;k<ps->n;k++)
see_str(ps->string[k],OC(" "));
puts("");
break;

default:
break;
}

SET_COLOR(ordinary);
}


SRTN
see_str FCN((s,eos))
CONST outer_char HUGE*s C0("")
CONST outer_char*eos C1("")
{
outer_char c;

if(s==NULL)
{
printf("NULL\n");
return;
}
else if(s<(outer_char HUGE*)100)
{

printf("\n");
return;
}

printf("\"");

while((c= *s++))
print_it:
if(c=='\\')
printf("\\\\");
else if(isprint(c))
printf("%c",c);
else
{
printf("\\");
switch(c)
{
case '\a':c= 'a';goto print_it;
case '\b':c= 'b';goto print_it;
case '\f':c= 'f';goto print_it;
case '\n':c= 'n';goto print_it;
case '\r':c= 'r';goto print_it;
case '\t':c= 't';goto print_it;
case '\v':c= 'v';goto print_it;
case '\033':c= 'e';goto print_it;
default:
printf("%o",c);
break;
}
}

printf("\"");
printf("%s",eos);
}


