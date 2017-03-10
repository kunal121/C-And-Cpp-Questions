/**
*   This is the solution to the PlusMinus problem in Algorithms domain of HackerRank
*   Question can be found here : https://www.hackerrank.com/challenges/plus-minus
*/
#include<stdio.h>
int main ()
{

    int n;
    scanf("%d",&n);
    int arr[n],i;
    float a,b,c,p=0,ne=0,z=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
            ne++;
        else if(arr[i]>0)
            p++;
        else if(arr[i]==0)
            z++;
    }
    a=p/n;
    b=ne/n;
    c=z/n;
    printf("%f\n%f\n%f",a,b,c);
}
