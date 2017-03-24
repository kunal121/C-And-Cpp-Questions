#include<stdio.h>
typedef struct
{
int hr;
int min;
int sec;
}Time;
//typedef int Time;
Time addTime(Time *t1,Time *t2);
Time subTime(Time *t1,Time *t2);
//void displayTime(Time t);

int main()
{
    Time t1,*ptr1,t2,*ptr2,t3,t4;

    ptr1=&t1;
    ptr2=&t2;

scanf("%d",&ptr1->hr);
scanf("%d",&ptr1->min);
scanf("%d",&ptr1->sec);

scanf("%d",&ptr2->hr);
scanf("%d",&ptr2->min);
scanf("%d",&ptr2->sec);

    t3=addTime(ptr1,ptr2);
displayTime(t3);
//    t4=subTime(ptr1,ptr2);
//displayTime(t4);
return 0;
}
Time addTime(Time *t1,Time *t2)
{
    int h,m,s;
    Time t3;
    t3.hr=t1->hr+t2->hr;
    t3.min=t1->min+t2->min;
    t3.sec=t1->sec+t2->sec;
    while(t3.sec>60)
    {
        t3.sec=t3.sec-60;
        t3.min=t3.min+1;
    }
    while(t3.min>60)
    {
        t3.min=t3.min-60;
        t3.hr=t3.hr+1;
    }
    return t3;
}
displayTime(t3)
{
    printf("%d %d %d",t3->sec,t3min,t3.hr);
}
/*
Time subTime(Time *t1,Time *t2)
{
    int h1,m1,s1;
    if(t1->hr>t2->hr)
        h1=t1->hr-t2->hr;
    else
        h1=t2->hr>t1->hr;
    if(t1->min>t2->min)
        m1=t1->min-t2->min;
    else
        m1=t2->min>t1->min;
    if(t1->sec>t2->sec)
        s1=t1->sec-t2->sec;
    else
        s1=t2->sec>t1->sec;

}
*/
