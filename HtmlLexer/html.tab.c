/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "html.y"

 #include "stdio.h"
 int yyerror(char * s);
 extern int yylex(void);

#line 77 "html.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "html.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_HTMLOPEN = 3,                   /* HTMLOPEN  */
  YYSYMBOL_HTMLDOCUMENT = 4,               /* HTMLDOCUMENT  */
  YYSYMBOL_HEADOPEN = 5,                   /* HEADOPEN  */
  YYSYMBOL_TITLEOPEN = 6,                  /* TITLEOPEN  */
  YYSYMBOL_BODYOPEN = 7,                   /* BODYOPEN  */
  YYSYMBOL_STYLEOPEN = 8,                  /* STYLEOPEN  */
  YYSYMBOL_BODYCONTENT = 9,                /* BODYCONTENT  */
  YYSYMBOL_HEADING = 10,                   /* HEADING  */
  YYSYMBOL_H1OPEN = 11,                    /* H1OPEN  */
  YYSYMBOL_H2OPEN = 12,                    /* H2OPEN  */
  YYSYMBOL_H3OPEN = 13,                    /* H3OPEN  */
  YYSYMBOL_H4OPEN = 14,                    /* H4OPEN  */
  YYSYMBOL_H5OPEN = 15,                    /* H5OPEN  */
  YYSYMBOL_H6OPEN = 16,                    /* H6OPEN  */
  YYSYMBOL_FRAMEOPEN = 17,                 /* FRAMEOPEN  */
  YYSYMBOL_FRAMESETOPEN = 18,              /* FRAMESETOPEN  */
  YYSYMBOL_NOFRAMESOPEN = 19,              /* NOFRAMESOPEN  */
  YYSYMBOL_FORMOPEN = 20,                  /* FORMOPEN  */
  YYSYMBOL_INPUTOPEN = 21,                 /* INPUTOPEN  */
  YYSYMBOL_SELECTOPEN = 22,                /* SELECTOPEN  */
  YYSYMBOL_OPTIONOPEN = 23,                /* OPTIONOPEN  */
  YYSYMBOL_TABLEOPEN = 24,                 /* TABLEOPEN  */
  YYSYMBOL_TROPEN = 25,                    /* TROPEN  */
  YYSYMBOL_TDOPEN = 26,                    /* TDOPEN  */
  YYSYMBOL_THOPEN = 27,                    /* THOPEN  */
  YYSYMBOL_THEADOPEN = 28,                 /* THEADOPEN  */
  YYSYMBOL_TBODYOPEN = 29,                 /* TBODYOPEN  */
  YYSYMBOL_IMGOPEN = 30,                   /* IMGOPEN  */
  YYSYMBOL_AOPEN = 31,                     /* AOPEN  */
  YYSYMBOL_LINKOPEN = 32,                  /* LINKOPEN  */
  YYSYMBOL_ULOPEN = 33,                    /* ULOPEN  */
  YYSYMBOL_LIOPEN = 34,                    /* LIOPEN  */
  YYSYMBOL_OLOPEN = 35,                    /* OLOPEN  */
  YYSYMBOL_BOPEN = 36,                     /* BOPEN  */
  YYSYMBOL_IOPEN = 37,                     /* IOPEN  */
  YYSYMBOL_UOPEN = 38,                     /* UOPEN  */
  YYSYMBOL_SMALLOPEN = 39,                 /* SMALLOPEN  */
  YYSYMBOL_SUPOPEN = 40,                   /* SUPOPEN  */
  YYSYMBOL_SUBOPEN = 41,                   /* SUBOPEN  */
  YYSYMBOL_CENTEROPEN = 42,                /* CENTEROPEN  */
  YYSYMBOL_FONTOPEN = 43,                  /* FONTOPEN  */
  YYSYMBOL_HROPEN = 44,                    /* HROPEN  */
  YYSYMBOL_POPEN = 45,                     /* POPEN  */
  YYSYMBOL_BROPEN = 46,                    /* BROPEN  */
  YYSYMBOL_IDENTIFIER = 47,                /* IDENTIFIER  */
  YYSYMBOL_TEXT = 48,                      /* TEXT  */
  YYSYMBOL_ISINDEX = 49,                   /* ISINDEX  */
  YYSYMBOL_BASEFONTOPEN = 50,              /* BASEFONTOPEN  */
  YYSYMBOL_BLOCKQUOTEOPEN = 51,            /* BLOCKQUOTEOPEN  */
  YYSYMBOL_DIROPEN = 52,                   /* DIROPEN  */
  YYSYMBOL_DIVOPEN = 53,                   /* DIVOPEN  */
  YYSYMBOL_DLOPEN = 54,                    /* DLOPEN  */
  YYSYMBOL_LISTINGOPEN = 55,               /* LISTINGOPEN  */
  YYSYMBOL_MENUOPEN = 56,                  /* MENUOPEN  */
  YYSYMBOL_MULTICOLOPEN = 57,              /* MULTICOLOPEN  */
  YYSYMBOL_NOBROPEN = 58,                  /* NOBROPEN  */
  YYSYMBOL_XMPOPEN = 59,                   /* XMPOPEN  */
  YYSYMBOL_DTOPEN = 60,                    /* DTOPEN  */
  YYSYMBOL_DDOPEN = 61,                    /* DDOPEN  */
  YYSYMBOL_LITERALTEXT = 62,               /* LITERALTEXT  */
  YYSYMBOL_PREOPEN = 63,                   /* PREOPEN  */
  YYSYMBOL_FLOW = 64,                      /* FLOW  */
  YYSYMBOL_BR = 65,                        /* BR  */
  YYSYMBOL_HR = 66,                        /* HR  */
  YYSYMBOL_IMG = 67,                       /* IMG  */
  YYSYMBOL_SCRIPTOPEN = 68,                /* SCRIPTOPEN  */
  YYSYMBOL_PLAINTEXT = 69,                 /* PLAINTEXT  */
  YYSYMBOL_HEADCLOSE = 70,                 /* HEADCLOSE  */
  YYSYMBOL_TITLECLOSE = 71,                /* TITLECLOSE  */
  YYSYMBOL_STYLECLOSE = 72,                /* STYLECLOSE  */
  YYSYMBOL_BODYCLOSE = 73,                 /* BODYCLOSE  */
  YYSYMBOL_H1CLOSE = 74,                   /* H1CLOSE  */
  YYSYMBOL_H2CLOSE = 75,                   /* H2CLOSE  */
  YYSYMBOL_H3CLOSE = 76,                   /* H3CLOSE  */
  YYSYMBOL_H4CLOSE = 77,                   /* H4CLOSE  */
  YYSYMBOL_H5CLOSE = 78,                   /* H5CLOSE  */
  YYSYMBOL_H6CLOSE = 79,                   /* H6CLOSE  */
  YYSYMBOL_FRAMECLOSE = 80,                /* FRAMECLOSE  */
  YYSYMBOL_FRAMESETCLOSE = 81,             /* FRAMESETCLOSE  */
  YYSYMBOL_NOFRAMESCLOSE = 82,             /* NOFRAMESCLOSE  */
  YYSYMBOL_FORMCLOSE = 83,                 /* FORMCLOSE  */
  YYSYMBOL_INPUTCLOSE = 84,                /* INPUTCLOSE  */
  YYSYMBOL_SELECTCLOSE = 85,               /* SELECTCLOSE  */
  YYSYMBOL_OPTIONCLOSE = 86,               /* OPTIONCLOSE  */
  YYSYMBOL_TABLECLOSE = 87,                /* TABLECLOSE  */
  YYSYMBOL_TRCLOSE = 88,                   /* TRCLOSE  */
  YYSYMBOL_TDCLOSE = 89,                   /* TDCLOSE  */
  YYSYMBOL_THCLOSE = 90,                   /* THCLOSE  */
  YYSYMBOL_THEADCLOSE = 91,                /* THEADCLOSE  */
  YYSYMBOL_TBODYCLOSE = 92,                /* TBODYCLOSE  */
  YYSYMBOL_IMGCLOSE = 93,                  /* IMGCLOSE  */
  YYSYMBOL_ACLOSE = 94,                    /* ACLOSE  */
  YYSYMBOL_LINKCLOSE = 95,                 /* LINKCLOSE  */
  YYSYMBOL_ULCLOSE = 96,                   /* ULCLOSE  */
  YYSYMBOL_LICLOSE = 97,                   /* LICLOSE  */
  YYSYMBOL_OLCLOSE = 98,                   /* OLCLOSE  */
  YYSYMBOL_BCLOSE = 99,                    /* BCLOSE  */
  YYSYMBOL_ICLOSE = 100,                   /* ICLOSE  */
  YYSYMBOL_UCLOSE = 101,                   /* UCLOSE  */
  YYSYMBOL_SMALLCLOSE = 102,               /* SMALLCLOSE  */
  YYSYMBOL_SUPCLOSE = 103,                 /* SUPCLOSE  */
  YYSYMBOL_SUBCLOSE = 104,                 /* SUBCLOSE  */
  YYSYMBOL_CENTERCLOSE = 105,              /* CENTERCLOSE  */
  YYSYMBOL_FONTCLOSE = 106,                /* FONTCLOSE  */
  YYSYMBOL_HRCLOSE = 107,                  /* HRCLOSE  */
  YYSYMBOL_PCLOSE = 108,                   /* PCLOSE  */
  YYSYMBOL_BRCLOSE = 109,                  /* BRCLOSE  */
  YYSYMBOL_BASEFONTCLOSE = 110,            /* BASEFONTCLOSE  */
  YYSYMBOL_BLOCKQUOTECLOSE = 111,          /* BLOCKQUOTECLOSE  */
  YYSYMBOL_DIRCLOSE = 112,                 /* DIRCLOSE  */
  YYSYMBOL_DIVCLOSE = 113,                 /* DIVCLOSE  */
  YYSYMBOL_DLCLOSE = 114,                  /* DLCLOSE  */
  YYSYMBOL_LISTINGCLOSE = 115,             /* LISTINGCLOSE  */
  YYSYMBOL_MENUCLOSE = 116,                /* MENUCLOSE  */
  YYSYMBOL_MULTICOLCLOSE = 117,            /* MULTICOLCLOSE  */
  YYSYMBOL_NOBRCLOSE = 118,                /* NOBRCLOSE  */
  YYSYMBOL_XMPCLOSE = 119,                 /* XMPCLOSE  */
  YYSYMBOL_DTCLOSE = 120,                  /* DTCLOSE  */
  YYSYMBOL_DDCLOSE = 121,                  /* DDCLOSE  */
  YYSYMBOL_PRECLOSE = 122,                 /* PRECLOSE  */
  YYSYMBOL_SCRIPTCLOSE = 123,              /* SCRIPTCLOSE  */
  YYSYMBOL_HTMLCLOSE = 124,                /* HTMLCLOSE  */
  YYSYMBOL_ABBRATTR = 125,                 /* ABBRATTR  */
  YYSYMBOL_ACCEPTCHARSETATTR = 126,        /* ACCEPTCHARSETATTR  */
  YYSYMBOL_ACCEPTATTR = 127,               /* ACCEPTATTR  */
  YYSYMBOL_ACCESSKEYATTR = 128,            /* ACCESSKEYATTR  */
  YYSYMBOL_ACTIONATTR = 129,               /* ACTIONATTR  */
  YYSYMBOL_ALIGNATTR = 130,                /* ALIGNATTR  */
  YYSYMBOL_ALINKATTR = 131,                /* ALINKATTR  */
  YYSYMBOL_ALTATTR = 132,                  /* ALTATTR  */
  YYSYMBOL_AXISATTR = 133,                 /* AXISATTR  */
  YYSYMBOL_BACKGROUNDATTR = 134,           /* BACKGROUNDATTR  */
  YYSYMBOL_BGCOLORATTR = 135,              /* BGCOLORATTR  */
  YYSYMBOL_BORDERATTR = 136,               /* BORDERATTR  */
  YYSYMBOL_CELLPADDINGATTR = 137,          /* CELLPADDINGATTR  */
  YYSYMBOL_CELLSPACINGATTR = 138,          /* CELLSPACINGATTR  */
  YYSYMBOL_CHARATTR = 139,                 /* CHARATTR  */
  YYSYMBOL_CHAROFFATTR = 140,              /* CHAROFFATTR  */
  YYSYMBOL_CHARSETATTR = 141,              /* CHARSETATTR  */
  YYSYMBOL_CHECKEDATTR = 142,              /* CHECKEDATTR  */
  YYSYMBOL_CLASSATTR = 143,                /* CLASSATTR  */
  YYSYMBOL_CLEARATTR = 144,                /* CLEARATTR  */
  YYSYMBOL_COLORATTR = 145,                /* COLORATTR  */
  YYSYMBOL_COLSATTR = 146,                 /* COLSATTR  */
  YYSYMBOL_COLSPANATTR = 147,              /* COLSPANATTR  */
  YYSYMBOL_COMPACTATTR = 148,              /* COMPACTATTR  */
  YYSYMBOL_COORDSATTR = 149,               /* COORDSATTR  */
  YYSYMBOL_DIRATTR = 150,                  /* DIRATTR  */
  YYSYMBOL_DISABLEDATTR = 151,             /* DISABLEDATTR  */
  YYSYMBOL_ENCTYPEATTR = 152,              /* ENCTYPEATTR  */
  YYSYMBOL_FACEATTR = 153,                 /* FACEATTR  */
  YYSYMBOL_FRAMEATTR = 154,                /* FRAMEATTR  */
  YYSYMBOL_FRAMEBORDERATTR = 155,          /* FRAMEBORDERATTR  */
  YYSYMBOL_HEADERSATTR = 156,              /* HEADERSATTR  */
  YYSYMBOL_HEIGHTATTR = 157,               /* HEIGHTATTR  */
  YYSYMBOL_HREFATTR = 158,                 /* HREFATTR  */
  YYSYMBOL_HREFLANGATTR = 159,             /* HREFLANGATTR  */
  YYSYMBOL_HSPACEATTR = 160,               /* HSPACEATTR  */
  YYSYMBOL_IDATTR = 161,                   /* IDATTR  */
  YYSYMBOL_ISMAPATTR = 162,                /* ISMAPATTR  */
  YYSYMBOL_LABELATTR = 163,                /* LABELATTR  */
  YYSYMBOL_LANGATTR = 164,                 /* LANGATTR  */
  YYSYMBOL_LINKATTR = 165,                 /* LINKATTR  */
  YYSYMBOL_LONGDESCATTR = 166,             /* LONGDESCATTR  */
  YYSYMBOL_MARGINHEIGHTATTR = 167,         /* MARGINHEIGHTATTR  */
  YYSYMBOL_MARGINWIDTHATTR = 168,          /* MARGINWIDTHATTR  */
  YYSYMBOL_MAXLENGHTATTR = 169,            /* MAXLENGHTATTR  */
  YYSYMBOL_MEDIAATTR = 170,                /* MEDIAATTR  */
  YYSYMBOL_METHODATTR = 171,               /* METHODATTR  */
  YYSYMBOL_MULTPLEATTR = 172,              /* MULTPLEATTR  */
  YYSYMBOL_NAMEATTR = 173,                 /* NAMEATTR  */
  YYSYMBOL_NORESIZEATTR = 174,             /* NORESIZEATTR  */
  YYSYMBOL_NOWRAPATTR = 175,               /* NOWRAPATTR  */
  YYSYMBOL_ONBLURATTR = 176,               /* ONBLURATTR  */
  YYSYMBOL_ONCHANGEATTR = 177,             /* ONCHANGEATTR  */
  YYSYMBOL_ONCLICKATTR = 178,              /* ONCLICKATTR  */
  YYSYMBOL_ONDBCLICKATTR = 179,            /* ONDBCLICKATTR  */
  YYSYMBOL_ONFOCUSATTR = 180,              /* ONFOCUSATTR  */
  YYSYMBOL_ONKEYDOWNATTR = 181,            /* ONKEYDOWNATTR  */
  YYSYMBOL_ONKEYPRESSATTR = 182,           /* ONKEYPRESSATTR  */
  YYSYMBOL_ONKEYUPATTR = 183,              /* ONKEYUPATTR  */
  YYSYMBOL_ONLOADATTR = 184,               /* ONLOADATTR  */
  YYSYMBOL_ONMOUSEDOWNATTR = 185,          /* ONMOUSEDOWNATTR  */
  YYSYMBOL_ONMOUSEMOVEATTR = 186,          /* ONMOUSEMOVEATTR  */
  YYSYMBOL_ONMOUSEOUTATTR = 187,           /* ONMOUSEOUTATTR  */
  YYSYMBOL_ONMOUSEOVERATTR = 188,          /* ONMOUSEOVERATTR  */
  YYSYMBOL_ONMOUSEUPATTR = 189,            /* ONMOUSEUPATTR  */
  YYSYMBOL_ONRESETATTR = 190,              /* ONRESETATTR  */
  YYSYMBOL_ONSELECTATTR = 191,             /* ONSELECTATTR  */
  YYSYMBOL_ONSUBMITATTR = 192,             /* ONSUBMITATTR  */
  YYSYMBOL_ONUNLOADATTR = 193,             /* ONUNLOADATTR  */
  YYSYMBOL_PROFILEATTR = 194,              /* PROFILEATTR  */
  YYSYMBOL_READONLYATTR = 195,             /* READONLYATTR  */
  YYSYMBOL_RELATTR = 196,                  /* RELATTR  */
  YYSYMBOL_REVATTR = 197,                  /* REVATTR  */
  YYSYMBOL_ROWSATTR = 198,                 /* ROWSATTR  */
  YYSYMBOL_ROWSPANATTR = 199,              /* ROWSPANATTR  */
  YYSYMBOL_RULESATTR = 200,                /* RULESATTR  */
  YYSYMBOL_SCOPEATTR = 201,                /* SCOPEATTR  */
  YYSYMBOL_SCROLLINGATTR = 202,            /* SCROLLINGATTR  */
  YYSYMBOL_SELECTEDATTR = 203,             /* SELECTEDATTR  */
  YYSYMBOL_SHAPEATTR = 204,                /* SHAPEATTR  */
  YYSYMBOL_SIZEATTR = 205,                 /* SIZEATTR  */
  YYSYMBOL_SRCATTR = 206,                  /* SRCATTR  */
  YYSYMBOL_STARTATTR = 207,                /* STARTATTR  */
  YYSYMBOL_STYLEATTR = 208,                /* STYLEATTR  */
  YYSYMBOL_SUMMARYATTR = 209,              /* SUMMARYATTR  */
  YYSYMBOL_TABINDEXATTR = 210,             /* TABINDEXATTR  */
  YYSYMBOL_TARGETATTR = 211,               /* TARGETATTR  */
  YYSYMBOL_TEXTATTR = 212,                 /* TEXTATTR  */
  YYSYMBOL_TITLEATTR = 213,                /* TITLEATTR  */
  YYSYMBOL_TYPEATTR = 214,                 /* TYPEATTR  */
  YYSYMBOL_USEMAPATTR = 215,               /* USEMAPATTR  */
  YYSYMBOL_VALIGNATTR = 216,               /* VALIGNATTR  */
  YYSYMBOL_VALUEATTR = 217,                /* VALUEATTR  */
  YYSYMBOL_VLINKATTR = 218,                /* VLINKATTR  */
  YYSYMBOL_VSPACEATTR = 219,               /* VSPACEATTR  */
  YYSYMBOL_WIDTHATTR = 220,                /* WIDTHATTR  */
  YYSYMBOL_YYACCEPT = 221,                 /* $accept  */
  YYSYMBOL_htmldocument = 222,             /* htmldocument  */
  YYSYMBOL_html_tag = 223,                 /* html_tag  */
  YYSYMBOL_html_content = 224,             /* html_content  */
  YYSYMBOL_head_tag = 225,                 /* head_tag  */
  YYSYMBOL_head_content = 226,             /* head_content  */
  YYSYMBOL_title_tag = 227,                /* title_tag  */
  YYSYMBOL_body_tag = 228,                 /* body_tag  */
  YYSYMBOL_body_content = 229,             /* body_content  */
  YYSYMBOL_heading = 230,                  /* heading  */
  YYSYMBOL_h1 = 231,                       /* h1  */
  YYSYMBOL_h2 = 232,                       /* h2  */
  YYSYMBOL_h3 = 233,                       /* h3  */
  YYSYMBOL_h4 = 234,                       /* h4  */
  YYSYMBOL_h5 = 235,                       /* h5  */
  YYSYMBOL_h6 = 236,                       /* h6  */
  YYSYMBOL_script_tag = 237,               /* script_tag  */
  YYSYMBOL_frameset_tag = 238,             /* frameset_tag  */
  YYSYMBOL_frameset_content = 239,         /* frameset_content  */
  YYSYMBOL_noframe_tag = 240,              /* noframe_tag  */
  YYSYMBOL_a_tag = 241,                    /* a_tag  */
  YYSYMBOL_a_content = 242,                /* a_content  */
  YYSYMBOL_block = 243,                    /* block  */
  YYSYMBOL_block_content = 244,            /* block_content  */
  YYSYMBOL_basefont_tag = 245,             /* basefont_tag  */
  YYSYMBOL_blockquote_tag = 246,           /* blockquote_tag  */
  YYSYMBOL_center_tag = 247,               /* center_tag  */
  YYSYMBOL_dir_tag = 248,                  /* dir_tag  */
  YYSYMBOL_div_tag = 249,                  /* div_tag  */
  YYSYMBOL_dl_tag = 250,                   /* dl_tag  */
  YYSYMBOL_dl_content = 251,               /* dl_content  */
  YYSYMBOL_dt_tag = 252,                   /* dt_tag  */
  YYSYMBOL_dd_tag = 253,                   /* dd_tag  */
  YYSYMBOL_flow = 254,                     /* flow  */
  YYSYMBOL_flow_content = 255,             /* flow_content  */
  YYSYMBOL_form_tag = 256,                 /* form_tag  */
  YYSYMBOL_form_content = 257,             /* form_content  */
  YYSYMBOL_listing_tag = 258,              /* listing_tag  */
  YYSYMBOL_menu_tag = 259,                 /* menu_tag  */
  YYSYMBOL_multicol_tag = 260,             /* multicol_tag  */
  YYSYMBOL_nobr_tag = 261,                 /* nobr_tag  */
  YYSYMBOL_xmp_tag = 262,                  /* xmp_tag  */
  YYSYMBOL_p_tag = 263,                    /* p_tag  */
  YYSYMBOL_pre_tag = 264,                  /* pre_tag  */
  YYSYMBOL_pre_content = 265,              /* pre_content  */
  YYSYMBOL_select_tag = 266,               /* select_tag  */
  YYSYMBOL_select_content = 267,           /* select_content  */
  YYSYMBOL_style_tag = 268,                /* style_tag  */
  YYSYMBOL_option_tag = 269,               /* option_tag  */
  YYSYMBOL_ol_tag = 270,                   /* ol_tag  */
  YYSYMBOL_li_tag = 271,                   /* li_tag  */
  YYSYMBOL_table_tag = 272,                /* table_tag  */
  YYSYMBOL_table_content = 273,            /* table_content  */
  YYSYMBOL_tr_tag = 274,                   /* tr_tag  */
  YYSYMBOL_table_cell = 275,               /* table_cell  */
  YYSYMBOL_td_tag = 276,                   /* td_tag  */
  YYSYMBOL_th_tag = 277,                   /* th_tag  */
  YYSYMBOL_ul_tag = 278,                   /* ul_tag  */
  YYSYMBOL_text = 279,                     /* text  */
  YYSYMBOL_text_content = 280,             /* text_content  */
  YYSYMBOL_style = 281,                    /* style  */
  YYSYMBOL_b_tag = 282,                    /* b_tag  */
  YYSYMBOL_font_tag = 283,                 /* font_tag  */
  YYSYMBOL_i_tag = 284,                    /* i_tag  */
  YYSYMBOL_small_tag = 285,                /* small_tag  */
  YYSYMBOL_sub_tag = 286,                  /* sub_tag  */
  YYSYMBOL_sup_tag = 287                   /* sup_tag  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  221
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   475


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   230,   230,   234,   240,   241,   245,   251,   252,   253,
     254,   258,   259,   264,   269,   270,   271,   272,   276,   277,
     278,   279,   280,   281,   285,   286,   290,   291,   295,   296,
     300,   301,   305,   306,   310,   311,   315,   316,   321,   322,
     327,   328,   333,   334,   339,   340,   345,   349,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   375,   376,   382,   383,
     388,   389,   394,   395,   400,   401,   406,   407,   412,   416,
     417,   422,   423,   428,   431,   432,   436,   437,   442,   443,
     444,   450,   451,   456,   457,   462,   463,   468,   469,   474,
     475,   480,   481,   486,   487,   492,   493,   494,   495,   496,
     500,   501,   506,   510,   514,   518,   519,   524,   528,   533,
     537,   538,   539,   540,   544,   548,   549,   553,   557,   561,
     562,   563,   567,   571,   572,   573,   574,   579,   580,   581,
     582,   583,   584,   588,   592,   596,   600,   604,   608
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "HTMLOPEN",
  "HTMLDOCUMENT", "HEADOPEN", "TITLEOPEN", "BODYOPEN", "STYLEOPEN",
  "BODYCONTENT", "HEADING", "H1OPEN", "H2OPEN", "H3OPEN", "H4OPEN",
  "H5OPEN", "H6OPEN", "FRAMEOPEN", "FRAMESETOPEN", "NOFRAMESOPEN",
  "FORMOPEN", "INPUTOPEN", "SELECTOPEN", "OPTIONOPEN", "TABLEOPEN",
  "TROPEN", "TDOPEN", "THOPEN", "THEADOPEN", "TBODYOPEN", "IMGOPEN",
  "AOPEN", "LINKOPEN", "ULOPEN", "LIOPEN", "OLOPEN", "BOPEN", "IOPEN",
  "UOPEN", "SMALLOPEN", "SUPOPEN", "SUBOPEN", "CENTEROPEN", "FONTOPEN",
  "HROPEN", "POPEN", "BROPEN", "IDENTIFIER", "TEXT", "ISINDEX",
  "BASEFONTOPEN", "BLOCKQUOTEOPEN", "DIROPEN", "DIVOPEN", "DLOPEN",
  "LISTINGOPEN", "MENUOPEN", "MULTICOLOPEN", "NOBROPEN", "XMPOPEN",
  "DTOPEN", "DDOPEN", "LITERALTEXT", "PREOPEN", "FLOW", "BR", "HR", "IMG",
  "SCRIPTOPEN", "PLAINTEXT", "HEADCLOSE", "TITLECLOSE", "STYLECLOSE",
  "BODYCLOSE", "H1CLOSE", "H2CLOSE", "H3CLOSE", "H4CLOSE", "H5CLOSE",
  "H6CLOSE", "FRAMECLOSE", "FRAMESETCLOSE", "NOFRAMESCLOSE", "FORMCLOSE",
  "INPUTCLOSE", "SELECTCLOSE", "OPTIONCLOSE", "TABLECLOSE", "TRCLOSE",
  "TDCLOSE", "THCLOSE", "THEADCLOSE", "TBODYCLOSE", "IMGCLOSE", "ACLOSE",
  "LINKCLOSE", "ULCLOSE", "LICLOSE", "OLCLOSE", "BCLOSE", "ICLOSE",
  "UCLOSE", "SMALLCLOSE", "SUPCLOSE", "SUBCLOSE", "CENTERCLOSE",
  "FONTCLOSE", "HRCLOSE", "PCLOSE", "BRCLOSE", "BASEFONTCLOSE",
  "BLOCKQUOTECLOSE", "DIRCLOSE", "DIVCLOSE", "DLCLOSE", "LISTINGCLOSE",
  "MENUCLOSE", "MULTICOLCLOSE", "NOBRCLOSE", "XMPCLOSE", "DTCLOSE",
  "DDCLOSE", "PRECLOSE", "SCRIPTCLOSE", "HTMLCLOSE", "ABBRATTR",
  "ACCEPTCHARSETATTR", "ACCEPTATTR", "ACCESSKEYATTR", "ACTIONATTR",
  "ALIGNATTR", "ALINKATTR", "ALTATTR", "AXISATTR", "BACKGROUNDATTR",
  "BGCOLORATTR", "BORDERATTR", "CELLPADDINGATTR", "CELLSPACINGATTR",
  "CHARATTR", "CHAROFFATTR", "CHARSETATTR", "CHECKEDATTR", "CLASSATTR",
  "CLEARATTR", "COLORATTR", "COLSATTR", "COLSPANATTR", "COMPACTATTR",
  "COORDSATTR", "DIRATTR", "DISABLEDATTR", "ENCTYPEATTR", "FACEATTR",
  "FRAMEATTR", "FRAMEBORDERATTR", "HEADERSATTR", "HEIGHTATTR", "HREFATTR",
  "HREFLANGATTR", "HSPACEATTR", "IDATTR", "ISMAPATTR", "LABELATTR",
  "LANGATTR", "LINKATTR", "LONGDESCATTR", "MARGINHEIGHTATTR",
  "MARGINWIDTHATTR", "MAXLENGHTATTR", "MEDIAATTR", "METHODATTR",
  "MULTPLEATTR", "NAMEATTR", "NORESIZEATTR", "NOWRAPATTR", "ONBLURATTR",
  "ONCHANGEATTR", "ONCLICKATTR", "ONDBCLICKATTR", "ONFOCUSATTR",
  "ONKEYDOWNATTR", "ONKEYPRESSATTR", "ONKEYUPATTR", "ONLOADATTR",
  "ONMOUSEDOWNATTR", "ONMOUSEMOVEATTR", "ONMOUSEOUTATTR",
  "ONMOUSEOVERATTR", "ONMOUSEUPATTR", "ONRESETATTR", "ONSELECTATTR",
  "ONSUBMITATTR", "ONUNLOADATTR", "PROFILEATTR", "READONLYATTR", "RELATTR",
  "REVATTR", "ROWSATTR", "ROWSPANATTR", "RULESATTR", "SCOPEATTR",
  "SCROLLINGATTR", "SELECTEDATTR", "SHAPEATTR", "SIZEATTR", "SRCATTR",
  "STARTATTR", "STYLEATTR", "SUMMARYATTR", "TABINDEXATTR", "TARGETATTR",
  "TEXTATTR", "TITLEATTR", "TYPEATTR", "USEMAPATTR", "VALIGNATTR",
  "VALUEATTR", "VLINKATTR", "VSPACEATTR", "WIDTHATTR", "$accept",
  "htmldocument", "html_tag", "html_content", "head_tag", "head_content",
  "title_tag", "body_tag", "body_content", "heading", "h1", "h2", "h3",
  "h4", "h5", "h6", "script_tag", "frameset_tag", "frameset_content",
  "noframe_tag", "a_tag", "a_content", "block", "block_content",
  "basefont_tag", "blockquote_tag", "center_tag", "dir_tag", "div_tag",
  "dl_tag", "dl_content", "dt_tag", "dd_tag", "flow", "flow_content",
  "form_tag", "form_content", "listing_tag", "menu_tag", "multicol_tag",
  "nobr_tag", "xmp_tag", "p_tag", "pre_tag", "pre_content", "select_tag",
  "select_content", "style_tag", "option_tag", "ol_tag", "li_tag",
  "table_tag", "table_content", "tr_tag", "table_cell", "td_tag", "th_tag",
  "ul_tag", "text", "text_content", "style", "b_tag", "font_tag", "i_tag",
  "small_tag", "sub_tag", "sup_tag", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475
};
#endif

#define YYPACT_NINF (-90)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-109)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,     1,    13,   -90,   257,   -89,     3,   -90,   -90,   183,
     330,   330,   330,   330,   330,   330,   -90,    -7,     4,    17,
      19,    26,    27,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -20,   -90,   330,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -18,   -90,   -59,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   183,   -90,     5,   -90,   -90,
     -90,   330,   -21,   -90,    -9,   -90,   -90,   330,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -33,   -30,   -90,   -90,   245,   330,   -90,    15,    12,   -25,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -16,    93,
     -90,    20,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -22,
      18,    25,   -90,   -90,   -90,   -26,   -90,   -90,   -35,   172,
     -90,   -90,   -90,   -90,   -90,   -90,    21,    11,    10,    16,
      14,    31,   -90,   -90,   -90,   -90,   -90,   201,    35,     2,
     -90,   -90,   -90,    36,   -90,   -90,    23,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   315,    34,
     -90,    40,   -90,   -88,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   183,   183,    51,   -90,   -90,   -90,
     -90,   -90,   270,   306,   -90,   -90,   -90
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     7,     0,    48,     1,    11,    48,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,   133,   134,    36,    25,    27,    29,    31,
      33,    35,     0,     9,     0,    18,    19,    20,    21,    22,
      23,    10,   135,     0,     8,     0,   132,   136,   137,   138,
     139,   140,   141,   142,     3,    48,    38,    40,    86,    88,
     110,     0,     0,   129,     0,   115,    70,   101,    66,    68,
      72,    74,    76,    91,    93,    95,    97,    99,    79,   103,
     133,    14,   131,     4,    89,    15,     5,     0,     0,   135,
      16,    47,    49,    50,    51,    52,    53,    54,     0,    48,
      55,     0,    56,    57,    58,    59,    65,    61,    62,     0,
       0,     0,   109,   112,    60,   130,    63,    64,    17,    89,
      24,    26,    28,    30,    32,    34,     0,     0,     0,     0,
       0,     0,     6,    46,    45,    12,    37,    89,     0,     0,
     120,   121,   123,     0,   122,   117,     0,    43,    71,    67,
      69,    75,    92,    96,    39,    41,    77,    81,    89,    16,
      78,     0,    83,    17,    87,   104,    90,   111,   116,    73,
      94,   102,    98,   100,    80,   113,   143,   145,   146,   148,
     147,   144,    13,   114,    48,    48,     0,   125,   126,   119,
     118,    82,    89,    89,   124,   127,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,    -8,    -6,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
      -4,   -90,    41,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   118,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   241,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    32,    33,    83,    84,    34,
      35,    36,    37,    38,    39,    40,    41,    86,    87,    88,
      42,    43,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   160,   161,   162,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   143,   144,   186,   187,   188,   117,   118,    46,
      47,    48,    49,    50,    51,    52,    53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,   119,    89,    85,   139,    89,     4,   140,   141,     1,
      55,     9,   135,     7,    10,    11,    12,    13,    14,    15,
     171,    56,    57,    58,    59,    60,    61,    62,   184,   185,
     172,   173,   174,   -85,    16,    54,    63,    64,    65,    17,
      18,   126,    19,    20,    21,    66,    22,   137,    67,    85,
     132,    89,   127,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,   136,   128,    79,   129,    80,    81,
      24,   142,   168,   171,   130,   131,   134,    26,    27,    28,
      29,    30,    31,   172,   173,   174,   169,   -42,   145,  -106,
     170,   158,  -107,    85,   155,    89,   154,  -108,   156,    82,
     165,     9,   166,   164,    10,    11,    12,    13,    14,    15,
     167,   177,   178,    58,    59,    60,    61,    62,   180,   179,
     176,   183,    44,   189,    16,  -105,    63,    64,    65,    17,
      18,   190,    19,    20,    21,    66,    22,   181,    67,   194,
     159,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,   157,   -84,    79,     0,    80,    81,
      24,   191,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,     0,     0,     0,   192,   193,    85,    85,
      89,    89,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     9,     0,     0,    10,    11,    12,    13,    14,    15,
       0,     0,     0,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,    16,  -105,    63,    64,    65,    17,
      18,     0,    19,    20,    21,    66,    22,     0,    67,     0,
       0,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,   175,    45,    79,     0,    80,    81,
      24,   120,   121,   122,   123,   124,   125,    26,    27,    28,
      29,    30,    31,     8,     0,     9,     0,     0,    10,    11,
      12,    13,    14,    15,   182,   133,     0,   148,     0,    82,
       0,     0,   149,   150,     0,   151,     0,   152,    16,   153,
       0,     0,     0,    17,    18,     0,    19,    20,    21,     0,
      22,     0,   138,     0,     0,  -105,   148,     0,   146,     0,
       0,   149,   150,     0,   151,     0,   152,     0,   153,     0,
       0,     0,    23,     0,    24,    25,   133,   147,     0,     0,
       0,    26,    27,    28,    29,    30,    31,     0,     0,     0,
     163,    10,    11,    12,    13,    14,    15,     0,     0,     0,
     148,     0,     0,     0,     0,   149,   150,     0,   151,   195,
     152,    16,   153,     0,     0,     0,    17,    18,     0,    19,
      20,    21,     0,    22,     0,   148,     0,     0,     0,     0,
     149,   150,     0,   151,     0,   152,     0,   153,     0,     0,
       0,     0,     0,     0,     0,    23,   196,    24,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
       0,   148,     0,     0,     0,     0,   149,   150,     0,   151,
     148,   152,     0,   153,     0,   149,   150,     0,   151,     0,
     152,     0,   153
};

static const yytype_int16 yycheck[] =
{
       6,     9,     6,     9,    25,     9,     5,    28,    29,     3,
       7,     8,    71,     0,    11,    12,    13,    14,    15,    16,
     108,    18,    19,    20,    21,    22,    23,    24,    26,    27,
     118,   119,   120,   121,    31,   124,    33,    34,    35,    36,
      37,    48,    39,    40,    41,    42,    43,    55,    45,    55,
      70,    55,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   123,    48,    63,    48,    65,    66,
      67,    92,    98,   108,    48,    48,    94,    74,    75,    76,
      77,    78,    79,   118,   119,   120,   112,    82,    97,   122,
     116,    99,   122,    99,    82,    99,    81,   122,   114,    96,
     122,     8,    84,    83,    11,    12,    13,    14,    15,    16,
      85,   100,   102,    20,    21,    22,    23,    24,   104,   103,
      99,    86,     4,    87,    31,   122,    33,    34,    35,    36,
      37,   108,    39,    40,    41,    42,    43,   106,    45,    88,
      99,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   121,    63,    -1,    65,    66,
      67,   121,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,   184,   185,   184,   185,
     184,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,     8,    -1,    -1,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,   122,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    72,     4,    63,    -1,    65,    66,
      67,    10,    11,    12,    13,    14,    15,    74,    75,    76,
      77,    78,    79,     6,    -1,     8,    -1,    -1,    11,    12,
      13,    14,    15,    16,    73,    34,    -1,   105,    -1,    96,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,    31,   117,
      -1,    -1,    -1,    36,    37,    -1,    39,    40,    41,    -1,
      43,    -1,    61,    -1,    -1,   122,   105,    -1,    67,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
      -1,    -1,    65,    -1,    67,    68,    85,    82,    -1,    -1,
      -1,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      99,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,   110,   111,    -1,   113,    89,
     115,    31,   117,    -1,    -1,    -1,    36,    37,    -1,    39,
      40,    41,    -1,    43,    -1,   105,    -1,    -1,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    90,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    78,    79,
      -1,   105,    -1,    -1,    -1,    -1,   110,   111,    -1,   113,
     105,   115,    -1,   117,    -1,   110,   111,    -1,   113,    -1,
     115,    -1,   117
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,   222,   223,     5,   224,   225,     0,     6,     8,
      11,    12,    13,    14,    15,    16,    31,    36,    37,    39,
      40,    41,    43,    65,    67,    68,    74,    75,    76,    77,
      78,    79,   226,   227,   230,   231,   232,   233,   234,   235,
     236,   237,   241,   242,   268,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   124,     7,    18,    19,    20,    21,
      22,    23,    24,    33,    34,    35,    42,    45,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    63,
      65,    66,    96,   228,   229,   230,   238,   239,   240,   241,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   278,   279,   229,
     279,   279,   279,   279,   279,   279,    48,    48,    48,    48,
      48,    48,    70,   279,    94,    71,   123,   229,   279,    25,
      28,    29,    92,   273,   274,    97,   279,    82,   105,   110,
     111,   113,   115,   117,    81,    82,   114,    61,   229,   243,
     253,   254,   255,   279,    83,   122,    84,    85,    98,   112,
     116,   108,   118,   119,   120,    72,    99,   100,   102,   103,
     104,   106,    73,    86,    26,    27,   275,   276,   277,    87,
     108,   121,   229,   229,    88,    89,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   221,   222,   223,   224,   224,   225,   226,   226,   226,
     226,   227,   227,   228,   229,   229,   229,   229,   230,   230,
     230,   230,   230,   230,   231,   231,   232,   232,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   241,   241,   242,   243,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   248,   249,   249,   250,   250,   251,   252,
     252,   253,   253,   254,   255,   255,   256,   256,   257,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   264,   264,   265,   265,   265,   265,   265,
     266,   266,   267,   268,   269,   270,   270,   271,   263,   272,
     273,   273,   273,   273,   274,   275,   275,   276,   277,   278,
     278,   278,   279,   280,   280,   280,   280,   281,   281,   281,
     281,   281,   281,   282,   283,   284,   285,   286,   287
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     3,     0,     1,     1,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     2,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     3,     3,     1,     2,     2,     3,     3,
       1,     1,     1,     1,     3,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1625 "html.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 611 "html.y"

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
