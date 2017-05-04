#include<stdio.h>
void main()
{
    int n1 , n2;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    while(n1!=0 && n2!=0)
    {
        if (n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("\nGCD of these two numbers is : %d",n1);
}

