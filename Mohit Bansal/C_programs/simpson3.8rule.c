#include<stdio.h>
#include<math.h>
#define f(x) log(x)
void main()
{
    float sum=0,sum1=0,sum2=0,ans;
    float h,x[100],y[100],a,b;
    int i,n;
    scanf("%d",&n);
    printf("enter a and b");
    scanf("%f%f",&a,&b);
    h=(b-a)/n;

for(i=0;i<=n;i++)
{

    x[i]=a+i*h;
    y[i]=f(x[i]);
    if(i>=1 && i<=n-1)
    {

    if((i%3)==0)
    {

      sum=sum+y[i];
    }
    else
    {
      sum1=sum1+y[i];
    }
    }

}
sum=sum*2;
sum1=sum1*3;
sum2=y[0]+y[n];

ans=(3*h/8)*(sum+sum1+sum2);
printf("%f",ans);

}
