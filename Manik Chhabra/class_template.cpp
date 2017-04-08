#include<iostream>
using namespace std;
template<class T>
class abc
{
	T a,b;
	public:
		void input(T x,T y)
		{
			a=x;
			b=y;
		}
		void dis()
		{
			cout<<a<<"\t"<<b;
			cout<<"\n";
		}
};
int main()
{
	abc <int>o;
	abc <float>o1;
	abc <char>o2;
	o.input(1,2);
	o1.input(1.1,2.1);
	o2.input('a','b');
	o.dis();
	o1.dis();
	o2.dis();
}
