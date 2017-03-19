#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter Three Numbers ");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("The greater number is%d",a);
}
else if (b>c)
{
printf("The greater number is %d",b);
}
else
{
printf("The greater number is %d",c);
}
}
