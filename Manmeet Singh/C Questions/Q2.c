#include<stdio.h>
void main()
{
	float n;
	double d;
	printf("Enter the Number to be converted from Float to double\n");
	scanf("%f",&n);
	d=(double)n;
	printf("The Double form of %f Float type is %lf\n",n,d);
}
