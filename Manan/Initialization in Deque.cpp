#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> v(5);
    deque<int>::iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++)
            cin>>*it;
    for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
    cout<<endl;
    //SECOND METHOD
    deque<int> v1(5,100);
    deque<int>::iterator it1=v1.begin();
    for(it1=v1.begin();it1!=v1.end();it1++)
            cout<<*it1<<" ";
    cout<<endl;

    //THIRD METHOD
    int a[]={1,2,3,4,5};
    deque<int> v2(a,a+5);
    deque<int>::iterator it2=v2.begin();
    for(it2=v2.begin();it2!=v2.end();it2++)
            cout<<*it2<<" ";
    cout<<endl;

    //FOURTH METHOD
    deque<int> v3(v);
    deque<int>::iterator it3=v3.begin();
    for(it3=v3.begin();it3!=v3.end();it3++)
            cout<<*it3<<" ";
    cout<<endl;

}

