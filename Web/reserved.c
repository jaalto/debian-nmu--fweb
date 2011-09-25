#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/reserved -A -# --F -= 1.62/Web/reserved.c"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/reserved.web"\
  CHANGE FILE:  (none)
#endif
#define normal  0
#define roman  1
#define wildcard  2
#define typewriter  3 \

#define is_reserved(a)(a->ilk>typewriter) \

#define append_xref(c)if(xref_ptr==xmem_end) \
OVERFLW("cross-references","r"); \
else \
{ \
(++xref_ptr)->num= c; \
xref_ptr->Language= (boolean)language; \
} \

#define def_flag  ID_FLAG \

#define xref  equiv_or_xref \
 \
 \
 \

#undef expr  
#define expr  1 \

#undef unop  
#define unop  2 \

#undef binop  
#define binop  3 \

#define unorbinop  4 \

#define cast  5
#define question  6
#define lbrace  7
#define rbrace  8
#define decl_hd  9
#define comma  10
#define lpar  11
#define rpar  12
#define lbracket  13
#define rbracket  14
#define new_like  17
#define exp_op  18 \

#define max_math  19 \
 \

#define struct_hd  21
#define decl  20
#define label  22
#define stmt  23
#define functn  24
#define fn_decl  25
#define else_like  26
#define semi  27
#define colon  28
#define tag  29
#define if_hd  30
#define common_hd  31
#define read_hd  32
#define slashes  33
#define implicit_hd  34
#define lproc  35
#define rproc  36
#define ignore_scrap  37
#define for_hd  38
#define newline  39
#define language_scrap  40 \

#define do_like  55
#define for_like  56
#define if_like  57
#define int_like  58
#define case_like  59
#define sizeof_like  60
#define struct_like  61
#define typedef_like  62
#define define_like  63
#define common_like  64
#define read_like  65 \
 \

#define entry_like  66
#define implicit_like  67
#define assign_like  68
#define built_in  69 \

#define Rdo_like  70
#define endif_like  71
#define end_like  72
#define END_like  73
#define go_like  74
#define no_order  75
#define until_like  76
#define IF_like  77
#define IF_top  78
#define else_hd  79
#define ELSE_like  80
#define space  81
#define LPROC  82
#define UNOP  83
#define BINOP  84
#define COMMA  85
#define _EXPR  86
#define _EXPR_  87
#define EXPR_  88
#define Decl_hd  89
#define key_wd  90
#define program_like  91
#define CASE_like  92
#define modifier  93
#define class_like  94
#define op_like  95
#define proc_like  97
#define private_like  98
#define slash_like  99
#define fcn_hd  100
#define END_stmt  101
#define huge_like  102
#define imp_reserved  103
#define extern_like  104
#define while_do  105
#define template  106
#define langle  107
#define tstart  108
#define tlist  109
#define rangle  110
#define namespace  111
#define virtual  112
#define reference  113
#define kill_newlines  114 \

#define SAVE_ID(word_type0,language0,words) \
save_id(word_type0,language0,(CONST outer_char HUGE**)(words)) \

#define ALREADY_RESERVED(L)if(is_reservd.L)break;else is_reservd.L= YES \




#ifndef part
#define part 0 
#else
#if(part != 1 && part != 2 && part != 3)
#define part 1 
#endif
#endif 




#if(part == 0 || part == 1)
#define part1_or_extern
#define SET1(stuff)  =  stuff
#define TSET1(stuff)  =  stuff
#else
#define part1_or_extern extern
#define SET1(stuff)
#define TSET1(stuff)
#endif





#include "typedefs.h"







typedef struct xref_info0
{
sixteen_bits num;
struct xref_info0 HUGE*xlink;

boolean Language;
}xref_info;

typedef xref_info HUGE*xref_pointer;
typedef ASCII HUGE*XREF_POINTER;






#include "c_type.h" 








#ifdef SMALL_MEMORY
#define N_MSGBUF 2000
#else
#define N_MSGBUF 10000
#endif





EXTERN boolean change_exists;



#ifndef COMMON_FCNS_
IN_COMMON BUF_SIZE max_modules;
#endif

EXTERN BUF_SIZE max_refs;
EXTERN xref_info HUGE*xmem;
EXTERN xref_pointer xmem_end;

EXTERN xref_pointer xref_ptr;

EXTERN sixteen_bits xref_switch,mod_xref_switch;
EXTERN boolean defd_switch;
EXTERN NAME_TYPE defd_type SET(NEVER_DEFINED);
EXTERN boolean typd_switch;
EXTERN boolean index_short;







#if(part != 2)


SRTN
save_words FCN((language0,words))
LANGUAGE language0 C0("The words are to be attached to this language.")
CONST RESERVED_WORD HUGE*words C1("Array of words to be stored.")
{
CONST RESERVED_WORD HUGE*r;
LANGUAGE outer_language;

outer_language= language;
language= language0;
language_num= (short)lan_num(language);
word_type= RESERVED_WD;

for(r= words;r->type!=0;++r)
id_lookup(x_to_ASCII(OC(r->reserved_word)),NULL,
(eight_bits)CHOICE(r->type==(eight_bits)expr,normal,r->type));


language= outer_language;
language_num= (short)lan_num(language);
}



SRTN
save_id FCN((word_type0,language0,words))
WORD_TYPE word_type0 C0("|INTRINSIC_FCN| or |KEYWD|")
LANGUAGE language0 C0("They're for this language.")
CONST outer_char HUGE**words C1("Intrinsic names to be stored.")
{
CONST outer_char HUGE**i;
LANGUAGE outer_language;

outer_language= language;
language= language0;
language_num= (short)lan_num(language);
word_type= word_type0;

for(i= words;**i;i++)
id_lookup(x_to_ASCII(*i),
NULL,normal);



language= outer_language;
language_num= (short)lan_num(language);
}



SRTN
ini_special_tokens FCN((language0,tokens))
LANGUAGE language0 C0("")
SPEC HUGE*tokens C1("Array of tokens to be initialized.")
{
SPEC HUGE*s;
int n;
name_pointer np;
LANGUAGE language_tmp= language;

language= language0;


for(s= tokens;(n= STRLEN(s->name))!=0;s++)
{
ASCII HUGE*p= x_to_ASCII(OC(s->name));

s->len= n;
*s->pid= ID_NUM_ptr(np,p,p+n);
np->expandable|= language0;
if(!np->x_translate)np->x_translate= 
(X_FCN(HUGE_FCN_PTR*HUGE*)(VOID))get_mem0(OC("x array"),
(unsigned long)(NUM_LANGUAGES),
sizeof(X_FCN(HUGE_FCN_PTR*)(VOID)));
np->x_translate[lan_num(language0)]= s->expand;
}

language= language_tmp;
}



