#include<iostream>
using namespace std;
class student
{
    int roll;
    string name,branch;
public:
    student(int x,string y,string z)
    {
        roll=x;
        name=y;
        branch=z;
    }
void display()
{
    cout<<roll<<branch;
}

};
class marks
{
    int marko[3];
    int i;
public:
    marks(int mark[])
    {
        for(i=0;i<3;i++)
        {
            marko[i]=mark[i];
        }
    }
 void display()
 {
    for(i=0;i<3;i++)
        {
           cout<<marko[i];
        }
 }
};
class result:public student,public marks
{
    public:
    result(int c,string d,string e,int f[]):student(c,d,e),marks(f)
    {

    }
};
int main()
{
    int roll,i,marks[3];
    string name,branch;
    cin>>roll>>name>>branch;
    for(i=0;i<3;i++)
    {
        cin>>marks[i];
    }
    result o1(roll,name,branch,marks);
    o1.student::display();
    o1.marks::display();

}
