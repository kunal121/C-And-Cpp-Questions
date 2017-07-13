#include<stdio.h>
void main()
{
int n,a,b,c,i=3;
printf("Enter the number which series is printed");
scanf("%d",&n);
a=0;
b=1;
printf("%d %d ",a,b);
while(i<=n)
{
 c=a+b;
 a=b;
 b=c;
 printf("%d ",c);
 i++;
}

}
