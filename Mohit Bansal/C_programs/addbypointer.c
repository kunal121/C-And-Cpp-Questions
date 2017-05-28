#include<stdio.h>
void main()
{
    int x=10,y=20,c;                     //
    int *p;
    p=&x;
    int *p1;
    p1=&y;
    c=*p+*p1;
    printf("%d",c);
}
