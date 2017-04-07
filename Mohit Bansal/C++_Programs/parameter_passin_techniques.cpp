#include<iostream>
using namespace std;
void multiply(int *x,int *y)
{
    *x=*x*10;
    *y=*y*10;
    cout<<*x<<"\t"<<*y<<"\t";
}
int main()
{
    int a,b;
    cin>>a>>b;
    multiply(&a,&b);
    cout<<a<<"\t"<<b<<"\t";
}
