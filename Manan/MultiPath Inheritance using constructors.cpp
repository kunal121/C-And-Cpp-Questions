//Resolving Diamond problem using ## Virtual class ##
#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"a = "<<a<<"\n";
    }
};
class B:virtual public A
{
    int b;
public:
    B(int x,int y):A(x)
    {
        b=y;
    }
    void show()
    {
        cout<<"b = "<<b<<"\n";
    }
};
class C:virtual public A
{
    int c;
public:
    C(int x,int y):A(x)
    {
        c=y;
    }
    void show()
    {
        cout<<"c = "<<c<<"\n";
    }
};
class D:public B,public C
{
    int d;
public:
    D(int x,int y,int z):B(x,y),C(x,y),A(x)
    {
        d=z;
    }
    void show()
    {
        cout<<"d = "<<d<<"\n";
    }
};
int main()
{
    D ob(10,11,12);
    ob.display();
    ob.show();
    ob.B::show();
    ob.C::show();

}
