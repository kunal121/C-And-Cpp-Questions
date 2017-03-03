#include<stdio.h>
void main()
{
    int a[50],b,n,i=0,temp,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("\nEnter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
{
    for(i=0;i<n;i++)
{
    if(a[i]>a[i+1])
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
}
for(i=0;i<=n-1;i++)
{

    printf("%d ",a[i]);
}
}
