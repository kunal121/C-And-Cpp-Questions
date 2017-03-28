#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,d;
    scanf("%d",&n);
    int a[n][n],sum=0,sum1=0;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }}
        for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
    if(a_i==a_j)
        sum=sum+a[a_i][a_j];
         if(a_i+a_j==(n-1))
             sum1=sum1+a[a_i][a_j];


    }
        }
    if(sum>sum1)
        {
        d=sum-sum1;
        printf("%d",d);
    }
    else
        {
        d=sum1-sum;
        printf("%d",d);
    }return 0;
}
