#include <stdio.h>
int  main()
{
    int a[10][10], b[10][10], sum[10][10];
    int i,j,m,n;
    printf("Enter the order of the matrix array1 and array2 \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of matrix array1 \n");
    for (i = 0; i < m; i++)
    {
    	for (j = 0; j < n; j++)
            		scanf("%d", &a[i][j]);
    }
    printf("MATRIX array1 is \n");
    for (i = 0; i < m; i++)
    {
       	 for (j = 0; j < n; j++)
            printf("%3d", a[i][j]);
   	 printf("\n");
    }
    printf("Enter the elements of matrix array2 \n");
    for (i = 0; i < m; i++)
    {
      	  for (j = 0; j < n; j++
            scanf("%d", &b[i][j]);
    }
    printf("MATRIX array2 is \n");
    for (i = 0; i < m; i++)
    {
    	 for (j = 0; j < n; j++)
            printf("%3d", b[i][j]);
      	 printf("\n");
    }
     for (i = 0; i < m; i++)
     {
     	 for (j = 0; j < n; j++)
               	 sum[i][j] = a[i][j] + b[i][j];
      }
      printf("Sum matrix is \n");
      for (i = 0; i < m; i++)
      {
      	 for (j = 0; j < n; j++)
 	             printf("%3d", sum[i][j]) ;
              printf("\n");
        }
return0;
  }
