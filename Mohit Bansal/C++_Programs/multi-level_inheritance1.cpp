#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    char name[50],branch[50];
    int roll;
    student()
    {
        cin>>name>>branch>>roll;
    }
    ~student()
    {
        cout<<"dest student";
    }
    void dis()
    {
        cout<<name<<endl<<branch<<endl<<roll<<endl;
    }
};
class mark:public student
{
public:
    int a[3];
    mark(student detail[5]):student(detail)
    {
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
    }
    ~mark()
    {
        cout<<"dest mark";
    }
    void dis()
    {
        for(int i=0;i<3;i++)
            cout<<a[i];
    }
};
class scholarship:public mark
{
public:
    scholarship(student detail[5]):mark(detail)
    {

    }
    ~scholarship()
    {
        cout<<"dest scholarship";
    }
};
int main()
{
    student detail[5];
    scholarship o(detail);
    o.student::dis();
    o.mark::dis();
}


