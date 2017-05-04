#include<stdio.h>
#include<string.h>
void main()
{
int i;
char a[20];
gets(a);
for(i=0;i<strlen(a);i++)
{
if(a[i]==' ')
a[i]=';';
}
puts(a);
}
