#include<iostream>
using namespace std;
template<class m>
void swap1(m a,m b)
{
    m temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<b;


}

int main()
{
    int a,b;
    float c,d;
    cin>>a>>b;

    cout<<"swapping of integers is";
    swap1(a,b);
    cin>>c>>d;
    cout<<"swapping of integers is";
    swap1(c,d);


}
