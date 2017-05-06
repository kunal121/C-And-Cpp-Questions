#include<stdio.h>
#define multiply(n) n*i
void main()
{
    int i;
    float n,multiply;
    scanf("%f",&n);
    for(i=1;i<11;i++)
    {
        multiply=multiply(n);
        printf("%.1f\n",multiply);
    }
}

