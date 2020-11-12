%{
 #include "stdio.h"
 int yyerror(char * s);
 extern int yylex(void);
%}

 %token HTMLOPEN
 %token HTMLCLOSE
 %token HTMLDOCUMENT
 %token HEADOPEN
 %token HEADCLOSE
 %token TITLEOPEN
 %token TITLECLOSE
 %token BODYOPEN 
 %token BODYCLOSE 
 %token BODYCONTENT
 %token HEADING
 %token H1CLOSE 
 %token H2OPEN 
 %token H2CLOSE 
 %token H3OPEN 
 %token H3CLOSE 
 %token H4OPEN 
 %token H4CLOSE 
 %token H5OPEN 
 %token H5CLOSE 
 %token H6OPEN 
 %token H6CLOSE 
 %token FRAMEOPEN 
 %token FRAMECLOSE 
 %token FRAMESETOPEN 
 %token FRAMESETCLOSE 
 %token NOFRAMESOPEN 
 %token NOFRAMESCLOSE 
 %token FORMOPEN 
 %token FORMCLOSE 
 %token INPUTOPEN 
 %token INPUTCLOSE 
 %token SELECTOPEN 
 %token SELECTCLOSE 
 %token OPTIONOPEN 
 %token OPTIONCLOSE 
 %token TABLEOPEN 
 %token TABLECLOSE 
 %token TROPEN 
 %token TRCLOSE 
 %token TDOPEN 
 %token TDCLOSE 
 %token THOPEN 
 %token THCLOSE 
 %token THEADOPEN 
 %token THEADCLOSE 
 %token TBODYOPEN 
 %token TBODYCLOSE 
 %token IMGOPEN 
 %token IMGCLOSE 
 %token AOPEN 
 %token ACLOSE 
 %token LINKOPEN 
 %token LINKCLOSE 
 %token ULOPEN 
 %token ULCLOSE 
 %token LIOPEN 
 %token LICLOSE 
 %token OLOPEN 
 %token OLCLOSE 
 %token BOPEN 
 %token BCLOSE 
 %token IOPEN 
 %token ICLOSE 
 %token UOPEN 
 %token UCLOSE 
 %token SMALLOPEN 
 %token SMALLCLOSE 
 %token SUPOPEN 
 %token SUPCLOSE 
 %token SUBOPEN 
 %token SUBCLOSE 
 %token CENTEROPEN 
 %token CENTERCLOSE 
 %token FONTOPEN 
 %token FONTCLOSE 
 %token H1OPEN 
 %token HROPEN 
 %token HRCLOSE 
 %token POPEN 
 %token PCLOSE 
 %token BROPEN 
 %token BRCLOSE 
 %token IDENTIFIER
 %token TEXT
 %token ISINDEX
 %token BASEFONTOPEN
 %token BASEFONTCLOSE
 %token BLOCKQUOTEOPEN
 %token BLOCKQUOTECLOSE
 %token DIROPEN
 %token DIRCLOSE
 %token DIVOPEN
 %token DIVCLOSE
 %token DLOPEN
 %token DLCLOSE 
 %token LISTINGOPEN
 %token LISTINGCLOSE
 %token MENUOPEN
 %token MENUCLOSE
 %token MULTICOLOPEN
 %token MULTICOLCLOSE
 %token NOBROPEN
 %token NOBRCLOSE
 %token XMPOPEN
 %token XMPCLOSE
 %token DTOPEN
 %token DTCLOSE
 %token DDOPEN
 %token DDCLOSE
 %token LITERALTEXT
 %token PREOPEN
 %token PRECLOSE
 %token FLOW
 %token BR
 %token HR
 %token STYLEOPEN
 %token STYLECLOSE
 %token IMG
 %token SCRIPTOPEN
 %token SCRIPTCLOSE
 %token PLAINTEXT
 %token ABBROPEN
 %token ABBRCLOSE
 %token ACRONYMOPEN
 %token ACRONYMCLOSE
 %token ADDRESSOPEN
 %token ADDRESSCLOSE
 %token APPLETOPEN
 %token APPLETCLOSE
 %token BDOOPEN
 %token BDOCLOSE
 %token BIGOPEN
 %token BIGCLOSE
 %token CAPTIONOPEN
 %token CAPTIONCLOSE
 %token COLGROUPOPEN
 %token COLGROUPCLOSE
 %token COLOPEN
 %token COLCLOSE
 %token CODEOPEN
 %token CODECLOSE
 %token DFNOPEN
 %token DFNCLOSE
 %token KBDOPEN
 %token KBDCLOSE
 %token QOPEN
 %token QCLOSE
 %token STRONGOPEN
 %token STRONGCLOSE
 %token EMOPEN
 %token EMCLOSE
 %token FIELDSETOPEN
 %token FIELDSETCLOSE
 %token LEGENDOPEN
 %token LEGENDCLOSE
 %token DELOPEN
 %token DELCLOSE
 %token INSOPEN
 %token INSCLOSE
 %token MAPOPEN
 %token MAPCLOSE
 %token AREAOPEN
 %token AREACLOSE
 %token CONTENT
 %token NOSCRIPTOPEN
 %token NOSCRIPTCLOSE
 %token PARAMOPEN
 %token PARAMCLOSE
 %token OBJECTOPEN
 %token OBJECTCLOSE
 %token TEXTAREAOPEN
 %token TEXTAREACLOSE
 %token LABELOPEN
 %token LABELCLOSE
 %token OPTGROUPOPEN
 %token OPTGROUPCLOSE
 %token SOPEN
 %token SCLOSE
 %token SPANOPEN
 %token SPANCLOSE
 %token STRIKEOPEN
 %token STRIKECLOSE
 %token TTOPEN
 %token TTCLOSE

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

