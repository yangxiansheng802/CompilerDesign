//���弯������ͷ�ļ��ͱ�������
 %{
#include <ctype.h>
 #include <stdio.h>
 #include <string.h>
#include <stdlib.h>
int lineno=1;//�����к�
%}
//����������ʽ
letter [A-Za-z]
//��ĸ
 digit [0-9]
//���� 
id ({letter}|[_])({letter}|{digit}|[_])*
//��ͷΪ��ĸ�ı�
error_id ({digit})+({letter})+  
 //��ͷΪ���ֵĴ����ʶ�� 
num {digit}+ 
//���ּ���
whitespace [ \t]+
//�ո� 
enter [\n]+
 //�س� //����ʶ����� 
%% 
//ʶ������ 
"int"|"else"|"return"|"void"|"if"|"while"  {Upper(yytext,yyleng); 
printf("%d ��   ",lineno);  //��ӡ�к� 
printf("%s            reserved word\n",yytext);}//��������� //ʶ������ 
{num}  
{printf("%d ��   ",lineno);  //��ӡ�к� 
printf("%s            NUM\n",yytext);}//������� //ʶ��ר�÷��� 
","|";"|"("|")"|"{"|"}"|"*"|"/"|"+"|"-"|">"|"<"|">="|"<="|"=="|"!="|"="|"/*"|"*/"  {printf("%d ��   ",lineno); //��ӡ�к� 
printf("%s            special symbol\n",yytext);}//����������

//ʶ���ʶ�� 
{id}
{printf("%d ��   ",lineno);//��ӡ�к� 
 printf("%s           ID\n",yytext);}//��ӡ��ʶ�� //ʶ�����ı�ʶ�� 
{error_id}           
{ printf("%d ��   ",lineno);
printf("error:       %s\n",yytext);}//�����ֿ�ͷ���ַ��Զ����� //ʶ��ո� 
{whitespace}
{/* skip whitespace */}//���Կո� //ʶ��س� 
{enter}
{lineno++;}//�����س��Զ����кź���  
%% 
//ת����Сд
Upper(char *s,int l){
int i; 
for(i=0;i<l;i++){
s[i]=toupper(s[i]);
} 
}
//�������ֱ�Ϊ��д //������ 
main(void) {
//���������ļ�������     
char infilename[400];
printf("�����ļ���:");
 scanf("%s",&infilename); 
yyin = fopen(infilename,"r");//��ȡ�ļ�
printf("��ʼ�ʷ������� \n");
return yylex();
}
