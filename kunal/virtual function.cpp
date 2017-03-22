#include<iostream>
using namespace std;
class media
{
   protected:
       int title=2,price=3;
   public:
    virtual void display()=0;
    virtual void input()=0;

};
class books:public media{
   protected:
       int pages;
   public:
    void input(){
      cin>>pages;
    }
    void display()
    {
      cout<<pages;
    }

};
class tape:public media{
protected:
    int time;
public:
    void input(){
        cin>>time;
    }
    void display()
    {
      cout<<time;
    }

};
int main()
{
    media *p,*q;
    books b;
    tape c;
    p=&b;
    q=&c;
    p->input();
    q->input();
    p->display();
    q->display();
    //p->display();

}
