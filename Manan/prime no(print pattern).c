//to print n prime no and then print them in reverse.
#include<stdio.h>
void main()
{
int i,j,k,n,count=0;
scanf("%d",&n);
int a[n];
if(n==1)
{
printf("no prime no");
}
for(i=2;count!=n;i++)
	{
	int t=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
		t=1;
		break;
		}
	}
	if(t==0)
	{
	a[count]=i;
	count++;
	printf("%3d,",i);
	}
}
for(i=n-2;i>=0;i--)
printf("%3d,",a[i]);

}


