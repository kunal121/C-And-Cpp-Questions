#include<stdio.h>
void Fibonacci(int n);
main()
{
   	 int k,n;
   	 long int i=0,j=1,f;
   	 printf("Enter the range of the Fibonacci series: ");
   	 scanf("%d",&n);
   	 printf("%d\n%d\n",0,1);
   	 n=n-2;
   	 fib(n);
}
void fib(int n)
{
    	static long int f=0,s=1,sum;
    	if(n>0)
    	{
         		sum=f+s;
         		f=s;
         		s=sum;
         		printf("%ld\n",sum);
         		fib(n-1);
    	}
}

