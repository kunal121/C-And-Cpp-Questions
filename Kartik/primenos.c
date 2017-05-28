#include<stdio.h>
void main()
{
    int a;
    printf("Enter to check prime number");
    scanf("%d",&a);
    if(a==1)
    {
        printf("NEITHER PRIME NOR COMPOSITE");
    }
    else if(a==2||a==3||a==5||a==7)
    {
        printf("PRIME");
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
