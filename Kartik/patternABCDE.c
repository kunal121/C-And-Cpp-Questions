#include<stdio.h>
void main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=i;j++)
         {
            printf("%c",k);
             k++;
         }
        printf("\n");
    }
}

