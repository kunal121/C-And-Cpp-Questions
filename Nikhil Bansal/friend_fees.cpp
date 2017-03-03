#include<iostream>
using namespace std;
class transport_fee;
class fine_fee;
class exam_fee;
class Student
{
    int roll;
    int total;
    string name;
public:
    Student();
    void input();
    void display();
    void calculate(transport_fee , exam_fee , fine_fee);
};
Student::Student()
{
    cout << "ENTER NAME : ";
    cin >> name;
    cout << "ENTER ROLL : ";
    cin >> roll;
}
/*void Student::input()
{
    cout << "ENTER NAME : ";
    cin >> name;
    cout << "ENTER ROLL : ";
    cin >> roll;
}*/
class transport_fee
{
    int fee;
    friend void Student::calculate(transport_fee , exam_fee , fine_fee);
public:
    transport_fee();
    void input();
};
class exam_fee
{
    int fee;
    friend void Student::calculate(transport_fee , exam_fee , fine_fee);
public:
    exam_fee();
    void input();
};
class fine_fee
{
    int fee;
    friend void Student::calculate(transport_fee , exam_fee , fine_fee);
public:
    fine_fee();
    void input();
};
transport_fee::transport_fee()
{
    cout << "ENTER TRANSPORT FEE : ";
    cin >> fee;
}
/*void transport_fee::input()
{
    cout << "ENTER TRANSPORT FEE : ";
    cin >> fee;
}*/
/*void exam_fee::input()
{
    cout << "ENTER EXAM FEE : ";
    cin >> fee;
}*/
exam_fee::exam_fee()
{
    cout << "ENTER EXAM FEE : ";
    cin >> fee;
}
/*void fine_fee::input()
{
    cout << "ENTER FINE : ";
    cin >> fee;
}*/
fine_fee::fine_fee()
{
    cout << "ENTER FINE : ";
    cin >> fee;
}
void Student::calculate(transport_fee ob1 , exam_fee ob2 , fine_fee ob3)
{
    total = ob1.fee + ob2.fee + ob3.fee;
    cout << total << endl;
}
void Student::display()
{
    cout << name << endl;
    cout << roll << endl;
    cout << total << endl;
}
int main()
{
    int i;
    /*Student ob4[2];
    transport_fee ob1[2];
    exam_fee ob2[2];
    fine_fee ob3[2];*/
    for(i=0;i<2;i++)
    {
        /*ob4[i].input();
        ob1[i].input();
        ob2[i].input();
        ob3[i].input();*/
        Student ob4;
        transport_fee ob1;
        exam_fee ob2;
        fine_fee ob3;
        ob4.calculate(ob1,ob2,ob3);
    }
    cout << "RESULTS : " << endl;
    /*for(i=0;i<2;i++)
        ob4[i].display();*/
}

