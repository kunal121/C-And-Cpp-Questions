#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};

    vector <int> v;
    vector <int> v1(5);
    vector <int> v2(a,a+5);
    vector <int> v3(a,a+5);
    vector <int> v4(v2);

    cout<<"On v2 push and pop\n";
    v2.push_back(6);
    v2.push_back(7);
    v2.size();
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;

    v2.pop_back();
    v2.pop_back();
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    v2.size();

    if(v.empty()){
        cout<<"v is empty\n";
    }

    cout<<"On v3 to clear\n";
    for(int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";
    cout<<endl;
     v3.clear();
    cout<<"v3 size "<< v3.size()<<endl;

    cout<<"on v2 erase\n";
    v2.erase(v2.begin()+2,v2.begin()+4);
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;

    cout<<"on v2 print first and last\n";
    cout<<v2.front()<<endl;
    cout<<v2.back()<<endl;
}
