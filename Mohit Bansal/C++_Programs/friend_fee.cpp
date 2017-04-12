#include<iostream>
using namespace std;
class student
{
    int roll;
    string name,branch;
public:
    void input();
    void display(exam_fee,fine);
};
void student::input()
{
    cout<<"enter name";
    cin>>name;
    cout<<"enter roll number";
    cin>>roll;
    cout<<"enter branch";
    cin>>branch;
}
class exam_fee
{
    int a;
public:
    void fee()
    {
        cout<<"enter exam fee";
        cin>>a;
    }
    friend void student::display(exam_fee,fine_fee);
};
class fine_fee
{
    int b;
public:
    void fine()
    {
        cout<<"enter fine fee";
        cin>>b;
    }
    friend void student::display(exam_fee,fine_fee);
};
friend void student::display(exam_fee x,fine_fee y)
{
    cout<<"name"<<"\t"<<"branch"<<"\t"<<"roll number";
    cout<<name<<"\t"<<branch<<"\t"<<roll;
    cout<<"total";
    cout<<total;
}
int main()
{
    student o;

}
