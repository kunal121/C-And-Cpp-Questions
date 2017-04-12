#include<iostream>
using namespace std;
template<class t,class m>
void swap1(t a, m b)
{
    float temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<"\t"<<b;
}
int main()
{
    int a;
    float b;
    cin>>a>>b;
    cout<<"int and flaot are swapped ";
    swap1(a,b);

}

