#include<iostream>
using namespace std;
template <class a,class b>
b Max(a x,b y)
{
	return (x > y) ? x : y;
}
int main()
{
int e=9;
float f=1896.52;
cout<<Max(f,e)<<endl;
cout<<Max(e,f)<<endl;
}
