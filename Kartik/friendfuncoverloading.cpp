#include<iostream>
using namespace std;
class complex
{
    int real,imag;
public:
    void get()
    {
        cout<<"real";
        cin>>real;
        cout<<"complex";
        cin>>imag;
    }
    void show()
    {
        if(imag>0)
        {
            cout<<real<<"+"<<imag<<"i";
        }
        else
        {
            cout<<real<<imag<<"i";
        }
    }
    friend complex operator +(complex a,complex b);
};
complex operator +(complex a,complex b)
{
    complex z;
    z.real=a.real+b.real;
    z.imag=a.imag+b.imag;
    return z;
}
int main()
{
    complex C1,C2,C3;
    C1.get();
    C2.get();
    C3=C1+C2;
    C3.show();
    return 0;
}
