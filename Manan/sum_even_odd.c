#include<stdio.h>
void main()
{
int k=0,l=0,even=0,odd=0,i,n,a[20],b[20],c[20];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	if(a[i]%2==0)
	{
	b[k]=a[i];
	even=even+b[k];
	k++;
	}
	else
	{
	c[l]=a[i];
	odd=odd+c[l];
	l++;
	}
}
if(even==0)
printf("not any even no");
	else
	{
	for(i=0;i<k;i++)
	{
		printf("%3d",b[i]);
		}
	printf("\nsum=%d\n",even);
	}
	if(odd==0)
	printf("not any odd no");
	else
	{
	for(i=0;i<k;i++)
	{
		printf("%3d",c[i]);
	}
	printf("\nsum=%d",odd);
	}
}
