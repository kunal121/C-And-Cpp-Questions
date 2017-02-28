#include<iostream>
using namespace std;
class TRI
{
	public:
	TRI(double h, double b)
	{
cout<<"area of triangle="<<0.5*h*b<<endl;
	}
	friend class shape;
};

class RECT
{
	RECT(double l, double B)
	{
		cout<<"area of reactangle="<<l*B<<endl;
	}
	friend class shape;
};

class shape
{
	double h,b,l,B;
public:
	void get()
	{
	cout<<"enter height and base of triangle=";
	cin>>h>>b;
	cout<<"enter length and breadth of rectangle=";
		cin>>l>>B;
	}
	void print()
	{
		TRI t(h,b);
	RECT r(l,B);
	}
	friend class TRI;
	friend class RECT;
};

int main()
{
shape obj;
obj.get();
obj.print();
}

