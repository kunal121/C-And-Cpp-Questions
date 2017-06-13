#include<iostream>
using namespace std;

class fine;
class examFee;
class transportFee;

class student{
	int roll,totalFee;
	string name,branch;
public:
	student(){
	roll=10;
	name="Manmeet";
	branch="CSE"
	}
	student(){
	cout<<"Enter Roll no,name and branch"<<endl;
		cin>>roll>>name>>branch;
	}
	void fee(fine,examFee,transportFee);
};

class fine{
	int f;
public:
	fine(){
	f=200;	
	}
	fine(){
	cout<<"Enter fine"<<endl;
	cin>>f;
	}
	friend void student::fee(fine,examFee,transportFee);
};

class examFee{
	int f;
public:
	
	examFee(){
	f=200;	
	}
	examFee(){
	cout<<"Enter Exam Fee"<<endl;
	cin>>f;
	}
	friend void student::fee(fine,examFee,transportFee);
};

class transportFee{
	int f;
public:transportFee(){
	f=200;	
	}
	transportFee(){
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
