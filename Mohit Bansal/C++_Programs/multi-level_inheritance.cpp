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
    int a[3];
    mark(string x,string y,int z,int x1,int x2,int x3):student(x,y,z)
    {
        a[0]=x1;
        a[1]=x2;
        a[2]=x3;
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
class result:public mark
{
public:
    result(string x,string y,int z,int x1,int x2,int x3):mark(x,y,z,x1,x2,x3)
    {

    }
    ~result()
    {
        cout<<"dest result";
    }
};
int main()
{
    result o("mohit","cse",382,100,100,100);
    o.student::dis();
    o.mark::dis();
}
