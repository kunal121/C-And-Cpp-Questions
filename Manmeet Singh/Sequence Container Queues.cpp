#include<iostream>
#include<deque>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};

    deque <int> d;
    deque <int> d1(5);
    deque <int> d2(a,a+5);
    deque <int> d3(a,a+5);
    deque <int> d4(d2);

    cout<<"On d2 push and pop\n";
    d2.push_back(6);
    d2.push_back(7);
    d2.size();
    for(int i=0;i<d2.size();i++)
        cout<<d2[i]<<" ";
    cout<<endl;

    d2.pop_back();
    d2.pop_back();
    for(int i=0;i<d2.size();i++)
        cout<<d2[i]<<" ";
    cout<<endl;
    d2.size();

    if(d.empty()){
        cout<<"d is empty\n";
    }

    cout<<"On d3 to clear\n";
    for(int i=0;i<d3.size();i++)
        cout<<d3[i]<<" ";
    cout<<endl;
     d3.clear();
    cout<<"d3 size "<< d3.size()<<endl;

    cout<<"on d2 erase\n";
    d2.erase(d2.begin()+2,d2.begin()+4);
    for(int i=0;i<d2.size();i++)
        cout<<d2[i]<<" ";
    cout<<endl;

    cout<<"on d2 print first and last\n";
    cout<<d2.front()<<endl;
    cout<<d2.back()<<endl;
}
