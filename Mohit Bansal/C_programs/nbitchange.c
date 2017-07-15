#include<stdio.h>
#include<conio.h>
void main()
{
    int no,bit,i=1;
    printf("enter no");
    scanf("%d",&no);
    printf("enter bit position");
    scanf("%d",&bit);
    i=i<<(bit-1);
    printf("%d",no^i);
}
