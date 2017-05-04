#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int length=0,i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        length=length+1;
    }
    for(i=0;i<length;i++)
        a[i]=a[i]+1;
    for(i=0;i<length;i++)
        printf("%c",a[i]);
}
