#include<iostream>
using namespace std;
class complex
{	int a,b;
 	public:
 	void read()
 	{	cout<<"Enter the real part: ";
		cin>>a;
		cout<<"Enter the imaginary part : ";
		cin>>b;
 	}
 	complex add(complex &c2)
	{	complex c3;
 		c3.a=a+c2.a;
		c3.b=b+c2.b;
	 	return c3;
 	}
	complex sub(complex &c2)
	{	complex c3;
 		c3.a=a-c2.a;
		c3.b=b-c2.b;
	 	return c3;
 	}
	complex mul(complex &c2)
 	{	complex c3;
		c3.a=(a*c2.a)-(b*c2.b);
		c3.b=(b*c2.a)+(a*c2.b);
		return c3;
	}
	complex div(complex &c2)
	{	complex c3;
		c3.a=((a*c2.a)+(b*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
		c3.b=((b*c2.a)-(a*c2.b))/((c2.a*c2.a)+(c2.b*c2.b));
		return c3;
	}
	void disp()
	{	cout<<a<<"+"<<b<<"i\n";
	}
};
main()
{	complex c1,c2,c3;
	cout<<"Enter first complex number :\n";
	c1.read();
	cout<<"Enter second complex number :\n";
	c2.read();
	c3=c2.add(c1);
	cout<<"After adding :";
	c3.disp();
	c3=c2.sub(c1);
	cout<<"After subtracting :";
	c3.disp();
	c3=c2.mul(c1);
	cout<<"After multiplying :";
	c3.disp();
	c3=c2.div(c1);
	cout<<"After dividing :";
	c3.disp();
 }
