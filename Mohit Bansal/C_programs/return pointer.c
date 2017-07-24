#include<stdio.h>
int large(int *x,int *y)
{
    if(*x>*y)
        return x;
    else
        return y;
}
void main()
{
    int a=4,b=10;
    int *p;
    p=large(&a,&b);
    printf("%d",*p);
}
