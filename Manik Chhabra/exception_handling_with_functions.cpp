#include<iostream>
using namespace std;
void func()
{
	throw 0;
}
int main()
{
	try
	{
		func();
	}
	catch(int i)
	{
		cout<<"exception caught "<<i;
	}
}
