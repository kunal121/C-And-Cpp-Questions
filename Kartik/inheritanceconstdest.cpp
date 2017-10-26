#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"inside base class const\n";
    }
    ~base()
    {
        cout<<"inside base class dest\n";
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<<"inside derived class const\n";
    }
    ~derived()
    {
        cout<<"inside derived class dest\n";
    }
};
int main()
{
    derived obj;
    return 0;
}
