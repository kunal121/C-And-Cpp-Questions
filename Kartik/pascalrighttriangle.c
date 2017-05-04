#include<stdio.h>
void main()
{
    int i,j,a[10][10],n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
