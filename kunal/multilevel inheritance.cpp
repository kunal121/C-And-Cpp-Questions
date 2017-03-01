#include<iostream>
using namespace std;
class student
{

public:
    int roll,branch;
    char name[10];
    void input()
    {
        cout<<"enter roll name branch";
        cin>>roll>>name>>branch;
    }

};
class marks:public student
{

public:
    int sub[3],i;
    void input()
    {
        for(i=0;i<3;i++)
        {
            cin>>sub[i];
        }
    }
};
class result:public marks
{
public:
    void display()
    {
        cout<<roll<<branch<<name;
        for(i=0;i<3;i++)
        {
            cout<<sub[i];
        }
    }
};
int main()
{
    result o1;
    o1.student::input();
    o1.marks::input();
    o1.display();
}
