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
    int count=1,i;
    for(i=1;i<strlen(s);i++)
        {
        if(s[i]>=65 && s[i]<=91)
            count++;
    }
    printf("%d",count);
    return 0;
}
