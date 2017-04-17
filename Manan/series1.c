#include<stdio.h>
float fact(int n)
{

	float i,j;
	float sum=0,f=1;

	for(j=1;j<=n;j++)
	{	f=1;
		for(i=j;i>0;i--)
		{
		f=f*i;
		}

	sum=sum+(1/f);
	}
	return sum;
}

void main()
{
	float n;
	float res;
	printf("Enter a no");
	scanf("%f",&n);
	res=fact(n);
	printf("1/1!+1/2!+_ _ _ _ _1/n!=%f\n",res);
}

