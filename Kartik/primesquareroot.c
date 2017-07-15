#include<stdio.h>
#include<math.h>
main()
{
    int x,y,n,t=2,z=0,r=2;
    printf(" enter the number : ");
    scanf("%d",&n);
    x=sqrt(n);

    while(t<=x)
    {
        if(n%t==0)
        {
            z++;
            break;
        }
        else
        {
                t++;
        }


    }
    if(z==0)
    {
        printf(" the number is a prime number");

    }
    else
    {
        printf(" the number is not a prime number");
    }
}
