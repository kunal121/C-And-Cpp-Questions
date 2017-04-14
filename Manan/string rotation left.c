#include<string.h>
#include<stdio.h>
void main()
{
int i,k,l,j;
char s[200],s1[200];
gets(s);
scanf("%d",&k);
l=strlen(s);
j=l;
for(i=k-1;i<j;i++)
	{
	printf("%c",s[i]);
	if(i==l-1)
	{
	i=-1;
	j=k-1;
	}

	}
}

