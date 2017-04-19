#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> v(5);
    list<int>::iterator it = v.begin();
    for(it;it!=v.end();it++)
            cin>>*it;

    it = v.begin();
    v.insert(it,6);
    for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
    cout<<endl;

    it=v.begin();
    v.insert(it,100);
    for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
    cout<<endl;

    it=v.begin();
    it++;
    v.insert(it,2,-1);
    for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
    cout<<endl;

    v.push_back(6);
    for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
    cout<<endl;

    v.pop_back();
    for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
    cout<<endl;

}
