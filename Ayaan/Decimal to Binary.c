#include<stdio.h>
void main()
{
 int num, binary_val, decimal_val = 0, base = 1, rem;
 long int decimalNumber,remainder,quotient;
 int binaryNumber[100],i=1,j;
 printf("Enter a binary number(1s and 0s) \n");
 scanf("%d", &num);
 binary_val = num;
 while (num > 0)
 {
 rem = num % 10;
 decimal_val = decimal_val + rem * base;
 num = num / 10 ;
 base = base * 2;
 }
 printf("The Binary number is = %d \n", binary_val);
 printf("Its decimal equivalent is = %d \n", decimal_val);
 printf("\n\n");
 printf("Enter any decimal number: ");
 scanf("%ld",&decimalNumber);
 quotient = decimalNumber;
 while(quotient!=0)
 {
 binaryNumber[i++]= quotient % 2;
 quotient = quotient / 2;
 }
 printf("Equivalent binary value of decimal number %ld: ",decimalNumber);
 for(j = i -1 ;j> 0;j--)
 {
 printf("%d",binaryNumber[j]);
}
}

