#include<stdio.h>
void main()
{
int i,a;
printf("Enter the number");
scanf("%d",&i);
a=i%2;
switch(a)
{
    case(0):
    printf("number is even");
    break;
    case(1):
    printf("number is odd");
    break;
}
}
