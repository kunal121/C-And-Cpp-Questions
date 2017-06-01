#include <stdio.h>
int main(){
   int a[100],n, i;
   printf("enter req no of elements");
   scanf("%d",&n);
   printf("Enter elements: ");
   for(i=0;i<n;i++)
     scanf("%d",a+i);
   printf("You entered: ");
   for(i=0;i<n;i++)
      printf("%d\n",*a+i);
   return 0;
}
