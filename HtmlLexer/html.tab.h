/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HTML_TAB_H_INCLUDED
# define YY_YY_HTML_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    HTMLOPEN = 258,                /* HTMLOPEN  */
    HTMLDOCUMENT = 259,            /* HTMLDOCUMENT  */
    HEADOPEN = 260,                /* HEADOPEN  */
    TITLEOPEN = 261,               /* TITLEOPEN  */
    BODYOPEN = 262,                /* BODYOPEN  */
    STYLEOPEN = 263,               /* STYLEOPEN  */
    BODYCONTENT = 264,             /* BODYCONTENT  */
    HEADING = 265,                 /* HEADING  */
    H1OPEN = 266,                  /* H1OPEN  */
    H2OPEN = 267,                  /* H2OPEN  */
    H3OPEN = 268,                  /* H3OPEN  */
    H4OPEN = 269,                  /* H4OPEN  */
    H5OPEN = 270,                  /* H5OPEN  */
    H6OPEN = 271,                  /* H6OPEN  */
    FRAMEOPEN = 272,               /* FRAMEOPEN  */
    FRAMESETOPEN = 273,            /* FRAMESETOPEN  */
    NOFRAMESOPEN = 274,            /* NOFRAMESOPEN  */
    FORMOPEN = 275,                /* FORMOPEN  */
    INPUTOPEN = 276,               /* INPUTOPEN  */
    SELECTOPEN = 277,              /* SELECTOPEN  */
    OPTIONOPEN = 278,              /* OPTIONOPEN  */
    TABLEOPEN = 279,               /* TABLEOPEN  */
    TROPEN = 280,                  /* TROPEN  */
    TDOPEN = 281,                  /* TDOPEN  */
    THOPEN = 282,                  /* THOPEN  */
    THEADOPEN = 283,               /* THEADOPEN  */
    TBODYOPEN = 284,               /* TBODYOPEN  */
    IMGOPEN = 285,                 /* IMGOPEN  */
    AOPEN = 286,                   /* AOPEN  */
    LINKOPEN = 287,                /* LINKOPEN  */
    ULOPEN = 288,                  /* ULOPEN  */
    LIOPEN = 289,                  /* LIOPEN  */
    OLOPEN = 290,                  /* OLOPEN  */
    BOPEN = 291,                   /* BOPEN  */
    IOPEN = 292,                   /* IOPEN  */
    UOPEN = 293,                   /* UOPEN  */
    SMALLOPEN = 294,               /* SMALLOPEN  */
    SUPOPEN = 295,                 /* SUPOPEN  */
    SUBOPEN = 296,                 /* SUBOPEN  */
    CENTEROPEN = 297,              /* CENTEROPEN  */
    FONTOPEN = 298,                /* FONTOPEN  */
    HROPEN = 299,                  /* HROPEN  */
    POPEN = 300,                   /* POPEN  */
    BROPEN = 301,                  /* BROPEN  */
    IDENTIFIER = 302,              /* IDENTIFIER  */
    TEXT = 303,                    /* TEXT  */
    ISINDEX = 304,                 /* ISINDEX  */
    BASEFONTOPEN = 305,            /* BASEFONTOPEN  */
    BLOCKQUOTEOPEN = 306,          /* BLOCKQUOTEOPEN  */
    DIROPEN = 307,                 /* DIROPEN  */
    DIVOPEN = 308,                 /* DIVOPEN  */
    DLOPEN = 309,                  /* DLOPEN  */
    LISTINGOPEN = 310,             /* LISTINGOPEN  */
    MENUOPEN = 311,                /* MENUOPEN  */
    MULTICOLOPEN = 312,            /* MULTICOLOPEN  */
    NOBROPEN = 313,                /* NOBROPEN  */
    XMPOPEN = 314,                 /* XMPOPEN  */
    DTOPEN = 315,                  /* DTOPEN  */
    DDOPEN = 316,                  /* DDOPEN  */
    LITERALTEXT = 317,             /* LITERALTEXT  */
    PREOPEN = 318,                 /* PREOPEN  */
    FLOW = 319,                    /* FLOW  */
    BR = 320,                      /* BR  */
    HR = 321,                      /* HR  */
    IMG = 322,                     /* IMG  */
    SCRIPTOPEN = 323,              /* SCRIPTOPEN  */
    PLAINTEXT = 324,               /* PLAINTEXT  */
    HEADCLOSE = 325,               /* HEADCLOSE  */
    TITLECLOSE = 326,              /* TITLECLOSE  */
    STYLECLOSE = 327,              /* STYLECLOSE  */
    BODYCLOSE = 328,               /* BODYCLOSE  */
    H1CLOSE = 329,                 /* H1CLOSE  */
    H2CLOSE = 330,                 /* H2CLOSE  */
    H3CLOSE = 331,                 /* H3CLOSE  */
    H4CLOSE = 332,                 /* H4CLOSE  */
    H5CLOSE = 333,                 /* H5CLOSE  */
    H6CLOSE = 334,                 /* H6CLOSE  */
    FRAMECLOSE = 335,              /* FRAMECLOSE  */
    FRAMESETCLOSE = 336,           /* FRAMESETCLOSE  */
    NOFRAMESCLOSE = 337,           /* NOFRAMESCLOSE  */
    FORMCLOSE = 338,               /* FORMCLOSE  */
    INPUTCLOSE = 339,              /* INPUTCLOSE  */
    SELECTCLOSE = 340,             /* SELECTCLOSE  */
    OPTIONCLOSE = 341,             /* OPTIONCLOSE  */
    TABLECLOSE = 342,              /* TABLECLOSE  */
    TRCLOSE = 343,                 /* TRCLOSE  */
    TDCLOSE = 344,                 /* TDCLOSE  */
    THCLOSE = 345,                 /* THCLOSE  */
    THEADCLOSE = 346,              /* THEADCLOSE  */
    TBODYCLOSE = 347,              /* TBODYCLOSE  */
    IMGCLOSE = 348,                /* IMGCLOSE  */
    ACLOSE = 349,                  /* ACLOSE  */
    LINKCLOSE = 350,               /* LINKCLOSE  */
    ULCLOSE = 351,                 /* ULCLOSE  */
    LICLOSE = 352,                 /* LICLOSE  */
    OLCLOSE = 353,                 /* OLCLOSE  */
    BCLOSE = 354,                  /* BCLOSE  */
    ICLOSE = 355,                  /* ICLOSE  */
    UCLOSE = 356,                  /* UCLOSE  */
    SMALLCLOSE = 357,              /* SMALLCLOSE  */
    SUPCLOSE = 358,                /* SUPCLOSE  */
    SUBCLOSE = 359,                /* SUBCLOSE  */
    CENTERCLOSE = 360,             /* CENTERCLOSE  */
    FONTCLOSE = 361,               /* FONTCLOSE  */
    HRCLOSE = 362,                 /* HRCLOSE  */
    PCLOSE = 363,                  /* PCLOSE  */
    BRCLOSE = 364,                 /* BRCLOSE  */
    BASEFONTCLOSE = 365,           /* BASEFONTCLOSE  */
    BLOCKQUOTECLOSE = 366,         /* BLOCKQUOTECLOSE  */
    DIRCLOSE = 367,                /* DIRCLOSE  */
    DIVCLOSE = 368,                /* DIVCLOSE  */
    DLCLOSE = 369,                 /* DLCLOSE  */
    LISTINGCLOSE = 370,            /* LISTINGCLOSE  */
    MENUCLOSE = 371,               /* MENUCLOSE  */
    MULTICOLCLOSE = 372,           /* MULTICOLCLOSE  */
    NOBRCLOSE = 373,               /* NOBRCLOSE  */
    XMPCLOSE = 374,                /* XMPCLOSE  */
    DTCLOSE = 375,                 /* DTCLOSE  */
    DDCLOSE = 376,                 /* DDCLOSE  */
    PRECLOSE = 377,                /* PRECLOSE  */
    SCRIPTCLOSE = 378,             /* SCRIPTCLOSE  */
    HTMLCLOSE = 379,               /* HTMLCLOSE  */
    ABBRATTR = 380,                /* ABBRATTR  */
    ACCEPTCHARSETATTR = 381,       /* ACCEPTCHARSETATTR  */
    ACCEPTATTR = 382,              /* ACCEPTATTR  */
    ACCESSKEYATTR = 383,           /* ACCESSKEYATTR  */
    ACTIONATTR = 384,              /* ACTIONATTR  */
    ALIGNATTR = 385,               /* ALIGNATTR  */
    ALINKATTR = 386,               /* ALINKATTR  */
    ALTATTR = 387,                 /* ALTATTR  */
    AXISATTR = 388,                /* AXISATTR  */
    BACKGROUNDATTR = 389,          /* BACKGROUNDATTR  */
    BGCOLORATTR = 390,             /* BGCOLORATTR  */
    BORDERATTR = 391,              /* BORDERATTR  */
    CELLPADDINGATTR = 392,         /* CELLPADDINGATTR  */
    CELLSPACINGATTR = 393,         /* CELLSPACINGATTR  */
    CHARATTR = 394,                /* CHARATTR  */
    CHAROFFATTR = 395,             /* CHAROFFATTR  */
    CHARSETATTR = 396,             /* CHARSETATTR  */
    CHECKEDATTR = 397,             /* CHECKEDATTR  */
    CLASSATTR = 398,               /* CLASSATTR  */
    CLEARATTR = 399,               /* CLEARATTR  */
    COLORATTR = 400,               /* COLORATTR  */
    COLSATTR = 401,                /* COLSATTR  */
    COLSPANATTR = 402,             /* COLSPANATTR  */
    COMPACTATTR = 403,             /* COMPACTATTR  */
    COORDSATTR = 404,              /* COORDSATTR  */
    DIRATTR = 405,                 /* DIRATTR  */
    DISABLEDATTR = 406,            /* DISABLEDATTR  */
    ENCTYPEATTR = 407,             /* ENCTYPEATTR  */
    FACEATTR = 408,                /* FACEATTR  */
    FRAMEATTR = 409,               /* FRAMEATTR  */
    FRAMEBORDERATTR = 410,         /* FRAMEBORDERATTR  */
    HEADERSATTR = 411,             /* HEADERSATTR  */
    HEIGHTATTR = 412,              /* HEIGHTATTR  */
    HREFATTR = 413,                /* HREFATTR  */
    HREFLANGATTR = 414,            /* HREFLANGATTR  */
    HSPACEATTR = 415,              /* HSPACEATTR  */
    IDATTR = 416,                  /* IDATTR  */
    ISMAPATTR = 417,               /* ISMAPATTR  */
    LABELATTR = 418,               /* LABELATTR  */
    LANGATTR = 419,                /* LANGATTR  */
    LINKATTR = 420,                /* LINKATTR  */
    LONGDESCATTR = 421,            /* LONGDESCATTR  */
    MARGINHEIGHTATTR = 422,        /* MARGINHEIGHTATTR  */
    MARGINWIDTHATTR = 423,         /* MARGINWIDTHATTR  */
    MAXLENGHTATTR = 424,           /* MAXLENGHTATTR  */
    MEDIAATTR = 425,               /* MEDIAATTR  */
    METHODATTR = 426,              /* METHODATTR  */
    MULTPLEATTR = 427,             /* MULTPLEATTR  */
    NAMEATTR = 428,                /* NAMEATTR  */
    NORESIZEATTR = 429,            /* NORESIZEATTR  */
    NOWRAPATTR = 430,              /* NOWRAPATTR  */
    ONBLURATTR = 431,              /* ONBLURATTR  */
    ONCHANGEATTR = 432,            /* ONCHANGEATTR  */
    ONCLICKATTR = 433,             /* ONCLICKATTR  */
    ONDBCLICKATTR = 434,           /* ONDBCLICKATTR  */
    ONFOCUSATTR = 435,             /* ONFOCUSATTR  */
    ONKEYDOWNATTR = 436,           /* ONKEYDOWNATTR  */
    ONKEYPRESSATTR = 437,          /* ONKEYPRESSATTR  */
    ONKEYUPATTR = 438,             /* ONKEYUPATTR  */
    ONLOADATTR = 439,              /* ONLOADATTR  */
    ONMOUSEDOWNATTR = 440,         /* ONMOUSEDOWNATTR  */
    ONMOUSEMOVEATTR = 441,         /* ONMOUSEMOVEATTR  */
    ONMOUSEOUTATTR = 442,          /* ONMOUSEOUTATTR  */
    ONMOUSEOVERATTR = 443,         /* ONMOUSEOVERATTR  */
    ONMOUSEUPATTR = 444,           /* ONMOUSEUPATTR  */
    ONRESETATTR = 445,             /* ONRESETATTR  */
    ONSELECTATTR = 446,            /* ONSELECTATTR  */
    ONSUBMITATTR = 447,            /* ONSUBMITATTR  */
    ONUNLOADATTR = 448,            /* ONUNLOADATTR  */
    PROFILEATTR = 449,             /* PROFILEATTR  */
    READONLYATTR = 450,            /* READONLYATTR  */
    RELATTR = 451,                 /* RELATTR  */
    REVATTR = 452,                 /* REVATTR  */
    ROWSATTR = 453,                /* ROWSATTR  */
    ROWSPANATTR = 454,             /* ROWSPANATTR  */
    RULESATTR = 455,               /* RULESATTR  */
    SCOPEATTR = 456,               /* SCOPEATTR  */
    SCROLLINGATTR = 457,           /* SCROLLINGATTR  */
    SELECTEDATTR = 458,            /* SELECTEDATTR  */
    SHAPEATTR = 459,               /* SHAPEATTR  */
    SIZEATTR = 460,                /* SIZEATTR  */
    SRCATTR = 461,                 /* SRCATTR  */
    STARTATTR = 462,               /* STARTATTR  */
    STYLEATTR = 463,               /* STYLEATTR  */
    SUMMARYATTR = 464,             /* SUMMARYATTR  */
    TABINDEXATTR = 465,            /* TABINDEXATTR  */
    TARGETATTR = 466,              /* TARGETATTR  */
    TEXTATTR = 467,                /* TEXTATTR  */
    TITLEATTR = 468,               /* TITLEATTR  */
    TYPEATTR = 469,                /* TYPEATTR  */
    USEMAPATTR = 470,              /* USEMAPATTR  */
    VALIGNATTR = 471,              /* VALIGNATTR  */
    VALUEATTR = 472,               /* VALUEATTR  */
    VLINKATTR = 473,               /* VLINKATTR  */
    VSPACEATTR = 474,              /* VSPACEATTR  */
    WIDTHATTR = 475                /* WIDTHATTR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HTML_TAB_H_INCLUDED  */
