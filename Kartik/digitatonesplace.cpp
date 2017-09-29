#include<iostream>
using namespace std;
void one(int n);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    one(n);
}
void one(int n)
{
    int x;
    x=n%10;
    cout<<"The digit at ones place is : "<<x;
}
