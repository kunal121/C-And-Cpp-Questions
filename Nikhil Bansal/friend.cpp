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
    a = 5;
}
void change1(abc o)
{
    o.a = o.a + 5;
    cout<<o.a;
}
int main()
{
    abc ob,ob1;
    ob.change();
    change1(ob);
}
