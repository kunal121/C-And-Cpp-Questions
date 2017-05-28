#include<stdio.h>
void main()
{
    int a= 1025;
    int *p;
    p=&a;
    printf("Address = %d\nValue = %d\n",p,*p);
    char *p0;
    p0=(char*)p;
    printf("Address = %d\nValue = %d",p0,*p0);
}
