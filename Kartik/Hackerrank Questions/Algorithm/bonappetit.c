#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,z,i,sum=0,act;
    scanf("%d%d",&n,&z);
        int arr[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&act);
    for(i=0;i<n;i++)
        {
        if(i!=z)
            {
            sum=sum+arr[i];
        }
    }
    sum=sum/2;
    if(sum==act)
        {
        printf("Bon Appetit");
    }
    else
        {
        sum=act-sum;
        printf("%d",sum);
    }
    return 0;
}
