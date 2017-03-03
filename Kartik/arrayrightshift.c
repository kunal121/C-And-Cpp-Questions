#include<stdio.h>
void main()
{
int n,arr[10],i,z,m,r;
printf("Enter the number of elements ");
scanf("%d",&n);
printf("Enter the times of rotation");
scanf("%d",&r);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(m=0;m<r;m++)
{
z=arr[n-1];
for(i=n-1;i>=0;i--)
{
    arr[i]=arr[i-1];
}
arr[0]=z;
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}

}
