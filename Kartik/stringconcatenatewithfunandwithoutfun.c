#include<stdio.h>
#include<string.h>
void main()
{
    char s[50],d[50],f[100];
    int i,j=0;
    printf("Enter string 1\n");
    gets(s);
    printf("Enter string 2\n");
    gets(d);

    for(i=0;s[i]!='\0';i++)
    {
        f[j]=s[i];
        j++;
    }
    for(i=0;d[i]!='\0';i++)
    {
        f[j]=d[i];
        j++;
    }
     printf("String concatenation (without function) is ");
    for(i=0;i<j;i++)
    {
        printf("%c",f[i]);
    }
    printf("\n");
     strcat(s,d);
     printf("String concatenation (with function) is ");
    puts(s);
}
