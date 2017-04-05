#include<stdio.h>
void main()
{
	int a,b,c;	
	printf("enter no of seconds");
	scanf("%d",&a);
	c=a/3600;
	a=a%3600;
	b=a/60;
	a=a%60;
	printf("%d%d%d",c,a,b);
}

