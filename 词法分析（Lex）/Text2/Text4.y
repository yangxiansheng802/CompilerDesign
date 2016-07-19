//定义集，包括头文件和变量定义
 %{
#include <ctype.h>
 #include <stdio.h>
 #include <string.h>
#include <stdlib.h>
int lineno=1;//定义行号
%}
//定义正则表达式
letter [A-Za-z]
//字母
 digit [0-9]
//数字 
id ({letter}|[_])({letter}|{digit}|[_])*
//开头为字母的标
error_id ({digit})+({letter})+  
 //开头为数字的错误标识符 
num {digit}+ 
//数字集合
whitespace [ \t]+
//空格 
enter [\n]+
 //回车 //定义识别规则 
%% 
//识别保留字 
"int"|"else"|"return"|"void"|"if"|"while"  {Upper(yytext,yyleng); 
printf("%d 行   ",lineno);  //打印行号 
printf("%s            reserved word\n",yytext);}//输出保留字 //识别数字 
{num}  
{printf("%d 行   ",lineno);  //打印行号 
printf("%s            NUM\n",yytext);}//输出数字 //识别专用符号 
","|";"|"("|")"|"{"|"}"|"*"|"/"|"+"|"-"|">"|"<"|">="|"<="|"=="|"!="|"="|"/*"|"*/"  {printf("%d 行   ",lineno); //打印行号 
printf("%s            special symbol\n",yytext);}//输出特殊符号

//识别标识符 
{id}
{printf("%d 行   ",lineno);//打印行号 
 printf("%s           ID\n",yytext);}//打印标识符 //识别错误的标识符 
{error_id}           
{ printf("%d 行   ",lineno);
printf("error:       %s\n",yytext);}//以数字开头的字符自动报错 //识别空格 
{whitespace}
{/* skip whitespace */}//忽略空格 //识别回车 
{enter}
{lineno++;}//遇到回车自动加行号忽略  
%% 
//转换大小写
Upper(char *s,int l){
int i; 
for(i=0;i<l;i++){
s[i]=toupper(s[i]);
} 
}
//将保留字变为大写 //主函数 
main(void) {
//定义输入文件名变量     
char infilename[400];
printf("输入文件名:");
 scanf("%s",&infilename); 
yyin = fopen(infilename,"r");//读取文件
printf("开始词法分析： \n");
return yylex();
}
