#include<iostream>
using namespace std;
void rect(int a,int b);
void sq(int a);
int main()
{
    int a,b,n;
    cout<<"Press 1 for rectangle and 0 for square";
    cin>>n;
    if(n==1)
    {
        cout<<"Enter the sides";
        cin>>a>>b;
        rect(a,b);
    }
    if(n==0)
    {
        cout<<"Enter the side";
        cin>>a;
        sq(a);
    }
}
void rect(int a,int b)
{
    cout<<"Area of rectangle is "<<a*b;
}
void sq(int a)
{
    cout<<"Area of square is "<<a*a;
}
