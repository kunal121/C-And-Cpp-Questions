#include<stdio.h>
void main()
{
    int a[20],n,b,i,mid,m,j=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search for\n");
    scanf("%d",&b);
    mid=n-1/2;
    if(b<a[mid])
    {
        i=0;
        while(i<=mid)
        {
            if(b==a[i])
            {
             j++;
            }
            i++;
        }
    }
    else if(b>=mid)
    {
        for(i=mid;i<n;i++)
        {
            if(b==a[i])
            {
                j++;
            }
        }
    }
    if(j==0)
    {
    printf("not Found");
    }
    else
    {
    printf("Found");
    }
}
