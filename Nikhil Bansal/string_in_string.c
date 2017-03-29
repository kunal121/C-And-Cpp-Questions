#include<stdio.h>
void main()
{
    char first[100],second[100],i,j;
    printf("Enter the parent string ");
    gets(first);
    printf("Enter the child string ");
    gets(second);
    for(i=0;first[i]!='\0';i++)
    {
        if(i==6)
        {
            for(j=0;second[j]!='\0';j++)
            {
                    strcat(first[i],second[j]);
            }
            break;
        }
    }
    puts(first);
}