SRTN
ini_out_tokens FCN((tokens))
SPEC HUGE*tokens C1("")
{
SPEC HUGE*s;


for(s= tokens;(s->len= STRLEN(s->name))!=0;s++)
{
ASCII HUGE*p;
char HUGE*name,HUGE*p0,HUGE*p1;



name= (char HUGE*)(mod_text+1);



if(lowercase_tokens)
for(p1= name,p0= (char HUGE*)s->name;*p0;p0++)
*p1++= (ASCII)tolower(*p0);
else
STRCPY(name,s->name);

p= to_ASCII(OC(name));

*s->pid= ID_NUM(p,p+s->len);
}

}



static SPEC general_tokens[]= {
{"defined",0,NULL,&id_defined},
{"",0,NULL,NULL}
};



static RESERVED_WORD old_WEB_words[]= {
{"_A",built_in},
{"_ABS",built_in},
{"_ASSERT",built_in},
{"_COMMENT",built_in},
{"_DATE",built_in},
{"_DAY",built_in},
{"_DECR",built_in},
{"_DEFINE",built_in},
{"_DEFINED",built_in},
{"_DO",built_in},
{"_DUMPDEF",built_in},
{"_ERROR",built_in},
{"_EVAL",built_in},
{"_GETENV",built_in},
{"_HOME",built_in},
{"_IF",built_in},
{"_IFCASE",built_in},
{"_IFDEF",built_in},
{"_IFELSE",built_in},
{"_IFNDEF",built_in},
{"_INCR",built_in},
{"_INPUT_LINE",built_in},
{"_L",built_in},
{"_LANGUAGE",built_in},
{"_LANGUAGE_NUM",built_in},
{"_LEN",built_in},
{"_M",built_in},
{"_MAX",built_in},
{"_MIN",built_in},
{"_MODULES",built_in},
{"_MODULE_NAME",built_in},
{"_NARGS",built_in},
{"_OUTPUT_LINE",built_in},
{"_P",built_in},
{"_POW",built_in},
{"_ROUTINE",built_in},
{"_SECTION_NUM",built_in},
{"_SECTIONS",built_in},
{"_STRING",built_in},
{"_TIME",built_in},
{"_TRANSLIT",built_in},
{"_U",built_in},
{"_UNDEF",built_in},
{"_UNQUOTE",built_in},
{"_VERBATIM",built_in},
{"_VERSION",built_in},
{"",0}
};

static RESERVED_WORD WEB_words[]= {
{"$A",built_in},
{"$ABS",built_in},
{"$ASSERT",built_in},
{"$_BINOP_",BINOP},
{"$_COMMA_",COMMA},
{"$COMMENT",built_in},
{"$DATE",built_in},
{"$DAY",built_in},
{"$DECR",built_in},
{"$DEFINE",built_in},
{"$DEFINED",built_in},
{"defined",EXPR_},
{"$DO",built_in},
{"$DUMPDEF",built_in},
{"$ERROR",built_in},
{"$EVAL",built_in},
{"$_EXPR",_EXPR},
{"$_EXPR_",_EXPR_},
{"$EXPR_",EXPR_},
{"$GETENV",built_in},
{"$HOME",built_in},
{"$IF",built_in},
{"$IFCASE",built_in},
{"$IFDEF",built_in},
{"$IFELSE",built_in},
{"$IFNDEF",built_in},
{"$INCR",built_in},
{"$INPUT_LINE",built_in},
{"$L",built_in},
{"$LANGUAGE",built_in},
{"$LANGUAGE_NUM",built_in},
{"$LEN",built_in},
{"$M",built_in},
{"$MAX",built_in},
{"$MIN",built_in},
{"$MODULES",built_in},
{"$MODULE_NAME",built_in},
{"$NARGS",built_in},
{"$OUTPUT_LINE",built_in},
{"$P",built_in},
{"$POW",built_in},
{"$ROUTINE",built_in},
{"$SECTION_NUM",built_in},
{"$SECTIONS",built_in},
{"$STRING",built_in},
{"$TIME",built_in},
{"$TRANSLIT",built_in},
{"$UNOP_",UNOP},
{"$U",built_in},
{"$UNDEF",built_in},
{"$UNQUOTE",built_in},
{"$VERBATIM",built_in},
{"$VERSION",built_in},
{"",0}
};



SRTN
save_WEB FCN((language0))
LANGUAGE language0 C1("")
{
save_words(language0,WEB_words);
}



static RESERVED_WORD M4_words[]= {
{"changequote",built_in},
{"define",built_in},
{"divert",built_in},
{"divnum",built_in},
{"dnl",built_in},
{"dumpdef",built_in},
{"errprint",built_in},
{"eval",built_in},
{"ifdef",built_in},
{"ifelse",built_in},
{"include",built_in},
{"incr",built_in},
{"index",built_in},
{"len",built_in},
{"maketemp",built_in},
{"sinclude",built_in},
{"substr",built_in},
{"syscmd",built_in},
{"translit",built_in},
{"undefine",built_in},
{"undivert",built_in},
{"",0}
};




static RESERVED_WORD C_words[]= {
{"auto",int_like},
{"break",case_like},
{"case",case_like},
{"char",int_like},
{"clock_t",int_like},
{"complex",int_like},
{"const",modifier},
{"continue",case_like},
{"default",case_like},
{"#define",define_like},
{"div_t",int_like},
{"do",do_like},
{"double",int_like},
{"#elif",else_like},
{"else",else_like},
{"#else",else_like},
{"#endif",if_like},
{"#error",if_like},
{"extern",extern_like},
{"FILE",int_like},
{"float",int_like},
{"fortran",int_like},
{"fpos_t",int_like},
{"for",for_like},{"FOR",for_like},
{"goto",case_like},
{"huge",huge_like},
{"if",if_like},
{"#if",if_like},
{"#ifdef",if_like},
{"#ifndef",if_like},
{"#include",if_like},
{"int",int_like},
{"ldiv_t",int_like},
{"long",int_like},
{"#line",if_like},
{"noalias",int_like},
{"#pragma",if_like},
{"ptrdiff_t",int_like},
{"register",int_like},
{"return",case_like},
{"short",int_like},
{"sig_atomic_t",int_like},
{"signed",int_like},
{"size_t",int_like},
{"sizeof",sizeof_like},
{"static",int_like},
{"switch",for_like},
{"time_t",int_like},
{"typedef",typedef_like},
{"#undef",if_like},
{"unsigned",int_like},
{"va_list",int_like},
{"volatile",modifier},
{"void",int_like},
{"wchar_t",int_like},
{"while",for_like},
{"",0}
};

static RESERVED_WORD C_words1[]= 
{
{"enum",struct_like},
{"struct",struct_like},
{"union",struct_like},
{"",0}
};



