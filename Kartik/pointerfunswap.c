#include<stdio.h>
void main()
{
int a,b,temp,*p,*q;
printf("Enter number 1");
scanf("%d",&a);
printf("Enter number 2");
scanf("%d",&b);
p=&a;
q=&b;
swap(p,q);
}
int swap(int *p,int *q)
{
int temp;
temp=p;
p=q;
q=temp;
printf("Value of a is %d",*p);
printf("Value of b is %d",*q);
return 0;
}
