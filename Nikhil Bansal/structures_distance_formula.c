#include<stdio.h>
#include<math.h>
struct points{
    int x,y;

}p1,p2;
void main()
{
    double distance;
    printf("Enter the coordinates of point 1 : ");
    scanf("%d %d",&p1.x,&p1.y);
    printf("Enter the coordinates of point 2 : ");
    scanf("%d %d",&p2.x,&p2.y);
    distance = sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
    printf("Distance between (%d,%d) and (%d,%d) = %lf ",p1.x,p1.y,p2.x,p2.y,distance);
}
