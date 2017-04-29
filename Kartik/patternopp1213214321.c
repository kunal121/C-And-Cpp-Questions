#include<stdio.h>
void main()
{
    int i,j,l;
    for(i=1;i<=5;i++)
    {
        for(l=i;l>=1;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}
