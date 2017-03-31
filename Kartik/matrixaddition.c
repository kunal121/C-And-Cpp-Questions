#include<stdio.h>
void main()
{
int n,a[50][50],b[50][50],i,j,c[50][50];
printf("Enter the order of matrix");
scanf("%d",&n);
printf("Enter the elements of matrix 1");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of matrix 2");
for(i=0;i<n;i++)
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
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("The addition of matrix is ::\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}


}

