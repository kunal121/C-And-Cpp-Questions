#include<iostream>
#include<string.h>
using namespace std;
class mark;
class result;
class student
{
public:
    string name,branch;
    int roll;
    student(string x,string y,int z)
    {
        (name=x);
        (branch=y);
        roll=z;
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
    int total;
    mark(string x,string y,int z,int x1):student(x,y,z)
    {
        total=x1;
    }
    ~mark()
    {
        cout<<"dest mark";
    }
    void dis()
    {
        cout<<total;
    }
};
class result:public mark
{
public:
    result(string x,string y,int z,int x1):mark(x,y,z,x1)
    {

    }
    ~result()
    {
        cout<<"dest result";
    }
};
int main()
{
    int roll,marks[3],sum=0;
    char name[50],branch[50];
    cin.getline(name,50);
    cin.getline(branch,50);
    cin>>roll;
    for(int i=0;i<3;i++)
    {
        cin>>marks[i];
        sum+=marks[i];
    }
    result o(name,branch,roll,sum);
    o.student::dis();
    o.mark::dis();
}

