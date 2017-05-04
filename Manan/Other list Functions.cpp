#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> v(5);
    list<int>::iterator it = v.begin();
    cout<<"Size is : "<<v.size()<<endl;
    for(it;it!=v.end();it++)
            cin>>*it;

    cout<<"First value is: "<<v.front()<<endl;
    cout<<"Last value is: "<<v.back()<<endl;

    it=v.begin();
    v.erase(it);

    for(it=v.begin();it!=v.end();it++)
            cout<<*it;
    cout<<endl;

    v.clear();

    if(v.empty())
    {
        cout<<"Empty Vector";
    }
    else
        cout<<"Vector is not empty";


}

