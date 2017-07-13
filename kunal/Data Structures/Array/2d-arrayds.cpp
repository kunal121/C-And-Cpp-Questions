#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6],sum,max = -99;
    for(int i = 0; i < 6; i++){
       for(int j = 0; j < 6; j++){

          scanf("%d",&arr[i][j]);
       }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum = 0;
            for(int k=j;k<(j+3);k++)
                sum = sum + arr[i][k] + arr[i+2][k];
            sum = sum + arr[i+1][j+1];
            if(sum>max)
                max = sum;
        }

    }
    printf("%d",max);
    return 0;
}
