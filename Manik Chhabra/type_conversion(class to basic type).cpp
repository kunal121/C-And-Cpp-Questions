#include<iostream>
using namespace std;
class array
{
	int c[10],i;
	public:
		array()
		{
			for(i=0;i<3;i++)
			{
				c[i]=0;
			}
		}
		array(int b[10])
		{
			for(i=0;i<3;i++)
			{
				c[i]=b[i];
			}
		}
		void display()
		{
			for(i=0;i<3;i++)
			{
				cout<<c[i]<<"\n";
			}
		}
		operator int()
		{
			int t=0;
			for(i=0;i<3;i++)
			{
				t=t+c[i];
			}
			return t;
		}
		operator float()
		{
			float t=0;
			for(i=0;i<3;i++)
			{
				t=t+c[i];
			}
			t=t/3;
			return t;
		}
};
int main()
{
	int a[10],i;
	for(i=0;i<3;i++)
	{
		cin>>a[i];
	}
	array arr(a);
	arr.display();
	int sum=arr;
	cout<<"sum="<<sum;
	float avg=arr;
	cout<<"avg="<<avg;
}
