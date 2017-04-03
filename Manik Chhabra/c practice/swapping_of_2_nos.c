#include <stdio.h>
int main() 
{
    int i,k;
    printf("enter first no.");
    scanf("%d",&i);
    printf("enter second no.");
    scanf("%d",&k);
    printf("value of i=%d k=%d before swapping\n", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);

}
