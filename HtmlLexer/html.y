 %{
 #include "stdio.h"
 int yyerror(char * s);
 extern int yylex(void);
%}

%token HTMLOPEN
%token HTMLDOCUMENT
%token HEADOPEN
%token TITLEOPEN
%token BODYOPEN 
%token STYLEOPEN
%token BODYCONTENT
%token HEADING
%token H1OPEN
%token H2OPEN 
%token H3OPEN 
%token H4OPEN 
%token H5OPEN 
%token H6OPEN 
%token FRAMEOPEN 
%token FRAMESETOPEN 
%token NOFRAMESOPEN 
%token FORMOPEN 
%token INPUTOPEN 
%token SELECTOPEN 
%token OPTIONOPEN 
%token TABLEOPEN 
%token TROPEN 
%token TDOPEN 
%token THOPEN 
%token THEADOPEN 
%token TBODYOPEN 
%token IMGOPEN 
%token AOPEN 
%token LINKOPEN 
%token ULOPEN 
%token LIOPEN 
%token OLOPEN 
%token BOPEN 
%token IOPEN 
%token UOPEN 
%token SMALLOPEN 
%token SUPOPEN 
%token SUBOPEN 
%token CENTEROPEN 
%token FONTOPEN 
%token HROPEN 
%token POPEN 
%token BROPEN 
%token IDENTIFIER
%token TEXT
%token ISINDEX
%token BASEFONTOPEN
%token BLOCKQUOTEOPEN
%token DIROPEN
%token DIVOPEN
%token DLOPEN
%token LISTINGOPEN
%token MENUOPEN
%token MULTICOLOPEN
%token NOBROPEN
%token XMPOPEN
%token DTOPEN
%token DDOPEN
%token LITERALTEXT
%token PREOPEN
%token FLOW
%token BR
%token HR
%token IMG
%token SCRIPTOPEN
%token PLAINTEXT
 %token HEADCLOSE
%token TITLECLOSE
%token STYLECLOSE
 %token BODYCLOSE
