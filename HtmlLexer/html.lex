%{
#include "stdio.h"
#include "html.tab.h"

void count();
%}
alpha [a-zA-Z]
digit [0-9]

url [-a-zA-Z0-9@:%._\+~#=]{1,256}\.[a-zA-Z0-9()]{1,6}\b([-a-zA-Z0-9()@:%_\+.~#?&//=]*)
image [/img/ig]

html_open        (?i:<html>)
html_close       (?i:<\/html>)
head_open		 (?i:<head>)
head_close       (?i:<\/head>)
body_open        (?i:<body>)
body_close       (?i:<\/body>)
title_open       (?i:<title>)
title_close      (?i:<\/title>)
frame_open       (?i:<frame>)
frame_close      (?i:<\/frame>)
frameset_open    (?i:<frameset>)
frameset_close   (?i:<\/frameset>)
noframes_open    (?i:<noframes>)
noframes_close   (?i:<\/noframes>)
form_open        (?i:<form>)
form_close       (?i:<\/form>)
input_open       (?i:<input>)
input_close      (?i:<\/input>)
select_open      (?i:<select>)
select_close     (?i:<\/select>)
option_open      (?i:<option>)
option_close     (?i:<\/option>)
table_open       (?i:<table>)
table_close      (?i:<\/table>)
tr_open          (?i:<tr>)
tr_close         (?i:<\/tr>)
td_open          (?i:<td>)
td_close         (?i:<\/td>)
th_open          (?i:<th>)
th_close         (?i:<\/th>)
thead_open       (?i:<thead>)
thead_close      (?i:<\/thead>)
tbody_open       (?i:<tbody>)
tbody_close      (?i:<\/tbody>)
img_open         (?i:<img>)
img_close        (?i:<\/img>)
a_open           (?i:<a>)
a_close          (?i:<\/a>)
link_open        (?i:<link>)
link_close       (?i:<\/link>)
ul_open          (?i:<ul>)
ul_close         (?i:<\/ul>)
li_open          (?i:<li>)
li_close         (?i:<\/li>)
ol_open          (?i:<ol>)
ol_close         (?i:<\/ol>)
b_open           (?i:<b>)
b_close          (?i:<\/b>)
i_open           (?i:<i>)
i_close          (?i:<\/i>)
u_open           (?i:<u>)
u_close          (?i:<\/u>)
small_open       (?i:<small>)
small_close      (?i:<\/small>)
sup_open         (?i:<sup>)
sup_close        (?i:<\/sup>)
sub_open         (?i:<sub>)
sub_close        (?i:<\/sub>)
center_open      (?i:<center>)
center_close     (?i:<\/center>)
font_open        (?i:<font>)
font_close       (?i:<\/font>)
h1_open          (?i:<h1>)
h1_close         (?i:<\/h1>)
h2_open          (?i:<h2>)
h2_close         (?i:<\/h2>)
h3_open          (?i:<h3>)
h3_close         (?i:<\/h3>)
h4_open          (?i:<h4>)
h4_close         (?i:<\/h4>)
h5_open          (?i:<h5>)
h5_close         (?i:<\/h5>)
h6_open          (?i:<h6>)
h6_close         (?i:<\/h6>)
hr_open          (?i:<hr>)
hr_close         (?i:<\/hr>)
p_open           (?i:<p>)
p_close          (?i:<\/p>)
br_open          (?i:<br>)
br_close         (?i:<\/br>)


abbr_attr                   (?i:abbr=\"[^\"]*\")
acceptcharset_attr          (?i:acceptcharset=\"[^\"]*\")
accept_attr                 (?i:accept=\"[^\"]*\")
accesskey_attr              (?i:accesskey=\"[^\"]*\")
action_attr                 (?i:action=\"[^\"]*\")
align_attr                  (?i:align=\"[^\"]*\")
alink_attr                  (?i:alink=\"[^\"]*\")
alt_attr                    (?i:alt=\"[^\"]*\")
axis_attr                   (?i:axis=\"[^\"]*\")
background_attr             (?i:background=\"[^\"]*\")
bgcolor_attr                (?i:bgcolor=\"[^\"]*\") 
border_attr                 (?i:border=\"[^\"]*\")
cellpadding_attr            (?i:cellpadding=\"[^\"]*\")
cellspacing_attr            (?i:cellspacing=\"[^\"]*\")
char_attr                   (?i:char=\"[^\"]*\")
charoff_attr                (?i:charoff=\"[^\"]*\")
charset_attr                (?i:charset=\"[^\"]*\")
checked_attr                (?i:checked=\"[^\"]*\")
class_attr                  (?i:class=\"[^\"]*\")
clear_attr                  (?i:clear=\"[^\"]*\")
color_attr                  (?i:color=\"[^\"]*\")
cols_attr                   (?i:cols=\"[^\"]*\")
colspan_attr                (?i:colspan=\"[^\"]*\")
compact_attr                (?i:compact=\"[^\"]*\")
coords_attr                 (?i:coords=\"[^\"]*\")
dir_attr                    (?i:dir=\"[^\"]*\")
disabled_attr               (?i:disabled=\"[^\"]*\")
enctype_attr                (?i:enctype=\"[^\"]*\")
face_attr                   (?i:face=\"[^\"]*\")
frame_attr                  (?i:frame=\"[^\"]*\")
frameborder_attr            (?i:frameborder=\"[^\"]*\")
headers_attr                (?i:headers=\"[^\"]*\")
height_attr                 (?i:height=\"[^\"]*\")
href_attr                   (?i:href=\"[^\"]*\")
hreflang_attr               (?i:hreflang=\"[^\"]*\")
hspace_attr                 (?i:hspace=\"[^\"]*\")
id_attr                     (?i:id=\"[^\"]*\")
ismap_attr                  (?i:ismap=\"[^\"]*\")
label_attr                  (?i:label=\"[^\"]*\")
lang_attr                   (?i:lang=\"[^\"]*\")
link_attr                   (?i:link=\"[^\"]*\")
longdesc_attr               (?i:longdesc=\"[^\"]*\")
marginheight_attr           (?i:marginheight=\"[^\"]*\")
marginwidth_attr            (?i:marginwidth=\"[^\"]*\")
maxlenght_attr              (?i:maxlenght=\"[^\"]*\")
media_attr                  (?i:media=\"[^\"]*\")
method_attr                 (?i:method=\"[^\"]*\")
multiple_attr               (?i:multiple=\"[^\"]*\")
name_attr                   (?i:name=\"[^\"]*\")
noresize_attr               (?i:noresize=\"[^\"]*\")
nowrap_attr                 (?i:nowrap=\"[^\"]*\")
onblur_attr                 (?i:onblur=\"[^\"]*\")
onchange_attr               (?i:onchange=\"[^\"]*\")
onclick_attr                (?i:onclick=\"[^\"]*\")
ondbclick_attr              (?i:ondbclick=\"[^\"]*\")
onfocus_attr                (?i:onfocus=\"[^\"]*\")
onkeydown_attr              (?i:onkeydown=\"[^\"]*\")
onkeypress_attr             (?i:onkeypress=\"[^\"]*\")
onkeyup_attr                (?i:onkeyup=\"[^\"]*\")
onload_attr                 (?i:onload=\"[^\"]*\")
onmousedown_attr            (?i:onmousedown=\"[^\"]*\")
onmousemove_attr            (?i:onmousemove=\"[^\"]*\")
onmouseout_attr             (?i:onmouseout=\"[^\"]*\")
onmouseover_attr            (?i:onmouseover=\"[^\"]*\")
onmouseup_attr              (?i:onmouseup=\"[^\"]*\")
onreset_attr                (?i:onreset=\"[^\"]*\")
onselect_attr               (?i:onselect=\"[^\"]*\")
onsubmit_attr               (?i:onsubmit=\"[^\"]*\")
onunload_attr               (?i:onunload=\"[^\"]*\")
profile_attr                (?i:profile=\"[^\"]*\")
readonly_attr               (?i:readonly=\"[^\"]*\")
rel_attr                    (?i:rel=\"[^\"]*\")
rev_attr                    (?i:rev=\"[^\"]*\")
rows_attr                   (?i:rows=\"[^\"]*\")
rowspan_attr                (?i:rowspan=\"[^\"]*\")
rules_attr                  (?i:rules=\"[^\"]*\")
scope_attr                  (?i:scope=\"[^\"]*\")
scrolling_attr              (?i:scrolling=\"[^\"]*\")
selected_attr               (?i:selected=\"[^\"]*\")
shape_attr                  (?i:shape=\"[^\"]*\")
size_attr                   (?i:size=\"[^\"]*\")
src_attr                    (?i:src=\"[^\"]*\")
start_attr                  (?i:start=\"[^\"]*\")
style_attr                  (?i:style=\"[^\"]*\")
summary_attr                (?i:summary=\"[^\"]*\")
tabindex_attr               (?i:tabindex=\"[^\"]*\")
target_attr                 (?i:target=\"[^\"]*\")
text_attr                   (?i:text=\"[^\"]*\")
title_attr                  (?i:title=\"[^\"]*\")
type_attr                   (?i:type=\"[^\"]*\")
usemap_attr                 (?i:usemap=\"[^\"]*\")
valign_attr                 (?i:valign=\"[^\"]*\")
value_attr                  (?i:value=\"[^\"]*\")
vlink_attr                  (?i:vlink=\"[^\"]*\")
vspace_attr                 (?i:vspace=\"[^\"]*\")
width_attr                  (?i:width=\"[^\"]*\")


%%

"@**@"			      { comment(); }

{html_open}         {count(); return(HTMLOPEN); }
{html_close}        {count(); return(HTMLCLOSE); }
{body_open}         {count(); return (BODYOPEN); }
{body_close}        {count(); return (BODYCLOSE); }
{head_open}		    {count(); return (HEADOPEN); }
{head_close}    	{count(); return (HEADCLOSE); }
{frame_open}        {count(); return (FRAMEOPEN); }
{frame_close}       {count(); return (FRAMECLOSE); }
{frameset_open}     {count(); return (FRAMESETOPEN); }
{frameset_close}    {count(); return (FRAMESETCLOSE); }
{noframes_open}     {count(); return (NOFRAMESOPEN); }
{noframes_close}    {count(); return (NOFRAMESCLOSE); }
{form_open}         {count(); return (FORMOPEN); }
{form_close}        {count(); return (FORMCLOSE); }
{input_open}        {count(); return (INPUTOPEN); }
{input_close}       {count(); return (INPUTCLOSE); }
{select_open}       {count(); return (SELECTOPEN); }
{select_close}      {count(); return (SELECTCLOSE); }
{option_open}       {count(); return (OPTIONOPEN); }
{option_close}      {count(); return (OPTIONCLOSE); }
{table_open}        {count(); return (TABLEOPEN); }
{table_close}       {count(); return (TABLECLOSE); }
{tr_open}           {count(); return (TROPEN); }
{tr_close}          {count(); return (TRCLOSE); }
{td_open}           {count(); return (TDOPEN); }
{td_close}          {count(); return (TDCLOSE); }
{th_open}           {count(); return (THOPEN); }
{th_close}          {count(); return (THCLOSE); }
{thead_open}        {count(); return (THEADOPEN); }
{thead_close}       {count(); return (THEADCLOSE); }
{tbody_open}        {count(); return (TBODYOPEN); }
{tbody_close}       {count(); return (TBODYCLOSE); }
{img_open}          {count(); return (IMGOPEN); }
{img_close}         {count(); return (IMGCLOSE); }
{a_open}            {count(); return (AOPEN); }
{a_close}           {count(); return(ACLOSE); }
{link_open}         {count(); return(LINKOPEN); }
{link_close}        {count(); return(LINKCLOSE); }
{ul_open}           {count(); return(ULOPEN); }
{ul_close}          {count(); return(ULCLOSE); }
{li_open}           {count(); return(LIOPEN); }
{li_close}          {count(); return(LICLOSE);}
{ol_open}           {count(); return(OLOPEN); }
{ol_close}          {count(); return(OLCLOSE); }
{b_open}            {count(); return(POPEN); }
{b_close}           {count(); return(PCLOSE); }
{i_open}            {count(); return(IOPEN); }
{i_close}           {count(); return(ICLOSE);}
{u_open}            {count(); return(UOPEN);}
{u_close}           {count(); return(UCLOSE);}
{small_open}        {count(); return(SMALLOPEN); }
{small_close}       {count(); return(SMALLCLOSE); }
{sup_open}          {count(); return(SUPOPEN); }
{sup_close}         {count(); return(SUPCLOSE); }
{sub_open}          {count(); return(SUBOPEN);}
{sub_close}         {count(); return(SUBCLOSE); }
{center_open}       {count(); return(CENTEROPEN); }
{center_close}      {count(); return(CENTERCLOSE); }     
{font_open}         {count(); return(FONTOPEN); }
{font_close}        {count(); return(FONTCLOSE); }
{h1_open}           {count(); return(H1OPEN); }
{h1_close}          {count(); return(H1CLOSE); }
{h2_open}           {count(); return(H2OPEN); }
{h2_close}          {count(); return(H2CLOSE); }
{h3_open}           {count(); return(H3OPEN); }
{h3_close}          {count(); return(H3CLOSE); }
{h4_open}           {count(); return(H4OPEN); }
{h4_close}          {count(); return(H4CLOSE);}
{h5_open}           {count(); return(H5OPEN); }
{h5_close}          {count(); return(H5CLOSE); }
{h6_open}           {count(); return(H6OPEN);}
{h6_close}          {count(); return(H6CLOSE); }
{hr_open}           {count(); return(HROPEN); }
{hr_close}          {count(); return(HRCLOSE); }
{p_open}            {count(); return(POPEN); }
{p_close}           {count(); return(PCLOSE); }
{br_open}           {count(); return(BROPEN); }
{br_close}          {count(); return(BRCLOSE); }


{abbr_attr}                 {count(); return(ABBRATTR); }
{acceptcharset_attr}        {count(); return(ACCEPTCHARSETATTR); }
{accept_attr}               {count(); return(ACCEPTATTR); }
{accesskey_attr}            {count(); return(ACCESSKEYATTR); }
{action_attr}               {count(); return(ACTIONATTR); }
{align_attr}                {count(); return(ALIGNATTR); }
{alink_attr}                {count(); return(ALINKATTR); }
{alt_attr}                  {count(); return(ALTATTR); }
{axis_attr}                 {count(); return(AXISATTR); }
{background_attr}           {count(); return(BACKGROUNDATTR); }
{bgcolor_attr}              {count(); return(BGCOLORATTR); }
{border_attr}               {count(); return(BORDERATTR); }
{cellpadding_attr}          {count(); return(CELLPADDINGATTR); }
{cellspacing_attr}          {count(); return(CELLSPACINGATTR); }
{char_attr}                 {count(); return(CHARATTR); }
{charoff_attr}              {count(); return(CHAROFFATTR); }
{charset_attr}              {count(); return(CHARSETATTR); }
{checked_attr}              {count(); return(CHECKEDATTR); }
{class_attr}                {count(); return(CLASSATTR); }
{clear_attr}                {count(); return(CLEARATTR); }
{color_attr}                {count(); return(COLORATTR); }
{cols_attr}                 {count(); return(COLSATTR); }
{colspan_attr}              {count(); return(COLSPANATTR); }
{compact_attr}              {count(); return(COMPACTATTR); }
{coords_attr}               {count(); return(COORDSATTR); }
{dir_attr}                  {count(); return(DIRATTR); }
{disabled_attr}             {count(); return(DISABLEDATTR); }
{enctype_attr}              {count(); return(ENCTYPEATTR); }
{face_attr}                 {count(); return(FACEATTR); }
{frame_attr}                {count(); return(FRAMEATTR); }
{frameborder_attr}          {count(); return(FRAMEBORDERATTR); }
{headers_attr}              {count(); return(HEADERSATTR); }
{height_attr}               {count(); return(HEIGHTATTR); }
{href_attr}                 {count(); return(HREFATTR); }
{hreflang_attr}             {count(); return(HREFLANGATTR); }
{hspace_attr}               {count(); return(HSPACEATTR); }
{id_attr}                   {count(); return(IDATTR); }
{ismap_attr}                {count(); return(ISMAPATTR); }
{label_attr}                {count(); return(LABELATTR); }
{lang_attr}                 {count(); return(LANGATTR); }
{link_attr}                 {count(); return(LINKATTR); }
{longdesc_attr}             {count(); return(LONGDESCATTR); }
{marginheight_attr}         {count(); return(MARGINHEIGHTATTR); }
{marginwidth_attr}          {count(); return(MARGINWIDTHATTR); }
{maxlenght_attr}            {count(); return(MAXLENGHTATTR); }
{media_attr}                {count(); return(MEDIAATTR); }
{method_attr}               {count(); return(METHODATTR); }
{multiple_attr}             {count(); return(MULTPLEATTR); }
{name_attr}                 {count(); return(NAMEATTR); }
{noresize_attr}             {count(); return(NORESIZEATTR); }
{nowrap_attr}               {count(); return(NOWRAPATTR); }
{onblur_attr}               {count(); return(ONBLURATTR); }
{onchange_attr}             {count(); return(ONCHANGEATTR); }
{onclick_attr}              {count(); return(ONCLICKATTR); }
{ondbclick_attr}            {count(); return(ONDBCLICKATTR); }
{onfocus_attr}              {count(); return(ONFOCUSATTR); }
{onkeydown_attr}            {count(); return(ONKEYDOWNATTR); }
{onkeypress_attr}           {count(); return(ONKEYPRESSATTR); }
{onkeyup_attr}              {count(); return(ONKEYUPATTR); }
{onload_attr}               {count(); return(ONLOADATTR); }
{onmousedown_attr}          {count(); return(ONMOUSEDOWNATTR); }
{onmousemove_attr}          {count(); return(ONMOUSEMOVEATTR); }
{onmouseout_attr}           {count(); return(ONMOUSEOUTATTR); }
{onmouseover_attr}          {count(); return(ONMOUSEOVERATTR); }
{onmouseup_attr}            {count(); return(ONMOUSEUPATTR); }
{onreset_attr}              {count(); return(ONRESETATTR); }
{onselect_attr}             {count(); return(ONSELECTATTR); }
{onsubmit_attr}             {count(); return(ONSUBMITATTR); }
{onunload_attr}             {count(); return(ONUNLOADATTR); }
{profile_attr}              {count(); return(PROFILEATTR); }
{readonly_attr}             {count(); return(READONLYATTR); }
{rel_attr}                  {count(); return(RELATTR); }
{rev_attr}                  {count(); return(REVATTR); }
{rows_attr}                 {count(); return(ROWSATTR); }
{rowspan_attr}              {count(); return(ROWSPANATTR); }
{rules_attr}                {count(); return(RULESATTR); }
{scope_attr}                {count(); return(SCOPEATTR); }
{scrolling_attr}            {count(); return(SCROLLINGATTR); }
{selected_attr}             {count(); return(SELECTEDATTR); }
{shape_attr}                {count(); return(SHAPEATTR); }
{size_attr}                 {count(); return(SIZEATTR); }
{src_attr}                  {count(); return(SRCATTR); }
{start_attr}                {count(); return(STARTATTR); }
{style_attr}                {count(); return(STYLEATTR); }
{summary_attr}              {count(); return(SUMMARYATTR); }
{tabindex_attr}             {count(); return(TABINDEXATTR); }
{target_attr}               {count(); return(TARGETATTR); }
{text_attr}                 {count(); return(TEXTATTR); }
{title_attr}                {count(); return(TITLEATTR); }
{type_attr}                 {count(); return(TYPEATTR); }
{usemap_attr}               {count(); return(USEMAPATTR); }
{valign_attr}               {count(); return(VALIGNATTR); }
{value_attr}                {count(); return(VALUEATTR); }
{vlink_attr}                {count(); return(VLINKATTR); }
{vspace_attr}               {count(); return(VSPACEATTR); }
{width_attr}                {count(); return(WIDTHATTR); }


[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}
int check_type()
{

return(IDENTIFIER);

}