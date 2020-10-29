%{
#include <stdio.h>
#include "symbols.h"

void count();
%}
alpha [a-zA-Z]
digit [0-9]

url [-a-zA-Z0-9@:%._\+~#=]{1,256}\.[a-zA-Z0-9()]{1,6}\b([-a-zA-Z0-9()@:%_\+.~#?&//=]*)
image [/img/ig]


body_open        [<(B|b)(O|o)(D|d)(Y|y)]
body_close       [<\/(B|b)(O|o)(D|d)(Y|y)>]
frame_open       [<(F|f)(R|r)(A|a)(M|m)(E|e)]
frame_close      [<\/(F|f)(R|r)(A|a)(M|m)(E|e)>]
frameset_open    [<(F|f)(R|r)(A|a)(M|m)(E|e)(S|s)(E|e)(T|t)]
frameset_close   [<\/(F|f)(R|r)(A|a)(M|m)(E|e)(S|s)(E|e)(T|t)>]
noframes_open    [<(N|n)(O|o)(F|f)(R|r)(A|a)(M|m)(E|e)]
noframes_close   [<\/(N|n)(O|o)(F|f)(R|r)(A|a)(M|m)(E|e)>]
form_open        [<(F|f)(O|o)(R|r)(M|m)]
form_close       [<\/(F|f)(O|o)(R|r)(M|m)>]
input_open       [<(I|i)(N|n)(P|p)(U|u)(T|t)]
input_close      [<\/(I|i)(N|n)(P|p)(U|u)(T|t)>]
select_open      [<(S|s)(E|e)(L|l)(E|e)(C|c)(T|t)]
select_close     [<\/(S|s)(E|e)(L|l)(E|e)(C|c)(T|t)>]
option_open      [<(O|o)(P|p)(T|t)(I|i)(O|o)(N|n)]
option_close     [<\/(O|o)(P|p)(T|t)(I|i)(O|o)(N|n)>]
table_open       [<(T|t)(A|a)(B|b)(L|l)(E|e)]
table_close      [<\/(T|t)(A|a)(B|b)(L|l)(E|e)>]
tr_open          [<(T|t)(R|r)]
tr_close         [<\/(T|t)(R|r)>]
td_open          [<(T|t)(D|d)]
td_close         [<\/(T|t)(D|d)>]
th_open          [<(T|t)(H|h)]
th_close         [<\/(T|t)(H|h)>]
thead_open       [<(T|t)(H|h)(R|r)(E|e)(A|a)(D|d)]
thead_close      [<\/(T|t)(H|h)(R|r)(E|e)(A|a)(D|d)>] 
tbody_open       [<(T|t)(B|b)(O|o)(D|d)(Y|y)]
tbody_close      [<\/(T|t)(B|b)(O|o)(D|d)(Y|y)>]
img_open         [<(I|i)(M|m)(G|g)]
img_close        [<\/(I|i)(M|m)(G|g)>]
a_open           [<(A|a)]
a_close          [<\/(A|a)>]
link_open        [<(L|l)(I|i)(N|n)(K|k)]
link_close       [<\/(L|l)(I|i)(N|n)(K|k)>]
ul_open          [<(U|u)(L|l)]
ul_close         [<\/(U|u)(L|l)>]
li_open          [<(L|l)(I|i)]
li_close         [<\/(L|l)(I|i)>]
ol_open          [<(O|o)(L|l)]
ol_close         [<\/(O|o)(L|l)>]
b_open           [<(B|b)]
b_close          [<\/(B|b)>]
i_open           [<(I|i)]
i_close          [<\/(I|i)>]
u_open           [<(U|u)]
u_close          [<\/(U|u)>]
small_open       [<(S|s)(M|m)(A|a)(L|l)(L|l)]
small_close      [<\/(S|s)(M|m)(A|a)(L|l)(L|l)>]
sup_open         [<(S|s)(U|u)(P|p)]
sup_close        [<\/(S|s)(U|u)(P|p)>]
sub_open         [<(S|s)(U|u)(B|b)]
sub_close        [<\/(S|s)(U|u)(B|b)>]
center_open      [<(C|c)(E|e)(N|n)(T|t)(E|e)(R|r)]
center_close     [<\/(C|c)(E|e)(N|n)(T|t)(E|e)(R|r)>]
font_open        [<(F|f)(O|o)(N|n)(T|t)]
font_close       [<\/(F|f)(O|o)(N|n)(T|t)>]
hn_open          [<(H|h)(N|n)]
hn_close         [<\/(H|h)(N|n)>]
hr_open          [<(H|h)(R|r)]
hr_close         [<\/(H|h)(R|r)>]
p_open           [<(P|p)]
p_close          [<\/(P|p)>]
br_open          [<(B|b)(R|r)]
br_close         [<\/(B|b)(R|r)>]



  abbr_attr                   abbr=\"[^\"]*\"
  acceptcharset_attr          acceptcharset=\"[^\"]*\"
  accept_attr                 accept=\"[^\"]*\"
  accesskey_attr              accesskey=\"[^\"]*\"
  action_attr                 action=\"[^\"]*\"
  align_attr                  align=\"[^\"]*\"
  alink_attr                  alink=\"[^\"]*\"
  alt_attr                    alt=\"[^\"]*\"
  axis_attr                   axis=\"[^\"]*\"
  background_attr             background=\"[^\"]*\"
  bgcolor_attr                bgcolor=\"[^\"]*\" 
  border_attr                 border=\"[^\"]*\"
  cellpadding_attr            cellpadding=\"[^\"]*\"
  cellspacing_attr            cellspacing=\"[^\"]*\"
  char_attr                   char=\"[^\"]*\"
  charoff_attr                charoff=\"[^\"]*\" 
  charset_attr                charset=\"[^\"]*\"
  checked_attr                checked=\"[^\"]*\"
  class_attr                  class=\"[^\"]*\"
  clear_attr                  clear=\"[^\"]*\"
  color_attr                  color=\"[^\"]*\"
  cols_attr                   cols=\"[^\"]*\"
  colspan_attr                colspan=\"[^\"]*\"
  compact_attr                compact=\"[^\"]*\"
  coords_attr                 coords=\"[^\"]*\"
  dir_attr                    dir=\"[^\"]*\"
  disabled_attr               disabled=\"[^\"]*\"
  enctype_attr                enctype=\"[^\"]*\"
  face_attr                   face=\"[^\"]*\"
  frame_attr                  frame=\"[^\"]*\"
  frameborder_attr            frameborder=\"[^\"]*\"
  headers_attr                headers=\"[^\"]*\"
  height_attr                 height=\"[^\"]*\"
  href_attr                   href=\"[^\"]*\"
  hreflang_attr               hreflang=\"[^\"]*\"
  hspace_attr                 hspace=\"[^\"]*\"
  id_attr                     id=\"[^\"]*\"
  ismap_attr                  ismap=\"[^\"]*\"
  label_attr                  label=\"[^\"]*\"
  lang_attr                   lang=\"[^\"]*\"
  link_attr                   link=\"[^\"]*\"
  longdesc_attr               longdesc=\"[^\"]*\"
  marginheight_attr           marginheight=\"[^\"]*\"
  marginwidth_attr            marginwidth=\"[^\"]*\"
  maxlenght_attr              maxlenght=\"[^\"]*\"
  media_attr                  media=\"[^\"]*\"
  method_attr                 method=\"[^\"]*\"
  multiple_attr               multiple=\"[^\"]*\"
  name_attr                   name=\"[^\"]*\"
  noresize_attr               noresize=\"[^\"]*\"
  nowrap_attr                 nowrap=\"[^\"]*\"
  onblur_attr                 onblur=\"[^\"]*\"
  onchange_attr               onchange=\"[^\"]*\"
  onclick_attr                onclick=\"[^\"]*\"
  ondbclick_attr              ondbclick=\"[^\"]*\"
  onfocus_attr                onfocus=\"[^\"]*\"
  onkeydown_attr              onkeydown=\"[^\"]*\"
  onkeypress_attr             onkeypress=\"[^\"]*\"
  onkeyup_attr                onkeyup=\"[^\"]*\"
  onload_attr                 onload=\"[^\"]*\"
  onmousedown_attr            onmousedown=\"[^\"]*\"
  onmousemove_attr            onmousemove=\"[^\"]*\"
  onmouseout_attr             onmouseout=\"[^\"]*\"
  onmouseover_attr            onmouseover=\"[^\"]*\"
  onmouseup_attr              onmouseup=\"[^\"]*\"
  onreset_attr                onreset=\"[^\"]*\"
  onselect_attr               onselect=\"[^\"]*\"
  onsubmit_attr               onsubmit=\"[^\"]*\"
  onunload_attr               onunload=\"[^\"]*\"
  profile_attr                profile=\"[^\"]*\"
  readonly_attr               readonly=\"[^\"]*\"
  rel_attr                    rel=\"[^\"]*\"
  rev_attr                    rev=\"[^\"]*\"
  rows_attr                   rows=\"[^\"]*\"
  rowspan_attr                rowspan=\"[^\"]*\"
  rules_attr                  rules=\"[^\"]*\"
  scope_attr                  scope=\"[^\"]*\"
  scrolling_attr              scrolling=\"[^\"]*\"
  selected_attr               selected=\"[^\"]*\"
  shape_attr                  shape=\"[^\"]*\"
  size_attr                   size=\"[^\"]*\"
  src_attr                    src=\"[^\"]*\"
  start_attr                  start=\"[^\"]*\"
  style_attr                  style=\"[^\"]*\"
  summary_attr                summary=\"[^\"]*\"
  tabindex_attr               tabindex=\"[^\"]*\"
  target_attr                 target=\"[^\"]*\"
  text_attr                   text=\"[^\"]*\"
  title_attr                  title=\"[^\"]*\"
  type_attr                   type=\"[^\"]*\"
  usemap_attr                 usemap=\"[^\"]*\"
  valign_attr                 valign=\"[^\"]*\"
  value_attr                  value=\"[^\"]*\"
  vlink_attr                  vlink=\"[^\"]*\"
  vspace_attr                 vspace=\"[^\"]*\"
  width_attr                  width=\"[^\"]*\"

%%
 "@**@"			{ comment(); }
 ">"              {count(); return(ENDTAG); }
  endtag:(  >(?:(?<t>[^<]*))

  "body_open"         {count(); return(BODYOPEN); }
  "body_close"        {count(); return(BODYCLOSE); }
  "frame_open"        {count(); return(FRAMEOPEN); }
  "frame_close"       {count(); return(FRAMECLOSE); }
  "frameset_open"     {count(); return(FRAMESETOPEN); }
  "frameset_close"    {count(); return(FRAMESETCLOSE); }
  "noframes_open"     {count(); return(FRAMESOPEN); }
  "nofromes_close"    {count(); return(FRAMESCLOSE); }
  "form_open"         {count(); return(FORMOPEN); }
  "form_close"        {count(); return(FORMCLOSE); }
  "input_open"        {count(); return(INPUTOPEN); }
  "input_close"       {count(); return(INPUTCLOSE); }
  "select_open"       {count(); return(SELECTOPEN); }
  "select_close"      {count(); return(SELECTCLOSE); }
  "option_open"       {count(); return(OPTIONOPEN); }
  "option_close"      {count(); return(OPTIONCLOSE); }
  "table_open"        {count(); return(TABLEOPEN); }
  "table_close"       {count(); return(TABLECLOSE); }
  "tr_open"           {count(); return(TROPEN); }
  "tr_close"          {count(); return(TRCLOSE); }
  "td_open"           {count(); return(TDOPEN); }
  "td_close"          {count(); return(TDCLOSE); }
  "th_open"           {count(); return(THOPEN); }
  "th_close"          {count(); return(THCLOSE); }
  "thead_open"        {count(); return(THEADOPEN); }
  "thead_close"       {count(); return(THEADCLOSE); }
  "tbody_open"        {count(); return(TBODYOPEN); }
  "tbody_close"       {count(); return(TBODYCLOSE); }
  "img_open"          {count(); return(IMGOPEN); }
  "img_open"          {count(); return(IMGCLOSE); }
  "a_open"            {count(); return(AOPEN); }
  "a_close"           {count(); return(ACLOSE); }
  "link_open"         {count(); return(LINKOPEN); }
  "link_close"        {count(); return(LINKCLOSE); }
  "ul_open"           {count(); return(ULOPEN); }
  "ul_close"          {count(); return(ULCLOSE); }
  "li_open"           {count(); return(LIOPEN); }
  "li_close"          {count(); return(LICLOSE);}
  "ol_open"           {count(); return(OLOPEN); }
  "ol_close"          {count(); return(OLCLOSE); }
  "b_open"            {count(); return(POPEN); }
  "b_close"           {count(); return(PCLOSE); }
  "i_open"            {count(); return(IOPEN); }
  "i_close"           {count(); return(ICLOSE);}
  "u_open"            {count(); return(UOPEN);}
  "u_close"           {count(); return(UCLOSE);}
  "small_open"        {count(); return(SMALLOPEN); }
  "small_close"       {count(); return(SMALLCLOSE); }
  "sup_open"          {count(); return(SUPOPEN); }
  "sup_close"         {count(); return(SUPCLOSE); }
  "sub_open"          {count(); return(SUBOPEN);}
  "sub_close"         {count(); return(SUBCLOSE); }
  "center_open"       {count(); return(CENTEROPEN); }
  "center_close"      {count(); return(CENTERCLOSE); }     
  "font_open"         {count(); return(FONTOPEN); }
  "font_close"        {count(); return(FONTCLOSE); }
  "h1_open"           {count(); return(H1OPEN); }
  "h1_close"          {count(); return(H1CLOSE); }
  "h2_open"           {count(); return(H2OPEN); }
  "h2_close"          {count(); return(H2CLOSE); }
  "h3_open"           {count(); return(H3OPEN); }
  "h3_close"          {count(); return(H3CLOSE); }
  "h4_open"           {count(); return(H4OPEN); }
  "h4_close"          {count(); return(H4CLOSE);}
  "h5_open"           {count(); return(H5OPEN); }
  "h5_close"          {count(); return(H5CLOSE); }
  "h6_open"           {count(); return(H6OPEN);}
  "h6_close"          {count(); return(H6CLOSE); }
  "hr_open"           {count(); return(HROPEN); }
  "hr_close"          {count(); return(HRCLOSE); }
  "p_open"            {count(); return(POPEN); }
  "p_close"           {count(); return(PCLOSE); }
  "br_open"           {count(); return(BROPEN); }
  "br_close"          {count(); return(BRCLOSE); }


  abbr_attr                {count(); return(BRCLOSE); }
  acceptcharset_attr        {count(); return(BRCLOSE); }
  accept_attr               {count(); return(BRCLOSE); }
  accesskey_attr            {count(); return(BRCLOSE); }
  action_attr               {count(); return(BRCLOSE); }
  align_attr                {count(); return(BRCLOSE); }
  alink_attr                {count(); return(BRCLOSE); }
  alt_attr                  {count(); return(BRCLOSE); }
  axis_attr                 {count(); return(BRCLOSE); }
  background_attr           {count(); return(BRCLOSE); }
  bgcolor_attr              {count(); return(BRCLOSE); }
  border_attr               {count(); return(BRCLOSE); }
  cellpadding_attr          {count(); return(BRCLOSE); }
  cellspacing_attr          {count(); return(BRCLOSE); }
  char_attr                 {count(); return(BRCLOSE); }
  charoff_attr              {count(); return(BRCLOSE); }
  charset_attr              {count(); return(BRCLOSE); }
  checked_attr              {count(); return(BRCLOSE); }
  class_attr                {count(); return(BRCLOSE); }
  clear_attr                {count(); return(BRCLOSE); }
  color_attr                {count(); return(BRCLOSE); }
  cols_attr                 {count(); return(BRCLOSE); }
  colspan_attr              {count(); return(BRCLOSE); }
  compact_attr              {count(); return(BRCLOSE); }
  coords_attr               {count(); return(BRCLOSE); }
  dir_attr                  {count(); return(BRCLOSE); }
  disabled_attr             {count(); return(BRCLOSE); }
  enctype_attr              {count(); return(BRCLOSE); }
  face_attr                 {count(); return(BRCLOSE); }
  frame_attr                {count(); return(BRCLOSE); }
  frameborder_attr          {count(); return(BRCLOSE); }
  headers_attr              {count(); return(BRCLOSE); }
  height_attr               {count(); return(BRCLOSE); }
  href_attr                 {count(); return(BRCLOSE); }
  hreflang_attr             {count(); return(BRCLOSE); }
  hspace_attr               {count(); return(BRCLOSE); }
  id_attr                   {count(); return(BRCLOSE); }
  ismap_attr                {count(); return(BRCLOSE); }
  label_attr                {count(); return(BRCLOSE); }
  lang_attr                 {count(); return(BRCLOSE); }
  link_attr                 {count(); return(BRCLOSE); }
  longdesc_attr             {count(); return(BRCLOSE); }
  marginheight_attr         {count(); return(BRCLOSE); }
  marginwidth_attr          {count(); return(BRCLOSE); }
  maxlenght_attr            {count(); return(BRCLOSE); }
  media_attr                {count(); return(BRCLOSE); }
  method_attr               {count(); return(BRCLOSE); }
  multiple_attr             {count(); return(BRCLOSE); }
  name_attr                 {count(); return(BRCLOSE); }
  noresize_attr             {count(); return(BRCLOSE); }
  nowrap_attr               {count(); return(BRCLOSE); }
  onblur_attr               {count(); return(BRCLOSE); }
  onchange_attr             {count(); return(BRCLOSE); }
  onclick_attr              {count(); return(BRCLOSE); }
  ondbclick_attr            {count(); return(BRCLOSE); }
  onfocus_attr              {count(); return(BRCLOSE); }
  onkeydown_attr            {count(); return(BRCLOSE); }
  onkeypress_attr           {count(); return(BRCLOSE); }
  onkeyup_attr              {count(); return(BRCLOSE); }
  onload_attr               {count(); return(BRCLOSE); }
  onmousedown_attr          {count(); return(BRCLOSE); }
  onmousemove_attr          {count(); return(BRCLOSE); }
  onmouseout_attr           {count(); return(BRCLOSE); }
  onmouseover_attr          {count(); return(BRCLOSE); }
  onmouseup_attr            {count(); return(BRCLOSE); }
  onreset_attr              {count(); return(BRCLOSE); }
  onselect_attr             {count(); return(BRCLOSE); }
  onsubmit_attr             {count(); return(BRCLOSE); }
  onunload_attr             {count(); return(BRCLOSE); }
  profile_attr              {count(); return(BRCLOSE); }
  readonly_attr             {count(); return(BRCLOSE); }
  rel_attr                  {count(); return(BRCLOSE); }
  rev_attr                  {count(); return(BRCLOSE); }
  rows_attr                 {count(); return(BRCLOSE); }
  rowspan_attr              {count(); return(BRCLOSE); }
  rules_attr                {count(); return(BRCLOSE); }
  scope_attr                {count(); return(BRCLOSE); }
  scrolling_attr            {count(); return(BRCLOSE); }
  selected_attr             {count(); return(BRCLOSE); }
  shape_attr                {count(); return(BRCLOSE); }
  size_attr                 {count(); return(BRCLOSE); }
  src_attr                  {count(); return(BRCLOSE); }
  start_attr                {count(); return(BRCLOSE); }
  style_attr                {count(); return(BRCLOSE); }
  summary_attr              {count(); return(BRCLOSE); }
  tabindex_attr             {count(); return(BRCLOSE); }
  target_attr               {count(); return(BRCLOSE); }
  text_attr                 {count(); return(BRCLOSE); }
  title_attr                {count(); return(BRCLOSE); }
  type_attr                 {count(); return(BRCLOSE); }
  usemap_attr               {count(); return(BRCLOSE); }
  valign_attr               {count(); return(BRCLOSE); }
  value_attr                {count(); return(BRCLOSE); }
  vlink_attr                {count(); return(BRCLOSE); }
  vspace_attr               {count(); return(BRCLOSE); }
  width_attr                {count(); return(BRCLOSE); }



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