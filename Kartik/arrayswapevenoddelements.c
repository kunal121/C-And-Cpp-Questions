#include<stdio.h>
void main()
{
    int n,a[50],i,temp;
    printf("Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(i%2==0)
    {
    for(i=0;i<n;i=i+2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    }
    else
    {
    for(i=0;i<n-1;i=i+2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    }
    printf("The swapped array will be\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
