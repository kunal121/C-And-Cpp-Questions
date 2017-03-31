#include<iostream>
using namespace std;
class rectangle
{
    int l,b;
public:
    void input()
    {
        cout<<"enter length";
        cin>>l;
        cout<<"enter breadth";
        cin>>b;
    }
    void area();
};
    void rectangle::area()
    {
        cout<<"\narea is"<<"\nl*b\n"<<l*b;
    }
int main()
{
    rectangle r;
    r.input();
    r.area();
}
