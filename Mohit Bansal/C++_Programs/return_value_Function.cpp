#include<iostream>
using namespace std;
int& max(int &a,int &b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int x,y;
    cin>>x>>y;
    max(x,y)=1;
    cout<<x<<"\t"<<y<<"\t";
}

