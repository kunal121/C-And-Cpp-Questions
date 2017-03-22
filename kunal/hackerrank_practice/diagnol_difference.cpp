#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n][n],c=0,d,e=0;
    for( i = 0; i < n; i++){
       for( j = 0; j < n; j++){

          scanf("%d",&a[i][j]);
       }
    }
        for( i=0;i<n;i++)
            {
            c=c+a[i][i];
        }
        for(i=0;i<n;i++)
            {
            e=e+a[0+i][n-i-1];
        }
        d=c-e;
        d=abs(d);
        printf("%d",d);

    return 0;
}