CONST char*C_intrinsics[]= {
"abort","atexit","exit","getenv","system",
"abs","div","labs","ldiv",
"acos","asin","atan","atan2","cos","sin","tan",
"asctime","ctime","gmtime","localtime","strftime","clock","difftime",
"mktime","time",
"assert",
"atof","atoi","atol","strtod","strtol","strtoul",
"bsearch","qsort",
"calloc","free","malloc","realloc",
"ceil","fabs","floor","fmod",
"fclose","fflush","fopen","freopen","setbuf","setvbuf",
"clearerr","feof","ferror","perror",
"cosh","sinh","tanh",
"exp","frexp","ldexp","log","log10","modf",
"fgetc","fgets","fprintf","fputc","fputs","fread","fscanf",
"fwrite","getc","getchar","gets","printf","putc","putchar",
"puts","scanf","sprintf","sscanf","ungetc",
"vfprintf","vprintf","vsprintf",
"fgetpos","fseek","fsetpos","ftell","rewind",
"printf","sprintf",
"isalnum","isalpha","iscntrl","isdigit","isgraph","islower",
"isprint","ispunct","isspace","isupper","isxdigit",
"localeconv","setlocale",
"longjmp","setjmp",
"mblen","mbstowcs","mbtowc","wcstombs","wctomb",
"memcmp","strcmp","strcoll","strncmp","strxfrm","strcat","strncat",
"memcpy","memmove","strcpy","strncpy",
"memset","strerror","strlen",
"memchr","strchr","strcspn","strpbrk","strrchr",
"strspn","strstr","strtok",
"offsetof",
"pow","sqrt",
"raise",
"rand","srand",
"remove","rename","tmpfile","tmpnam",
"strcpy","strcmp","strncpy","strlen",
"tolower","toupper",
"ungetc",
"va_arg","va_end","va_start",
"write",
""
};



static RESERVED_WORD Cpp_words[]= 
{
{"asm",int_like},
{"bool",int_like},
{"catch",expr},
{"class",class_like},
{"const_cast",int_like},
{"delete",new_like},
{"dynamic_cast",int_like},
{"explicit",int_like},
{"friend",int_like},
{"inline",int_like},
{"mutable",int_like},
{"namespace",namespace},
{"new",new_like},
{"operator",op_like},
{"private",case_like},
{"protected",case_like},
{"public",case_like},
{"reinterpret_cast",int_like},
{"static_cast",int_like},
{"template",template},
{"this",expr},
{"throw",case_like},
{"try",fn_decl},
{"typeid",int_like},
{"typename",int_like},
{"using",int_like},
{"virtual",virtual},
{"",0}
};

static RESERVED_WORD Cpp_words1[]= 
{
{"enum",class_like},
{"struct",class_like},
{"union",class_like},
{"",0}
};

CONST char*Cpp_intrinsics[]= 
{
"set_new_handler",
"set_terminate",
"set_unexpected",
""
};



CONST char*Cpp_keywords[]= {
"false",
"true",
""
};



static RESERVED_WORD F77_words[]= {
{"accept",read_like},
{"assign",assign_like},
{"backspace",read_like},
{"block",program_like},
{"blockdata",program_like},
{"call",case_like},
{"character",int_like},
{"close",read_like},
{"common",common_like},
{"complex",int_like},
{"continue",case_like},
{"data",no_order},
{"$decl_hd",decl_hd},
{"dimension",int_like},
{"do",Rdo_like},{"DO",for_like},
{"double",int_like},
{"doubleprecision",int_like},
{"else",else_like},
{"elseif",else_like},
{"end",end_like},
{"enddo",endif_like},
{"endif",endif_like},
{"endfile",read_like},
{"endfunction",end_like},
{"endprogram",end_like},
{"endsubroutine",end_like},
{"entry",entry_like},
{"equivalence",int_like},
{"external",int_like},
{"format",read_like},
{"function",program_like},
{"go",go_like},
{"goto",case_like},
{"if",if_like},
{"implicit",implicit_like},
{"integer",int_like},
{"inquire",read_like},
{"intrinsic",int_like},
{"logical",int_like},
{"open",read_like},
{"parameter",int_like},
{"pause",case_like},
{"precision",int_like},
{"print",read_like},
{"program",program_like},
{"read",read_like},
{"REAL",int_like},
{"real",int_like},
{"return",case_like},
{"rewind",read_like},
{"save",common_like},
{"subroutine",program_like},
{"stop",case_like},
{"then",built_in},
{"to",built_in},
{"TYPE",read_like},

{"write",read_like},
{"",0}
};



#ifdef VAXC
static RESERVED_WORD VAX_words[]= {
{"decode",read_like},
{"delete",read_like},
{"dictionary",int_like},
{"encode",read_like},
{"endmap",end_like},
{"endstructure",end_like},
{"endunion",end_like},
{"find",read_like},
{"INCLUDE",no_order},
{"map",struct_like},
{"namelist",common_like},
{"options",int_like},
{"record",common_like},
{"rewrite",read_like},
{"union",struct_like},
{"unlock",read_like},
{"virtual",int_like},
{"volatile",common_like},
{"",0}
};
#endif 



CONST char*F77_intrinsics[]= {
"abs","dabs","cabs",
"acos","dacos",
"aimag",
"aint","dint",
"amax0",
"amin0",
"anint","dnint",
"areal",
"asin","dasin",
"atan","datan",
"atan2","datan2","atan2d",
"char",
"cmplx",
"conjg",
"cos","dcos","ccos",
"cosh","dcosh",
"dble",
"dfloat",
"dim","ddim",
"dprod",
"exp","dexp","cexp",
"float",
"iabs",
"iand","ior","ieor","not",
"ichar",
"idim",
"idint","iqint",
"idnint","iqnint",
"ifix",
"int",
"isign",
"jnint",
"llt","lle","lgt","lge",
"log","alog","dlog","clog",
"log10","alog10","dlog10",
"max","amax1","dmax1",
"max0",
"max1",
"min","amin1","dmin1",
"min0",
"min1",
"mod","amod","dmod",
"Real",
"sngl",
"sign","dsign",
"sin","dsin","csin",
"sinh","dsinh",
"sqrt","dsqrt","csqrt",
"tan","dtan",
"tanh","dtanh",
"%val","%loc","%descr",
""
};



#ifdef VAXC
CONST char*VAX_intrinsics[]= {
"qsqrt","cdsqrt",
"qlog","cdlog","qlog10",
"qexp","cdexp",
"qsin","cdsin",
"sind","dsind","qsind",
"qcos","cdcod",
"cods","dcods","qcods",
"qtan",
"tand","dtand","qtand",
"qasin",
"asind","dasind","qasind",
"qacos",
"acosd","dacosd","qacosd",
"qatan",
"atand","datand","qatand",
"qatan2",
"atan2d","datan2d","qatan2d",
"qsinh","qcosh","qtanh",
"iiabs","jiabs","qabs","cdabs",
"iint","jint","iidint","jidint","iiqint","jiqint","qint",
"nint","inint","iidnnt","jidnnt","iiqnnt","jiqnnt","qnint",
"zext","izext","jzext",
"floati","floatj","snglq","dbleq",
"qext","qextd",
"iifix","jifix",
"floati","floatj",
"dfloti","dflotj",
"qfloat",
"dcmplx",
"dreal","dimag","dconjg",
"imax0","jmax0","qmax1","aimax0","ajmax0",
"imin0","jmin0","qmin1","aimin0","ajmin0",
"iidim","jidim","qdim",
"imod","jmod","qmod",
"iisign","jisign","qsign",
"iiand","jiand",
"iior","jior",
"iieor","jieor",
"inot","jnot",
"ishft","iishft","jishft",
"ibits","iibits","jibits",
"ibset","iibset","jibset",
"btest","bitest","bjtest",
"ibclr","iibclr","jibclr",
"ishftc","iishftc","jishftc",
""
};
#endif 



