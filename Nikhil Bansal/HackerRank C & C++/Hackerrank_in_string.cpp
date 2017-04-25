#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    string hr = "hackerrank";
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int go = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == hr[go])
            {
                go++;
            }
        }
        if(go == hr.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
