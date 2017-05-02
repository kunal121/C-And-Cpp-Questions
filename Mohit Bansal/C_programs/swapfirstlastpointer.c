#include<stdio.h>
void main()
{
    int a[10],n,i,b,j;
    int *p;
    p=a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    //*p and *p+n-1
}
