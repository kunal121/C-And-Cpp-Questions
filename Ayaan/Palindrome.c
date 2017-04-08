#include<stdio.h>
void main()
{
    int n,i,s=0,a;
    printf("Enter any number ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        s=s*10+(n%10);
        n=n/10;
    }
     if(a==s)
        printf("Number is palindrome");
     else
        printf("Number is not palindrome");
    }

