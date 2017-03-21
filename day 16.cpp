#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string.h>
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
    int l;
        
    try
       {
       
        //if(l==1)
          //  cout<<S;
        //else 
          //  throw(S);
        l=stoi(S);
           cout << l;
    }
    catch(...)
        {
        cout<<"Bad String";
    }
    
    return 0;
}
