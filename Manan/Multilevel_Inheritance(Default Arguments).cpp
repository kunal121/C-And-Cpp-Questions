//Default arguments in inheritance
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[20];
    int rollno;
    char branch[20];
public:
    student(char *s,int roll,char *brnch)
    {
        strcpy(name,s);
        rollno = roll;
        strcpy(branch,brnch);
    }
    void display()
    {
     cout<<name<<"\n"<<rollno<<"\n"<<branch<<"\n";
    }
};
class marks:public student
{
    int mark;
public:
    marks(char *s,int roll,char *brnch,int mm):student(s,roll,brnch)
    {
        mark=mm;
    }
    void display()
    {
        cout<<mark<<"\n";
    }
};
class result:public marks
{
public:
    result(char *s,int roll,char *brnch,int mm):marks(s,roll,brnch,mm)
    {}
    void display()
    {
        student::display();
        marks::display();
    }
};
int main()
{
    result r("manan",123,"CSE",100);
    r.display();
}
