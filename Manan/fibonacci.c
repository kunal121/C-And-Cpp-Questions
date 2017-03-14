#include<stdio.h>
void fib(int n,int a,int b)
{
    int c;
    if(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
        fib(n-1,a,b);
    }
}

void main()
{
    int n,f,a=0,b=1;
    scanf("%d",&n);
    if(n==1)
        printf("0");
    if(n>=2)
        printf("0\n1");
    fib(n,a,b);
}
