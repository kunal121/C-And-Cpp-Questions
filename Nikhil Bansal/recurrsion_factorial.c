#include<stdio.h>
int f=1;
int fact(int n)
{
    if(n>0)
        f = n * fact(n-1);
    return f;
}
void main()
{
    int n;
    scanf("%d",&n);
    f = fact(n);
    printf("%d",f);
}
