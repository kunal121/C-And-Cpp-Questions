#include<stdio.h>
void main()
{
	int a,i=0,count=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	while (a>0)
		{
		i=a%10;
		a/=10;
		if(i==0)
		count++;
		else
		 break;
		}
	printf("Number of trailing zeroes: %d",count);
}

