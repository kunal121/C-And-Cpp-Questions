#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int t,a,b,c,sum;
    scanf("%lld",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int n; 
        scanf("%lld",&n);
        sum=0;
        a=0;
        b=1;
        for(long long int i=0;i<n;i++)
        {
            c = a + b;
            if(c > n)
                break;
            else if(c % 2 == 0)
                sum = sum + c;
            a=b;
            b=c;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

