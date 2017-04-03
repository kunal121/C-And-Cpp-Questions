#include<stdio.h>
int main() 
{
   int count = 0;
   int n;
   printf("\nEnter an Integer:");
   scanf("%d", &n);
   while (n != 0) {
      if ((n & 1) == 1) {
         break;
      } else {
         count++;
         n = n >> 1;
      }
   }
  if(count>0)
   printf("\nThere are %d Trailing Zeros.", count);
  else
    printf("\nThere are no Trailing Zeros.");
   return 0;

}
