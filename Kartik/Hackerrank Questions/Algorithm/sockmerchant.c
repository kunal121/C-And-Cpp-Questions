#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,count=0,j; 
    scanf("%d",&n);
    int c[n];
    for(i = 0;i < n;i++){
       scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
        {
        for(j=i;j<n;j++)
            {
            if(c[i]==c[j]&&i!=j&&c[i]!=0)
                {
                count++;
                c[j]=0;
                c[i]=0;
            }
        }
    }
    printf("%d",count);
    return 0;
}
