#if(0)
  FTANGLE v1.60,\
 created with UNIX on "Thursday, September 24, 1998 at 16:12." \
  COMMAND LINE: "Web/ftangle Web/map -A -# --F -= 1.62/Web/map.h"\
  RUN TIME:     "Friday, September 25, 1998 at 8:02."\
  WEB FILE:     "Web/map.web"\
  CHANGE FILE:  (none)
#endif
#define MAX_OUTPUT_LINE_LENGTH  132
#define STANDARD_OUTPUT_LINE_LENGTH  72
#define MIN_OUTPUT_LINE_LENGTH  60 \

#define DEFAULT_PAREN_NEST  10
#define DEFAULT_PAREN_NUM  10
#define DEFAULT_PAREN_LEN  100 \


#ifdef _STYLE_h
#define YSET(stuff) =  stuff
#else
#define YSET(stuff)
#endif



typedef enum{S_DONE,S_CMNT,S_KEYWORD,S_STRING,S_CHAR,S_INT,S_LONG,S_CLR,
S_MODIFIED= 128,
S_CMNT_MOD,S_KEYWORD_MOD,S_STRING_MOD,
S_CHAR_MOD,S_INT_MOD,S_LONG_MOD,S_CLR_MOD}STY_TYPE;

IN_STYLE outer_char*s_type_name[8]
#ifdef _STYLE_h
= {OC("?"),OC("?"),OC("?"),
OC("double-quoted string"),
OC("single-quoted character"),
OC("integer"),
OC("long integer"),
OC("?")}
#endif
;

typedef struct s_map
{
outer_char*keyword;
STY_TYPE type;
void*ptr;

SRTN(*init)PROTO((struct s_map HUGE*));

}S_MAP;



typedef char*CODES;

typedef struct
{
CODES Ascii_constant,
Begin_bp,
Begin_C,
Begin_FORTRAN,
Begin_meta,
Begin_RATFOR,
Begin_code,
Begin_nuweb,
Big_line_break,
Compiler_directive,
Defd_at,
Definition,
End_meta,
Force_line,
Formatt,
Implicit_reserved,
Insert_bp,
Invisible_cmnt,
Join,
Keyword_name,
Limbo_text,
Macro_def,
Math_break,
Module_name,
New_module,
New_output_file,
No_index,
No_line_break,
No_mac_expand,
Op_def,
Pseudo_colon,
Pseudo_expr,
Pseudo_semi,
Set_line_info,
Switch_math_flag,
TeX_String,
Thin_space,
Trace,
Undefinition,
Underline,
Verbatim,
WEB_Definition,
Xref_roman,
Xref_typewriter,
Xref_wildcard,
Yes_index;
}C_STYLE;

IN_STYLE C_STYLE c_style;



typedef struct
{
outer_char*name;
outer_char*preamble,*m_preamble;

outer_char*postamble,*m_postamble;

outer_char*group_skip,*m_group_skip;

outer_char*lethead_prefix,*m_heading_prefix;

outer_char*lethead_suffix;

int lethead_flag,m_headings_flag;


outer_char*item_0,*m_item_0;

outer_char*m_item_1,*m_item_2;
outer_char*m_item_01,*m_item_x1;
outer_char*m_item_12,*m_item_x2;
outer_char*delim_0,*m_delim_0;
outer_char*m_delim_1,*m_delim_2;

outer_char*delim_n,*m_delim_n;
outer_char*m_delim_r,*m_delim_t;

outer_char*encap_prefix,*m_encap_prefix;

outer_char*encap_infix,*m_encap_infix;

outer_char*encap_suffix,*m_encap_suffix;

outer_char*underline_prefix,*underline_suffix,*m_underline;

outer_char*language_prefix,*language_suffix;

outer_char*tex,*m_out,*m_sty;

ASCII*collate;
outer_char*keyword,*m_keyword;
outer_char m_arg_open,m_arg_close;
outer_char m_range_open,m_range_close;
outer_char m_level;
outer_char m_actual;
outer_char m_encap;
outer_char m_quote,m_escape;
outer_char*m_setpage_prefix,*m_setpage_suffix;
outer_char*m_symhead_positive,*m_symhead_negative;
outer_char*m_numhead_positive,*m_numhead_negative;
int m_line_max;
outer_char*m_indent_space;
int m_indent_length;
outer_char*m_page;
}INDEX;

typedef struct
{
outer_char*preamble;

outer_char*postamble;
outer_char*tex;

outer_char*info;
outer_char*kwd;
}MODULES;

typedef struct
{
outer_char*tex;

outer_char*preamble;

outer_char*postamble;
}CONTENTS;

typedef struct
{
outer_char*begin,*end;
}STR_INSERT;

typedef struct
{
STR_INSERT TeX,code;
}W_META;

typedef struct
{
outer_char*def;
outer_char*undef;
}T_OUTER;

typedef struct
{
outer_char*top;
outer_char*prefx;
outer_char*bottom;
}T_META0;

typedef struct
{
T_META0 hdr;
T_META0 msg;
}T_META;

typedef struct
{
size_t num,nest,len;
}PAREN;

typedef struct
{
outer_char*macros;
FORMAT format;
outer_char*doc_preamble;

outer_char*doc_postamble;
outer_char*limbo_begin,*limbo_end;
outer_char*unnamed_preamble,*named_preamble;

MARK_DEFINED mark;
outer_char*TeXindent,*codeindent;
W_META meta;
LATEX LaTeX;
outer_char*include_ext;
}W_MISC;

typedef union
{
outer_char*name;
COLOR value;
}ACOLOR;

typedef struct
{
ACOLOR ordinary;
ACOLOR program_name,md_name;
ACOLOR info,warning,error,fatal;
ACOLOR module_num,line_num;
ACOLOR in_file,out_file,include_file;
ACOLOR timing,character;



outer_char HUGE*_NORMAL;
outer_char HUGE*_BLACK,HUGE*_RED,HUGE*_GREEN,HUGE*_YELLOW,
HUGE*_BLUE,HUGE*_MAGENTA,HUGE*_CYAN,HUGE*_WHITE;
}COLORS;


typedef struct
{
outer_char HUGE*web,HUGE*change,HUGE*hweb,HUGE*hchange;
}INPUT_EXT;

