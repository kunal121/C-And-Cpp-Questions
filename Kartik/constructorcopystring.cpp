#include<iostream>
using namespace std;
class test
{
    int i;
    string str;
public:
    test(int a)
    {
        i=a;
        str=new char(i);
        cout<<"Enter the string\n";
        cin>>str;
    }
    test (test &obj)
    {
        str=obj.str;
    }
    void show()
    {
        cout<<str<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the size of string\n";
    cin>>n;
    test obj1(n),obj2(obj1);
    obj1.show();
    obj2.show();
    return 0;
}

