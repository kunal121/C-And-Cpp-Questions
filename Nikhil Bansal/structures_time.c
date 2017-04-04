#include<stdio.h>
#include<math.h>
struct time
{
    int hours,min,sec;
}t1,t2;
void main()
{
    int choice,total_sec=0,total_min=0,total_hours=0;
    printf("Enter time 1 in hours:min:seconds format ");
    scanf("%d %d %d",&t1.hours,&t1.min,&t1.sec);
    printf("Enter time 2 in hours:min:seconds format ");
    scanf("%d %d %d",&t2.hours,&t2.min,&t2.sec);
    printf("Enter your choice:\n1.Add time\n2.Subtract time\n3.Display time\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : total_hours = t1.hours + t2.hours;
                 total_min = t1.min + t2.min;
                 total_sec = t1.sec + t2.sec;
                 if(total_sec>59)
                 {
                     t1.min = t1.min + 1;
                     total_sec = abs(t1.sec + t2.sec - 60);
                     if(total_min>59)
                     {
                         total_hours = total_hours + 1;
                         total_min = abs(t1.min + t2.min - 60);
                     }
                 }
                 printf("%d:%d:%d",total_hours,total_min,total_sec);
                 break;
        case 2 : total_sec = t1.sec - t2.sec;
                 total_min = t1.min - t2.min;
                 total_hours = t1.hours - t2.hours;
                 if(total_sec<0)
                 {
                     total_sec = 60 + total_sec;
                     t1.min = t1.min - 1;
                     total_min = t1.min - t2.min;
                     if(total_min<0)
                     {
                         total_min = 60 + total_min;
                         t1.hours = t1.hours - 1;
                         total_hours = t1.hours - t2.hours;
                         if(total_hours<0)
                         {
                             total_hours = 24 + total_hours;
                             t1.hours = t1.hours - 1;

                         }
                     }
                 }
                 printf("%d:%d:%d",total_hours,total_min,total_sec);
                 break;
    }
}
