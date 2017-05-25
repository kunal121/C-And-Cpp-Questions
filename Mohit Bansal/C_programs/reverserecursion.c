#include<stdio.h>
void main()
{
   int num,r;
   printf("\nEnter any number:");
   scanf("%d",&num);
   r=reverse(num);
   printf("%d",r);
}
int sum=0,rem;
reverse(int num)
{
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      reverse(num/10);
   }
   else
      return sum;
   return sum;
}
