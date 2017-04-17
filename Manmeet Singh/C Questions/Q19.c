#include<stdio.h>
int n,a,rem,cube=0;
void main()
{
    void armstrong();
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    armstrong();
}
void armstrong()
{
        while(n!=0)
    {
        rem=n%10;
        cube=cube+pow(rem,3);
        n=n/10;
    }
    if(a=cube)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");
}
