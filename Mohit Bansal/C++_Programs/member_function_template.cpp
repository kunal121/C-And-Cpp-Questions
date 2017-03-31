#include<iostream>
using namespace std;
template<class t1,class t2,int s>
class abc
{
	t1 a;
	t2 b;
	public:
		abc(t1 x,t2 y);
		void dis();
};
template<class t1,class t2,int s>
abc<t1,t2,s>::abc(t1 x,t2 y)
{
	a=x;
	b=y;
}
template<class t1,class t2,int s>
void abc<t1,t2,s>::dis()
{
	cout<<a<<endl<<b<<endl<<s<<endl;
}
int main()
{
abc<int,float,2> o(5,23.4);
o.dis();
}
