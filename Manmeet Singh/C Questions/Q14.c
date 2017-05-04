#include<stdio.h>
int a,i=0,b,c;
void main(){
    printf("Enter the number ");
    scanf("%d",&b);
    a=b;
    c=fact(a);
    printf("%d! = %d",b,c);
}
int fact(int a){
        for(i=1;i<b;i++){
        a=a*i;
    }
    return a;
}
