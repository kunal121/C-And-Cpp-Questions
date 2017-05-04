
#include<stdio.h>
void main()
{
    int n,a[20],i,j,mid,value;

    scanf("%d",&n);
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    j=n;
    mid=(i+j)/2;
    while(a[mid]!=value && i<j)
    {
        if(a[mid]<value)
        i=mid;
        else
            j=mid;

        mid=(i+j)/2;

    }
    if(a[mid]==value)
        printf("value found");
    else
        printf("value not found");

}
