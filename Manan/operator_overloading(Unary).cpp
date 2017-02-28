#include<iostream>
using namespace std;
class counterC
{
    int counter;
public:
    counterC()
    {
        counter = 0;
    }
    void operator++()
    {
        ++counter;
    }
    void operator--()
    {
        --counter;
    }
    void display()
    {
        cout<<"Counter is "<<counter<<"\n";
    }
};
int main()
{
    counterC c;
    c.display();
    ++c;
    c.display();
    --c;
    c.display();
}
