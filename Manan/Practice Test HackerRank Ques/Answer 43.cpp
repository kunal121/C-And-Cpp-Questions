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
    set<string> s;
    string n;
    for(int i=0;i<11;i++)
        {
        cin>>n;
        s.insert(n);
    }
    std::set<string>::iterator it;

    cin>>n;
    int t=s.count(n);
    if(t!=0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
