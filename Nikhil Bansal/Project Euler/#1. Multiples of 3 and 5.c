#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int t,sum=0,p;
    scanf("%lld",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        scanf("%lld",&n);
        p = (n-1)/3;
        sum = (3*p*(p+1))/2;
        p = (n-1)/5;
        sum = sum + (5*p*(p+1))/2;
        p=(n-1)/15;
        sum = sum - (15*p*(p+1))/2;
        printf("%lld\n",sum);
        sum=0;
    }
    return 0;
}
