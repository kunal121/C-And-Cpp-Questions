#include<stdio.h>
void main(){
    int no,bit;
    printf("Enter the number ");
    scanf("%d",&no);
    printf("Enter bit position ");
    scanf("%d",&bit);
    no = no>>(bit-1);
    printf("%d",no & 1);
}
