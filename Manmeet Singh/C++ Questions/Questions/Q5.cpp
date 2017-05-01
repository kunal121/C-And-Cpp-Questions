#include<iostream>
using namespace std;
class complex
{	float real,imag;
	public:
	void read()
 	{	cout<<"Enter the real part: ";
		cin>>real;
		cout<<"Enter the imaginary part : ";
		cin>>imag;
 	}
	void show()
	{	cout<<real<<"+"<<imag<<"i\n";
	}
	friend complex sum(complex&,complex&);
};
complex sum(complex &x,complex &y)
{	complex res;
	res.real=x.real+y.real;
	res.imag=x.imag+y.imag;
	return res;
}
main()
{	complex c1,c2;
	cout<<"First complex number :\n";
	c1.read();
	cout<<"Second complex number :\n";
	c2.read();
	complex c3=sum(c1,c2);
	cout<<"After addition : ";
	c3.show();
}
