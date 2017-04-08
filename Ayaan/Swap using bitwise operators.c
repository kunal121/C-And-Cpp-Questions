#include<stdio.h>
void main()
	{
	 int i,j;
	 printf("Enter i :-");
	 scanf("%d",&i);
	 printf("Enter j :-");
	 scanf("%d",&j);
	 i=i^j;
	 j=i^j;
	 i=i^j;
	 printf("i= %d ; j = %d\n",i,j);
	}

