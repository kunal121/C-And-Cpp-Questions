#include<stdio.h>
void main()
{
    int a[2][2],i,j;
    int *p[2];
    p[0]=a[0];
    p[1]=a[1];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",*(p[i]+j));
        }
    }
}
