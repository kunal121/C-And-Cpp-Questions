#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    int l= s.size();
    //cout<<l;
    int sm,g,co_sm=0,co_g=0;
    sm= s[0];
    g=s[0];
    for(int i=1;i<l;i++)
        {
            if(sm>s[i])
            {
            sm=s[i];
            co_sm=co_sm+1;
        }
            if(g<s[i])
                {
                g=s[i];
                co_g=co_g+1;
            }
    }
    vector <int> res(2);
    res[0]=co_g;
    res[1]=co_sm;
    //cout<<res[0]<<" "<<res[1];
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    /*string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }*/
    cout<<result[0]<<" "<<result[1];
    cout<<endl;
    return 0;
}
