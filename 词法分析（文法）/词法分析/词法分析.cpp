/* ʵ��һ  �ʷ����� */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#include <conio.h>
#include <fstream>
#include <iostream>
using namespace std;

#define NULL 0
FILE	*fp;
FILE	*out, *in;
char	ch;
char	filename[50];
char	*keyword[4] = { "IF", "THEN", "ELSE", "GOTO" };
char	*operatornum[4] = { "+", "-", "*", "/" };
char	*comparison[6] = { ">", "<", ">=", "<=", "=", "<>" };
char	*interpunction[5] = { ",", ":", "(", ")" ,";"};
int	x = -1, y = -1, z = -1;

#define Klen	10
#define Ilen	30
#define Clen	40
#define Plen	20
#define Olen	20
#define Llen	10
char	K[Klen][10], P[Plen][2], I[Ilen][20], O[Olen][2];
int	C[Clen], L[Llen];

//��ָ�����͵ı�ʶ�������У������Ӵ��Ƿ����
bool search(char searchstr[],int wordtype)
{
    int i;
    switch ( wordtype )
    {
    case 1:
        for ( i = 0; i <= 3; i++ )
        {
            if ( strcmp( keyword[i], searchstr ) == 0 )
                return(true);
        }
    case 2:
        for ( i = 0; i <= 3; i++ )
        {
            if ( strcmp( operatornum[i], searchstr ) == 0 )
                return(true);
        }
    case 3:
        for ( i = 0; i <= 5; i++ )
        {
            if ( strcmp( comparison[i], searchstr ) == 0 )
                return(true);
        }
    case 4:
        for ( i = 0; i <= 4; i++ )
        {
            if ( strcmp( interpunction[i], searchstr ) == 0 )
                return(true);
        }
    }
    return(false);
}
//������ĸ�������Ǳ�ʶ�����߱���
char letterprocess( char ch )
{
    int	i = -1, j = -1, k, a = 1;
    char	letter[10], temp[10];
    while ( isalnum( ch ) != 0 )
    {
        letter[++i]	= ch;
        ch		= fgetc( fp );
    }
    letter[i + 1] = '\0';
    if ( search( letter, 1 ) )
    {
        printf( "(K,%5s)\n", letter );
        fprintf( out, "(K,%s)\n", letter );
        if ( strcmp( letter, "GOTO" ) == 0 )
        {
            ch = fgetc( fp );
            while ( isdigit( ch ) != 0 )
            {
                temp[++j]	= ch;
                ch		= fgetc( fp );
            }
            temp[j + 1] = '\0';
            printf( "(L,%5s)\n", temp );
            fprintf( out, "(L,%s)\n", temp );
            L[++y] = atoi( temp );
        }
    }
    else
    {
        printf( "(I,%5s)\n", letter );
        fprintf( out, "(I,%s)\n", letter );
        for ( k = 0; k < 10; k++ )
        {
            if ( strcmp( letter, I[k] ) == 0 )
                a = 0;
        }
        if ( a == 1 )
            strcpy( I[++x], letter );
    }
    return(ch);
}
// ��������
char numberprocess( char ch )
{
    int	i = -1, n, temp, a = 1;
    char num[20];
    while ( isdigit( ch ) != 0 )
    {
        num[++i]	= ch;
        ch		= fgetc( fp );
    }
    if ( isalpha( ch ) != 0 )
    {
        while ( isalpha( ch ) != 0 )
        {
            num[++i]	= ch;
            ch		= fgetc( fp );
        }
        num[i + 1] = '\0';
        printf( "�Ƿ���ʶ��: %s\n", num );
        fprintf( out, "�Ƿ���ʶ��: %s\n", num );
    }
    if ( ch == ':' )
    {
        num[i + 1] = '\0';
        printf( "(L,%5s)\n", num );
        fprintf( out, "(L,%s)\n", num );
        L[++y] = atoi( num );
    }
    else
    {
        num[i + 1] = '\0';
        printf( "(C,%5s)\n", num );
        fprintf( out, "(C,%s)\n", num );
        temp = atoi( num );
        for ( n = 0; n < 10; n++ )
        {
            if ( temp == C[n] )
                a = 0;
        }
        if ( a == 1 )
            C[++z] = temp;
    }
    return(ch);
}
// �����������
char otherprocess( char ch )
{
    int	i = -1;
    char	other[10];
    if ( ch == '(' )
    {
        other[++i]	= ch;
        ch		= fgetc( fp );
    }
    while ( isalnum( ch ) == 0 && ch != ' ' && ch != '(' && ch != ')' )
    {
        other[++i]	= ch;
        ch		= fgetc( fp );
    }
    if ( ch == ')' )
    {
        other[++i]	= ch;
        ch		= fgetc( fp );
    }
    other[i + 1] = '\0';
    if ( search( other, 4 ) )
    {
        printf( "(P,%5s)\n", other );
        fprintf( out, "(P,%s)\n", other );
    }
    else if ( search( other, 2 ) || search( other, 3 ) )
    {
        printf( "(O,%5s)\n", other );
        fprintf( out, "(O,%s)\n", other );
    }
    else
    {
        printf( "�Ƿ��ַ�: %s\n", other );
        fprintf( out, "�Ƿ��ַ�: %s\n", other );
    }
    return(ch);
}
// ������ȡ���ո�ͼ������¶�
char process( char ch )
{
    while ( ch == ' ' )
        ch = fgetc( fp );
    return(ch);
}
// Ԥ����
void pro_process( char *buf )
{
    ifstream cinf( filename, ios::in );

    int	i	= 0;
    char	old_ch	= '\0', cur_ch;
    bool	comment = false;
    while ( cinf.read( &cur_ch, sizeof(char) ) )
    {
        switch ( comment )
        {
        case false:
            if ( old_ch == '/' && cur_ch == '*' )
            {
                i--;
                comment = true;
            }
            else
            {
                if ( old_ch == '\\' && cur_ch == '\n' )
                    i--;
                else
                {
                    if ( cur_ch == '\t' || cur_ch == '\r' || cur_ch == '\n' )
                        cur_ch = ' ';
                    if ( old_ch == ' ' && cur_ch == ' ' )
                        i--;
                    buf[i++] = cur_ch;
                }
            }
            break;
        case true:
            if ( old_ch == '*' && cur_ch == '/' )
                comment = false;
        }
        old_ch = cur_ch;
    }
    buf[i++] = '#';
}

