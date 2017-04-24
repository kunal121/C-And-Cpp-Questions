#include<iostream>
#include<deque>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};

    deque <int> d;
    cout<<d.size()<<endl;

    deque <int> d1(5);
    cout<<d1.size()<<endl;

    deque <int> d2(5,100);
    cout<<d2.size()<<endl;

    deque <int> d3(a,a+5);
    cout<<d3.size()<<endl;

    deque <int> d4(d2);
    cout<<d4.size()<<endl;


}
