#include<stdio.h>


int main()
{
	int a, flag = 0, i;

	printf("Enter a number");
	scanf("%d",&a);

	if(a == 0 || a == 1)
	{
		printf("Neither prime nor composite");
		return 0;
	}
	for(i = 2; i < a/2; i++)
	{
		if(a%i==0)
		{
			flag = 1;
		}
	}
	if(flag == 0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
}	
