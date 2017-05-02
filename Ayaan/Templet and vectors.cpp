#include <iostream>
#include<vector>
using namespace std;
#include<algorithm>
template <class T>
void func(vector<T> &v)
{   
    int a=v.size();
    int i;
    sort(v.begin(),v.end());
   // vector <T> :: iterator itr;
    for(i=0;i<a;i++)
        {
        cout<<v[i]+1<<" ";
    }
    cout<<endl;
    for(i=0;i<a;i++)
        {
        cout<<v[i]*3<<" ";
    }
    cout<<endl;
}

int main() {
    int N;
    cin>>N;
    vector<int>v;
    for(int i=0;i<N;i++)
        {
        int x;
        cin>>x;
        v.push_back(x);
    }
    func<int>(v);
    vector<double>v1;
    for(int i=0;i<N;i++)
        {
        double x;
        cin>>x;
        v1.push_back(x);
    }
    func<double>(v1);
    return 0;
}
