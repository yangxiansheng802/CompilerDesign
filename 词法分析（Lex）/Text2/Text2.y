%{
    #include <stdio.h>
    #include <stdlib.h>
    int count = 0;
%}

delim [" "\n\t]
whitespace {delim}+
operator \+|-|\*|\/|:=|>=|<=|#|=
reservedWord [cC][oO][nN][sS][tT]|[vV][aA][rR]|[pP][rR][oO][cC][eE][dD][uU][rR][eE]|[bB][eE][gG][iI][nN]|[eE][nN][dD]|[iI][fF]|[tT][hH][eE][nN]|[wW][hH][iI][lL][eE]|[dD][oO]|[rR][eE][aA][dD]|[cC][aA][lL][lL]|[wW][rR][iI][tT][eE]|[wW][rR][iI][tT][eE][lL][nN]
delimiter [,\.;]
constant ([0-9])+
identfier [A-Za-z]([A-Za-z][0-9])*
%%
{reservedWord} {count++;printf("%d\t(1,‘%s’)\n",count,yytext);}
{operator} { count++;printf("%d\t(2,‘%s’)\n",count,yytext); }
{delimiter} {count++;printf("%d\t(3,‘%s’)\n",count,yytext);}
{constant} {count++;printf("%d\t(4,‘%s’)\n",count,yytext);}
{identfier} {count++;printf("%d\t(5,‘%s’)\n",count,yytext);}
{whitespace} { /* do    nothing*/ }

%%
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