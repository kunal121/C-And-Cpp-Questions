#include<iostream>
using namespace std;
class test
{
    int i;
public:
    test()
    {
        cout<<"constuctor entered\n";
    }
    void show()
    {
        cout<<i;
    }
};
int main()
{
    test obj;
    obj.show();//garbage value
    return 0;
}
