#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k,m,l=0;
int a[20],b[20],c[20];
printf("Enter array 1\n");
printf("Enter the number of elements");
scanf("%d",&j);
for(i=0;i<=j-1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter array 2\n");
printf("Enter the number of elements");
scanf("%d",&k);
for(i=0;i<=k-1;i++)
{
scanf("%d",&b[i]);
}
m=j+k;
for(i=0;i<=j-1;i++)
{

c[i]=a[i];
c[j+l]=b[l];
l++;
}
for(i=0;i<m;i++)
{
printf("%d",c[i]);
}
}
