#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void in()
		{
			cin>>a;
		}
		void display()
		{
			cout<<a;
		}
};
class B:public A
{
	int b;
	public:
		void in1()
		{
			cin>>b;
		}
		void display1()
		{
			cout<<b;
		}
};
int main()
{
	B *p;
	A ob;
	p=static_cast<B*>(&ob);
	p->in();
	p->display();
	p->in1();
	p->display1();
}
