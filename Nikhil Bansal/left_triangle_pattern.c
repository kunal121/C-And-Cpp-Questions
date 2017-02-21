/*
    C program to print and left pyramid.
    For Ex:
    1
    2 3
    4 5 6
    7 8 9 10
*/
#include <stdio.h>
#include <stdlib.h>
void  main()
{
    int i,j,k=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k=k+1;
        }
        printf("\n");
    }

}
