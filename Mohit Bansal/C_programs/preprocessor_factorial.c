#include<stdio.h>
#define fact(n) fact*i
void main()
{
    int i,n,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact(n);
    }
    printf("%d",fact);
}
