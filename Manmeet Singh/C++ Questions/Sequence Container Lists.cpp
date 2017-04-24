#include<iostream>
#include<list>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};

    list <int> l;
    list <int> l1(5);
    list <int> l2(a,a+5);
    list <int> l3(a,a+5);
    list <int> l4(l2);
    list <int>::iterator it= l2.begin();

    cout<<"On l2 push and pop\n";
    l2.push_back(6);
    l2.push_back(7);
    l2.push_front(9);
    l2.push_front(8);
    l2.size();
    for(it=l2.begin();it!=l2.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    l2.pop_back();
    l2.pop_front();
    for(it=l2.begin();it!=l2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    l2.size();

    if(l.empty()){
        cout<<"v is empty\n";
    }

    cout<<"On l3 to clear\n";

    for(it=l3.begin();it!=l3.end();it++)
        cout<<*it<<" ";
    cout<<endl;
     l3.clear();
    cout<<"l3 size "<< l3.size()<<endl;

    cout<<"on l2 erase\n";

   /* l2.erase(*(l2.begin()+2),*(l2.begin()+4));
    for(it=l2.begin();it!=l2.end();it++)
        cout<<*it<<" ";
    cout<<endl;*/
    cout<<"on l2 print first and last\n";
    cout<<l2.front()<<endl;
    cout<<l2.back()<<endl;
}
