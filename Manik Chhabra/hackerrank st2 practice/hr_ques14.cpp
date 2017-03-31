#include <iostream>
using namespace std;
int size;

class arradd
{
    int a[100];
public:
    void getdata()
    {
        for(int i=0; i<size; i++)
            cin>>a[i];
    }
    arradd operator+(arradd &o)
    {
        arradd t;
        for(int i=0; i<size; i++)
        {
            t.a[i] = a[i] + o.a[i];
        }
        return t;
    }
    void putdata()
    {
        for(int i=0; i<size; i++)
            cout<<a[i]<<" ";
    }

};

int main()
{
    cin>>size;

    arradd A1,A2,A3;

    A1.getdata();
    A2.getdata();
    A3=A1+A2;
    A3.putdata();
}
