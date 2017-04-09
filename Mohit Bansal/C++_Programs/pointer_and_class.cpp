#include<iostream>
using namespace std;
class abc
{
    int a,b;
public:
    void input()
    {
        cin>>a>>b;
    }
    void dis()
    {
        cout<<a<<b;
    }
};
int main()
{
    abc o;
    abc *p=new abc;
    p=&o;
    p->input();
    p->dis();
}
