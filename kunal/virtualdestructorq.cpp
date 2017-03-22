#include<iostream>
using namespace std;
class person
{
protected:
    int age;
    string name;
public:
     virtual void getdata()
     {

     }
     virtual void display()
     {

     }
};
class proffesor:public person
{
protected:
    int marks[10],i;
    int id;
public:
    void getdata()
    {
        cin>>age>>name;
        for(i=0;i<3;i++)
        {
            cin>>marks[i];
        }
        cin>>id;
    }
    void display()
    {
        cout<<age<<name;
        cout<<id;
        for(i=0;i<3;i++)
        {
            cout<<marks[i];
        }
    }
};
class student:public person
{
    int publicationId;
public:
    void getdata()
    {
        cin>>publicationId;
    }
    void display()
    {
        cout<<publicationId;
    }

};
class hod:public person
{
    int id;
public:
    void getdata()
    {
        cin>>id;
    }
    void display()
    {
        cout<<id;
    }
};
int main()
{
    person *a,*b,*c;
    proffesor o1;
    student o2;
    hod o3;
    a=&o1;
    b=&o2;
    c=&o3;
    a->getdata();
    a->display();
    b->getdata();
    b->display();
    c->getdata();
    c->display();

}
