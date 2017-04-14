#include<stdio.h>
void main()
{
    int i,n,r,rev=0,x;
    printf("Enter the number");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d\n",rev);

    if(x==rev)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
}
