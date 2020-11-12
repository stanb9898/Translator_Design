#include <stdio.h>
//#include "symbols.h"
#include "html.tab.h"
#include <errno.h>

extern FILE * yyin;
//extern int yylex(void);
extern int yyparse(void);
extern int yydebug;


const char* lexUnits[] = { "ENDTAG",
							"BODYOPEN",
							"BODYCLOSE",
							"FRAMEOPEN",
							"FRAMECLOSE",
							"FRAMESETOPEN",
							"FRAMESETCLOSE",
							"NOFRAMESOPEN",
							"NOFRAMESCLOSE",
							"FORMOPEN",
							"FORMCLOSE",
							"INPUTOPEN",
							"INPUTCLOSE",
							"SELECTOPEN",
							"SELECTCLOSE",
							"OPTIONOPEN",
							"OPTIONCLOSE",
							"TABLEOPEN",
							"TABLECLOSE",
							"UOPEN",
							"UCLOSE",
							"SMALLOPEN",
							"SMALLCLOSE",
							"SUPOPEN",
							"SUPCLOSE",
							"SUBOPEN",
							"SUBCLOSE",
							"CENTEROPEN",
							"CENTERCLOSE",
							"FONTOPEN",
							"FONTCLOSE",
							"H1OPEN",
							"H1CLOSE",
							"H2OPEN",
							"H2CLOSE",
							"H3OPEN",
							"H3CLOSE",
							"H4OPEN",
							"H4CLOSE",
							"H5OPEN",
							"H5CLOSE",
							"H6OPEN",
							"H6CLOSE",
							"HROPEN",
							"HRCLOSE",
							"TROPEN",
							"TRCLOSE",
							"TDOPEN",
							"TDCLOSE",
							"THOPEN",
							"THCLOSE",
							"THEADOPEN",
							"THEADCLOSE",
							"TBODYOPEN",
							"TBODYCLOSE",
							"IMGOPEN",
							"IMGCLOSE",
							"AOPEN",
							"ACLOSE",
							"ULOPEN",
							"ULCLOSE",
							"LIOPEN",
							"LICLOSE",
							"OLOPEN",
							"OLCLOSE",
							"POPEN",
							"PCLOSE",
							"IOPEN",
							"ICLOSE",
							"BROPEN",
							"BRCLOSE",
							"LINKOPEN",
							"LINKCLOSE",

							"ABBRATTR",
							"ACCEPTCHARSETATTR",
							"ACCEPTATTR",
							"ACCESSKEYATTR",
							"ACTIONATTR",
							"ALIGNATTR",
							"ALINKATTR",
							"ALTATTR",
							"AXISATTR",
							"BACKGROUNDATTR",
							"BGCOLORATTR",
							"BORDERATTR",
							"CELLPADDINGATTR",
							"CELLSPACINGATTR",
							"CHARATTR",
							"CHAROFFATTR",
							"CHARSETATTR",
							"CHECKEDATTR",
							"CLASSATTR",
							"CLEARATTR",
							"COLORATTR",
							"COLSATTR",
							"COLSPANATTR",
							"COMPACTATTR",
							"COORDSATTR",
"DIRATTR",
"DISABLEDATTR",
"ENCTYPEATTR",
"FACEATTR",
"FRAMEATTR",
"FRAMEBORDERATTR",
"HEADERSATTR",
"HEIGHTATTR",
"HREFATTR",
"HREFLANGATTR",
"HSPACEATTR",
"IDATTR",
"ISMAPATTR",
"LABELATTR",
"LANGATTR",
"LINKATTR",
"LONGDESCATTR",
"MARGINHEIGHTATTR",
"MARGINWIDTHATTR",
"MAXLENGHTATTR",
"MEDIAATTR",
"METHODATTR",
"MULTPLEATTR",
"NAMEATTR",
"NORESIZEATTR",
"NOWRAPATTR",
"ONBLURATTR",
"ONCHANGEATTR",
"ONCLICKATTR",
"ONDBCLICKATTR",
"ONFOCUSATTR",
"ONKEYDOWNATTR"
"ONKEYPRESSATTR",
"ONKEYUPATTR",
"ONLOADATTR",
"ONMOUSEDOWNATTR",
"ONMOUSEMOVEATTR",
"ONMOUSEOUTATTR",
"ONMOUSEOVERATTR",
"ONMOUSEUPATTR",
"ONRESETATTR",
"ONSELECTATTR",
"ONSUBMITATTR",
"ONUNLOADATTR",
"PROFILEATTR",
"READONLYATTR",
"RELATTR",
"REVATTR",
"ROWSATTR",
"ROWSPANATTR",
"RULESATTR",
"SCOPEATTR",
"SCROLLINGATTR",
"SELECTEDATTR",
"SHAPEATTR",
"SIZEATTR",
"SRCATTR",
"STARTATTR",
"STYLEATTR",
"SUMMARYATTR",
"TABINDEXATTR",
"TARGETATTR",
"TEXTATTR",
"TITLEATTR",
"TYPEATTR",
"USEMAPATTR",
"VALIGNATTR",
"VALUEATTR",
"VLINKATTR",
"VSPACEATTR",
"WIDTHATTR",
"HTMLOPEN",
"HTMLCLOSE",

							"END_OF_INSTRUCTION" };

int main()
{
	{
		yydebug = 1;
		int tokenValue = 0;
		yyin = fopen("input.csrc", "rt");
		if (yyin != NULL)
		{
			int result = yyparse();
			switch (result)
			{
			case 0:
				printf("Parse successfull. \n");
				break;
			case 1:
				printf("Invalid input encountered \n");
				break;
			case 2:
				printf("Out of memory \n");
				break;
			default:
				break;
			}

			fclose(yyin);
		}
		else
		{
			printf("Fisier inexistent");
		}
	}


}