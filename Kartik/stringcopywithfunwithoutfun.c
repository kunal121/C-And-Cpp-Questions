#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],d[100];
    int i,j=0;
    printf("Enter the string\n");
    gets(s);
    printf("String copy (without function) ");
    for(i=0;s[i]!='\0';i++)
    {
        d[i]=s[i];
        printf("%c",d[i]);
    }
    printf("\n");
    strcpy(d,s);
    printf("String copy (with function) ");
    puts(d);
}

