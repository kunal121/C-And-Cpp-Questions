#include<iostream>
using namespace std;
class abc
{
public:
    int a;
   /* void operator++()
    {
        a=a+1;
    }*/
    void operator++(int)
    {
        a++;
    }
};
int main()
{
    abc o;
    cin>>o.a;
    o++;
    cout<<o.a;
}
