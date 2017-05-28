#include<stdio.h>
void main()
{
int num,count=0;
printf("enter number");
scanf("%d",&num);
while(num!=0)
    {
    if(num&1==1)
        break;
    else
        count++;
    num=num>>1;
    }
printf("number of trailing zeros are=%d",count);
}