CONST char*F77_Keywords[]= {
"ACCESS",
"ASSOCIATEVARIABLE",
"BLANK",
"BLOCKSIZE",
"BUFFERCOUNT",
"CARRIAGECONTROL",
"DEFAULTFILE",
"DIRECT",
"DISP",
"END",
"ERR",
"EXIST",
"FILE",
"FMT",
"FORM",
"FORMATTED",
"IOSTAT",
"NAME",
"NAMED",
"NEXTREC",
"NUMBER",
"OPENED",
"RECL",
"SEQUENTIAL",
"STATUS",
"UNFORMATTED",
"UNIT",
"none",


""
};

CONST char*F77_keywords[]= {
"access",
"associatevariable",
"blank",
"blocksize",
"buffercount",
"carriagecontrol",
"defaultfile",
"direct",
"disp",
#if 0
"end",
#endif
"err",
"exist",
"file",
"fmt",
"form",
"formatted",
"iostat",
"name",
"named",
"nextrec",
"number",
"opened",
"recl",
"sequential",
"status",
"unformatted",
"unit",
""
};



#ifdef VAXC
CONST char*VAX_Keywords[]= {
"DISPOSE",
"EXTENDSIZE",
"INITIALSIZE",
"KEY",
"KEYED",
"MAXREC",
"NML",
"NOSPANBLOCKS",
"ORGANIZATION",
"READONLY",
"REC",
"RECORDSIZE","RECORDTYPE","RECORDSIZE",
"SHARED",
"TYPE",
"USEROPEN",
""
};
#endif 



static RESERVED_WORD F90_words[]= {
{"allocate",read_like},
{"allocatable",int_like},
{"assignment",op_like},
{"case",CASE_like},
{"contains",entry_like},
{"cycle",case_like},
{"deallocate",read_like},
{"elsewhere",else_like},
{"endinterface",end_like},
{"endmodule",end_like},
{"endselect",end_like},
{"endtype",end_like},
{"endwhere",end_like},
{"exit",case_like},
{"include",no_order},
{"intent",int_like},
{"interface",struct_like},
{"module",program_like},
{"only",built_in},
{"optional",int_like},
{"nullify",read_like},
{"operator",op_like},
{"pointer",int_like},
{"private",private_like},
{"procedure",proc_like},
{"public",private_like},
{"recursive",int_like},
{"result",_EXPR},
{"save",int_like},
{"select",if_like},
{"sequence",private_like},
{"target",int_like},
{"type",struct_like},
{"use",no_order},
{"where",if_like},
{"while",for_like},
{"",0}
};



CONST char*F90_intrinsics[]= {
"achar",
"adjustl","adjustr",
"all","any",
"allocated",
"associated",
"bit_size",
"btest",
"ceiling",
"count",
"cshift",
"date_and_time",
"digits",
"dot_product",
"eoshift",
"epsilon",
"exponent","fraction",
"floor",
"huge",
"iachar",
"ibclr","ibits","ibset","ishft","ishftc",
"index",
"kind",
"lbound",
"len","len_trim",
"LOGICAL",
"matmul",
"maxexponent","minexponent",
"maxloc","minloc",
"maxval","minval",
"merge",
"modulo",
"mvbits",
"nint",
"nearest",
"pack",
"PRECISION",
"present",
"product",
"radix",
"random_number","random_seed",
"range",
"REPEAT",
"reshape",
"rrspacing",
"scale",
"scan",
"selected_int_kind","selected_real_kind",
"set_exponent",
"shape",
"size",
"spacing",
"spread",
"sum",
"system_clock",
"tiny",
"transfer",
"transpose",
"trim",
"ubound",
"unpack",
"verify",
""
};



CONST char*F90_Keywords[]= {
"ACTION",
"ADVANCE",
"DELIM",
"EOR",
"IN","INOUT","OUT",
"KIND",
"LEN",
"NML",
"NULLS",
"ONLY",
"PAD",
"POSITION",
"READ","READWRITE",
"REC",
"SIZE",
"STAT",
"WRITE",
""
};

CONST char*F90_keywords[]= {
"action",
"advance",
"delim",
"eor",
"in","inout","out",
"kind",
"len",
"nml",
"nulls",
"only",
"pad",
"position",
#if 0
"read",
#endif
"readwrite",
"rec",
"size",
"stat",
#if 0
"write",
#endif
""
};



static RESERVED_WORD RATFOR_words[]= {
{"break",case_like},
{"case",CASE_like},
{"default",case_like},
{"for",for_like},{"FOR",for_like},
{"next",case_like},
{"repeat",do_like},
{"switch",for_like},
{"until",until_like},
{"while",for_like},
{"",0}
};



CONST char*R77_keywords[]= {
"end",
""
};



extern RESERVED_WORD TEX_words[];



extern CONST char*TEX_intrinsics[];



typedef struct
{
boolean C,RATFOR,FORTRAN,TEX,LITERAL,C_PLUS_PLUS,RATFOR_90,FORTRAN_90;
}IS_RESERVED;

IS_RESERVED is_reservd= {NO,NO,NO,NO,NO,NO,NO,NO};

