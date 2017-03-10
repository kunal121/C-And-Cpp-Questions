#include<stdio.h>
void main()
{
int i=0,n;
printf("Enter the number");
scanf("%d",&n);
while(n%10==0)
{
i++;
n=n/10;
}
printf("%d",i);
}
