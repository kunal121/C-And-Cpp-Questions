#include<stdio.h>
#include<math.h>
void main()
{
int q=0,i=0,r,d,y=1;
printf("Enter the number to be changed to binary");
scanf("%d",&d);
while(d!=0)
{
    r=d%2;
    q=q+r*y;
    d=d/2;
    y=y*10;
    //i++;
}
printf("%d",q);
}
