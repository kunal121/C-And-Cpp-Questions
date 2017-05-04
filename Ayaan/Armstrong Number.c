#include<stdio.h>
int main(){
 int num,r,sum=0,i;
 printf("Enter a number= ");
 scanf("%d",&num);
 for(i=num;i>0;i=i/10)
 {
 r=i%10;
 sum=sum+(r*r*r);
 }
 if(sum==num)
  printf("Is a Armstrong");
 else
 printf("Is not a Armstrong");
}

