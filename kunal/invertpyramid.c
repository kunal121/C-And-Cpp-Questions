#include<stdio.h>
void main()
{
    int l,m,n,o;
    for(l=4;l>=1;l--)
    {
        for(m=4-l;m>=1;m--)
        {
            printf(" ");
        }
        for(n=l;n>=1;n--)
        {

            printf("*");
        }
        for(o=1;o<l;o++)
        {
            printf("*");
        }



        printf("\n");
    }
}
