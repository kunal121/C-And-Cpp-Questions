#include<iostream>
using namespace std;
class r
{
    int a,b;
public:
    r(int x,int y)
    {
        a=x;
        b=y;
    }
    void dis()
    {
        cout<<a<<b;
    }
};
class b:public r
{
    int c,d;
public:
    b(int x,int y,int z,int h):r(z,h)
    {
        c=x;
        d=y;
    }
    void dis()
    {
        cout<<c<<d;
    }
};
int main()
{
    b o(2,3,4,5);
    o.dis();
    o.r::dis();
}

