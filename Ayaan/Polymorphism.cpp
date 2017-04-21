#include<iostream>
#include<string.h>
using namespace std;
class dept
{
	protected:
		char name[20],address[100],gender;
		int age;
	public:
		virtual void clerk()=0;
		virtual void display()=0;
};
class CSE:virtual public dept
{
	public:
		void clerk()
		{
			cout<<"Enter name of employee of CSE department ";
			cin>>name;
			cout<<"Enter address of employee of CSE department ";
			cin>>address;
			cout<<"Enter gender of employee of CSE department ";
			cin>>gender;
			cout<<"Enter age of employee of CSE department ";
			cin>>age;
			cout<<"\n\n";
		}
		void display()
		{
			cout<<"Name of employee of CSE department "<<name<<endl;
			cout<<"Address of employee of CSE department "<<address<<endl;
			cout<<"Gender of employee of CSE department "<<gender<<endl;
			cout<<"Age of employee of CSE department "<<age<<endl;
			cout<<"\n\n";
		}
};
class ME:virtual public dept
{
	public:
		void clerk()
		{
			cout<<"Enter name of employee of ME department ";
			cin>>name;
			cout<<"Enter address of employee of ME department ";
			cin>>address;
			cout<<"Enter gender of employee of ME department ";
			cin>>gender;
			cout<<"Enter age of employee of ME department ";
			cin>>age;
			cout<<"\n\n";
		}
		void display()
		{
			cout<<"Name of employee of ME department "<<name<<endl;
			cout<<"Address of employee of ME department "<<address<<endl;
			cout<<"Gender of employee of ME department "<<gender<<endl;
			cout<<"Age of employee of ME department "<<age<<endl<<endl;
			cout<<"\n\n";
		}
};
class personal:public CSE,public ME
{
	public:
		int choice;
		void clerk()
		{

		}
		void display(){
		}
};
int main()
{
	personal p;
	dept *d;
	CSE c;
	ME m;
	do
	{
		cout<<"Enter choice 1 for CSE department,2 for CSE department and 0 to quit!"<<endl;
		cin>>p.choice;
		switch(p.choice)
		{
			case 1:
				d=&c;
				d->clerk();
				d->display();
				break;
			case 2:
				d=&m;
				d->clerk();
				d->display();
		}
	}while(p.choice!=0);
}
