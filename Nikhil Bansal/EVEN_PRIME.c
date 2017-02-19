// C program to calculate the sum of even and prime numbers in a given array-->>>
#include<stdio.h>
void main()
{
    int n,a[5],i,j,count=0,count1=0,count2=0;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    printf("Enter Elements :\n");
    for(i=0;i<n;i++){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count = count + a[i];
        }
        for(j=2;j<=(a[i]-1);j++)
        {
            if(a[i]%j==0)
            {
                count1++;
            }
        }
        if(count1==0)
        {
            count2 = count2 + a[i];
        }
        count1=0;
    }
    printf("Sum of even numbers : %d\nSum of prime numbers : %d",count,count2);
}
