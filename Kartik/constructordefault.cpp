#include<iostream>
using namespace std;
class test
{
    int i;
public:
    test()
    {
        i=10;
    }
    void show()
    {
        cout<<i;
    }
};
int main()
{
    test obj;
    obj.show();//10
    return 0;
}
