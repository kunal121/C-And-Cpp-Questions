#include <stdio.h>
#include <conio.h>

void main()
{
  int a,b;
  printf("Enter numbers \n");
  scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("swapped numbers are \n%d and %d",a,b);
  getch();
}
