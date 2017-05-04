#include<iostream>
using namespace std;
class A{
    int a;
  public:
    virtual void get();
    virtual void show();
};
class B : public A{
    int b;
  public:
    void get();
    void show();
};
void A::get()
        {
        cin>>a;
    }
   void A::show()
        {
        cout<<a;
    }

void B::get()
    {
    A::get();
    cin>>b;
}
void B::show()
    {
    A::show();
    cout<<b;
}

   int main() {
    A * ptr;
    B obj1;
    ptr = & obj1;
    ptr->get();
    ptr->show();
    return 0;
    }
