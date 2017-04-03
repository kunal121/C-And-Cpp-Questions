#include<stdio.h>
void main()
{
int a[50][50],b[50][50],c[50][50],i,j,k,sum,n;

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
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}

}
