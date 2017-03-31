#include<iostream>
#include<iomanip>
using namespace std;
template<class T,class Q>
class abc
{
    T a;
    Q b;
public:
    abc(T x,Q y);
    void dis();
    };
    template<class T,class Q>
    abc<T,Q>::abc(T x,Q y)
    {
        a=x;
        b=y;
    }
    template<class T,class Q>
    void abc<T,Q>::dis()
    {
        cout<<fixed<<setprecision(2)<<a<<"  "<<b<<endl;
    }

int main()
{
    abc <int,int> o(1,2);
    abc <char,int> o1('a',2);
    abc <float,char> o2(10.2,'b');
    o.dis();
    o1.dis();
    o2.dis();
}
