#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long long int n;
    scanf("%lld",&n);
    long long int dv,mod,i,count=0,j;
    int l;
    l=strlen(s);
    dv=n/l;
    mod=n%l;
    //for(i=0;i<dv;i++)
      //  {
        for(j=0;j<l;j++)
            {
            if(s[j]=='a')
                count=count+1;
        //}
    }
    count=count*dv;
   // printf("%lld",count);
    for(i=0;i<mod;i++)
        {
        if(s[i]=='a')
            count=count+1;
    }
    printf("%lld",count);
    return 0;
}
