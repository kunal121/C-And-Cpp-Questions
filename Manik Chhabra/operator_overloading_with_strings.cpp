#include<iostream>
#include<string.h>
using namespace std;
class str
{
	int l;
	char *name;
	public:
		str()
		{
			l=0;
		}
		str(char *s)
		{
			l=strlen(s);
			name=new char[l+1];
			strcpy(name,s);
		}
		str operator+(str o)
		{
			str temp;
			temp.l=l+o.l;
			temp.name=new char[temp.l+1];
			strcpy(temp.name,name);
			strcat(temp.name,o.name);
			return temp;
		}
		int operator==(str o)
		{
			if(strcmp(name,o.name)==0)
				return 1;
			else
				return 0;	
		}
		int operator<(str o)
		{
			if(strcmp(name,o.name)<0)
				return 1;
			else
				return 0;	
		}
		int operator>(str o)
		{
			if(strcmp(name,o.name)>0)
				return 1;
			else
				return 0;	
		}
		void display()
		{
			cout<<name;
		}
};
int main()
{
	str s1;
	str s2("hello");
	str s3("world");
	s1=s2+s3;
	s1.display();
	if(s2==s3)
		cout<<"equal";
	if(s2<s3)
		cout<<"less";
	if(s2>s3)
		cout<<"great";		
}
