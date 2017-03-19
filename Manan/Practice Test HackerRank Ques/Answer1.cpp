#include <iostream>
#include<string.h>
using namespace std;


class student
{
  protected:
    int rollno;
    char name[20];
  public:
    student(int r, char *s)
        {
        rollno = r;
        strcpy(name,s);
    }
};


class marks: public student
{
   protected:
     int mar[3];
   public:
    marks(int r,char *s,int m1,int m2,int m3):student(r,s)
    {
        mar[1] = m1;
        mar[2] = m2;
        mar[3] = m3;
    }
};

class result: public marks
{

   public:
    result(int r,char *s,int m1,int m2,int m3):marks(r,s,m1,m2,m3)
        {}
    void display()
        {
        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<mar[1]+mar[2]+mar[3]<<endl;
    }
};

int main()
{
   int r,m1,m2,m3;
   char n[20];
   //cout<<"Enter the student rollno., name and marks for 3 subjects:"<<endl;
   cin>>r;
   cin.get();
   cin.getline(n,20);
   cin>>m1>>m2>>m3;
   result R(r,n,m1,m2,m3);
   //cout<<"The student details (rollno., name , total marks)are: "<<endl;
   R.display();
    return 0;
}
