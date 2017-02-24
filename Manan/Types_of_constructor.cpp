#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc(int x)
    {
        a=x;
        cout<<"\nParameterized constructor\n";
        cout<<a<<"\n";
    }
    abc(abc &k)
    {
        a=k.a;
        cout<<"\nCopy constructor\n";
        cout<<a<<"\n";
    }
    abc()
    {
        cout<<"Enter a number";
        cin>>a;
        cout<<"\nNormal constructor\n";
        cout<<a<<"\n";
    }

};
int main()
{
    abc o;
    int n;
    cout<<"Enter another number";
    cin>>n;
    abc o1(n);
    abc o2(o1);
    return 0;
}
