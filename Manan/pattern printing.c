#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<i+1;k++)
		{
			printf("%d",k);
		}
	printf("\n");
	}
}
