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
        int n;
        int k,count1=0,count2=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        int i;
        for(i=0;i<n;i++)
            {
            if(a[i]<=0)
                {
                count1=count1+1;
            }
            else
                count2=count2+1;
        }
        if(count1>=k)
            {
            printf("NO\n");
        }
        else
            printf("YES\n");

    }
    return 0;
}
