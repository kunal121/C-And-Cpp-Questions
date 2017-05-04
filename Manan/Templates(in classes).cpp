#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
class abc
{
    T a,b;
public:
    void input(T x,T y)
    {
        a=x;
        b=y;
    }
    void dis()
    {
        cout<<fixed<<setprecision(2)<<a<<"  "<<b<<endl;
    }
};
int main()
{
    abc <int> o;
    abc <char> o1;
    abc <float> o2;
    o.input(1,2);
    o1.input('a','b');
    o2.input(10.2,2.99);
    o.dis();
    o1.dis();
    o2.dis();
}
