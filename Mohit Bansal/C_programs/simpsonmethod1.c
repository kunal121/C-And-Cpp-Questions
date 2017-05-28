
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sqrt(1-x*x)
void main()
{
    int i,n;
    float x0,xn,h,y[20],sum,sum1,ans,x[20];
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
    sum=0;
    sum1=0;
    for(i=1; i<n; i++)
    {
        if(i%2==1)
        {
            sum=sum+y[i];
        }
        else
        {
            sum1=sum1+y[i];
        }

    }
    ans=h/3*(y[0]+y[n]+4*sum +2*sum1);
    printf("\n Final integration is %f",ans);

    getch();
}
