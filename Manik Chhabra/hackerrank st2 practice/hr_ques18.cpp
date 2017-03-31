#include <iostream>
#include<string.h>
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
    int m1,m2,m3;
public:
    result(int rno,char *c,int x,int y,int z):student(rno,c)
    {
        m1 = x;
        m2 = y;
        m3 = z;
    }
    void display()
    {
        show_rno();
        cout<<course<<endl<<m1+m2+m3;
    }
};
void student::show_rno()
{
    cout<<roll_no<<endl;
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
}
