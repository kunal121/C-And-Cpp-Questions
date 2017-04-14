
#include<iostream>
using namespace std;
template<class m>
 void add(m a,m b)
{
    cout<<a<<b;
}
template<class t>
class height
{
    t x,y;
    height(t a,t b)
    {
        x=a;
        y=b;
    }
    t add(t h1,t h2)
    {
        t temp;
        temp.a=h1.a+h2.a;
        temp.b=h1.b+h2.b;
        return temp;

    }
};
int  main()
{
  int a=10,b=20;
  float c=2.1,d=3.5;
  cout<<"integers";
  add(a,b);
  cout<<"flaot";
  add(c,d);
 height h1(4,6),h2(5,4),h3;
  h3=add(h1,h2);
  cout<<h3;

}
