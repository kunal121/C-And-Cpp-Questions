//Inheriting protected members using protected inheritance
#include<iostream>
using namespace std;
class student
{
protected:
    char name[20];
    int rollno;
    char branch[20];
public:
    student()
    {
        cout<<"Enter name roll no and branch:";
        cin>>name;
        cin>>rollno;
        cin>>branch;
    }
};
class marks:protected student
{
protected:
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
};
class result:protected marks
{
public:
    result()
    {}
    void display()
    {
        cout<<name<<"\n"<<rollno<<"\n"<<branch<<"\n";

        for(int i=0;i<3;i++)
            {
                cout<<mark[i]<<"\n";
        }
    }
};
int main()
{
    result r;
    r.display();
}