SRTN
ini_reserved FCN((l))
LANGUAGE l C1("")
{
switch(l)
{
case NO_LANGUAGE:

confusion(OC("ini_reserved"),OC("Language should already be defined here"));

case C:


ALREADY_RESERVED(C);

save_words(C,C_words);
save_words(C,C_words1);

save_WEB(C);

SAVE_ID(INTRINSIC_FCN,C,C_intrinsics);

ini_tokens(C)

;
break;

case C_PLUS_PLUS:


ALREADY_RESERVED(C_PLUS_PLUS);

save_words(C_PLUS_PLUS,C_words);
save_words(C_PLUS_PLUS,Cpp_words);
save_words(C_PLUS_PLUS,Cpp_words1);

save_WEB(C_PLUS_PLUS);

SAVE_ID(INTRINSIC_FCN,C_PLUS_PLUS,C_intrinsics);
SAVE_ID(INTRINSIC_FCN,C_PLUS_PLUS,Cpp_intrinsics);

SAVE_ID(KEYWD,C_PLUS_PLUS,Cpp_keywords);

ini_tokens(C_PLUS_PLUS)

;
break;

case FORTRAN:


ALREADY_RESERVED(FORTRAN);

save_words(FORTRAN,F77_words);
save_WEB(FORTRAN);

if(m4)
save_words(FORTRAN,M4_words);

SAVE_ID(INTRINSIC_FCN,FORTRAN,F77_intrinsics);
SAVE_ID(KEYWD,FORTRAN,F77_Keywords);

if(lc_keywords)
SAVE_ID(KEYWD,FORTRAN,F77_keywords);

#ifdef VAXC
save_words(FORTRAN,VAX_words);
SAVE_ID(INTRINSIC_FCN,FORTRAN,VAX_intrinsics);
SAVE_ID(KEYWD,FORTRAN,VAX_Keywords);
#endif 

ini_tokens(FORTRAN)

;
break;

case FORTRAN_90:


ALREADY_RESERVED(FORTRAN_90);

save_words(FORTRAN_90,F77_words);
save_words(FORTRAN_90,F90_words);
save_WEB(FORTRAN_90);

if(m4)
save_words(FORTRAN_90,M4_words);

SAVE_ID(INTRINSIC_FCN,FORTRAN_90,F77_intrinsics);
SAVE_ID(INTRINSIC_FCN,FORTRAN_90,F90_intrinsics);
SAVE_ID(KEYWD,FORTRAN_90,F77_Keywords);
SAVE_ID(KEYWD,FORTRAN_90,F90_Keywords);

if(lc_keywords)
{
SAVE_ID(KEYWD,FORTRAN_90,F77_keywords);
SAVE_ID(KEYWD,FORTRAN_90,F90_keywords);
}

#ifdef VAXC
save_words(FORTRAN_90,VAX_words);
SAVE_ID(INTRINSIC_FCN,FORTRAN_90,VAX_intrinsics);
SAVE_ID(KEYWD,FORTRAN_90,VAX_Keywords);
#endif 

ini_tokens(FORTRAN_90)

;
break;

case RATFOR:
if(!Rat_is_loaded)break;


ALREADY_RESERVED(RATFOR);

save_words(RATFOR,F77_words);
save_words(RATFOR,RATFOR_words);
save_WEB(RATFOR);

if(m4)save_words(RATFOR,M4_words);

SAVE_ID(INTRINSIC_FCN,RATFOR,F77_intrinsics);
SAVE_ID(KEYWD,RATFOR,F77_Keywords);

if(lc_keywords)
{
SAVE_ID(KEYWD,RATFOR,F77_keywords);
SAVE_ID(KEYWD,RATFOR,R77_keywords);
}

#ifdef VAXC
save_words(RATFOR,VAX_words);
SAVE_ID(INTRINSIC_FCN,RATFOR,VAX_intrinsics);
SAVE_ID(KEYWD,RATFOR,VAX_Keywords);
#endif 

ini_RAT_tokens(RATFOR)

;
break;

case RATFOR_90:
if(!Rat_is_loaded)break;


ALREADY_RESERVED(RATFOR_90);

save_words(RATFOR_90,F77_words);
save_words(RATFOR_90,F90_words);
save_words(RATFOR_90,RATFOR_words);
save_WEB(RATFOR_90);

if(m4)
save_words(RATFOR_90,M4_words);

SAVE_ID(INTRINSIC_FCN,RATFOR_90,F77_intrinsics);
SAVE_ID(INTRINSIC_FCN,RATFOR_90,F90_intrinsics);
SAVE_ID(KEYWD,RATFOR_90,F77_Keywords);
SAVE_ID(KEYWD,RATFOR_90,F90_Keywords);

if(lc_keywords)
{
SAVE_ID(KEYWD,RATFOR_90,F77_keywords);
SAVE_ID(KEYWD,RATFOR_90,R77_keywords);
SAVE_ID(KEYWD,RATFOR_90,F90_keywords);
}

#ifdef VAXC
save_words(RATFOR_90,VAX_words);
SAVE_ID(INTRINSIC_FCN,RATFOR_90,VAX_intrinsics);
SAVE_ID(KEYWD,RATFOR_90,VAX_Keywords);
#endif 

ini_RAT_tokens(RATFOR_90)

;
break;

case TEX:


ALREADY_RESERVED(TEX);

save_words(TEX,TEX_words);
save_WEB(TEX);

SAVE_ID(INTRINSIC_FCN,TEX,TEX_intrinsics);

ini_tokens(TEX)

;
break;

case LITERAL:


ALREADY_RESERVED(LITERAL);


;
break;

case NUWEB_OFF:
case NUWEB_ON:

confusion(OC("ini_reserved"),OC("Invalid language"));
}

ini_out_tokens(general_tokens);
}


#endif 

#if(part != 1)


