#include<stdio.h>
void main(){
 int no,bit;
 printf("enter the number");
 scanf("%d",&no);
 printf("enter the bit");
 scanf("%d",&bit);
 no=no>>(bit-1);
 printf("%d",no&1);
 }
