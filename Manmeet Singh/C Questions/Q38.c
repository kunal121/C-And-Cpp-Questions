#include <stdio.h>
int main()
{
	int n, i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int data[n];
	printf("Enter elements: ");
	for(i=0;i<n;++i)
		scanf("%d",data+i);
	printf("You entered:\n");
	for(i=0;i<5;++i)
		printf("%d\n",*(data+i));
	return 0;}