//main
int main()
{
    char	str;
    char	buf[4048]	= { '\0' };
    int	i		= 0;

    out	= fopen( "��Ԫʽ��.txt", "w" );
    in	= fopen( "Ԥ����.txt", "w" );
    printf( "������Դ�ļ�·��������:" );

    scanf( "%s", filename );
    printf( "**********************************�ʷ���������**********************************\n" );
    printf( "K:�ؼ��� I:��ʶ�� C:���� O:����� P:��� L:���\n" );

    if ( (fp = fopen( filename, "rt" ) ) == NULL )
        printf( "Դ�ļ��޷���!\n" );
    else
    {
        pro_process( buf );

        while ( buf[i] != '#' )
        {
            fputc( buf[i], in );
            i++;
        }
        fputc( '#', in );
        fclose( in );

        fp	= fopen( "Ԥ����.txt", "r" );
        str	= fgetc( fp );
        while ( str != '#' )
        {
            str = process( str );
            if ( isalpha( str ) != 0 )
                str = letterprocess( str );
            else
            {
                if ( isdigit( str ) != 0 )
                    str = numberprocess( str );
                else
                    str = otherprocess( str );
            }
        }
        printf( "�����������ڶ�Ԫʽ��.txt�ļ���,��򿪲鿴��\n" );
        printf( "�ʷ���������!\n" );
        fclose( out );
        fclose( fp );
    }
    system( "pause" );
    return 0;
}
