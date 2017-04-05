#include<stdio.h>
void main()
{
	int a,i,n,p,sum=0;
	printf("Enter the No");
	scanf("%d",&n);
	p=n;
	while(n!=0)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
if(p==sum)
printf("armstrong");
else
printf("not armstrong");
}

