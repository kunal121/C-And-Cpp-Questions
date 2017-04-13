#include<stdio.h>
int a,b,temp;
void main()
{
    void swapping();
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    swapping();

}
void swapping()
{
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
