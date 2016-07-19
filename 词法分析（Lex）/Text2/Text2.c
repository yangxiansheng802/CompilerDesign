/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 1 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* Text2.c
* C source file generated from Text2.l.
* 
* Date: 06/27/16
* Time: 09:23:11
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\Text2.l"

    #include <stdio.h>
    #include <stdlib.h>
    int count = 0;

#line 46 "Text2.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\Text2.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 16 ".\\Text2.l"
count++;printf("%d\t(1,‘%s’)\n",count,yytext);
#line 167 "Text2.c"
		}
		break;
	case 2:
		{
#line 17 ".\\Text2.l"
count++;printf("%d\t(2,‘%s’)\n",count,yytext);
#line 174 "Text2.c"
		}
		break;
	case 3:
		{
#line 18 ".\\Text2.l"
count++;printf("%d\t(3,‘%s’)\n",count,yytext);
#line 181 "Text2.c"
		}
		break;
	case 4:
		{
#line 19 ".\\Text2.l"
count++;printf("%d\t(4,‘%s’)\n",count,yytext);
#line 188 "Text2.c"
		}
		break;
	case 5:
		{
#line 20 ".\\Text2.l"
count++;printf("%d\t(5,‘%s’)\n",count,yytext);
#line 195 "Text2.c"
		}
		break;
	case 6:
		{
#line 21 ".\\Text2.l"
 /* do    nothing*/ 
#line 202 "Text2.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 251;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 3, 1 },
	{ 3, 1 },
	{ 4, 7 },
	{ 0, 0 },
	{ 3, 3 },
	{ 3, 3 },
	{ 0, 0 },
	{ 21, 10 },
	{ 24, 12 },
	{ 23, 13 },
	{ 25, 14 },
	{ 26, 15 },
	{ 27, 16 },
	{ 20, 9 },
	{ 19, 8 },
	{ 31, 20 },
	{ 32, 21 },
	{ 0, 0 },
	{ 0, 0 },
	{ 33, 22 },
	{ 0, 0 },
	{ 22, 10 },
	{ 0, 23 },
	{ 3, 1 },
	{ 0, 0 },
	{ 3, 1 },
	{ 4, 1 },
	{ 3, 3 },
	{ 0, 0 },
	{ 3, 3 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 4, 1 },
	{ 4, 1 },
	{ 5, 1 },
	{ 4, 1 },
	{ 5, 1 },
	{ 4, 1 },
	{ 21, 10 },
	{ 24, 12 },
	{ 23, 13 },
	{ 25, 14 },
	{ 26, 15 },
	{ 27, 16 },
	{ 20, 9 },
	{ 19, 8 },
	{ 31, 20 },
	{ 32, 21 },
	{ 7, 1 },
	{ 5, 1 },
	{ 33, 22 },
	{ 4, 1 },
	{ 22, 10 },
	{ 0, 23 },
	{ 34, 24 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 13, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 14, 1 },
	{ 8, 1 },
	{ 15, 1 },
	{ 8, 1 },
	{ 16, 1 },
	{ 8, 1 },
	{ 17, 1 },
	{ 18, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 34, 24 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 13, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 14, 1 },
	{ 8, 1 },
	{ 15, 1 },
	{ 8, 1 },
	{ 16, 1 },
	{ 8, 1 },
	{ 17, 1 },
	{ 18, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 8, 1 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 29, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 30, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 29, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 30, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 19, 18 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 8, 30 },
	{ 28, 17 },
	{ 35, 25 },
	{ 36, 26 },
	{ 37, 27 },
	{ 34, 28 },
	{ 38, 29 },
	{ 23, 11 },
	{ 19, 17 },
	{ 37, 31 },
	{ 34, 32 },
	{ 40, 33 },
	{ 41, 35 },
	{ 34, 36 },
	{ 34, 37 },
	{ 42, 38 },
	{ 39, 30 },
	{ 43, 39 },
	{ 19, 17 },
	{ 34, 40 },
	{ 44, 41 },
	{ 34, 42 },
	{ 45, 43 },
	{ 46, 44 },
	{ 37, 45 },
	{ 47, 46 },
	{ 42, 47 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 28, 17 },
	{ 35, 25 },
	{ 36, 26 },
	{ 37, 27 },
	{ 34, 28 },
	{ 38, 29 },
	{ 23, 11 },
	{ 19, 17 },
	{ 37, 31 },
	{ 34, 32 },
	{ 40, 33 },
	{ 41, 35 },
	{ 34, 36 },
	{ 34, 37 },
	{ 42, 38 },
	{ 39, 30 },
	{ 43, 39 },
	{ 19, 17 },
	{ 34, 40 },
	{ 44, 41 },
	{ 34, 42 },
	{ 45, 43 },
	{ 46, 44 },
	{ 37, 45 },
	{ 47, 46 },
	{ 42, 47 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 },
	{ 6, 6 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ 6, -8, 0 },
	{ 1, 0, 0 },
	{ 0, -4, 6 },
	{ 0, 0, 2 },
	{ 0, 0, 3 },
	{ 0, 193, 4 },
	{ 0, -58, 0 },
	{ 17, -50, 5 },
	{ 15, -55, 5 },
	{ 17, -57, 5 },
	{ 8, 110, 5 },
	{ 8, -69, 5 },
	{ 8, -60, 5 },
	{ 8, -71, 5 },
	{ 8, -57, 5 },
	{ 8, -59, 5 },
	{ 18, 118, 5 },
	{ 0, 50, 5 },
	{ 23, 0, 0 },
	{ 23, -55, 0 },
	{ 23, -59, 0 },
	{ 23, -58, 0 },
	{ 30, -50, 1 },
	{ 23, -12, 0 },
	{ 23, 105, 0 },
	{ 23, 120, 0 },
	{ 23, 117, 0 },
	{ 23, 105, 0 },
	{ 30, 115, 0 },
	{ 0, 125, 0 },
	{ 0, 118, 0 },
	{ 0, 116, 0 },
	{ 0, 110, 0 },
	{ 0, 0, 1 },
	{ 0, 127, 0 },
	{ 0, 127, 0 },
	{ 0, 118, 0 },
	{ 0, 121, 0 },
	{ 0, 115, 0 },
	{ 0, 117, 0 },
	{ 0, 133, 0 },
	{ 0, 134, 0 },
	{ 0, 135, 0 },
	{ 0, 137, 0 },
	{ 0, 130, 1 },
	{ 0, 122, 0 },
	{ 0, 126, 0 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 23 ".\\Text2.l"

void main()
{
    printf("词法分析器输出类型说明:\n");
    printf("1：保留字\n");
    printf("2：运算符\n");
    printf("3：分界符\n");
    printf("4：常  数\n");
    printf("5：标识符\n");
    printf("\n");
    yyin=fopen("example.txt","r");
        yylex(); /* start the analysis*/
    fclose(yyin);
    system("PAUSE");/*暂停停,  使DOS窗口停住*/
}
 int yywrap()
{
	return 1;
}