script_tag
    : SCRIPTOPEN CONTENT 
    SCRIPTCLOSE
    ;

body_tag
    : BODYOPEN body_content 
      BODYCLOSE
    ;

body_content
    : hr_tag
    | heading
	| address_tag
    | block 
	| del_tag
	| ins_tag
	| map_tag
    | text 
    ;

hr_tag
	: HROPEN text 
	HRCLOSE
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

address_tag
	: ADDRESSOPEN address_content 
	  ADDRESSCLOSE
	;
	
address_content
	: p_tag
	| text
	;

p_tag
     : POPEN 
     | text 
     PCLOSE
     ;

del_tag
   : DELOPEN flow
	 DELCLOSE
	;

ins_tag
   : INSOPEN flow
     INSCLOSE
	; 
   
map_tag
   : MAPOPEN map_content 
	 MAPCLOSE
	; 
	
map_content 
	: area_tag
	;
	
area_tag
	: AREAOPEN text 
	  AREACLOSE
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
    : NOFRAMESOPEN body_content 
    NOFRAMESCLOSE
    ;
	
a_tag
    : AOPEN 
    |a_content 
    ACLOSE 
    ;

a_content
    : text
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
    | ol_tag 
    | p_tag 
    | pre_tag 
    | table_tag 
    | ul_tag 
    ;
    
basefont_tag
    : 
	BASEFONTOPEN  body_content 
    BASEFONTCLOSE
    ;
    
blockquote_tag
    :
    BLOCKQUOTEOPEN  body_content 
    BLOCKQUOTECLOSE
    ;

center_tag
    : 
	CENTEROPEN body_content 
    CENTERCLOSE
    ;

dir_tag
    : DIROPEN 
    | li_tag 
    DIRCLOSE
    ;

div_tag
    : DIVOPEN body_content 
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
	| fieldset_tag 
	| label_tag
	| textarea_tag
    | body_content 
    | select_tag 
    INPUTCLOSE
    ;
	
fieldset_tag 
	: FIELDSETOPEN legend_tag form_content 
	  FIELDSETCLOSE
	; 

label_tag
	: LABELOPEN label_content 
	 FORMCLOSE
	; 
	
label_content
	: select_tag
	;


select_tag
    :SELECTOPEN 
    |select_content 
    SELECTCLOSE
    ;

