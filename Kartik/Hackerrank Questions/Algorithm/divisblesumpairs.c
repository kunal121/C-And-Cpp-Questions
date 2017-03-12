#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,count=0; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(((a[i]+a[j])%k)==0)
                
                {
                if(i<j)
                    {
                   // printf("%d %d\n",a[i],a[j]);
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
