#include<stdio.h>
void main()
{
int i,count=0,x,j=1,y=1,q=0,r;
printf(" Enter the number");
scanf("%d",&i);
x=i;
while(i!=0)
    {
        i /= 10;             // n = n/10
        count++;
    }
while(j<=count)
{
    r=x%10;
    q=q+r*y;
    y=y*8;
    x=x/10
    ;
    j++;
}
    printf("%d",q);
}
