#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n1,sum1=0; 
    int n2,sum2=0; 
    int n3,sum3=0; 
    scanf("%d %d %d",&n1,&n2,&n3);
    int *h1 = malloc(sizeof(int) * n1);
    for(int h1_i = 0; h1_i < n1; h1_i++){
       scanf("%d",&h1[h1_i]);
        sum1+=h1[h1_i];
    }
    int *h2 = malloc(sizeof(int) * n2);
    for(int h2_i = 0; h2_i < n2; h2_i++){
       scanf("%d",&h2[h2_i]);
        sum2+=h2[h2_i];
    }
    int *h3 = malloc(sizeof(int) * n3);
    for(int h3_i = 0; h3_i < n3; h3_i++){
       scanf("%d",&h3[h3_i]);
        sum3+=h3[h3_i];
    }
    int i=0,j=0,k=0;
    while (i<n1&&j<n2&&k<n3){
        if (sum1 == sum2 && sum2 == sum3){
            printf("%d", sum1);
            return 0;
        }
        
        int min = (sum1<sum2)?(sum1<sum3?sum1:sum3):(sum2<sum3?sum2:sum3);
        if (sum1 > min){
            sum1-=h1[i];
            i++;
        }
        
        if(sum2>min) {
            sum2-=h2[j];
            j++;
        }
        
        if (sum3>min) {
            sum3-=h3[k];
            k++;
        }
    }
    
    printf("0");
    return 0;
}

