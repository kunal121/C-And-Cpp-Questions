#include<stdio.h>
void main(){
intno,bit;
printf("Enter the number ");
scanf("%d",&no);
printf("Enter bit position ");
scanf("%d\n",&bit);
no = no>>(bit-1);
printf("%d",no& 1);
}
