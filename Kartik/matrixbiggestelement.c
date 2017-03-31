#include<stdio.h>
#include<string.h>
void main()
{
int a[10][10],i,n,j,big;
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
big=-980;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    if(big>a[i][j])
    {
    }
    else
    {
        big=a[i][j];
    }
   //big=(big>a[i][j])?big:a[i][j];
}
}

printf("The biggest element will be %d",big);

}
