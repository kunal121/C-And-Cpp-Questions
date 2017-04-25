#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    int i,j,g,k,co=0,flag;
    g=0;
    for(i=0;i<=m;i++)
        {
        if(g<b[i])
            g=b[i];
    }
    for(i=1;i<=g;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i%a[j]==0)
                flag=1;
            else {
                flag=0;
                break;
            }
        }
        for(k=0;k<m;k++)
            {
            if(b[k]%i==0 && flag == 1)
                {
                flag=1;
            }
            else
                flag=0;
        }
        if(flag==1){
            //cout<<i<<" ";
            co=co+1;
           // cout<<i<<" ";
        }
        flag=0;
    }
    cout<<co;
    return 0;
}