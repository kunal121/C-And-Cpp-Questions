#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    try{
    if(n2!=0)
        cout<<(float)n1/n2;
    else
        throw n2;
    }
    catch(int n)
    {
        cout<<"Exception caught n2 = "<<n;
    }

}
