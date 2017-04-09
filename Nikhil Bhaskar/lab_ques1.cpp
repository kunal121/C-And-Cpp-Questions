#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nInside fun after swapping\n1st no."<<a<<"\n2nd no."<<b;
}
int main()
{
	int a,b;
	cout<<"Enter 1st no.:";
	cin>>a;
	cout<<"Enter  2nd no.:";
	cin>>b;
	cout<<"Before swapping\n1st no."<<a<<"\n 2nd no. "<<b;
	swap(a,b);
	cout<<"\nOutside fun after swapping\n1st no. "<<a<<"\n2nd no."<<b;
}



