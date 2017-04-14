#include<stdio.h>
int main()
{
intn,i=0;
printf("enter the value of n\n");
scanf("%d",&n);
while(!(n&1))
{
i++;
n=n>>1;
}
printf("the  no of trailing zeroes of n is %d\n",i);
}
