#include<iostream>
using namespace std;
class abc
{
    int a;
    static int count;
public:
    void getdata(int x)
    {
        a=x;
        count++;
    }
    void getcount()
    {
        cout<<count;
    }
}o,o1,o2;

int main()
{
    int abc::count;
    o.getcount();
    o1.getcount();
    o2.getcount();
    o.getdata(100);
    o1.getdata(200);
    o2.getdata(300);
    o.getcount();
    o1.getcount();
    o2.getcount();

}
