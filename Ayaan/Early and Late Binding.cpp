#include<iostream>
#include<string.h>
using namespace std;
class X
{
	protected:
		char name[20];
		char stream[20];
	public:
	virtual void get()
	{
		cout<<"CLASS X get()"<<endl;
		cout<<"Enter your name "<<endl;
		cin>>name;
		cout<<"Enter your stream "<<endl;
		cin>>stream;
	}
	virtual void get(const char n[],const char s[])
	{
		cout<<"CLASS X get(char n[],char s[])"<<endl;
		strcpy(name,n);
		strcpy(stream,s);
	}
	virtual void display()
	{
		cout<<"CLASS X display()"<<endl;
		cout<<"Name is "<<name<<endl<<"Stream is "<<stream<<endl;
	}
};
class Y:public X
{
	protected:
		char name[20];
		char roll[10];
	public:
	void get()
	{
		cout<<"CLASS Y get()"<<endl;
		cout<<"Enter your name "<<endl;
		cin>>name;
		cout<<"Enter your roll number "<<endl;
		cin>>roll;
	}
	void get(const char n[],const char r[])
	{
		cout<<"CLASS Y get(char n[],char r[])"<<endl;
		strcpy(name,n);
		strcpy(roll,r);
	}
	void display()
	{
		cout<<"CLASS Y display()"<<endl;
		cout<<"Name is "<<name<<endl<<"Roll number is "<<roll<<endl;
	}
};
int main()
{
	Y y;
	X *x,xx;
	x=&y;
	x->get();
	cout<<endl;
	x->display();
	cout<<endl;
	x->get("Garima","205");
	cout<<endl;
	x->display();
	cout<<endl;
	x=&xx;
	x->get();
	cout<<endl;
	x->display();
	cout<<endl;
	x->get("Garima","CSE");
	cout<<endl;
	x->display();
}
