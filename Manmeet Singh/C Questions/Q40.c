#include<stdio.h>
void (*ptr)(int *,int );
void sort_arr(int *arr,int N)
{
	int c,d,temp;
	for(c=0;c<N;c++)
	{
		for(d=0;d<N-1;d++)
		{
		if(arr[d]>arr[d+1])
	{
			temp=arr[d];
		arr[d]=arr[d+1];
		arr[d+1]=temp;   }
	}
}
}
int main()
{
	int i=0,N,arr[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);

	}
	ptr=sort_arr;
	(*ptr)(arr,N);
	for(i=0;i<N;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
