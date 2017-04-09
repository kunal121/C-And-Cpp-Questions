#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int i,s=0,v=0,l=0,sent=0;
char a[20];
printf("Enter a string");
gets(a);
strlwr(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]==' ')
s++;
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
v++;
if(a[i]=='.')
sent++;
}
printf("No of consonants=%d\n",l-s-v);
printf("No of vowels=%d\n",v);
printf("No of blank spaces=%d\n",s);
printf("No of words=%d\n",s+1);
printf("No of lines=%d\n",sent);
}

