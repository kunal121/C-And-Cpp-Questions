#include <stdio.h>
#include<math.h>
#include<string.h>
void main()
{
 long decimalnum, remainder, quotient;
 int octalNumber[100], i = 1, j;
 long int octal, decimal = 0;
 int k = 0;
 printf("Enter the decimal number: ");
 scanf("%ld", &decimalnum);
 quotient = decimalnum;
 while (quotient != 0)
 {
 octalNumber[i++] = quotient % 8;
 quotient = quotient / 8;
 }
 printf("Equivalent octal value of decimal no %d: ", decimalnum);
 for (j = i - 1; j > 0; j--)
 printf("%d", octalNumber[j]);
 printf("\n \n");
 printf("Enter any octal number: ");
 scanf("%ld", &octal);
 while (octal != 0)
 {
 decimal = decimal +(octal % 10)* pow(8, k++);
 octal = octal / 10;
 }
 printf("Equivalent decimal value: %ld",decimal);
}

