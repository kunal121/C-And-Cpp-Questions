#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int x,y;
	cout<<"Enter 1st no.: ";
	cin>>x;
	cout<<"Enter 2nd no.: ";
	cin>>y;
	cout<<"Before swapping\n1st no. "<<x<<"\n2nd no. "<<y<<"\n";
	swap(x,y);
	cout<<"\nOutside function after swapping\n1st no. "<<x<<"\n2nd no. "<<y<<"\n";
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nInside function after swapping\n1st no. "<<a<<"\n2nd no. "<<b<<"\n";
}
