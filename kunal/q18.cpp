#include <iostream>
#include <string>
using namespace std;
class student
{
int roll_no;
protected:
char course[10];
public:
student(int rno,char *c)
{
roll_no=rno;
strcpy(course, c);
}
void show_rno();

};
class result: protected student
{
    protected:
    int a1,a2,a3;
    public:
    result(int rno,char course[10],int m1,int m2,int m3):student(rno,course)
    {
        a1=m1;
        a2=m2;
        a3=m3;
    }
    void display()
    {
        student::show_rno();
        cout<<a1+a2+a3<<"\n";
    }
};

void student::show_rno()
{
    cout<<roll_no<<"\n";
    cout<<course<<"\n";
}
int main()
{
int rno,m1,m2,m3;
char course[10];
cin>>rno;
cin.ignore();
cin.getline(course,10);
cin>>m1>>m2>>m3;
result r(rno,course,m1,m2,m3);
r.display();
return 0;
}
