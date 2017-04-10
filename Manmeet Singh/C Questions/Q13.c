#include<stdio.h>
void main()
{
    void palindrome(int);
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    palindrome(n);
}
void palindrome(int n)
{
    int rem,number,rev=0;
    number=n;
    while (n!=0){
    rem=n%10;
    n=n/10;
    rev=rev*10+rem;
    }
    if(number==rev){
        printf("Number is palindrome");
    }
    else
        printf("Number is not a palindrome");
}
