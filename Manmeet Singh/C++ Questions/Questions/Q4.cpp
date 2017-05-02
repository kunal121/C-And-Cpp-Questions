#include<iostream>
using namespace std;
class shape
{
	protected:
	double x, y;
	public:
	void getdata(double a, double b)
	{
		x=a;
		y=b;
	}
	virtual void display_area()=0;
};
class triangle:public shape
{
	double triangle_area;
	void display_area()
	{
		triangle_area=(1*x*y)/2;
		cout<<"area of triangle is:"<<triangle_area<<endl;
}};
class rectangle:public shape
{
	double rectangle_area;
	void display_area()
	{
		rectangle_area=x*y;
		cout<<"area of rectangle is:"<<rectangle_area<<endl;
}};
main()
{
	shape *p;
	triangle t;
	rectangle r;
	p=&t;
	p->getdata(10,30);
	p->display_area();
	p=&r;
	p->getdata(20,30);
	p->display_area();
}
