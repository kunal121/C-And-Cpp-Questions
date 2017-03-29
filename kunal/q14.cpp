#include <iostream>

using namespace std;
int size;

class arradd{
    protected:
    int i,a[100];
  public:
    void getdata()
    {
        for(i=0;i<size;i++)
        {
            cin>>a[i];
        }
    }
    arradd operator +(arradd o1)
    {
        arradd temp;
        for(i=0;i<size;i++)
        {
            temp.a[i]=o1.a[i]+a[i];
        }
        return temp;
    }
    void putdata()
    {
        for(i=0;i<size;i++)
        {
            cout<<a[i]<<" ";
        }
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

return 0;
}
