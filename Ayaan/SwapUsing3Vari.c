#include <stdio.h>
#include <conio.h>

void main()
{
  int a,b,c;
  printf("Enter numbers \n");
  scanf("%d %d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("swapped numbers are \n%d and %d",a,b);
  getch();
}
