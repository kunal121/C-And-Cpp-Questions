#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,v1,x2,v2,i=0,flag=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    while (i<100000){
        x1 = x1 + v1;
        x2 = x2 + v2;
        if(x1 == x2){
            flag=1;
            break;
        }
        else{
            i=i+1;
        }
    }
    if(flag == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
