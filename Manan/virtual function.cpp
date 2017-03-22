//using virtual function
#include<iostream>
using namespace std;
class weapon
{
public:
    virtual void feature() = 0;

};

class knife:public weapon
{
public:
    void feature()
    {
        cout<<"knife";
    }
};
class fire:public weapon
{
public:
    void feature()
    {
        cout<<"fire";
    }
};
int main()
{
    weapon *w,*u;
    fire f;
    knife k;
    w = &f;
    u = &k;
    w->feature();
    u->feature();
}
