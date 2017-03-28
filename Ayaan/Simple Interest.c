#include <stdio.h>
#include <conio.h>
//si-roi*pri*time
void main()
{
  float si,pri,time,roi;
  printf("Enter Principle\n");
  scanf("%f",&pri);
  printf("Enter time\n");
  scanf("%f",&time);
  printf("Enter Rate of interest\n");
  scanf("%f",&roi);

  si=pri*time*roi/100;
  printf("The simple interest is\n");
  printf("%f" ,si);
  getch();
}
