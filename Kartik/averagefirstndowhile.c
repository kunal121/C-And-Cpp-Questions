#include<stdio.h>
void main()
{
int i=1,a,sum=0,avg;
printf("Enter the number to find average ");
scanf("%d",&a);
do
{
sum=sum+i;
i++;
}
while(i<=a);



avg=sum/a;
printf("the average of first %d",a);
printf(" numbers is %d",avg);
}
