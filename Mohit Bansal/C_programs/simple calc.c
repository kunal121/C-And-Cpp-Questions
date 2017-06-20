#include<stdio.h>
void main(){
int num1,num2,num3,i;
int a=1,s=2,m=3,d=4;
printf("simple calculator\t");
printf("enter the num1\n");
scanf("%d",&num1);
printf("enter the num2");
scanf("%d",&num2);
printf("i=a,m,s,d");
scanf("%d",&i);
switch(i)
{
case 1:printf("adittion");
      num3=num1+num2;
      printf("%d",num3);
      break;
 case 2:printf("subtraction");
 num3=num2-num1;
 printf("%d",num3);
       break;
case 3:printf("multiply");num3=num1*num2;
printf("%d",num3);
       break;
case 4: printf("division");num3=num1/num2;
printf("%d",num3);
default:printf("over");
}
}
