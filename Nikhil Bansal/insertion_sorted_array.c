#include<stdio.h>
void main()
{
    int n,i,j,temp,value,flag =0;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Enter the value you want to enter ");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value<arr[i])
        {
            i--;
            flag = 1;
            for(j=n-1;j>i;j--)
            {
                arr[j+1] = arr[j];
            }
            n = n + 1;
            arr[j+1] = value;
            break;
        }
        if(flag == 0)
        {
            n++;
            arr[n-1] = value;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}

