/**
*	This is the solution to hackerrank problem : Jumping on the Clouds in implementation domain
*	Link to question : https://www.hackerrank.com/challenges/jumping-on-the-clouds
**/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int n,i,count=0; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    for(i=0;i<n;)
    {
        if(c[i+2]<n && c[i+2]==0)
        {
            i = i + 2;
            count++;
        }
        else
        {
            i = i + 1;
            count++;
        }
    }
    if(count!=1)
    printf("%d",count-1);
    else
        printf("1");
    return 0;
}
