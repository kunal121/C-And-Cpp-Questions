#include<iostream>
using namespace std;
class Time
{
int hrs,min,sec;
public: Time()
{
hrs=0;min=0;sec=0;
}
Time(int a,int b,int c)
{
hrs=a; min=b;sec=c;
}
void addTime(Time t1,Time t2)
{
sec=t1.sec+t2.sec;
min=min+t1.min+t2.min;
hrs=hrs+t1.hrs+t2.hrs;
if(sec>60)
{
	sec-=60;
	min++;
}
if(min>60)
{
	min-=60;
	hrs++;
}
if(hrs>24)
hrs-=24;
}
void display()
{
cout<<hrs<<":"<<min<<":"<<sec<<endl;
}
};
int main()
{
Time t1(30,28,15);
Time t2(4,12,35);
Time t3;
t3.addTime(t1,t2);
cout<<"\nTime 1 is :";
t1.display();
cout<<"\nTime 2 is :";
t2.display();
cout<<"\nTime 1 + Time 2 is :";
t3.display();
return(0);
}
