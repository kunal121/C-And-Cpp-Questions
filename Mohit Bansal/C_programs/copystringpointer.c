#include<stdio.h>
#include<string.h>
char* copy(char *str1,char *str2)
{
    char *c;
    c=strcpy(str1,str2);
    return c;
}
void main()
{
    char str1[100],str2[100],*p;
    int i;
    printf("enter 1 string\n");
    scanf("%s",str1);
    printf("enter 2 string\n");
    scanf("%s",str2);
    p=copy(str1,str2);
    printf("%s",p);
}

