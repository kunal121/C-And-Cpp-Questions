#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number (1,0,-1)";
    cin>>num;
    try
    {
        if(num == 0)
            throw "zero";
        else if(num == -1)
            throw num;
        else if(num == 1)
            cout<<"number "<<num<<endl;
        else
        throw (float)num;
    }
    catch(int num)
    {
        cout<<num<<" negative"<<endl;
    }
    catch(const char* msg)
    {
        cout<<"No is "<<msg<<endl;
    }
    catch(...)
    {
        cout<<"No match"<<endl;
    }
    cout<<"main()";

}
