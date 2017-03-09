#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>0;i--)
        {
        for(j=1;j<i;j++)
        {    printf(" ");
        }
        for(k=0;k<=(n-i);k++){
            printf("#");
    }
    printf("\n");}
    //return 0;
}
