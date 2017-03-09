#include<iostream>
using namespace std;
int size;
class sample
{
public:
    long int *arr;
    sample();
    friend sample operator +(sample,sample);
};
sample::sample()
{
    arr=new long int[size];
    int i;
    cout<<"enter arr"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
sample operator +(sample a1,sample a2)
{
    sample temp;
    int  i;
    for(i=0;i<size;i++)
    {
        temp.arr[i]=a1.arr[i]+a2.arr[i];
        cout<<"\t"<<temp.arr[i]<<endl;
    }
    return temp;

}
int main()
{
    cout<<"enter size"<<endl;
    cin>>size;
    sample a1,a2,a3;
    a3=a1+a2;
    return 0;
}
