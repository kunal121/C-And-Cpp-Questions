#include<stdio.h>
#include<string.h>
void main()
{
char a[50];
printf("Enter the string\n");
gets(a);
strrev(a);
printf("The reverse of a string is %s",a);
}
