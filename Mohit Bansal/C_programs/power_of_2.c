#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0){
        if(n&1==1)
            c++;
        n=n>>1;

    }
    if(c==1)
        printf("Number is a power of 2");
    else
        printf("Number is not a power of 2");
}
