#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    printf("Enter first string ");
    gets(a);
    printf("Enter second string ");
    gets(b);
    strcat(a,b);
    puts(a);
}
