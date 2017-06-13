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
#include <iomanip>
using namespace std;


int main(){
    int t;
    unsigned long long sum, prevSum=0 , prevN=0;
    cin >> t;

     for(int i = 0; i < t; i++)
    {
         long int N,p;
    cin>>N;
    sum = 0;
    p = (N-1)/3;
    sum = ((3*p*(p+1))/2);

    p = (N-1)/5;
    sum = sum + ((5*p*(p+1))/2);

    p = (N-1)/15;
    sum = sum - ((15*p*(p+1))/2);
    cout<<std::setprecision(2)<<sum<<endl;
    }
    return 0;
}
