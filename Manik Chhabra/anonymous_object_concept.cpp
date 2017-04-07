#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex()
		{
			a=0;
			b=0;
		}
		complex(int x,int y)
		{
			a=x;
			b=y;
		}
		complex add(complex &ob)
		{
			return complex(a+ob.a,b+ob.b);
		}
		void dis()
		{
			cout<<a<<b;
		}
};
int main()
{
	complex o;
	complex o1(5,6),o2(7,8);
	o=o1.add(o2);
	o.dis();
}
