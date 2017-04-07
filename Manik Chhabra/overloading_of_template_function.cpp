#include<iostream>
using namespace std;
template<class T1,class T2>
void max(T1 a,T2 b)
{
	if(a>b)
		cout<<a<<"\n";
	else
		cout<<b<<"\n";	
	
}
void max(int a,int b)
{
	if(a>b)
		cout<<a<<"\n";
	else
		cout<<b<<"\n";
		
}
int main()
{
	max<int,float>(2,3.1);
	max(1,2);
}

