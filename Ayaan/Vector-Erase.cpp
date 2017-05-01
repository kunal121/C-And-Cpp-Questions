#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> ar;
    vector<int> ::iterator it;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++)
        {
        cin>>temp;
        ar.push_back(temp);
    }
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    a1--;a2--;a3--;
    ar.erase(ar.begin()+a1);
    ar.erase(ar.begin()+a2,ar.begin()+a3);
    cout<<ar.size()<<endl;
    for(it=ar.begin();it!=ar.end();it++)
        {
        cout<<*it<<" ";
    }
    return 0;
}