RESERVED_WORD TEX_words[]= {

{"\\above",built_in},
{"\\abovedisplayshortskip",built_in},
{"\\abovedisplayskip",built_in},
{"\\abovewithdelims",built_in},
{"\\accent",built_in},
{"\\adjdemerits",built_in},
{"\\advance",built_in},
{"\\afterassignment",built_in},
{"\\aftergroup",built_in},
{"\\atop",built_in},
{"\\atopwithdelims",built_in}

,

{"\\baselineskip",built_in},
{"\\batchmode",built_in},
{"\\begingroup",built_in},
{"\\belowdisplayshortskip",built_in},
{"\\belowdisplayskip",built_in},
{"\\binoppenalty",built_in},
{"\\botmark",built_in},
{"\\box",built_in},{"\\bowmaxdepth",built_in},
{"\\brokenpenalty",built_in}

,

{"\\catcode",built_in},
{"\\char",built_in},{"\\chardef",typedef_like},
{"\\cleaders",built_in},
{"\\closein",built_in},{"\\closeout",built_in},
{"\\clubpenalty",built_in},
{"\\copy",built_in},
{"\\count",built_in},{"\\countdef",typedef_like},
{"\\cr",built_in},{"\\crcr",built_in},
{"\\csname",built_in}

,

{"\\day",built_in},
{"\\deadcycles",built_in},
{"\\def",typedef_like},
{"\\defaulthyphenchar",built_in},{"\\defaultskewchar",built_in},
{"\\delcode",built_in},
{"\\delimiter",built_in},{"\\delimiterfactor",built_in},
{"\\deflimitershortfall",built_in},
{"\\dimen",built_in},{"\\dimendef",typedef_like},
{"\\discretionary",built_in},
{"\\displayindent",built_in},
{"\\displaylimits",built_in},
{"\\displaystyle",built_in},
{"\\displaywidowpenalty",built_in},
{"\\displaywidth",built_in},
{"\\divide",built_in},
{"\\doublehyphendemerits",built_in},
{"\\dp",built_in},
{"\\dump",built_in}

,

{"\\edef",typedef_like},
{"\\eject",built_in},
{"\\else",built_in},
{"\\end",built_in},{"\\endcsname",built_in},
{"\\endcsname",built_in},
{"\\endgroup",built_in},
{"\\endinput",built_in},
{"\\endlinechar",built_in},
{"\\eqno",built_in},
{"\\errhelp",built_in},{"\\errmessage",built_in},
{"\\errorstopmode",built_in},
{"\\escapechar",built_in},
{"\\everycr",built_in},{"\\everydisplay",built_in},
{"\\everyhbox",built_in},{"\\everyjob",built_in},
{"\\everymath",built_in},{"\\everypar",built_in},
{"\\everyvbox",built_in},
{"\\exhyphenpenalty",built_in},
{"\\expandafter",built_in}

,

{"\\fam",built_in},
{"\\fi",built_in},
{"\\finalhyphendemerits",built_in},
{"\\firstmark",built_in},
{"\\floatingpenalty",built_in},
{"\\font",built_in},{"\\fontdimen",built_in},
{"\\fontname",built_in},
{"\\futurelet",typedef_like},
{"\\gdef",typedef_like},
{"\\global",built_in},{"\\globaldefs",built_in},
{"\\halign",built_in},
{"\\hangafter",built_in},{"\\hangindent",built_in},
{"\\hbadness",built_in},
{"\\hbox",built_in},
{"\\hfil",built_in},{"\\hfill",built_in},
{"\\hfilneg",built_in},
{"\\hfuzz",built_in},
{"\\hoffset",built_in},
{"\\hrule",built_in},
{"\\hskip",built_in},
{"\\hss",built_in},
{"\\ht",built_in},
{"\\hyphenation",built_in},
{"\\hyphenchar",built_in},{"\\hyphenpenalty",built_in}

,

{"\\if",built_in},{"\\ifcase",built_in},
{"\\ifcat",built_in},{"\\ifdim",built_in},{"\\ifeof",built_in},
{"\\iffalse",built_in},{"\\ifhbox",built_in},
{"\\ifhmode",built_in},{"\\ifinner",built_in},{"\\ifmmode",built_in},
{"\\ifnum",built_in},{"\\ifodd",built_in},
{"\\iftrue",built_in},
{"\\ifvbox",built_in},{"\\ifvmode",built_in},{"\\ifvoid",built_in},
{"\\ifx",built_in},
{"\\ignorespaces",built_in},
{"\\immediate",built_in},
{"\\indent",built_in},
{"\\input",built_in},
{"\\insert",built_in},{"\\insertpenalties",built_in},
{"\\interlinepenalty",built_in},
{"\\jobname",built_in},
{"\\kern",built_in}

,

{"\\lastbox",built_in},{"\\lastkern",built_in},
{"\\lastpenalty",built_in},{"\\lastskip",built_in},
{"\\lccode",built_in},
{"\\leaders",built_in},
{"\\left",built_in},
{"\\leqno",built_in},
{"\\leftskip",built_in},
{"\\let",typedef_like},
{"\\limits",built_in},
{"\\linepenalty",built_in},{"\\lineskip",built_in},
{"\\lineskiplimit",built_in},
{"\\llap",built_in},
{"\\long",built_in},
{"\\looseness",built_in},
{"\\lower",built_in},{"\\lowercase",built_in}

,

{"\\mag",built_in},
{"\\mark",built_in},
{"\\mathaccent",built_in},
{"\\mathbin",built_in},
{"\\mathchar",built_in},
{"\\mathchardef",built_in},
{"\\mathchoice",built_in},
{"\\mathclose",built_in},
{"\\mathcode",built_in},
{"\\mathinner",built_in},{"\\mathop",built_in},
{"\\mathop",built_in},{"\\mathopen",built_in},
{"\\mathord",built_in},
{"\\mathpunc",built_in},
{"\\mathrel",built_in},
{"\\mathsurround",built_in},
{"\\maxdeadcycles",built_in},
{"\\maxdepth",built_in},
{"\\meaning",built_in},
{"\\medmuskip",built_in},
{"\\message",built_in},
{"\\mkern",built_in},
{"\\month",built_in},
{"\\moveleft",built_in},{"\\moveright",built_in},
{"\\mskip",built_in},
{"\\multiply",built_in},
{"\\muskip",built_in},
{"\\muskipdef",built_in},
{"\\newlinechar",built_in},
{"\\noalign",built_in},
{"\\noexpand",built_in},
{"\\noindent",built_in},
{"\\nolimits",built_in},
{"\\nonscript",built_in},
{"\\nonstopmode",built_in},
{"\\nulldelimiterspace",built_in},
{"\\number",built_in}

,

{"\\omit",built_in},
{"\\openin",built_in},{"\\openout",built_in},
{"\\or",built_in},
{"\\outer",built_in},
{"\\output",built_in},{"\\outputpenalty",built_in},
{"\\over",built_in},
{"\\overfullrule",built_in},
{"\\overline",built_in},
{"\\overwithdelims",built_in}

,

{"\\pagedepth",built_in},
{"\\pagefilllstretch",built_in},{"\\pagefillstretch",built_in},
{"\\pagefilstretch",built_in},
{"\\pagegoal",built_in},
{"\\pageshrink",built_in},{"\\pagestretch",built_in},
{"\\pagetotal",built_in},
{"\\par",built_in},
{"\\parfillskip",built_in},
{"\\parindent",built_in},
{"\\parshape",built_in},{"\\parskip",built_in},
{"\\patterns",built_in},
{"\\pausing",built_in},
{"\\penalty",built_in},
{"\\postdisplaypenalty",built_in},
{"\\predisplaypenalty",built_in},
{"\\predisplaysize",built_in},
{"\\pretolerance",built_in},
{"\\prevdepth",built_in},
{"\\prevgraf",built_in},
{"\\radical",built_in},
{"\\raise",built_in},
{"\\read",built_in},
{"\\relax",built_in},
{"\\relpenalty",built_in},
{"\\right",built_in},
{"\\rightskip",built_in},
{"\\romannumeral",built_in}

,

{"\\scripfont",built_in},{"\\scripscripfont",built_in},
{"\\scripscriptstyle",built_in},{"\\scriptspace",built_in},
{"\\scripstyle",built_in},
{"\\scrollmode",built_in},
{"\\setbox",built_in},
{"\\sfcode",built_in},
{"\\shipout",built_in},
{"\\show",built_in},{"\\showbox",built_in},
{"\\showboxbreadth",built_in},{"\\showboxdepth",built_in},
{"\\showhyphens",built_in},{"\\showlists",built_in},
{"\\showthe",built_in},
{"\\skewchar",built_in},
{"\\skip",built_in},{"\\skipdepth",built_in},
{"\\spacefactor",built_in},{"\\spaceskip",built_in},
{"\\span",built_in},
{"\\special",built_in},
{"\\splitbotmark",built_in},{"\\splitfirstmark",built_in},
{"\\splitmaxdepth",built_in},
{"\\splittopskip",built_in},
{"\\string",built_in},
{"\\tabskip",built_in}

,

{"\\textfont",built_in},
{"\\textstyle",built_in},
{"\\the",built_in},
{"\\thickmuskip",built_in},{"\\thinmuskip",built_in},
{"\\time",built_in},
{"\\toks",built_in},{"\\toksdef",built_in},
{"\\tolerance",built_in},
{"\\topmark",built_in},{"\\topskip",built_in},
{"\\tracingcommands",built_in},
{"\\tracinglostchars",built_in},
{"\\tracingmacros",built_in},
{"\\tracingonline",built_in},
{"\\tracingoutput",built_in},
{"\\tracingpages",built_in},
{"\\tracingparagraphs",built_in},
{"\\tracingrestores",built_in},
{"\\tracingstats",built_in}

,

{"\\ucode",built_in},{"\\uchyph",built_in},
{"\\underline",built_in},
{"\\unhbox",built_in},
{"\\unhcopy",built_in},{"\\unkern",built_in},
{"\\unpenalty",built_in},{"\\unskip",built_in},
{"\\unvbox",built_in},{"\\unvcopy",built_in},
{"\\uppercase",built_in},
{"\\vadjust",built_in},{"\\valign",built_in},
{"\\vbadness",built_in},
{"\\vbox",built_in},{"\\vcenter",built_in},
{"\\vfil",built_in},{"\\vfill",built_in},
{"\\vfilneg",built_in},
{"\\vfuzz",built_in},
{"\\voffset",built_in},
{"\\vskip",built_in},
{"\\vrule",built_in},
{"\\vsize",built_in},
{"\\vskip",built_in},
{"\\vskip",built_in},
{"\\vss",built_in},
{"\\vtop",built_in},
{"\\wd",built_in},
{"\\widowpenalty",built_in},
{"\\write",built_in},
{"\\xdef",typedef_like},
{"\\xleaders",built_in},
{"\\xspaceskip",built_in},
{"\\year",built_in}


,
{"",0}
};



