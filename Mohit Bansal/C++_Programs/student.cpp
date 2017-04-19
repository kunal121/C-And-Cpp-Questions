#include<iostream>
using namespace std;
class fee;
class fine;
class student
{
    int rollno;
    char name[10],branch[20];
public:
    void input()
    {
        cout<<"enter the name"<<"\n";
        cin>>name;
        cout<<"enter the roll no"<<"\n";
        cin>>rollno;
        cout<<"enter the branch"<<"\n";
        cin>>branch;
    }
    void display(fee,fine);
};
class fee
{
    int a;
public:
    void input()
    {
        cout<<"enter the fee"<<"\n";
        cin>>a;
    }
    friend void student::display(fee,fine);
};
class fine
{
    int b;
public:
    void input()
    {
        cout<<"enter the fine"<<"\n";
        cin>>b;
    }
    friend void student::display(fee,fine);
};
void student::display(fee x,fine y)
{
    cout<<"name"<<"\t"<<name<<"\n"<<"roll no"<<"\t"<<rollno<<"\n";
    cout<<"total fee\t"<<x.a+y.b;
}
int main()
{
    student ob1;
    fee ob2;
    fine ob3;
    ob1.input();
    ob2.input();
    ob3.input();
    ob1.display(ob2,ob3);
}
