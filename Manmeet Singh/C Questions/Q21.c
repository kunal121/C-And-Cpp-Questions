#include<stdio.h>
int choice;
void main()
{
    void octal();
    void decimal();
    printf("Enter your choice\n1. Decimal to Octal\n2. Octal to Decimal ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: octal();
                break;
        case 2: decimal();
                break;
        default: printf("You have entered wrong choice");
    }
}
void octal()
{
    int n,rem,b=0,i=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%8;
        n=n/8;
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
        i=i*8;
    }
    printf("%d",b);}
