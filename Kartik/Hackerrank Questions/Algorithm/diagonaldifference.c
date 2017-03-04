#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,dig1=0,dig2=0,z; 
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0;i < n; i++){
       for(int j = 0; j < n; j++)
       {   
          scanf("%d",&a[i][j]);
       }
    }
    for(int i = 0;i < n; i++)
    {   
        dig1=dig1+a[i][i];
        dig2=dig2+a[n-1-i][i];
    }
    z=abs(dig1-dig2);
    printf("%d",z);
    
    return 0;
}
