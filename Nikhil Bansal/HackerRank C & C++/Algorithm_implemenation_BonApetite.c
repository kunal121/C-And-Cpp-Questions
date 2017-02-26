#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,index;
    scanf("%d",&n);
    int items[n],i,half,total=0,charged,actual=0,final;
    scanf("%d",&index);
    for(i=0;i<n;i++)
    {
        scanf("%d",&items[i]);
        total = total + items[i];
        if(i!=index)
            actual = actual + items[i];
    }
    scanf("%d",&charged);
    half = total/2;
    actual = actual/2;
    final = charged - actual;
    if(final==0)
        printf("Bon Appetit");
    else
        printf("%d",final);

    return 0;
}
