#include <stdio.h>
int main()
{
   int a[10],x, i, n, count = 0;
   printf("Enter the number of elements in array\n");
   scanf("%d", &n);
   printf("Enter numbers\n");
   for ( i = 0 ; i < n ; i++ )
   {
       	scanf("%d", &a[i]);
   }
    printf("Enter the number to search\n");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
   {
    	if (a[i] == x)
             {
         		printf("%d is present at location %d.\n", x, i+1);
		 count++;
    	}
   }
   if (count == 0)
     	 printf("%d is not present in array.\n", x);
   else
     	 printf("%d is present %d times in array.\n", x, count);
 return 0;
}
