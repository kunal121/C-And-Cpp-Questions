#include<stdio.h>
main()
{
int basicsal;
float ta,da,grosssal;
printf("enter your basic salary");
scanf("%d",&basicsal);
ta=(7*basicsal)/100;
da=(9*basicsal)/100;
grosssal=basicsal+ta+da;
printf("gross salary is %.2f",grosssal);
}
