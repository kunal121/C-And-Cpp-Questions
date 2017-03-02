#include<stdio.h>
void main()
{
int a[]={1,2,3,4,5},*p;
printf("%d\n",a);
printf("%d\n",a++);
p=&a;
//a++;
//p++;

printf("%d\n",p++);
printf("%d\n",*p);

printf("%d\n",a);
printf("%d\n",*a);


}
