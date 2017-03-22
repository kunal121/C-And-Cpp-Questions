/**
*   This is solution is to the CamelCase question in Algorithm domain on HackerRank
*   Question can be found here : https://www.hackerrank.com/domains/algorithms/strings
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char s[1000000];
    int words=1,i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>64 && s[i]<91){

                words++;
        }
    }
    printf("%d",words);
    return 0;
}

