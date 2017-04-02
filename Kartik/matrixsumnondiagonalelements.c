#include<stdio.h>
#include<string.h>
void main()
{
int a[10][10],i,n,j,big,sum=0,c,all=0,non;
printf("Enter the order of matrix");
scanf("%d",&n);
printf("Enter the elements of array");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
if(n%2==0)
{
for(i=0;i<n;i++)
{
sum=sum+a[i][i];
sum=sum+a[i][n-i-1];
}
//printf("%d\n",sum);

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
all=all+a[i][j];
}
}
//printf("%d\n",all);

non=all-sum;
printf("Sum of all non diagonal elements %d",non);
}

else
    {
    for(i=0;i<n;i++)
{
sum=sum+a[i][i];
sum=sum+a[i][n-i-1];
}
//printf("%d\n",sum);

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
all=all+a[i][j];
}
}
//printf("%d\n",all);

non=all-sum+a[n/2][n/2];
printf("Sum of all non diagonal elements %d",non);
}
}

