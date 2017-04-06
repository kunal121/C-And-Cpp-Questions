#include<stdio.h>
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);
int main()
{
    struct TIME t1,t2,diff,temp;
    scanf("%d",&t1.hours);
    scanf("%d",&t1.minutes);
    scanf("%d",&t1.seconds);
    scanf("%d",&t2.hours);
    scanf("%d",&t2.minutes);
    scanf("%d",&t2.seconds);
    if(t2.hours>t1.hours)
    {
        temp=t1;
        t1=t2;
        t2=temp;
    }
    if(t2.hours==t1.hours)
    {
        if(t2.minutes>t1.minutes)
        {
        temp=t1;
        t1=t2;
        t2=temp;
        }
    }
    if(t1.hours<0||t1.minutes<0||t1.seconds<0)
    {
        printf("invalid start time");
    }
    else if(t2.hours<0||t2.minutes<0||t2.seconds<0)
    {
        printf("invalid stop time");
    }
    else
    {
        differenceBetweenTimePeriod(t1,t2,&diff);
    }
    return 0;
}
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff)
{
    diff->hours=t1.hours-t2.hours;
    diff->minutes=t1.minutes-t2.minutes;
    diff->seconds=t1.seconds-t2.seconds;
    printf("%d %d %d",diff->hours,diff->minutes,diff->seconds);

}

