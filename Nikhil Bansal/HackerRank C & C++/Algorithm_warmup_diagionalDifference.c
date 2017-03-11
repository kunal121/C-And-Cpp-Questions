/**
*   This is the solution to the Diagonal Difference problem of Algorithm domain on HackerRank
*   Question can be found here : https://www.hackerrank.com/challenges/diagonal-difference
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k;
    scanf("%d",&n);
    int a[n][n];
    int l = n - 1;
    int i = 0;
    int sum1 = 0;
    int sum2 = 0;
    int difference;
    int j = 0;
    for(i = 0; i < n; i++){
       for(j = 0; j < n; j++){
          scanf("%d",&a[i][j]);

       }
    }
    i = 0;
    j = 0;
    for (i = 0; i< n; i++)
    {
        for (j = 0; j< n; j++)
        {
            if (i==j){
              sum1 = sum1 + a[i][j];

          }

        }

    }
    for (i = 0; i <n;i++){
        for (j = 0;j< n;j++){
            k = i + j;
            if (k==l){
              sum2 = sum2 + a[i][j];


            }

        }
    }
    difference = abs(sum1 - sum2);
    printf("%d", difference);

    return 0;
}


