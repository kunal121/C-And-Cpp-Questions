#include<stdio.h>
void prime();
void main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
prime(n);
}

void prime(int a)
{
    if (a==1)
    {
        printf("Neither prime nor composite");
    }
    else if(a==2||a==3||a==5||a==7)
    {
        printf("Prime");
    }
    else if(a%2==0||a%3==0||a%5==0||a%7==0)
    {
        printf("NOT PRIME");
    }
    else
    {
        printf("PRIME");
    }
}
