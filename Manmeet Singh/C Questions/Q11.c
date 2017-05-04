#include<stdio.h>
void main()
{
	intn,c=0,a=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		if(n&1==1)
		{
		c++;
		}
		n=n>>1;
	}
	if(c==1)
		printf("Number %d is Power of 2\n",a);
	else
		printf("Number %d is not Power of 2\n",a);
}
