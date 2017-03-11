#include<stdio.h>
void main()
{
int i=1,a,b,c,d,e,f,big1,big2,big3,big4,big5,large;
printf("Enter six numbers");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
while(i<2)
{
   big1=(a>b)?a:b;
   big2=(c>d)?c:d;
   big3=(e>f)?e:f;
   big4=(big1>big2)?big1:big2;
   big5=(big2>big3)?big2:big3;
   large=(big4>big5)?big4:big5;
   i++;
}
printf("The bigger number is %d",large);

}
