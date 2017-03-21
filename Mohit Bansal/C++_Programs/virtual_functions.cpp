#include<iostream>
using namespace std;
class shape
{
public:
    double l,h;
    void get_data()
    {
        cin>>l>>h;
    }
    virtual void display()
    {
        cout<<"area";
    }
};
class triangle:public shape
{
public:
    void display()
    {
        cout<<"area:"<<(.5*l*h);
    }
};
class rectangle:public shape
{
public:
    void display()
    {
        cout<<"area:"<<(l*h);
    }
};
int main()
{
    shape *s;
    triangle t;
    s=&t;
    s->get_data();
    s->display();
    rectangle r;
    s=&r;
    s->get_data();
    s->display();
}
