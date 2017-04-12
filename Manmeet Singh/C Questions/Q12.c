#include<stdio.h>
void main()
{
	inta,b;
	printf("Enter the numbers to be Swapped\n ");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The swapped values are %d and %d\n",a,b);
}
