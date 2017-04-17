#include<stdio.h>
int fib(int);
int main()
{
       int num,i,res;
       printf("Enter number of elements for fibonacci series \n");
       scanf("%d",&num);
       printf("\nFibonacci series\n");
       for(i=0;i<num;i++)
       {
                  res=fib(i);
                  printf("%d\t",res);
        }
        printf("\n");
}
int fib(int i)
{
         if(i==0)
         {
                   return 0;
          }
           else if(i==1)
                   return 1;
           else
           {
                    return (fib(i-1)+fib(i-2));
              }
}
