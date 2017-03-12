#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int s; 
    long long int t;
    
    scanf("%lld %lld",&s,&t);
    long long int a; 
    long long int b; 
    scanf("%lld %lld",&a,&b);
    long long int m; 
    long long int n,i,apple=0,orange=0,z=0; 
    scanf("%lld %lld",&m,&n);
    long long int x,y[n];  
    for(i=0;i<m;i++)
        {
        scanf("%lld",&x);
        z=a+x;
        if(z>=s&&z<=t)
            {
            apple++;
        }
    }
    for(i=0;i<n;i++)
        {
        scanf("%lld",&y[i]);
        z=b+y[i];
        if(z>=s&&z<=t)
            {
            orange++;
        }

    }
    printf("%lld\n%lld",apple,orange);
    
    
    return 0;
}
