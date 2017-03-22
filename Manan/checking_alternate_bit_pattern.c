#include<stdio.h>
void alt1(int n)
{int a,f=0;
	while(n!=0)
	{
		a=n;
		if(a&1==1)
		{}
		else
		{
		printf("no does not have alternate bit pattern");
		f=1;
		break;
		}
		n=n>>2;
	}
if(f==0)
printf("No contain altenate bit pattern");
}
void alt0(int n)
{	int f=0,a;
	while(n!=0)
	{
		a=n;
		if(a&1==0)
		{}
		else
		{
		printf("number does not have alternate bit pattern");
		f=1;
		break;
		}
		n=n>>2;
	}
if(f==0)
printf("Number contain alternate bit pattern");
}
void main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n%2==0)
	alt0(n);
	else
	alt1(n);
}

