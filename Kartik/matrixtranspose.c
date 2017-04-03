#include<stdio.h>
void main()
{
int a[50][50],n,i,j,b[50][50];
printf("Enter the order of matrix");
scanf("%d",&n);
printf("Enter the elements of matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}


for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
}
}

printf("Transpose of matrix is \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}

