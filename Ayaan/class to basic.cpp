#include<iostream>
using namespace std;
class time
{
    int hrs,min;
public:
    time(int a)
    {
        hrs=a/60;
        min=a%60;
    }
    void basicTOclass()
    {
        cout<<hrs<<":"<<min<<endl;
    }
    operator int();
};

time:: operator int()
{
    int temp;
    temp=60*hrs+min;
    return temp;
}
main()
{
    int m;
    cout<<"enter minutes"<<endl;
    cin>>m;
    time t1(m);
    t1.basicTOclass();
    m=t1;
    cout<<m<<endl;
}
