#include<iostream>
#include<math.h>
using namespace std;

class complex
{
	float real,imag;
	public:
	void get();
	void add(complex,complex);
	void sub(complex,complex);
	void mult(complex,complex);
	void div(complex,complex);
	void print(complex c1,complex c2);
};

void complex::get()
{
	cout<<"Enter real and imaginary numbers:";
	cin>>real>>imag;
}

void complex::add(complex c1,complex c2)
{
	real=c1.real+c2.real;
	imag=c1.imag+c2.imag;
	cout<<"("<<real<<")"<<"+i("<<imag<<")";
}

void complex::sub(complex c1,complex c2)
{
	real=c1.real-c2.real;
	imag=c1.imag-c2.imag;
	cout<<"("<<real<<")"<<"+i("<<imag<<")";
}

void complex::mult(complex c1,complex c2)
{
	real=((c1.real)*(c2.real))-((c1.imag)*(c2.imag));
	imag=((c1.real)*(c2.imag))+((c2.real)*(c1.imag));
	cout<<"("<<real<<")"<<"+i("<<imag<<")";
}

void complex::div(complex c1,complex c2)
{
	real=(((c1.real)*(c2.real))+((c1.imag)*(c2.imag)))/(pow(c2.real,2)+pow(c2.imag,2));
	imag=(((c2.real)*(c1.imag))-((c1.real)*(c2.imag)))/(pow(c2.real,2)+pow(c2.imag,2));
	cout<<"("<<real<<")"<<"+i("<<imag<<")";
}

void complex::print(complex c1,complex c2)
{
	complex c3;
	cout<<"ADDITION : ";
	c3.add(c1,c2);
	cout<<endl;
	cout<<"SUBTRACTION : ";
	c3.sub(c1,c2);
	cout<<endl;
	cout<<"MULTIPLICATION : ";
	c3.mult(c1,c2);
	cout<<endl;
	cout<<"DIVISION : ";
	c3.div(c1,c2);
	cout<<endl;
}
int main()
{
	complex c1,c2,c3;
	c1.get();
	c2.get();
	c3.print(c1,c2);
}
