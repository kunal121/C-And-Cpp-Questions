#include<stdio.h>
void main()
{
    int a[100][100],i,j,n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(i==0&&j==0)
            {
                printf("\t");
            }
            else if(i==0||j==0)
            {

                a[i][j]=i+j;
            }
            else
            {
                a[i][j]=a[0][j]*a[i][0];
            }

        }
    }
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(i==0 && j==0)
            {

            }
            else
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
