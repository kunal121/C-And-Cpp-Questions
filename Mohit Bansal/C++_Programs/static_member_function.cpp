#include<iostream>
using namespace std;
class abc
{
    int a;
    static int count;
public:
    void getdata()
    {
        a=++count;
    }
    static void getcount()
    {
        cout<<count;
    }
    void getdata_a()
    {
        cout<<a;
    }
}o,o1,o2;
int abc::count;
int main()
{
    o.getdata();
    o1.getdata();
    o2.getdata();
    abc::getcount();
    o.getdata_a();
    o1.getdata_a();
    o2.getdata_a();
    abc::getcount();

}

