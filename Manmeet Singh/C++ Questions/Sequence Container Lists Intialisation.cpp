#include<iostream>
#include<list>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};

    list <int> l;
    cout<<l.size()<<endl;

    list <int> l1(5);
    cout<<l1.size()<<endl;

    list <int> l2(5,100);
    cout<<l2.size()<<endl;

    list <int> l3(a,a+5);
    cout<<l3.size()<<endl;

    list <int> l4(l2);
    cout<<l4.size()<<endl;


}
