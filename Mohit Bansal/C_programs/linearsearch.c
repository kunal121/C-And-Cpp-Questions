#include <stdio.h>

int main()
{
   int a[100], value, i, n;

   printf("Enter the number of elements in array\n");
   scanf("%d",&n);

   printf("Enter %d integer(s)\n", n);

   for (i= 0; i < n; i++)
      scanf("%d", &a[i]);

   printf("Enter the number to search\n");
   scanf("%d", &value);

   for (i = 0; i < n; i++)
   {
      if (a[i] == value)     /* if required element found */
      {
         printf("%d is present at location %d.\n", value, i+1);
         break;
      }
   }
   if (i == n)
      printf("%d is not present in array.\n", value);

   return 0;
}
