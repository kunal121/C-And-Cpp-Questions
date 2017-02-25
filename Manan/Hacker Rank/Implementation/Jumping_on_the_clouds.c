#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i)
        {
        if(a[i+2]==0)
            {
            k++;
            i=i+2;

        }
        else if(a[i+1]==0){
            k++;
            i++;
        }
    }
    printf("%d",k);
    return 0;
}
