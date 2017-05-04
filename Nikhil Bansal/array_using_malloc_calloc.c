#include<stdio.h>
void main()
{
    int *a,n,i;
    printf("Enter the size of array ");
    scanf("%d",&n);
    //a = (int *)malloc(4);
    a = (int *)calloc(n,4);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
