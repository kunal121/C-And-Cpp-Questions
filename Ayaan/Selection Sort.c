#include<stdio.h>
void selec(int comp[50],int n)
{
	int i,smallest,temp,pos,j;

	for(i=0;i<n-1;i++)
	{
		smallest=comp[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(comp[j]<smallest)
			{
				smallest=comp[j];
				pos=j;
			}

		}
		temp=comp[i];
		comp[i]=comp[pos];
		comp[pos]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("\ncomp[%d]=%d",i,comp[i]);
	}
}
int main()
{
	void (*ptr)(int*,int);
	ptr=&selec;
	int comp[50],smallest,i,n,j,temp,pos;
	printf("Enter number of elements to compare ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("comp[%d]=",i);
		scanf("%d",&comp[i]);
	}
	ptr(comp,n);
}
