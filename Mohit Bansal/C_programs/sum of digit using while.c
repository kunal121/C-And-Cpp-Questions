#include<stdio.h>
void main(){
int a,sum=0,num;
printf("enter number");
scanf("%d",&num);
while(num!=0){
a=num%10;
num=num/10;
sum=sum+a;
}
printf("%d",sum);
}
