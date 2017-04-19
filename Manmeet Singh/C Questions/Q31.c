#include<stdio.h>
int main()
{int a[50],i,r,j,temp;
	printf("enter range");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<r;i++)
	{for(j=0;j<r;j++)
		{if(a[j]>a[j+1])
			{temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;}}}
for(i=0;i<r;i++)
		printf("\n%d",a[i]);
return 0;}
