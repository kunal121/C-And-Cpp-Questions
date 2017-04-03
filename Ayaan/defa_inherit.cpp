#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int roll;
	protected:
		char course[10];
	public:
		student(int a, char b[10])
		{
			roll=a;
			strcpy(course,b);
		}
		void show()
		{
			cout<<roll<<endl<<course<<endl;
		}
};
class result: public student
{
	int m1, m2, m3,t,av;
	public:
		result(int a, char b[10], int p, int q, int r):student(a,b)
		{
			m1=p;
			m2=q;
			m3=r;
		}
		void total()
		{

			t=(m1+m2+m3);
		}
		void avg()
		{

			av=(m1+m2+m3)/3;
		}
		void show()
		{
			student::show();
			cout<<endl<<m1<<endl<<m2<<endl<<m3<<endl<<t<<endl<<av<<endl;
		}
};
main()
{
	char course[10];
	cout<<"enter course"<<endl;
	cin>>course;
	result d(5, course,  53, 68, 90);
	d.total();
	d.avg();
	d.show();
}
