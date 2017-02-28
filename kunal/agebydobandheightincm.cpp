#include<iostream>
#include<string.h>
using namespace std;
class data
{

float a;
int b;
public:
data(int p,float q)
    {
        b=p;
        a=q;
    }
void cal_age(int year)
    {
	    b=year-b;
    }
void cal_ht_cms()
    {
        a=a*100;

    }
void show()
    {
cout<<"Approximate age of a person : "<<b;
cout<<"\n height in cms : "<<a;
    }
};
int main()
{
data p1(1975,1.05);
p1.cal_age(2017);
p1.cal_ht_cms();
p1.show();
return 0;
}
