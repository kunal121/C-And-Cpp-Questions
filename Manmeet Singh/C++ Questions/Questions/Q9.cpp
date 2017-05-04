#include<iostream>
using namespace std;
class mat
{	int a[3][3];
	public:
	mat()
   	{	for(int i=0;i<3;i++)
		{	for(int j=0;j<3;j++)
			{	a[i][j]=0;}
		}
	}
	void getdata()
	{	for(int i=0;i<3;i++)
		{	for(int j=0;j<3;j++)
			{	cin>>a[i][j];}
		}
	}
	mat operator +(mat m)
	{	mat res;
		for(int i=0;i<3;i++)
		{	for(int j=0;j<3;j++)
			{	res.a[i][j]=a[i][j]+m.a[i][j];}
		}
		return res;
	}
	mat operator -(mat m)
	{	mat res;
		for(int i=0;i<3;i++)
		{	for(int j=0;j<3;j++)
			{	res.a[i][j]=a[i][j]-m.a[i][j];}
		}
		return res;
	}
	mat operator *(mat m)
	{	mat res;
		int i,j,k,sum=0;
		for(i=0;i<3;i++)
		{	for(j=0;j<3;j++)
			{	sum=0;
				for(k=0;k<3;k++)
				sum+=a[i][k]*m.a[j][k];
			}
		res.a[i][j]=sum;
		}
		return res;

	}
	mat operator =(mat m)
	{	mat res;
		for(int i=0;i<3;i++)
		{	for(int j=0;j<3;j++)
				a[i][j]=m.a[i][j];
		}
	}
	void disp()
	{	for(int i=0;i<3;i++)
		{	for(int j=0;j<3;j++)
			{	cout<<a[i][j]<<" ";}
			cout<<endl;
		}
	}
};
main()
{	mat m1,m2,m3;
	cout<<"Input matrix 1 :\n";
	m1.getdata();
	cout<<"Input matrix 2 :\n";
	m2.getdata();
	cout<<"After adding : \n";
	m3=m1+m2;
	m3.disp();
	cout<<"After subtracting : \n";
	m3=m1-m2;
	m3.disp();
	cout<<"After multiplying : \n";
	m3=m1*m2;
	m3.disp();
}
