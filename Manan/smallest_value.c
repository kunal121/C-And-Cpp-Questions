#include<stdio.h>
void main()
{
	int a[10],n,small,i=0;
	printf("Enter no of values");
	scanf("%d",&n);
	printf("Enter values in array");	
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
						
	}
	i=0;
	small=a[0];
	while(i<n)
	{
		if(small>a[i])
		small=a[i];
		i++;
	}	
	printf("%d",small);
} 
