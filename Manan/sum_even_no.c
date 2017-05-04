#include<stdio.h>
void main()
{
	int a[10],sum=0,i=0,n;
	printf("Enter no of values");
	scanf("%d",&n);
	printf("Enter the array");
	while(i<n)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		sum=sum+a[i];
		i++;
	}
	printf("Sum of even no is=%d",sum);
}

