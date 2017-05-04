#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);
    for(int i=0;i<5;i++)
            cin>>v[i];
    for(int i=0;i<5;i++)
            cout<<v[i]<<" ";
    cout<<endl;
    //SECOND METHOD
    vector<int> v1(5,100);
    for(int i=0;i<5;i++)
            cout<<v1[i]<<" ";
    cout<<endl;

    //THIRD METHOD
    int a[]={1,2,3,4,5};
    vector<int> v2(a,a+5);
    for(int i=0;i<5;i++)
            cout<<v2[i]<<" ";
    cout<<endl;

    //FOURTH METHOD
    vector<int> v3(v1);
    for(int i=0;i<5;i++)
            cout<<v1[i]<<" ";
    cout<<endl;

}
