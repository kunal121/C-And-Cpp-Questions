#include<stdio.h>
void main(){
int a,count=0;
while(1)
{
printf("enter number");
scanf("%d",&a);

if(a==-1)
{break;}
else count++;
}
printf("%d",count);
}
