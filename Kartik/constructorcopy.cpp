#include<iostream>
using namespace std;
class test
{
    int i;
public:
    test()
    {
        cout<<"default constructor\n";
        i=10;
    }
    test(int a)
    {
        cout<<"parameterized constructor\n";
        i=a;
    }
    test (test &obj)
    {
        cout<<"copy constructor\n";
        i=obj.i;
    }
    void show()
    {
        cout<<i;
    }
};
int main()
{
    test obj1,obj2(25),obj3(obj1);
    obj1.show();//10
    obj2.show();//parameter
    obj3.show();
    return 0;
}
