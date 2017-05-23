#include<stdio.h>
void main()
{
    int num1 =2,num2=3;
    int *p=&num1;
    int *q=&num2;
    *p++=*q++;
    printf("%d",*p);
}
