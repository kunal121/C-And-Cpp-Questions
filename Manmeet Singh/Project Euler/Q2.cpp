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
    int t;
    unsigned long long int sum=0,x,y,z;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        if (n == 0 || n==1)
        {
        cout<<"0";
        }
        else if (n == 2)
         {
        cout<<"2";
        }
        else
        {
                sum=2;
                x=1;
                y=2;
            for(long long int i=2;i<n;i++){
                z=x+y;
                if(z>n){
                    break;
                }
                if(z%2==0){
                    sum+=z;
                }
                x=y;
                y=z;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
