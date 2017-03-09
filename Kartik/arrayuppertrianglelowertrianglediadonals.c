#include<stdio.h>
void main()
{
    int a[50][50],i,j,n,k;
    printf("Enter the order of matrix");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i+j<n-1)
         {
            a[i][j]=1;
         }
         else if(i+j==4)
         {
             a[i][j]=0;
         }
         else
         {
             a[i][j]=-1;
         }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            printf("\t 1");
           if(a[i][j]==-1)
            printf("\t-1");
             if(a[i][j]==0)
            printf("\t 0");
        }
        printf("\n");
    }
}
