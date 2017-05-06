#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
int i, length=0, count=0, last=0;
gets(a);
length= strlen(a);

for (i=0; i<length; i++)
{
     if (a[i] != ' ')
     if (last=0)
        count++;
     else
        last=1;
 else
     last=0;
}
printf("%d",count );
}
