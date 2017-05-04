#include<iostream>
using namespace std;
class person
{
    protected:
    int age;
    char name[20];
public:
    void getData()
    {
        cin>>age;
        cin>>name;
    }
    virtual void display()
    {}
    virtual void get()
    {}
};
class professor:public person
{
    protected:
    int id;
    int pub;
public:
    void get()
    {
        cin>>id;
        cin>>pub;
    }
    void display()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Publication : "<<pub<<endl;
    }
    ~professor()
    {
        cout<<"Dest Prof";
    }
};
class student:public person
{
    protected:
    int id;
    int marks[5];
public:
    void get()
    {
        cin>>id;
        for(int i=0;i<5;i++)
            cin>>marks[i];
    }
    void display()
    {
        cout<<"ID : "<<id<<endl;
        for(int i=0;i<5;i++)
                        cout<<"marks in sub"<< i;
    }
    ~student()
    {
        cout<<"Dest student";
    }

};
class HOD:public person
{
protected:
    int id;
    int pub;
public:
    void get()
    {
        cin>>id;
        cin>>pub;
    }
    void display()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Publication : "<<pub<<endl;
    }
    ~HOD()
    {
        cout<<"Dest HOD";
    }
};

int main()
{
    person *p,*q,*r;
    professor a;
    student b;
    HOD c;
    p=&a;
    q=&b;
    r=&c;
    p->getData();

    p->get();
    p->display();

    q->get();
    q->display();

    r->get();
    r->display();
}
