#include<stdio.h>
void main()
{
    int a,n,sum=0;
printf("enter the number");
scanf("%d",&a);
while(a>0)
{
    n=a%10;
    sum=sum+n;
    a=a/10;
}
printf("%d",sum);
}
