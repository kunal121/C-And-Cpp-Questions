#include<stdio.h>
int main()
{
    int i,n,count=0,data=2,flag=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\nFirst %d prime numbers: \n",n);
    while(count<n)
    {
        for(i=2;i<=data-1;i++)
        {
            if(data%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("%5d",data);
            count++;
            if(count%5==0)
                printf("\n");
        }
        data++, flag=1;
    }
    return(0);
}

