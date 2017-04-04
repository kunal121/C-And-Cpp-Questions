#include<iostream>
using namespace std;
class media
{
	protected:
		char title[10];
		int price;
	public:
		virtual void input()
		{
		
		}
		virtual void display()
		{
			
		}
};
class book:public media
{
	protected:
		int pages;
	public:
		void input()
		{
			cout<<"enter title price\n";
			cin>>title>>price;
			cout<<"enter pages\n";
			cin>>pages;;
		}
		void display()
		{
			cout<<title<<"\n"<<price<<"\n"<<pages<<"\n";
		}	
};
class tape:public media
{
	protected:
		int time;
	public:
		void input()
		{
			cout<<"enter time\n";
			cin>>time;;
		}
		void display()
		{
			cout<<time<<"\n";
		}
};
int main()
{
	media *m1,*m2;
	book b;
	tape t;
	m1=&b;
	m2=&t;
	m1->input();
	m2->input();
	m1->display();
	m2->display();
}
