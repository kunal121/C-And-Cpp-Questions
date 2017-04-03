#include<stdio.h>
int main()
{
	int x,b,count=0;
	printf("enter any no.");
	scanf("%d",&x);
	while(x!=0)
	{
	  b=x&1;
	  if(b!=0)
	   count=count+1; 
	  x=x>>1; 
	}
	if(count==1)
	 printf("no. is power of 2");
	else 
	 printf("no. is not a power of 2");
}
