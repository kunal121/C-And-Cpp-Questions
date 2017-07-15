#include<stdio.h>
void main()
{
int n,a,b,c;
printf("Enter the number which series is printed");
scanf("%d",&n);
a=0;
b=1;
printf("%d %d ",a,b);
c=1;
while(c<n)
{
 c=a+b;
 a=b;
 b=c;
 if(c<=n)
 {
        printf("%d ",c);
 }
}

}
