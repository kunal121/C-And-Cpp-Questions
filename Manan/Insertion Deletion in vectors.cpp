#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(10);
    for(int i=0;i<5;i++)
            cin>>v[i];

    vector<int>::iterator it = v.begin();
    v.insert(it,6);
    for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    cout<<endl;

    it=v.begin();
    v.insert(it,100);
    for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    cout<<endl;

    it=v.begin();
    v.insert(it+2,2,-1);

    for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    cout<<endl;

    v.push_back(6);
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    cout<<endl;

    v.pop_back();
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    cout<<endl;

}
