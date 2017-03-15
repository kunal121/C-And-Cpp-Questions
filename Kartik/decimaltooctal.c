#include<stdio.h>
#include<math.h>
void main()
{
int q,r,d,i=0;
printf("Enter the number to be changed to octal");
scanf("%d",&d);
q=0;
while(d!=0)
{
    r=d%8;
    q=q+r*pow(10,i);
    d=d/8;
    i++;
}
printf("%d\n",q);
}
