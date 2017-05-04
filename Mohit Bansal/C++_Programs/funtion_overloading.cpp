#include<iostream>
using namespace std;
void sum(int x,int y)
{
    cout<<x-y;
}
void sum(double x,double y)
{
    cout<<x+y;
}
int main()
{
    sum(5,6);
    sum(3.0,4.0);
}
