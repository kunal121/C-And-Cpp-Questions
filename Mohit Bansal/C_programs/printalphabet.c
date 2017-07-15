#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char a[100];
    int i,length=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        length=length+1;
    }
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
        {
        }
        if(a[i]>=97 && a[i]<=122)
        {
        }
        else
        {
            a[i]=0;
        }
        i++;
    }
    for(i=0;i<length;i++)
        printf("%c",a[i]);

}
