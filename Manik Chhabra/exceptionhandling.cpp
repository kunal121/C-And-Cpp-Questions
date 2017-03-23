#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter num(1,0,-1)";
	cin>>num;
	try
	{
		if(num==0)
			throw "zero\n";
		else if(num==-1)
			throw num;
		else if(num==1)
			cout<<"number\t"<<num;
		else 
			throw (float)num; 		
	}
	catch(int num)
	{
		cout<<num<<"is negative\n";
	}
	catch(const char *msg)
	{
		cout<<"no. is\t"<<msg;
	}
	catch(...)
	{
		cout<<"no match\n";
	}
	cout<<"\nmain()";
}
