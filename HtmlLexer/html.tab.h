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
    HTMLCLOSE = 259,               /* HTMLCLOSE  */
    HTMLDOCUMENT = 260,            /* HTMLDOCUMENT  */
    HEADOPEN = 261,                /* HEADOPEN  */
    HEADCLOSE = 262,               /* HEADCLOSE  */
    TITLEOPEN = 263,               /* TITLEOPEN  */
    TITLECLOSE = 264,              /* TITLECLOSE  */
    BODYOPEN = 265,                /* BODYOPEN  */
    BODYCLOSE = 266,               /* BODYCLOSE  */
    BODYCONTENT = 267,             /* BODYCONTENT  */
    HEADING = 268,                 /* HEADING  */
    H1CLOSE = 269,                 /* H1CLOSE  */
    H2OPEN = 270,                  /* H2OPEN  */
    H2CLOSE = 271,                 /* H2CLOSE  */
    H3OPEN = 272,                  /* H3OPEN  */
    H3CLOSE = 273,                 /* H3CLOSE  */
    H4OPEN = 274,                  /* H4OPEN  */
    H4CLOSE = 275,                 /* H4CLOSE  */
    H5OPEN = 276,                  /* H5OPEN  */
    H5CLOSE = 277,                 /* H5CLOSE  */
    H6OPEN = 278,                  /* H6OPEN  */
    H6CLOSE = 279,                 /* H6CLOSE  */
    FRAMEOPEN = 280,               /* FRAMEOPEN  */
    FRAMECLOSE = 281,              /* FRAMECLOSE  */
    FRAMESETOPEN = 282,            /* FRAMESETOPEN  */
    FRAMESETCLOSE = 283,           /* FRAMESETCLOSE  */
    NOFRAMESOPEN = 284,            /* NOFRAMESOPEN  */
    NOFRAMESCLOSE = 285,           /* NOFRAMESCLOSE  */
    FORMOPEN = 286,                /* FORMOPEN  */
    FORMCLOSE = 287,               /* FORMCLOSE  */
    INPUTOPEN = 288,               /* INPUTOPEN  */
    INPUTCLOSE = 289,              /* INPUTCLOSE  */
    SELECTOPEN = 290,              /* SELECTOPEN  */
    SELECTCLOSE = 291,             /* SELECTCLOSE  */
    OPTIONOPEN = 292,              /* OPTIONOPEN  */
    OPTIONCLOSE = 293,             /* OPTIONCLOSE  */
    TABLEOPEN = 294,               /* TABLEOPEN  */
    TABLECLOSE = 295,              /* TABLECLOSE  */
    TROPEN = 296,                  /* TROPEN  */
    TRCLOSE = 297,                 /* TRCLOSE  */
    TDOPEN = 298,                  /* TDOPEN  */
    TDCLOSE = 299,                 /* TDCLOSE  */
    THOPEN = 300,                  /* THOPEN  */
    THCLOSE = 301,                 /* THCLOSE  */
    THEADOPEN = 302,               /* THEADOPEN  */
    THEADCLOSE = 303,              /* THEADCLOSE  */
    TBODYOPEN = 304,               /* TBODYOPEN  */
    TBODYCLOSE = 305,              /* TBODYCLOSE  */
    IMGOPEN = 306,                 /* IMGOPEN  */
    IMGCLOSE = 307,                /* IMGCLOSE  */
    AOPEN = 308,                   /* AOPEN  */
    ACLOSE = 309,                  /* ACLOSE  */
    LINKOPEN = 310,                /* LINKOPEN  */
    LINKCLOSE = 311,               /* LINKCLOSE  */
    ULOPEN = 312,                  /* ULOPEN  */
    ULCLOSE = 313,                 /* ULCLOSE  */
    LIOPEN = 314,                  /* LIOPEN  */
    LICLOSE = 315,                 /* LICLOSE  */
    OLOPEN = 316,                  /* OLOPEN  */
    OLCLOSE = 317,                 /* OLCLOSE  */
    BOPEN = 318,                   /* BOPEN  */
    BCLOSE = 319,                  /* BCLOSE  */
    IOPEN = 320,                   /* IOPEN  */
    ICLOSE = 321,                  /* ICLOSE  */
    UOPEN = 322,                   /* UOPEN  */
    UCLOSE = 323,                  /* UCLOSE  */
    SMALLOPEN = 324,               /* SMALLOPEN  */
    SMALLCLOSE = 325,              /* SMALLCLOSE  */
    SUPOPEN = 326,                 /* SUPOPEN  */
    SUPCLOSE = 327,                /* SUPCLOSE  */
    SUBOPEN = 328,                 /* SUBOPEN  */
    SUBCLOSE = 329,                /* SUBCLOSE  */
    CENTEROPEN = 330,              /* CENTEROPEN  */
    CENTERCLOSE = 331,             /* CENTERCLOSE  */
    FONTOPEN = 332,                /* FONTOPEN  */
    FONTCLOSE = 333,               /* FONTCLOSE  */
    H1OPEN = 334,                  /* H1OPEN  */
    HROPEN = 335,                  /* HROPEN  */
    HRCLOSE = 336,                 /* HRCLOSE  */
    POPEN = 337,                   /* POPEN  */
    PCLOSE = 338,                  /* PCLOSE  */
    BROPEN = 339,                  /* BROPEN  */
    BRCLOSE = 340,                 /* BRCLOSE  */
    IDENTIFIER = 341,              /* IDENTIFIER  */
    TEXT = 342,                    /* TEXT  */
    ISINDEX = 343,                 /* ISINDEX  */
    BASEFONTOPEN = 344,            /* BASEFONTOPEN  */
    BASEFONTCLOSE = 345,           /* BASEFONTCLOSE  */
    BLOCKQUOTEOPEN = 346,          /* BLOCKQUOTEOPEN  */
    BLOCKQUOTECLOSE = 347,         /* BLOCKQUOTECLOSE  */
    DIROPEN = 348,                 /* DIROPEN  */
    DIRCLOSE = 349,                /* DIRCLOSE  */
    DIVOPEN = 350,                 /* DIVOPEN  */
    DIVCLOSE = 351,                /* DIVCLOSE  */
    DLOPEN = 352,                  /* DLOPEN  */
    DLCLOSE = 353,                 /* DLCLOSE  */
    LISTINGOPEN = 354,             /* LISTINGOPEN  */
    LISTINGCLOSE = 355,            /* LISTINGCLOSE  */
    MENUOPEN = 356,                /* MENUOPEN  */
    MENUCLOSE = 357,               /* MENUCLOSE  */
    MULTICOLOPEN = 358,            /* MULTICOLOPEN  */
    MULTICOLCLOSE = 359,           /* MULTICOLCLOSE  */
    NOBROPEN = 360,                /* NOBROPEN  */
    NOBRCLOSE = 361,               /* NOBRCLOSE  */
    XMPOPEN = 362,                 /* XMPOPEN  */
    XMPCLOSE = 363,                /* XMPCLOSE  */
    DTOPEN = 364,                  /* DTOPEN  */
    DTCLOSE = 365,                 /* DTCLOSE  */
    DDOPEN = 366,                  /* DDOPEN  */
    DDCLOSE = 367,                 /* DDCLOSE  */
    LITERALTEXT = 368,             /* LITERALTEXT  */
    PREOPEN = 369,                 /* PREOPEN  */
    PRECLOSE = 370,                /* PRECLOSE  */
    FLOW = 371,                    /* FLOW  */
    BR = 372,                      /* BR  */
    HR = 373,                      /* HR  */
    STYLEOPEN = 374,               /* STYLEOPEN  */
    STYLECLOSE = 375,              /* STYLECLOSE  */
    IMG = 376,                     /* IMG  */
    SCRIPTOPEN = 377,              /* SCRIPTOPEN  */
    SCRIPTCLOSE = 378,             /* SCRIPTCLOSE  */
    PLAINTEXT = 379,               /* PLAINTEXT  */
    ABBROPEN = 380,                /* ABBROPEN  */
    ABBRCLOSE = 381,               /* ABBRCLOSE  */
    ACRONYMOPEN = 382,             /* ACRONYMOPEN  */
    ACRONYMCLOSE = 383,            /* ACRONYMCLOSE  */
    ADDRESSOPEN = 384,             /* ADDRESSOPEN  */
    ADDRESSCLOSE = 385,            /* ADDRESSCLOSE  */
    APPLETOPEN = 386,              /* APPLETOPEN  */
    APPLETCLOSE = 387,             /* APPLETCLOSE  */
    BDOOPEN = 388,                 /* BDOOPEN  */
    BDOCLOSE = 389,                /* BDOCLOSE  */
    BIGOPEN = 390,                 /* BIGOPEN  */
    BIGCLOSE = 391,                /* BIGCLOSE  */
    CAPTIONOPEN = 392,             /* CAPTIONOPEN  */
    CAPTIONCLOSE = 393,            /* CAPTIONCLOSE  */
    COLGROUPOPEN = 394,            /* COLGROUPOPEN  */
    COLGROUPCLOSE = 395,           /* COLGROUPCLOSE  */
    COLOPEN = 396,                 /* COLOPEN  */
    COLCLOSE = 397,                /* COLCLOSE  */
    CODEOPEN = 398,                /* CODEOPEN  */
    CODECLOSE = 399,               /* CODECLOSE  */
    DFNOPEN = 400,                 /* DFNOPEN  */
    DFNCLOSE = 401,                /* DFNCLOSE  */
    KBDOPEN = 402,                 /* KBDOPEN  */
    KBDCLOSE = 403,                /* KBDCLOSE  */
    QOPEN = 404,                   /* QOPEN  */
    QCLOSE = 405,                  /* QCLOSE  */
    STRONGOPEN = 406,              /* STRONGOPEN  */
    STRONGCLOSE = 407,             /* STRONGCLOSE  */
    EMOPEN = 408,                  /* EMOPEN  */
    EMCLOSE = 409,                 /* EMCLOSE  */
    FIELDSETOPEN = 410,            /* FIELDSETOPEN  */
    FIELDSETCLOSE = 411,           /* FIELDSETCLOSE  */
    LEGENDOPEN = 412,              /* LEGENDOPEN  */
    LEGENDCLOSE = 413,             /* LEGENDCLOSE  */
    DELOPEN = 414,                 /* DELOPEN  */
    DELCLOSE = 415,                /* DELCLOSE  */
    INSOPEN = 416,                 /* INSOPEN  */
    INSCLOSE = 417,                /* INSCLOSE  */
    MAPOPEN = 418,                 /* MAPOPEN  */
    MAPCLOSE = 419,                /* MAPCLOSE  */
    AREAOPEN = 420,                /* AREAOPEN  */
    AREACLOSE = 421,               /* AREACLOSE  */
    CONTENT = 422,                 /* CONTENT  */
    NOSCRIPTOPEN = 423,            /* NOSCRIPTOPEN  */
    NOSCRIPTCLOSE = 424,           /* NOSCRIPTCLOSE  */
    PARAMOPEN = 425,               /* PARAMOPEN  */
    PARAMCLOSE = 426,              /* PARAMCLOSE  */
    OBJECTOPEN = 427,              /* OBJECTOPEN  */
    OBJECTCLOSE = 428,             /* OBJECTCLOSE  */
    TEXTAREAOPEN = 429,            /* TEXTAREAOPEN  */
    TEXTAREACLOSE = 430,           /* TEXTAREACLOSE  */
    LABELOPEN = 431,               /* LABELOPEN  */
    LABELCLOSE = 432,              /* LABELCLOSE  */
    OPTGROUPOPEN = 433,            /* OPTGROUPOPEN  */
    OPTGROUPCLOSE = 434,           /* OPTGROUPCLOSE  */
    SOPEN = 435,                   /* SOPEN  */
    SCLOSE = 436,                  /* SCLOSE  */
    SPANOPEN = 437,                /* SPANOPEN  */
    SPANCLOSE = 438,               /* SPANCLOSE  */
    STRIKEOPEN = 439,              /* STRIKEOPEN  */
    STRIKECLOSE = 440,             /* STRIKECLOSE  */
    TTOPEN = 441,                  /* TTOPEN  */
    TTCLOSE = 442,                 /* TTCLOSE  */
    ABBRATTR = 443,                /* ABBRATTR  */
    ACCEPTCHARSETATTR = 444,       /* ACCEPTCHARSETATTR  */
    ACCEPTATTR = 445,              /* ACCEPTATTR  */
    ACCESSKEYATTR = 446,           /* ACCESSKEYATTR  */
    ACTIONATTR = 447,              /* ACTIONATTR  */
    ALIGNATTR = 448,               /* ALIGNATTR  */
    ALINKATTR = 449,               /* ALINKATTR  */
    ALTATTR = 450,                 /* ALTATTR  */
    AXISATTR = 451,                /* AXISATTR  */
    BACKGROUNDATTR = 452,          /* BACKGROUNDATTR  */
    BGCOLORATTR = 453,             /* BGCOLORATTR  */
    BORDERATTR = 454,              /* BORDERATTR  */
    CELLPADDINGATTR = 455,         /* CELLPADDINGATTR  */
    CELLSPACINGATTR = 456,         /* CELLSPACINGATTR  */
    CHARATTR = 457,                /* CHARATTR  */
    CHAROFFATTR = 458,             /* CHAROFFATTR  */
    CHARSETATTR = 459,             /* CHARSETATTR  */
    CHECKEDATTR = 460,             /* CHECKEDATTR  */
    CLASSATTR = 461,               /* CLASSATTR  */
    CLEARATTR = 462,               /* CLEARATTR  */
    COLORATTR = 463,               /* COLORATTR  */
    COLSATTR = 464,                /* COLSATTR  */
    COLSPANATTR = 465,             /* COLSPANATTR  */
    COMPACTATTR = 466,             /* COMPACTATTR  */
    COORDSATTR = 467,              /* COORDSATTR  */
    DIRATTR = 468,                 /* DIRATTR  */
    DISABLEDATTR = 469,            /* DISABLEDATTR  */
    ENCTYPEATTR = 470,             /* ENCTYPEATTR  */
    FACEATTR = 471,                /* FACEATTR  */
    FRAMEATTR = 472,               /* FRAMEATTR  */
    FRAMEBORDERATTR = 473,         /* FRAMEBORDERATTR  */
    HEADERSATTR = 474,             /* HEADERSATTR  */
    HEIGHTATTR = 475,              /* HEIGHTATTR  */
    HREFATTR = 476,                /* HREFATTR  */
    HREFLANGATTR = 477,            /* HREFLANGATTR  */
    HSPACEATTR = 478,              /* HSPACEATTR  */
    IDATTR = 479,                  /* IDATTR  */
    ISMAPATTR = 480,               /* ISMAPATTR  */
    LABELATTR = 481,               /* LABELATTR  */
    LANGATTR = 482,                /* LANGATTR  */
    LINKATTR = 483,                /* LINKATTR  */
    LONGDESCATTR = 484,            /* LONGDESCATTR  */
    MARGINHEIGHTATTR = 485,        /* MARGINHEIGHTATTR  */
    MARGINWIDTHATTR = 486,         /* MARGINWIDTHATTR  */
    MAXLENGHTATTR = 487,           /* MAXLENGHTATTR  */
    MEDIAATTR = 488,               /* MEDIAATTR  */
    METHODATTR = 489,              /* METHODATTR  */
    MULTPLEATTR = 490,             /* MULTPLEATTR  */
    NAMEATTR = 491,                /* NAMEATTR  */
    NORESIZEATTR = 492,            /* NORESIZEATTR  */
    NOWRAPATTR = 493,              /* NOWRAPATTR  */
    ONBLURATTR = 494,              /* ONBLURATTR  */
    ONCHANGEATTR = 495,            /* ONCHANGEATTR  */
    ONCLICKATTR = 496,             /* ONCLICKATTR  */
    ONDBCLICKATTR = 497,           /* ONDBCLICKATTR  */
    ONFOCUSATTR = 498,             /* ONFOCUSATTR  */
    ONKEYDOWNATTR = 499,           /* ONKEYDOWNATTR  */
    ONKEYPRESSATTR = 500,          /* ONKEYPRESSATTR  */
    ONKEYUPATTR = 501,             /* ONKEYUPATTR  */
    ONLOADATTR = 502,              /* ONLOADATTR  */
    ONMOUSEDOWNATTR = 503,         /* ONMOUSEDOWNATTR  */
    ONMOUSEMOVEATTR = 504,         /* ONMOUSEMOVEATTR  */
    ONMOUSEOUTATTR = 505,          /* ONMOUSEOUTATTR  */
    ONMOUSEOVERATTR = 506,         /* ONMOUSEOVERATTR  */
    ONMOUSEUPATTR = 507,           /* ONMOUSEUPATTR  */
    ONRESETATTR = 508,             /* ONRESETATTR  */
    ONSELECTATTR = 509,            /* ONSELECTATTR  */
    ONSUBMITATTR = 510,            /* ONSUBMITATTR  */
    ONUNLOADATTR = 511,            /* ONUNLOADATTR  */
    PROFILEATTR = 512,             /* PROFILEATTR  */
    READONLYATTR = 513,            /* READONLYATTR  */
    RELATTR = 514,                 /* RELATTR  */
    REVATTR = 515,                 /* REVATTR  */
    ROWSATTR = 516,                /* ROWSATTR  */
    ROWSPANATTR = 517,             /* ROWSPANATTR  */
    RULESATTR = 518,               /* RULESATTR  */
    SCOPEATTR = 519,               /* SCOPEATTR  */
    SCROLLINGATTR = 520,           /* SCROLLINGATTR  */
    SELECTEDATTR = 521,            /* SELECTEDATTR  */
    SHAPEATTR = 522,               /* SHAPEATTR  */
    SIZEATTR = 523,                /* SIZEATTR  */
    SRCATTR = 524,                 /* SRCATTR  */
    STARTATTR = 525,               /* STARTATTR  */
    STYLEATTR = 526,               /* STYLEATTR  */
    SUMMARYATTR = 527,             /* SUMMARYATTR  */
    TABINDEXATTR = 528,            /* TABINDEXATTR  */
    TARGETATTR = 529,              /* TARGETATTR  */
    TEXTATTR = 530,                /* TEXTATTR  */
    TITLEATTR = 531,               /* TITLEATTR  */
    TYPEATTR = 532,                /* TYPEATTR  */
    USEMAPATTR = 533,              /* USEMAPATTR  */
    VALIGNATTR = 534,              /* VALIGNATTR  */
    VALUEATTR = 535,               /* VALUEATTR  */
    VLINKATTR = 536,               /* VLINKATTR  */
    VSPACEATTR = 537,              /* VSPACEATTR  */
    WIDTHATTR = 538                /* WIDTHATTR  */
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
