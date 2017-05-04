#include<stdio.h>
void main()
{
int a,b,c,rem=0;
printf("Enter the number: ");
scanf("%d",&a);
c=a;
while(a!=0)
{
	b=a%8;
	rem=rem+b*10;
	a=a/8;
}
printf("The octal representation: of %d is %d\n",c,rem);
}
