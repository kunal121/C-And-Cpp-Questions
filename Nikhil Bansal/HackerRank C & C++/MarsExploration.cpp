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
    cin >> S;
    string sos = "SOS";
    int count=0;
    int length = S.length();
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<sos.length();j++)  
        {
            if(S[i] == sos[j])
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
    cout << count;
    return 0;
}
