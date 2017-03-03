#include<stdio.h>
void main()
{
    int n,i,a[50];
    printf("Number of elements in array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+2)
    {
        printf("%d",a[i]);
    }
}
