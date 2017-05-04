#include<iostream>
using namespace std;
class person
{
public:
    person()
    {
        cout<<"Constructor Person called\n";
    }
    virtual ~person()
    {
        cout<<"Destructor Person called\n";
    }
};
class student:public person
{
public:
    student()
    {
        cout<<"Constructor student called\n";
    }
    ~student()
    {
        cout<<"Destructor student called\n";
    }
};
int main()
{
    person *p = new student;
    delete p;
}
