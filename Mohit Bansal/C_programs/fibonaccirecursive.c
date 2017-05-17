#include<stdio.h>
int n;
void fibo(int a,int b)
{
    int c;
    if(n)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        n=n-1;
        fibo(a,b);
    }

}
void main()
{
    int a=0,b=1;
    printf("enter num");
    scanf("%d",&n);
    fibo(a,b);
}
