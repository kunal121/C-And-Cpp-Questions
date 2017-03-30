#include<iostream>
using namespace std;
template <class t>
class abc
{
    t a,b;
public:
    void input(){
        cin >> a >> b;
    }
    t getA(){return a;}
    t getB(){return b;}
};
int main()
{
    abc <int> c;
    abc <float> d;
    abc <char> e;
    c.input();
    cout << c.getA() << endl << c.getB() << endl;
    d.input();
    cout << d.getA() << endl << d.getB() << endl;
    e.input();
    cout << e.getA() << endl << e.getB() << endl;
}
