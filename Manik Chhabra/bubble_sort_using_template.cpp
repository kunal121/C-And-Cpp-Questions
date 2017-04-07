#include<iostream>
using namespace std;
template<class t>
t bubble(t b[3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				swap(b[j],b[j+1]);
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<b[i]<<"\t";
	}
}
template<class t>
t swap(t &a,t &b)
{
	t temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	double a[3];
	int i;
	for(i=0;i<3;i++)
	{
		cin>>a[i];
	}
	bubble(a);
}
