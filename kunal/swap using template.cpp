#include<iostream>
using namespace std;
template<class t>
class swap1{
t c;
t d;
public:
swap1(t a,t b)
{
    c=a;
    d=b;
}
t swap2()
{
    t temp;
    temp=c;
    c=d;
    d=temp;
}
t display()
{
    cout<<c<<d;
}
};
int main()
{
 int e,f;
 cin>>e>>f;
 swap1<int>o(e,f);
 o.swap2();
 o.display();
}
