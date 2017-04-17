#include<stdio.h>
void quicksort(int *, int , int );
int main()
{
	int arr[20], n, i;
	printf("Enter the size of the array\n");
	scanf("%d", &n);
	printf("Enter the elements to be sorted\n");
  	for(i = 0; i < n; i++)
    		scanf("%d", &arr[i]);
	quicksort(arr, 0, n-1);
	printf("Sorted array\n");
  	for(i = 0; i < n; i++)
    		printf("%d\t", arr[i]);
    	printf("\n");
	return 0;
}
void quicksort(int *arr, int low, int high)
{
	int pivot, i, j, temp;
  	if(low < high)
	{
    		pivot = low;
    		i = low;
    		j = high;
    		while(i < j)
		{
      			while(arr[i] <= arr[pivot] && i <= high)
        				i++;
      			while(arr[j] > arr[pivot] && j >= low)
        				j--;
	      		if(i < j)
			{
	        			temp = arr[i];
	        			arr[i] = arr[j];
	      	  		arr[j] = temp;
	      		}
    		}
   		temp = arr[j];
    		arr[j] = arr[pivot];
   		arr[pivot] = temp;
    		quicksort(arr, low, j-1);
    		quicksort(arr, j+1, high);
  	}
}
