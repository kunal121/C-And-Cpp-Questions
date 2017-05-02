#include<iostream>
using namespace std;

class employee
{
protected:
	int base_salary;
public:
	virtual void getdata()=0;
	virtual void showdata()=0;
};
class fixedd : public employee
{
public:
	void getdata(){
	    cout<<"Enter Base salary:";
		cin >> base_salary;
	}
	void showdata(){
		cout <<"Base Salary:"<< base_salary << endl;
	}
};
class comm : public employee
{
	int sales;
public:
	void getdata(){
	    cout<<"Enter Base salary and sales:";
		cin >> base_salary >> sales;
	}
	void showdata(){
	    cout<<"Salary(new):"<<endl;
		cout << (base_salary + base_salary/10)+sales << endl;
	}
};

int main(void){
	fixedd f;
	f.getdata();
	f.showdata();
	comm c;
	c.getdata();
	c.showdata();
}
