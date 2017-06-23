#include<stdio.h>
int a[10][10],b[10][10],c[10][10];
int scan(int x,int y)
{
    int i,j,k;
    printf("enter elements of 1 array");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of second array");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",b[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}
int sub(int f,int g)
{
    int i,j,sum=0;
    for(i=0;i<f;i++)
    {
        for(j=0;j<g;j++)
        {
           c[i][j]=a[i][j]-b[i][j];
        }
    }
}
int display(int R,int C)
{
    int i,j,k;
       for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d",c[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}
void main()
{
    int r,c;
    printf("enter rows req and columns");
    scanf("%d%d",&r,&c);
    scan(r,c);
    sub(r,c);
    display(r,c);
}
