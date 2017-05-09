#include <stdio.h>
int main()
{
    int a[10][10], trans[10][10], r, c, i, j;
    printf("Enter rows and column of matrix:\n ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
    for(j=0; j<c; ++j)
    {
        scanf("%d",&a[i][j]);
    }
       for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    for(i=0; i<r; ++i)
    for(j=0; j<c; ++j)
    {
       trans[j][i]=a[i][j];
    }

    printf("\nTranspose of Matrix:\n");
       for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",trans[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
