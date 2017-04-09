#include<stdio.h>
#include<string.h>
void main()
{
char s[200];
int i;
printf("Enter the string");
gets(s);
printf("Enter 1 for upper case and 2 for lower case output");
scanf("%d",&i);
switch(i)
{
case 1:	for(i=0;i<strlen(s);i++)
	{
	if(s[i]>=97 && s[i]<=122)
	printf("%c",s[i]-32);
	else
	printf("%c",s[i]);
	}
	break;
case 2:for(i=0;i<strlen(s);i++)
	{
	if(s[i]>=65 && s[i]<=91)
	printf("%c",s[i]+32);
	else
	printf("%c",s[i]);
	}
	break;
}
}
