#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<a<<"\n";
		}
};
class B:virtual public A
{
	int b;
	public:
		B(int x,int y):A(x)
		{
			b=y;
		}
		void display()
		{
			cout<<b<<"\n";
		}
};
class C:public virtual A
{
	int c;
	public:
		C(int x,int y):A(x)
		{
			c=y;
		}
		void display()
		{
			cout<<c<<"\n";
		}
};
class D:public B,public C
{
	int d;
	public:
		D(int x,int y,int z):A(x),B(x,y),C(x,y)
		{
			d=z;
		}
		void display()
		{
			cout<<d<<"\n";
		}
};
int main()
{
	D ob(1,2,3);
	ob.A::display();
	ob.B::display();
	ob.C::display();
	ob.display();
}
