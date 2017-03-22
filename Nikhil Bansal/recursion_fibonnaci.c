#include<stdio.h>
void fibonnaci(int n)
{
    static a=0,b=1,sum=0;
    if(n>0)
    {
        printf("%d ",a);
        sum = a + b;
        a = b;
        b = sum;
        fibonnaci(n-1);
    }
}
void main()
{
    int n;
    printf("Enter the range of fibonnaci ");
    scanf("%d",&n);
    fibonnaci(n);
}
