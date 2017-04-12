#include<stdio.h>
void main()
{
    int a,b;
    void gcd(int , int);
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    gcd(a,b);

}
void gcd(int a,int b)
{
    int QUESTION ,rem;
    while (a!=0 && b!=0){
        QUESTION =a/b;
        rem=a%b;
        a=b;
        b=rem;
    }
    if(a==0){
        printf("GCD is %d",b);
    }
    else if (b==0){
        printf("GCD  is %d",a);
    }
}
