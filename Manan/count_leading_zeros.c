#include<stdio.h>
void main()
{
	int n,a,c=0;
	printf("Enter a no");
	scanf("%d",&n);
	while(n!=0)
	{		
		c++;
		n=n>>1;
	}
	printf("%d",32-c);
}

