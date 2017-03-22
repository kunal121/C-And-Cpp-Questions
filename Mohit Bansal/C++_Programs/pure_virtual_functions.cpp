#include<iostream>
using namespace std;
class media
{
protected:
    string title;
    int price;
public:
    media(string x,int y)
    {
        title=x;
        price=y;
    }
    virtual void display()=0;

};
class book:public media
{
    int pages;
public:
    void display()
    {
        cout<<pages;
    }
    book(int z,string x,int y):media(x,y)
    {
        pages=z;
    }
};
class tape:public media
{
    int time;
public:
    void display()
    {
        cout<<time;
    }
    tape(int a,string x,int y):media(x,y)
    {
        time=a;
    }
};
int main()
{
    book b(100,"prog",250);
    tape t(20,"dbms",500);
    media *m;
    m=&b;
    m->display();
    m=&t;
    m->display();
}
