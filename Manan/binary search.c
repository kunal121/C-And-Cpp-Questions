#include<stdio.h>
void main()
{
int a[20],n,i,value,mid,j;
scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter value to be searched");
	scanf("%d",&value);
	i=0;
	j=n-1;
	mid=(i+j)/2;
	while(a[mid]!=value && i<j)
	{
		if(value<a[mid])
		j=mid-1;
		else
		i=mid+1;
		mid=(i+j)/2;
	}
if(a[mid]==value)
printf("value found");
else
printf("Not found");
}
