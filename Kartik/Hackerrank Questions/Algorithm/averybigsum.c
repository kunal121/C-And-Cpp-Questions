#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int n,sum=0; 
    scanf("%ld",&n);
    long int arr[n];
    for(int i = 0;i < n;i++){
       scanf("%ld",&arr[i]);
        sum=sum + arr[i];
    }
    printf("%ld",sum);
    return 0;
}
