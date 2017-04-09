#include<stdio.h>
#include<math.h>
#define PI 3.14
struct point
{
long int x;
long int y;
}P1,P2;
int main()
{
 	float ar;
 getval();
 ar=calarea(P1,P2);
 printf("%f",ar);
 return 0;
}
void getval()
{
    scanf("%d",&P1.x);
    scanf("%d",&P1.y);
    scanf("%d",&P2.x);
    scanf("%d",&P2.y);
}
int calarea(struct point p1,struct point p2)
{
    float distance;
    float area,dis,a,b,c,d;
    a=p2.x-p1.x;
    b=p2.y-p1.y;
    c=pow(a,2);
    d=pow(b,2);
    distance=sqrt(c+d);
    dis=distance/2;
    area=PI*pow(dis,2);
    return area;

}

