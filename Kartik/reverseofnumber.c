#include<stdio.h>
void main()
{
    int a,n;
printf("enter the number");
scanf("%d",&a);
while(a>0)
{
    n=a%10;
    printf("%d",n);
    a=a/10;
}
}
