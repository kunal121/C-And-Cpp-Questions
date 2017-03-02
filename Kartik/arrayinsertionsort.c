#include<stdio.h>
void main()
{
int a[50],n,i,j,temp;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("  %d",a[i]);
}
}
