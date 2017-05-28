#include<stdio.h>
int pow(int x,int y)
{
    if(y!=0)
      return x*pow(x,y-1);
    else
      return 1;
}
void main()
{
    int x,y,result;
    printf("Enter base");
    scanf("%d",&x);
    printf("enter power");
    scanf("%d",&y);
    result=pow(x,y);
    printf("%d",result);
}
