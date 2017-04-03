#include<iostream>
using namespace std;
class matrix
{
	public:
		int **a,i,j,r,c;
		matrix()
		{
			r=0;
			c=0;
		}
		matrix(int x,int y)
		{
			r=x;
			c=y;
			a=new int*[r];
			for(i=0;i<r;i++)
			{
				a[i]=new int[c];
			}
		}
		void input()
		{
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		matrix operator +(matrix &ob)
		{
			matrix temp(2,2);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					temp.a[i][j]=a[i][j]+ob.a[i][j];
				}
			}
			return temp;
		}
		void show()
		{
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cout<<a[i][j];
					cout<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	matrix m1(2,2),m2(2,2);
	m1.input();
	m2.input();
	matrix m3(2,2);
	m3=m1+m2;
	m3.show();
}
