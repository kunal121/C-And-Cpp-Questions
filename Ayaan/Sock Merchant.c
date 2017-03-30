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
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int i,j,count=0,k;
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(c[j]=='\0')
                {
                continue;
            }
            else{
            if(c[i]==c[j])
                {
                count=count+1;
                c[i]='\0';
                c[j]='\0';
                break;
            }
            }
        }
    }
    printf("%d\n",count);
   // for(k=0;k<n;k++)
     //   {
    //printf("%d",c[k]);
    //}
    return 0;
}
