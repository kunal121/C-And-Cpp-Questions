#include<stdio.h>
void main()
{
int a[5][5];
int (*p)[5];
int i,j,n=3;
p=a;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	scanf("%d",*(p+i)+j);
	}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%4d",*(*(p+i)+j));
}
printf("\n");
}
}

