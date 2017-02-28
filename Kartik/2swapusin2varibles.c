#include<stdio.h>
main()
{
int a,b;
printf("enter any two numbers");
scanf("%d%d",&a,&b);
printf("the orignal values are %d%2d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("the swapped values are%d%2d",a,b);
}
