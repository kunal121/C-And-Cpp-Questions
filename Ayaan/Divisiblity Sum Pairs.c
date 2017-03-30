#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int i,j,count=0;
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(((a[i]+a[j])%k)==0)
                count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}
