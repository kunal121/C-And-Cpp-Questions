#include<stdio.h>
void main()
{
    int a[10][10],i,j;
    int (*p)[10];
    p=a;
    for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
    {
        scanf("%d",(p[j]+i));
    }
        p++;
    }
    p=a;
       for(j=0;j<2;j++)
    {
        for(i=0;i<2;i++)
    {
        printf("%d",*(p[j]+i));
    }
        p++;
    }

}

