#include<stdio.h>
void merge(int a[],int beg,int mid,int end)
{
    int i=beg,j=mid+1,temp[10],k;
    int t;
    t = beg;
    while(i<=mid && j<=end)
    {
        if(a[i] < a[j])
        {
            temp[t] = a[i];
            i++;
        }
        else
        {
            temp[t] =a[j];
            j++;
        }
        t++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[t] = a[j];
            t++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[t] = a[i];
            i++;
            t++;
        }
    }
    for(i=beg;i<t;i++)
    {
        a[i] = temp[i];
        printf("%d\t",a[i]);
    }
}
void mergesort(int a[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid = (beg+end)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
void main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
}
