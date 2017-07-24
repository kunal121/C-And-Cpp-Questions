
#include<iostream>
using namespace std;
class Person
{
protected:
    char name[100];
    char gender;
public:
    void ReadData();
    void DisplayData();
};
class Student:public Person
{
protected:
    int rollno;
    char branch[20];
public:
    void ReadData();
    void DisplayData();
};
class Exam:public Student
{
protected:
    int marks[3];
    int total;
public:
    Exam();
    void ReadData();
    void DisplayData(Exam[],int);
};


Exam::Exam(){}
void Exam::ReadData()
    {
    Person::ReadData();
    Student::ReadData();
    for(int i=0;i<3;i++)
        {
        cin>>marks[i];
        total+=marks[i];
    }

}
void Exam::DisplayData(Exam *e,int n)
    {
    for(int i=0;i<n;i++)
        {
        e[i].Person::DisplayData();
        e[i].Student::DisplayData();
        cout<<e[i].total;
        cout<<"\n";
    }
}
void Person::ReadData()
    {
    cin>>name>>gender;
}
void Student::ReadData()
    {
    cin>>rollno>>branch;
}

void Person::DisplayData()
    {
   cout<<name<<" "<<gender<<" ";
}
void Student::DisplayData()
    {
    cout<<rollno<<" "<<branch<<" ";
}


int main()
{
    int n;
    cin>>n;
    Exam objannual[100];
    for(int i=0;i<n;i++)
    {
    objannual[i].ReadData();
    }
    objannual[0].DisplayData(objannual,n);
    return 0;
}
