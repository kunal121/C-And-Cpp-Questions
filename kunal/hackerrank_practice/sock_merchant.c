#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,sum=0,count=0,j,d=0,k=0;
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for( i = 0; i < n; i++){
       scanf("%d",&c[i]);
    }
    for(i=0;i<n-1;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(c[i]==c[j])
                {
                c[j]=k;
                count++;
                k--;
                break;
            }
        }
    }
    printf("%d",count);


    return 0;
}

