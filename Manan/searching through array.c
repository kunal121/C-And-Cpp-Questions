//To search values in an array
#include<stdio.h>
void main()
{
	int f=0,a[20],n,i=0,m;
	printf("Enter no values");
	scanf("%d",&n);
	printf("Enter the array");
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	printf("Enter no to be searched");
	scanf("%d",&m);
	i=0;
	while(i<n)
	{
		if(a[i]==m)
		{	
		printf("%d no has been found at position %d\n",m,i);
		f=1;
		}
		i++;
	}
	if(f==0)
	{
		printf("No has not been found");
	}
}

