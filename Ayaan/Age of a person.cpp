#include<iostream>
#include<string.h>
using namespace std;
class person_data
{
		char name[20];
		int age,year;
		float hcm,hmt;
		public:
		person_data(char names[20],int x,float y)
		{
			strcpy(name,names);
			year=x;
			hmt=y;
		}
	 	void cal_age(int x)
		{
			age=x-year;
		}
		void cal_ht_cms()
		{
			hcm=hmt*100;
		}
		void show()
		{
			cout<<"Approximate age of person: "<<age<<endl;
			cout<<"Height in cms: "<<hcm<<endl;
		}
};
int main()
{
person_data p1("Ram",1975,1.05);
p1.cal_age(2016);
p1.cal_ht_cms();
p1.show();
return 0;
}
