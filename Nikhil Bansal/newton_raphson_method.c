#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x)-(4*x)-9
#define g(x) (3*x*x)-4
int main()
{
    float a=0,b=1,x1,a1,b1,x0,m1,n1,t;
    int n=1;
    a1 = f(a);
    b1 = f(b);
    while(a1*b1>0)
    {
        a++;
        b++;
        a1 = f(a);
        b1 = f(b);
    }
        x0 =(a+b)/2;
        while(n<10)
        {
            m1 = f(x0);
            n1 = g(x0);
            if(fabs(a-b)>0.001)
            {
                x1 = x0 - (m1/n1);
                t = x1;
                x1 = x0;
            }
            else{
                break;
            }
            n++;
        }
    printf("The value of x1 is %f",x1);
}
