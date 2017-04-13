#include<iostream>
using namespace std;
template<class t>
class abc{
t a,b;
public:
void input(t x,t y);
//{
  //  a=x;
    //b=y;
//}
void dis()
{
    cout<<a<<"\t"<<b<<endl;
}



};
template<class t>
  void abc<t>:: input(t x,t y)
{
    a=x;
    b=y;
}
int main()
{
    abc<int>o;
    abc<float>o1;
    abc<char>o2;
    o.input(1,2);
    o1.input(3.4,4.6);
    o2.input('a','b');
    o.dis();
    o1.dis();
    o2.dis();
}
