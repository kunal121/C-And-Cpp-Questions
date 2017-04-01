#include<iostream>
using namespace std;
template<class T>
void show(T x)
{
	cout<<"template variable="<<x<<"\n";
}
void show(int y)
{
	cout<<"integer varibale"<<y<<"\n";
}
int main()
{
	show('a');
	show(10);
}
