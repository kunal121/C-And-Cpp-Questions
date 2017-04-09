#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    int b;
    abc()
    {
        a=5;
        b=6;
        cout<<a<<b;
    }
    void display()
    {
        cout<<a<<b;
    }
};
int main()
{
    abc o;
    o.display();
}
