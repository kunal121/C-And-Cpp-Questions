#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    c=a^b;
    a=a^c;
    b=b^c;
    printf("%d %d",a,b);
}
