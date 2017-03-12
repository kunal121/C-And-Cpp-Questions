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
    int v2,flag,i; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(x1>x2)
        {
        if(v1>v2)
            {
           // printf("NO1");
            flag=0;
        }
    }
    if(x1<x2)
        {
        if(v1<v2)
            {
           // printf("NO2");
            flag=0;
        }
    }
    if(v1/v2>1)
        {
       // printf("NO3");
        flag=0;
    }
    if(v2/v1>1)
        {
       // printf("NO4");
        flag=0;
    }
    
    for(i=0;i<10000;i++)
        {
       // printf("%d %d\n",x1,x2);
        if(x1==x2)
            {
            //printf("YES");
            flag++;
            break;
        }
        x1=x1+v1;
        x2=x2+v2;
    }
    if(flag!=0)
        {
        printf("YES");
    }
    else
        {
        printf("NO");
    }
    
    return 0;
}
