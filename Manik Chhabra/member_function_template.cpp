#include<iostream>
#include<iomanip>
using namespace std;
template<class T1,class T2>
class abc
{
	T1 a;
	T2 b;
	public:
		void input(T1 x,T2 y);
		void dis();
};
template<class T1,class T2>
void abc<T1,T2>::input(T1 x,T2 y)
{
	a=x;
	b=y;
}
template<class T1,class T2>
void abc<T1,T2>::dis()
{
	cout<<fixed<<setprecision(2)<<a<<"\t"<<b;
	cout<<"\n";
		
}
int main()
{
	abc <int,float>o;
	abc <float,int>o1;
	abc <char,int>o2;
	o.input(1,2);
	o1.input(2,3);
	o2.input('a',1);
	o.dis();
	o1.dis();
	o2.dis();
}
