#include<stdio.h>
void func(int a[],int m)
{
	int temp;
	for(int j=0;j<m-1;j++)
		{
		int t=0;
		for(int i=0;i<m-1;i++)
			{
			if(a[i]>a[i+1])
				{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				t=1;
				}
			}
		if(t!=1)
		break;
		}
	for(int i=0;i<=m;i++)
	{
		printf(" %d",a[i]);
	}
}
void main()
{
int a[20][20],m,n;
scanf("%d",&m);
scanf("%d",&n);
for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
for(int i=0;i<m;i++)
{
func(a[i],m);
printf("\n");
}
}
