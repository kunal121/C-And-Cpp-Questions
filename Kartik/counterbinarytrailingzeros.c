#include<stdio.h>
void main()
{
int i=0,n;
printf("Enter number in decimal");
scanf("%d",&n);
while(!(n&1))
{
    printf("%d",n);
n=n>>1;
printf("%d",n);
i++;
}
printf("%d",i);
}
