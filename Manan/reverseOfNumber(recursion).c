#include<stdio.h>
int rev(int n)
{
int a,b;
static int rem=0;
if(n)
{
a=n%10;
rem=(rem*10)+a;
rev(n/10);
}
else
return rem;
}


void main()
{
int n,r;
scanf("%d",&n);
r=rev(n);
printf("%d",r);
}
