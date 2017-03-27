#include<iostream>
#include<string.h>
using namespace std;
int size;
class test
{

public:
    long int *arr;
    friend test operator +(test ,test);
    test()
    {
        arr = new long int[size+1];
    }
    void input()
    {
        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
            while(arr[i]>100)
                arr[i]-=100;
        }
    }
};
test operator+(test o,test o1)
{
    o.input();
    o1.input();
    test t;
    for(int i=0; i<size; i++)
    {
        t.arr[i] = o.arr[i] + o1.arr[i];
        if(t.arr[i]>100)
            t.arr[i]-=100;
        cout<<t.arr[i]<<endl;
    }
    return t;
}

int main()
{
    cin>>size;
    test a1,a2,a3;
    //cin>>a1;
    //cin>>a2;
    a3=a1+a2;
    //cout<<a3;
    return 0;
}
