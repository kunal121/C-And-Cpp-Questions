#include<iostream>
using namespace std;
class Time
{
    int hrs,min;
    public: int get()
    {
        cin>>hrs;
        cin>>min;
    }
    operator int()
    {
        int temp;
        temp=60*hrs+min;
        return temp;
    }
};
main()
{
    int m;
    Time T1;
    T1.get();
    m=T1;
    cout<<m<<endl;
}
