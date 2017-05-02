#include<iostream>
#include<string.h>
using namespace std;
class data
{	char d[20];
	static int c;
	public:
	data(const char *i)
	{	strcpy(d,i);
	}
	~data()
	{	cout<<"Release memory allocated to "<<d<<endl;
		--c;
	}
	void compare(data &d1)
	{	if(!strcmp(d,d1.d))
		cout<<"Both Objects have same text\n";
		else
		cout<<"Both Objects have different text\n";
	}
	void show()
	{	++c;
		cout<<"Data "<<c<<"= "<<d<<endl;
	}
};
int data::c = 0;
main()
{	data d1("obfuscation");
	data d2("obstruction");
	d1.show();
	d2.show();
	d1.compare(d2);
}
