#include<iostream>
using namespace std;
class Salaried
{
	protected:
		float sal;
	public:
		void get()
		{
			cout<<"Enter fixed weekly salary "<<endl;
			cin>>sal;
		}
};
class commission
{
	protected:
		float percent;
	public:
		void get()
		{
			cout<<"Enter percentage of salary got "<<endl;
			cin>>percent;
		}
};
class baseSalaryPlusCommission:public Salaried,public commission
{
	protected:
		float reward;
	public:
		void total()
		{
			reward=0.1*sal;
			cout<<"Total Salary employees got ======"<<reward+percent+sal;
		}
};
int main()
{
	baseSalaryPlusCommission b;
	b.Salaried::get();
	b.commission::get();
	b.total();
}
