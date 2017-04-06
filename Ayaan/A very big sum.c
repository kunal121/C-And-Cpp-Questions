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
    int arr[n];
    long int sum;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < n; arr_i++){
        sum=sum+arr[arr_i];}
        printf("%ld",sum);
    return 0;
}
