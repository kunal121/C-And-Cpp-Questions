#include<stdio.h>
int scan(int x,int y)
{
    int a[10][10],b[10][10],c[10][10],i,j,k;
    printf("enter elements of 1 array\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of second array\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

}
int multiply(int f,int g)
{
    int a[10][10],b[10][10],c[10][10],i,j,k;
    for(i=0;i<f;i++)
    {
        for(j=0;j<g;j++)
        {
            c[i][j]=0;
            for(k=0;k<g;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}
int display(int R,int C)
{
    int a[10][10],b[10][10],c[10][10],i,j,k;
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
    printf("enter rows req and columns\n");
    scanf("%d%d",&r,&c);
    scan(r,c);
    multiply(r,c);
    display(r,c);
}
