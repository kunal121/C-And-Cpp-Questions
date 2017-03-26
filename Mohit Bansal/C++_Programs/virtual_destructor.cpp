#include<iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"ac"<<endl;
    }
    virtual ~a()
    {
        cout<<"ad"<<endl;
    }
};
class b:public a
{
public:
    b()
    {
        cout<<"bc"<<endl;
    }
    ~b()
    {
        cout<<"bd"<<endl;
    }
};
int main()
{
    a *pt=new b();
    delete pt;
}
