#include<iostream>
using namespace std;
template<class T,class F>
T add(T a,F b)
{
    return a+b;
}
int main()
{
    double c;
    c=add(3.4,4);
    cout<<c;
}
