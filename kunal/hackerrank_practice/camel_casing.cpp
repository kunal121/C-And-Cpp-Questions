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
    string s;
    int count=1;
    int i;
    cin >> s;
    if(s.length()==0)
    {
        count=0;
    }
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        count++;
    }
    cout<<count;
    return 0;
}

