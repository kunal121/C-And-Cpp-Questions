#include <iostream>
#include<list>
#include<algorithm>
using namespace std;
int main() {
    int n;    //no. of elements
    list<int> l;
    list<int>::iterator t;
    cin>>n;
list<int>::iterator p;
list<int>::iterator it;
int i;
for(i=0;i<n;i++)
    {
    int num;
    cin>>num;
    l.push_back(num);
}
l.reverse();
list<int>l1;
for(it=l.begin();it!=l.end();it++)
    l1.push_back(*it);
l.reverse();
for(it=l.begin();it!=l.end();it++)
    l1.push_back(*it);
for(it=l1.begin();it!=l1.end();it++)
    cout<<*it<<" ";
cout<<endl;
//sort(l.begin(),l.end());
l.sort();
for(it=l.begin();it!=l.end();it++)
(*it)=(*it) * 2;
p=l.begin();
t=max_element(l.begin(),l.end());
if(*t==0){
    l.erase(l.begin(),l.end());
    cout<<"0";
}
else{
for(it=l.begin();it!=l.end();it++)
    cout<<*it<<" ";
}
cout<<endl;
cout<<*t <<endl;    //Max_element
cout<<*p;     //Min_element
return 0;
}
