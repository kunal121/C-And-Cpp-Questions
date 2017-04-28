#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> ar;
    vector <int>:: iterator it;
    int a,n;
    cin>>a;
    for(int i=0;i<a;i++)
        {
        cin >> n;
        ar.push_back(n);
    }
    sort(ar.begin(),ar.end());
    for(it=ar.begin();it!=ar.end();it++)
    cout<<*it<<" ";
    return 0;
}
