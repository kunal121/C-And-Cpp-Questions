#include<stdio.h>
#include<math.h>
void main()
{
int n,i=0,b=0,a,d,c;
printf("Enter the Number");
scanf("%d",&n);
d=n;
c=d;
while(n!=0)
{
    n=n/10;
    i++;
}
while(d!=0)
{
    a=d%10;
    b=b+pow(a,i);
    d=d/10;
}
if(b==c)
{
    printf("Armstrong number");
}
else
{
    printf("Not Armstrong");
}
}
