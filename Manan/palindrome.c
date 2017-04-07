#include<stdio.h>
void main()
{
	int i,n,a,rev=0,rem;
	printf("enter the no");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		rev=(rev*10)+rem;
	}
	if(a==rev)
	printf("\nNo. is palindrome");
	else
	printf("\nNo is not palindrome");
}
