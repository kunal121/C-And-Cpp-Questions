#include<stdio.h>
#include<math.h>
void main()
{
    int i,a;
    int k,c=0;
    printf("Enter number");
    scanf("%d",&k);
    for(i=2;i<=a;i++)
    {
        a=sqrt(k);

        if(k%i==0)
        {
            c++;

        }

    }
    if(c==0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

}
