#include<stdio.h>
void move(int,char,char,char);
int
 main()
{
	int n;
	printf("Enter number of rings\n");
	scanf("%d",&n);
	printf("\n");
	move(n,'A','C','B');
}
void move(int n,char source,char dest,char spare)
{
	if(n==1)
		printf("Move from %c to %c\n",source,dest);
	else
	{
		move(n-1,source,spare,dest);
		move(1,source,dest,spare);
		move(n-1,spare,dest,source);
	}
}
