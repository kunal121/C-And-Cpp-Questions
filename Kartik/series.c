#include<stdio.h>
void main()
{
float i,n;
float sum=0;
printf("Enter the number");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
sum=sum+1/i;
}
//sum=sum+1;
printf("%.2f",sum);
}
