#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i=0,j;
    printf("enter string");
    gets(a);
    puts(a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;a[j]!='\0';j++)
        {
            a[j]=a[j+1];
        }
    i=i-1;
    puts(a);
    }
}