typedef struct
{
outer_char HUGE*C_,HUGE*Cpp_,HUGE*V_,HUGE*N_,HUGE*N90_,
HUGE*R_,HUGE*R90_,HUGE*X_;
}OUTPUT_EXT;

typedef struct
{
ASCII begin,end;
}DOT_DELIMITER;

typedef struct
{
outer_char*xchr;
outer_char ext_delimiter;
INPUT_EXT input_ext;
OUTPUT_EXT output_ext;
outer_char*null_file_name;
outer_char*Idir;
DOT_DELIMITER dot_delimiter;
COLORS color;
}COMMON_PRMS;

typedef struct
{
INDEX indx;
MODULES modules;
CONTENTS contents;
W_MISC misc;
}W_STYLE;

typedef struct
{
outer_char cchar;
int output_line_length[NUM_LANGUAGES];
outer_char*cdir_start[NUM_LANGUAGES];

ASCII*ASCII_fcn;

T_OUTER outer_start[NUM_LANGUAGES];
T_META meta[NUM_LANGUAGES];
outer_char*protect_chars[NUM_LANGUAGES];
outer_char line_char[NUM_LANGUAGES];
PAREN paren;
}T_STYLE;


#include "c_type.h"
#include "s_type.h"


IN_STYLE W_STYLE w_style
#ifdef _STYLE_h
= {
{OC("INDEX"),
OC("\\Winx"),OC("\\begin{theindex}\n\\topofindex\n"),
OC("\n\\Wfin"),OC("\n\n\\botofindex\n\\end{theindex}\n"),

OC("\n\\Windexspace\n"),OC("\n\n  \\indexspace\n"),
OC(""),OC(""),
OC(""),
0,0,
OC("\\:"),OC("\n  \\item "),
OC("\n     \\subitem "),OC("\n       \\subsubitem "),
OC("\n    \\subitem "),OC("\n    \\subitem "),

OC("\n    \\subsubitem "),OC("\n    \\subsubitem "),

OC(", "),OC(", "),
OC(", "),OC(", "),
OC(", "),OC(", "),
OC("--"),OC(""),
OC(""),OC("\\"),
OC(""),OC("{"),
OC(""),OC("}"),
OC("\\["),OC("]"),OC("underline"),

OC("\\("),OC(")"),
OC("INDEX.tex"),OC("#.idx"),OC("#.sty"),
(ASCII*)" \1\2\3\4\5\6\7\10\11\12\13\14\15\16\17\
\20\21\22\23\24\25\26\27\30\31\32\33\34\35\36\37\
!\42#$%&'()*+,-./:;<=>?@[\\]^`{|}~_\
abcdefghijklmnopqrstuvwxyz0123456789",
OC("\\:"),OC("\\indexentry"),
'{','}',
'(',')',
'!',
':',
'|',
'"','\\',
OC("\n  \\setcounter{page}{"),OC("}\n"),
OC("Symbols"),OC("symbols"),
OC("Numbers"),OC("numbers"),
72,
OC("\t\t"),
16,
OC("pg")
},
{OC("\\Wmods"),OC(""),OC("MODULES.tex"),OC("\\Winfo"),OC("\\Wkwd")},

{OC("CONTENTS.tex"),OC("\n\\Wcon"),OC("")},
{OC("fwebmac.sty"),
{OC("\\&"),OC("\\&"),
OC("\\|"),
OC("\\\\"),OC("\\\\"),
OC("\\\\"),OC("\\\\"),
OC("\\\\"),OC("\\\\"),
OC("\\@"),
OC("\\."),OC("\\."),
OC("\\."),
OC("\\9")
},
OC(""),OC(""),
OC(""),OC("\\FWEBtoc"),
OC(""),OC(""),
{YES,NO,NO,NO,YES,NO},
OC("1em"),OC("1em"),
{{OC("\\Begintt"),OC("\\Endtt")},
{OC("\\WBM\\Begintt\n"),OC("\\Endtt\\WEM")}},
{{OC(""),OC("article")},{OC(""),OC("")}},
OC("H")
}
}
#endif
;

IN_STYLE FORMAT*pfrmt YSET(&w_style.misc.format);





IN_STYLE COMMON_PRMS wt_style
#ifdef _STYLE_h
= {
OC("\000\001\003\004\005\006\007\
\010\011\012\013\014\015\016\017\
\020\021\022\023\024\025\026\027\
\030\031\032\033\034\035\036\037\
\040\041\042\043\044\045\046\047\
\050\051\052\053\054\055\056\057\
\060\061\062\063\064\065\066\067\
\070\071\072\073\074\075\076\077\
\100\101\102\103\104\105\106\107\
\110\111\112\113\114\115\116\117\
\120\121\122\123\124\125\126\127\
\130\131\132\133\134\135\136\137\
\140\141\142\143\144\145\146\147\
\150\151\152\153\154\155\156\157\
\160\161\162\163\164\165\166\167\
\170\171\172\173\174\175\176\002\177\
\200\201\202\203\204\205\206\207\
\210\211\212\213\214\215\216\217\
\220\221\222\223\224\225\226\227\
\230\231\232\233\234\235\236\237\
\240\241\242\243\244\245\246\247\
\250\251\252\253\254\255\256\257\
\260\261\262\263\264\265\266\267\
\270\271\272\273\274\275\276\277\
\300\301\302\303\304\305\306\307\
\310\311\312\313\314\315\316\317\
\320\321\322\323\324\325\326\327\
\330\331\332\333\334\335\336\337\
\340\341\342\343\344\345\346\347\
\350\351\352\353\354\355\356\357\
\360\361\362\363\364\365\366\367\
\370\371\372\373\374\375\376\377"
),
'.',
{OC("web"),OC("ch"),OC("hweb"),OC("hch")},

{OC(C_EXT),OC(Cpp_EXT),OC(M_EXT),OC(N_EXT),OC(N90_EXT),OC(R_EXT),
OC(R90_EXT),OC(X_EXT)},
OC(NULL_FILE_NAME),
OC(""),
{'.','.'},
}
#endif
;

