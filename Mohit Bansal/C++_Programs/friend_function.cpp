#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    void change();
    friend void change1(abc o);
};
void abc::change()
{
    a=10;
    a=a+5;
    cout<<a<<"\n";
}
void change1(abc t)
{
    t.a=t.a+5;
    cout<<t.a;
}
int main()
{
    abc o,o1;
    o.change();
    change1(o);
}
