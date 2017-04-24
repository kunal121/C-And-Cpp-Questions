#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};

    vector <int> v;
    cout<<v.size()<<endl;

    vector <int> v1(5);
    cout<<v1.size()<<endl;

    vector <int> v2(5,100);
    cout<<v2.size()<<endl;

    vector <int> v3(a,a+5);
    cout<<v3.size()<<endl;

    vector <int> v4(v2);
    cout<<v4.size()<<endl;


}
