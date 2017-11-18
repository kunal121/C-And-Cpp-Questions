#include <iostream>

using namespace std;
class Time
{
	int hours, mins;
	public:
		Time(int,int);
		Time();
		void getdata(int, int);
		void putdata();
		void diff(const Time &,const Time &);
		friend void checktime(const Time & a,const Time & b);

};
Time::Time()
{

}
Time::Time(int hr,int mn)
    {
    hours=hr;
    mins=mn;
}
void Time::getdata(int hr,int mn)
    {
    hours=hr;
    mins=mn;
}
void checktime(const Time &a,const Time &b)
    {
    if(a.hours >24 && b.hours >24)
        {
        throw 1;
    }
    if(a.hours>b.hours)
        {
        throw 2;
    }
    if(a.hours==b.hours && a.mins>b.mins)
     {
        throw 2;
    }
}
void Time::diff(const Time &a,const Time &b)
    {
    if(b.mins<a.mins)
        {
        hours=(b.hours-a.hours)-1;
        mins=(b.mins+60)-a.mins;
    }
    else{
    hours=b.hours-a.hours;
    mins=b.mins-a.mins;
    }
}
void Time::putdata()
    {
    cout<<hours<<"hrs"<<mins<<"mins";
}
int main()
{
	int hr,mn;
	cin>>hr>>mn;
	Time t1(hr,mn);
	cin>>hr>>mn;
	Time t2;
	t2.getdata(hr,mn);
	try{
		checktime(t1,t2);
	}
	catch(int i)
	{
		if(i==1)
		{cout<<"invalid data";
		return 0;}
		else if(i==2)
		{cout<<"start time is greater than completion time";
		return 0;}
	}
	Time t3;
	t3.diff(t1,t2);
	t3.putdata();
	return 0;
}
