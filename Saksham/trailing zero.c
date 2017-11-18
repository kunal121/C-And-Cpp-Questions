#include<stdio.h>
#include<conio.h>
int main()
{
int count=0;
unsigned int num;
printf("enter the number:");
scanf("%u",&num);
while (num!=0)
{
if (num&1==1)
{break;}
else
 {
  count++;
  num=num>>1;
 }
}
printf("%d",count);
getch();
return 0;
}
