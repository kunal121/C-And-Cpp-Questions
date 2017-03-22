#include<stdio.h>
void main()
{
    int a[50],b[50],i,n,j=0;
    printf("enter the number elements of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=n-1;i>=0;i--)
        {
            b[j]=a[i];
            j++;
        }
    printf("The reversed array will be\n");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }

}
