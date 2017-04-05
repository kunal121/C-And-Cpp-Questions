#include<iostream>
using namespace std;
class abc{
    int count=0;
public:
    void increment()
    {
        count++;
    }
    void operator ++()
    {
        count=count+2;
    }
    void display()
    {
        cout<<count;
    }
};
int main()
{
    abc t;
    t.increment();
    ++t;
    t.display();
}
