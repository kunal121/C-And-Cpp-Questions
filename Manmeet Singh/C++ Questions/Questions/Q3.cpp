
#include<iostream>
#include<string.h>
using namespace std;
class person
{	char name[20];
	int birth;
	float h;
	public:
	person(const char *n,int by,float height)
	{	strcpy(name,n);
		birth=by;
		h=height;
	}
	void cal_age(int curryr)
	{	birth=curryr-birth;
	}
	void cal_ht_cms()
	{	h*=100;
	}
	void show()
	{	cout<<"Approximate age of "<<name<<" :"<<birth<<endl;
		cout<<"Height in cms : "<<h<<endl;
	}
};
int main()
{	person p1("Ram",1975,1.05);
	p1.cal_age(2016);
	p1.cal_ht_cms();
	p1.show();
	return 0;
}
