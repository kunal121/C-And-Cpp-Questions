
#include<stdio.h>
#define f(x)  (x*x*x)-(4*x)-9
#define df(x) (3*x*x)-4
 main()
{
    float a=0,b=1,x0,x1,a2,b2,itr=1;
    float a1,b1,error=0.001;
    a1=f(a);
    b1=f(b);
    while((a1*b1)>0)
    {
        a++;
        b++;
        a1=f(a);
        b1=f(b);
    }
    x0=(a+b)/2;


   a2=f(x0);
    b2=df(x0);
    x1=x0-(a2/b2);
    while(itr!=10)
    {
        if(fabs(x1-x0)>error)
         a2=f(x0);
    b2=df(x0);

        x0=x1;
        x1=x0-(a2/b2);

         printf("%f\n",x1);
         itr++;
    }


}

