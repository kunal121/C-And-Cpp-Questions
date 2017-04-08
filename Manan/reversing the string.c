#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int i,k=0,l;
char a[20],b[20];
gets(a);
l=strlen(a);
b[l]='\0';
for(i=l-1;i>=0;i--)
{
b[k]=a[i];
//printf("%c",b[k]); 
//puts(b);
k++;
}
puts(b);
}

