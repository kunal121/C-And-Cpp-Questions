#include<stdio.h>
void main()
{
float n,i=0,sum=0;
printf("Enter the number");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
sum=sum+1/(i*i);
}
printf("%f",sum);
}
