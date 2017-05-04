#include<iostream>
using namespace std;
class head{
    public:
	int emps;
	virtual void get()=0;
};
class cse:public head
{
	public:
	cse(){
		cout<<"Enter employees in CSE : ";
		cin>>emps;
	}
	void get(){
		cout<<"No. of employees in CSE :"<<emps<<endl;
	}
};
class ece:public head
{
	public:
	ece(){
		cout<<"Enter employees in ECE : ";
		cin>>emps;
	}
	void get(){
		cout<<"No. of employees in ECE :"<<emps<<endl;
	}
};
class me:public head
{
	public:
	me(){
		cout<<"Enter employees in ME : ";
		cin>>emps;
	}
	void get(){
		cout<<"No. of employees in ME :"<<emps<<endl;
	}
};
main()
{	head* h=new cse;
	h->get();
	h=new ece;
	h->get();
	h=new me;
	h->get();
}
