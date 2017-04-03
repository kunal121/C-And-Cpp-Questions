#include<iostream>
using namespace std;
class abc2;
class abc1
{
    int a;
public:
    void input()
    {
        cin>>a;
    }
    void disp()
    {
        cout<<a<<"\n";
    }
    friend void swap(abc1 &o1,abc2 &o2);
};
class abc2
{

    int b;
public:
    void input()
    {
        cin>>b;
    }
    void disp()
    {
        cout<<b<<"\n";
    }
    friend void swap(abc1 &o1,abc2 &o2);
};
void swap(abc1 &o1,abc2 &o2)
{
    int temp;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}
int main()
{
    abc1 x;
    abc2 y;
    x.input();
    y.input();
    swap(x,y);
    x.disp();
    y.disp();
}
