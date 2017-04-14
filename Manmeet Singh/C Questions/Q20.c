#include<stdio.h>
int choice;
void main()
{
    void binary();
    void decimal();
    printf("Enter your choice\n1. Decimal to Binary\n2. Biary to Decimal ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: binary();
                break;
        case 2: decimal();
                break;
        default: printf("You have entered wrong choice");
    }
}
void binary()
{
    int n,rem,b=0,i=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        b=b+rem*i;
        i=i*10;
    }
    printf("%d",b);
}
void decimal()
{
    int n,rem,b=0,i=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        b=b+rem*i;
        i=i*2;
    }
    printf("%d",b);}
