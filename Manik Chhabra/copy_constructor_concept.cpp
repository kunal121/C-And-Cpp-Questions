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
		str(char *s1)
		{
			l=strlen(s1);
			s=new char[l+1];
			strcpy(s,s1);
		}
		str(str &st)
		{
			l=st.l;
			s=new char[l+1];
			strcpy(s,st.s);
		}
		void display()
		{
			cout<<s<<"\n";
		}
};
int main()
{
	str ob;
	str ob1("CSE");
	ob=ob1;
	str ob2=ob1;
	ob.display();
	ob1.display();
	ob2.display();
	return 0;
}
