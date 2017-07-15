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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<long int>s;
    int tc,cost,pack,n;
    cin>>tc;
    while(tc)
        {
        cin>>n;
        if(n==1)
            {
            if(s.size()==0)
                cout<<"No Food"<<endl;
            else{
                cout<<s.top()<<endl;
                s.pop();
            }
        }
        if(n==2){
            cin>>cost;
            s.push(cost);
        }
        tc--;
    }

    return 0;
}
