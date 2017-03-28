#include<stdio.h>
float n,i=0,sum=0,factorial=1,j,sum1;
float series(float n){
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            factorial = factorial*j;
        }
        sum = sum + factorial;
    }
    return sum;
}
void main(){
    printf("Enter the value of n");
    scanf("%f",&n);
    sum1=series(n);
    printf("%f",sum1);
}

