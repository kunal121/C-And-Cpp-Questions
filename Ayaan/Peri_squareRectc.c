#include <stdio.h>
#include <conio.h>

void main()
{
  int l,b,peri;
  printf("Enter Length and breadth, enter the number twice if its a sqaure\n");
  scanf("%d %d",&l ,&b);
  peri =((l+l)+(b+b));
  printf("The perimeter is\n");
  printf("%d \n" ,peri);
  getch();
}
