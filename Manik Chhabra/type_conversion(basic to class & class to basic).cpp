#include<iostream>
#include<string.h>
using namespace std;
class str
{
	int l;
	char *s;
	public:
		str()
		{
			l=0;
		}
		str(char p[20])
		{
			l=strlen(p);
			s=new char[l+1];
			strcpy(s,p);
		}
		void display()
		{
			cout<<s;
		}
		void getdata()
		{
			s=new char[10];
			cin>>s;
			l=strlen(s);
		}
		operator char*()
		{
			char *temp;
			temp=new char[l+1];
			strcpy(temp,s);
			return temp;
		}
};
int main()
{
	str s1;
	char name[20];
	cin>>name;
	s1=name;
	s1.display();
	str s2;
	s2.getdata();
	char *desig;
	desig=s2;
	cout<<desig;
}
