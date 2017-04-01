#include<iostream>
using namespace std;
class maximum
{
public:
    int n;
    void input()
    {
        cin>>n;
    }
    maximum& greater_num(maximum &);
};
maximum& maximum::greater_num(maximum &o)
{
    if(o.n>n)
        return o;
    else
        return *this;
}
int main()
{
    maximum o1,o2;
    maximum max_n;
    o1.input();
    o2.input();
    max_n=o1.greater_num(o2);
    cout<<max_n.n;
}

