#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0;
    int a1;
    int a2,c1,c2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&b0,&b1,&b2);
    if(a0>b0)
        c1=c1+1;
        else if(a0<b0)
            c2=c2+1;
    if(a1>b1)
        c1=c1+1;
        else if(a1<b1)
            c2=c2+1;
    if(a2>b2)
        c1=c1+1;
        else if(a2<b2)
            c2=c2+1;

            printf("%d %d",c1,c2);
    return 0;
}
