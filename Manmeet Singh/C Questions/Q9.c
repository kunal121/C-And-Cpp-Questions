#include<stdio.h>
void main()
{
intn,c=0,a=0;
printf("Enter the number\n");
scanf("%d",&n);
a=n;
while(n!=0)
{
if((n & 1) == 0)
{
c++;
}
else
{
break;
}
n=n>>1
}
printf("Number of trailing zeros in %d is %d\n",a,c);
}
