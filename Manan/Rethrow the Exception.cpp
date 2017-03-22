#include<iostream>
using namespace std;
void func()
{
    try
    {
        throw "Hello";
    }
    catch(const char *)
    {
        cout<<"Inside Function"<<endl;
        throw;
    }
}
int main()
{
    cout<<"main"<<endl;
    try{
    func();
    }
    catch(const char *)
    {
        cout<<"Inside Main"<<endl;
    }
}
