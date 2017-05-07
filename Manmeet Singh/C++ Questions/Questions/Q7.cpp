#include<iostream>
using namespace std;
class Time
{	int h,m,s;
	public:
	Time()
	{	h=m=s=0;
	}
	Time(int hour,int min,int sec)
 	{	h=hour;
		m=min;
		s=sec;
 	}
	void show()
	{	cout<<h<<":"<<m<<":"<<s<<endl;
	}
	Time sum(Time&);
};
Time Time::sum(Time &t)
{	Time res;
	res.s=s+t.s;
	if(res.s>60)
	{	res.s-=60;
		res.m++;
	}
	res.m+=m+t.m;
	if(res.m>60)
	{	res.m-=60;
		res.h++;
	}
	res.h+=h+t.h;
	return res;
}
main()
{	Time t1(4,52,30),t2(1,25,46);
	Time t3=t1.sum(t2);
	t3.show();
}