select_content
    : option_tag
	| optgroup_tag
    ;

option_tag
    : OPTIONOPEN CONTENT OPTIONCLOSE
    ;

optgroup_tag
	: OPTGROUPOPEN option_tag
	OPTGROUPCLOSE
	; 

textarea_tag
	: TEXTAREAOPEN CONTENT 
	  TEXTAREACLOSE
	;

abbr_tag
	: ABBROPEN text
	  ABBRCLOSE 
	;
	
acronym_tag
	: ACRONYMOPEN text
	  ACRONYMCLOSE
	;
	
applet_tag 
	: APPLETOPEN applet_content
	  APPLETCLOSE
	;
	
applet_content
	: body_content
	;
	
bdo_tag
	: BDOOPEN body_content
	  BDOCLOSE
	;
	
big_tag
	: BIGOPEN text 
	  BIGCLOSE 
	; 

caption_tag 
	: CAPTIONOPEN body_content
	  CAPTIONCLOSE
	 ;
	 
colgroup_tag 
	: COLGROUPOPEN colgroup_content 
	COLGROUPCLOSE
	;
	
colgroup_content
	: col_tag
	; 
	
col_tag
	: COLOPEN body_content 
	COLCLOSE
	;
	
content_style
	: abbr_tag
	| acronym_tag 
	| code_tag
	| dfn_tag 
	| kbd_tag 
	| q_tag 
	| strong_tag 
	| em_tag
	; 
	
code_tag
	: CODEOPEN text 
	 CODECLOSE
	; 
	
dfn_tag
	: DFNOPEN text 
	  DFNCLOSE
	; 
	 
kbd_tag
	 : KBDOPEN text 
	   KBDCLOSE
	 ;
	
q_tag
	: QOPEN text 
	  QCLOSE 
	; 
	
strong_tag
	: STRONGOPEN text 
	  STRONGCLOSE
	; 
	
em_tag 
	: EMOPEN text 
	  EMCLOSE 
	; 
	
legend_tag
	: LEGENDOPEN text 
	  LEGENDCLOSE
	 ;  
	
noscript_tag 
	: NOSCRIPTOPEN text
	NOSCRIPTCLOSE
	;
	
object_content 
	: PARAMOPEN body_content
	 PARAMCLOSE
	; 
	
object_tag 
	: OBJECTOPEN object_content
	 OBJECTCLOSE
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

pre_tag
    : PREOPEN 
    | pre_content 
    PRECLOSE
    ;

pre_content
    : 
    | br_tag
    | hr_tag
    | a_tag
    | style_tag
    ;
	
br_tag 
	: BROPEN text 
	 BRCLOSE
	; 

style_tag
   : STYLEOPEN CONTENT STYLECLOSE
   ;

ol_tag
    : OLOPEN 
    |li_tag 
    OLCLOSE
    ;
	
physical_style 
	: bdo_tag 
	| big_tag
	| font_tag
	| i_tag
	| s_tag 
	| small_tag
	| span_tag 
	| strike_tag 
	| sub_tag
	| sup_tag
	| tt_tag 
	| u_tag 
	; 
	
s_tag
	: SOPEN text 
	 SCLOSE
	; 
	
span_tag
	: SPANOPEN text
	 SPANCLOSE
	; 
	
strike_tag
	: STRIKEOPEN text 
	  STRIKECLOSE 
	; 
	
tt_tag 
	: TTOPEN text 
	  TTCLOSE
	; 
	
u_tag
	: UOPEN text 
	 UCLOSE
	;
	
li_tag 
    : LIOPEN LICLOSE
    ;

p_tag
    : POPEN text 
      PCLOSE
    ;

table_tag
    : TABLEOPEN caption_tag colgroup_tag table_content TABLECLOSE
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
    : br_tag
    | img_tag 
    | a_tag
    | physical_style
	| content_style
	| applet_tag
	| noscript_tag
	| object_tag
	| CONTENT
    ;
	
img_tag
	: IMGOPEN text 
	IMGCLOSE
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