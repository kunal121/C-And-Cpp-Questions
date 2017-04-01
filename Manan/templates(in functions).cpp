#include<iostream>
using namespace std;
template<class a,class b>
b maximum(a x,b y)
{
    return (x>y?x:y);
}
int main()
{
    int a;
    cin>>a;
    float b;
    cin>>b;
    cout<<maximum(a,b);
}
