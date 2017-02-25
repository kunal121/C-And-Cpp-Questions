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
    int a0,a_i;
    for(a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int count=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
            if(a[a_i]<=0)
                count++;
        }
        if(count>=k)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
