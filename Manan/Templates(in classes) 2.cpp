#include<iostream>
#include<iomanip>
using namespace std;
template<class T,class Q>
class abc
{
    T a;
    Q b;
public:
    void input(T x,Q y)
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
    abc <int,int> o;
    abc <char,int> o1;
    abc <float,char> o2;
    o.input(1,2);
    o1.input('a',2);
    o2.input(10.2,'o');
    o.dis();
    o1.dis();
    o2.dis();
}
