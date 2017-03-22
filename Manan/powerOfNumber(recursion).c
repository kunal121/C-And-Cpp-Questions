#include<stdio.h>
int power(int n,int p)
{
int y;
if(p>1)
{
return n*power(n,(p-1));
}
}



void main()
{
int n,p,res;
scanf("%d",&n);
scanf("%d",&p);
res=power(n,p);
printf("%d",res);
}
