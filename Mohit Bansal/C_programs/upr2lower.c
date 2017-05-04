#include<stdio.h>
void main()
{
 char ch;
printf("Enter the alphabet:");
scanf("%c",&ch);
if(ch>64&&ch<91)
{
ch=ch+32;
printf("%c",ch);
}
else
{
ch=ch-32;
printf("%c",ch);
}
}
