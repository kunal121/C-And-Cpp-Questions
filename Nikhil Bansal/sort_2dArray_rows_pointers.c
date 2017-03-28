#include<stdio.h>
int rows,cols,i,j,n;
void sort(int *a,int n)
{
    int temp,i=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\t");
    for(i=0;i<n;i++)
    {
         printf("%d\t",*(a+i));
    }
    printf("\n");
}
void main()
{
    printf("Enter no of rows");
    scanf("%d",&rows);
    printf("Enter no of cols");
    scanf("%d",&cols);
    int a[rows][cols];
    printf("Enter the elements");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    n = rows;
    for(i=0;i<rows;i++)
    {
        sort((a+i),n);
    }

}

