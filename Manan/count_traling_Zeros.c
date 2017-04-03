//No of trailing zeros in integer
#include<stdio.h>
void main()
{
	int n,c=0;
	printf("Enter a no");
	scanf("%d",&n);
	while(n!=0)
	{
		if((n % 10) ==0)
		c=c+1;
		n=n/10;
	}
printf("No of trailing zeros\t%d\n",c);
}
