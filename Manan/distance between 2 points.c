#include<math.h>
#include<stdlib.h>
#include<stdio.h>
struct dist
{
long int x,y;
}p1,p2;

float calarea(struct dist p1,struct dist p2)
{
scanf("%ld",&p1.x);
scanf("%ld",&p1.y);
scanf("%ld",&p2.x);
scanf("%ld",&p2.y);
float d;
d=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
return d*d*3.14;
}
void main()
{
float ar;
ar=calarea(p1,p2);
printf("%f",ar);
}