%token H1CLOSE
%token H2CLOSE
%token H3CLOSE   
%token H4CLOSE 
%token H5CLOSE 
%token H6CLOSE
%token FRAMECLOSE  
%token FRAMESETCLOSE 
%token NOFRAMESCLOSE 
%token FORMCLOSE 
%token INPUTCLOSE 
%token SELECTCLOSE
%token OPTIONCLOSE 
%token TABLECLOSE 
%token TRCLOSE 
%token TDCLOSE 
%token THCLOSE 
%token THEADCLOSE
%token TBODYCLOSE 
%token IMGCLOSE 
%token ACLOSE 
%token LINKCLOSE 
%token ULCLOSE 
%token LICLOSE 
%token OLCLOSE 
%token BCLOSE
%token ICLOSE 
%token UCLOSE 
%token SMALLCLOSE 
%token SUPCLOSE 
%token SUBCLOSE
%token CENTERCLOSE
%token FONTCLOSE  
%token HRCLOSE  
%token PCLOSE 
%token BRCLOSE 
%token BASEFONTCLOSE
%token BLOCKQUOTECLOSE
%token DIRCLOSE
%token DIVCLOSE
%token DLCLOSE 
%token LISTINGCLOSE
%token MENUCLOSE
%token MULTICOLCLOSE
%token NOBRCLOSE
%token XMPCLOSE
%token DTCLOSE
%token DDCLOSE
%token PRECLOSE
%token SCRIPTCLOSE
%token HTMLCLOSE
%token ABBRATTR
%token ACCEPTCHARSETATTR
%token ACCEPTATTR
%token ACCESSKEYATTR
%token ACTIONATTR
%token ALIGNATTR
%token ALINKATTR
%token ALTATTR
%token AXISATTR
%token BACKGROUNDATTR
%token BGCOLORATTR
%token BORDERATTR
%token CELLPADDINGATTR
%token CELLSPACINGATTR
%token CHARATTR
%token CHAROFFATTR
%token CHARSETATTR
%token CHECKEDATTR
%token CLASSATTR
%token CLEARATTR
%token COLORATTR
%token COLSATTR
%token COLSPANATTR
%token COMPACTATTR
%token COORDSATTR
%token DIRATTR
%token DISABLEDATTR
%token ENCTYPEATTR
%token FACEATTR
%token FRAMEATTR
%token FRAMEBORDERATTR
%token HEADERSATTR
%token HEIGHTATTR
%token HREFATTR
%token HREFLANGATTR
%token HSPACEATTR
%token IDATTR
%token ISMAPATTR
%token LABELATTR
%token LANGATTR
%token LINKATTR
%token LONGDESCATTR
%token MARGINHEIGHTATTR
%token MARGINWIDTHATTR
%token MAXLENGHTATTR
%token MEDIAATTR
%token METHODATTR
%token MULTPLEATTR
%token NAMEATTR
%token NORESIZEATTR
%token NOWRAPATTR
%token ONBLURATTR
%token ONCHANGEATTR
%token ONCLICKATTR
%token ONDBCLICKATTR
%token ONFOCUSATTR
%token ONKEYDOWNATTR
%token ONKEYPRESSATTR
%token ONKEYUPATTR
%token ONLOADATTR
%token ONMOUSEDOWNATTR
%token ONMOUSEMOVEATTR
%token ONMOUSEOUTATTR
%token ONMOUSEOVERATTR
%token ONMOUSEUPATTR
%token ONRESETATTR
%token ONSELECTATTR
%token ONSUBMITATTR
%token ONUNLOADATTR
%token PROFILEATTR
%token READONLYATTR
%token RELATTR
%token REVATTR
%token ROWSATTR
%token ROWSPANATTR
%token RULESATTR
%token SCOPEATTR
%token SCROLLINGATTR
%token SELECTEDATTR
%token SHAPEATTR
%token SIZEATTR
%token SRCATTR
%token STARTATTR
%token STYLEATTR
%token SUMMARYATTR
%token TABINDEXATTR
%token TARGETATTR
%token TEXTATTR
%token TITLEATTR
%token TYPEATTR
%token USEMAPATTR
%token VALIGNATTR
%token VALUEATTR
%token VLINKATTR
%token VSPACEATTR
%token WIDTHATTR
  
%start htmldocument
%%

htmldocument
    : html_tag
    ;

