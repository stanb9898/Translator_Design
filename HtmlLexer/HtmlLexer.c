// SimpleCLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "symbols.h"
#include <errno.h>

extern FILE* yyin;
extern int yylex(void);

const char* lexUnits[] = { 
							"BODYOPEN",
							"BODYCLOSE",
							"FRAMESETOPEN",
							"FRAMESETCLOSE",
							"FRAMESOPEN",
							"FRAMESCLOSE",
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
							"HNOPEN",
							"HNCLOSE",
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
							"UOPEN",
							"UCLOSE",
							"BROPEN",
							"BRCLOSE",
							"LINKOPEN",
							"LINKCLOSE"

							"END_OF_INSTRUCTION" };

int main()
{
	int tokenValue = 0;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		while ((tokenValue = yylex()) != 0)
		{
			printf(" -> TOKEN ID: %d; Token Value: %s \n", tokenValue, lexUnits[tokenValue]);
		}
	}
	else
	{
		printf("Fisierul de intrare nu poate fi deschis. Eroare: %d", errno);
	}


}

int yylex(void)
{
	return 0;
}
