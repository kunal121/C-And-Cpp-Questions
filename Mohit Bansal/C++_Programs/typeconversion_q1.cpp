#include<iostream>
using namespace std;
class array
{
    int b[10],n1;
public:
    array(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
            b[i]=a[i];
        n1=n;
    }
    void dis()
    {
        int i;
        for(i=0;i<n1;i++)
            cout<<b[i]<<"\n";
    }
    operator int()
    {
        int i,total=0;
        for(i=0;i<n1;i++)
            total+=b[i];
        return total;
    }
    operator float()
    {
        float av;
        int i;
        for(i=0;i<n1;i++)
        {
            av+=b[i];
        }
        av/=n1;
        return av;
    }
};
int main()
{
    int a[10];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    array arr(a,n);
    arr.dis();
    int sum=arr;
    cout<<sum<<"\n";
    float avg=arr;
    cout<<avg<<"\n";
}
