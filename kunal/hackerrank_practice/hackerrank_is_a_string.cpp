#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int q,j=0;
    string test;
    test="hackerrank";
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        j=0;
       for(int i=0 ; i < s.length() ; i++)
       {
         if(s[i]==test[j])
         {
             j++;
         }
       }
       if(j==test.length())
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl ;
       }
    }
    return 0;
}
