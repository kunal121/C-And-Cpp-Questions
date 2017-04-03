#include<stdio.h>
int main()
{
	int n,b,count=0;
	printf("enter any no.");
	scanf("%d",&n);
	while(n!=0)
	{
	  b=n&1;
	  if(b!=0)
	   count=count+1; 
	  n=n>>1; 
	}
	if(count==1)
	 printf("no. is power of 2");
	else 
	 printf("no. is not a power of 2");
}
