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
	A *p;
	A ob;
	p=&ob;
	p->in();
	p->display();
}
