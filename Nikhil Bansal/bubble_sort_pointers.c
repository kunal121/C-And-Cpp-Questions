#include<stdio.h>
void bubble_sort(int a[],int n);
void main()
{
    int n,i;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(a+i));
    }
}
void bubble_sort(int *p,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
