#include<iostream>
using namespace std;

class fine;
class examFee;
class transportFee;

class student{
	int roll,totalFee;
	char name[20],branch[10];
public:
	void input(){
	cout<<"Enter Roll no,name and branch"<<endl;
	cin>>roll>>name>>branch;
	}
	void fee(fine,examFee,transportFee);
};

class fine{
	int f;
public:
	void input(){
	cout<<"Enter fine"<<endl;
	cin>>f;
	}
	friend void student::fee(fine,examFee,transportFee);
};

class examFee{
	int f;
public:
	void input(){
	cout<<"Enter Exam Fee"<<endl;
	cin>>f;
	}
	friend void student::fee(fine,examFee,transportFee);
};

class transportFee{
	int f;
public:
	void input(){
	cout<<"Enter Transport Fee"<<endl;
	cin>>f;
	}
	friend void student::fee(fine,examFee,transportFee);
};

void student::fee(fine x,examFee y, transportFee z){
totalFee=x.f+y.f+z.f;
cout<<"Total fees is"<<endl<<totalFee<<endl;

}
int main()
{
student a;
fine b;
examFee c;
transportFee d;

a.input();
b.input();
c.input();
d.input();
a.fee(b,c,d);
}
