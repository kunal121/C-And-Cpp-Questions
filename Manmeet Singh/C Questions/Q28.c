#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    printf("Enter the string ");
    gets(a);
    strcpy(b,a);
    puts(b);
}
