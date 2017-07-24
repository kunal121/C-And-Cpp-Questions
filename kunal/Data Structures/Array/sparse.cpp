#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int n,q,count,i,j;
      cin>>n;
      string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>q;
    string s1[q];
    for(i=0;i<q;i++)
    {
        cin>>s1[i];
    }
    for(i=0;i<q;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(s1[i]==s[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