IN_STYLE T_STYLE t_style
#ifdef _STYLE_h
= {
CCHAR,
{STANDARD_OUTPUT_LINE_LENGTH,
STANDARD_OUTPUT_LINE_LENGTH,
STANDARD_OUTPUT_LINE_LENGTH,
STANDARD_OUTPUT_LINE_LENGTH,
STANDARD_OUTPUT_LINE_LENGTH,
STANDARD_OUTPUT_LINE_LENGTH,
STANDARD_OUTPUT_LINE_LENGTH+1,
STANDARD_OUTPUT_LINE_LENGTH+1
},
{OC("#pragma "),OC("C"),OC("C"),OC(""),OC(""),
OC("#pragma "),OC("C"),OC("C")},

(ASCII*)"ASCIIstr",


{{OC("#define "),OC("#undef ")},
{OC("define"),OC("undef")},
{OC("define"),OC("undef")},
{OC("\\def"),OC("\\undef")},
{OC("#define"),OC("#undef")},
{OC("#define "),OC("#undef ")},
{OC("define"),OC("undef")},
{OC("define"),OC("undef")}},

{{{OC("#if(0)"),OC(""),OC("\n#endif")},
{OC("/*"),OC(""),OC("*/")}},
{{OC(""),OC("C"),OC("\n")},
{OC(""),OC("C"),OC("")}},
{{OC(""),OC("C"),OC("\n")},
{OC(""),OC("C"),OC("")}},
{{OC(""),OC("%"),OC("\n")},
{OC(""),OC("%"),OC("")}},
{{OC("#if(0)"),OC(""),OC("\n#endif")},
{OC("/*"),OC("  "),OC("\n*/")}},
{{OC("#if(0)"),OC(""),OC("\n#endif")},
{OC("/*"),OC(""),OC("*/")}},
{{OC(""),OC("!"),OC("\n")},
{OC(""),OC("!"),OC("")}},
{{OC(""),OC("!"),OC("\n")},
{OC(""),OC("!"),OC("")}}},
{OC("\\"),OC(""),OC(""),OC(""),OC("\\"),OC("\\"),OC(""),OC("")},

{'#','*','*','%','%','#','!','!'},
{DEFAULT_PAREN_NUM,DEFAULT_PAREN_NEST,DEFAULT_PAREN_LEN}

}
#endif
;



