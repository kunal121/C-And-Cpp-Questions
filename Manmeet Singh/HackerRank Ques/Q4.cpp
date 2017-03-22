#include <iostream>
using namespace std;

class A{
  protected:
    int a;
  public:
    A(int);
};

class B: public A{
  protected:
    int b;
  public:
    B(int,int);
};

class C: public B{
    int c;
  public:
    C(int,int,int);
    void show();
};
C::C(int x,int y,int z):B(x,y)
    {
    c=z;
}
B::B(int x,int y):A(x)
    {
    b=y;
}
A::A(int x)
    {
    a=x;
}
void C::show()
    {
    cout<<a<<b<<c;
}
int main() {
    int x,y,z;
    cin >> x >> y >> z;
    C obj1(x,y,z);
    obj1.show();
    return 0;
}
