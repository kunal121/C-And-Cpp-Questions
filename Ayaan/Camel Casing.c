#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int i,co=1,l;
    l=strlen(s);
    for(i=0;i<l;i++)
        {
        if(s[i]>='A' && s[i]<='Z')
            co=co+1;
    }
    printf("%d",co);
    return 0;
}
