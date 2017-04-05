#include<iostream>
using namespace std;
class abc{
    int count=0;
public:

    void operator ++()
    {
        count=count+2;
    }
    void operator--()
    {
        count=count-1;
    }
    void display()
    {
        cout<<count;
    }
};
int main()
{
    abc t;
    ++t;
    --t;
    t.display();
}
