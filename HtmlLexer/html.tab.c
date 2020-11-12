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
  YYSYMBOL_HTMLCLOSE = 4,                  /* HTMLCLOSE  */
  YYSYMBOL_HTMLDOCUMENT = 5,               /* HTMLDOCUMENT  */
  YYSYMBOL_HEADOPEN = 6,                   /* HEADOPEN  */
  YYSYMBOL_HEADCLOSE = 7,                  /* HEADCLOSE  */
  YYSYMBOL_TITLEOPEN = 8,                  /* TITLEOPEN  */
  YYSYMBOL_TITLECLOSE = 9,                 /* TITLECLOSE  */
  YYSYMBOL_BODYOPEN = 10,                  /* BODYOPEN  */
  YYSYMBOL_BODYCLOSE = 11,                 /* BODYCLOSE  */
  YYSYMBOL_BODYCONTENT = 12,               /* BODYCONTENT  */
  YYSYMBOL_HEADING = 13,                   /* HEADING  */
  YYSYMBOL_H1CLOSE = 14,                   /* H1CLOSE  */
  YYSYMBOL_H2OPEN = 15,                    /* H2OPEN  */
  YYSYMBOL_H2CLOSE = 16,                   /* H2CLOSE  */
  YYSYMBOL_H3OPEN = 17,                    /* H3OPEN  */
  YYSYMBOL_H3CLOSE = 18,                   /* H3CLOSE  */
  YYSYMBOL_H4OPEN = 19,                    /* H4OPEN  */
  YYSYMBOL_H4CLOSE = 20,                   /* H4CLOSE  */
  YYSYMBOL_H5OPEN = 21,                    /* H5OPEN  */
  YYSYMBOL_H5CLOSE = 22,                   /* H5CLOSE  */
  YYSYMBOL_H6OPEN = 23,                    /* H6OPEN  */
  YYSYMBOL_H6CLOSE = 24,                   /* H6CLOSE  */
  YYSYMBOL_FRAMEOPEN = 25,                 /* FRAMEOPEN  */
  YYSYMBOL_FRAMECLOSE = 26,                /* FRAMECLOSE  */
  YYSYMBOL_FRAMESETOPEN = 27,              /* FRAMESETOPEN  */
  YYSYMBOL_FRAMESETCLOSE = 28,             /* FRAMESETCLOSE  */
  YYSYMBOL_NOFRAMESOPEN = 29,              /* NOFRAMESOPEN  */
  YYSYMBOL_NOFRAMESCLOSE = 30,             /* NOFRAMESCLOSE  */
  YYSYMBOL_FORMOPEN = 31,                  /* FORMOPEN  */
  YYSYMBOL_FORMCLOSE = 32,                 /* FORMCLOSE  */
  YYSYMBOL_INPUTOPEN = 33,                 /* INPUTOPEN  */
  YYSYMBOL_INPUTCLOSE = 34,                /* INPUTCLOSE  */
  YYSYMBOL_SELECTOPEN = 35,                /* SELECTOPEN  */
  YYSYMBOL_SELECTCLOSE = 36,               /* SELECTCLOSE  */
  YYSYMBOL_OPTIONOPEN = 37,                /* OPTIONOPEN  */
  YYSYMBOL_OPTIONCLOSE = 38,               /* OPTIONCLOSE  */
  YYSYMBOL_TABLEOPEN = 39,                 /* TABLEOPEN  */
  YYSYMBOL_TABLECLOSE = 40,                /* TABLECLOSE  */
  YYSYMBOL_TROPEN = 41,                    /* TROPEN  */
  YYSYMBOL_TRCLOSE = 42,                   /* TRCLOSE  */
  YYSYMBOL_TDOPEN = 43,                    /* TDOPEN  */
  YYSYMBOL_TDCLOSE = 44,                   /* TDCLOSE  */
  YYSYMBOL_THOPEN = 45,                    /* THOPEN  */
  YYSYMBOL_THCLOSE = 46,                   /* THCLOSE  */
  YYSYMBOL_THEADOPEN = 47,                 /* THEADOPEN  */
  YYSYMBOL_THEADCLOSE = 48,                /* THEADCLOSE  */
  YYSYMBOL_TBODYOPEN = 49,                 /* TBODYOPEN  */
  YYSYMBOL_TBODYCLOSE = 50,                /* TBODYCLOSE  */
  YYSYMBOL_IMGOPEN = 51,                   /* IMGOPEN  */
  YYSYMBOL_IMGCLOSE = 52,                  /* IMGCLOSE  */
  YYSYMBOL_AOPEN = 53,                     /* AOPEN  */
  YYSYMBOL_ACLOSE = 54,                    /* ACLOSE  */
  YYSYMBOL_LINKOPEN = 55,                  /* LINKOPEN  */
  YYSYMBOL_LINKCLOSE = 56,                 /* LINKCLOSE  */
  YYSYMBOL_ULOPEN = 57,                    /* ULOPEN  */
  YYSYMBOL_ULCLOSE = 58,                   /* ULCLOSE  */
  YYSYMBOL_LIOPEN = 59,                    /* LIOPEN  */
  YYSYMBOL_LICLOSE = 60,                   /* LICLOSE  */
  YYSYMBOL_OLOPEN = 61,                    /* OLOPEN  */
  YYSYMBOL_OLCLOSE = 62,                   /* OLCLOSE  */
  YYSYMBOL_BOPEN = 63,                     /* BOPEN  */
  YYSYMBOL_BCLOSE = 64,                    /* BCLOSE  */
  YYSYMBOL_IOPEN = 65,                     /* IOPEN  */
  YYSYMBOL_ICLOSE = 66,                    /* ICLOSE  */
  YYSYMBOL_UOPEN = 67,                     /* UOPEN  */
  YYSYMBOL_UCLOSE = 68,                    /* UCLOSE  */
  YYSYMBOL_SMALLOPEN = 69,                 /* SMALLOPEN  */
  YYSYMBOL_SMALLCLOSE = 70,                /* SMALLCLOSE  */
  YYSYMBOL_SUPOPEN = 71,                   /* SUPOPEN  */
  YYSYMBOL_SUPCLOSE = 72,                  /* SUPCLOSE  */
  YYSYMBOL_SUBOPEN = 73,                   /* SUBOPEN  */
  YYSYMBOL_SUBCLOSE = 74,                  /* SUBCLOSE  */
  YYSYMBOL_CENTEROPEN = 75,                /* CENTEROPEN  */
  YYSYMBOL_CENTERCLOSE = 76,               /* CENTERCLOSE  */
  YYSYMBOL_FONTOPEN = 77,                  /* FONTOPEN  */
  YYSYMBOL_FONTCLOSE = 78,                 /* FONTCLOSE  */
  YYSYMBOL_H1OPEN = 79,                    /* H1OPEN  */
  YYSYMBOL_HROPEN = 80,                    /* HROPEN  */
  YYSYMBOL_HRCLOSE = 81,                   /* HRCLOSE  */
  YYSYMBOL_POPEN = 82,                     /* POPEN  */
  YYSYMBOL_PCLOSE = 83,                    /* PCLOSE  */
  YYSYMBOL_BROPEN = 84,                    /* BROPEN  */
  YYSYMBOL_BRCLOSE = 85,                   /* BRCLOSE  */
  YYSYMBOL_IDENTIFIER = 86,                /* IDENTIFIER  */
  YYSYMBOL_TEXT = 87,                      /* TEXT  */
  YYSYMBOL_ISINDEX = 88,                   /* ISINDEX  */
  YYSYMBOL_BASEFONTOPEN = 89,              /* BASEFONTOPEN  */
  YYSYMBOL_BASEFONTCLOSE = 90,             /* BASEFONTCLOSE  */
  YYSYMBOL_BLOCKQUOTEOPEN = 91,            /* BLOCKQUOTEOPEN  */
  YYSYMBOL_BLOCKQUOTECLOSE = 92,           /* BLOCKQUOTECLOSE  */
  YYSYMBOL_DIROPEN = 93,                   /* DIROPEN  */
  YYSYMBOL_DIRCLOSE = 94,                  /* DIRCLOSE  */
  YYSYMBOL_DIVOPEN = 95,                   /* DIVOPEN  */
  YYSYMBOL_DIVCLOSE = 96,                  /* DIVCLOSE  */
  YYSYMBOL_DLOPEN = 97,                    /* DLOPEN  */
  YYSYMBOL_DLCLOSE = 98,                   /* DLCLOSE  */
  YYSYMBOL_LISTINGOPEN = 99,               /* LISTINGOPEN  */
  YYSYMBOL_LISTINGCLOSE = 100,             /* LISTINGCLOSE  */
  YYSYMBOL_MENUOPEN = 101,                 /* MENUOPEN  */
  YYSYMBOL_MENUCLOSE = 102,                /* MENUCLOSE  */
  YYSYMBOL_MULTICOLOPEN = 103,             /* MULTICOLOPEN  */
  YYSYMBOL_MULTICOLCLOSE = 104,            /* MULTICOLCLOSE  */
  YYSYMBOL_NOBROPEN = 105,                 /* NOBROPEN  */
  YYSYMBOL_NOBRCLOSE = 106,                /* NOBRCLOSE  */
  YYSYMBOL_XMPOPEN = 107,                  /* XMPOPEN  */
  YYSYMBOL_XMPCLOSE = 108,                 /* XMPCLOSE  */
  YYSYMBOL_DTOPEN = 109,                   /* DTOPEN  */
  YYSYMBOL_DTCLOSE = 110,                  /* DTCLOSE  */
  YYSYMBOL_DDOPEN = 111,                   /* DDOPEN  */
  YYSYMBOL_DDCLOSE = 112,                  /* DDCLOSE  */
  YYSYMBOL_LITERALTEXT = 113,              /* LITERALTEXT  */
  YYSYMBOL_PREOPEN = 114,                  /* PREOPEN  */
  YYSYMBOL_PRECLOSE = 115,                 /* PRECLOSE  */
  YYSYMBOL_FLOW = 116,                     /* FLOW  */
  YYSYMBOL_BR = 117,                       /* BR  */
  YYSYMBOL_HR = 118,                       /* HR  */
  YYSYMBOL_STYLEOPEN = 119,                /* STYLEOPEN  */
  YYSYMBOL_STYLECLOSE = 120,               /* STYLECLOSE  */
  YYSYMBOL_IMG = 121,                      /* IMG  */
  YYSYMBOL_SCRIPTOPEN = 122,               /* SCRIPTOPEN  */
  YYSYMBOL_SCRIPTCLOSE = 123,              /* SCRIPTCLOSE  */
  YYSYMBOL_PLAINTEXT = 124,                /* PLAINTEXT  */
  YYSYMBOL_ABBROPEN = 125,                 /* ABBROPEN  */
  YYSYMBOL_ABBRCLOSE = 126,                /* ABBRCLOSE  */
  YYSYMBOL_ACRONYMOPEN = 127,              /* ACRONYMOPEN  */
  YYSYMBOL_ACRONYMCLOSE = 128,             /* ACRONYMCLOSE  */
  YYSYMBOL_ADDRESSOPEN = 129,              /* ADDRESSOPEN  */
  YYSYMBOL_ADDRESSCLOSE = 130,             /* ADDRESSCLOSE  */
  YYSYMBOL_APPLETOPEN = 131,               /* APPLETOPEN  */
  YYSYMBOL_APPLETCLOSE = 132,              /* APPLETCLOSE  */
  YYSYMBOL_BDOOPEN = 133,                  /* BDOOPEN  */
  YYSYMBOL_BDOCLOSE = 134,                 /* BDOCLOSE  */
  YYSYMBOL_BIGOPEN = 135,                  /* BIGOPEN  */
  YYSYMBOL_BIGCLOSE = 136,                 /* BIGCLOSE  */
  YYSYMBOL_CAPTIONOPEN = 137,              /* CAPTIONOPEN  */
  YYSYMBOL_CAPTIONCLOSE = 138,             /* CAPTIONCLOSE  */
  YYSYMBOL_COLGROUPOPEN = 139,             /* COLGROUPOPEN  */
  YYSYMBOL_COLGROUPCLOSE = 140,            /* COLGROUPCLOSE  */
  YYSYMBOL_COLOPEN = 141,                  /* COLOPEN  */
  YYSYMBOL_COLCLOSE = 142,                 /* COLCLOSE  */
  YYSYMBOL_CODEOPEN = 143,                 /* CODEOPEN  */
  YYSYMBOL_CODECLOSE = 144,                /* CODECLOSE  */
  YYSYMBOL_DFNOPEN = 145,                  /* DFNOPEN  */
  YYSYMBOL_DFNCLOSE = 146,                 /* DFNCLOSE  */
  YYSYMBOL_KBDOPEN = 147,                  /* KBDOPEN  */
  YYSYMBOL_KBDCLOSE = 148,                 /* KBDCLOSE  */
  YYSYMBOL_QOPEN = 149,                    /* QOPEN  */
  YYSYMBOL_QCLOSE = 150,                   /* QCLOSE  */
  YYSYMBOL_STRONGOPEN = 151,               /* STRONGOPEN  */
  YYSYMBOL_STRONGCLOSE = 152,              /* STRONGCLOSE  */
  YYSYMBOL_EMOPEN = 153,                   /* EMOPEN  */
  YYSYMBOL_EMCLOSE = 154,                  /* EMCLOSE  */
  YYSYMBOL_FIELDSETOPEN = 155,             /* FIELDSETOPEN  */
  YYSYMBOL_FIELDSETCLOSE = 156,            /* FIELDSETCLOSE  */
  YYSYMBOL_LEGENDOPEN = 157,               /* LEGENDOPEN  */
  YYSYMBOL_LEGENDCLOSE = 158,              /* LEGENDCLOSE  */
  YYSYMBOL_DELOPEN = 159,                  /* DELOPEN  */
  YYSYMBOL_DELCLOSE = 160,                 /* DELCLOSE  */
  YYSYMBOL_INSOPEN = 161,                  /* INSOPEN  */
  YYSYMBOL_INSCLOSE = 162,                 /* INSCLOSE  */
  YYSYMBOL_MAPOPEN = 163,                  /* MAPOPEN  */
  YYSYMBOL_MAPCLOSE = 164,                 /* MAPCLOSE  */
  YYSYMBOL_AREAOPEN = 165,                 /* AREAOPEN  */
  YYSYMBOL_AREACLOSE = 166,                /* AREACLOSE  */
  YYSYMBOL_CONTENT = 167,                  /* CONTENT  */
  YYSYMBOL_NOSCRIPTOPEN = 168,             /* NOSCRIPTOPEN  */
  YYSYMBOL_NOSCRIPTCLOSE = 169,            /* NOSCRIPTCLOSE  */
  YYSYMBOL_PARAMOPEN = 170,                /* PARAMOPEN  */
  YYSYMBOL_PARAMCLOSE = 171,               /* PARAMCLOSE  */
  YYSYMBOL_OBJECTOPEN = 172,               /* OBJECTOPEN  */
  YYSYMBOL_OBJECTCLOSE = 173,              /* OBJECTCLOSE  */
  YYSYMBOL_TEXTAREAOPEN = 174,             /* TEXTAREAOPEN  */
  YYSYMBOL_TEXTAREACLOSE = 175,            /* TEXTAREACLOSE  */
  YYSYMBOL_LABELOPEN = 176,                /* LABELOPEN  */
  YYSYMBOL_LABELCLOSE = 177,               /* LABELCLOSE  */
  YYSYMBOL_OPTGROUPOPEN = 178,             /* OPTGROUPOPEN  */
  YYSYMBOL_OPTGROUPCLOSE = 179,            /* OPTGROUPCLOSE  */
  YYSYMBOL_SOPEN = 180,                    /* SOPEN  */
  YYSYMBOL_SCLOSE = 181,                   /* SCLOSE  */
  YYSYMBOL_SPANOPEN = 182,                 /* SPANOPEN  */
  YYSYMBOL_SPANCLOSE = 183,                /* SPANCLOSE  */
  YYSYMBOL_STRIKEOPEN = 184,               /* STRIKEOPEN  */
  YYSYMBOL_STRIKECLOSE = 185,              /* STRIKECLOSE  */
  YYSYMBOL_TTOPEN = 186,                   /* TTOPEN  */
  YYSYMBOL_TTCLOSE = 187,                  /* TTCLOSE  */
  YYSYMBOL_ABBRATTR = 188,                 /* ABBRATTR  */
  YYSYMBOL_ACCEPTCHARSETATTR = 189,        /* ACCEPTCHARSETATTR  */
  YYSYMBOL_ACCEPTATTR = 190,               /* ACCEPTATTR  */
  YYSYMBOL_ACCESSKEYATTR = 191,            /* ACCESSKEYATTR  */
  YYSYMBOL_ACTIONATTR = 192,               /* ACTIONATTR  */
  YYSYMBOL_ALIGNATTR = 193,                /* ALIGNATTR  */
  YYSYMBOL_ALINKATTR = 194,                /* ALINKATTR  */
  YYSYMBOL_ALTATTR = 195,                  /* ALTATTR  */
  YYSYMBOL_AXISATTR = 196,                 /* AXISATTR  */
  YYSYMBOL_BACKGROUNDATTR = 197,           /* BACKGROUNDATTR  */
  YYSYMBOL_BGCOLORATTR = 198,              /* BGCOLORATTR  */
  YYSYMBOL_BORDERATTR = 199,               /* BORDERATTR  */
  YYSYMBOL_CELLPADDINGATTR = 200,          /* CELLPADDINGATTR  */
  YYSYMBOL_CELLSPACINGATTR = 201,          /* CELLSPACINGATTR  */
  YYSYMBOL_CHARATTR = 202,                 /* CHARATTR  */
  YYSYMBOL_CHAROFFATTR = 203,              /* CHAROFFATTR  */
  YYSYMBOL_CHARSETATTR = 204,              /* CHARSETATTR  */
  YYSYMBOL_CHECKEDATTR = 205,              /* CHECKEDATTR  */
  YYSYMBOL_CLASSATTR = 206,                /* CLASSATTR  */
  YYSYMBOL_CLEARATTR = 207,                /* CLEARATTR  */
  YYSYMBOL_COLORATTR = 208,                /* COLORATTR  */
  YYSYMBOL_COLSATTR = 209,                 /* COLSATTR  */
  YYSYMBOL_COLSPANATTR = 210,              /* COLSPANATTR  */
  YYSYMBOL_COMPACTATTR = 211,              /* COMPACTATTR  */
  YYSYMBOL_COORDSATTR = 212,               /* COORDSATTR  */
  YYSYMBOL_DIRATTR = 213,                  /* DIRATTR  */
  YYSYMBOL_DISABLEDATTR = 214,             /* DISABLEDATTR  */
  YYSYMBOL_ENCTYPEATTR = 215,              /* ENCTYPEATTR  */
  YYSYMBOL_FACEATTR = 216,                 /* FACEATTR  */
  YYSYMBOL_FRAMEATTR = 217,                /* FRAMEATTR  */
  YYSYMBOL_FRAMEBORDERATTR = 218,          /* FRAMEBORDERATTR  */
  YYSYMBOL_HEADERSATTR = 219,              /* HEADERSATTR  */
  YYSYMBOL_HEIGHTATTR = 220,               /* HEIGHTATTR  */
  YYSYMBOL_HREFATTR = 221,                 /* HREFATTR  */
  YYSYMBOL_HREFLANGATTR = 222,             /* HREFLANGATTR  */
  YYSYMBOL_HSPACEATTR = 223,               /* HSPACEATTR  */
  YYSYMBOL_IDATTR = 224,                   /* IDATTR  */
  YYSYMBOL_ISMAPATTR = 225,                /* ISMAPATTR  */
  YYSYMBOL_LABELATTR = 226,                /* LABELATTR  */
  YYSYMBOL_LANGATTR = 227,                 /* LANGATTR  */
  YYSYMBOL_LINKATTR = 228,                 /* LINKATTR  */
  YYSYMBOL_LONGDESCATTR = 229,             /* LONGDESCATTR  */
  YYSYMBOL_MARGINHEIGHTATTR = 230,         /* MARGINHEIGHTATTR  */
  YYSYMBOL_MARGINWIDTHATTR = 231,          /* MARGINWIDTHATTR  */
  YYSYMBOL_MAXLENGHTATTR = 232,            /* MAXLENGHTATTR  */
  YYSYMBOL_MEDIAATTR = 233,                /* MEDIAATTR  */
  YYSYMBOL_METHODATTR = 234,               /* METHODATTR  */
  YYSYMBOL_MULTPLEATTR = 235,              /* MULTPLEATTR  */
  YYSYMBOL_NAMEATTR = 236,                 /* NAMEATTR  */
  YYSYMBOL_NORESIZEATTR = 237,             /* NORESIZEATTR  */
  YYSYMBOL_NOWRAPATTR = 238,               /* NOWRAPATTR  */
  YYSYMBOL_ONBLURATTR = 239,               /* ONBLURATTR  */
  YYSYMBOL_ONCHANGEATTR = 240,             /* ONCHANGEATTR  */
  YYSYMBOL_ONCLICKATTR = 241,              /* ONCLICKATTR  */
  YYSYMBOL_ONDBCLICKATTR = 242,            /* ONDBCLICKATTR  */
  YYSYMBOL_ONFOCUSATTR = 243,              /* ONFOCUSATTR  */
  YYSYMBOL_ONKEYDOWNATTR = 244,            /* ONKEYDOWNATTR  */
  YYSYMBOL_ONKEYPRESSATTR = 245,           /* ONKEYPRESSATTR  */
  YYSYMBOL_ONKEYUPATTR = 246,              /* ONKEYUPATTR  */
  YYSYMBOL_ONLOADATTR = 247,               /* ONLOADATTR  */
  YYSYMBOL_ONMOUSEDOWNATTR = 248,          /* ONMOUSEDOWNATTR  */
  YYSYMBOL_ONMOUSEMOVEATTR = 249,          /* ONMOUSEMOVEATTR  */
  YYSYMBOL_ONMOUSEOUTATTR = 250,           /* ONMOUSEOUTATTR  */
  YYSYMBOL_ONMOUSEOVERATTR = 251,          /* ONMOUSEOVERATTR  */
  YYSYMBOL_ONMOUSEUPATTR = 252,            /* ONMOUSEUPATTR  */
  YYSYMBOL_ONRESETATTR = 253,              /* ONRESETATTR  */
  YYSYMBOL_ONSELECTATTR = 254,             /* ONSELECTATTR  */
  YYSYMBOL_ONSUBMITATTR = 255,             /* ONSUBMITATTR  */
  YYSYMBOL_ONUNLOADATTR = 256,             /* ONUNLOADATTR  */
  YYSYMBOL_PROFILEATTR = 257,              /* PROFILEATTR  */
  YYSYMBOL_READONLYATTR = 258,             /* READONLYATTR  */
  YYSYMBOL_RELATTR = 259,                  /* RELATTR  */
  YYSYMBOL_REVATTR = 260,                  /* REVATTR  */
  YYSYMBOL_ROWSATTR = 261,                 /* ROWSATTR  */
  YYSYMBOL_ROWSPANATTR = 262,              /* ROWSPANATTR  */
  YYSYMBOL_RULESATTR = 263,                /* RULESATTR  */
  YYSYMBOL_SCOPEATTR = 264,                /* SCOPEATTR  */
  YYSYMBOL_SCROLLINGATTR = 265,            /* SCROLLINGATTR  */
  YYSYMBOL_SELECTEDATTR = 266,             /* SELECTEDATTR  */
  YYSYMBOL_SHAPEATTR = 267,                /* SHAPEATTR  */
  YYSYMBOL_SIZEATTR = 268,                 /* SIZEATTR  */
  YYSYMBOL_SRCATTR = 269,                  /* SRCATTR  */
  YYSYMBOL_STARTATTR = 270,                /* STARTATTR  */
  YYSYMBOL_STYLEATTR = 271,                /* STYLEATTR  */
  YYSYMBOL_SUMMARYATTR = 272,              /* SUMMARYATTR  */
  YYSYMBOL_TABINDEXATTR = 273,             /* TABINDEXATTR  */
  YYSYMBOL_TARGETATTR = 274,               /* TARGETATTR  */
  YYSYMBOL_TEXTATTR = 275,                 /* TEXTATTR  */
  YYSYMBOL_TITLEATTR = 276,                /* TITLEATTR  */
  YYSYMBOL_TYPEATTR = 277,                 /* TYPEATTR  */
  YYSYMBOL_USEMAPATTR = 278,               /* USEMAPATTR  */
  YYSYMBOL_VALIGNATTR = 279,               /* VALIGNATTR  */
  YYSYMBOL_VALUEATTR = 280,                /* VALUEATTR  */
  YYSYMBOL_VLINKATTR = 281,                /* VLINKATTR  */
  YYSYMBOL_VSPACEATTR = 282,               /* VSPACEATTR  */
  YYSYMBOL_WIDTHATTR = 283,                /* WIDTHATTR  */
  YYSYMBOL_YYACCEPT = 284,                 /* $accept  */
  YYSYMBOL_htmldocument = 285,             /* htmldocument  */
  YYSYMBOL_html_tag = 286,                 /* html_tag  */
  YYSYMBOL_html_content = 287,             /* html_content  */
  YYSYMBOL_head_tag = 288,                 /* head_tag  */
  YYSYMBOL_head_content = 289,             /* head_content  */
  YYSYMBOL_title_tag = 290,                /* title_tag  */
  YYSYMBOL_script_tag = 291,               /* script_tag  */
  YYSYMBOL_body_tag = 292,                 /* body_tag  */
  YYSYMBOL_body_content = 293,             /* body_content  */
  YYSYMBOL_hr_tag = 294,                   /* hr_tag  */
  YYSYMBOL_heading = 295,                  /* heading  */
  YYSYMBOL_h1 = 296,                       /* h1  */
  YYSYMBOL_h2 = 297,                       /* h2  */
  YYSYMBOL_h3 = 298,                       /* h3  */
  YYSYMBOL_h4 = 299,                       /* h4  */
  YYSYMBOL_h5 = 300,                       /* h5  */
  YYSYMBOL_h6 = 301,                       /* h6  */
  YYSYMBOL_address_tag = 302,              /* address_tag  */
  YYSYMBOL_address_content = 303,          /* address_content  */
  YYSYMBOL_p_tag = 304,                    /* p_tag  */
  YYSYMBOL_del_tag = 305,                  /* del_tag  */
  YYSYMBOL_ins_tag = 306,                  /* ins_tag  */
  YYSYMBOL_map_tag = 307,                  /* map_tag  */
  YYSYMBOL_map_content = 308,              /* map_content  */
  YYSYMBOL_area_tag = 309,                 /* area_tag  */
  YYSYMBOL_frameset_tag = 310,             /* frameset_tag  */
  YYSYMBOL_frameset_content = 311,         /* frameset_content  */
  YYSYMBOL_noframe_tag = 312,              /* noframe_tag  */
  YYSYMBOL_a_tag = 313,                    /* a_tag  */
  YYSYMBOL_a_content = 314,                /* a_content  */
  YYSYMBOL_block = 315,                    /* block  */
  YYSYMBOL_block_content = 316,            /* block_content  */
  YYSYMBOL_basefont_tag = 317,             /* basefont_tag  */
  YYSYMBOL_blockquote_tag = 318,           /* blockquote_tag  */
  YYSYMBOL_center_tag = 319,               /* center_tag  */
  YYSYMBOL_dir_tag = 320,                  /* dir_tag  */
  YYSYMBOL_div_tag = 321,                  /* div_tag  */
  YYSYMBOL_dl_tag = 322,                   /* dl_tag  */
  YYSYMBOL_dl_content = 323,               /* dl_content  */
  YYSYMBOL_dt_tag = 324,                   /* dt_tag  */
  YYSYMBOL_dd_tag = 325,                   /* dd_tag  */
  YYSYMBOL_flow = 326,                     /* flow  */
  YYSYMBOL_flow_content = 327,             /* flow_content  */
  YYSYMBOL_form_tag = 328,                 /* form_tag  */
  YYSYMBOL_form_content = 329,             /* form_content  */
  YYSYMBOL_fieldset_tag = 330,             /* fieldset_tag  */
  YYSYMBOL_label_tag = 331,                /* label_tag  */
  YYSYMBOL_label_content = 332,            /* label_content  */
  YYSYMBOL_select_tag = 333,               /* select_tag  */
  YYSYMBOL_select_content = 334,           /* select_content  */
  YYSYMBOL_option_tag = 335,               /* option_tag  */
  YYSYMBOL_optgroup_tag = 336,             /* optgroup_tag  */
  YYSYMBOL_textarea_tag = 337,             /* textarea_tag  */
  YYSYMBOL_abbr_tag = 338,                 /* abbr_tag  */
  YYSYMBOL_acronym_tag = 339,              /* acronym_tag  */
  YYSYMBOL_applet_tag = 340,               /* applet_tag  */
  YYSYMBOL_applet_content = 341,           /* applet_content  */
  YYSYMBOL_bdo_tag = 342,                  /* bdo_tag  */
  YYSYMBOL_big_tag = 343,                  /* big_tag  */
  YYSYMBOL_caption_tag = 344,              /* caption_tag  */
  YYSYMBOL_colgroup_tag = 345,             /* colgroup_tag  */
  YYSYMBOL_colgroup_content = 346,         /* colgroup_content  */
  YYSYMBOL_col_tag = 347,                  /* col_tag  */
  YYSYMBOL_content_style = 348,            /* content_style  */
  YYSYMBOL_code_tag = 349,                 /* code_tag  */
  YYSYMBOL_dfn_tag = 350,                  /* dfn_tag  */
  YYSYMBOL_kbd_tag = 351,                  /* kbd_tag  */
  YYSYMBOL_q_tag = 352,                    /* q_tag  */
  YYSYMBOL_strong_tag = 353,               /* strong_tag  */
  YYSYMBOL_em_tag = 354,                   /* em_tag  */
  YYSYMBOL_legend_tag = 355,               /* legend_tag  */
  YYSYMBOL_noscript_tag = 356,             /* noscript_tag  */
  YYSYMBOL_object_content = 357,           /* object_content  */
  YYSYMBOL_object_tag = 358,               /* object_tag  */
  YYSYMBOL_listing_tag = 359,              /* listing_tag  */
  YYSYMBOL_menu_tag = 360,                 /* menu_tag  */
  YYSYMBOL_pre_tag = 361,                  /* pre_tag  */
  YYSYMBOL_pre_content = 362,              /* pre_content  */
  YYSYMBOL_br_tag = 363,                   /* br_tag  */
  YYSYMBOL_style_tag = 364,                /* style_tag  */
  YYSYMBOL_ol_tag = 365,                   /* ol_tag  */
  YYSYMBOL_physical_style = 366,           /* physical_style  */
  YYSYMBOL_s_tag = 367,                    /* s_tag  */
  YYSYMBOL_span_tag = 368,                 /* span_tag  */
  YYSYMBOL_strike_tag = 369,               /* strike_tag  */
  YYSYMBOL_tt_tag = 370,                   /* tt_tag  */
  YYSYMBOL_u_tag = 371,                    /* u_tag  */
  YYSYMBOL_li_tag = 372,                   /* li_tag  */
  YYSYMBOL_table_tag = 373,                /* table_tag  */
  YYSYMBOL_table_content = 374,            /* table_content  */
  YYSYMBOL_tr_tag = 375,                   /* tr_tag  */
  YYSYMBOL_table_cell = 376,               /* table_cell  */
  YYSYMBOL_td_tag = 377,                   /* td_tag  */
  YYSYMBOL_th_tag = 378,                   /* th_tag  */
  YYSYMBOL_ul_tag = 379,                   /* ul_tag  */
  YYSYMBOL_text = 380,                     /* text  */
  YYSYMBOL_text_content = 381,             /* text_content  */
  YYSYMBOL_img_tag = 382,                  /* img_tag  */
  YYSYMBOL_font_tag = 383,                 /* font_tag  */
  YYSYMBOL_i_tag = 384,                    /* i_tag  */
  YYSYMBOL_small_tag = 385,                /* small_tag  */
  YYSYMBOL_sub_tag = 386,                  /* sub_tag  */
  YYSYMBOL_sup_tag = 387                   /* sup_tag  */
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
typedef yytype_int16 yy_state_t;

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
#define YYLAST   986

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  284
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  200
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   538


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
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
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   294,   294,   298,   304,   305,   309,   315,   316,   317,
     318,   322,   323,   328,   333,   338,   339,   340,   341,   342,
     343,   344,   345,   349,   354,   355,   356,   357,   358,   359,
     363,   364,   368,   369,   373,   374,   378,   379,   383,   384,
     388,   389,   393,   398,   399,   403,   404,   409,   414,   419,
     424,   428,   433,   434,   439,   440,   445,   450,   451,   456,
     460,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   483,   489,   495,   500,
     501,   506,   511,   512,   517,   521,   522,   527,   528,   533,
     536,   537,   541,   542,   547,   548,   549,   550,   551,   552,
     557,   562,   567,   572,   573,   578,   579,   583,   587,   592,
     597,   602,   607,   612,   616,   621,   626,   631,   636,   640,
     645,   646,   647,   648,   649,   650,   651,   652,   656,   661,
     666,   671,   676,   681,   686,   691,   696,   701,   706,   707,
     712,   713,   718,   719,   724,   725,   726,   727,   728,   732,
     737,   741,   742,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   762,   767,   772,   777,   782,
     787,   791,   796,   800,   801,   802,   803,   807,   811,   812,
     816,   820,   824,   825,   826,   830,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   846,   851,   855,   859,   863,
     867
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
  "HTMLCLOSE", "HTMLDOCUMENT", "HEADOPEN", "HEADCLOSE", "TITLEOPEN",
  "TITLECLOSE", "BODYOPEN", "BODYCLOSE", "BODYCONTENT", "HEADING",
  "H1CLOSE", "H2OPEN", "H2CLOSE", "H3OPEN", "H3CLOSE", "H4OPEN", "H4CLOSE",
  "H5OPEN", "H5CLOSE", "H6OPEN", "H6CLOSE", "FRAMEOPEN", "FRAMECLOSE",
  "FRAMESETOPEN", "FRAMESETCLOSE", "NOFRAMESOPEN", "NOFRAMESCLOSE",
  "FORMOPEN", "FORMCLOSE", "INPUTOPEN", "INPUTCLOSE", "SELECTOPEN",
  "SELECTCLOSE", "OPTIONOPEN", "OPTIONCLOSE", "TABLEOPEN", "TABLECLOSE",
  "TROPEN", "TRCLOSE", "TDOPEN", "TDCLOSE", "THOPEN", "THCLOSE",
  "THEADOPEN", "THEADCLOSE", "TBODYOPEN", "TBODYCLOSE", "IMGOPEN",
  "IMGCLOSE", "AOPEN", "ACLOSE", "LINKOPEN", "LINKCLOSE", "ULOPEN",
  "ULCLOSE", "LIOPEN", "LICLOSE", "OLOPEN", "OLCLOSE", "BOPEN", "BCLOSE",
  "IOPEN", "ICLOSE", "UOPEN", "UCLOSE", "SMALLOPEN", "SMALLCLOSE",
  "SUPOPEN", "SUPCLOSE", "SUBOPEN", "SUBCLOSE", "CENTEROPEN",
  "CENTERCLOSE", "FONTOPEN", "FONTCLOSE", "H1OPEN", "HROPEN", "HRCLOSE",
  "POPEN", "PCLOSE", "BROPEN", "BRCLOSE", "IDENTIFIER", "TEXT", "ISINDEX",
  "BASEFONTOPEN", "BASEFONTCLOSE", "BLOCKQUOTEOPEN", "BLOCKQUOTECLOSE",
  "DIROPEN", "DIRCLOSE", "DIVOPEN", "DIVCLOSE", "DLOPEN", "DLCLOSE",
  "LISTINGOPEN", "LISTINGCLOSE", "MENUOPEN", "MENUCLOSE", "MULTICOLOPEN",
  "MULTICOLCLOSE", "NOBROPEN", "NOBRCLOSE", "XMPOPEN", "XMPCLOSE",
  "DTOPEN", "DTCLOSE", "DDOPEN", "DDCLOSE", "LITERALTEXT", "PREOPEN",
  "PRECLOSE", "FLOW", "BR", "HR", "STYLEOPEN", "STYLECLOSE", "IMG",
  "SCRIPTOPEN", "SCRIPTCLOSE", "PLAINTEXT", "ABBROPEN", "ABBRCLOSE",
  "ACRONYMOPEN", "ACRONYMCLOSE", "ADDRESSOPEN", "ADDRESSCLOSE",
  "APPLETOPEN", "APPLETCLOSE", "BDOOPEN", "BDOCLOSE", "BIGOPEN",
  "BIGCLOSE", "CAPTIONOPEN", "CAPTIONCLOSE", "COLGROUPOPEN",
  "COLGROUPCLOSE", "COLOPEN", "COLCLOSE", "CODEOPEN", "CODECLOSE",
  "DFNOPEN", "DFNCLOSE", "KBDOPEN", "KBDCLOSE", "QOPEN", "QCLOSE",
  "STRONGOPEN", "STRONGCLOSE", "EMOPEN", "EMCLOSE", "FIELDSETOPEN",
  "FIELDSETCLOSE", "LEGENDOPEN", "LEGENDCLOSE", "DELOPEN", "DELCLOSE",
  "INSOPEN", "INSCLOSE", "MAPOPEN", "MAPCLOSE", "AREAOPEN", "AREACLOSE",
  "CONTENT", "NOSCRIPTOPEN", "NOSCRIPTCLOSE", "PARAMOPEN", "PARAMCLOSE",
  "OBJECTOPEN", "OBJECTCLOSE", "TEXTAREAOPEN", "TEXTAREACLOSE",
  "LABELOPEN", "LABELCLOSE", "OPTGROUPOPEN", "OPTGROUPCLOSE", "SOPEN",
  "SCLOSE", "SPANOPEN", "SPANCLOSE", "STRIKEOPEN", "STRIKECLOSE", "TTOPEN",
  "TTCLOSE", "ABBRATTR", "ACCEPTCHARSETATTR", "ACCEPTATTR",
  "ACCESSKEYATTR", "ACTIONATTR", "ALIGNATTR", "ALINKATTR", "ALTATTR",
  "AXISATTR", "BACKGROUNDATTR", "BGCOLORATTR", "BORDERATTR",
  "CELLPADDINGATTR", "CELLSPACINGATTR", "CHARATTR", "CHAROFFATTR",
  "CHARSETATTR", "CHECKEDATTR", "CLASSATTR", "CLEARATTR", "COLORATTR",
  "COLSATTR", "COLSPANATTR", "COMPACTATTR", "COORDSATTR", "DIRATTR",
  "DISABLEDATTR", "ENCTYPEATTR", "FACEATTR", "FRAMEATTR",
  "FRAMEBORDERATTR", "HEADERSATTR", "HEIGHTATTR", "HREFATTR",
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
  "title_tag", "script_tag", "body_tag", "body_content", "hr_tag",
  "heading", "h1", "h2", "h3", "h4", "h5", "h6", "address_tag",
  "address_content", "p_tag", "del_tag", "ins_tag", "map_tag",
  "map_content", "area_tag", "frameset_tag", "frameset_content",
  "noframe_tag", "a_tag", "a_content", "block", "block_content",
  "basefont_tag", "blockquote_tag", "center_tag", "dir_tag", "div_tag",
  "dl_tag", "dl_content", "dt_tag", "dd_tag", "flow", "flow_content",
  "form_tag", "form_content", "fieldset_tag", "label_tag", "label_content",
  "select_tag", "select_content", "option_tag", "optgroup_tag",
  "textarea_tag", "abbr_tag", "acronym_tag", "applet_tag",
  "applet_content", "bdo_tag", "big_tag", "caption_tag", "colgroup_tag",
  "colgroup_content", "col_tag", "content_style", "code_tag", "dfn_tag",
  "kbd_tag", "q_tag", "strong_tag", "em_tag", "legend_tag", "noscript_tag",
  "object_content", "object_tag", "listing_tag", "menu_tag", "pre_tag",
  "pre_content", "br_tag", "style_tag", "ol_tag", "physical_style",
  "s_tag", "span_tag", "strike_tag", "tt_tag", "u_tag", "li_tag",
  "table_tag", "table_content", "tr_tag", "table_cell", "td_tag", "th_tag",
  "ul_tag", "text", "text_content", "img_tag", "font_tag", "i_tag",
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
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538
};
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-148)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    40,    47,  -105,   194,    45,    15,  -105,  -105,   364,
    -105,   -23,   364,   -20,   -17,   -15,   -13,   364,  -104,  -102,
     364,   364,   713,   713,   364,   364,   364,   364,   364,   364,
     364,  -105,   364,   -95,   364,   364,   364,   364,    70,  -105,
    -105,  -105,    24,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,    74,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,   713,  -105,   367,  -105,  -105,    51,
      54,    33,    21,    20,    19,    18,    25,    14,     8,   -11,
      -7,   -26,   -25,  -105,   364,  -105,   364,  -105,   364,  -105,
     364,  -105,   364,  -105,  -105,  -105,  -105,   -62,   -14,  -105,
    -105,    48,  -105,   713,   364,   364,   364,   713,   713,  -105,
     713,  -105,  -105,  -105,  -105,  -105,   800,   -39,   713,   713,
     -54,   -48,   -33,    83,   -82,     6,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,     7,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,    26,   540,  -105,
      93,  -105,  -105,    92,    95,  -105,  -105,  -105,    -4,  -105,
    -105,  -105,    17,    22,  -105,  -105,   -46,  -105,  -105,   -44,
     -83,     3,   -10,    -5,    -8,   -21,     5,    10,   -36,   713,
      -1,   -37,   -35,    -9,   -38,  -105,  -105,  -105,    -6,   -19,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,   105,   105,   105,   105,   105,   127,
     713,    27,  -105,   -55,   105,    87,    86,   -68,   -66,   -60,
      41,  -105,   -30,   364,   713,    75,   -18,    23,  -105,   -24,
      12,   364,    13,  -105,     4,   138,  -105,     1,  -105,  -105,
    -105,  -105,    66,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,   -91,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,   -77,    43,   -12,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,    29,   -29,  -105,  -105,    16,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,   713,    49,  -105,    -2,  -105,  -105,  -105,
     141,  -105,  -105,  -105,  -105,   -87,  -105,   713,   713,   143,
    -105,  -105,  -105,  -105,   -32,   -31,  -105,  -105,  -105
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     7,     0,     0,     1,    11,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    61,     0,     0,     0,     0,     0,     0,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     9,
      10,   188,     0,   120,   121,   191,   153,   154,   190,   122,
     123,   124,   125,   126,   127,   192,   193,   186,     8,   189,
     157,   159,   160,   163,   164,    59,   185,   187,   155,   156,
     158,   161,   162,     3,    61,    52,    61,     4,     5,     0,
       0,    59,     0,    59,     0,     0,     0,     0,    59,     0,
       0,    59,    59,    31,     0,    33,     0,    35,     0,    37,
       0,    39,     0,    41,    92,    94,   103,     0,     0,   182,
     184,     0,   151,    61,     0,     0,    45,    61,    61,    79,
      61,    82,   138,   140,    85,   142,     0,     0,    61,    61,
       0,     0,     0,     0,    98,    15,    16,    24,    25,    26,
      27,    28,    29,    17,    72,    19,    20,    21,   188,    18,
      60,    62,    63,    64,    65,    66,    67,     0,    61,    68,
       0,    95,    96,     0,     0,   105,   106,    97,     0,    69,
      70,    73,     0,   186,   148,    71,   183,    74,    75,    22,
      98,    59,    59,    59,    59,    59,    59,    59,    59,    61,
       0,    59,    59,    59,    59,     6,    58,    12,    98,    98,
      53,    55,   195,   197,   169,   198,   200,   199,   196,   149,
     150,    13,   110,   111,    32,    34,    36,    38,    40,     0,
      61,     0,   170,    98,    30,    59,    59,    98,    98,    98,
       0,    43,    44,     0,    61,    98,    90,     0,    89,    91,
       0,     0,     0,    50,     0,     0,   102,     0,   139,    83,
      87,    84,     0,    93,    99,   104,   112,   143,   152,    80,
     141,    46,    86,   114,   115,   128,   129,   130,   131,   132,
     133,   135,    98,   137,   165,   166,   167,   168,    14,    56,
     107,    98,     0,     0,    78,    23,   171,    76,    77,    81,
      42,    59,     0,    47,    48,    59,    49,   109,   101,   108,
      88,   136,   116,    61,     0,   118,     0,   173,   174,   176,
       0,   175,   134,   100,    51,    98,   117,    61,    61,     0,
     178,   179,   172,   119,    98,    98,   177,   180,   181
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,    -3,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
      62,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   -22,
    -105,  -101,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,   -96,  -105,  -105,   -43,  -105,  -105,  -105,    58,
    -105,    59,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   -16,
     189,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,   126,  -105,  -105,  -105,
    -105,  -105,  -105,  -105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    38,    39,    40,    77,   235,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   230,
     144,   145,   146,   147,   242,   243,    78,    79,    80,    41,
      42,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   251,   237,   238,   159,   160,   161,   162,   245,   163,
     164,   165,   166,   167,    43,    44,    45,   168,    46,    47,
     221,   283,   304,   305,    48,    49,    50,    51,    52,    53,
      54,   234,    55,   190,    56,   169,   170,   171,   172,    57,
     174,   175,    59,    60,    61,    62,    63,    64,   176,   177,
     310,   311,   319,   320,   321,   178,   179,    66,    67,    68,
      69,    70,    71,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     148,   148,   106,   253,   107,   278,   173,   173,   -22,   248,
     -59,   279,   327,   248,   -18,   328,   258,   248,   248,   134,
     180,   284,   287,   248,   -59,    74,   288,   236,   236,   306,
     -59,     1,   248,   240,   248,   307,   289,   308,   309,   261,
     248,   317,    75,   318,    76,   248,     4,     7,   259,    73,
    -113,   263,   148,   261,   148,   323,   260,   236,   173,   261,
     173,   302,   252,    89,    82,    90,   262,    84,   248,   248,
      85,   198,    86,   199,    87,   189,   -22,   195,   196,   200,
     301,   248,   -18,   197,   201,   202,   262,   203,   204,   205,
     206,   148,   208,   209,   248,   148,   148,   173,   148,   207,
     212,   173,   173,   213,   173,   219,   148,   148,   222,   210,
     223,   241,   173,   173,   227,   228,   211,   229,   233,   244,
     107,  -146,  -147,   220,   249,   253,   254,   313,   256,   268,
      65,   255,   257,   271,   265,    81,   148,  -145,    83,   264,
     267,   266,   173,    88,   274,   133,    91,    92,   275,   277,
     181,   182,   183,   184,   185,   186,   187,   269,   188,   -59,
     191,   192,   193,   194,   270,   280,   282,   148,   285,   286,
     298,   290,   273,   173,   294,   248,   276,   296,   300,   297,
     299,   322,   314,   293,   303,   326,   272,   312,   231,   316,
     246,   292,   247,    58,     0,     0,     0,     0,   148,     0,
       0,     0,     8,     0,   173,     0,     0,     0,     0,     0,
       0,     0,   148,     0,     0,     0,     0,   281,   173,     0,
     214,     0,   215,     0,   216,     0,   217,     0,   218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   225,   226,     0,     0,     9,     0,    10,     0,     0,
       0,     0,   232,     0,   239,   239,     0,     0,     0,    11,
       0,    12,     0,    13,     0,    14,     0,    15,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    17,     0,
       0,   148,     0,     0,   239,     0,     0,   173,     0,     0,
       0,     0,     0,     0,     0,   148,   148,     0,     0,     0,
     315,   173,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   324,   325,    19,     0,     0,    20,
       0,    21,     0,     0,     0,    22,     0,    23,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,    28,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   291,
       0,    31,    32,     0,     0,     0,    33,   295,     0,     0,
       0,     0,     0,     0,    34,     0,    35,     0,    36,     0,
      37,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,   -54,     0,     0,   104,     0,
     105,     0,   106,     0,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,    10,     9,     0,
      10,     0,     0,     0,   109,   110,   111,     0,   112,    11,
       0,    12,    11,    13,    12,    14,    13,    15,    14,     0,
      15,    16,   113,     0,    16,     0,   114,   115,    17,   116,
       0,    17,     0,     0,     0,     0,   117,     0,   118,     0,
     119,     0,   120,     0,   121,     0,   122,     0,   123,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
       0,   125,  -144,     0,     0,     0,    18,     0,     0,    20,
       0,    21,    20,     0,    21,    22,   126,    23,    22,    24,
      23,     0,    24,     0,     0,     0,     0,    25,     0,    26,
      25,    27,    26,    28,    27,    29,    28,    30,    29,     0,
      30,     0,   127,     0,     0,     0,   128,     0,   129,     0,
     130,    31,    32,     0,    31,    32,    33,     0,     0,    33,
       0,   131,     0,   132,    34,   133,    35,    34,    36,    35,
      37,    36,     0,    37,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,     0,     0,     0,     0,
       0,   104,     0,   105,     0,   106,     0,   107,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,     0,    10,     0,     0,     0,   109,   110,   111,
       0,   112,     0,     0,     0,    11,     0,    12,     0,    13,
       0,    14,     0,    15,     0,   113,     0,    16,     0,   114,
     115,     0,   116,     0,    17,     0,     0,     0,     0,   117,
       0,   118,     0,   119,     0,   120,     0,   121,     0,   122,
       0,   123,     0,     0,     0,     0,     0,     0,     0,   124,
       0,   250,     0,     0,   125,  -144,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    20,     0,    21,     0,   126,
       0,    22,     0,    23,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,    28,
       0,    29,     0,    30,     0,   127,     0,     0,     0,   128,
       0,   129,     0,   130,     0,     0,     0,    31,    32,     0,
       0,     0,    33,     0,   131,     0,   132,     0,   133,     0,
      34,     0,    35,     0,    36,     0,    37,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,     0,   104,     0,   105,     0,   106,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,    10,     0,     0,     0,
     109,   110,   111,     0,   112,     0,     0,     0,    11,     0,
      12,     0,    13,     0,    14,     0,    15,     0,   113,     0,
      16,     0,   114,   115,     0,   116,     0,    17,     0,     0,
       0,     0,   117,     0,   118,     0,   119,     0,   120,     0,
     121,     0,   122,     0,   123,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,   125,  -144,     0,
       0,     0,    18,     0,     0,     0,     0,     0,    20,     0,
      21,     0,   126,     0,    22,     0,    23,     0,    24,     0,
       0,     9,     0,    10,     0,     0,    25,     0,    26,     0,
      27,     0,    28,     0,    29,    11,    30,    12,   127,    13,
       0,    14,   128,    15,   129,     0,   130,    16,     0,     0,
      31,    32,   116,     0,    17,    33,     0,   131,     0,   132,
       0,   133,     0,    34,     0,    35,     0,    36,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,     0,    23,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,    27,     0,    28,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    35,     0,    36,     0,    37
};

