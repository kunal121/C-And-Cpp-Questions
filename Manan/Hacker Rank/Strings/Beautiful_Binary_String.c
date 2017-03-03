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
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int count=0,i;
    for(i=0;i<strlen(s);i++)
        {
        if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
            {
            s[i+2]='1';
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
