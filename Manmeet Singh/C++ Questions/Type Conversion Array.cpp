#include<iostream>
using namespace std;

class Array{
int m[100],b;
public:
	Array(int z[100],int n )
	{
		b=n;
		for(int i=0;i<n;i++)
		{
		m[i]=z[i];
		}	
	}
	
	void display()
	{
		for(int i=0;i<b;i++)
			cout<<m[i]<<endl;	
		
	}

	operator int()
	{
	int t,sum=0;
		for(int i=0;i<b;i++)
		{
		sum=m[i]+sum;		
			}
		return sum;	
	}

	operator float()
	{
	float t=0,avg=0;
		for(int i=0;i<b;i++)
		{
		t=m[i]+t;
		avg=t/b;		
			}
		return avg;	
	}
};

int main()
{
int a[10],i,n;
cin>>n;
for(i=0;i<n;i++)
	cin>>a[i];
Array arr(a,n);
arr.display();
int sum=arr;
cout<<"Sum = "<<sum<<endl;
float avg=arr;
cout<<"Avg = "<<avg<<endl;

}   
