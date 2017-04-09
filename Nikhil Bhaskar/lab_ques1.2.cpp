#include<iostream>
using namespace std;
void swap(int&a,int&b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	cout<<"Enter the numbers:";
	cin>>x>>y;
	swap(x,y);
	cout<<"After swapping "<<x<<" and "<<y;
}


