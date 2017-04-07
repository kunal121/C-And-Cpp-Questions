#include<iostream>
using namespace std;
void funct(int test)throw(int,char,double)
{
	if(test==0)
		throw test;
	if(test==1)
		throw 'a';
	if(test==2)
		throw 23.33;
}
int main()
{
	int a;
	cin>>a;
	try
	{
		funct(a);
	}
	catch(int i)
	{
		cout<<"exception caught "<<i;
	}
	catch(char c)
	{
		cout<<"exception caught "<<c;
	}
	catch(double d)
	{
		cout<<"exception caught "<<d;
	}
}
