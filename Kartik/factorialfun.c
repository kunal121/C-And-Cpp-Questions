#include<stdio.h>
int factorial();
void main()
{
int n,fact,t;
printf("Enter the number ");
scanf("%d",&n);
t=factorial(n);
printf("%d\n",t);
}

int factorial(int a)
{
int i,fact=1;
for(i=1;i<=a;i++)
{
fact=fact*i;
}
return fact;
//printf("%d\n",fact);
}
