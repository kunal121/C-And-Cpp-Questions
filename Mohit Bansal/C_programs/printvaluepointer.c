#include<stdio.h>
void main()
{
    int a[10][10],i,j;
    int *p[10];
    for(i=0;i<3;i++)
    {
        p[i]=a[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(p[i]+j));
        }
    }
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",*(p[i]+j));
        }
    }

}
