#include<iostream>
using namespace std;
class examfee;
class transportfee;
class fine;
class student
{
    public:
    int roll,sum;
    char name[10];
    void input()
    {
    cin>>name;
    cin>>roll;
    }
    void total(examfee,transportfee,fine);
};
class examfee
{
public:
    int fee;
     friend class student;
};
class transportfee
{
public:
    int fee;
    friend class student;
};
class fine
{
public:
    int fee;
     friend class student;
};
void student::total(examfee d,transportfee e,fine f)
{
    sum=d.fee+e.fee+f.fee;
}
int main()
{
    student a;
    examfee b;
    transportfee c;
    fine d;
    a.input();
    cin>>b.fee;
    cin>>c.fee;
    cin>>d.fee;
    a.total(b,c,d);
    cout<<a.name<<"\t"<<a.roll<<"\t"<<a.sum<<endl;

}
