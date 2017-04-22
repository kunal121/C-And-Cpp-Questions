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
    string S;
    string D;
    D="SOS";
    cin >> S;
    int len,a,i,j=0;
    int count=0;
    len=S.length();
    a=len/3;
    for(i=0;i<len;i++)
    {
        for(j=0;j<D.length();j++)
        {
        if(S[i]==D[j])
        {
            i++;
        }
        else
        {
            count++;
            i++;
        }
       }
       i--;
    }

    cout<<count;
    return 0;
}
