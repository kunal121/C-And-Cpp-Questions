#include <stdio.h>
void bubble_sort(int b[],int n)
{
  int i, j, temp;
  for (i = 0 ; i< ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (b[j] > b[j+1])
      {
        /* Swapping */

        temp         = b[j];
        b[j]   = b[j+1];
        b[j+1] = temp;
      }
    }
  }
}
int main()
{
  int a[100], n, i, d, swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  bubble_sort(a, n);
  printf("Sorted list in ascending order:\n");
  for ( i = 0 ; i < n ; i++ )
     printf("%d\n", a[i]);
  return 0;
}
