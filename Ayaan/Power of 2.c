#include<stdio.h>
void main()
	{
	  int n,count=0;
	  printf("Enter a number: ");
	  scanf("%d",&n);
	  while(n)
	   {
	   if (n&1)
	   count++;
	   n>>=1;
	   }
	  if (count==1)
	  	printf("Integer is a power of 2");
	  else
	  	printf("Integer is not a power of 2");
	}

