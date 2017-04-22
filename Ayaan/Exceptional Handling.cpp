#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 2 numbers to divide \n";
	cin>>a>>b;
	try
	{
		if(b!=0)
		{
			cout<<"\nDivide(a/b)="<<a/b<<endl;
		}
		else
			throw(b);
	}
	catch(int i)
	{
		cout<<"Exception caught::: Divisor is "<<i<<endl;
	}
}
