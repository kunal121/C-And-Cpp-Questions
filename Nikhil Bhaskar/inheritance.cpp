#include<iostream>
#include<string.h>
using namespace std;
class Name
{
    string name1,branch1;
    int roll1;
    public:
    Name(string name,string branch,int roll)
    {
        name1=name;
        branch1=branch;
        roll1=roll;
    }
    void display()
    {
        cout<<"details->";
        cout<<name1<<"\t"<<branch1<<"\t"<<roll1<<endl;
    }

};
class marks:public Name
{
    int m1,m2,m3;
    public:
    marks(string name,string branch,int roll,int marks1,int marks2,int marks3):Name(name,branch,roll)
    {
        m1=marks1;
         m2=marks2;
          m3=marks3;
    }
    void display()
    {
        cout<<"marks->"<<m1<<"\t"<<m2<<"\t"<<m3<<endl;
    }
};
class result:public marks
{
    public:
    result(string name,string branch,int roll,int marks1,int marks2,int marks3):marks(name,branch,roll,marks1,marks2,marks3)
{

}
};
int main()
{
 string Nikhil,cse;

    result ob("Nikhil","cse",1510991408,45,67,89);
    ob.Name::display();
    ob.marks::display();
}
