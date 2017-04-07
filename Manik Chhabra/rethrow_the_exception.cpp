#include<iostream>
using namespace std;
void func()
{
	try
	{
		throw "hello";
	}
	catch(const char *)
	{
		cout<<"inside function"<<"\n";
		throw;
	}
}
int main()
{
	cout<<"main"<<"\n";
	try
	{
		func();
	}
	catch(const char *)
	{
		cout<<"inside main";
	}
}
