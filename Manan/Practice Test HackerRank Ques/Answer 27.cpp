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
template <class t>
    float avg(t &n)
    {
    vector<float> v(12);
    float sum=0;
    for(int i=0;i<12;i++)
        {
        cin>>v[i];
        sum+=v[i];
    }
    return sum/12;
}
using namespace std;
int main() {
    int i;
    cin>>i;
    if(i==1){
        float avge = avg(i);
        cout<<avge;
    }
    else if(i==2){
        float average = avg(i);
        cout<<average;
    }
    return 0;
}
