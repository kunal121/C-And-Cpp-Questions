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
    int i,c=0;
    for(i=0;i<strlen(s);i=i+3)
        {
        if(s[i]!='S')
            c=c+1;
        if(s[i+1]!='O')
            c=c+1;
        if(s[i+2]!='S')
            c=c+1;

    }
    printf("%d",c);
    return 0;
}
