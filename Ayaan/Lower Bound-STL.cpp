#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> ar;
    vector<int> :: iterator it,num;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>temp;
        ar.push_back(temp);
    }
    int n1;
    cin>>n1;
    int arr[n1];
    for(int j=0;j<n1;j++){
        cin>>arr[j];
    }
    for(int j=0;j<n1;j++){
        num=lower_bound(ar.begin(),ar.end(),arr[j]);
            if(*num==arr[j]){
                cout<<"Yes "<<num-ar.begin()+1<<endl;
                //break;
            }
            else
                {
                cout<<"No "<<num-ar.begin()+1<<endl;
                //break;
            }
        }
    
    return 0;
}
