#include<stdio.h>
main()
{
float rate,si,time;
int prl;
printf("enter the principle");
scanf("%d",&prl);
printf("enter the time ");
scanf("%f",&time);
printf ("enter the rate");
scanf("%f",&rate);
si=(prl*rate*time)/100;
printf("SI is %.2f",si);
}
