#include<iostream>
using namespace std;
class stud
{
    char name[20];
    int roll;
    char branch[5];
public:
    void input()
    {
        cout<<"enter student name";
        cin>>name;
        cout<<"enter roll no";
        cin>>roll;
        cout<<"enter branch";
        cin>>branch;
    }
    void dis()
    {
        cout<<name<<roll<<branch<<total;
    }
    friend void exam_fee();
};
class
