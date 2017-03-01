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
 char name[50],branch[50];
 int roll,m1,m2,m3;

   cout<<"enter name"<<endl;
   cin.getline(name,50);
   cout<<"enter branch"<<endl;
   cin>>branch;
   cout<<"enter roll no."<<endl;
   cin>>roll;
   cout<<"enter marks"<<endl;
   cin>>m1>>m2>>m3;


    result ob(name,branch,roll,m1,m2,m3);
    ob.Name::display();
    ob.marks::display();
}
