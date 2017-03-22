#include<stdio.h>
void main()
{
int n,i=0;
printf("Enter the number");
scanf("%d",&n);
while(!(n&1))
{
    n=n>>1;
}
if(n==1)
{
    printf("Power of 2");
}
else
{
    printf("Not Power of 2");
}
}
