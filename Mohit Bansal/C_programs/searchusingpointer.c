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
    printf("enter no to be searched");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==*(p+i))
        {
            printf("no found=%d position=%d",*p+i,i+1);
        }

    }
}
