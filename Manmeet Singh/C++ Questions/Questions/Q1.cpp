#include<iostream>
using namespace std;
void swap1(int a,int b)
{	int t=a;
	a=b;
	b=t;
	cout<<"After swapping : Value of a : "<<a<<"\nValue of b :"<<b;
}
void swap2(int &a,int &b)
{	int t=a;
	a=b;
	b=t;
}
main()
{	int a,b;
	cout<<"Enter two integers : ";
	cin>>a>>b;
	swap1(a,b);
	swap2(a,b);
	cout<<"\n\nAgain,Value of a : "<<a<<"\nValue of b :"<<b<<endl;
}
