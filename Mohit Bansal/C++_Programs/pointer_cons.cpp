#include<iostream>
using namespace std;
class abc
{
    int a,b;
public:
    abc()
    {
        a=0;
        b=0;
    }
    abc(int x,int y)
    {
        a=x;
        b=y;
    }
    void dis()
    {
        cout<<a<<b;
    }
};
int main()
{
    abc o1,o2(4,5);
    abc *p=new abc[10];
    p->dis();
    p++;
    p->dis();
}

