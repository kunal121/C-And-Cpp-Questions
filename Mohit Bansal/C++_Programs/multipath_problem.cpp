#include<iostream>
#include<string.h>
using namespace std;
class mark;
class result;
class grade;
class student
{
public:
    string name,branch;
    int roll;
    student(string x,string y)
    {
        (name=x);
        (branch=y);
    }
    student(int z)
    {
        roll=z;
    }
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
class grade:virtual public student
{
public:
    string r;
    grade(int z,string a):student(z)
    {
        r=a;
    }
    void dis1()
    {
        cout<<r;
    }
};

class mark:public virtual student
{
public:
    int a[3];
    mark(string x,string y,int p,int q,int r):student(x,y)
    {
        a[0]=p;
        a[1]=q;
        a[2]=r;
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
class result:public mark,public grade
{
public:
    result(string x,string y,int z,int p,int q,int r,string a):student(x,y),mark(x,y,p,q,r),grade(z,a)
    {

    }
    ~result()
    {
        cout<<"dest result";
    }
};
int main()
{
    result o("mohit","cse",382,100,100,100,"a");
    o.student::dis();
    o.mark::dis();
    o.grade::dis();

}


