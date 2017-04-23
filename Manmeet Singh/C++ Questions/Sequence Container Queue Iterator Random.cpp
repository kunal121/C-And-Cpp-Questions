#include<iostream>
#include<deque>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    deque <int> q1(a,a+5);
    deque <int> q2(q1);
    deque <int>::iterator it=q2.begin();

    for(it=q2.begin();it!=q2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    it=q2.begin();
    q2.insert(it+2,7);
    it=q2.begin();

    q2.insert(it+5,3,9);

    for(it=q2.begin();it!=q2.end();it++)
        cout<<*it<<" ";

}
