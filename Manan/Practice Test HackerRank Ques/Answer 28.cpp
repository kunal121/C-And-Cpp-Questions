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
int main() {
    map<string,int> mymap;
    string s;
    int p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>s;
        cin>>p;
        mymap[s]=p;
    }
    map<string,int>::iterator it;
    cin>>s;
    it=mymap.find(s);
    if(it->second > 5000){
        cout<<it->second<<endl<<"above";
    }
    else if(it->second == 5000){
        cout<<it->second<<endl<<"equal";
    }
    else{
        cout<<it->second<<endl<<"below";
    }
    return 0;
}
