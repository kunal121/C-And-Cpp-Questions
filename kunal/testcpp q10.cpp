
#include <iostream>

using namespace std;

class A{
    int a;
  public:
    A(int);
    void show_a();
};

class B:public A{
    int b;
  public:
    B(int x, int y):A(x)
    {
        b=y;
    }
    void show();
};
A::A(int x)
{
    a=x;
}
void A::show_a()
{
    cout<<a;
}

void B::show()
{
    A::show_a();
    cout<<b;
}

int main() {
    int x,y;
    cin >> x >> y;
    B obj1(x,y);
    obj1.show();
    return 0;
}
