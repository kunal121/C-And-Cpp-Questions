#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],temp,sum0=0,sum1=0; 
    /*long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);*/
    int i,j;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
        {
        for(j=0;j<4;j++)
            {
            if(a[j]>a[j+1])
                {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
        {
        sum0=sum0+a[i];
    }
    for(i=1;i<5;i++)
        {
        sum1=sum1+a[i];
    }
    printf("%lld %lld",sum0,sum1);
    return 0;
}
