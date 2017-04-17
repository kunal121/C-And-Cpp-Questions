#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int length=0,i;
    printf("Enter the string ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        length = length + 1;
    }
    printf("%d",length);}