CONST char*TEX_intrinsics[]= {

"\\aa",
"\\AA",
"\\active",
"\\acute",
"\\advancepageno",
"\\ae",
"\\AE",
"\\aleph",
"\\allowbreak",
"\\allowhyphens",
"\\alpha",
"\\amalg",
"\\angle",
"\\approx",
"\\arccos",
"\\arcsin",
"\\arctan",
"\\arg",
"\\arrowvert",
"\\Arrowvert",
"\\ast",
"\\asymp"

,

"\\b",
"\\backslash",
"\\bar",
"\\beta",
"\\bf",
"\\bffam",
"\\bgroup",
"\\big",
"\\Big",
"\\bigbreak",
"\\bigcap",
"\\bigcirc",
"\\bigcup",
"\\bigg",
"\\Bigg",
"\\biggl",
"\\Biggl",
"\\biggm",
"\\Biggm",
"\\biggr",
"\\Biggr",
"\\bigl",
"\\Bigl",
"\\bigm",
"\\Bigm",
"\\bigodot",
"\\bigoplus",
"\\bigotimes",
"\\bigr",
"\\Bigr",
"\\bigskip","\\bigskipamount",
"\\bigsqcup",
"\\bigtriangledown",
"\\bigtriangleup",
"\\biguplus",
"\\bigvee",
"\\bigwedge",
"\\bmod",
"\\body",
"\\bordermatrix",



"\\bot",
"\\bowtie",
"\\brace",
"\\braceld",
"\\bracelu",
"\\bracerd",
"\\braceru",
"\\bracevert",
"\\brack",
"\\break",
"\\breve",
"\\buildrel",
"\\bullet",
"\\bye"

,

"\\c",
"\\cal",
"\\cap",
"\\cases",
"\\cdot",
"\\cdotp",
"\\cdots",
"\\centering",
"\\centerline",
"\\check",
"\\chi",
"\\choose",
"\\circ",
"\\cleartabs",
"\\clubsuit",
"\\colon",
"\\cong",
"\\coprod",
"\\copyright",
"\\cos",
"\\cosh",
"\\cot",
"\\coth",
"\\csc",
"\\cup"

,

"\\d",
"\\dag",
"\\dagger",
"\\dashv",
"\\ddag",
"\\ddagger",
"\\ddot",
"\\ddots",
"\\deg",
"\\delta",
"\\Delta",
"\\det",
"\\diamond",
"\\diamondsuit",
"\\dim",
"\\displaylines",
"\\div",
"\\dospecials",
"\\dosupereject",
"\\dot",
"\\doteq",
"\\dotfill",
"\\dots",
"\\downarrow",
"\\Downarrow",
"\\downbracefill"


,

"\\egroup",
"\\eject",
"\\ell",
"\\empty",
"\\emptyset",
"\\endgraf",
"\\endline",
"\\enskip","\\enspace",
"\\epsilon",
"\\eqalign","\\eqalignno",
"\\equiv",
"\\eta",
"\\exists",
"\\exp"

,

"\\filbreak",
"\\fiverm",
"\\flat",
"\\folio",
"\\footins",
"\\footline","\\footnote","\\footnoterule",
"\\forall",
"\\frenchspacing",
"\\frown",
"\\fullhsize","\\fullline",
"\\gamma",
"\\Gamma",
"\\gcd",
"\\ge",
"\\geq",
"\\getfactor",
"\\gets",
"\\gg",
"\\glue",
"\\goodbreak",
"\\grave",
"\\hang",
"\\hat",
"\\hbar",
"\\headline",
"\\heartsuit",
"\\hglue",
"\\hideskip",
"\\hidewidth",
"\\hookleftarrow",
"\\hookrightarrow",
"\\hphantom",
"\\hrulefill"

,

"\\ialign",
"\\iff",
"\\Im",
"\\imath",
"\\in",
"\\inf",
"\\infty",
"\\int",
"\\interdisplaylinepenalty",
"\\interfootnotelinepenalty",
"\\iota",
"\\it",
"\\item",
"\\itemitem",
"\\itfam",
"\\j",
"\\jmath",
"\\joinrel",
"\\jot",
"\\kappa",
"\\ker"

,

"\\l",
"\\L",
"\\lambda",
"\\Lambda",
"\\land",
"\\langle",
"\\lbrace",
"\\lbrack",
"\\lceil",
"\\ldotp",
"\\ldots",
"\\le",
"\\leavevmode",
"\\leftarrow",
"\\Leftarrow",
"\\leftarrowfill",
"\\leftharpoondown",
"\\leftharpoonup",
"\\leftline",
"\\leftrightarrow",
"\\Leftrightarrow",
"\\leq",
"\\leqalignno",
"\\lfloor",
"\\lg",
"\\lgroup",
"\\lhook",
"\\lim",
"\\liminf",
"\\limsup",
"\\line",
"\\ll",
"\\llap",
"\\lmoustache",
"\\ln",
"\\lnot",
"\\log",
"\\longindentation",
"\\longleftarrow",
"\\Longleftarrow",
"\\longleftrightarrow",
"\\Longleftrightarrow",
"\\longmapsto",
"\\longrightarrow",
"\\Longrightarrow",
"\\loop",
"\\lor",
"\\lq"

,

"\\magnification","\\magstep","\\magstephalf",
"\\maintoks",
"\\makefootline","\\makeheadline",
"\\mapsto",
"\\mapstochar",
"\\mathhexbox",
"\\mathpalette",
"\\mathstrut",
"\\matrix",
"\\max",
"\\maxdimen",
"\\medbreak",
"\\medskip","\\medskipamount",
"\\mid",
"\\midinsert",
"\\min",
"\\mit",
"\\models",
"\\mp",
"\\mu",
"\\multispan",
"\\nabla",
"\\narrower",
"\\natural",
"\\ne",
"\\nearrow",
"\\neg",
"\\negthinspace",
"\\neq",
"\\newbox","\\newcount","\\newdimen","\\newfam",
"\\newhelp","\\newif","\\newinsert",
"\\newmuskip",
"\\newread","\\newskip","\\newtoks","\\newwrite",
"\\next",
"\\ni",
"\\ninepoint",
"\\ninerm",
"\\nobreak",
"\\nointerlineskip",
"\\nonfrenchspacing",
"\\nopagenumbers",
"\\normalbaselines","\\normalbaselineskip",
"\\normalbottom","\\normallineskip","\\normallineskiplimit",
"\\not",
"\\notin",
"\\nu",
"\\null",
"\\nullfont",
"\\nwarrow"

,

"\\o",
"\\O",
"\\oalign",
"\\obeylines","\\obeyspaces",
"\\odot",
"\\oe",
"\\OE",
"\\offinterlineskip",
"\\oint",
"\\oldstyle",
"\\omega",
"\\Omega",
"\\ominus",
"\\ooalign",
"\\openup",
"\\oplus",
"\\oslash",
"\\other",
"\\otimes",
"\\overbrace",
"\\overleftarrow",
"\\overrightarrow",
"\\owns"

,

"\\P",
"\\pagebody","\\pagecontents",
"\\pageinsert","\\pageno",
"\\parallel",
"\\partial",
"\\perp",
"\\phantom",
"\\phi",
"\\Phi",
"\\pi",
"\\Pi",
"\\plainoutput",
"\\pm",
"\\pmatrix",
"\\pmod",
"\\Pr",
"\\prec",
"\\preceq",
"\\preloaded",
"\\prime",
"\\proclaim",
"\\prod",
"\\propto",
"\\ps",
"\\psi",
"\\Psi",
"\\qquad",
"\\quad",
"\\raggedbottom","\\raggedcenter","\\raggedright",
"\\rangle",
"\\rbrace",
"\\rbrack",
"\\rceil",
"\\Re",
"\\relbar",
"\\Relbar",
"\\removelastskip",
"\\repeat",
"\\rfloor",
"\\rgroup",
"\\rho",
"\\rhook",
"\\rightarrow",
"\\Rightarrow",
"\\rightarrowfill",
"\\rightharpoondown",
"\\rightharpoonup",
"\\rightleftharpoons",
"\\rightline",
"\\rlap",
"\\rm",
"\\rmoustache",
"\\root",
"\\rq"

,

"\\S",
"\\sb",
"\\sc",
"\\searrow",
"\\sec",
"\\setminus",
"\\settabs",
"\\setupverbatim",
"\\sevenrm",
"\\sharp",
"\\sigma",
"\\Sigma",
"\\sim",
"\\simeq",
"\\sin",
"\\sinh",
"\\skew",
"\\sl",
"\\slash",
"\\slfam",
"\\smallbreak",
"\\smallint",
"\\smallskip","\\smallskipamount","\\smalltype",
"\\smash",
"\\smile",
"\\sp",
"\\space",
"\\spadesuit",
"\\sqcap",
"\\sqcup",
"\\sqrt",
"\\sqsubseteq",
"\\sqsupseteq",
"\\ss",
"\\star",
"\\strut","\\strutbox",
"\\subset",
"\\subseteq",
"\\succ",
"\\succeq",
"\\sum",
"\\sup",
"\\supereject",
"\\supset",
"\\supseteq",
"\\surd",
"\\swarrow"

,

"\\t",
"\\tabalign",
"\\tabs",
"\\tan",
"\\tanh",
"\\tau",
"\\tenex",
"\\tenpoint",
"\\tenrm",
"\\tensl",
"\\tensy",
"\\TeX",
"\\textindent",
"\\theta",
"\\Theta",
"\\thinspace",
"\\tilde",
"\\times",
"\\to",
"\\top",
"\\topins","\\topinsert",
"\\tracingall",
"\\triangle",
"\\triangleleft",
"\\triangleright",
"\\tt",
"\\ttfam",
"\\ttglue",
"\\ttraggedright"

,

"\\u",
"\\uncatcodespecials",
"\\undefined",
"\\underbar",
"\\underbrace",
"\\up",
"\\uparrow",
"\\Uparrow",
"\\upbracefill",
"\\updownarrow",
"\\Updownarrow",
"\\uplus",
"\\upsilon",
"\\Upsilon",
"\\v",
"\\varepsilon",
"\\varphi",
"\\varpi",
"\\varrho",
"\\varsigma",
"\\vartheta",
"\\vdash",
"\\vdots",
"\\vec",
"\\vee",
"\\vert",
"\\Vert",
"\\vfootnote",
"\\vglue",
"\\vphantom",
"\\wedge",
"\\widehat",
"\\widetilde",
"\\wlog",
"\\wp",
"\\wr",
"\\xi",
"\\Xi",
"\\zeta"

,
""
};



