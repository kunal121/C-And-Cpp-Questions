#include <stdio.h>
int main()
{
 	 int a[10], n, i, j, pos, temp=0;
  	 printf("Enter number of elements\n");
 scanf("%d", &n);
   	 printf("Enter %d integers\n", n);
  	 for ( i = 0 ; i < n ; i++ )
     	 	scanf("%d", &arr[i]);
   	 for ( i = 0 ; i < n ; i++ )
	{for(j=i+1 ; j<n ; j++)
		{if(arr[i]>arr[j])
			{temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;}}}
  	printf("Sorted list in ascending order:\n");
for ( c = 0 ; c < n ; c++ )
      		printf("%d\n", array[c]);
   	return 0;}
