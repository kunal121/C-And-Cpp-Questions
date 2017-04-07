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
class grade
{
public:
    string r;
    grade(string a)
    {
        r=a;
    }
    void dis()
    {
        cout<<r;
    }
};
class result:public grade,public student
{
public:
    result(string x,string y,int z,string a):student(x,y,z),grade(a)
    {

    }
    ~result()
    {
        cout<<"dest result";
    }
};
int main()
{
    result o("mohit","cse",382,"a");
    o.student::dis();
    o.grade::dis();
}
