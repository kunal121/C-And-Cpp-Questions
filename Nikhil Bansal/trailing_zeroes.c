//C program to calculate the trailing zeros in a number.
#include<stdio.h>
void main()
{
    int n,rem,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        if(rem==0)
        {
            c = c+1;
        }
        n= n/10;
    }
    printf("%d",c);
}
