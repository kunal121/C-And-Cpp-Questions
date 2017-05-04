	#include<iostream>
using namespace std;
class complex
{
private:
		int real, imag;
public:
		void get()
		{
			cout<<"enter real and imaginary parts=";
			cin>>real>>imag;
		}
		friend void add(complex c1,complex c2);
};

void add(complex c1,complex c2)
{
		cout<<c1.real+c2.real<<"+";
		cout<<c1.imag+c2.imag<<"i";
}

int main()
{
		complex c1,c2;
		c1.get();
		c2.get();
		add(c1,c2);
}
