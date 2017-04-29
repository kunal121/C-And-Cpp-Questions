#include<stdio.h>
void main()
{
int x=5;
int *p;
p=&x;
int **p1;
p1=&p;
int ***p2;
p2=&p1;
//printf("%p\n%d\n%d\n%d\n%p\n%p",p,x,*p,**p1,*p1,p1);
printf("%p\n%p\n%p\n%d",p2,*p2,**p2,***p2);
}
