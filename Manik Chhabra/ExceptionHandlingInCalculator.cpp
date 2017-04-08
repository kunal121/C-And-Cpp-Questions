#include<iostream>
using namespace std;
int main()
{
	double a,b;
	int c;
	cout<<"enter 2 no.s\n";
	cin>>a>>b;
	cout<<"enter 1-add 2-sub 3-mult 4-div\n";
	cin>>c;
	switch(c)
	{
		case 1:
			cout<<a+b;
			break;
		case 2:
			cout<<a-b;
			break;
		case 3:
			cout<<a*b;
			break;
		case 4:
			try
			{
				if(b!=0)
					cout<<a/b;	
				else
					throw "denominator can't be 0";
			}
			catch(const char *msg)
			{	
				cout<<"exception is "<<msg;
			}
			break;
			default:
			try
			{	
				throw "invalid operator";
			}
			catch(const char *msg)
			{	
				cout<<"exception is "<<msg;
			}
			break;			
	}
}
