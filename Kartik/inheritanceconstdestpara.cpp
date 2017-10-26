#include<iostream>
using namespace std;
class base
{
    int a,b;
public:
    base(int i)
    {
        a=i;
        b=i;
    }
    base(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
class derived:public base
{
    int c;
public:
    derived(int i):base(20,30)
    {
        c=i;
    }
    derived(int i,int j):base(i,j)
    {
        c=i;
    }
    void show()
    {
     cout<<"c="<<c<<endl;
     base::show();
    }
};
int main()
{
    derived obj(10);
    //derived obj(10,20);
    obj.show();
}
