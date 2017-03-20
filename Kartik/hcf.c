#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,n;
    printf("Enter the number1");
    scanf("%d",&a);
    printf("Enter the number2");
    scanf("%d",&b);
    while(n!=0)
    {
        n=a-b;
        n=abs(n);
        b=a;
        a=n;
    }
    printf("%d",b);
}
