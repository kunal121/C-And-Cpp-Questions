//C program to print the duplicate numbers in an array -->>>>
#include<stdio.h>
void main()
{
    int n,j;
    printf("Enter the value of n ");
    scanf("%d",&n);
    int i,a[n],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j] && a[j]!=99999)
            {
                count++;
                a[j] = 99999;
            }
        }
        if(count>0)
            printf("%d\t",a[i]);
        count=0;
    }
}
