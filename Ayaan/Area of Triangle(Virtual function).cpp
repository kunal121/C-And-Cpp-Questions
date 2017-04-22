#include<iostream>
#include<cmath>
using namespace std;
class figure
{
	public:
		virtual void calc()=0;
};
class rectangle:public figure
{
	float l,b;
	public:
		rectangle()
		{
			cout<<"Enter length and breadth of rectangle "<<endl;
			cin>>l>>b;
		}
		void calc()
		{
			cout<<"Area of rectangle is "<<l*b<<endl;
		}
};
class triangle:public figure
{
	float a,b,c,ar;
	public:
		triangle()
		{
			cout<<"Enter 3 sides of triangle "<<endl;
			cin>>a>>b>>c;
		}
		void calc()
		{
			float s;
			s=(a+b+c)/2;
			ar=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"Area of triangle is "<<ar<<endl;
		}
};
int main()
{
	int choice;
	do
	{
		cout<<"Enter 1 to calculate area of triangle ,2 for rectangle and 3 to quit"<<endl;
		cin>>choice;
		figure *fp;
		if(choice==1)
		{
			triangle t;
			fp=&t;
			fp->calc();
		}
		else if(choice==2)
		{
			rectangle r;
			fp=&r;
			fp->calc();
		}
	}while(choice!=3);
	cout<<"THANK YOU";
}
