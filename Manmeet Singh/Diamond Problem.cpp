#include<iostream>
using namespace std;
class A
{
    int a;
public:
    public:A(int x)
    {

        a=x;
    };


};
class B:public virtual A
{

    int b;
public:
    B(int x,int y):A(x)
    {
        b=y;
    }
    void display()
    {
        cout<<b;
    }
};
class C:virtual public A
{
    int d;
public:
    C(int x,int y):A(x)
    {
        d=y;
    }
    void display()
    {
        cout<<d;
    }
};
class D:public B,public C
{
    int c;
    public:
    D(int x,int y,int z):B(x,y),C(x,y),A(x)
    {
        c=z;
    }
    void display()
    {
        cout<<c;
    }
};
int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  D ob(x,y,z);
  ob.display();

}
