#include<stdio.h>
#include<conio.h>
void main()
{
    int no,bit;
    printf("enter no");
    scanf("%d",&no);
    printf("enter bit position");
    scanf("%d",&bit);
    no=no>>(bit-1);
    printf("%d",no&1);
}
