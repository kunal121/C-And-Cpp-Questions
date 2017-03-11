#include<iostream>
using namespace std;
class media
{
protected:
    char title[20];
    int price;
public:
    virtual void input()
    {

    }
    virtual void display()
    {

    }
};
class book:public media
{
protected:
    int pages;
public:
    void input()
    {
        cin>>pages;
    }
    virtual void display()
    {
        cout<<pages;
    }
};
class tape:public media
{
protected:
    int tape;
public:
    void input()
    {
       cin>>tape;
    }
    void display()
    {
     cout<<tape;
    }
};
int main()
{
    media *m,*n;
    book b;
    tape t;
    m=&b;
    n=&t;
    m->input();
    m->display();
    n->input();
    n->display();
}
