#include<stdio.h>
void main()
{
int n,m,i;
printf("Enter the numbers");
scanf("%d%d",&n,&m);
i=n^m;
n=n^i;
m=n^i;
//n=n^m;
printf("%d %d",n,m);
}
