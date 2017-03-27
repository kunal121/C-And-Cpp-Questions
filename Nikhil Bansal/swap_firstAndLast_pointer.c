#include<stdio.h>
void main()
{
    printf("Enter the value of n ");
    int n;
    scanf("%d",&n);
    int i,a[n],j,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(a+i));
    }
}
