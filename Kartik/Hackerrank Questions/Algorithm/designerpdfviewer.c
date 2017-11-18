#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int i = 0;i < 26;i++){
       scanf("%d",&h[i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    int len,i,big;
    len=strlen(word);
    big=0;
    for(i=0;i<len;i++)
        {
        int z=word[i];
        if(h[z-97]>big)
            {
            big=h[z-97];
        }
    }
    printf("%d",big*len);
    return 0;
}
