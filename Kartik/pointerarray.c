#include<stdio.h>
void main()
{
    int a[10],*p,i,n;
    p=a;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
}