static const yytype_int16 yycheck[] =
{
      22,    23,    35,    32,    37,    11,    22,    23,    32,   100,
      54,    30,    44,   100,    32,    46,    62,   100,   100,    22,
      23,    76,    90,   100,    54,    10,    92,   128,   129,    41,
      54,     3,   100,   129,   100,    47,    96,    49,    50,    83,
     100,    43,    27,    45,    29,   100,     6,     0,    94,     4,
     132,   134,    74,    83,    76,   142,   102,   158,    74,    83,
      76,   138,   158,   167,    87,   167,   110,    87,   100,   100,
      87,    74,    87,    76,    87,   170,   100,     7,    54,    28,
     171,   100,   100,     9,    30,    52,   110,    66,    68,    70,
      72,   113,    78,    85,   100,   117,   118,   113,   120,    74,
     126,   117,   118,   128,   120,   167,   128,   129,    60,   120,
     113,   165,   128,   129,   117,   118,   123,   120,   157,   167,
      37,   115,   115,   137,    98,    32,    34,   156,   132,   150,
       4,    36,   115,   169,   144,     9,   158,   115,    12,   136,
     148,   146,   158,    17,   181,   178,    20,    21,   183,   187,
      24,    25,    26,    27,    28,    29,    30,   152,    32,    54,
      34,    35,    36,    37,   154,    38,   139,   189,    81,    83,
      32,   130,   173,   189,   162,   100,   185,   164,   112,   175,
     179,    40,   166,   160,   141,    42,   189,   158,   126,   140,
     132,   234,   133,     4,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,     8,    -1,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,   220,   234,    -1,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,   126,    -1,   128,   129,    -1,    -1,    -1,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,   303,    -1,    -1,   158,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   317,   318,    -1,    -1,    -1,
     303,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   317,   318,   122,    -1,    -1,   125,
      -1,   127,    -1,    -1,    -1,   131,    -1,   133,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,
      -1,   147,    -1,   149,    -1,   151,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,   167,   168,    -1,    -1,    -1,   172,   241,    -1,    -1,
      -1,    -1,    -1,    -1,   180,    -1,   182,    -1,   184,    -1,
     186,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,
      33,    -1,    35,    -1,    37,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    51,    -1,
      53,    -1,    -1,    -1,    57,    58,    59,    -1,    61,    65,
      -1,    67,    65,    69,    67,    71,    69,    73,    71,    -1,
      73,    77,    75,    -1,    77,    -1,    79,    80,    84,    82,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    99,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,   125,
      -1,   127,   125,    -1,   127,   131,   129,   133,   131,   135,
     133,    -1,   135,    -1,    -1,    -1,    -1,   143,    -1,   145,
     143,   147,   145,   149,   147,   151,   149,   153,   151,    -1,
     153,    -1,   155,    -1,    -1,    -1,   159,    -1,   161,    -1,
     163,   167,   168,    -1,   167,   168,   172,    -1,    -1,   172,
      -1,   174,    -1,   176,   180,   178,   182,   180,   184,   182,
     186,   184,    -1,   186,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    -1,    35,    -1,    37,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    57,    58,    59,
      -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    89,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,   125,    -1,   127,    -1,   129,
      -1,   131,    -1,   133,    -1,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,   145,    -1,   147,    -1,   149,
      -1,   151,    -1,   153,    -1,   155,    -1,    -1,    -1,   159,
      -1,   161,    -1,   163,    -1,    -1,    -1,   167,   168,    -1,
      -1,    -1,   172,    -1,   174,    -1,   176,    -1,   178,    -1,
     180,    -1,   182,    -1,   184,    -1,   186,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    35,    -1,
      37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      57,    58,    59,    -1,    61,    -1,    -1,    -1,    65,    -1,
      67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    -1,    79,    80,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    89,    -1,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,    -1,   131,    -1,   133,    -1,   135,    -1,
      -1,    51,    -1,    53,    -1,    -1,   143,    -1,   145,    -1,
     147,    -1,   149,    -1,   151,    65,   153,    67,   155,    69,
      -1,    71,   159,    73,   161,    -1,   163,    77,    -1,    -1,
     167,   168,    82,    -1,    84,   172,    -1,   174,    -1,   176,
      -1,   178,    -1,   180,    -1,   182,    -1,   184,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,    -1,   127,    -1,    -1,
      -1,   131,    -1,   133,    -1,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,   145,    -1,   147,    -1,   149,
      -1,   151,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,   168,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,    -1,   182,    -1,   184,    -1,   186
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,   285,   286,     6,   287,   288,     0,     8,    51,
      53,    65,    67,    69,    71,    73,    77,    84,   119,   122,
     125,   127,   131,   133,   135,   143,   145,   147,   149,   151,
     153,   167,   168,   172,   180,   182,   184,   186,   289,   290,
     291,   313,   314,   338,   339,   340,   342,   343,   348,   349,
     350,   351,   352,   353,   354,   356,   358,   363,   364,   366,
     367,   368,   369,   370,   371,   380,   381,   382,   383,   384,
     385,   386,   387,     4,    10,    27,    29,   292,   310,   311,
     312,   380,    87,   380,    87,    87,    87,    87,   380,   167,
     167,   380,   380,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    31,    33,    35,    37,    39,    57,
      58,    59,    61,    75,    79,    80,    82,    89,    91,    93,
      95,    97,    99,   101,   109,   114,   129,   155,   159,   161,
     163,   174,   176,   178,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   304,   305,   306,   307,   313,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   328,
     329,   330,   331,   333,   334,   335,   336,   337,   341,   359,
     360,   361,   362,   363,   364,   365,   372,   373,   379,   380,
     293,   380,   380,   380,   380,   380,   380,   380,   380,   170,
     357,   380,   380,   380,   380,     7,    54,     9,   293,   293,
      28,    30,    52,    66,    68,    70,    72,    74,    78,    85,
     120,   123,   126,   128,   380,   380,   380,   380,   380,   167,
     137,   344,    60,   293,   380,   380,   380,   293,   293,   293,
     303,   304,   380,   157,   355,   293,   315,   326,   327,   380,
     326,   165,   308,   309,   167,   332,   333,   335,   100,    98,
     111,   325,   326,    32,    34,    36,   132,   115,    62,    94,
     102,    83,   110,   134,   136,   144,   146,   148,   150,   152,
     154,   169,   293,   173,   181,   183,   185,   187,    11,    30,
      38,   293,   139,   345,    76,    81,    83,    90,    92,    96,
     130,   380,   329,   160,   162,   380,   164,   175,    32,   179,
     112,   171,   138,   141,   346,   347,    41,    47,    49,    50,
     374,   375,   158,   156,   166,   293,   140,    43,    45,   376,
     377,   378,    40,   142,   293,   293,    42,    44,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   284,   285,   286,   287,   287,   288,   289,   289,   289,
     289,   290,   290,   291,   292,   293,   293,   293,   293,   293,
     293,   293,   293,   294,   295,   295,   295,   295,   295,   295,
     296,   296,   297,   297,   298,   298,   299,   299,   300,   300,
     301,   301,   302,   303,   303,   304,   304,   305,   306,   307,
     308,   309,   310,   310,   311,   311,   312,   313,   313,   314,
     315,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   317,   318,   319,   320,
     320,   321,   322,   322,   323,   324,   324,   325,   325,   326,
     327,   327,   328,   328,   329,   329,   329,   329,   329,   329,
     330,   331,   332,   333,   333,   334,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   348,   348,   348,   348,   348,   348,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   359,
     360,   360,   361,   361,   362,   362,   362,   362,   362,   363,
     364,   365,   365,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   367,   368,   369,   370,   371,
     372,   304,   373,   374,   374,   374,   374,   375,   376,   376,
     377,   378,   379,   379,   379,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   382,   383,   384,   385,   386,
     387
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     3,     0,     1,     1,
       1,     1,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     1,     1,     2,     3,     3,     3,
       1,     3,     1,     2,     1,     2,     3,     1,     2,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       2,     3,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       4,     3,     1,     1,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       1,     2,     1,     2,     0,     1,     1,     1,     1,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     3,     5,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3
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

#line 1933 "html.tab.c"

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

#line 871 "html.y"

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
