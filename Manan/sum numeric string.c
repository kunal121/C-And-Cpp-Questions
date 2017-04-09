#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int i,sum=0,a;
char s[10];
scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
if(s[i]>=48 && s[i]<=57)
{
a=(int)s[i]-48;
sum=sum+a;
}
}
printf("%d",sum);
}
