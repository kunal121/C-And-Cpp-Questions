#include<stdio.h>
#include<string.h>
void  main()
{
    int i,k,j;
    char str[100],std[100];
    printf("Enter the string\n");
    gets(str);
    k=strlen(str);
    j=k;
    for(i=0;i<=k;i++)
    {
            j--;
            std[i]=str[j];
    }
    printf("The reversed string is ");
       puts(std);
}
