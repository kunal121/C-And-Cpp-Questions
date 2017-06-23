#include <iostream>
using namespace std;
class figure
{
public:
    float radius, height,vol;
    virtual void volume()=0;
};

class cone:public figure
{
public:
    void input()
    {
        cin>>radius>>height;
    }
    void volume()
    {
        cout<<(3.14*radius*radius*height)/3<<endl;
    }
};
class cylinder:public figure
{
public:
    void input()
    {
        cin>>radius>>height;
    }
    void volume()
    {
        cout<<(3.14*radius*radius*height)<<endl;
    }
};

int main()
{
    cone ob1;
    ob1.input();
    ob1.volume();
    cylinder ob2;
    ob2.input();
    ob2.volume();
    return 0;
}
