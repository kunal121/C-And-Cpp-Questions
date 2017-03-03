//Inheriting private members using public inheritance
#include<iostream>
using namespace std;
class student
{
    char name[20];
    int rollno;
    char branch[20];
public:
    student()
    {
        cout<<"Enter name rollno and branch:";
        cin>>name;
        cin>>rollno;
        cin>>branch;
    }
    void display()
    {
     cout<<name<<"\n"<<rollno<<"\n"<<branch<<"\n";
    }
};
class marks:public student
{
    int mark[3];
public:
    marks()
    {
        cout<<"Enter marks of 3 subjects:";
        for(int i=0;i<3;i++)
            {
                cin>>mark[i];
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
            {
                cout<<mark[i]<<"\n";
        }
    }
};
class result:public marks
{
public:
    result()
    {}
    void display()
    {
        student::display();
        marks::display();
    }
};
int main()
{
    result r;
    r.display();
}
