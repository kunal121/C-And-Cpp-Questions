#include<iostream>
using namespace std;
void func(int test) throw (int ,char, double, const char *)
{
    if(test == 0)
        throw test;
    if(test == 1)
        throw 'a';
    if(test == 2)
        throw 22.33;
    else
        throw "No Exception Found";
}
int main()
{
    int a;
    cin>>a;
    try
    {
        func(a);
    }
    catch(int i)
    {
        cout<<"Exception caught "<<i<<endl;
    }
    catch(char c)
    {
        cout<<"Exception caught "<<c<<endl;
    }
    catch(double d)
    {
        cout<<"Exception caught "<<d<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
}
