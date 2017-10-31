#include<stdio.h>
int main()
{
int i,fact=1,n;
printf("enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial=%d",fact);
return 0;

}
