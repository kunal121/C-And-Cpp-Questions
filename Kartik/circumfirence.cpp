#include<iostream>
#define pi 3.14
using namespace std;
void cir(int r);
int main()
{
    int r;
    cout<<"Enter the radius";
    cin>>r;
    cir(r);
}
void cir(int r)
{
    cout<<"Circumfierence of circle "<<2*pi*r;
}
