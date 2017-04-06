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
    int arr[n],b=0,c=0,a=0;
    double b1,c1,a1;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < n; arr_i++){
    if(arr[arr_i]>0)
        {
        a=a+1;
    }else if(arr[arr_i]<0){
        b=b+1;}
            else{
                c=c+1;}


    } //printf("%d %d %d\n",a,b,c);
    b1=(double)b/n;
    c1=(double)c/n;
    a1=(double)a/n;
   printf("%lf\n",a1);
     printf("%lf\n",b1);
    printf("%lf\n",c1);
    return 0;
}
