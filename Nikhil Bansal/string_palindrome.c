#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter string ");
    gets(str1);
    int i=0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[strlen(str1)-i-1];
        i++;
    }
    str2[i] = '\0';
    if(strcmp(str1,str2)==0)
        printf("String is palindrome ");
    else
        printf("String is not palindrome ");
}
