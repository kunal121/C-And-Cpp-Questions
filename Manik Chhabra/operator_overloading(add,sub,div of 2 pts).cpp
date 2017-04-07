#include<iostream>
using namespace std;
class point
{
	public:
		int x,y;
		point()
		{
			x=0;
			y=0;
		}
		point(int a,int b)
		{
			x=a;
			y=b;
		}
		point operator+(point &o)
		{
			return point(x+o.x,y+o.y);
		}
		point operator-(point &o1)
		{
			return point(x-o1.x,y-o1.y);
		}
		point operator/(point &o2)
		{
			return point(x/o2.x,y/o2.y);
		}
};
int main()
{
	point p;
	point p1(10,20),p2(5,5);
	point p3,p4,p5;
	p3=p1.operator+(p2);
	p4=p1.operator-(p2);
	p5=p1.operator/(p2);
	cout<<p3.x<<" "<<p3.y<<"\n";
	cout<<p4.x<<" "<<p4.y<<"\n";
	cout<<p5.x<<" "<<p5.y<<"\n";
}
