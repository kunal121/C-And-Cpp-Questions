#include <stdio.h>
int main()
{
 	  int a[10][10], b[10][10], t[10][10];
    	  int i,j,m,n,trace=0;
   	 printf("Enter the order of the matrix array1\n");
    	scanf("%d %d", &m, &n);
   	 printf("Enter the elements of array1 \n");
    	for (i = 0; i < m; i++)
    	{
              	for (j = 0; j < n; j++)
        		{
                          		scanf("%d", &a[i][j]);
       		 }
    	}
    	printf("MATRIX array1 is \n");
    	for (i = 0; i < m; i++)
    	{
        		for (j = 0; j < n; j++)
            			printf("%3d", a[i][j]);
        		printf("\n");
    	}

        for (i = 0; i < m; i++)
        {
          		for (j = 0; j < n; j++)
            		{
                		t[i][j]=a[j][i];
                		printf("\n%d",t[i][j]);
           		 }
           		 printf("\n")       }
         printf("transpose matrix is \n");
         for (i = 0; i < m; i++)
        {
      		 for (j = 0; j < n; j++)
                		printf("%3d", t[i][j]) ;
            		printf("\n");
         }}
