#include<stdio.h>
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
}

void main()
{
    int n,f;
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
}
