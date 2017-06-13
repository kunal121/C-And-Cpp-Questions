#include<iostream>
using namespace std;

class abc
{
int h,b,a;
public:
	void input();
	void area();
	void display();
};


	inline void abc::input()
	{
		cout<<"Enter base and height\n";
		cin>>b>>h;
	}
	inline void abc::area()
	{
		a=0.5*b*h;
	}

	inline void abc::display()
	{
		cout<<"Ans is "<<a<<"\n";	
	}

int main()
{
abc ob;
ob.input();
ob.area();
ob.display();
}


