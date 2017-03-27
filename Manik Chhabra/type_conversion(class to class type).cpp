#include<iostream>
using namespace std;
class stud1
{
	public:
		int roll,i;
		int marks[3];
		stud1()
		{
			roll=0;
			for(i=0;i<3;i++)
			{
				marks[i]=0;
			}
		}
		stud1(int p,int q[3])
		{
			roll=p;
			for(i=0;i<3;i++)
			{
				marks[i]=q[i];
			}
		}
		void display()
		{
			cout<<"roll="<<roll;
			for(i=0;i<3;i++)
			{	
				cout<<"marks="<<marks[i];
			}
		}
};
class stud2
{
	int roll1,sum,i;
	float avg;
	public:
	stud2()
	{
		roll1=0;
		sum=0;
		avg=0;
	}
	stud2(stud1 ob)
	{
		roll1=ob.roll;
		for(i=0;i<3;i++)
		{
			sum=sum+ob.marks[i];
		}
		avg=sum/3;
	}
	void display()
	{
		cout<<"roll="<<roll1;
		cout<<"avg="<<avg;
	}
};
int main()
{
	int a,i,b[3];
	cin>>a;
	for(i=0;i<3;i++)
	{
		cin>>b[i];
	}
	stud1 s1(a,b);
	s1.display();
	stud2 s2;
	s2=s1;
	s2.display();
}