html_tag
    : HTMLOPEN   
      html_content  
      HTMLCLOSE
    ;

    html_content
    : head_tag body_tag 
    | head_tag frameset_tag
    ;

    head_tag
    : HEADOPEN   
    head_content 
    HEADCLOSE
    ;

    head_content
    : 
    | style_tag 
    | title_tag 
    | script_tag 
    ;

    title_tag
    : TITLEOPEN 
    |text 
    TITLECLOSE
    ;

    body_tag
    : BODYOPEN body_content 
      BODYCLOSE
     ;

    body_content
    : HR
    | heading
    | block 
    | text 
    ;
    
    heading
    : h1
    | h2
    | h3
    | h4
    | h5
    | h6
    ;
   
    h1
    : H1OPEN text 
    | H1CLOSE
    ;

    h2
    : H2OPEN text 
    | H2CLOSE
    ;

    h3
    : H3OPEN  text 
    | H3CLOSE
    ;

    h4
    : H4OPEN  text 
    | H4CLOSE
    ;

    h5
    : H5OPEN  text 
    | H5CLOSE
    ;

    h6
    : H6OPEN  text 
    | H6CLOSE
    ;
    
    script_tag
    : SCRIPTOPEN 
    |text 
    SCRIPTCLOSE
    ;

   frameset_tag
    : FRAMESETOPEN 
    |frameset_content 
    FRAMESETCLOSE
    ;

    frameset_content
    : NOFRAMESOPEN 
    |noframe_tag 
    NOFRAMESCLOSE
    ; 
    
    noframe_tag
    : NOFRAMESOPEN 
    |body_content 
    NOFRAMESCLOSE
    ;

    a_tag
    : AOPEN 
    |a_content 
    ACLOSE 
    ;

    a_content
    : heading text
    ;

    block
    : block_content
    ;
    
    block_content
    : 
    | basefont_tag 
    | blockquote_tag 
    | center_tag 
    | dir_tag 
    | div_tag 
    | dl_tag 
    | form_tag 
    | listing_tag 
    | menu_tag 
    | multicol_tag 
    | nobr_tag 
    | ol_tag 
    | p_tag 
    | pre_tag 
    | table_tag 
    | ul_tag 
    | xmp_tag 
    ;
    
    basefont_tag
    :
    BASEFONTOPEN 
    | body_content 
    BASEFONTCLOSE
    ;
    
    blockquote_tag
    :
    BLOCKQUOTEOPEN 
    | body_content 
    BLOCKQUOTECLOSE
    ;

    center_tag
    : CENTEROPEN 
    | body_content 
    CENTERCLOSE
    ;

    dir_tag
    : DIROPEN 
    | li_tag 
    DIRCLOSE
    ;

    div_tag
    : DIVOPEN 
    | body_content 
    DIVCLOSE
    ;

    dl_tag
    : DLOPEN 
    | dl_content 
    DLCLOSE
    ;
    
    dl_content
    : dt_tag dd_tag
    ;

    dt_tag
    : DTOPEN 
    | text 
    DTCLOSE
    ;

    dd_tag
    : DDOPEN 
    | flow 
    DDCLOSE
    ;

    flow
    : flow_content

    flow_content
    : block
    | text
    ;

    form_tag
    : FORMOPEN 
    |form_content 
    FORMCLOSE
    ;

    form_content
    : INPUTOPEN 
    | body_content 
    | select_tag 
    INPUTCLOSE
    ;


    listing_tag
    : LISTINGOPEN 
    | body_content 
    LISTINGCLOSE
    ;

    menu_tag
    : MENUOPEN 
    | li_tag 
    MENUCLOSE
    ;

    multicol_tag
    : MULTICOLOPEN 
    | body_content 
    MULTICOLCLOSE
    ;

    nobr_tag
    : NOBROPEN 
    |text 
    NOBRCLOSE
    ;

    xmp_tag
    : XMPOPEN 
    |text 
    XMPCLOSE
    ;
     
     p_tag
     : POPEN 
     | text 
     PCLOSE
     ;

    pre_tag
    : PREOPEN 
    | pre_content 
    PRECLOSE
    ;

    pre_content
    : 
    | BR
    | HR
    | a_tag
    | style_tag
    ;

    select_tag
    :SELECTOPEN 
    |select_content 
    SELECTCLOSE
    ;

    select_content
    : option_tag
    ;

   style_tag
   : STYLEOPEN body_content STYLECLOSE
   ;

    option_tag
    : OPTIONOPEN text OPTIONCLOSE
    ;

    ol_tag
    : OLOPEN 
    |li_tag 
    OLCLOSE
    ;

    li_tag 
    : LIOPEN LICLOSE
    ;

    p_tag
    : POPEN text 
      PCLOSE
    ;

    table_tag
    : TABLEOPEN table_content TABLECLOSE
    ;

    table_content
    : THEADOPEN 
    | TBODYOPEN
    | tr_tag
    | TBODYCLOSE
    ;

    tr_tag
    : TROPEN table_cell TRCLOSE
    ;

    table_cell
    : td_tag
    | th_tag
    ;

    td_tag
    : TDOPEN body_content TDCLOSE
    ;

    th_tag
    : THOPEN body_content THCLOSE
    ;

    ul_tag
    : ULOPEN
    | li_tag
    | ULCLOSE
    ;

    text
    : text_content
    ;

    text_content
    : BR
    | IMG
    | a_tag
    | style
    ;


    style
    : b_tag 
    | font_tag
    | i_tag
    | small_tag
    | sub_tag
    | sup_tag
    ;

    b_tag 
    : BOPEN TEXT BCLOSE
    ;

    font_tag
    : FONTOPEN TEXT FONTCLOSE
    ;

    i_tag
    : IOPEN TEXT ICLOSE
    ;

    small_tag
    : SMALLOPEN TEXT SMALLCLOSE
    ;

    sub_tag
    : SUBOPEN TEXT SUBCLOSE
    ;

    sup_tag
    : SUPOPEN TEXT SUPCLOSE
    ;

 %%
int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  