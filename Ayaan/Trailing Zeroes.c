#include<stdio.h>
void main()
	{
		int a,count=0;
		printf("Enter the number: ");
		scanf("%d",&a);
		while (a!=0)
			{
			if (a&1)
				break;
			else
				count++;
			a>>=1;
			}
		printf("Number of trailing zeroes: %d\n",count);
	}

