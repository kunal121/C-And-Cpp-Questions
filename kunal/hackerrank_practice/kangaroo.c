#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    int flag=0,i;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
         for(i=1;i<999999;i++)
         {
        if((x1+v1*i)==(x2+v2*i))
            {
            flag=1;
            break;
            }

        }
    if(flag==1)
        {
        printf("YES");
    }
    else
        {
        printf("NO");
    }



        return 0;
}
