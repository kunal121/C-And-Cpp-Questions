#include<stdio.h>
#include<math.h>
#define f(x) sqrt(1-x^2)
void main()
{
     int i,n;
    float x0,xn,h,y[20],so,se,ans,x[20];
    printf("\n Enter values of x0,xn,h: ");
    scanf("%f%f%f",&x0,&xn,&h);
    n=(xn-x0)/h;
    if(n%2==1)
    {
        n=n+1;
    }
    h=(xn-x0)/n;
    printf("\n Refined value of n and h are:%d %f\n",n,h);
    printf("\n Y values: \n");
    for(i=0; i<=n; i++)
    {
        x[i]=x0+i*h;
        y[i]=f(x[i]);
        printf("\n %f\n",y[i]);
    }
}
