#include<stdio.h>
void main()
{
	float d;
	double n;
	printf("Enter the Number to be converted from Double to Float\n");
	scanf("%lf",&n);
	d=(float)n;
	printf("The Float form of %lf Double type is %f\n",n,d);
}
