#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    try
    {
        if((x-y)!=0)
        {
            cout<<(z/(x-y));
        }
        else
            throw 0;
    }
    catch(int i)
    {
        cout<<i;
    }
}
