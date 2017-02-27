#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int search(char *p,char *s,int k)
    {
    int i;
    for(i=0;i<strlen(p);i++)
        {
        if(s[k]==p[i])
            return 1;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a0;
    for(a0 = 0; a0 < n; a0++){
        char* s = (char *)malloc(1000000 * sizeof(char));
        char* p = (char *)malloc(1000000 * sizeof(char));
        scanf("%s",s);
        int i,c=1,k=0,j=strlen(s);
        p[0]=s[0];
        for(i=1;i<j;i++)
            {
            k=search(p,s,i);
            if(k==0)
                c=c+1;
            p[i]=s[i];
        }
        printf("%d\n",c);
    }
    return 0;
}
