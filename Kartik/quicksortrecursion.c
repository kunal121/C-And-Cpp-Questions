#include<stdio.h>
#include<stdlib.h>
main()
{
    	int arr[1000],i,n;
    	printf("Enter the no. of elements : ");
    	scanf("%d",&n);
    	printf("Enter the array elements : ");
    	for(i=0;i<n;i++)
    	{
    		    scanf("%d",(arr+i));
    	}
    	insertionsort(arr,n);
    	for(i=0;i<n;i++)
    	{
    		    printf("%d\n",*(arr+i));
    	}
    	printf("\n");
}
int insertionsort(int *arr,int n)
{
    	int i,j,temp;
    	for(i=1;i<n;i++)
    	{
    		    temp=*(arr+i);
    		    j=i-1;
        		    while(temp<*(arr+j)&&j>=0)
        		    {
            			*(arr+(j+1))=*(arr+j);
            			j--;
        		    }
        		   *(arr+(j+1))=temp;
    	}
    return 0;
}

