#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
        {
        int count=0;
        char s[1000000];
        scanf("%s",s);
        int n=strlen(s);
        int j;
        for(j=0;j<n;j++)
            {
            if(s[j]==s[j+1])
                {
                count++;
        }
    }
        printf("%d\n",count);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
