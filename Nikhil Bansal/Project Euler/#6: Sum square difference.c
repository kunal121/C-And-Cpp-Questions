#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long int n,i,j,sum1=0,sum2=0; 
        scanf("%lld",&n);
        sum1 = (n*(n+1)*(2*n+1))/6;
        sum2 = (n*(n+1))/2;
        sum2 = pow(sum2,2);
        printf("%lld\n",sum2-sum1);
    }
    return 0;
}

