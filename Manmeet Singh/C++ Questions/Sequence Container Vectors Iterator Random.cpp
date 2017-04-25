#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    vector <int> v1(a,a+5);
    vector <int> v2(v1);
    vector <int>::iterator it=v2.begin();

    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    it=v2.begin();
    v2.insert(it+2,7);
    it=v2.begin();

    v2.insert(it+5,3,9);

    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it<<" ";



}
