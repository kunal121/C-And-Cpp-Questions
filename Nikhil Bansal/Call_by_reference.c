#include<stdio.h>
void swap(int *a,int *b);
void main()
{
    int a,b;
    printf("Enter the value of a and b ");
    scanf("%d%d",&a,&b);
    printf("Value before swapping:\n");
    printf("a=%d\nb\%d\n",a,b);
    swap(&a,&b);
    printf("Value after swapping numbers in cycle\n");
    printf("a=%d\nb=%d\n",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