IN_STYLE S_MAP fweb_map[]
#ifdef _STYLE_h
= {



{OC("makeindex_keyword"),S_STRING,(void*)&w_style.indx.m_keyword,set_str},

{OC("makeindex_arg_open"),S_CHAR,(void*)&w_style.indx.m_arg_open,set_char},

{OC("makeindex_arg_close"),S_CHAR,(void*)&w_style.indx.m_arg_close,set_char},

{OC("makeindex_range_open"),S_CHAR,(void*)&w_style.indx.m_range_open,set_char},

{OC("makeindex_range_close"),S_CHAR,(void*)&w_style.indx.m_range_close,set_char},

{OC("makeindex_level"),S_CHAR,(void*)&w_style.indx.m_level,set_char},

{OC("makeindex_actual"),S_CHAR,(void*)&w_style.indx.m_actual,set_char},

{OC("makeindex_encap"),S_CHAR,(void*)&w_style.indx.m_encap,set_char},

{OC("makeindex_quote"),S_CHAR,(void*)&w_style.indx.m_quote,set_char},

{OC("makeindex_escape"),S_CHAR,(void*)&w_style.indx.m_escape,set_char},


{OC("makeindex_preamble"),S_STRING,(void*)&w_style.indx.m_preamble,set_str},

{OC("makeindex_postamble"),S_STRING,(void*)&w_style.indx.m_postamble,set_str},


{OC("index_name"),S_STRING,(void*)&w_style.indx.name,set_str},

{OC("index_preamble"),S_STRING,(void*)&w_style.indx.preamble,set_str},

{OC("index_postamble"),S_STRING,(void*)&w_style.indx.postamble,set_str},


{OC("makeindex_setpage_prefix"),S_STRING,(void*)&w_style.indx.m_setpage_prefix,set_str},

{OC("makeindex_setpage_suffix"),S_STRING,(void*)&w_style.indx.m_setpage_suffix,set_str},


{OC("makeindex_group_skip"),S_STRING,(void*)&w_style.indx.m_group_skip,set_str},

{OC("index_group_skip"),S_STRING,(void*)&w_style.indx.group_skip,set_str},

{OC("group_skip"),S_STRING,(void*)&w_style.indx.group_skip,set_str},


{OC("makeindex_headings_flag"),S_INT,(void*)&w_style.indx.m_headings_flag,set_int},

{OC("makeindex_heading_prefix"),S_STRING,(void*)&w_style.indx.m_heading_prefix,set_str},


{OC("makeindex_symhead_positive"),S_STRING,(void*)&w_style.indx.m_symhead_positive,set_str},

{OC("makeindex_symhead_negative"),S_STRING,(void*)&w_style.indx.m_symhead_negative,set_str},

{OC("makeindex_numhead_positive"),S_STRING,(void*)&w_style.indx.m_numhead_positive,set_str},

{OC("makeindex_numhead_negative"),S_STRING,(void*)&w_style.indx.m_numhead_negative,set_str},


{OC("index_lethead_prefix"),S_STRING,(void*)&w_style.indx.lethead_prefix,set_str},

{OC("lethead_prefix"),S_STRING,(void*)&w_style.indx.lethead_prefix,set_str},

{OC("index_lethead_suffix"),S_STRING,(void*)&w_style.indx.lethead_suffix,set_str},

{OC("lethead_suffix"),S_STRING,(void*)&w_style.indx.lethead_suffix,set_str},

{OC("index_lethead_flag"),S_INT,(void*)&w_style.indx.lethead_flag,set_int},

{OC("lethead_flag"),S_INT,(void*)&w_style.indx.lethead_flag,set_int},


{OC("makeindex_item_0"),S_STRING,(void*)&w_style.indx.m_item_0,set_str},

{OC("index_item_0"),S_STRING,(void*)&w_style.indx.item_0,set_str},

{OC("item_0"),S_STRING,(void*)&w_style.indx.item_0,set_str},


{OC("makeindex_item_1"),S_STRING,(void*)&w_style.indx.m_item_1,set_str},

{OC("makeindex_item_2"),S_STRING,(void*)&w_style.indx.m_item_2,set_str},

{OC("makeindex_item_01"),S_STRING,(void*)&w_style.indx.m_item_01,set_str},

{OC("makeindex_item_x1"),S_STRING,(void*)&w_style.indx.m_item_x1,set_str},

{OC("makeindex_item_12"),S_STRING,(void*)&w_style.indx.m_item_12,set_str},

{OC("makeindex_item_x2"),S_STRING,(void*)&w_style.indx.m_item_x2,set_str},


{OC("makeindex_delim_0"),S_STRING,(void*)&w_style.indx.m_delim_0,set_str},

{OC("index_delim_0"),S_STRING,(void*)&w_style.indx.delim_0,set_str},

{OC("delim_0"),S_STRING,(void*)&w_style.indx.delim_0,set_str},


{OC("makeindex_delim_1"),S_STRING,(void*)&w_style.indx.m_delim_1,set_str},

{OC("makeindex_delim_2"),S_STRING,(void*)&w_style.indx.m_delim_2,set_str},


{OC("makeindex_delim_n"),S_STRING,(void*)&w_style.indx.m_delim_n,set_str},

{OC("index_delim_n"),S_STRING,(void*)&w_style.indx.delim_n,set_str},

{OC("delim_n"),S_STRING,(void*)&w_style.indx.delim_n,set_str},


{OC("makeindex_delim_r"),S_STRING,(void*)&w_style.indx.m_delim_r,set_str},

{OC("makeindex_delim_t"),S_STRING,(void*)&w_style.indx.m_delim_t,set_str},


{OC("makeindex_encap_prefix"),S_STRING,(void*)&w_style.indx.m_encap_prefix,set_str},

{OC("index_encap_prefix"),S_STRING,(void*)&w_style.indx.encap_prefix,set_str},

{OC("encap_prefix"),S_STRING,(void*)&w_style.indx.encap_prefix,set_str},


{OC("makeindex_encap_infix"),S_STRING,(void*)&w_style.indx.m_encap_infix,set_str},

{OC("index_encap_infix"),S_STRING,(void*)&w_style.indx.encap_infix,set_str},

{OC("encap_infix"),S_STRING,(void*)&w_style.indx.encap_infix,set_str},


{OC("makeindex_encap_suffix"),S_STRING,(void*)&w_style.indx.m_encap_suffix,set_str},

{OC("index_encap_suffix"),S_STRING,(void*)&w_style.indx.encap_suffix,set_str},

{OC("encap_suffix"),S_STRING,(void*)&w_style.indx.encap_suffix,set_str},


{OC("makeindex_line_max"),S_INT,(void*)&w_style.indx.m_line_max,set_int},

{OC("makeindex_indent_space"),S_STRING,(void*)&w_style.indx.m_indent_space,set_str},

{OC("makeindex_indent_length"),S_INT,(void*)&w_style.indx.m_indent_length,set_int},


{OC("index_underline_prefix"),S_STRING,(void*)&w_style.indx.underline_prefix,set_str},

{OC("underline_prefix"),S_STRING,(void*)&w_style.indx.underline_prefix,set_str},

{OC("index_underline_suffix"),S_STRING,(void*)&w_style.indx.underline_suffix,set_str},

{OC("underline_suffix"),S_STRING,(void*)&w_style.indx.underline_suffix,set_str},

{OC("makeindex_underline"),S_STRING,(void*)&w_style.indx.m_underline,set_str},


{OC("index_language_prefix"),S_STRING,(void*)&w_style.indx.language_prefix,set_str},

{OC("language_prefix"),S_STRING,(void*)&w_style.indx.language_prefix,set_str},

{OC("index_language_suffix"),S_STRING,(void*)&w_style.indx.language_suffix,set_str},

{OC("language_suffix"),S_STRING,(void*)&w_style.indx.language_suffix,set_str},


{OC("makeindex_page"),S_STRING,(void*)&w_style.indx.m_page,set_str},


{OC("makeindex_out"),S_STRING,(void*)&w_style.indx.m_out,set_str},

{OC("index_tex"),S_STRING,(void*)&w_style.indx.tex,set_str},

{OC("index_out"),S_STRING,(void*)&w_style.indx.tex,set_str},

{OC("makeindex_sty"),S_STRING,(void*)&w_style.indx.m_sty,set_str},


{OC("index_collate"),S_STRING,(void*)&w_style.indx.collate,set_str},

{OC("collate"),S_STRING,(void*)&w_style.indx.collate,set_str}

,



{OC("modules_preamble"),S_STRING,(void*)&w_style.modules.preamble,set_str},

{OC("modules_postamble"),S_STRING,(void*)&w_style.modules.postamble,set_str},

{OC("modules_tex"),S_STRING,(void*)&w_style.modules.tex,set_str},

{OC("info"),S_STRING,(void*)&w_style.modules.info,set_str},

{OC("kwd"),S_STRING,(void*)&w_style.modules.kwd,set_str}

,



{OC("contents_tex"),S_STRING,(void*)&w_style.contents.tex,set_str},

{OC("contents_TeX"),S_STRING,(void*)&w_style.contents.tex,set_str},

{OC("contents_preamble"),S_STRING,(void*)&w_style.contents.preamble,set_str},

{OC("contents_postamble"),S_STRING,(void*)&w_style.contents.postamble,set_str}

,



{OC("macros"),S_STRING,(void*)&w_style.misc.macros,set_str},


{OC("format_reserved"),S_STRING,(void*)&w_style.misc.format.reserved,set_str},

{OC("format_RESERVED"),S_STRING,(void*)&w_style.misc.format.RESERVED,set_str},

{OC("format_identifier"),S_STRING,(void*)&w_style.misc.format.id,set_str},

{OC("format_id"),S_STRING,(void*)&w_style.misc.format.id,set_str},

{OC("format_IDENTIFIER"),S_STRING,(void*)&w_style.misc.format.ID,set_str},

{OC("format_ID"),S_STRING,(void*)&w_style.misc.format.ID,set_str},

{OC("format_short_identifier"),S_STRING,(void*)&w_style.misc.format.short_id,set_str},

{OC("format_short_id"),S_STRING,(void*)&w_style.misc.format.short_id,set_str},

{OC("format_outer_macro"),S_STRING,(void*)&w_style.misc.format.id_outer,set_str},

{OC("format_OUTER_MACRO"),S_STRING,(void*)&w_style.misc.format.ID_OUTER,set_str},

{OC("format_WEB_macro"),S_STRING,(void*)&w_style.misc.format.id_inner,set_str},

{OC("format_WEB_MACRO"),S_STRING,(void*)&w_style.misc.format.ID_INNER,set_str},

{OC("format_intrinsic"),S_STRING,(void*)&w_style.misc.format.intrinsic,set_str},

{OC("format_keyword"),S_STRING,(void*)&w_style.misc.format.keyword,set_str},

{OC("format_KEYWORD"),S_STRING,(void*)&w_style.misc.format.KEYWORD,set_str},

{OC("format_typewriter"),S_STRING,(void*)&w_style.misc.format.typewritr,set_str},

{OC("format_wildcard"),S_STRING,(void*)&w_style.misc.format.wildcrd,set_str},


{OC("doc_preamble"),S_STRING,(void*)&w_style.misc.doc_preamble,set_str},

{OC("doc_postamble"),S_STRING,(void*)&w_style.misc.doc_postamble,set_str},

{OC("preamble_doc"),S_STRING,(void*)&w_style.misc.doc_preamble,set_str},

{OC("postamble_doc"),S_STRING,(void*)&w_style.misc.doc_postamble,set_str},


{OC("unnamed_preamble"),S_STRING,(void*)&w_style.misc.unnamed_preamble,set_str},

{OC("preamble_unnamed"),S_STRING,(void*)&w_style.misc.unnamed_preamble,set_str},

{OC("named_preamble"),S_STRING,(void*)&w_style.misc.named_preamble,set_str},

{OC("preamble_named"),S_STRING,(void*)&w_style.misc.named_preamble,set_str},


{OC("limbo"),S_STRING,(void*)&w_style.misc.limbo_begin,add_str},

{OC("limbo_begin"),S_STRING,(void*)&w_style.misc.limbo_begin,add_str},

{OC("limbo_end"),S_STRING,(void*)&w_style.misc.limbo_end,add_str},


{OC("mark_defined_generic_name"),S_INT,(void*)&w_style.misc.mark.generic_name,set_int},

{OC("mark_defined_fcn_name"),S_INT,(void*)&w_style.misc.mark.fcn_name,set_int},

{OC("mark_defined_WEB_macro"),S_INT,(void*)&w_style.misc.mark.WEB_macro,set_int},

{OC("mark_defined_outer_macro"),S_INT,(void*)&w_style.misc.mark.outer_macro,set_int},

{OC("mark_defined_exp_type"),S_INT,(void*)&w_style.misc.mark.imp_reserved_name,set_int},

{OC("mark_defined_typedef_name"),S_INT,(void*)&w_style.misc.mark.typedef_name,set_int},


{OC("indent_TeX"),S_STRING,(void*)&w_style.misc.TeXindent,set_str},

{OC("indent_code"),S_STRING,(void*)&w_style.misc.codeindent,set_str},


{OC("meta_TeX_begin"),S_STRING,(void*)&w_style.misc.meta.TeX.begin,set_str},

{OC("meta_TeX_end"),S_STRING,(void*)&w_style.misc.meta.TeX.end,set_str},

{OC("meta_code_begin"),S_STRING,(void*)&w_style.misc.meta.code.begin,set_str},

{OC("meta_code_end"),S_STRING,(void*)&w_style.misc.meta.code.end,set_str},


{OC("LaTeX_options"),S_STRING,(void*)&w_style.misc.LaTeX.class.options,set_str},

{OC("LaTeX_class_options"),S_STRING,(void*)&w_style.misc.LaTeX.class.options,set_str},


{OC("LaTeX_style"),S_STRING,(void*)&w_style.misc.LaTeX.class.file,set_str},

{OC("LaTeX_class"),S_STRING,(void*)&w_style.misc.LaTeX.class.file,set_str},


{OC("LaTeX_package_options"),S_STRING,(void*)&w_style.misc.LaTeX.package.options,set_str},

{OC("LaTeX_package"),S_STRING,(void*)&w_style.misc.LaTeX.package.file,set_str},


{OC("include_ext"),S_STRING,(void*)&w_style.misc.include_ext,set_str}

,



{OC("cchar"),S_CHAR,(void*)&t_style.cchar,ini_cchar},


{OC("line_length_C"),S_INT,(void*)&t_style.output_line_length[0],ini_output_line_length},

{OC("line_length_R"),S_INT,(void*)&t_style.output_line_length[1],ini_output_line_length},

{OC("line_length_N"),S_INT,(void*)&t_style.output_line_length[2],ini_output_line_length},

{OC("line_length_X"),S_INT,(void*)&t_style.output_line_length[3],ini_output_line_length},

{OC("line_length_V"),S_INT,(void*)&t_style.output_line_length[4],ini_output_line_length},

{OC("line_length_Cpp"),S_INT,(void*)&t_style.output_line_length[5],ini_output_line_length},

{OC("line_length_R90"),S_INT,(void*)&t_style.output_line_length[6],ini_output_line_length},

{OC("line_length_N90"),S_INT,(void*)&t_style.output_line_length[7],ini_output_line_length},


{OC("ASCII_fcn"),S_STRING,(void*)&t_style.ASCII_fcn,set_str},


{OC("cdir_start_C"),S_STRING,(void*)&t_style.cdir_start[0],set_str},

{OC("cdir_start_R"),S_STRING,(void*)&t_style.cdir_start[1],set_str},

{OC("cdir_start_N"),S_STRING,(void*)&t_style.cdir_start[2],set_str},

{OC("cdir_start_X"),S_STRING,(void*)&t_style.cdir_start[3],set_str},

{OC("cdir_start_V"),S_STRING,(void*)&t_style.cdir_start[4],set_str},

{OC("cdir_start_Cpp"),S_STRING,(void*)&t_style.cdir_start[5],set_str},

{OC("cdir_start_R90"),S_STRING,(void*)&t_style.cdir_start[6],set_str},

{OC("cdir_start_N90"),S_STRING,(void*)&t_style.cdir_start[7],set_str},


{OC("outer_def_C"),S_STRING,(void*)&t_style.outer_start[0].def,set_str},

{OC("outer_def_R"),S_STRING,(void*)&t_style.outer_start[1].def,set_str},

{OC("outer_def_N"),S_STRING,(void*)&t_style.outer_start[2].def,set_str},

{OC("outer_def_X"),S_STRING,(void*)&t_style.outer_start[3].def,set_str},

{OC("outer_def_V"),S_STRING,(void*)&t_style.outer_start[4].def,set_str},

{OC("outer_def_Cpp"),S_STRING,(void*)&t_style.outer_start[5].def,set_str},

{OC("outer_def_R90"),S_STRING,(void*)&t_style.outer_start[6].def,set_str},

{OC("outer_def_N90"),S_STRING,(void*)&t_style.outer_start[7].def,set_str},


{OC("outer_undef_C"),S_STRING,(void*)&t_style.outer_start[0].undef,set_str},

{OC("outer_undef_R"),S_STRING,(void*)&t_style.outer_start[1].undef,set_str},

{OC("outer_undef_N"),S_STRING,(void*)&t_style.outer_start[2].undef,set_str},

{OC("outer_undef_X"),S_STRING,(void*)&t_style.outer_start[3].undef,set_str},

{OC("outer_undef_V"),S_STRING,(void*)&t_style.outer_start[4].undef,set_str},

{OC("outer_undef_Cpp"),S_STRING,(void*)&t_style.outer_start[5].undef,set_str},

{OC("outer_undef_R90"),S_STRING,(void*)&t_style.outer_start[6].undef,set_str},

{OC("outer_undef_N90"),S_STRING,(void*)&t_style.outer_start[7].undef,set_str},


{OC("meta_top_C"),S_STRING,(void*)&t_style.meta[0].msg.top,set_str},

{OC("meta_top_R"),S_STRING,(void*)&t_style.meta[1].msg.top,set_str},

{OC("meta_top_N"),S_STRING,(void*)&t_style.meta[2].msg.top,set_str},

{OC("meta_top_X"),S_STRING,(void*)&t_style.meta[3].msg.top,set_str},

{OC("meta_top_V"),S_STRING,(void*)&t_style.meta[4].msg.top,set_str},

{OC("meta_top_Cpp"),S_STRING,(void*)&t_style.meta[5].msg.top,set_str},

{OC("meta_top_R90"),S_STRING,(void*)&t_style.meta[6].msg.top,set_str},

{OC("meta_top_N90"),S_STRING,(void*)&t_style.meta[7].msg.top,set_str},


{OC("meta_prefix_C"),S_STRING,(void*)&t_style.meta[0].msg.prefx,set_str},

{OC("meta_prefix_R"),S_STRING,(void*)&t_style.meta[1].msg.prefx,set_str},

{OC("meta_prefix_N"),S_STRING,(void*)&t_style.meta[2].msg.prefx,set_str},

{OC("meta_prefix_X"),S_STRING,(void*)&t_style.meta[3].msg.prefx,set_str},

{OC("meta_prefix_V"),S_STRING,(void*)&t_style.meta[4].msg.prefx,set_str},

{OC("meta_prefix_Cpp"),S_STRING,(void*)&t_style.meta[5].msg.prefx,set_str},

{OC("meta_prefix_R90"),S_STRING,(void*)&t_style.meta[6].msg.prefx,set_str},

{OC("meta_prefix_N90"),S_STRING,(void*)&t_style.meta[7].msg.prefx,set_str},


{OC("meta_bottom_C"),S_STRING,(void*)&t_style.meta[0].msg.bottom,set_str},

{OC("meta_bottom_R"),S_STRING,(void*)&t_style.meta[1].msg.bottom,set_str},

{OC("meta_bottom_N"),S_STRING,(void*)&t_style.meta[2].msg.bottom,set_str},

{OC("meta_bottom_X"),S_STRING,(void*)&t_style.meta[3].msg.bottom,set_str},

{OC("meta_bottom_V"),S_STRING,(void*)&t_style.meta[4].msg.bottom,set_str},

{OC("meta_bottom_Cpp"),S_STRING,(void*)&t_style.meta[5].msg.bottom,set_str},

{OC("meta_bottom_R90"),S_STRING,(void*)&t_style.meta[6].msg.bottom,set_str},

{OC("meta_bottom_N90"),S_STRING,(void*)&t_style.meta[7].msg.bottom,set_str},


{OC("meta_top_hdr_C"),S_STRING,(void*)&t_style.meta[0].hdr.top,set_str},

{OC("meta_top_hdr_R"),S_STRING,(void*)&t_style.meta[1].hdr.top,set_str},

{OC("meta_top_hdr_N"),S_STRING,(void*)&t_style.meta[2].hdr.top,set_str},

{OC("meta_top_hdr_X"),S_STRING,(void*)&t_style.meta[3].hdr.top,set_str},

{OC("meta_top_hdr_V"),S_STRING,(void*)&t_style.meta[4].hdr.top,set_str},

{OC("meta_top_hdr_Cpp"),S_STRING,(void*)&t_style.meta[5].hdr.top,set_str},

{OC("meta_top_hdr_R90"),S_STRING,(void*)&t_style.meta[6].hdr.top,set_str},

{OC("meta_top_hdr_N90"),S_STRING,(void*)&t_style.meta[7].hdr.top,set_str},


{OC("meta_prefix_hdr_C"),S_STRING,(void*)&t_style.meta[0].hdr.prefx,set_str},

{OC("meta_prefix_hdr_R"),S_STRING,(void*)&t_style.meta[1].hdr.prefx,set_str},

{OC("meta_prefix_hdr_N"),S_STRING,(void*)&t_style.meta[2].hdr.prefx,set_str},

{OC("meta_prefix_hdr_X"),S_STRING,(void*)&t_style.meta[3].hdr.prefx,set_str},

{OC("meta_prefix_hdr_V"),S_STRING,(void*)&t_style.meta[4].hdr.prefx,set_str},

{OC("meta_prefix_hdr_Cpp"),S_STRING,(void*)&t_style.meta[5].hdr.prefx,set_str},

{OC("meta_prefix_hdr_R90"),S_STRING,(void*)&t_style.meta[6].hdr.prefx,set_str},

{OC("meta_prefix_hdr_N90"),S_STRING,(void*)&t_style.meta[7].hdr.prefx,set_str},


{OC("meta_bottom_hdr_C"),S_STRING,(void*)&t_style.meta[0].hdr.bottom,set_str},

{OC("meta_bottom_hdr_R"),S_STRING,(void*)&t_style.meta[1].hdr.bottom,set_str},

{OC("meta_bottom_hdr_N"),S_STRING,(void*)&t_style.meta[2].hdr.bottom,set_str},

{OC("meta_bottom_hdr_X"),S_STRING,(void*)&t_style.meta[3].hdr.bottom,set_str},

{OC("meta_bottom_hdr_V"),S_STRING,(void*)&t_style.meta[4].hdr.bottom,set_str},

{OC("meta_bottom_hdr_Cpp"),S_STRING,(void*)&t_style.meta[5].hdr.bottom,set_str},

{OC("meta_bottom_hdr_R90"),S_STRING,(void*)&t_style.meta[6].hdr.bottom,set_str},

{OC("meta_bottom_hdr_N90"),S_STRING,(void*)&t_style.meta[7].hdr.bottom,set_str},


{OC("protect_C"),S_STRING,(void*)&t_style.protect_chars[0],set_str},

{OC("protect_R"),S_STRING,(void*)&t_style.protect_chars[1],set_str},

{OC("protect_N"),S_STRING,(void*)&t_style.protect_chars[2],set_str},

{OC("protect_X"),S_STRING,(void*)&t_style.protect_chars[3],set_str},

{OC("protect_V"),S_STRING,(void*)&t_style.protect_chars[4],set_str},

{OC("protect_Cpp"),S_STRING,(void*)&t_style.protect_chars[5],set_str},

{OC("protect_R90"),S_STRING,(void*)&t_style.protect_chars[6],set_str},

{OC("protect_N90"),S_STRING,(void*)&t_style.protect_chars[7],set_str},


{OC("line_char_C"),S_CHAR,(void*)&t_style.line_char[0],set_char},

{OC("line_char_R"),S_CHAR,(void*)&t_style.line_char[1],set_char},

{OC("line_char_N"),S_CHAR,(void*)&t_style.line_char[2],set_char},

{OC("line_char_X"),S_CHAR,(void*)&t_style.line_char[3],set_char},

{OC("line_char_V"),S_CHAR,(void*)&t_style.line_char[4],set_char},

{OC("line_char_Cpp"),S_CHAR,(void*)&t_style.line_char[5],set_char},

{OC("line_char_R90"),S_CHAR,(void*)&t_style.line_char[6],set_char},

{OC("line_char_N90"),S_CHAR,(void*)&t_style.line_char[7],set_char},


{OC("paren_num"),S_INT,(void*)&t_style.paren.num,set_int},

{OC("paren_nest"),S_INT,(void*)&t_style.paren.nest,set_int},

{OC("paren_len"),S_INT,(void*)&t_style.paren.len,set_int}

,



{OC("xchr"),S_STRING,(void*)&wt_style.xchr,set_str},

{OC("Ext_delimiter"),S_CHAR,(void*)&wt_style.ext_delimiter,set_char},

{OC("ext_web"),S_STRING,(void*)&wt_style.input_ext.web,ini_ext},

{OC("ext_ch"),S_STRING,(void*)&wt_style.input_ext.change,ini_ext},

{OC("ext_hweb"),S_STRING,(void*)&wt_style.input_ext.hweb,ini_ext},

{OC("ext_hch"),S_STRING,(void*)&wt_style.input_ext.hchange,ini_ext},

{OC("suffix_C"),S_STRING,(void*)&wt_style.output_ext.C_,set_str},

{OC("suffix_Cpp"),S_STRING,(void*)&wt_style.output_ext.Cpp_,set_str},

{OC("suffix_V"),S_STRING,(void*)&wt_style.output_ext.V_,set_str},

{OC("suffix_FORTRAN"),S_STRING,(void*)&wt_style.output_ext.N_,set_str},

{OC("suffix_N"),S_STRING,(void*)&wt_style.output_ext.N_,set_str},

{OC("suffix_FORTRAN90"),S_STRING,(void*)&wt_style.output_ext.N90_,set_str},

{OC("suffix_N90"),S_STRING,(void*)&wt_style.output_ext.N90_,set_str},

{OC("suffix_RATFOR"),S_STRING,(void*)&wt_style.output_ext.R_,set_str},

{OC("suffix_R"),S_STRING,(void*)&wt_style.output_ext.R_,set_str},

{OC("suffix_RATFOR90"),S_STRING,(void*)&wt_style.output_ext.R90_,set_str},

{OC("suffix_R90"),S_STRING,(void*)&wt_style.output_ext.R90_,set_str},

{OC("suffix_TEX"),S_STRING,(void*)&wt_style.output_ext.X_,set_str},

{OC("suffix_X"),S_STRING,(void*)&wt_style.output_ext.X_,set_str},

{OC("null_file"),S_STRING,(void*)&wt_style.null_file_name,set_str},

{OC("Idir"),S_STRING,(void*)&wt_style.Idir,set_str},

{OC("dot_constant_begin"),S_CHAR,(void*)&wt_style.dot_delimiter.begin,ini_dot},

{OC("dot_constant_end"),S_CHAR,(void*)&wt_style.dot_delimiter.end,ini_dot},

{OC("color_ordinary"),S_STRING,(void*)&wt_style.color.ordinary.name,ini_aclr},

{OC("color_program"),S_STRING,(void*)&wt_style.color.program_name.name,ini_aclr},

{OC("color_mod_name"),S_STRING,(void*)&wt_style.color.md_name.name,ini_aclr},

{OC("color_info"),S_STRING,(void*)&wt_style.color.info.name,ini_aclr},

{OC("color_warning"),S_STRING,(void*)&wt_style.color.warning.name,ini_aclr},

{OC("color_error"),S_STRING,(void*)&wt_style.color.error.name,ini_aclr},

{OC("color_fatal"),S_STRING,(void*)&wt_style.color.fatal.name,ini_aclr},

{OC("color_mod_num"),S_STRING,(void*)&wt_style.color.module_num.name,ini_aclr},

{OC("color_line_num"),S_STRING,(void*)&wt_style.color.line_num.name,ini_aclr},

{OC("color_input_file"),S_STRING,(void*)&wt_style.color.in_file.name,ini_aclr},

{OC("color_include_file"),S_STRING,(void*)&wt_style.color.include_file.name,ini_aclr},

{OC("color_output_file"),S_STRING,(void*)&wt_style.color.out_file.name,ini_aclr},

{OC("color_timing"),S_STRING,(void*)&wt_style.color.timing.name,ini_aclr},

{OC("color_char"),S_STRING,(void*)&wt_style.color.character.name,ini_aclr},

{OC("Color_default"),S_STRING,(void*)&wt_style.color._NORMAL,ini_bilevel},

{OC("Color_black"),S_STRING,(void*)&wt_style.color._BLACK,ini_bilevel},

{OC("Color_red"),S_STRING,(void*)&wt_style.color._RED,ini_bilevel},

{OC("Color_green"),S_STRING,(void*)&wt_style.color._GREEN,ini_bilevel},

{OC("Color_yellow"),S_STRING,(void*)&wt_style.color._YELLOW,ini_bilevel},

{OC("Color_blue"),S_STRING,(void*)&wt_style.color._BLUE,ini_bilevel},

{OC("Color_magenta"),S_STRING,(void*)&wt_style.color._MAGENTA,ini_bilevel},

{OC("Color_cyan"),S_STRING,(void*)&wt_style.color._CYAN,ini_bilevel},

{OC("Color_white"),S_STRING,(void*)&wt_style.color._WHITE,ini_bilevel}

,


{OC("ascii_constant"),S_STRING,(void*)&c_style.Ascii_constant,set_str},
{OC("begin_bp"),S_STRING,(void*)&c_style.Begin_bp,set_str},
{OC("begin_C"),S_STRING,(void*)&c_style.Begin_C,set_str},
{OC("begin_FORTRAN"),S_STRING,(void*)&c_style.Begin_FORTRAN,set_str},
{OC("begin_meta"),S_STRING,(void*)&c_style.Begin_meta,set_str},
{OC("begin_RATFOR"),S_STRING,(void*)&c_style.Begin_RATFOR,set_str},
{OC("begin_code"),S_STRING,(void*)&c_style.Begin_code,set_str},
{OC("begin_nweb"),S_STRING,(void*)&c_style.Begin_nuweb,set_str},
{OC("big_line_break"),S_STRING,(void*)&c_style.Big_line_break,set_str},
{OC("compiler_directive"),S_STRING,(void*)&c_style.Compiler_directive,set_str},
{OC("defd_at"),S_STRING,(void*)&c_style.Defd_at,set_str},
{OC("definition"),S_STRING,(void*)&c_style.Definition,set_str},
{OC("end_meta"),S_STRING,(void*)&c_style.End_meta,set_str},
{OC("force_line"),S_STRING,(void*)&c_style.Force_line,set_str},
{OC("format"),S_STRING,(void*)&c_style.Formatt,set_str},
{OC("explicit_reserved"),S_STRING,(void*)&c_style.Implicit_reserved,set_str},
{OC("insert_bp"),S_STRING,(void*)&c_style.Insert_bp,set_str},
{OC("invisible_cmnt"),S_STRING,(void*)&c_style.Invisible_cmnt,set_str},
{OC("join"),S_STRING,(void*)&c_style.Join,set_str},
{OC("keyword_name"),S_STRING,(void*)&c_style.Keyword_name,set_str},
{OC("limbo_text"),S_STRING,(void*)&c_style.Limbo_text,set_str},
{OC("math_break"),S_STRING,(void*)&c_style.Math_break,set_str},
{OC("module_name"),S_STRING,(void*)&c_style.Module_name,set_str},
{OC("new_module"),S_STRING,(void*)&c_style.New_module,set_str},
{OC("new_output_file"),S_STRING,(void*)&c_style.New_output_file,set_str},
{OC("no_index"),S_STRING,(void*)&c_style.No_index,set_str},
{OC("no_line_break"),S_STRING,(void*)&c_style.No_line_break,set_str},
{OC("no_mac_expand"),S_STRING,(void*)&c_style.No_mac_expand,set_str},
{OC("pseudo_colon"),S_STRING,(void*)&c_style.Pseudo_colon,set_str},
{OC("pseudo_expr"),S_STRING,(void*)&c_style.Pseudo_expr,set_str},
{OC("pseudo_semi"),S_STRING,(void*)&c_style.Pseudo_semi,set_str},
{OC("set_line_info"),S_STRING,(void*)&c_style.Set_line_info,set_str},
{OC("switch_math_flag"),S_STRING,(void*)&c_style.Switch_math_flag,set_str},
{OC("TeX_string"),S_STRING,(void*)&c_style.TeX_String,set_str},
{OC("thin_space"),S_STRING,(void*)&c_style.Thin_space,set_str},
{OC("trace"),S_STRING,(void*)&c_style.Trace,set_str},
{OC("undefinition"),S_STRING,(void*)&c_style.Undefinition,set_str},
{OC("underline"),S_STRING,(void*)&c_style.Underline,set_str},
{OC("verbatim"),S_STRING,(void*)&c_style.Verbatim,set_str},
{OC("WEB_definition"),S_STRING,(void*)&c_style.WEB_Definition,set_str},
{OC("xref_roman"),S_STRING,(void*)&c_style.Xref_roman,set_str},
{OC("xref_typewriter"),S_STRING,(void*)&c_style.Xref_typewriter,set_str},
{OC("xref_wildcard"),S_STRING,(void*)&c_style.Xref_wildcard,set_str},
{OC("yes_index"),S_STRING,(void*)&c_style.Yes_index,set_str}

,
{OC("")}
}
#endif 
;



IN_STYLE boolean prn_style_defaults;


