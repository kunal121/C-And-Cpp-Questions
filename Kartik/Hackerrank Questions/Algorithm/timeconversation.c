#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a,b,c;
    char d[10];
    scanf("%d:%d:%d%s",&a,&b,&c,d);
    if(d[0]=='A' && a==12 || d[0]=='P' && a==12 )
        {
        a=00;
    }
    if(d[0]=='P')
        {
        a=a+12;
        //printf("%d\n",a);
    }
    printf("%02d:%02d:%02d",a,b,c);
    return 0;
}
