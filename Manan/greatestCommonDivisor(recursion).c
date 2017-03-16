#include<stdio.h>

int gcd(int a,int b,int n)
{
if(b%n==0 && a%n==0)
{
return n;
}
else
{
gcd(a,b,n-1);
}
}

void main()
{
int g,a,b,n;
scanf("%d",&a);
scanf("%d",&b);
if(a<b)
n=a;
else
n=b;
g=gcd(a,b,n);
printf("%d",g);
}
