#include<iostream>
using namespace std;
template<class T>
class add{
public:
    T a;
    T b;
    T add1(T a,T b);
};
template<class T>
T add<T>::add1(T a ,T b)
{
    cout<<a+b;
}
int main()
{
    add <int>o;
    o.add1(3,5);
}
