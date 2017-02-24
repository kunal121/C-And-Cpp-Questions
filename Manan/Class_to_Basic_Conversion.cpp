#include<iostream>
using namespace std;
class Array
{
    int ab[10];
    public:
    Array(int *a)
    {
        for(int i=0;i<5;i++)
            ab[i]=a[i];
    }
    void display()
    {
        for(int i=0;i<5;i++)
        cout<<ab[i]<<"\n";
    }
    operator int()
    {
        int sum=0;
        for(int i=0;i<5;i++)
            sum+=ab[i];
        return sum;
    }
    operator float()
    {
        float avg=0;
        int i=0;
        for(i=0;i<10;i++)
            avg+=ab[i];
        avg=avg/i;
        return avg;
    }
};
int main()
{
    int a[10];
    for(int i=0;i<5;i++)
        cin>>a[i];
    Array arr(a);
    arr.display();
    int sum=arr;
    cout<<sum<<"\n";
    float avg=arr;
    cout<<avg;

}
