//Resolving Diamond problem using ## Virtual class ##
#include<iostream>
using namespace std;
class A
{
    int a=10;
public:
    void display()
    {
        cout<<a<<"\n";
    }
};
class B:virtual public A
{
    int b=11;
public:
    void show()
    {
        cout<<b<<"\n";
    }
};
class C:virtual public A
{
    int c=12;
public:
    void show()
    {
        cout<<c<<"\n";
    }
};
class D:public B,public C
{
    int d=13;
public:
    void show()
    {
        cout<<d<<"\n";
    }
};
int main()
{
    D ob;
    ob.display();
    ob.show();
    ob.B::show();
    ob.C::show();

}
