#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        char s[10000];
        int n,j,k,t=0;
        scanf("%s",s);
        n=strlen(s);
        k=0;
        for(j=n-1;j>1;j--)
            {

            if(abs(s[k]-s[k+1])!=abs(s[j]-s[j-1]))
               t=1;
            k++;
        }
               if(t==1)
               printf("Not Funny\n");
               else
               printf("Funny\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
