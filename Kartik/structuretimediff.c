#include<stdio.h>
main()
{
    	struct time
    	{
        		int x1,y1,z1,ti;
    	}time1,time2;
    	int min,sec,hr;
    	printf(" enter the time in hr:min:sec format : ");
    	scanf("%d:%d:%d",&time1.x1,&time1.y1,&time1.z1);
    	printf(" enter the time in hr:min:sec format : ");
    	scanf("%d:%d:%d",&time2.x1,&time2.y1,&time2.z1);
    	hr=time1.x1-time2.x1;
    	min=time1.y1-time2.y1;
    	sec=time1.z1-time2.z1;
    	 if(time2.z1>time1.z1)
    	{
        		time1.y1--;
        		time1.z1=time1.z1+60;
    	}
    	time1.z1=time1.z1-time2.z1;
    	if(time2.y1>time1.y1)
    	{
        		time1.x1--;
        		time1.y1=time1.y1+60;
    	}
    	time1.y1=time1.y1-time2.y1;
    	time1.x1=time1.x1-time2.x1;
    	printf("The time difference is = %d:%d:%d",time1.x1,time1.y1,time1.z1);
}
