#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		void get()
		{
			cin>>a>>b;
		}
		void display()
		{
			cout<<a<<b;
		}
};
class B:public A
{
	public:
		int c;
		void get()
		{
			cin>>c;
		}
		void display()
		{
			cout<<c;
		}
};
int main()
{
	B b;
	b.get();
	b.display();
	b.A::get();
	b.A::display();
}