int cmpr_nd FCN((p0,p1))
NAME_INFO HUGE**p0 C0("")
NAME_INFO HUGE**p1 C1("")
{
switch(web_strcmp((*p0)->byte_start,(*p0+1)->byte_start,
(*p1)->byte_start,(*p1+1)->byte_start))
{
case EQUAL:
return 0;

case LESS:
case PREFIX:
return-1;

case GREATER:
case EXTENSION:
return 1;
}

return 0;
}


SRTN
see_reserved FCN((prsrvd))
CONST RSRVD HUGE*prsrvd C1("")
{
CONST outer_char HUGE*pa= prsrvd->args;
unsigned n,k;
NAME_INFO HUGE**p,**p0,**p1,*nd= name_dir;
boolean all_languages= NO;



for(k= 0;k<NUM_LANGUAGES;k++)
ini_reserved(lan_enum(k));

n= PTR_DIFF(unsigned,name_ptr,name_dir);
p= p0= p1= GET_MEM("p",n,NAME_INFO HUGE*);

for(k= 0;k<n;k++)
*p++= nd++;

QSORT(p0,n,sizeof(NAME_INFO HUGE*),cmpr_nd);

if(*pa=='*')
{
all_languages= YES;
pa++;
}

printf("Reserved words (%s)%s%s%s:\n",
all_languages?"all languages":languages[lan_num(language)],
*pa?" beginning with \"":"",(char*)pa,*pa?"\"":"");

for(p1= p0;p1<p;p1++)
{
ASCII temp[100];
size_t n= PTR_DIFF(size_t,((*p1)+1)->byte_start,(*p1)->byte_start);


STRNCPY(temp,(*p1)->byte_start,n);
temp[n]= '\0';
to_outer(temp);


if((all_languages||((*p1)->Language&language))
&&(!*pa||(STRNCMP(pa,temp,STRLEN(pa))==0)))
id_info(*p1,-1L,(outer_char*)temp,prsrvd);
}
}


#endif 








