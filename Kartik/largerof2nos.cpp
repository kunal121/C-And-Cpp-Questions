#include<iostream>
using namespace std;
void large(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter the two nos";
    cin>>a>>b;
    large(a,b);
}
void large(int a,int b)
{
    if(a>b)
    {
        cout<<"The larger no is "<<a;
    }
    else
    {
        cout<<"The larger no is "<<b;
    }
}
