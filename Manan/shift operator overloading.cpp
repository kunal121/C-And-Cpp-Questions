#include<iostream>
using namespace std;
class abc
{
    int a,b,c;
public:
    friend istream& operator >> (istream &din , abc &o)
    {
        din>>o.a;
        din>>o.b;
        din>>o.c;
        return din;
    }
    friend ostream& operator << (ostream &dout , abc &o)
    {
        dout<<"Outputs are : "<<endl;
        dout<<o.a<<endl;
        dout<<o.b<<endl;
        dout<<o.c<<endl;
        return dout;
    }
};
int main()
{
    abc ob;
    cin>>ob;
    cout<<ob;
}
