//Default Arguments in array of object
#include<iostream>
#include<string.h>
using namespace std;
class student
{
protected:
    char name[20];
    int rollno;
    char branch[20];
public:
    student(char *s,int roll,char *brnch)
    {
        strcpy(name,s);
        rollno = roll;
        strcpy(branch,brnch);
    }
    void display()
    {
     cout<<name<<"\n"<<rollno<<"\n"<<branch<<"\n";
    }
};
class marks:protected student
{
protected:
    int mark;
public:
    marks(char *s,int roll,char *brnch,int mm):student(s,roll,brnch)
    {
        mark=mm;
    }
};
class result:protected marks
{
public:
    result(char *s,int roll,char *brnch,int mm):marks(s,roll,brnch,mm)
    {}
    void display()
    {
        cout<<name<<"\n"<<rollno<<"\n"<<branch<<"\n";
        cout<<mark<<"\n";
    }
};
int main()
{
    char name[20];
    char branch[20];
    int rollno;
    int mark;
   result r[3]=result(" ",0," ",0);
    for(int i=0;i<=3;i++)
    {
        cin.getline(name,10);
        cin.getline(name,10);
        cin.getline(branch,10);
        cin>>rollno;
        cin>>mark;
         r[i]=result(name,rollno,branch,mark);


    }
    for(int i=0;i<=3;i++)
    {
        cout<<"print\n";
        r[i].display();
    }

}
