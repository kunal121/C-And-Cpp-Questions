#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);
    cout<<"Size is : "<<v.size()<<endl;
    for(int i=0;i<5;i++)
            cin>>v[i];

    cout<<"First value is: "<<v.front()<<endl;
    cout<<"Last value is: "<<v.back()<<endl;

    v.erase(v.begin(),v.begin()+1);

    for(int i=0;i<5;i++)
                cout<<v[i]<<" ";
    cout<<endl;

    v.clear();

    if(v.empty())
    {
        cout<<"Empty Vector";
    }
    else
        cout<<"Vector is not empty";


}

