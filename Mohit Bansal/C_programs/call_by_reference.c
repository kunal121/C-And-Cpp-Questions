#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    printf("Enter value of a and b respectively: ");
    scanf("%d%d",&a,&b);
    printf("Value before swapping:\n");
    printf("a=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("Value after swapping numbers in cycle:\n");
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
