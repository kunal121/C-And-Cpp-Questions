#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("Enter the string ");
    gets(a);
    strrev(a);
    printf("Reverse of the srting entered \n");
    puts(a);
}
