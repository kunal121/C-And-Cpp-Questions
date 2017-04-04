#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5]={0};
    int n,k,i,j,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)//scAN Array 1
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)//scan array 2
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
          c[i][j]=c[i][j]+a[i][k]*b[k][j];

            }
            printf("%d  ",c[i][j]);

        }
         printf("\n");
    }

    }


