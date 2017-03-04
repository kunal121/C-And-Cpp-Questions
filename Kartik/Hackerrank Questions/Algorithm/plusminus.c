#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i;
    float pos=0,neg=0,zero=0;
    scanf("%d",&n);
    int arr[n];
    for( i = 0;i < n;i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
        if(arr[i]>0)
            {
            pos++;
        }
        else if(arr[i]<0)
            {
            neg++;
        }
        else if(arr[i]==0)
            {
            zero++;
        }
    }
    printf("%f\n%f\n%f",(pos/n),(neg/n),(zero/n));
    return 0;
}
