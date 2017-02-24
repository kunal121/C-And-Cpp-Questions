/*
    Program to add a string between another string.
*/
#include<stdio.h>
#include<string.h>
void main()
{
    int pos,i;
    char str1[100];
    char str2[100],str3[100],str4[100];
    printf("Enter string one: ");
    gets(str1);
    printf("Enter string two: ");
    gets(str2);
    printf("Enter position: ");
    scanf("%d",&pos);
    for(i=0;i<pos;i++)
    {
        str3[i] = str1[i];
    }
    str3[i]='\0';
    for(i=pos;i<strlen(str1);i++)
    {
        str4[i-pos] = str1[i];
    }
    str4[i-pos]='\0';
    strcat(str3,str2);
    strcat(str3,str4);

    puts(str3);

}
