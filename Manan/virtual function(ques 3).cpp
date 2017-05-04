#include<iostream>
using namespace std;
class shape
{
protected:
    int l,h;
public:
    void getData()
    {
        cin>>l>>h;
    }
    virtual void display() {}
};
class rectangle:public shape
{
public:
    void display()
    {
        int area = l*h;
        cout<<"\nArea of rectangle : "<<area<<"\n";
    }
};
class triangle:public shape
{
public:
    void display()
    {
        float area = 0.5 * l * h;
        cout<<"\nArea of triangle : "<<area<<"\n";
    }
};
int main()
{
    shape *s ,*p;
    rectangle r;
    triangle t;
    s=&r;
    p=&t;
    s->getData();
    s->display();
    p->getData();
    p->display();
}
