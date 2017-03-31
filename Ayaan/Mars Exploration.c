#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int l,i,j,co=0;
    l=strlen(S);
    for(i=0;i<l;i=i+3)
        {
        for(j=i;j<i+3;j=j+3){
            if(S[i]!='S')
                co=co+1;
            if(S[i+1]!='O')
                co=co+1;
            if(S[i+2]!='S')
                co=co+1;
        }
    }
    printf("%d",co);
    return 0;
}
