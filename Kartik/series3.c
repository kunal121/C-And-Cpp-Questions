#include<stdio.h>
void main()
{
float n,i,sum=0;
printf("Enter the number");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
sum=(sum+i/(i+1));
}
printf("%f",sum);
}
