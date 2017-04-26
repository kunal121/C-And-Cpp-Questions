#include <stdio.h>
void main(){
  FILE *fptr;
char name[20];
int age;
float salary;
  /*  open for writing */
fptr = fopen("emp.rec", "w");
if (fptr == NULL)
{  printf("File does not exists \n")
return;
    }    printf("Enter the name \n");
scanf("%s", name);
fprintf(fptr, "Name    = %s\n", name);
printf("Enter the age\n");
scanf("%d", &age);
fprintf(fptr, "Age     = %d\n", age);
printf("Enter the salary\n");
scanf("%f", &salary);
fprintf(fptr, "Salary  = %.2f\n", salary);
fclose(fptr);}
