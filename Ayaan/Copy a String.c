#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str1[50],i=0;
    printf("Enter string\n");
    scanf("%[^\n]",str);
    while(str[i]!='\0')
    {
        str1[i]=str[i];
        i++;
    }
    str1[i]='\0';
    printf("\n*String str copied to str1*\n");
    printf("%s\n",str1);
}
