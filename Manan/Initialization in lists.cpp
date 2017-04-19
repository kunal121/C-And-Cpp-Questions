#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> v(5);
    list<int>::iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++)
            cin>>*it;
    for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
    cout<<endl;
    //SECOND METHOD
    list<int> v1(5,100);
    list<int>::iterator it1=v1.begin();
    for(it1=v1.begin();it1!=v1.end();it1++)
            cout<<*it1<<" ";
    cout<<endl;

    //THIRD METHOD
    int a[]={1,2,3,4,5};
    list<int> v2(a,a+5);
    list<int>::iterator it2=v2.begin();
    for(it2=v2.begin();it2!=v2.end();it2++)
            cout<<*it2<<" ";
    cout<<endl;

    //FOURTH METHOD
    list<int> v3(v);
    list<int>::iterator it3=v3.begin();
    for(it3=v3.begin();it3!=v3.end();it3++)
            cout<<*it3<<" ";
    cout<<endl;

}
